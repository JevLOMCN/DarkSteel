// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 1467cdca0

UClass * __cdecl UMovieSceneQuaternionBlenderSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneQuaternionBlenderSystem",
               &Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneQuaternionBlenderSystem,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneQuaternionBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneQuaternionBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.InnerSingleton;
}

// UMovieSceneQuaternionBlenderSystem @ 14680b740

UMovieSceneQuaternionBlenderSystem * __thiscall
UMovieSceneQuaternionBlenderSystem::UMovieSceneQuaternionBlenderSystem
          (UMovieSceneQuaternionBlenderSystem *this,FVTableHelper *param_1)

{
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneBlenderSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneValueDecomposer__;
  *(undefined8 *)&(this->Buffers).AbsoluteWeights = 0;
  *(undefined8 *)&(this->Buffers).AbsoluteWeights.field_0x8 = 0;
  *(undefined8 *)&(this->Buffers).AbsoluteWeights.field_0x20 = 0;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x28 = 0;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x2c = 0x80;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x34 = 0;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x30 = 0xffffffff;
  (this->Buffers).Absolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Absolutes.ArrayNum = 0;
  (this->Buffers).Absolutes.ArrayMax = 0;
  (this->Buffers).Additives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Additives.ArrayNum = 0;
  (this->Buffers).Additives.ArrayMax = 0;
  return this;
}

// UMovieSceneQuaternionBlenderSystem @ 14680b7d0

UMovieSceneQuaternionBlenderSystem * __thiscall
UMovieSceneQuaternionBlenderSystem::UMovieSceneQuaternionBlenderSystem
          (UMovieSceneQuaternionBlenderSystem *this,FObjectInitializer *param_1)

{
  UObject *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneBlenderSystem::UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneBlenderSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneValueDecomposer__;
  *(undefined8 *)&(this->Buffers).AbsoluteWeights = 0;
  *(undefined8 *)&(this->Buffers).AbsoluteWeights.field_0x8 = 0;
  *(undefined8 *)&(this->Buffers).AbsoluteWeights.field_0x20 = 0;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x28 = 0;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x2c = 0x80;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Buffers).AbsoluteWeights.field_0x34 = 0;
  (this->Buffers).Absolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Absolutes.ArrayNum = 0;
  (this->Buffers).Absolutes.ArrayMax = 0;
  (this->Buffers).Additives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Additives.ArrayNum = 0;
  (this->Buffers).Additives.ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 1000;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieSceneQuaternionBlenderSystem @ 14680fca0

void __thiscall
UMovieSceneQuaternionBlenderSystem::~UMovieSceneQuaternionBlenderSystem
          (UMovieSceneQuaternionBlenderSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneBlenderSystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneValueDecomposer__;
  pFVar1 = (this->Buffers).Additives.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Buffers).Absolutes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSparseArray<double,FDefaultSparseArrayAllocator>::
  ~TSparseArray<double,FDefaultSparseArrayAllocator>(&(this->Buffers).AbsoluteWeights);
  this->_padding_ = (longlong)&___7IMovieSceneValueDecomposer__6B_;
  UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem((UMovieSceneBlenderSystem *)this);
  return;
}

// DispatchDecomposeTask @ 1468277a0

TRefCountPtr<FBaseGraphTask> __thiscall
UMovieSceneQuaternionBlenderSystem::DispatchDecomposeTask
          (UMovieSceneQuaternionBlenderSystem *this,FValueDecompositionParams *param_1,
          FAlignedDecomposedValue *param_2)

{
  (param_1->Query).Entities.DataPtr = (FMovieSceneEntityID *)0x0;
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// GetPrivateStaticClass @ 146836c60

UClass * __cdecl UMovieSceneQuaternionBlenderSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneQuaternionBlenderSystem",
               &Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneQuaternionBlenderSystem,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneQuaternionBlenderSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneQuaternionBlenderSystem>,local_res8,
               UMovieSceneBlenderSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.InnerSingleton;
}

// OnRun @ 14684aa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneQuaternionBlenderSystem::OnRun
          (UMovieSceneQuaternionBlenderSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FQuaternionBlenderAccumulationBuffers *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  FScriptContainerElement *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar7;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar8;
  undefined1 auStackY_2e8 [32];
  FComponentTypeID local_2a8;
  FComponentTypeID local_2a6;
  undefined4 local_2a4;
  FComponentTypeID local_2a0 [4];
  undefined1 local_298 [16];
  FComponentTypeID local_288;
  FComponentTypeID local_286 [3];
  TComponentTypeID<FMovieSceneBlendChannelID> local_280;
  TComponentTypeID<double> TStack_27e;
  TComponentTypeID<double> TStack_27c;
  TComponentTypeID<double> TStack_27a;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulonglong uStack_268;
  TStatIdData *pTStack_260;
  ulonglong local_258;
  uchar auStack_250 [16];
  undefined8 local_240;
  TStatIdData *pTStack_238;
  byte local_230;
  undefined7 uStack_22f;
  undefined4 uStack_228;
  uint uStack_224;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> local_1f8;
  int local_1b0;
  int local_1ac;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_1a8;
  int local_180;
  int local_17c;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  TStatIdData *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  ForAnyElementType local_d0;
  TTypeCompatibleBytes<unsigned_int> local_c8;
  TTypeCompatibleBytes<unsigned_int> local_c4 [9];
  TTypeCompatibleBytes<unsigned_int> local_a0;
  TTypeCompatibleBytes<unsigned_int> local_9c;
  TTypeCompatibleBytes<unsigned_int> local_68;
  TTypeCompatibleBytes<unsigned_int> local_64;
  ForAnyElementType local_48;
  
  local_48.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_2e8);
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_208._First = (FComponentTypeID *)UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar1 = &this->Buffers;
  TArray<UE::MovieScene::FQuatTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->Buffers).Absolutes,(int)this->_padding_,Default);
  TArray<UE::MovieScene::FQuatTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->Buffers).Additives,(int)this->_padding_,Default);
  FVar7 = (param_1->Prereqs).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->Prereqs).ArrayNum;
  local_1f8.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  FVar8 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)param_1;
  if (FVar7 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar8 = FVar7;
  }
  local_1b0 = iVar3;
  if (iVar3 == 0) {
    local_1ac = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
              (0x10,8,iVar3,0,&local_1f8,iVar3,&local_1ac);
    FVar7 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_1f8;
    if (local_1f8.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar7 = local_1f8.SecondaryData;
    }
    ConstructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((void *)FVar7,(FPrerequisite *)FVar8,iVar3);
  }
  FVar6 = (param_1->AllTasks).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->AllTasks).ArrayNum;
  local_1a8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  if (FVar6 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&param_1->AllTasks;
  }
  local_180 = iVar3;
  if (iVar3 == 0) {
    local_17c = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,iVar3,0,&local_1a8,iVar3,&local_17c);
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_1a8;
    if (local_1a8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar5 = local_1a8.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar5,(TRefCountPtr<FBaseGraphTask> *)FVar6,iVar3);
  }
  local_2a4 = CONCAT22(0x7fff,pFVar4->WeightAndEasingResult);
  local_280 = pFVar4->BlendChannelInput;
  TStack_27e = pFVar4->DoubleResult[0];
  TStack_27c = pFVar4->DoubleResult[1];
  TStack_27a = pFVar4->DoubleResult[2];
  uStack_278._0_2_ = pFVar4->DoubleResult[3];
  uStack_278._2_2_ = pFVar4->DoubleResult[4];
  uStack_278._4_2_ = pFVar4->DoubleResult[5];
  uStack_278._6_2_ = pFVar4->DoubleResult[6];
  uStack_270._4_4_ = local_2a4;
  uStack_270._0_2_ = pFVar4->DoubleResult[7];
  uStack_270._2_2_ = pFVar4->DoubleResult[8];
  local_2a4._0_2_ = (pFVar4->Tags).AdditiveBlend;
  local_2a4._2_2_ = (pFVar4->Tags).AdditiveFromBaseBlend;
  local_240._0_4_ = 0;
  local_240._4_4_ = 0;
  pTStack_238 = &TStatId::TStatId_NAME_None;
  uStack_228 = 0x6ff;
  uStack_224 = uStack_224 & 0xffffff00;
  local_258 = CONCAT71(uStack_22f,local_230) & 0xffffffffffffffe0;
  auStack_250[4] = (undefined1)uStack_224;
  auStack_250[5] = uStack_224._1_1_;
  auStack_250[6] = uStack_224._2_1_;
  auStack_250[7] = uStack_224._3_1_;
  auStack_250[0] = 0xff;
  auStack_250[1] = '\x06';
  auStack_250[2] = '\0';
  auStack_250[3] = '\0';
  uStack_268 = 0;
  pTStack_260 = &TStatId::TStatId_NAME_None;
  local_230 = local_230 & 0xe0;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_178,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)&local_280);
  if (local_c8.Pad == local_c4[0].Pad) {
    local_c8.Pad = (uchar  [4])
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x43c,&local_d0,(int *)local_c4);
  }
  local_298._0_8_ = &local_2a4;
  this_01 = local_d0.Data + (longlong)(int)local_c8.Pad * 0x3c;
  local_298._8_8_ = local_2a0;
  *(int *)(this_01 + 0x30) = 0;
  *(int *)(this_01 + 0x34) = 0x180;
  this_01[0x38] = (FScriptContainerElement)0x2;
  local_c8.Pad = local_c8.Pad + 1;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)this_01,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_288.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_298._0_8_ = &local_288;
  local_298._8_8_ = local_286;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)(local_150.AllMask.Bits.AllocatorInstance.InlineData + 4),
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_2a8.Value = (pFVar4->Tags).Ignored.Value;
  local_298._0_8_ = &local_2a8;
  local_298._8_8_ = &local_2a6;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)(local_150.NoneMask.Bits.AllocatorInstance.InlineData + 4),
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_298._0_8_ = pFVar1;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_178,(FEntityManager *)local_210,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FQuaternionBlenderAccumulationBuffers **)0x0);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  local_280 = pFVar4->BlendChannelInput;
  TStack_27e = pFVar4->WeightAndEasingResult;
  local_240._0_4_ = 0;
  local_240._4_4_ = 0;
  pTStack_238 = &TStatId::TStatId_NAME_None;
  uStack_228 = 0x6ff;
  uStack_224 = uStack_224 & 0xffffff00;
  uStack_268 = CONCAT71(uStack_22f,local_230) & 0xffffffffffffffe0;
  pTStack_260._4_4_ = uStack_224;
  pTStack_260._0_4_ = 0x6ff;
  local_2a4 = CONCAT22(*(undefined2 *)((longlong)&this->_padding_ + 6),
                       (pFVar4->Tags).AbsoluteBlend.Value);
  uStack_278 = 0;
  uStack_270 = &TStatId::TStatId_NAME_None;
  local_150.AllMask.Bits.NumBits._0_1_ = '\0';
  local_150.AllMask.Bits.NumBits._1_1_ = '\0';
  local_150.AllMask.Bits.NumBits._2_1_ = '\0';
  local_150.AllMask.Bits.NumBits._3_1_ = '\0';
  local_178._2_2_ = TStack_27e;
  local_178._0_2_ = local_280;
  local_178._4_2_ = TStack_27c;
  local_178._6_2_ = TStack_27a;
  local_150.AllMask.Bits.MaxBits._0_1_ = 0x80;
  local_150.AllMask.Bits.MaxBits._1_1_ = '\x01';
  local_150.AllMask.Bits.MaxBits._2_1_ = '\0';
  local_150.AllMask.Bits.MaxBits._3_1_ = '\0';
  local_150.NoneMask.Bits.NumBits._0_1_ = '\0';
  local_150.NoneMask.Bits.NumBits._1_1_ = '\0';
  local_150.NoneMask.Bits.NumBits._2_1_ = '\0';
  local_150.NoneMask.Bits.NumBits._3_1_ = '\0';
  local_150.NoneMask.Bits.MaxBits._0_1_ = 0x80;
  local_150.NoneMask.Bits.MaxBits._1_1_ = '\x01';
  local_150.NoneMask.Bits.MaxBits._2_1_ = '\0';
  local_150.NoneMask.Bits.MaxBits._3_1_ = '\0';
  uStack_170 = 0;
  local_168 = &TStatId::TStatId_NAME_None;
  local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ComplexMasks.ArrayNum = 0;
  local_150.ComplexMasks.ArrayMax = 0;
  local_a0.Pad[0] = '\0';
  local_a0.Pad[1] = '\0';
  local_a0.Pad[2] = '\0';
  local_a0.Pad[3] = '\0';
  local_9c.Pad[0] = 0x80;
  local_9c.Pad[1] = '\x01';
  local_9c.Pad[2] = '\0';
  local_9c.Pad[3] = '\0';
  local_68.Pad[0] = '\0';
  local_68.Pad[1] = '\0';
  local_68.Pad[2] = '\0';
  local_68.Pad[3] = '\0';
  local_64.Pad[0] = 0x80;
  local_64.Pad[1] = '\x01';
  local_64.Pad[2] = '\0';
  local_64.Pad[3] = '\0';
  local_230 = local_230 & 0xe0;
  uStack_160 = uStack_268;
  local_158 = pTStack_260;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_178,&local_150);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_178 + 2),&local_150);
  local_298._0_8_ = &local_2a4;
  local_298._8_8_ = local_2a0;
  UE::MovieScene::FComponentMask::SetAll
            (&local_150.AllMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_2a8.Value = (pFVar4->Tags).Ignored.Value;
  local_298._0_8_ = &local_2a8;
  local_298._8_8_ = &local_2a6;
  UE::MovieScene::FComponentMask::SetAll
            (&local_150.NoneMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_298._0_8_ = pFVar1;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
              *)local_178,(FEntityManager *)local_218,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FQuaternionBlenderAccumulationBuffers **)0x0);
  if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_218 != (undefined1  [8])0x0) {
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (param_1,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_218);
  }
  pTStack_238 = &TStatId::TStatId_NAME_None;
  local_2a4 = CONCAT22(0x7fff,pFVar4->WeightAndEasingResult);
  local_280 = pFVar4->BlendChannelInput;
  TStack_27e = pFVar4->DoubleResult[0];
  TStack_27c = pFVar4->DoubleResult[1];
  TStack_27a = pFVar4->DoubleResult[2];
  uStack_278._0_2_ = pFVar4->DoubleResult[3];
  uStack_278._2_2_ = pFVar4->DoubleResult[4];
  uStack_278._4_2_ = pFVar4->DoubleResult[5];
  uStack_278._6_2_ = pFVar4->DoubleResult[6];
  uStack_270._4_4_ = local_2a4;
  uStack_270._0_2_ = pFVar4->DoubleResult[7];
  uStack_270._2_2_ = pFVar4->DoubleResult[8];
  local_240._0_4_ = 0;
  local_240._4_4_ = 0;
  uStack_228 = 0x6ff;
  uStack_224 = uStack_224 & 0xffffff00;
  local_258 = CONCAT71(uStack_22f,local_230) & 0xffffffffffffffe0;
  auStack_250[4] = (undefined1)uStack_224;
  auStack_250[5] = uStack_224._1_1_;
  auStack_250[6] = uStack_224._2_1_;
  auStack_250[7] = uStack_224._3_1_;
  auStack_250[0] = 0xff;
  auStack_250[1] = '\x06';
  auStack_250[2] = '\0';
  auStack_250[3] = '\0';
  local_2a4 = CONCAT22(*(undefined2 *)((longlong)&this->_padding_ + 6),
                       (pFVar4->Tags).AbsoluteBlend.Value);
  uStack_268 = 0;
  pTStack_260 = &TStatId::TStatId_NAME_None;
  local_230 = local_230 & 0xe0;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_178,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)&local_280);
  local_298._0_8_ = &local_2a4;
  local_298._8_8_ = local_2a0;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)(local_150.AllMask.Bits.AllocatorInstance.InlineData + 4),
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_2a8.Value = (pFVar4->Tags).Ignored.Value;
  local_298._0_8_ = &local_2a8;
  local_298._8_8_ = &local_2a6;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)(local_150.NoneMask.Bits.AllocatorInstance.InlineData + 4),
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_298);
  local_298._0_8_ = pFVar1;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_178,(FEntityManager *)local_220,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FQuaternionBlenderAccumulationBuffers **)0x0);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_220 != (undefined1  [8])0x0) {
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (param_1,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_220);
  }
  if (local_210 != (undefined1  [8])0x0) {
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (param_1,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_210);
  }
  pTStack_238 = &TStatId::TStatId_NAME_None;
  local_240._0_4_ = 0;
  local_240._4_4_ = 0;
  local_2a4 = CONCAT22(0x7fff,((TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                                *)((longlong)local_208._First + 0x168))->InitialValue);
  local_280 = pFVar4->BlendChannelOutput;
  TStack_27e = pFVar4->DoubleResult[0];
  TStack_27c = pFVar4->DoubleResult[1];
  TStack_27a = pFVar4->DoubleResult[2];
  uStack_278._0_2_ = pFVar4->DoubleResult[3];
  uStack_278._2_2_ = pFVar4->DoubleResult[4];
  uStack_278._4_2_ = pFVar4->DoubleResult[5];
  uStack_278._6_2_ = pFVar4->DoubleResult[6];
  uStack_270._4_4_ = local_2a4;
  uStack_270._0_2_ = pFVar4->DoubleResult[7];
  uStack_270._2_2_ = pFVar4->DoubleResult[8];
  local_2a8.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_208._First = &local_2a8;
  local_208._Last = &local_2a6;
  uStack_228 = 0x6ff;
  uStack_224 = uStack_224 & 0xffffff00;
  local_258 = CONCAT71(uStack_22f,local_230) & 0xffffffffffffffe0;
  auStack_250[4] = (undefined1)uStack_224;
  auStack_250[5] = uStack_224._1_1_;
  auStack_250[6] = uStack_224._2_1_;
  auStack_250[7] = uStack_224._3_1_;
  auStack_250[0] = 0xff;
  auStack_250[1] = '\x06';
  auStack_250[2] = '\0';
  auStack_250[3] = '\0';
  uStack_268 = 0;
  pTStack_260 = &TStatId::TStatId_NAME_None;
  local_230 = local_230 & 0xe0;
  this_00 = UE::MovieScene::
            TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
            ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                         *)&local_280,
                        (TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                         *)local_178,&local_208);
  local_208._First = (FComponentTypeID *)pFVar1;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FCombineTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            (this_00,(FEntityManager *)local_298,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FQuaternionBlenderAccumulationBuffers **)param_2);
  if ((FQuaternionBlenderAccumulationBuffers *)local_298._0_8_ !=
      (FQuaternionBlenderAccumulationBuffers *)0x0) {
    LOCK();
    puVar2 = &((TSparseArray<double,FDefaultSparseArrayAllocator> *)local_298._0_8_)->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)
                  (TSparseArray<double,FDefaultSparseArrayAllocator> *)local_298._0_8_)
                (local_298._0_8_,1);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_220 != (undefined1  [8])0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)local_220 + 0x30);
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_220 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_220)(local_220,1);
    }
  }
  if (local_218 != (undefined1  [8])0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)local_218 + 0x30);
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_218 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_218)(local_218,1);
    }
  }
  if (local_210 != (undefined1  [8])0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)local_210 + 0x30);
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_210 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_210)(local_210,1);
    }
  }
  FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_1a8;
  if (local_1a8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar6 = local_1a8.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar6,local_180);
  if (local_1a8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_1a8.SecondaryData);
  }
  FVar7 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_1f8;
  if (local_1f8.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar7 = local_1f8.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar7,local_1b0);
  if (local_1f8.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_1f8.SecondaryData);
  }
  return;
}

// OnSchedulePersistentTasks @ 14684f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneQuaternionBlenderSystem::OnSchedulePersistentTasks
          (UMovieSceneQuaternionBlenderSystem *this,IEntitySystemScheduler *param_1)

{
  FQuaternionBlenderAccumulationBuffers *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  *this_00;
  FScriptContainerElement *this_01;
  undefined1 auStackY_878 [32];
  FComponentTypeID local_838;
  FComponentTypeID local_836;
  FComponentTypeID local_834;
  FScriptContainerElement local_832 [2];
  FComponentTypeID local_830;
  FComponentTypeID local_82e;
  FComponentTypeID local_82c;
  FComponentTypeID local_82a;
  FComponentTypeID local_828;
  FComponentTypeID local_826;
  FComponentTypeID local_824;
  ushort local_822;
  FComponentTypeID local_820;
  undefined2 local_81e;
  FComponentTypeID local_81c;
  undefined2 local_81a;
  FComponentTypeID local_818;
  undefined2 uStack_816;
  FTaskID local_814;
  TComponentTypeID<double> local_810;
  undefined2 uStack_80e;
  undefined4 local_80c;
  FTaskID local_808;
  FTaskID local_804;
  FTaskID local_800;
  FTaskID local_7fc;
  FQuaternionBlenderAccumulationBuffers *local_7f8;
  FQuaternionBlenderAccumulationBuffers *local_7f0;
  FQuaternionBlenderAccumulationBuffers *local_7e8;
  FMovieSceneTracksComponentTypes *local_7e0;
  FQuaternionBlenderAccumulationBuffers *local_7d8;
  undefined1 local_7d0 [16];
  TComponentTypeID<FMovieSceneBlendChannelID> local_7c0;
  TComponentTypeID<double> local_7be;
  TComponentTypeID<double> local_7bc;
  TComponentTypeID<double> local_7ba;
  TComponentTypeID<double> local_7b8;
  TComponentTypeID<double> local_7b6;
  TComponentTypeID<double> local_7b4;
  TComponentTypeID<double> local_7b2;
  TComponentTypeID<double> local_7b0;
  TComponentTypeID<double> local_7ae;
  int local_7ac;
  undefined1 local_7a8 [16];
  ulonglong local_798;
  undefined8 uStack_790;
  TComponentTypeID<FMovieSceneBlendChannelID> local_788;
  TComponentTypeID<double> local_786;
  TComponentTypeID<double> local_784;
  TComponentTypeID<double> local_782;
  TComponentTypeID<double> local_780;
  TComponentTypeID<double> local_77e;
  TComponentTypeID<double> local_77c;
  TComponentTypeID<double> local_77a;
  TComponentTypeID<double> local_778;
  TComponentTypeID<double> local_776;
  undefined4 local_774;
  undefined1 local_770 [16];
  ulonglong local_760;
  undefined8 uStack_758;
  TComponentTypeID<FMovieSceneBlendChannelID> local_750;
  TComponentTypeID<double> local_74e;
  TComponentTypeID<double> local_74c;
  TComponentTypeID<double> local_74a;
  TComponentTypeID<double> local_748;
  TComponentTypeID<double> local_746;
  TComponentTypeID<double> local_744;
  TComponentTypeID<double> local_742;
  TComponentTypeID<double> local_740;
  TComponentTypeID<double> local_73e;
  undefined4 local_73c;
  undefined1 local_738 [16];
  ulonglong local_728;
  undefined8 uStack_720;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_718;
  ulonglong local_708;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_700;
  ulonglong local_6f0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_6e8;
  byte local_6d8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_6d0;
  ulonglong local_6c0;
  undefined1 local_6b8 [16];
  ulonglong local_6a8;
  undefined8 local_698;
  TStatIdData *pTStack_690;
  byte local_688;
  undefined7 uStack_687;
  undefined4 uStack_680;
  uint uStack_67c;
  undefined8 local_670;
  TStatIdData *pTStack_668;
  byte local_660;
  TTypeCompatibleBytes<unsigned_int> TStack_65f;
  TTypeCompatibleBytes<unsigned_int> TStack_658;
  TTypeCompatibleBytes<unsigned_int> TStack_654;
  undefined8 local_648;
  TStatIdData *pTStack_640;
  byte local_638;
  TTypeCompatibleBytes<unsigned_int> TStack_637;
  TTypeCompatibleBytes<unsigned_int> TStack_630;
  TTypeCompatibleBytes<unsigned_int> TStack_62c;
  undefined8 local_620;
  TStatIdData *pTStack_618;
  byte local_610;
  TTypeCompatibleBytes<unsigned_int> TStack_60f;
  TTypeCompatibleBytes<unsigned_int> TStack_608;
  TTypeCompatibleBytes<unsigned_int> TStack_604;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5e8;
  FQuaternionBlenderAccumulationBuffers *local_5d8;
  uchar local_5d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5c8;
  FQuaternionBlenderAccumulationBuffers *local_5b8;
  undefined1 local_5b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_598;
  initializer_list<UE::MovieScene::FComponentTypeID> local_588;
  FQuaternionBlenderAccumulationBuffers *local_578;
  bool local_570;
  initializer_list<UE::MovieScene::FComponentTypeID> local_568;
  FQuaternionBlenderAccumulationBuffers *local_558;
  undefined1 local_550;
  initializer_list<UE::MovieScene::FComponentTypeID> local_548;
  code *local_538;
  undefined1 local_530;
  TComponentTypeID<FMovieSceneBlendChannelID> local_528;
  TComponentTypeID<double> TStack_526;
  undefined4 uStack_524;
  undefined8 uStack_520;
  TStatIdData *pTStack_518;
  ulonglong uStack_510;
  undefined8 uStack_508;
  undefined1 local_4f8 [8];
  undefined8 uStack_4f0;
  TStatIdData *local_4e8;
  ulonglong uStack_4e0;
  undefined8 local_4d8;
  FEntityComponentFilter local_4d0;
  int local_420;
  int local_41c;
  int local_3e8;
  int local_3e4;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  local_3d8;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  local_2a8;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_878;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_7e0 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar1 = &this->Buffers;
  TArray<UE::MovieScene::FQuatTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->Buffers).Absolutes,(int)this->_padding_,Default);
  TArray<UE::MovieScene::FQuatTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->Buffers).Additives,(int)this->_padding_,Default);
  local_6d8 = local_6d8 & 0xe0;
  local_6e8.Object = (ITaskContext *)0x15133e330;
  local_530 = 0;
  local_6e8.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
  local_538 = UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FResetBuffers>::Execute;
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_7d0._0_8_ = ___xmm_00000000000000000000000000000010;
    local_7d0._8_8_ = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TAnonTaskWrapper_UFResetBuffers_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TAnonTaskWrapper_UFResetBuffers_MovieScene_UE___MovieScene_UE__6B_;
    *(FQuaternionBlenderAccumulationBuffers **)&pTVar5[1].SharedReferenceCount = pFVar1;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_7d0._0_8_ = pTVar5 + 1;
    local_7d0._8_8_ = pTVar5;
  }
  UE::MovieScene::IEntitySystemScheduler::AddTask
            (param_1,(FTaskParams *)&local_814,&local_6e8,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_7d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_742 = pFVar4->DoubleResult[6];
  uStack_816 = 0x7fff;
  local_818.Value = (ushort)pFVar4->WeightAndEasingResult;
  local_750 = pFVar4->BlendChannelInput;
  local_74e = pFVar4->DoubleResult[0];
  local_74c = pFVar4->DoubleResult[1];
  local_74a = pFVar4->DoubleResult[2];
  local_748 = pFVar4->DoubleResult[3];
  local_746 = pFVar4->DoubleResult[4];
  local_744 = pFVar4->DoubleResult[5];
  local_740 = pFVar4->DoubleResult[7];
  local_73e = pFVar4->DoubleResult[8];
  local_73c = _local_818;
  local_824.Value = (pFVar4->Tags).AdditiveBlend.Value;
  local_822 = (pFVar4->Tags).AdditiveFromBaseBlend.Value;
  local_698 = 0;
  pTStack_690 = &TStatId::TStatId_NAME_None;
  uStack_680 = 0x6ff;
  uStack_67c = uStack_67c & 0xffffff00;
  local_728 = CONCAT71(uStack_687,local_688) & 0xffffffffffffffe0;
  uStack_720._4_4_ = uStack_67c;
  uStack_720._0_4_ = 0x6ff;
  local_738._0_8_ = 0;
  local_738._8_8_ = &TStatId::TStatId_NAME_None;
  local_688 = local_688 & 0xe0;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            (&local_3d8,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)&local_750);
  if (local_3d8.Filter.ComplexMasks.ArrayNum == local_3d8.Filter.ComplexMasks.ArrayMax) {
    local_3d8.Filter.ComplexMasks.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x43c,&local_3d8.Filter.ComplexMasks.AllocatorInstance,
                    &local_3d8.Filter.ComplexMasks.ArrayMax);
  }
  local_548._First = &local_824;
  this_01 = local_3d8.Filter.ComplexMasks.AllocatorInstance.Data +
            (longlong)local_3d8.Filter.ComplexMasks.ArrayNum * 0x3c;
  local_548._Last = &local_820;
  *(int *)(this_01 + 0x30) = 0;
  *(int *)(this_01 + 0x34) = 0x180;
  this_01[0x38] = (FScriptContainerElement)0x2;
  local_3d8.Filter.ComplexMasks.ArrayNum = local_3d8.Filter.ComplexMasks.ArrayNum + 1;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_01,&local_548);
  local_838.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_568._First = &local_838;
  local_568._Last = &local_836;
  UE::MovieScene::FComponentMask::SetAll(&local_3d8.Filter.AllMask,&local_568);
  local_834.Value = (pFVar4->Tags).Ignored.Value;
  local_5a8._First = &local_834;
  local_5a8._Last = (FComponentTypeID *)local_832;
  UE::MovieScene::FComponentMask::SetAll(&local_3d8.Filter.NoneMask,&local_5a8);
  local_6c0 = CONCAT71(local_3d8.Components._41_7_,local_3d8.Components._40_1_) | 2;
  local_6d0.TypeIndex = local_3d8.Components._32_1_;
  local_6d0._9_7_ = local_3d8.Components._33_7_;
  local_6d0._padding_ = 0x151340d10;
  local_558 = (FQuaternionBlenderAccumulationBuffers *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              ::ScheduledRun_PerEntity;
  local_550 = 3;
  local_7f8 = pFVar1;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            (&local_3d8,(FEntityManager *)&local_808,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,&local_6d0,
             &local_558);
  if (local_3d8.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_814,local_808);
  local_528 = pFVar4->BlendChannelInput;
  TStack_526 = pFVar4->WeightAndEasingResult;
  local_820.Value = (pFVar4->Tags).AbsoluteBlend.Value;
  local_81e = *(undefined2 *)((longlong)&this->_padding_ + 6);
  local_670 = 0;
  pTStack_668 = &TStatId::TStatId_NAME_None;
  TStack_658.Pad[0] = 0xff;
  TStack_658.Pad[1] = '\x06';
  TStack_658.Pad[2] = '\0';
  TStack_658.Pad[3] = '\0';
  TStack_654.Pad = TStack_654.Pad & 0xffffff00;
  uStack_510 = CONCAT71(_TStack_65f,local_660) & 0xffffffffffffffe0;
  uStack_508._4_1_ = TStack_654.Pad[0];
  uStack_508._5_1_ = TStack_654.Pad[1];
  uStack_508._6_1_ = TStack_654.Pad[2];
  uStack_508._7_1_ = TStack_654.Pad[3];
  uStack_508._0_4_ = 0x6ff;
  uStack_520 = 0;
  pTStack_518 = &TStatId::TStatId_NAME_None;
  local_4d0.AllMask.Bits.NumBits = 0;
  local_4f8._2_2_ = TStack_526;
  local_4f8._0_2_ = local_528;
  local_4f8._4_4_ = uStack_524;
  local_4d0.AllMask.Bits.MaxBits = 0x180;
  local_4d0.NoneMask.Bits.NumBits = 0;
  local_4d0.NoneMask.Bits.MaxBits = 0x180;
  uStack_4f0 = 0;
  local_4e8 = &TStatId::TStatId_NAME_None;
  local_4d0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d0.ComplexMasks.ArrayNum = 0;
  local_4d0.ComplexMasks.ArrayMax = 0;
  local_420 = 0;
  local_41c = 0x180;
  local_3e8 = 0;
  local_3e4 = 0x180;
  local_660 = local_660 & 0xe0;
  uStack_4e0 = uStack_510;
  local_4d8 = uStack_508;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_4f8,&local_4d0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4f8 + 2),&local_4d0);
  local_598._First = &local_820;
  local_598._Last = &local_81c;
  UE::MovieScene::FComponentMask::SetAll(&local_4d0.AllMask,&local_598);
  local_830.Value = (pFVar4->Tags).Ignored.Value;
  local_588._First = &local_830;
  local_588._Last = &local_82e;
  UE::MovieScene::FComponentMask::SetAll(&local_4d0.NoneMask,&local_588);
  local_6a8 = uStack_4e0 | 2;
  local_6b8._8_8_ = local_4e8;
  local_6b8._0_8_ = L"struct UE::MovieScene::FAccumulateAbsoluteWeights";
  local_578 = (FQuaternionBlenderAccumulationBuffers *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
              ::ScheduledRun_PerEntity;
  local_570 = true;
  local_7f0 = pFVar1;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
              *)local_4f8,(FEntityManager *)&local_804,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_6b8,&local_578);
  if (local_4d0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_814,local_804);
  local_77a = pFVar4->DoubleResult[6];
  uStack_80e = 0x7fff;
  local_810 = pFVar4->WeightAndEasingResult;
  local_788 = pFVar4->BlendChannelInput;
  local_786 = pFVar4->DoubleResult[0];
  local_784 = pFVar4->DoubleResult[1];
  local_782 = pFVar4->DoubleResult[2];
  local_780 = pFVar4->DoubleResult[3];
  local_77e = pFVar4->DoubleResult[4];
  local_77c = pFVar4->DoubleResult[5];
  local_778 = pFVar4->DoubleResult[7];
  local_776 = pFVar4->DoubleResult[8];
  local_774 = _local_810;
  local_81c.Value = (pFVar4->Tags).AbsoluteBlend.Value;
  local_81a = *(undefined2 *)((longlong)&this->_padding_ + 6);
  local_648._0_1_ = '\0';
  local_648._1_1_ = '\0';
  local_648._2_1_ = '\0';
  local_648._3_1_ = '\0';
  local_648._4_1_ = '\0';
  local_648._5_1_ = '\0';
  local_648._6_1_ = '\0';
  local_648._7_1_ = '\0';
  pTStack_640 = &TStatId::TStatId_NAME_None;
  TStack_630.Pad[0] = 0xff;
  TStack_630.Pad[1] = '\x06';
  TStack_630.Pad[2] = '\0';
  TStack_630.Pad[3] = '\0';
  TStack_62c.Pad = TStack_62c.Pad & 0xffffff00;
  local_760 = CONCAT71(_TStack_637,local_638) & 0xffffffffffffffe0;
  uStack_758._4_1_ = TStack_62c.Pad[0];
  uStack_758._5_1_ = TStack_62c.Pad[1];
  uStack_758._6_1_ = TStack_62c.Pad[2];
  uStack_758._7_1_ = TStack_62c.Pad[3];
  uStack_758._0_4_ = 0x6ff;
  local_770._0_8_ = 0;
  local_770._8_8_ = &TStatId::TStatId_NAME_None;
  local_638 = local_638 & 0xe0;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            (&local_2a8,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)&local_788);
  local_5f8._First = &local_81c;
  local_5f8._Last = &local_818;
  UE::MovieScene::FComponentMask::SetAll(&local_2a8.Filter.AllMask,&local_5f8);
  local_82c.Value = (pFVar4->Tags).Ignored.Value;
  local_5e8._First = &local_82c;
  local_5e8._Last = &local_82a;
  UE::MovieScene::FComponentMask::SetAll(&local_2a8.Filter.NoneMask,&local_5e8);
  local_6f0 = CONCAT71(local_2a8.Components._41_7_,local_2a8.Components._40_1_) | 2;
  local_700.TypeIndex = local_2a8.Components._32_1_;
  local_700._9_7_ = local_2a8.Components._33_7_;
  local_700._padding_ = 0x151340df0;
  local_5d8 = (FQuaternionBlenderAccumulationBuffers *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              ::ScheduledRun_PerEntity;
  local_5d0 = '\x03';
  local_7e8 = &this->Buffers;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            (&local_2a8,(FEntityManager *)&local_800,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,&local_700,
             &local_5d8);
  if (local_2a8.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_804,local_800);
  local_7b2 = pFVar4->DoubleResult[6];
  pTStack_618 = &TStatId::TStatId_NAME_None;
  local_620._0_1_ = '\0';
  local_620._1_1_ = '\0';
  local_620._2_1_ = '\0';
  local_620._3_1_ = '\0';
  local_620._4_1_ = '\0';
  local_620._5_1_ = '\0';
  local_620._6_1_ = '\0';
  local_620._7_1_ = '\0';
  local_80c = CONCAT22(0x7fff,(local_7e0->ComponentTransform).InitialValue);
  local_7c0 = pFVar4->BlendChannelOutput;
  local_7be = pFVar4->DoubleResult[0];
  local_7bc = pFVar4->DoubleResult[1];
  local_7ba = pFVar4->DoubleResult[2];
  local_7b8 = pFVar4->DoubleResult[3];
  local_7b6 = pFVar4->DoubleResult[4];
  local_7b4 = pFVar4->DoubleResult[5];
  local_7b0 = pFVar4->DoubleResult[7];
  local_7ae = pFVar4->DoubleResult[8];
  local_7ac = local_80c;
  local_828.Value = *(ushort *)((longlong)&this->_padding_ + 6);
  local_5c8._First = &local_828;
  local_5c8._Last = &local_826;
  TStack_608.Pad[0] = 0xff;
  TStack_608.Pad[1] = '\x06';
  TStack_608.Pad[2] = '\0';
  TStack_608.Pad[3] = '\0';
  TStack_604.Pad = TStack_604.Pad & 0xffffff00;
  local_798 = CONCAT71(_TStack_60f,local_610) & 0xffffffffffffffe0;
  uStack_790._4_1_ = TStack_604.Pad[0];
  uStack_790._5_1_ = TStack_604.Pad[1];
  uStack_790._6_1_ = TStack_604.Pad[2];
  uStack_790._7_1_ = TStack_604.Pad[3];
  uStack_790._0_4_ = 0x6ff;
  local_7a8._0_8_ = 0;
  local_7a8._8_8_ = &TStatId::TStatId_NAME_None;
  local_610 = local_610 & 0xe0;
  this_00 = UE::MovieScene::
            TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
            ::FilterAll((TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                         *)&local_7c0,&local_178,&local_5c8);
  local_5b0 = 3;
  local_718.TypeIndex = (this_00->Components).field_0x20;
  local_718._9_7_ = *(undefined7 *)&(this_00->Components).field_0x21;
  local_718._padding_ = 0x151340e60;
  local_5b8 = (FQuaternionBlenderAccumulationBuffers *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
              ::ScheduledRun_PerEntity;
  local_708 = *(ulonglong *)&(this_00->Components).field_0x28 & 0xfffffffffffffffd;
  local_7d8 = &this->Buffers;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
  ::
  ScheduleImpl<UE::MovieScene::FCombineTask,UE::MovieScene::FQuaternionBlenderAccumulationBuffers_*>
            (this_00,(FEntityManager *)&local_7fc,(IEntitySystemScheduler *)(this->_padding_ + 0x28)
             ,(FTaskParams *)param_1,&local_718,&local_5b8);
  if (local_178.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_808,local_7fc);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_804,local_7fc);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_800,local_7fc);
  return;
}

// StaticRegisterNativesUMovieSceneQuaternionBlenderSystem @ 14686cc20

void __cdecl
UMovieSceneQuaternionBlenderSystem::StaticRegisterNativesUMovieSceneQuaternionBlenderSystem(void)

{
  return;
}

// _getUObject @ 146875410

UObject * __thiscall
UMovieSceneQuaternionBlenderSystem::_getUObject(UMovieSceneQuaternionBlenderSystem *this)

{
  return (UObject *)&this[-1]._padding_;
}

