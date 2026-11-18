// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1467ceb30

UClass * __cdecl UMovieSceneLevelVisibilitySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneLevelVisibilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneLevelVisibilitySystem,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLevelVisibilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilitySystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.InnerSingleton;
}

// UMovieSceneLevelVisibilitySystem @ 146809840

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneLevelVisibilitySystem * __thiscall
UMovieSceneLevelVisibilitySystem::UMovieSceneLevelVisibilitySystem
          (UMovieSceneLevelVisibilitySystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  (this->ApplicableFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  (this->ApplicableFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ApplicableFilter).Cache.LastSystemVersion = 0;
  (this->ApplicableFilter).bContainsMatch = false;
  *(undefined8 *)&(this->SharedData).VisibilityMap = 0;
  *(undefined8 *)&(this->SharedData).VisibilityMap.field_0x8 = 0;
  *(undefined8 *)&(this->SharedData).VisibilityMap.field_0x20 = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x28 = 0;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x34 = 0;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SharedData).VisibilityMap.field_0x40 = 0;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x48 = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap.field_0x8 = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap.field_0x20 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x28 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x34 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SharedData).NameToLevelMap.field_0x40 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x48 = 0;
  (this->SharedData).LevelsToRestore.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->SharedData).LevelsToRestore.ArrayNum = 0;
  (this->SharedData).LevelsToRestore.ArrayMax = 8;
  return this;
}

// UMovieSceneLevelVisibilitySystem @ 146809950

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneLevelVisibilitySystem * __thiscall
UMovieSceneLevelVisibilitySystem::UMovieSceneLevelVisibilitySystem
          (UMovieSceneLevelVisibilitySystem *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  FScriptContainerElement *this_00;
  undefined8 local_res8;
  UObject *local_res18;
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  (this->ApplicableFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.AllMask.Bits.NumBits = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  (this->ApplicableFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ApplicableFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ApplicableFilter).Cache.LastSystemVersion = 0;
  (this->ApplicableFilter).bContainsMatch = false;
  *(undefined8 *)&(this->SharedData).VisibilityMap = 0;
  *(undefined8 *)&(this->SharedData).VisibilityMap.field_0x8 = 0;
  *(undefined8 *)&(this->SharedData).VisibilityMap.field_0x20 = 0;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x28 = 0;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x34 = 0;
  *(undefined8 *)&(this->SharedData).VisibilityMap.field_0x40 = 0;
  *(undefined4 *)&(this->SharedData).VisibilityMap.field_0x48 = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap.field_0x8 = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap.field_0x20 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x28 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x34 = 0;
  *(undefined8 *)&(this->SharedData).NameToLevelMap.field_0x40 = 0;
  *(undefined4 *)&(this->SharedData).NameToLevelMap.field_0x48 = 0;
  (this->SharedData).LevelsToRestore.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->SharedData).LevelsToRestore.ArrayNum = 0;
  (this->SharedData).LevelsToRestore.ArrayMax = 8;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 2;
  *(TComponentTypeID<FLevelVisibilityComponentData> *)&this->_padding_ = pFVar5->LevelVisibility;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
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
  local_28._First = (FComponentTypeID *)&local_res8;
  local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 2);
  local_res8._0_2_ = (ushort)pFVar5->LevelVisibility;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&this->ApplicableFilter,&local_28);
  piVar1 = &(this->ApplicableFilter).Filter.ComplexMasks.ArrayMax;
  uVar2._0_2_ = (pFVar4->Tags).NeedsLink;
  uVar2._2_2_ = (pFVar4->Tags).NeedsUnlink;
  local_res8 = (UClass *)CONCAT44(local_res8._4_4_,uVar2);
  iVar3 = (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&(this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance,piVar1)
    ;
  }
  (this->ApplicableFilter).Filter.ComplexMasks.ArrayNum = iVar3 + 1;
  local_28._First = (FComponentTypeID *)&local_res8;
  this_00 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data +
            (longlong)iVar3 * 0x3c;
  local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 4);
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0x180;
  this_00[0x38].field_0x0 = 2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_28);
  return this;
}

// ~UMovieSceneLevelVisibilitySystem @ 14680f6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneLevelVisibilitySystem::~UMovieSceneLevelVisibilitySystem
          (UMovieSceneLevelVisibilitySystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UE::MovieScene::FMovieSceneLevelStreamingSharedData::~FMovieSceneLevelStreamingSharedData
            (&this->SharedData);
  pFVar1 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// operator() @ 1468138a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneLevelVisibilitySystem::OnRun'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FInstanceHandle> param_3,
          TRead<FLevelVisibilityComponentData> param_4,TReadOptional<short> param_5)

{
  FName *pFVar1;
  ushort uVar2;
  FMovieSceneEntityID FVar3;
  int iVar4;
  UMovieSceneLevelVisibilitySection *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ELevelVisibility EVar10;
  FComponentMask *pFVar11;
  FEntityAllocation *pFVar12;
  TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> *pTVar13;
  undefined1 *puVar14;
  longlong lVar15;
  ushort *puVar16;
  longlong lVar17;
  FName *pFVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  TReadOptional<short> TVar23;
  short sVar24;
  TRead<UE::MovieScene::FInstanceHandle> local_res20;
  int local_90;
  undefined4 uStack_5c;
  TArrayView<FName_const_,int> local_58;
  
  pFVar11 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
  uVar2 = *(ushort *)(*(longlong *)((longlong)this + 8) + 0x132);
  if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
     (bVar7 = true,
     (*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
     == 0)) {
    bVar7 = false;
  }
  uVar2 = *(ushort *)(*(longlong *)((longlong)this + 8) + 0x134);
  if (((uVar2 == 0xffff) || ((pFVar11->Bits).NumBits <= (int)(uint)uVar2)) ||
     (bVar8 = true,
     (*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
     == 0)) {
    bVar8 = false;
  }
  local_90 = 0;
  pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
  if (pFVar12->Size != 0) {
    TVar23 = param_5;
    local_res20 = param_3;
    do {
      FVar3.Value = *(ushort *)(((longlong)param_2 - (longlong)param_5) + (longlong)TVar23);
      this_00 = *(UMovieSceneLevelVisibilitySection **)param_4;
      if (this_00 == (UMovieSceneLevelVisibilitySection *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7137743210771644872>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneLevelVisibilitySystem.cpp"
                           ,0x1c8,"Section");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        EVar10 = UMovieSceneLevelVisibilitySection::GetVisibility(this_00);
        if (bVar7) {
          if (param_5 == (TReadOptional<short>)0x0) {
            sVar24 = 0;
          }
          else {
            sVar24 = *(short *)TVar23;
          }
          iVar4 = (this_00->LevelNames).ArrayNum;
          lVar5 = *(longlong *)this;
          pFVar18 = (FName *)(this_00->LevelNames).AllocatorInstance.Data;
          if ((iVar4 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_58._12_4_ = uStack_5c;
          local_58.ArrayNum = iVar4;
          local_58.DataPtr = pFVar18;
          UE::MovieScene::FMovieSceneLevelStreamingSharedData::AssignLevelVisibilityOverrides
                    ((FMovieSceneLevelStreamingSharedData *)(lVar5 + 0xe0),
                     *(FInstanceHandle *)local_res20,&local_58,EVar10,(int)sVar24,FVar3);
        }
        if (bVar8) {
          pFVar18 = (FName *)(this_00->LevelNames).AllocatorInstance.Data;
          iVar4 = (this_00->LevelNames).ArrayNum;
          lVar5 = *(longlong *)this;
          if ((iVar4 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar1 = pFVar18 + iVar4;
          for (; pFVar18 != pFVar1; pFVar18 = pFVar18 + 1) {
            pTVar13 = TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                              *)(lVar5 + 0xe0),*pFVar18);
            puVar14 = &pTVar13->field_0x8;
            if (pTVar13 ==
                (TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>
                 *)0x0) {
              puVar14 = (undefined1 *)0x0;
            }
            if (puVar14 != (undefined1 *)0x0) {
              iVar4 = *(int *)(puVar14 + 0x30);
              lVar15 = (longlong)iVar4;
              if (iVar4 != 0) {
                iVar20 = 0;
                lVar17 = 0;
                puVar19 = puVar14 + 8;
                if (*(undefined1 **)(puVar14 + 0x28) != (undefined1 *)0x0) {
                  puVar19 = *(undefined1 **)(puVar14 + 0x28);
                }
                bVar9 = *(ushort *)(puVar19 + 4) != FVar3.Value;
                iVar21 = 0;
                do {
                  lVar17 = lVar17 + 1;
                  iVar22 = iVar21 + 1;
                  if (lVar17 < lVar15) {
                    puVar16 = (ushort *)(puVar19 + lVar17 * 0x10 + 4);
                    do {
                      if (bVar9 != (*puVar16 != FVar3.Value)) break;
                      iVar22 = iVar22 + 1;
                      lVar17 = lVar17 + 1;
                      puVar16 = puVar16 + 8;
                    } while (lVar17 < lVar15);
                  }
                  if (bVar9 != false) {
                    if (iVar20 != iVar21) {
                      memmove(puVar19 + (longlong)iVar20 * 0x10,puVar19 + (longlong)iVar21 * 0x10,
                              (longlong)(iVar22 - iVar21) << 4);
                    }
                    iVar20 = iVar20 + (iVar22 - iVar21);
                  }
                  bVar9 = (bool)(bVar9 ^ 1);
                  iVar21 = iVar22;
                } while (lVar17 < lVar15);
                *(int *)(puVar14 + 0x30) = iVar20;
                if ((1 < iVar4 - iVar20) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NumRemoved <= 1",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneLevelVisibilitySystem.cpp"
                                       ,0x158,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
          }
        }
      }
      local_90 = local_90 + 1;
      param_4 = (TRead<FLevelVisibilityComponentData>)((longlong)param_4 + 8);
      TVar23 = (TReadOptional<short>)((longlong)TVar23 + 2);
      local_res20 = (TRead<UE::MovieScene::FInstanceHandle>)((longlong)local_res20 + 4);
      pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
    } while (local_90 < (int)(uint)pFVar12->Size);
  }
  return;
}

// GetPrivateStaticClass @ 146835ee0

UClass * __cdecl UMovieSceneLevelVisibilitySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneLevelVisibilitySystem",
               &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneLevelVisibilitySystem,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLevelVisibilitySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneLevelVisibilitySystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.InnerSingleton;
}

// OnLink @ 146842b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneLevelVisibilitySystem::OnLink(UMovieSceneLevelVisibilitySystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  UMovieSceneEntitySystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar2 != (UMovieSceneEntitySystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      FMovieSceneEntitySystemGraph::AddReference
                ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
                 (UMovieSceneEntitySystem *)this,pUVar2);
      return;
    }
    pFVar4 = GetTypeName<UMovieSceneRestorePreAnimatedStateSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_18,pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieSceneRestorePreAnimatedStateSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// OnRun @ 1468455d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneLevelVisibilitySystem::OnRun
          (UMovieSceneLevelVisibilitySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  byte bVar1;
  TComponentTypeID<FLevelVisibilityComponentData> TVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  undefined1 auStack_168 [32];
  FComponentTypeID local_148;
  FComponentTypeID local_146;
  FComponentTypeID local_144;
  FComponentTypeID local_142;
  TComponentTypeID<short> local_140;
  undefined2 uStack_13e;
  undefined8 local_130;
  TStatIdData *pTStack_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined4 uStack_118;
  uint uStack_114;
  initializer_list<UE::MovieScene::FComponentTypeID> local_108;
  initializer_list<UE::MovieScene::FComponentTypeID> local_f8;
  <lambda_1> local_e8;
  undefined1 local_d8 [4];
  TComponentTypeID<FLevelVisibilityComponentData> local_d4;
  undefined4 local_d2;
  wchar_t *local_c8;
  TStatIdData *pTStack_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = UE::MovieScene::FCachedEntityFilterResult_Match::Matches
                    (&this->ApplicableFilter,(FEntityManager *)(this->_padding_ + 0x28));
  if (bVar5) {
    pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_148.Value = *(ushort *)&pFVar6->InstanceHandle;
    bVar1 = local_120 & 0xe0;
    lVar3 = this->_padding_;
    pTStack_128 = &TStatId::TStatId_NAME_None;
    local_130 = 0;
    uStack_118 = 0x6ff;
    uStack_114 = uStack_114 & 0xffffff00;
    uStack_13e = 0x7fff;
    local_140 = pFVar6->HierarchicalBias;
    TVar2 = pFVar7->LevelVisibility;
    local_d2 = _local_140;
    local_a8.AllMask.Bits.NumBits = 0;
    local_a8.AllMask.Bits.MaxBits = 0x180;
    local_a8.NoneMask.Bits.NumBits = 0;
    local_a8.NoneMask.Bits.MaxBits = 0x180;
    local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ComplexMasks.ArrayNum = 0;
    local_a8.ComplexMasks.ArrayMax = 0;
    local_b8 = CONCAT71(uStack_11f,local_120) & 0xffffffffffffffe0;
    uStack_b0._4_4_ = uStack_114;
    uStack_b0._0_4_ = AnyHiPriThreadHiPriTask;
    local_c8 = (wchar_t *)0x0;
    pTStack_c0 = &TStatId::TStatId_NAME_None;
    local_120 = bVar1;
    local_e8.__this = this;
    local_e8.BuiltInComponents = pFVar6;
    local_d8._2_2_ = local_148.Value;
    local_d4 = TVar2;
    if ((TComponentTypeID<UE::MovieScene::FInstanceHandle>)local_148.Value ==
        (TComponentTypeID<UE::MovieScene::FInstanceHandle>)0xffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_108._First = &local_148;
    local_108._Last = &local_146;
    UE::MovieScene::FComponentMask::SetAll(&local_a8.AllMask,&local_108);
    if (TVar2 == (TComponentTypeID<FLevelVisibilityComponentData>)0xffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_f8._First = &local_144;
    local_f8._Last = &local_142;
    local_144.Value = (ushort)TVar2;
    UE::MovieScene::FComponentMask::SetAll(&local_a8.AllMask,&local_f8);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FLevelVisibilityComponentData>,UE::MovieScene::TOptionalReadAccess<short>_>
    ::Iterate_PerAllocationImpl<_UMovieSceneLevelVisibilitySystem::OnRun_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FLevelVisibilityComponentData>,UE::MovieScene::TOptionalReadAccess<short>_>
                *)local_d8,(FEntityManager *)(lVar3 + 0x28),&local_a8,&local_e8);
    if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
    }
    UE::MovieScene::FMovieSceneLevelStreamingSharedData::Flush
              (&this->SharedData,(UMovieSceneEntitySystemLinker *)this->_padding_);
  }
  return;
}

// RestorePreAnimatedState @ 1468610d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneLevelVisibilitySystem::RestorePreAnimatedState
          (UMovieSceneLevelVisibilitySystem *this,FPreAnimationParameters *param_1)

{
  UE::MovieScene::FMovieSceneLevelStreamingSharedData::RestoreLevels
            ((FMovieSceneLevelStreamingSharedData *)
             ((this->ApplicableFilter).Filter.NoneMask.Bits.AllocatorInstance.InlineData + 4),
             *(UMovieSceneEntitySystemLinker **)
              (this[-1].SharedData.LevelsToRestore.AllocatorInstance.InlineData + 0x30));
  return;
}

// SavePreAnimatedState @ 1468691e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneLevelVisibilitySystem::SavePreAnimatedState
          (UMovieSceneLevelVisibilitySystem *this,FPreAnimationParameters *param_1)

{
  return;
}

// StaticRegisterNativesUMovieSceneLevelVisibilitySystem @ 14686cb00

void __cdecl
UMovieSceneLevelVisibilitySystem::StaticRegisterNativesUMovieSceneLevelVisibilitySystem(void)

{
  return;
}

// _getUObject @ 1468753f0

UObject * __thiscall
UMovieSceneLevelVisibilitySystem::_getUObject(UMovieSceneLevelVisibilitySystem *this)

{
  return (UObject *)(this[-1].SharedData.LevelsToRestore.AllocatorInstance.InlineData + 8);
}

