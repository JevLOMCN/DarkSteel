// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 1467ce870

UClass * __cdecl UMovieSceneEventSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventSystem",
               &Z_Registration_Info_UClass_UMovieSceneEventSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventSystem,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEventSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEventSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventSystem.InnerSingleton;
}

// UMovieSceneEventSystem @ 1468091b0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEventSystem * __thiscall
UMovieSceneEventSystem::UMovieSceneEventSystem(UMovieSceneEventSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEventSystem__6B_;
  *(undefined8 *)&this->EventsByRoot = 0;
  *(undefined8 *)&(this->EventsByRoot).field_0x8 = 0;
  *(undefined8 *)&(this->EventsByRoot).field_0x20 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x28 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventsByRoot).field_0x34 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventsByRoot).field_0x40 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x48 = 0;
  return this;
}

// UMovieSceneEventSystem @ 146809210

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEventSystem * __thiscall
UMovieSceneEventSystem::UMovieSceneEventSystem
          (UMovieSceneEventSystem *this,FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEventSystem__6B_;
  *(undefined8 *)&this->EventsByRoot = 0;
  *(undefined8 *)&(this->EventsByRoot).field_0x8 = 0;
  *(undefined8 *)&(this->EventsByRoot).field_0x20 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x28 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventsByRoot).field_0x34 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventsByRoot).field_0x40 = 0;
  *(undefined4 *)&(this->EventsByRoot).field_0x48 = 0;
  return this;
}

// ~UMovieSceneEventSystem @ 14680f5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEventSystem::~UMovieSceneEventSystem(UMovieSceneEventSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneEventSystem__6B_;
  *(undefined4 *)&(this->EventsByRoot).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventsByRoot).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventsByRoot);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// AddEvent @ 146819510

void __thiscall
UMovieSceneEventSystem::AddEvent
          (UMovieSceneEventSystem *this,FInstanceHandle param_1,FMovieSceneEventTriggerData *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int local_res8 [2];
  FInstanceHandle local_res10 [2];
  FInstanceHandle *local_res18;
  
  local_res10[0] = param_1;
  if (((param_2->Ptrs).Function.field0_0x0.DebugPtr == (UFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TriggerData.Ptrs.Function != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneEventSystems.cpp"
                         ,0x2a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)&(this->EventsByRoot).field_0x8 != *(int *)&(this->EventsByRoot).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EventsByRoot).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EventsByRoot).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->EventsByRoot).field_0x48 - 1U &
                              (uint)local_res10[0] & 0xffff) * 4);
    if (iVar3 != -1) {
      do {
        puVar4 = (undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)&this->EventsByRoot);
        if (((ushort)*puVar4 == local_res10[0].InstanceID) &&
           ((ushort)((uint)*puVar4 >> 0x10) == local_res10[0].InstanceSerial)) {
          if ((iVar3 != -1) && (puVar4 != (undefined4 *)0x0)) goto LAB_146819607;
          break;
        }
        iVar3 = puVar4[6];
      } while (iVar3 != -1);
    }
  }
  local_res18 = local_res10;
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FInstanceHandle_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->EventsByRoot,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FInstanceHandle_const_&> *)
             (ulonglong)((uint)local_res10[0] & 0xffff),(bool *)&local_res18);
  puVar4 = (undefined4 *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this->EventsByRoot);
LAB_146819607:
  if (((*(FMovieSceneEventTriggerData **)(puVar4 + 2) <= param_2) &&
      (param_2 < *(FMovieSceneEventTriggerData **)(puVar4 + 2) + (int)puVar4[5])) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = puVar4[4];
  if (iVar3 == puVar4[5]) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)(puVar4 + 2),puVar4 + 5);
  }
  puVar4[4] = iVar3 + 1;
  FMovieSceneEventTriggerData::FMovieSceneEventTriggerData
            ((FMovieSceneEventTriggerData *)
             (((ForAnyElementType *)(puVar4 + 2))->Data + (longlong)iVar3 * 0x48),param_2);
  return;
}

// GetPrivateStaticClass @ 146835b20

UClass * __cdecl UMovieSceneEventSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventSystem",
               &Z_Registration_Info_UClass_UMovieSceneEventSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventSystem,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEventSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEventSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventSystem.InnerSingleton;
}

// HasEvents @ 146839270

bool __thiscall UMovieSceneEventSystem::HasEvents(UMovieSceneEventSystem *this)

{
  return *(int *)&(this->EventsByRoot).field_0x8 != *(int *)&(this->EventsByRoot).field_0x34;
}

// IsRelevantImpl @ 14683f180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEventSystem::IsRelevantImpl
          (UMovieSceneEventSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return *(int *)&(this->EventsByRoot).field_0x8 != *(int *)&(this->EventsByRoot).field_0x34;
}

// OnRun @ 146844f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEventSystem::OnRun
          (UMovieSceneEventSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  undefined1 *puVar1;
  FMovieSceneEventTriggerData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  TLess<void> TVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  TLess<void> TVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_MovieSceneEval_Events> FVar17;
  longlong lVar18;
  IMovieScenePlayer *pIVar19;
  FFieldClass *pFVar20;
  atomic<int> *paVar21;
  byte bVar22;
  longlong lVar23;
  longlong lVar24;
  FName FVar25;
  uint uVar26;
  int iVar27;
  undefined1 *puVar28;
  FFrameTime FVar29;
  int iVar30;
  uint *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  FFrameNumber FVar34;
  uint uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  longlong lVar39;
  FScriptContainerElement *pFVar40;
  undefined8 *puVar41;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  float fStack_1fc;
  ForAnyElementType FStack_1f8;
  undefined8 uStack_1f0;
  FFrameTime FStack_1e8;
  undefined8 *puStack_1e0;
  FFrameTime FStack_1d8;
  undefined8 uStack_1d0;
  FColor_u_0 aFStack_1c8 [2];
  ForAnyElementType FStack_1c0;
  ForAnyElementType FStack_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *pTStack_190;
  undefined8 uStack_188;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int iStack_168;
  undefined4 uStack_164;
  FName FStack_160;
  FName FStack_158;
  int iStack_148;
  int iStack_144;
  longlong lStack_140;
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_138;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *pTStack_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FPlaybackCapabilityPtr FStack_100;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_f0;
  FMovieSceneEventTriggerData *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> TStack_c8;
  FName aFStack_b8 [2];
  TArrayView<FMovieSceneEventTriggerData_const_,int> TStack_a8;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *pTStack_98;
  undefined8 uStack_90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_4c;
  
  if (*(int *)&(this->EventsByRoot).field_0x8 - *(int *)&(this->EventsByRoot).field_0x34 < 1) {
    return;
  }
  iVar27 = 0;
  FVar17 = StatPtr_MovieSceneEval_Events;
  if (StatPtr_MovieSceneEval_Events == (FThreadSafeStaticStat<FStat_MovieSceneEval_Events>)0x0) {
    pFVar16 = ::FName::FName(aFStack_b8,"MovieSceneEval_Events");
    FVar17 = (FThreadSafeStaticStat<FStat_MovieSceneEval_Events>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_Events,*pFVar16,
                        L"Event Systems","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar25 = *(FName *)FVar17;
  bVar6 = false;
  TVar5 = (TLess<void>)0x0;
  FStack_158.ComparisonIndex.Value = 0;
  FStack_158.Number = 0;
  bVar11 = false;
  TVar10 = (TLess<void>)0x0;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_1c8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      TVar5 = (TLess<void>)0x1;
      bVar11 = false;
      TVar10 = (TLess<void>)0x1;
      if (-1 < CpuChannel->Enabled) {
        FStack_160.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        FStack_160.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_160,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneEventSystems.cpp"
                   ,0x4c);
        bVar6 = true;
        TVar5 = (TLess<void>)0x1;
        bVar11 = true;
        TVar10 = (TLess<void>)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar11 = true;
      goto LAB_14686da39;
    }
  }
  bVar6 = bVar11;
  TVar5 = TVar10;
  bVar11 = false;
  FVar25 = FStack_158;
LAB_14686da39:
  lVar23 = this->_padding_;
  if ((*(longlong *)(lVar23 + 0x580) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lStack_140 = *(longlong *)(lVar23 + 0x580);
  puVar1 = &(this->EventsByRoot).field_0x10;
  FStack_1f8.Data = (FScriptContainerElement *)0x0;
  pTStack_190 = &this->EventsByRoot;
  uStack_1f0 = 0;
  iVar15 = *(int *)&(this->EventsByRoot).field_0x28;
  uVar14 = 1;
  uStack_178._4_4_ = iVar27;
  uStack_170._0_4_ = iVar27;
  if (iVar15 != 0) {
    puVar31 = *(uint **)&(this->EventsByRoot).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar1;
    }
    uVar38 = *puVar31;
    uStack_170._0_4_ = 0;
    iVar27 = 0;
    while (uVar38 == 0) {
      lVar23 = (longlong)iVar27;
      uStack_170._0_4_ = (int)uStack_170 + 0x20;
      iVar27 = iVar27 + 1;
      uStack_178._4_4_ = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14686db0d;
      uVar38 = puVar31[lVar23 + 1];
    }
    uVar14 = -uVar38 & uVar38;
    uVar36 = (ulonglong)uVar14 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iStack_148 = (int)lVar23;
    uStack_178._4_4_ = iStack_148 + -1 + (int)uStack_170;
    if (iVar15 < uStack_178._4_4_) {
      uStack_178._4_4_ = iVar15;
    }
  }
LAB_14686db0d:
  uVar38 = *(uint *)&(this->EventsByRoot).field_0x28;
  bVar22 = (byte)uVar38 & 0x1f;
  iStack_168 = *(int *)&(this->EventsByRoot).field_0x8 - *(int *)&(this->EventsByRoot).field_0x34;
  uVar26 = uVar38 & 0xffffffe0;
  iVar30 = (int)uVar38 >> 5;
  uStack_1ac = 1 << bVar22;
  uVar35 = -1 << bVar22;
  uStack_188 = CONCAT44(uVar14,iVar27);
  uStack_178._0_4_ = 0xffffffff;
  uStack_170._4_4_ = uStack_4c;
  TStack_128._padding_ = uStack_188;
  uStack_108 = CONCAT44(uStack_164,iStack_168);
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128.CurrentBitIndex = uStack_178._4_4_;
  TStack_128.BaseBitIndex = (int)uStack_170;
  TStack_128._28_4_ = uStack_4c;
  iStack_1b0 = iVar30;
  pTStack_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  uStack_1a0 = uVar35;
  uStack_19c = uVar38;
  uStack_198 = uVar26;
  pTStack_138 = (TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)pTStack_190;
  pTStack_130 = pTStack_190;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar38 < 0) || (iVar15 < (int)uVar38)) &&
     (pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = *(uint *)&(this->EventsByRoot).field_0x28;
  if (uVar38 != uVar14) {
    puVar28 = *(undefined1 **)&(this->EventsByRoot).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar35 = uVar35 & *(uint *)(puVar28 + (longlong)iVar30 * 4);
    while (uVar35 == 0) {
      uStack_198 = uVar26 + 0x20;
      iStack_1b0 = iVar30 + 1;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
      goto LAB_14686dc5b;
      uVar35 = *(uint *)(puVar28 + (longlong)iVar30 * 4 + 4);
      uStack_1a0 = 0xffffffff;
      uVar26 = uStack_198;
      iVar30 = iStack_1b0;
    }
    uStack_1ac = -uVar35 & uVar35;
    uVar36 = (ulonglong)uStack_1ac * 2 + 1;
    lVar23 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iStack_144 = (int)lVar23;
    uStack_19c = iStack_144 + -1 + uVar26;
    if ((int)uVar14 < (int)uStack_19c) {
LAB_14686dc5b:
      uStack_19c = uVar14;
    }
  }
  uStack_188 = CONCAT44(uStack_1ac,iStack_1b0);
  pTStack_190 = &this->EventsByRoot;
  uStack_178 = CONCAT44(uStack_19c,uStack_1a0);
  uStack_170 = CONCAT44(uStack_194,uStack_198);
  pTStack_180 = pTStack_1a8;
  iStack_168 = *(int *)&(this->EventsByRoot).field_0x8 - *(int *)&(this->EventsByRoot).field_0x34;
  uStack_70 = CONCAT44(uStack_164,iStack_168);
  pTStack_88 = pTStack_1a8;
  pTStack_98 = pTStack_190;
  uStack_90 = uStack_188;
  uStack_80 = uStack_178;
  uStack_78 = uStack_170;
  do {
    pTVar9 = pTStack_130;
    if (*(int *)(&pTStack_130->field_0x0 + 8) - *(int *)(&pTStack_130->field_0x0 + 0x34) !=
        (int)uStack_108) {
      auStackX_10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    this_00 = pTStack_138;
    if (((TStack_128.CurrentBitIndex == uStack_80._4_4_) && (TStack_128.Array == pTStack_88)) &&
       (pTVar9 == pTStack_98)) {
      bVar12 = 1 < pTStack_138->HashSize;
      if (!bVar12) {
        TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements(pTStack_138);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this_00->Elements,0,*(int *)&(this_00->Elements).field_0x8);
      puVar1 = &(this_00->Elements).field_0xc;
      *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
      iVar27 = *(int *)&(this_00->Elements).field_0x2c;
      *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
      if ((iVar27 < 0) || (0x80 < iVar27)) {
        *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10,0);
      }
      if (bVar12) {
        this_00->HashSize = 1;
        TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      iVar27 = (int)uStack_1f0;
      pFVar37 = FStack_1f8.Data + (longlong)(int)uStack_1f0 * 0x20;
      pFVar40 = FStack_1f8.Data + 0x18;
      while( true ) {
        if ((int)uStack_1f0 != iVar27) {
          auStackX_20[0] = 0;
          `TCheckedPointerIterator<`UMovieSceneEventSystem::TriggerAllEvents'::__l2::FTriggerBatch,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
        }
        if (pFVar40 + -0x18 == pFVar37) {
          DestructItems<_UMovieSceneEventSystem::TriggerAllEvents_::__l2::FTriggerBatch,int>
                    ((FTriggerBatch *)FStack_1f8.Data,(int)uStack_1f0);
          if ((FTriggerBatch *)FStack_1f8.Data != (FTriggerBatch *)0x0) {
            FMemory::Free(FStack_1f8.Data);
          }
          if ((bool)TVar5) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar11) {
            FThreadStats::AddMessage(FVar25,CycleScopeEnd);
          }
          return;
        }
        TStack_c8.Object =
             ((TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(pFVar40 + -8))->Object;
        TStack_c8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)pFVar40;
        if (TStack_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFStack_d8 = *(FMovieSceneEventTriggerData **)&pFVar40[-0x18].field_0x0;
        iVar15 = *(int *)(pFVar40 + -0x10);
        if ((iVar15 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) break;
        TStack_a8._12_4_ = uStack_cc;
        TStack_a8.ArrayNum = iVar15;
        TStack_a8.DataPtr = pFStack_d8;
        iStack_d0 = iVar15;
        TriggerEvents(&TStack_a8,&TStack_c8);
        pFVar40 = pFVar40 + 0x20;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar23 = *(longlong *)&pTVar9->field_0x0;
    lVar18 = (longlong)TStack_128.CurrentBitIndex * 0x20;
    lVar39 = (ulonglong)*(ushort *)(lVar18 + lVar23) * 0x140;
    lVar24 = *(longlong *)(lStack_140 + 8);
    FStack_1c0.Data = *(FScriptContainerElement **)(lVar39 + 0x118 + lVar24);
    FStack_1b8.Data = *(FScriptContainerElement **)(lVar39 + 0x120 + lVar24);
    paVar21 = &((TReferenceControllerBase<1> *)FStack_1b8.Data)->SharedReferenceCount;
    if ((TReferenceControllerBase<1> *)FStack_1b8.Data != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_1b8.Data);
    FStack_1e8.FrameNumber.Value = 0;
    FStack_1e8.SubFrame = 0.0;
    cVar13 = '\0';
    bVar12 = IsInGameThread();
    if (!bVar12) {
      auStackX_18[0] = 0;
      `UE::MovieScene::FSharedPlaybackState::
      FindCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
      operator()(auStackX_18);
    }
    UE::MovieScene::FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
              ((FPlaybackCapabilitiesImpl *)((longlong)FStack_1c0.Data + 0x38),&FStack_100,
               1 << (aFStack_1c8[1]._0_1_ & 0x1f));
    if (FStack_100.Ptr == (FEventTriggerControlPlaybackCapability *)0x0) {
LAB_14686ddf8:
      TStack_f0.Object = (FSharedPlaybackState *)FStack_1c0.Data;
      TStack_f0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)FStack_1b8.Data;
      if ((TReferenceControllerBase<1> *)FStack_1b8.Data != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
      }
      pIVar19 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&TStack_f0);
      if (pIVar19 != (IMovieScenePlayer *)0x0) {
        cVar13 = (**(code **)(pIVar19->_padding_ + 0x90))(pIVar19,&FStack_1e8);
      }
    }
    else {
      FVar29 = (FFrameTime)FStack_100.Ptr;
      if (FStack_100.StorageMode != Inline) {
        if ((FStack_100.StorageMode != RawPointer) && (FStack_100.StorageMode != SharedPointer)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                              ,0x30,L"Unexpected playback capability storage mode");
          if (bVar12) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_14686ddf8;
        }
        FVar29 = (FStack_100.Ptr)->TypedValue;
      }
      if (FVar29 == (FFrameTime)0x0) goto LAB_14686ddf8;
      cVar13 = UE::MovieScene::FEventTriggerControlPlaybackCapability::IsDisablingEventTriggers
                         ((FEventTriggerControlPlaybackCapability *)FVar29,&FStack_1e8);
    }
    FVar29 = FStack_1e8;
    FVar34 = FStack_1e8.FrameNumber.Value;
    fStack_1fc = FStack_1e8.SubFrame;
    fVar8 = fStack_1fc;
    if (*(int *)(lVar39 + 0x88 + lVar24) == 0) {
      if (cVar13 != '\0') {
        puVar41 = *(undefined8 **)(lVar18 + 8 + lVar23);
        uStack_1d0 = (int *)(lVar23 + 0x10 + lVar18);
        puVar32 = puVar41 + (longlong)*uStack_1d0 * 9;
        puStack_1e0 = puVar41;
        while (puVar41 != puVar32) {
          FStack_1d8 = *(FFrameTime *)((longlong)puVar41 + 0x3c);
          if ((FStack_1d8.FrameNumber.Value.Value < FVar34.Value) ||
             ((FStack_1d8.FrameNumber.Value.Value == FVar34.Value && (FStack_1d8.SubFrame <= fVar8))
             )) {
            do {
              puVar33 = puVar32;
              puVar32 = puVar33 + -9;
              if (puVar41 == puVar32) goto LAB_14686df75;
              FStack_1d8 = FVar29;
              iVar27 = (int)*(undefined8 *)((longlong)puVar33 + -0xc);
            } while ((iVar27 < FVar34.Value) ||
                    ((iVar27 == FVar34.Value &&
                     (fStack_1fc = (float)((ulonglong)*(undefined8 *)((longlong)puVar33 + -0xc) >>
                                          0x20), fStack_1fc <= fVar8))));
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)*puVar32 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)*puVar32);
            }
            *puVar41 = *puVar32;
            pFVar20 = FProperty::StaticClass();
            FFieldPath::GetTyped((FFieldPath *)(puVar33 + -8),pFVar20,(UStruct *)0x0);
            FFieldPath::operator=((FFieldPath *)(puVar41 + 1),(FFieldPath *)(puVar33 + -8));
            uVar4 = puVar33[-3];
            puVar41[5] = puVar33[-4];
            puVar41[6] = uVar4;
            *(undefined4 *)(puVar41 + 7) = *(undefined4 *)(puVar33 + -2);
            *(undefined8 *)((longlong)puVar41 + 0x3c) = *(undefined8 *)((longlong)puVar33 + -0xc);
            puVar41 = puVar41 + 9;
          }
          else {
            puVar41 = puVar41 + 9;
          }
        }
LAB_14686df75:
        lVar24 = ((longlong)puVar41 - (longlong)puStack_1e0) / 0x12 +
                 ((longlong)puVar41 - (longlong)puStack_1e0 >> 0x3f);
        iVar27 = *uStack_1d0;
        uVar36 = (lVar24 >> 2) - (lVar24 >> 0x3f);
        uVar14 = (uint)uVar36;
        if (iVar27 < (int)uVar14) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x48,8,uVar14 - iVar27,(ForAnyElementType *)(lVar18 + 8 + lVar23),
                              uStack_1d0,(int *)(lVar18 + 0x14 + lVar23));
          DefaultConstructItems<FMovieSceneEventTriggerData,int>
                    ((void *)(*(longlong *)(lVar23 + 8 + lVar18) + (longlong)iVar15 * 0x48),
                     uVar14 - iVar27);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar36 & 0xffffffff);
          }
          if ((int)uVar14 < iVar27) {
            uVar38 = iVar27 - uVar14;
            if (((int)(uVar38 | uVar14) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar38 != 0) {
              lVar24 = lVar23 + lVar18;
              TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        ((TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_> *)
                         (lVar24 + 8),uVar14,uVar38);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,(ForAnyElementType *)(lVar24 + 8),*(int *)(lVar24 + 0x10),
                         (int *)(lVar24 + 0x14));
            }
          }
        }
      }
      pFVar40 = (FScriptContainerElement *)(lVar23 + 8 + lVar18);
      AlgoImpl::
      IntroSortInternal<FMovieSceneEventTriggerData,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>,TLess<void>_>
                (*(FMovieSceneEventTriggerData **)&pFVar40->field_0x0,*(int *)(pFVar40 + 8),
                 (TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>)0x3c,TVar5);
    }
    else {
      if (cVar13 != '\0') {
        puVar41 = *(undefined8 **)(lVar18 + 8 + lVar23);
        FStack_1d8 = (FFrameTime)(lVar23 + 0x10 + lVar18);
        puVar32 = puVar41 + (longlong)*(int *)FStack_1d8 * 9;
        puStack_1e0 = puVar41;
        while (puVar41 != puVar32) {
          uStack_1d0 = *(int **)((longlong)puVar41 + 0x3c);
          if ((FVar34.Value < (int)uStack_1d0) ||
             (((int)uStack_1d0 == FVar34.Value &&
              (uStack_1d0._4_4_ = (float)((ulonglong)uStack_1d0 >> 0x20),
              bVar12 = fStack_1fc <= uStack_1d0._4_4_, bVar12)))) {
            do {
              puVar33 = puVar32;
              puVar32 = puVar33 + -9;
              if (puVar41 == puVar32) goto LAB_14686e1d6;
              uStack_1d0 = *(int **)((longlong)puVar33 + -0xc);
            } while ((FVar34.Value < (int)uStack_1d0) ||
                    (((int)uStack_1d0 == FVar34.Value &&
                     (uStack_1d0._4_4_ = (float)((ulonglong)uStack_1d0 >> 0x20),
                     bVar12 = fStack_1fc <= uStack_1d0._4_4_, bVar12))));
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)*puVar32 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)*puVar32);
            }
            *puVar41 = *puVar32;
            pFVar20 = FProperty::StaticClass();
            FFieldPath::GetTyped((FFieldPath *)(puVar33 + -8),pFVar20,(UStruct *)0x0);
            FFieldPath::operator=((FFieldPath *)(puVar41 + 1),(FFieldPath *)(puVar33 + -8));
            uVar4 = puVar33[-3];
            puVar41[5] = puVar33[-4];
            puVar41[6] = uVar4;
            *(undefined4 *)(puVar41 + 7) = *(undefined4 *)(puVar33 + -2);
            *(undefined8 *)((longlong)puVar41 + 0x3c) = *(undefined8 *)((longlong)puVar33 + -0xc);
            puVar41 = puVar41 + 9;
          }
          else {
            puVar41 = puVar41 + 9;
          }
        }
LAB_14686e1d6:
        lVar24 = ((longlong)puVar41 - (longlong)puStack_1e0) / 0x12 +
                 ((longlong)puVar41 - (longlong)puStack_1e0 >> 0x3f);
        iVar27 = *(int *)FStack_1d8;
        uVar36 = (lVar24 >> 2) - (lVar24 >> 0x3f);
        uVar14 = (uint)uVar36;
        if (iVar27 < (int)uVar14) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x48,8,uVar14 - iVar27,(ForAnyElementType *)(lVar18 + 8 + lVar23),
                              (int *)FStack_1d8,(int *)(lVar18 + 0x14 + lVar23));
          DefaultConstructItems<FMovieSceneEventTriggerData,int>
                    ((void *)(*(longlong *)(lVar23 + 8 + lVar18) + (longlong)iVar15 * 0x48),
                     uVar14 - iVar27);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar36 & 0xffffffff);
          }
          if ((int)uVar14 < iVar27) {
            uVar38 = iVar27 - uVar14;
            if (((int)(uVar38 | uVar14) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar38 != 0) {
              lVar24 = lVar23 + lVar18;
              TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        ((TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_> *)
                         (lVar24 + 8),uVar14,uVar38);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,(ForAnyElementType *)(lVar24 + 8),*(int *)(lVar24 + 0x10),
                         (int *)(lVar24 + 0x14));
            }
          }
        }
      }
      pFVar40 = (FScriptContainerElement *)(lVar23 + 8 + lVar18);
      AlgoImpl::
      IntroSortInternal<FMovieSceneEventTriggerData,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>,TGreater<void>_>
                (*(FMovieSceneEventTriggerData **)&pFVar40->field_0x0,*(int *)(pFVar40 + 8),
                 (TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>)0x3c,
                 (TGreater<void>)TVar5);
    }
    iVar27 = (int)uStack_1f0;
    if ((int)uStack_1f0 == uStack_1f0._4_4_) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&FStack_1f8,(int *)((longlong)&uStack_1f0 + 4));
    }
    pFVar37 = FStack_1f8.Data + (longlong)iVar27 * 0x20;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,iVar27 + 1);
    if (FStack_1b8.Data == (FScriptContainerElement *)0x0) {
      paVar21 = (atomic<int> *)&DAT_00000008;
    }
    else {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    pFVar7 = pFVar37 + 0xc;
    *(FScriptContainerElement **)&pFVar37->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar37 + 8) = 0;
    *(int *)pFVar7 = 0;
    *(FScriptContainerElement **)(pFVar37 + 0x10) = FStack_1c0.Data;
    *(FScriptContainerElement **)(pFVar37 + 0x18) = FStack_1b8.Data;
    if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_1b8.Data);
    if (pFVar37 != pFVar40) {
      DestructItems<FMovieSceneEventTriggerData,int>
                (*(FMovieSceneEventTriggerData **)&pFVar37->field_0x0,*(int *)(pFVar37 + 8));
      iVar27 = *(int *)(pFVar40 + 8);
      pFVar2 = *(FMovieSceneEventTriggerData **)&pFVar40->field_0x0;
      *(int *)(pFVar37 + 8) = iVar27;
      if ((iVar27 == 0) && (*(int *)pFVar7 == 0)) {
        *(int *)pFVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar27,*(int *)pFVar7,(ForAnyElementType *)pFVar37,iVar27,(int *)pFVar7);
        ConstructItems<FMovieSceneEventTriggerData,FMovieSceneEventTriggerData,int>
                  (*(FScriptContainerElement **)&pFVar37->field_0x0,pFVar2,iVar27);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_1b8.Data);
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  } while( true );
}

// OnUnlink @ 146851940

void __thiscall UMovieSceneEventSystem::OnUnlink(UMovieSceneEventSystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&(this->EventsByRoot).field_0x8 == *(int *)&(this->EventsByRoot).field_0x34) {
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7405640760772526014>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneEventSystems.cpp"
                     ,0x42,"EventsByRoot.Num() == 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->EventsByRoot);
  return;
}

// PatchBoundObject @ 1468521f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneEventSystem::PatchBoundObject
          (uchar *param_1,UObject *param_2,FProperty *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4,
          FMovieSceneSequenceID param_5)

{
  int iVar1;
  ulonglong uVar2;
  FTokenizedMessage *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  void *pvVar7;
  FMessageLog *pFVar8;
  FText *pFVar9;
  TSharedRef<FTokenizedMessage,1> *pTVar10;
  UObject *pUVar11;
  TSharedRef<FUObjectToken,1> *pTVar12;
  UMovieSceneSequence *pUVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  TSharedRef<FTextToken,1> *pTVar16;
  UClass *pUVar17;
  FName local_res18 [2];
  FName local_5a8;
  FName local_5a0;
  FName local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  TSharedRef<IMessageToken,1> local_578;
  TSharedRef<IMessageToken,1> local_568;
  TSharedRef<IMessageToken,1> local_558;
  TSharedRef<IMessageToken,1> local_548;
  TSharedRef<IMessageToken,1> local_538;
  TSharedRef<IMessageToken,1> local_528;
  TSharedRef<IMessageToken,1> local_518;
  TSharedRef<IMessageToken,1> local_508;
  TSharedRef<IMessageToken,1> local_4f8;
  TSharedRef<IMessageToken,1> local_4e8;
  TSharedRef<IMessageToken,1> local_4d8;
  TSharedRef<IMessageToken,1> local_4c8;
  TSharedRef<IMessageToken,1> local_4b8;
  TSharedRef<IMessageToken,1> local_4a8;
  TSharedRef<FTokenizedMessage,1> local_498;
  TSharedRef<FTextToken,1> local_488;
  FText local_478;
  FText local_468;
  TSharedRef<FTokenizedMessage,1> local_458;
  TSharedRef<FUObjectToken,1> local_448;
  FText local_438;
  TSharedRef<FTokenizedMessage,1> local_428;
  TSharedRef<FUObjectToken,1> local_418;
  FText local_408;
  TSharedRef<FTokenizedMessage,1> local_3f8;
  FText local_3e8;
  TSharedRef<FTokenizedMessage,1> local_3d8;
  TSharedRef<FTextToken,1> local_3c8;
  FText local_3b8;
  TSharedRef<FTokenizedMessage,1> local_3a8;
  TSharedRef<FUObjectToken,1> local_398;
  FText local_388;
  TSharedRef<FTokenizedMessage,1> local_378;
  TSharedRef<FUObjectToken,1> local_368;
  FText local_358;
  TSharedRef<FTokenizedMessage,1> local_348;
  FText local_338;
  TSharedRef<FTokenizedMessage,1> local_328;
  TSharedRef<FTextToken,1> local_318;
  FText local_308;
  FText local_2f8;
  TSharedRef<FTokenizedMessage,1> local_2e8;
  TSharedRef<FUObjectToken,1> local_2d8;
  FText local_2c8;
  TSharedRef<FTokenizedMessage,1> local_2b8;
  TSharedRef<FUObjectToken,1> local_2a8;
  FText local_298;
  TSharedRef<FTokenizedMessage,1> local_288;
  TSharedRef<FUObjectToken,1> local_278;
  FText local_268;
  TSharedRef<FTokenizedMessage,1> local_258;
  FText local_248;
  TSharedRef<FTokenizedMessage,1> local_238;
  TSharedRef<FTextToken,1> local_228;
  FText local_218;
  FText local_208;
  TSharedRef<FTokenizedMessage,1> local_1f8;
  TSharedRef<FUObjectToken,1> local_1e8;
  FText local_1d8;
  TSharedRef<FTokenizedMessage,1> local_1c8;
  TSharedRef<FUObjectToken,1> local_1b8;
  FText local_1a8;
  TSharedRef<FTokenizedMessage,1> local_198;
  TSharedRef<FUObjectToken,1> local_188;
  FText local_178;
  TSharedRef<FTokenizedMessage,1> local_168;
  FText local_158;
  FText local_148;
  FTextFormat local_138;
  FText local_128;
  FTextFormat local_118;
  FText local_108;
  FTextFormat local_f8;
  FMessageLog local_e8;
  FMessageLog local_b8;
  FMessageLog local_88;
  FMessageLog local_58;
  
  if (param_3 == (FProperty *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return true;
  }
  uVar2 = *(ulonglong *)(param_3->_padding_ + 0x18);
  if ((uVar2 >> 0xc & 1) == 0) {
    if ((uVar2 >> 0x10 & 1) == 0) {
      ::FName::FName(&local_588,"PIE");
      pFVar8 = FMessageLog::FMessageLog(&local_58,&local_588);
      pFVar9 = FText::FText(&local_158);
      pTVar10 = FMessageLog::Warning(pFVar8,&local_168,pFVar9);
      pFVar3 = pTVar10->Object;
      pFVar9 = FText::FText(&local_178);
      pUVar13 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_4->Object,&param_5);
      pTVar12 = FUObjectToken::Create(&local_188,(UObject *)pUVar13,pFVar9);
      local_4a8.Object = (IMessageToken *)pTVar12->Object;
      local_4a8.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_198,&local_4a8);
      pFVar3 = pTVar10->Object;
      pFVar9 = FText::FText(&local_1a8);
      pUVar11 = FField::GetOwnerUObject((FField *)param_3);
      pTVar12 = FUObjectToken::Create(&local_1b8,pUVar11,pFVar9);
      local_4b8.Object = (IMessageToken *)pTVar12->Object;
      local_4b8.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_4b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_1c8,&local_4b8);
      pFVar3 = pTVar10->Object;
      pFVar9 = FText::FText(&local_1d8);
      pTVar12 = FUObjectToken::Create(&local_1e8,param_2,pFVar9);
      local_4c8.Object = (IMessageToken *)pTVar12->Object;
      local_4c8.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_4c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_1f8,&local_4c8);
      pFVar3 = pTVar10->Object;
      local_580 = *(FName *)param_3->_padding_;
      pFVar9 = FText::FromName(&local_108,&local_580);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_208,L"MovieSceneEventSystem",L"LevelBP_UnsupportedProperty_Error",
                           L"Failed to trigger event: Unsupported property type for bound object: {0}."
                          );
      pFVar15 = FTextFormat::FTextFormat(&local_f8,pFVar14,Default);
      pFVar9 = FText::Format<FText>(&local_218,pFVar15,pFVar9);
      pTVar16 = FTextToken::Create(&local_228,pFVar9,true);
      local_4d8.Object = (IMessageToken *)pTVar16->Object;
      local_4d8.SharedReferenceCount.ReferenceController =
           (pTVar16->SharedReferenceCount).ReferenceController;
      if (local_4d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar3,&local_238,&local_4d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_238.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
      if (local_218.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
      }
      if (local_208.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      if (local_1d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      pFVar8 = &local_58;
    }
    else {
      pUVar17 = Z_Construct_UClass_ALevelScriptActor_NoRegister();
      iVar1 = (int)pUVar17->_padding_;
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar17->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        ::FName::FName(&local_5a0,"PIE");
        pFVar8 = FMessageLog::FMessageLog(&local_b8,&local_5a0);
        pFVar9 = FText::FText(&local_338);
        pTVar10 = FMessageLog::Warning(pFVar8,&local_348,pFVar9);
        pFVar3 = pTVar10->Object;
        pFVar9 = FText::FText(&local_358);
        pUVar11 = FField::GetOwnerUObject((FField *)param_3);
        pTVar12 = FUObjectToken::Create(&local_368,pUVar11,pFVar9);
        local_528.Object = (IMessageToken *)pTVar12->Object;
        local_528.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_528.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_528.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_528.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_378,&local_528);
        pFVar3 = pTVar10->Object;
        pFVar9 = FText::FText(&local_388);
        pUVar13 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_4->Object,&param_5);
        pTVar12 = FUObjectToken::Create(&local_398,(UObject *)pUVar13,pFVar9);
        local_538.Object = (IMessageToken *)pTVar12->Object;
        local_538.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_538.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_3a8,&local_538);
        pFVar3 = pTVar10->Object;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_3b8,L"MovieSceneEventSystem",L"LevelBP_LevelScriptActor_Error",
                            L"Failed to trigger event: only Interface pins are supported for root tracks within Level Sequences. Please remove the pin, or change it to an interface that is implemented on the desired level blueprint."
                           );
        pTVar16 = FTextToken::Create(&local_3c8,pFVar9,true);
        local_548.Object = (IMessageToken *)pTVar16->Object;
        local_548.SharedReferenceCount.ReferenceController =
             (pTVar16->SharedReferenceCount).ReferenceController;
        if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar3,&local_3d8,&local_548);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3d8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_548.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c8.SharedReferenceCount.ReferenceController);
        if (local_3b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_538.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_398.SharedReferenceCount.ReferenceController);
        if (local_388.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_378.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_528.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_368.SharedReferenceCount.ReferenceController);
        if (local_358.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_348.SharedReferenceCount.ReferenceController);
        if (local_338.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
        }
        pFVar8 = &local_b8;
      }
      else {
        pUVar11 = (UObject *)param_3[1]._padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < *(int *)&pUVar11[1].field_0x10) ||
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar11[1].field_0x10 * 8) != &pUVar11[1].field_0x8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FObjectPropertyBase::SetObjectPropertyValue_InContainer
                    ((FObjectPropertyBase *)param_3,param_1,param_2,0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_4->SharedReferenceCount).ReferenceController);
          return true;
        }
        ::FName::FName(&local_598,"PIE");
        pFVar8 = FMessageLog::FMessageLog(&local_88,&local_598);
        pFVar9 = FText::FText(&local_248);
        pTVar10 = FMessageLog::Warning(pFVar8,&local_258,pFVar9);
        pFVar3 = pTVar10->Object;
        pFVar9 = FText::FText(&local_268);
        pUVar13 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_4->Object,&param_5);
        pTVar12 = FUObjectToken::Create(&local_278,(UObject *)pUVar13,pFVar9);
        local_4e8.Object = (IMessageToken *)pTVar12->Object;
        local_4e8.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_4e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_288,&local_4e8);
        pFVar3 = pTVar10->Object;
        pFVar9 = FText::FText(&local_298);
        pUVar11 = FField::GetOwnerUObject((FField *)param_3);
        pTVar12 = FUObjectToken::Create(&local_2a8,pUVar11,pFVar9);
        local_4f8.Object = (IMessageToken *)pTVar12->Object;
        local_4f8.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_4f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_2b8,&local_4f8);
        pFVar3 = pTVar10->Object;
        pFVar9 = FText::FText(&local_2c8);
        pTVar12 = FUObjectToken::Create(&local_2d8,param_2,pFVar9);
        local_508.Object = (IMessageToken *)pTVar12->Object;
        local_508.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_508.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_508.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_508.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_2e8,&local_508);
        pFVar3 = pTVar10->Object;
        local_590 = *(FName *)(param_3[1]._padding_ + 0x18);
        pFVar9 = FText::FromName(&local_128,&local_590);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_2f8,L"MovieSceneEventSystem",L"LevelBP_InvalidCast_Error",
                             L"Failed to trigger event: Cast to {0} failed.");
        pFVar15 = FTextFormat::FTextFormat(&local_118,pFVar14,Default);
        pFVar9 = FText::Format<FText>(&local_308,pFVar15,pFVar9);
        pTVar16 = FTextToken::Create(&local_318,pFVar9,true);
        local_518.Object = (IMessageToken *)pTVar16->Object;
        local_518.SharedReferenceCount.ReferenceController =
             (pTVar16->SharedReferenceCount).ReferenceController;
        if (local_518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar3,&local_328,&local_518);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_328.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_518.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.SharedReferenceCount.ReferenceController);
        if (local_308.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
        }
        if (local_2f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_508.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d8.SharedReferenceCount.ReferenceController);
        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4f8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
        if (local_298.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.SharedReferenceCount.ReferenceController);
        if (local_268.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_258.SharedReferenceCount.ReferenceController);
        if (local_248.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
        }
        pFVar8 = &local_88;
      }
    }
  }
  else {
    bVar5 = UClass::ImplementsInterface
                      (*(UClass **)&param_2->field_0x10,(UClass *)param_3[1]._padding_);
    if (bVar5) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      pvVar7 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)param_2,(UClass *)param_3[1]._padding_);
      if ((param_3->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((param_1 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar1 = param_3->Offset_Internal;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      *(UObject **)(param_1 + iVar1) = param_2;
      *(void **)(param_1 + (longlong)iVar1 + 8) = pvVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      return true;
    }
    ::FName::FName(local_res18,"PIE");
    pFVar8 = FMessageLog::FMessageLog(&local_e8,local_res18);
    pFVar9 = FText::FText(&local_3e8);
    pTVar10 = FMessageLog::Warning(pFVar8,&local_3f8,pFVar9);
    pFVar3 = pTVar10->Object;
    pFVar9 = FText::FText(&local_408);
    pUVar11 = FField::GetOwnerUObject((FField *)param_3);
    pTVar12 = FUObjectToken::Create(&local_418,pUVar11,pFVar9);
    local_558.Object = (IMessageToken *)pTVar12->Object;
    local_558.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_558.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_428,&local_558);
    pFVar3 = pTVar10->Object;
    pFVar9 = FText::FText(&local_438);
    pUVar13 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_4->Object,&param_5);
    pTVar12 = FUObjectToken::Create(&local_448,(UObject *)pUVar13,pFVar9);
    local_568.Object = (IMessageToken *)pTVar12->Object;
    local_568.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_568.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_568.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_568.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = FTokenizedMessage::AddToken(pFVar3,&local_458,&local_568);
    pFVar3 = pTVar10->Object;
    local_5a8 = *(FName *)(param_3[1]._padding_ + 0x18);
    pFVar9 = FText::FromName(&local_148,&local_5a8);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_468,L"MovieSceneEventSystem",
                         L"LevelBP_InterfaceNotImplemented_Error",
                         L"Failed to trigger event because it does not implement the necessary interface. Function expects a \'{0}\'."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_138,pFVar14,Default);
    pFVar9 = FText::Format<FText>(&local_478,pFVar15,pFVar9);
    pTVar16 = FTextToken::Create(&local_488,pFVar9,true);
    local_578.Object = (IMessageToken *)pTVar16->Object;
    local_578.SharedReferenceCount.ReferenceController =
         (pTVar16->SharedReferenceCount).ReferenceController;
    if (local_578.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar3,&local_498,&local_578);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_578.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_488.SharedReferenceCount.ReferenceController);
    if (local_478.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
    }
    if (local_468.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_458.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_568.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_448.SharedReferenceCount.ReferenceController);
    if (local_438.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_558.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_418.SharedReferenceCount.ReferenceController);
    if (local_408.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f8.SharedReferenceCount.ReferenceController);
    if (local_3e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
    }
    pFVar8 = &local_e8;
  }
  FMessageLog::~FMessageLog(pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// StaticRegisterNativesUMovieSceneEventSystem @ 14686cab0

void __cdecl UMovieSceneEventSystem::StaticRegisterNativesUMovieSceneEventSystem(void)

{
  return;
}

// TriggerAllEvents @ 14686d8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEventSystem::TriggerAllEvents(UMovieSceneEventSystem *this)

{
  undefined1 *puVar1;
  FMovieSceneEventTriggerData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  TLess<void> TVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  TLess<void> TVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_MovieSceneEval_Events> FVar17;
  longlong lVar18;
  IMovieScenePlayer *pIVar19;
  FFieldClass *pFVar20;
  atomic<int> *paVar21;
  byte bVar22;
  longlong lVar23;
  longlong lVar24;
  FName FVar25;
  uint uVar26;
  int iVar27;
  undefined1 *puVar28;
  FFrameTime FVar29;
  int iVar30;
  uint *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  FFrameNumber FVar34;
  uint uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  longlong lVar39;
  FScriptContainerElement *pFVar40;
  undefined8 *puVar41;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float fStack_1fc;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  FFrameTime local_1e8;
  undefined8 *local_1e0;
  FFrameTime local_1d8;
  undefined8 local_1d0;
  FColor_u_0 local_1c8 [2];
  ForAnyElementType local_1c0;
  ForAnyElementType local_1b8;
  int local_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *local_190;
  undefined8 uStack_188;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  int iStack_168;
  undefined4 uStack_164;
  FName local_160;
  FName local_158;
  int local_148;
  int local_144;
  longlong local_140;
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_138;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FPlaybackCapabilityPtr local_100;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_f0;
  FMovieSceneEventTriggerData *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c8;
  FName local_b8 [2];
  TArrayView<FMovieSceneEventTriggerData_const_,int> local_a8;
  TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  undefined8 uStack_90;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar27 = 0;
  FVar17 = StatPtr_MovieSceneEval_Events;
  if (StatPtr_MovieSceneEval_Events == (FThreadSafeStaticStat<FStat_MovieSceneEval_Events>)0x0) {
    pFVar16 = ::FName::FName(local_b8,"MovieSceneEval_Events");
    FVar17 = (FThreadSafeStaticStat<FStat_MovieSceneEval_Events>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_Events,*pFVar16,
                        L"Event Systems","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar25 = *(FName *)FVar17;
  bVar6 = false;
  TVar5 = (TLess<void>)0x0;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar11 = false;
  TVar10 = (TLess<void>)0x0;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      TVar5 = (TLess<void>)0x1;
      bVar11 = false;
      TVar10 = (TLess<void>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_160.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneEventSystems.cpp"
                   ,0x4c);
        bVar6 = true;
        TVar5 = (TLess<void>)0x1;
        bVar11 = true;
        TVar10 = (TLess<void>)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar11 = true;
      goto LAB_14686da39;
    }
  }
  bVar6 = bVar11;
  TVar5 = TVar10;
  bVar11 = false;
  FVar25 = local_158;
LAB_14686da39:
  lVar23 = this->_padding_;
  if ((*(longlong *)(lVar23 + 0x580) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_140 = *(longlong *)(lVar23 + 0x580);
  puVar1 = &(this->EventsByRoot).field_0x10;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_190 = &this->EventsByRoot;
  local_1f0 = 0;
  iVar15 = *(int *)&(this->EventsByRoot).field_0x28;
  uVar14 = 1;
  uStack_178._4_4_ = iVar27;
  local_170._0_4_ = iVar27;
  if (iVar15 != 0) {
    puVar31 = *(uint **)&(this->EventsByRoot).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar1;
    }
    uVar38 = *puVar31;
    local_170._0_4_ = 0;
    iVar27 = 0;
    while (uVar38 == 0) {
      lVar23 = (longlong)iVar27;
      local_170._0_4_ = (int)local_170 + 0x20;
      iVar27 = iVar27 + 1;
      uStack_178._4_4_ = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14686db0d;
      uVar38 = puVar31[lVar23 + 1];
    }
    uVar14 = -uVar38 & uVar38;
    uVar36 = (ulonglong)uVar14 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_148 = (int)lVar23;
    uStack_178._4_4_ = local_148 + -1 + (int)local_170;
    if (iVar15 < uStack_178._4_4_) {
      uStack_178._4_4_ = iVar15;
    }
  }
LAB_14686db0d:
  uVar38 = *(uint *)&(this->EventsByRoot).field_0x28;
  bVar22 = (byte)uVar38 & 0x1f;
  iStack_168 = *(int *)&(this->EventsByRoot).field_0x8 - *(int *)&(this->EventsByRoot).field_0x34;
  uVar26 = uVar38 & 0xffffffe0;
  iVar30 = (int)uVar38 >> 5;
  uStack_1ac = 1 << bVar22;
  uVar35 = -1 << bVar22;
  uStack_188 = CONCAT44(uVar14,iVar27);
  uStack_178._0_4_ = 0xffffffff;
  local_170._4_4_ = local_4c;
  TStack_128._padding_ = uStack_188;
  uStack_108 = CONCAT44(uStack_164,iStack_168);
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128.CurrentBitIndex = uStack_178._4_4_;
  TStack_128.BaseBitIndex = (int)local_170;
  TStack_128._28_4_ = local_4c;
  local_1b0 = iVar30;
  pTStack_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_1a0 = uVar35;
  uStack_19c = uVar38;
  uStack_198 = uVar26;
  local_138 = (TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)local_190;
  local_130 = local_190;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar38 < 0) || (iVar15 < (int)uVar38)) &&
     (local_180 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = *(uint *)&(this->EventsByRoot).field_0x28;
  if (uVar38 != uVar14) {
    puVar28 = *(undefined1 **)&(this->EventsByRoot).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar35 = uVar35 & *(uint *)(puVar28 + (longlong)iVar30 * 4);
    while (uVar35 == 0) {
      uStack_198 = uVar26 + 0x20;
      local_1b0 = iVar30 + 1;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1b0)
      goto LAB_14686dc5b;
      uVar35 = *(uint *)(puVar28 + (longlong)iVar30 * 4 + 4);
      local_1a0 = 0xffffffff;
      uVar26 = uStack_198;
      iVar30 = local_1b0;
    }
    uStack_1ac = -uVar35 & uVar35;
    uVar36 = (ulonglong)uStack_1ac * 2 + 1;
    lVar23 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_144 = (int)lVar23;
    uStack_19c = local_144 + -1 + uVar26;
    if ((int)uVar14 < (int)uStack_19c) {
LAB_14686dc5b:
      uStack_19c = uVar14;
    }
  }
  uStack_188 = CONCAT44(uStack_1ac,local_1b0);
  local_190 = &this->EventsByRoot;
  uStack_178 = CONCAT44(uStack_19c,local_1a0);
  local_170 = CONCAT44(uStack_194,uStack_198);
  local_180 = pTStack_1a8;
  iStack_168 = *(int *)&(this->EventsByRoot).field_0x8 - *(int *)&(this->EventsByRoot).field_0x34;
  uStack_70 = CONCAT44(uStack_164,iStack_168);
  local_88 = pTStack_1a8;
  local_98 = local_190;
  uStack_90 = uStack_188;
  uStack_80 = uStack_178;
  local_78 = local_170;
  do {
    pTVar9 = local_130;
    if (*(int *)(&local_130->field_0x0 + 8) - *(int *)(&local_130->field_0x0 + 0x34) !=
        (int)uStack_108) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = local_138;
    if (((TStack_128.CurrentBitIndex == uStack_80._4_4_) && (TStack_128.Array == local_88)) &&
       (pTVar9 == local_98)) {
      bVar12 = 1 < local_138->HashSize;
      if (!bVar12) {
        TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements(local_138);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this_00->Elements,0,*(int *)&(this_00->Elements).field_0x8);
      puVar1 = &(this_00->Elements).field_0xc;
      *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
      iVar27 = *(int *)&(this_00->Elements).field_0x2c;
      *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
      if ((iVar27 < 0) || (0x80 < iVar27)) {
        *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10,0);
      }
      if (bVar12) {
        this_00->HashSize = 1;
        TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      iVar27 = (int)local_1f0;
      pFVar37 = local_1f8.Data + (longlong)(int)local_1f0 * 0x20;
      pFVar40 = local_1f8.Data + 0x18;
      while( true ) {
        if ((int)local_1f0 != iVar27) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<`UMovieSceneEventSystem::TriggerAllEvents'::__l2::FTriggerBatch,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar40 + -0x18 == pFVar37) {
          DestructItems<_UMovieSceneEventSystem::TriggerAllEvents_::__l2::FTriggerBatch,int>
                    ((FTriggerBatch *)local_1f8.Data,(int)local_1f0);
          if ((FTriggerBatch *)local_1f8.Data != (FTriggerBatch *)0x0) {
            FMemory::Free(local_1f8.Data);
          }
          if ((bool)TVar5) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar11) {
            FThreadStats::AddMessage(FVar25,CycleScopeEnd);
          }
          return;
        }
        local_c8.Object =
             ((TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(pFVar40 + -8))->Object;
        local_c8.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)pFVar40
        ;
        if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d8 = *(FMovieSceneEventTriggerData **)&pFVar40[-0x18].field_0x0;
        iVar15 = *(int *)(pFVar40 + -0x10);
        if ((iVar15 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) break;
        local_a8._12_4_ = uStack_cc;
        local_a8.ArrayNum = iVar15;
        local_a8.DataPtr = local_d8;
        iStack_d0 = iVar15;
        TriggerEvents(&local_a8,&local_c8);
        pFVar40 = pFVar40 + 0x20;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar23 = *(longlong *)&pTVar9->field_0x0;
    lVar18 = (longlong)TStack_128.CurrentBitIndex * 0x20;
    lVar39 = (ulonglong)*(ushort *)(lVar18 + lVar23) * 0x140;
    lVar24 = *(longlong *)(local_140 + 8);
    local_1c0.Data = *(FScriptContainerElement **)(lVar39 + 0x118 + lVar24);
    local_1b8.Data = *(FScriptContainerElement **)(lVar39 + 0x120 + lVar24);
    paVar21 = &((TReferenceControllerBase<1> *)local_1b8.Data)->SharedReferenceCount;
    if ((TReferenceControllerBase<1> *)local_1b8.Data != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1b8.Data);
    local_1e8.FrameNumber.Value = 0;
    local_1e8.SubFrame = 0.0;
    cVar13 = '\0';
    bVar12 = IsInGameThread();
    if (!bVar12) {
      local_res18[0] = 0;
      `UE::MovieScene::FSharedPlaybackState::
      FindCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
      operator()(local_res18);
    }
    UE::MovieScene::FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
              ((FPlaybackCapabilitiesImpl *)((longlong)local_1c0.Data + 0x38),&local_100,
               1 << (local_1c8[1]._0_1_ & 0x1f));
    if (local_100.Ptr == (FEventTriggerControlPlaybackCapability *)0x0) {
LAB_14686ddf8:
      local_f0.Object = (FSharedPlaybackState *)local_1c0.Data;
      local_f0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_1b8.Data;
      if ((TReferenceControllerBase<1> *)local_1b8.Data != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
      }
      pIVar19 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_f0);
      if (pIVar19 != (IMovieScenePlayer *)0x0) {
        cVar13 = (**(code **)(pIVar19->_padding_ + 0x90))(pIVar19,&local_1e8);
      }
    }
    else {
      FVar29 = (FFrameTime)local_100.Ptr;
      if (local_100.StorageMode != Inline) {
        if ((local_100.StorageMode != RawPointer) && (local_100.StorageMode != SharedPointer)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                              ,0x30,L"Unexpected playback capability storage mode");
          if (bVar12) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_14686ddf8;
        }
        FVar29 = (local_100.Ptr)->TypedValue;
      }
      if (FVar29 == (FFrameTime)0x0) goto LAB_14686ddf8;
      cVar13 = UE::MovieScene::FEventTriggerControlPlaybackCapability::IsDisablingEventTriggers
                         ((FEventTriggerControlPlaybackCapability *)FVar29,&local_1e8);
    }
    FVar29 = local_1e8;
    FVar34 = local_1e8.FrameNumber.Value;
    fStack_1fc = local_1e8.SubFrame;
    fVar8 = fStack_1fc;
    if (*(int *)(lVar39 + 0x88 + lVar24) == 0) {
      if (cVar13 != '\0') {
        puVar41 = *(undefined8 **)(lVar18 + 8 + lVar23);
        local_1d0 = (int *)(lVar23 + 0x10 + lVar18);
        puVar32 = puVar41 + (longlong)*local_1d0 * 9;
        local_1e0 = puVar41;
        while (puVar41 != puVar32) {
          local_1d8 = *(FFrameTime *)((longlong)puVar41 + 0x3c);
          if ((local_1d8.FrameNumber.Value.Value < FVar34.Value) ||
             ((local_1d8.FrameNumber.Value.Value == FVar34.Value && (local_1d8.SubFrame <= fVar8))))
          {
            do {
              puVar33 = puVar32;
              puVar32 = puVar33 + -9;
              if (puVar41 == puVar32) goto LAB_14686df75;
              local_1d8 = FVar29;
              iVar27 = (int)*(undefined8 *)((longlong)puVar33 + -0xc);
            } while ((iVar27 < FVar34.Value) ||
                    ((iVar27 == FVar34.Value &&
                     (fStack_1fc = (float)((ulonglong)*(undefined8 *)((longlong)puVar33 + -0xc) >>
                                          0x20), fStack_1fc <= fVar8))));
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)*puVar32 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)*puVar32);
            }
            *puVar41 = *puVar32;
            pFVar20 = FProperty::StaticClass();
            FFieldPath::GetTyped((FFieldPath *)(puVar33 + -8),pFVar20,(UStruct *)0x0);
            FFieldPath::operator=((FFieldPath *)(puVar41 + 1),(FFieldPath *)(puVar33 + -8));
            uVar4 = puVar33[-3];
            puVar41[5] = puVar33[-4];
            puVar41[6] = uVar4;
            *(undefined4 *)(puVar41 + 7) = *(undefined4 *)(puVar33 + -2);
            *(undefined8 *)((longlong)puVar41 + 0x3c) = *(undefined8 *)((longlong)puVar33 + -0xc);
            puVar41 = puVar41 + 9;
          }
          else {
            puVar41 = puVar41 + 9;
          }
        }
LAB_14686df75:
        lVar24 = ((longlong)puVar41 - (longlong)local_1e0) / 0x12 +
                 ((longlong)puVar41 - (longlong)local_1e0 >> 0x3f);
        iVar27 = *local_1d0;
        uVar36 = (lVar24 >> 2) - (lVar24 >> 0x3f);
        uVar14 = (uint)uVar36;
        if (iVar27 < (int)uVar14) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x48,8,uVar14 - iVar27,(ForAnyElementType *)(lVar18 + 8 + lVar23),
                              local_1d0,(int *)(lVar18 + 0x14 + lVar23));
          DefaultConstructItems<FMovieSceneEventTriggerData,int>
                    ((void *)(*(longlong *)(lVar23 + 8 + lVar18) + (longlong)iVar15 * 0x48),
                     uVar14 - iVar27);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar36 & 0xffffffff);
          }
          if ((int)uVar14 < iVar27) {
            uVar38 = iVar27 - uVar14;
            if (((int)(uVar38 | uVar14) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar38 != 0) {
              lVar24 = lVar23 + lVar18;
              TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        ((TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_> *)
                         (lVar24 + 8),uVar14,uVar38);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,(ForAnyElementType *)(lVar24 + 8),*(int *)(lVar24 + 0x10),
                         (int *)(lVar24 + 0x14));
            }
          }
        }
      }
      pFVar40 = (FScriptContainerElement *)(lVar23 + 8 + lVar18);
      AlgoImpl::
      IntroSortInternal<FMovieSceneEventTriggerData,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>,TLess<void>_>
                (*(FMovieSceneEventTriggerData **)&pFVar40->field_0x0,*(int *)(pFVar40 + 8),
                 (TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>)0x3c,TVar5);
    }
    else {
      if (cVar13 != '\0') {
        puVar41 = *(undefined8 **)(lVar18 + 8 + lVar23);
        local_1d8 = (FFrameTime)(lVar23 + 0x10 + lVar18);
        puVar32 = puVar41 + (longlong)*(int *)local_1d8 * 9;
        local_1e0 = puVar41;
        while (puVar41 != puVar32) {
          local_1d0 = *(int **)((longlong)puVar41 + 0x3c);
          if ((FVar34.Value < (int)local_1d0) ||
             (((int)local_1d0 == FVar34.Value &&
              (local_1d0._4_4_ = (float)((ulonglong)local_1d0 >> 0x20),
              bVar12 = fStack_1fc <= local_1d0._4_4_, bVar12)))) {
            do {
              puVar33 = puVar32;
              puVar32 = puVar33 + -9;
              if (puVar41 == puVar32) goto LAB_14686e1d6;
              local_1d0 = *(int **)((longlong)puVar33 + -0xc);
            } while ((FVar34.Value < (int)local_1d0) ||
                    (((int)local_1d0 == FVar34.Value &&
                     (local_1d0._4_4_ = (float)((ulonglong)local_1d0 >> 0x20),
                     bVar12 = fStack_1fc <= local_1d0._4_4_, bVar12))));
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)*puVar32 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)*puVar32);
            }
            *puVar41 = *puVar32;
            pFVar20 = FProperty::StaticClass();
            FFieldPath::GetTyped((FFieldPath *)(puVar33 + -8),pFVar20,(UStruct *)0x0);
            FFieldPath::operator=((FFieldPath *)(puVar41 + 1),(FFieldPath *)(puVar33 + -8));
            uVar4 = puVar33[-3];
            puVar41[5] = puVar33[-4];
            puVar41[6] = uVar4;
            *(undefined4 *)(puVar41 + 7) = *(undefined4 *)(puVar33 + -2);
            *(undefined8 *)((longlong)puVar41 + 0x3c) = *(undefined8 *)((longlong)puVar33 + -0xc);
            puVar41 = puVar41 + 9;
          }
          else {
            puVar41 = puVar41 + 9;
          }
        }
LAB_14686e1d6:
        lVar24 = ((longlong)puVar41 - (longlong)local_1e0) / 0x12 +
                 ((longlong)puVar41 - (longlong)local_1e0 >> 0x3f);
        iVar27 = *(int *)local_1d8;
        uVar36 = (lVar24 >> 2) - (lVar24 >> 0x3f);
        uVar14 = (uint)uVar36;
        if (iVar27 < (int)uVar14) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x48,8,uVar14 - iVar27,(ForAnyElementType *)(lVar18 + 8 + lVar23),
                              (int *)local_1d8,(int *)(lVar18 + 0x14 + lVar23));
          DefaultConstructItems<FMovieSceneEventTriggerData,int>
                    ((void *)(*(longlong *)(lVar23 + 8 + lVar18) + (longlong)iVar15 * 0x48),
                     uVar14 - iVar27);
        }
        else {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar36 & 0xffffffff);
          }
          if ((int)uVar14 < iVar27) {
            uVar38 = iVar27 - uVar14;
            if (((int)(uVar38 | uVar14) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar38 != 0) {
              lVar24 = lVar23 + lVar18;
              TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        ((TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_> *)
                         (lVar24 + 8),uVar14,uVar38);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,(ForAnyElementType *)(lVar24 + 8),*(int *)(lVar24 + 0x10),
                         (int *)(lVar24 + 0x14));
            }
          }
        }
      }
      pFVar40 = (FScriptContainerElement *)(lVar23 + 8 + lVar18);
      AlgoImpl::
      IntroSortInternal<FMovieSceneEventTriggerData,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>,TGreater<void>_>
                (*(FMovieSceneEventTriggerData **)&pFVar40->field_0x0,*(int *)(pFVar40 + 8),
                 (TProjectionMemberData<FFrameTime_FMovieSceneEventTriggerData::*>)0x3c,
                 (TGreater<void>)TVar5);
    }
    iVar27 = (int)local_1f0;
    if ((int)local_1f0 == local_1f0._4_4_) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_1f8,(int *)((longlong)&local_1f0 + 4));
    }
    pFVar37 = local_1f8.Data + (longlong)iVar27 * 0x20;
    local_1f0 = CONCAT44(local_1f0._4_4_,iVar27 + 1);
    if (local_1b8.Data == (FScriptContainerElement *)0x0) {
      paVar21 = (atomic<int> *)&DAT_00000008;
    }
    else {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    pFVar7 = pFVar37 + 0xc;
    *(FScriptContainerElement **)&pFVar37->field_0x0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar37 + 8) = 0;
    *(int *)pFVar7 = 0;
    *(FScriptContainerElement **)(pFVar37 + 0x10) = local_1c0.Data;
    *(FScriptContainerElement **)(pFVar37 + 0x18) = local_1b8.Data;
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1b8.Data);
    if (pFVar37 != pFVar40) {
      DestructItems<FMovieSceneEventTriggerData,int>
                (*(FMovieSceneEventTriggerData **)&pFVar37->field_0x0,*(int *)(pFVar37 + 8));
      iVar27 = *(int *)(pFVar40 + 8);
      pFVar2 = *(FMovieSceneEventTriggerData **)&pFVar40->field_0x0;
      *(int *)(pFVar37 + 8) = iVar27;
      if ((iVar27 == 0) && (*(int *)pFVar7 == 0)) {
        *(int *)pFVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar27,*(int *)pFVar7,(ForAnyElementType *)pFVar37,iVar27,(int *)pFVar7);
        ConstructItems<FMovieSceneEventTriggerData,FMovieSceneEventTriggerData,int>
                  (*(FScriptContainerElement **)&pFVar37->field_0x0,pFVar2,iVar27);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1b8.Data);
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  } while( true );
}

// TriggerEventWithParameters @ 14686e600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UMovieSceneEventSystem::TriggerEventWithParameters
          (UObject *param_1,FMovieSceneEventTriggerData *param_2,
          TArrayView<UObject_*_const,int> *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  FWeakObjectPtr *pFVar1;
  UObject **ppUVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  UFunction *pUVar6;
  FSharedPlaybackState *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  FFieldClass *pFVar13;
  FField *pFVar14;
  UClass *pUVar15;
  UFunction *pUVar16;
  ulonglong uVar17;
  UObject *pUVar18;
  FProperty *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  FMovieSceneObjectCache *this;
  undefined8 *puVar22;
  undefined1 *puVar23;
  uchar *_Dst;
  undefined8 *puVar24;
  FWeakObjectPtr *pFVar25;
  UObject **ppUVar26;
  undefined1 auStack_108 [48];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6 [6];
  TObjectPtr<UFunction>_u_0 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  byte local_b8;
  TObjectPtr<UFunction>_u_0 local_b0;
  FProperty *local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  UObject *local_98;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_90;
  FWeakObjectPtr local_80;
  FPlaybackCapabilityPtr local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_d8;
  local_98 = param_1;
  pFVar13 = FProperty::StaticClass();
  pFVar14 = FFieldPath::GetTyped
                      ((FFieldPath *)&(param_2->Ptrs).BoundObjectProperty,pFVar13,(UStruct *)0x0);
  if (pFVar14 != (FField *)0x0) {
    pFVar13 = FProperty::StaticClass();
    pFVar14 = FFieldPath::GetTyped
                        ((FFieldPath *)&(param_2->Ptrs).BoundObjectProperty,pFVar13,(UStruct *)0x0);
    pUVar15 = Z_Construct_UClass_UObject_NoRegister();
    bVar11 = FFieldVariant::IsA(&pFVar14->Owner,pUVar15);
    if (bVar11) {
      pUVar16 = (UFunction *)((pFVar14->Owner).Container.Unknown & 0xfffffffffffffffe);
    }
    else {
      pUVar16 = (UFunction *)0x0;
    }
    pUVar6 = (param_2->Ptrs).Function.field0_0x0.DebugPtr;
    if (pUVar6 == (UFunction *)0x0) {
      bVar11 = pUVar16 == (UFunction *)0x0;
    }
    else {
      bVar11 = pUVar6 == pUVar16;
    }
    if (bVar11) {
      pFVar13 = FProperty::StaticClass();
      pFVar14 = FFieldPath::GetTyped
                          ((FFieldPath *)&(param_2->Ptrs).BoundObjectProperty,pFVar13,(UStruct *)0x0
                          );
      if (*(int *)((longlong)&pFVar14[1].Owner.Container + 4) < (int)(uint)pUVar6->ParmsSize)
      goto LAB_14686e6ec;
    }
    local_d8 = 0;
    bVar11 = `UMovieSceneEventSystem::TriggerEventWithParameters'::__l3::<lambda_1>::operator()
                       (&local_d8);
    puVar23 = auStack_108;
    if (!bVar11) goto LAB_14686ebbb;
  }
LAB_14686e6ec:
  pFVar7 = param_4->Object;
  bVar11 = IsInGameThread();
  if (!bVar11) {
    local_d7 = bVar11;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(&local_d7);
  }
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar7->Capabilities,&local_78,1 << (local_b8 & 0x1f));
  if (local_78.Ptr == (undefined8 *)0x0) {
LAB_14686e768:
    puVar24 = (undefined8 *)0x0;
LAB_14686e76a:
    local_d6[0] = 0;
    bVar11 = `UMovieSceneEventSystem::TriggerEventWithParameters'::__l6::<lambda_2>::operator()
                       (local_d6);
    puVar23 = auStack_108;
    if (!bVar11) goto LAB_14686ebbb;
  }
  else {
    if (local_78.StorageMode != Inline) {
      if ((local_78.StorageMode != RawPointer) && (local_78.StorageMode != SharedPointer)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                            ,0x30,L"Unexpected playback capability storage mode");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_14686e768;
      }
      local_78.Ptr = *(void **)local_78.Ptr;
    }
    puVar24 = local_78.Ptr;
    if (local_78.Ptr == (undefined8 *)0x0) goto LAB_14686e76a;
  }
  pUVar16 = (param_2->Ptrs).Function.field0_0x0.DebugPtr;
  sVar3 = *(short *)((longlong)&pUVar16->_padding_ + 4);
  uVar4 = pUVar16->ParmsSize;
  iVar12 = (int)sVar3 + (uint)uVar4;
  if (iVar12 == 0) {
    lVar21 = 0;
    puVar23 = auStack_108;
  }
  else {
    uVar20 = (ulonglong)(iVar12 + 0xf);
    uVar17 = uVar20 + 0xf;
    if (uVar17 <= uVar20) {
      uVar17 = 0xffffffffffffff0;
    }
    puVar23 = auStack_108 + -(uVar17 & 0xfffffffffffffff0);
    lVar21 = (longlong)&local_d0 + -(uVar17 & 0xfffffffffffffff0);
  }
  _Dst = (uchar *)((longlong)sVar3 + -1 + lVar21 & ~((longlong)sVar3 - 1U));
  *(undefined8 *)(puVar23 + -8) = 0x14686e7f1;
  memset(_Dst,0,(ulonglong)uVar4);
  local_b0 = (TObjectPtr<UFunction>_u_0)(param_2->Ptrs).Function.field0_0x0.DebugPtr;
  if (local_b0.DebugPtr == (UFunction *)0x0) {
    local_a8 = (FProperty *)0x0;
  }
  else {
    local_a8 = (FProperty *)(local_b0.DebugPtr)->_padding_;
  }
  local_a0 = 0xffffffff;
  local_9c = 0x101;
  local_9a = 0;
  *(undefined8 *)(puVar23 + -8) = 0x14686e829;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_b0.ObjectPtr);
  pFVar19 = local_a8;
  while ((local_a8 = pFVar19, pFVar19 != (FProperty *)0x0 && ((char)pFVar19->PropertyFlags < '\0')))
  {
    if ((pFVar19->PropertyFlags >> 9 & 1) == 0) {
      *(undefined8 *)(puVar23 + -8) = 0x14686e84c;
      FProperty::InitializeValue_InContainer(pFVar19,_Dst);
    }
    local_a8 = (FProperty *)pFVar19->_padding_;
    *(undefined8 *)(puVar23 + -8) = 0x14686e85d;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_b0.ObjectPtr);
    pFVar19 = local_a8;
  }
  *(undefined8 *)(puVar23 + -8) = 0x14686e86b;
  pFVar13 = FProperty::StaticClass();
  *(undefined8 *)(puVar23 + -8) = 0x14686e87a;
  FFieldPath::GetTyped((FFieldPath *)&(param_2->Ptrs).BoundObjectProperty,pFVar13,(UStruct *)0x0);
  if ((((param_2->ObjectBindingID).D == 0 && (param_2->ObjectBindingID).C == 0) &&
      (param_2->ObjectBindingID).B == 0) && (param_2->ObjectBindingID).A == 0) {
    if (param_3->ArrayNum == 0) {
      pUVar16 = (param_2->Ptrs).Function.field0_0x0.DebugPtr;
      pcVar9 = *(code **)(*(longlong *)param_1 + 0x260);
      *(undefined8 *)(puVar23 + -8) = 0x14686eab8;
      (*pcVar9)(param_1,pUVar16,_Dst);
    }
    else {
      ppUVar26 = param_3->DataPtr;
      ppUVar2 = ppUVar26 + param_3->ArrayNum;
      for (; ppUVar26 != ppUVar2; ppUVar26 = ppUVar26 + 1) {
        local_48.Object = param_4->Object;
        pUVar18 = *ppUVar26;
        uVar5 = (param_2->SequenceID).Value;
        local_48.SharedReferenceCount.ReferenceController =
             (param_4->SharedReferenceCount).ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined8 *)(puVar23 + -8) = 0x14686ea5c;
        pFVar13 = FProperty::StaticClass();
        *(undefined8 *)(puVar23 + -8) = 0x14686ea6b;
        pFVar19 = (FProperty *)
                  FFieldPath::GetTyped
                            ((FFieldPath *)&(param_2->Ptrs).BoundObjectProperty,pFVar13,
                             (UStruct *)0x0);
        *(uint *)(puVar23 + 0x20) = uVar5;
        *(undefined8 *)(puVar23 + -8) = 0x14686ea84;
        bVar11 = PatchBoundObject(_Dst,pUVar18,pFVar19,&local_48,
                                  (FMovieSceneSequenceID)*(uint *)(puVar23 + 0x20));
        pUVar18 = local_98;
        if (bVar11) {
          pUVar16 = (param_2->Ptrs).Function.field0_0x0.DebugPtr;
          pcVar9 = *(code **)(*(longlong *)local_98 + 0x260);
          *(undefined8 *)(puVar23 + -8) = 0x14686ea9b;
          (*pcVar9)(pUVar18,pUVar16);
        }
      }
    }
  }
  else {
    pTVar8 = (param_4->SharedReferenceCount).ReferenceController;
    pFVar7 = param_4->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = (param_2->SequenceID).Value;
    if (*(int *)(puVar24 + 0x16) != *(int *)((longlong)puVar24 + 0xdc)) {
      puVar22 = (undefined8 *)puVar24[0x1d];
      if ((undefined8 *)puVar24[0x1d] == (undefined8 *)0x0) {
        puVar22 = puVar24 + 0x1c;
      }
      iVar12 = *(int *)((longlong)puVar22 + (ulonglong)(*(int *)(puVar24 + 0x1e) - 1U & uVar5) * 4);
      if (iVar12 != -1) {
        lVar21 = puVar24[0x15];
        do {
          if (*(uint *)((longlong)iVar12 * 0x198 + lVar21) == uVar5) {
            if (((iVar12 != -1) && (lVar21 = (longlong)iVar12 * 0x198 + lVar21, lVar21 != 0)) &&
               (this = (FMovieSceneObjectCache *)(lVar21 + 8), this != (FMovieSceneObjectCache *)0x0
               )) {
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_68.Object = pFVar7;
              local_68.SharedReferenceCount.ReferenceController = pTVar8;
              *(undefined8 *)(puVar23 + -8) = 0x14686ea0b;
              FMovieSceneObjectCache::FindBoundObjects
                        (this,&local_90,&param_2->ObjectBindingID,&local_68);
              goto LAB_14686e90d;
            }
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x198 + 400 + lVar21);
        } while (iVar12 != -1);
      }
    }
    local_90.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    local_90.ArrayNum = 0;
LAB_14686e90d:
    *(undefined8 *)(puVar23 + -8) = 0x14686e915;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar1 = &local_90.DataPtr[local_90.ArrayNum].WeakPtr;
    for (pFVar25 = &(local_90.DataPtr)->WeakPtr; pFVar25 != pFVar1; pFVar25 = pFVar25 + 1) {
      local_80 = *pFVar25;
      *(undefined8 *)(puVar23 + -8) = 0x14686e940;
      pUVar18 = FWeakObjectPtr::Get(&local_80);
      if (pUVar18 != (UObject *)0x0) {
        local_58.Object = param_4->Object;
        uVar5 = (param_2->SequenceID).Value;
        local_58.SharedReferenceCount.ReferenceController =
             (param_4->SharedReferenceCount).ReferenceController;
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined8 *)(puVar23 + -8) = 0x14686e971;
        pFVar13 = FProperty::StaticClass();
        *(undefined8 *)(puVar23 + -8) = 0x14686e980;
        pFVar19 = (FProperty *)
                  FFieldPath::GetTyped
                            ((FFieldPath *)&(param_2->Ptrs).BoundObjectProperty,pFVar13,
                             (UStruct *)0x0);
        *(uint *)(puVar23 + 0x20) = uVar5;
        *(undefined8 *)(puVar23 + -8) = 0x14686e999;
        bVar11 = PatchBoundObject(_Dst,pUVar18,pFVar19,&local_58,
                                  (FMovieSceneSequenceID)*(uint *)(puVar23 + 0x20));
        pUVar18 = local_98;
        if (bVar11) {
          pUVar16 = (param_2->Ptrs).Function.field0_0x0.DebugPtr;
          pcVar9 = *(code **)(*(longlong *)local_98 + 0x260);
          *(undefined8 *)(puVar23 + -8) = 0x14686e9b0;
          (*pcVar9)(pUVar18,pUVar16);
        }
      }
    }
  }
  local_d0 = (TObjectPtr<UFunction>_u_0)(param_2->Ptrs).Function.field0_0x0.DebugPtr;
  if (local_d0.DebugPtr == (UFunction *)0x0) {
    local_c8 = (longlong *)0x0;
  }
  else {
    local_c8 = (longlong *)(local_d0.DebugPtr)->_padding_;
  }
  local_c0 = 0xffffffff;
  local_bc = 0x101;
  local_ba = 0;
  *(undefined8 *)(puVar23 + -8) = 0x14686eaef;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_d0.ObjectPtr);
  plVar10 = local_c8;
  while ((local_c8 = plVar10, plVar10 != (longlong *)0x0 && ((char)plVar10[7] < '\0'))) {
    if ((~(byte)((ulonglong)plVar10[7] >> 0x24) & 1) != 0) {
      pcVar9 = *(code **)(*plVar10 + 0x138);
      if ((int)plVar10[6] < 1) {
        *(int *)(puVar23 + 0x28) = (int)plVar10[6];
        *(undefined4 *)(puVar23 + 0x20) = 0;
        *(undefined8 *)(puVar23 + -8) = 0x14686eb57;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (_Dst == (uchar *)0x0) {
        *(undefined8 *)(puVar23 + -8) = 0x14686eb86;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar12 = *(int *)((longlong)plVar10 + 0x44);
      *(undefined8 *)(puVar23 + -8) = 0x14686eb9d;
      (*pcVar9)(plVar10,_Dst + iVar12);
    }
    local_c8 = (longlong *)plVar10[3];
    *(undefined8 *)(puVar23 + -8) = 0x14686ebae;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_d0.ObjectPtr);
    plVar10 = local_c8;
  }
LAB_14686ebbb:
  pTVar8 = (param_4->SharedReferenceCount).ReferenceController;
  *(undefined8 *)(puVar23 + -8) = 0x14686ebc9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  *(undefined8 *)(puVar23 + -8) = 0x14686ebd8;
  return;
}

// TriggerEvents @ 14686ec10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneEventSystem::TriggerEvents
          (TArrayView<FMovieSceneEventTriggerData_const_,int> *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  int *piVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UObject *pUVar10;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar11;
  IMovieScenePlayer *pIVar12;
  undefined8 *puVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_MovieSceneEval_TriggerEvents> FVar15;
  FThreadStats *this;
  FThreadStatsPool *pFVar16;
  uint uVar17;
  FStatMessage *pFVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FSequenceDirectorPlaybackCapability *this_00;
  FMovieSceneEventTriggerData *pFVar21;
  undefined1 local_res8 [8];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FSharedReferencer<1> *local_1e8;
  UObject **local_1e0;
  byte local_1d8;
  byte local_1d4;
  byte local_1d0;
  FColor_u_0 local_1cc;
  FName local_1c8;
  uint local_1c0;
  uint uStack_1bc;
  FString local_1b8;
  FName local_1a8;
  FSharedPlaybackState *local_198;
  TReferenceControllerBase<1> *local_190;
  FPlaybackCapabilityPtr local_188;
  FName local_178;
  FName local_170;
  LARGE_INTEGER local_168;
  FName local_160;
  LARGE_INTEGER local_158;
  FMovieSceneEventTriggerData *local_150;
  FString local_148;
  FStatMessage local_138;
  FString local_128;
  FStatMessage local_118;
  FPlaybackCapabilityPtr local_108;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_f8;
  FPlaybackCapabilityPtr local_e8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_d8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c8;
  UObject **local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_a8;
  FName local_98;
  void *local_90 [2];
  undefined8 local_80 [2];
  void *local_70 [3];
  TArrayView<UObject_*_const,int> local_58;
  
  local_res10 = param_2;
  pUVar10 = FWeakObjectPtr::Get(&(param_2->Object->WeakRootSequence).WeakPtr);
  local_178.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
  local_178.Number = *(uint *)&pUVar10->field_0x1c;
  ::FName::ToString(&local_178,&local_1b8);
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  pFVar2 = param_2->Object;
  bVar8 = IsInGameThread();
  if (!bVar8) {
    local_res8[0] = bVar8;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  UE::MovieScene::FSequenceDirectorPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar2->Capabilities,&local_108,1 << (local_1d8 & 0x1f));
  if (local_108.Ptr == (FSequenceDirectorPlaybackCapability *)0x0) {
LAB_14686ed1a:
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar2 = param_2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = IsInGameThread();
    if (!bVar8) {
      local_res18[0] = bVar8;
      `UE::MovieScene::FSharedPlaybackState::
      AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::
      operator()(local_res18);
    }
    UE::MovieScene::FSequenceDirectorPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability>
              ((FPlaybackCapabilitiesImpl *)&pFVar2->Capabilities,&local_188,1 << (local_1d4 & 0x1f)
              );
    if ((local_188.Ptr == (FSequenceDirectorPlaybackCapability *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_188.Ptr;
    if (local_188.StorageMode != Inline) {
      if ((local_188.StorageMode == RawPointer) || (local_188.StorageMode == SharedPointer)) {
        this_00 = *(FSequenceDirectorPlaybackCapability **)local_188.Ptr;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    pcVar5 = *(code **)(this_00->_padding_ + 8);
    pTVar11 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                        ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)pFVar2,&local_f8
                        );
    pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar11->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198 = pFVar2;
    local_190 = pTVar4;
    (*pcVar5)(this_00,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    param_2 = local_res10;
  }
  else {
    this_00 = local_108.Ptr;
    if (local_108.StorageMode != Inline) {
      if ((local_108.StorageMode != RawPointer) && (local_108.StorageMode != SharedPointer)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x30,L"Unexpected playback capability storage mode");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_14686ed1a;
      }
      this_00 = *(FSequenceDirectorPlaybackCapability **)local_108.Ptr;
    }
    if (this_00 == (FSequenceDirectorPlaybackCapability *)0x0) goto LAB_14686ed1a;
  }
  pFVar2 = param_2->Object;
  local_1e0 = (UObject **)0x0;
  local_res10 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                ((ulonglong)local_res10 & 0xffffffff00000000);
  bVar8 = IsInGameThread();
  if (!bVar8) {
    local_res20[0] = 0;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::IEventContextsPlaybackCapability>'::__l2::<lambda_1>::operator()
              (local_res20);
  }
  UE::MovieScene::IEventContextsPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar2->Capabilities,&local_e8,1 << (local_1d0 & 0x1f));
  if (local_e8.Ptr != (longlong *)0x0) {
    if (local_e8.StorageMode != Inline) {
      if ((local_e8.StorageMode != RawPointer) && (local_e8.StorageMode != SharedPointer)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x30,L"Unexpected playback capability storage mode");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_14686eee3;
      }
      local_e8.Ptr = *(void **)local_e8.Ptr;
    }
    if (local_e8.Ptr != (longlong *)0x0) {
      puVar13 = (undefined8 *)(**(code **)(*(longlong *)local_e8.Ptr + 8))(local_e8.Ptr,local_90);
      if (local_80 != puVar13) {
        local_1e0 = (UObject **)*puVar13;
        *puVar13 = 0;
        local_res10 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                      CONCAT44(local_res10._4_4_,*(undefined4 *)(puVar13 + 1));
        puVar13[1] = 0;
      }
      if (local_90[0] != (void *)0x0) {
        FMemory::Free(local_90[0]);
      }
      goto LAB_14686ef67;
    }
  }
LAB_14686eee3:
  local_d8.Object = param_2->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar12 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_d8);
  if (pIVar12 != (IMovieScenePlayer *)0x0) {
    puVar13 = (undefined8 *)(**(code **)(pIVar12->_padding_ + 0x88))(pIVar12,local_70);
    if (local_80 != puVar13) {
      local_1e0 = (UObject **)*puVar13;
      *puVar13 = 0;
      local_res10 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                    CONCAT44(local_res10._4_4_,*(undefined4 *)(puVar13 + 1));
      puVar13[1] = 0;
    }
    if (local_70[0] != (void *)0x0) {
      FMemory::Free(local_70[0]);
    }
  }
LAB_14686ef67:
  local_1e8 = &param_2->SharedReferenceCount;
  pFVar21 = param_1->DataPtr;
  local_150 = pFVar21 + param_1->ArrayNum;
  if (pFVar21 != local_150) {
    do {
      FVar15 = StatPtr_MovieSceneEval_TriggerEvents;
      if (StatPtr_MovieSceneEval_TriggerEvents ==
          (FThreadSafeStaticStat<FStat_MovieSceneEval_TriggerEvents>)0x0) {
        pFVar14 = ::FName::FName(&local_98,"MovieSceneEval_TriggerEvents");
        FVar15 = (FThreadSafeStaticStat<FStat_MovieSceneEval_TriggerEvents>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_TriggerEvents,
                            *pFVar14,L"Trigger Events","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                            L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
      FVar20 = *(FName *)FVar15;
      bVar8 = false;
      bVar7 = false;
      local_1a8.ComparisonIndex.Value = 0;
      local_1a8.Number = 0;
      FVar19 = FVar20.ComparisonIndex.Value;
      uVar17 = FVar20.Number;
      if ((FVar19.Value == 0) && (uVar17 == 0)) {
LAB_14686f10e:
        bVar6 = false;
        FVar20 = local_1a8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_1cc.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_1cc._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
          bVar8 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_1c8.ComparisonIndex.Value = FVar19.Value;
            local_1c8.Number = uVar17;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_1c8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneEventSystems.cpp"
                       ,0xab);
            bVar8 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14686f10e;
        local_1c0 = FVar19.Value;
        uStack_1bc = uVar17;
        local_1a8 = FVar20;
        FThreadStats::AddMessage(FVar20,CycleScopeStart);
        bVar6 = true;
      }
      local_c8.Object = param_2->Object;
      local_c8.SharedReferenceCount.ReferenceController = local_1e8->ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar10 = UE::MovieScene::FSequenceDirectorPlaybackCapability::GetOrCreateDirectorInstance
                          (this_00,&local_c8,&pFVar21->SequenceID);
      if (pUVar10 == (UObject *)0x0) {
        if (2 < (byte)LogMovieScene._0_1_) {
          local_170 = (FName)((pFVar21->Ptrs).Function.field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_170,&local_148);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((bVar6) && (FVar20 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          this = TlsGetValue(FThreadStats::TlsSlot);
          if (this == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            this = FThreadStatsPool::GetFromPool(pFVar16);
          }
          if (this->bWaitForExplicitFlush < this->ScopeCount) {
            local_138.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
            local_138.NameAndInfo.Index.Value = FVar20.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_168);
            local_138.StatData.Pad[4] = '\0';
            local_138.StatData.Pad[5] = '\0';
            local_138.StatData.Pad[6] = '\0';
            local_138.StatData.Pad[7] = '\0';
            local_138.StatData.Pad[0] = local_168.s.LowPart._0_1_;
            local_138.StatData.Pad[1] = local_168.s.LowPart._1_1_;
            local_138.StatData.Pad[2] = local_168.s.LowPart._2_1_;
            local_138.StatData.Pad[3] = local_168.s.LowPart._3_1_;
            pFVar18 = &local_138;
LAB_14686f42e:
            FThreadStats::AddStatMessage(this,pFVar18);
            piVar1 = &this->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this,false,false);
            }
          }
        }
      }
      else {
        if ((6 < (byte)LogMovieScene._0_1_) &&
           (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene),
           6 < (byte)LogMovieScene._0_1_)) {
          local_160 = (FName)((pFVar21->Ptrs).Function.field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_160,&local_128);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        if ((((pFVar21->Ptrs).Function.field0_0x0.DebugPtr)->NumParms == '\0') &&
           ((((pFVar21->ObjectBindingID).D == 0 && (pFVar21->ObjectBindingID).C == 0) &&
            (pFVar21->ObjectBindingID).B == 0) && (pFVar21->ObjectBindingID).A == 0)) {
          (**(code **)(*(longlong *)pUVar10 + 0x260))(pUVar10);
        }
        else {
          local_a8.Object = param_2->Object;
          local_a8.SharedReferenceCount.ReferenceController = local_1e8->ReferenceController;
          if (local_a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_b8 = local_1e0;
          if ((int)local_res10 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_58._12_4_ = uStack_ac;
          local_58.ArrayNum = (int)local_res10;
          local_58.DataPtr = local_b8;
          iStack_b0 = (int)local_res10;
          TriggerEventWithParameters(pUVar10,pFVar21,&local_58,&local_a8);
        }
        if (bVar7) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar6) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          this = TlsGetValue(FThreadStats::TlsSlot);
          if (this == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            this = FThreadStatsPool::GetFromPool(pFVar16);
          }
          if (this->bWaitForExplicitFlush < this->ScopeCount) {
            local_118.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
            local_118.NameAndInfo.Index.Value = FVar20.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_158);
            local_118.StatData.Pad[4] = '\0';
            local_118.StatData.Pad[5] = '\0';
            local_118.StatData.Pad[6] = '\0';
            local_118.StatData.Pad[7] = '\0';
            local_118.StatData.Pad[0] = local_158.s.LowPart._0_1_;
            local_118.StatData.Pad[1] = local_158.s.LowPart._1_1_;
            local_118.StatData.Pad[2] = local_158.s.LowPart._2_1_;
            local_118.StatData.Pad[3] = local_158.s.LowPart._3_1_;
            pFVar18 = &local_118;
            goto LAB_14686f42e;
          }
        }
      }
      pFVar21 = pFVar21 + 1;
    } while (pFVar21 != local_150);
  }
  if (local_1e0 != (UObject **)0x0) {
    FMemory::Free(local_1e0);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8->ReferenceController);
  return;
}

// operator() @ 1504f4640

bool __thiscall
`UMovieSceneEventSystem::TriggerEventWithParameters'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7405640760772525855>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7405640760772525855>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5150

bool __thiscall
`UMovieSceneEventSystem::TriggerEventWithParameters'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7405640760772525849>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7405640760772525849>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

