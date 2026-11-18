// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 80

// StaticClass @ 1461616c0

UClass * __cdecl UMovieScene::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScene",
               &Z_Registration_Info_UClass_UMovieScene.InnerSingleton,
               StaticRegisterNativesUMovieScene,0x170,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene>,InternalVTableHelperCtorCaller<UMovieScene>,
               local_res8,UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene.InnerSingleton;
}

// UMovieScene @ 146182ea0

UMovieScene * __thiscall UMovieScene::UMovieScene(UMovieScene *this,FVTableHelper *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8;
  uint local_res18;
  
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScene__6B_;
  (this->Spawnables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spawnables).ArrayNum = 0;
  (this->Spawnables).ArrayMax = 0;
  (this->Possessables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Possessables).ArrayNum = 0;
  (this->Possessables).ArrayMax = 0;
  (this->ObjectBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectBindings).ArrayNum = 0;
  (this->ObjectBindings).ArrayMax = 0;
  *(undefined8 *)&this->BindingGroups = 0;
  *(undefined8 *)&(this->BindingGroups).field_0x8 = 0;
  *(undefined8 *)&(this->BindingGroups).field_0x20 = 0;
  *(undefined4 *)&(this->BindingGroups).field_0x28 = 0;
  *(undefined4 *)&(this->BindingGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->BindingGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BindingGroups).field_0x34 = 0;
  *(undefined8 *)&(this->BindingGroups).field_0x40 = 0;
  *(undefined4 *)&(this->BindingGroups).field_0x48 = 0;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->CameraCutTrack).field0_0x0.DebugPtr = (UMovieSceneTrack *)0x0;
  (this->CustomClock).field0_0x0.DebugPtr = (UMovieSceneClock *)0x0;
  uVar5 = local_res8 >> 8;
  local_res8 = uVar5 << 8;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->SelectionRange).Value.LowerBound = TVar1;
  uVar6 = local_res18 >> 8;
  local_res18 = uVar6 << 8;
  TVar3.Value.Value = 0;
  TVar3._0_4_ = local_res18;
  (this->SelectionRange).Value.UpperBound = TVar3;
  local_res8 = uVar5 << 8;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res8;
  (this->PlaybackRange).Value.LowerBound = TVar2;
  local_res18 = uVar6 << 8;
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res18;
  (this->PlaybackRange).Value.UpperBound = TVar4;
  (this->TickResolution).Numerator = 60000;
  (this->TickResolution).Denominator = 1;
  (this->DisplayRate).Numerator = 60000;
  (this->DisplayRate).Denominator = 1;
  (this->MarkedFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkedFrames).ArrayNum = 0;
  (this->MarkedFrames).ArrayMax = 0;
  (this->GeneratedConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedConditions).ArrayNum = 0;
  (this->GeneratedConditions).ArrayMax = 0;
  return this;
}

// UMovieScene @ 146182ff0

UMovieScene * __thiscall UMovieScene::UMovieScene(UMovieScene *this,FObjectInitializer *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FFrameRate FVar8;
  uint local_res8;
  uint local_res18;
  FGuid local_18;
  
  UMovieSceneDecorationContainerObject::UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScene__6B_;
  (this->Spawnables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spawnables).ArrayNum = 0;
  (this->Spawnables).ArrayMax = 0;
  (this->Possessables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Possessables).ArrayNum = 0;
  (this->Possessables).ArrayMax = 0;
  (this->ObjectBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectBindings).ArrayNum = 0;
  (this->ObjectBindings).ArrayMax = 0;
  *(undefined8 *)&this->BindingGroups = 0;
  *(undefined8 *)&(this->BindingGroups).field_0x8 = 0;
  *(undefined8 *)&(this->BindingGroups).field_0x20 = 0;
  *(undefined4 *)&(this->BindingGroups).field_0x28 = 0;
  *(undefined4 *)&(this->BindingGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->BindingGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BindingGroups).field_0x34 = 0;
  *(undefined8 *)&(this->BindingGroups).field_0x40 = 0;
  *(undefined4 *)&(this->BindingGroups).field_0x48 = 0;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->CameraCutTrack).field0_0x0.DebugPtr = (UMovieSceneTrack *)0x0;
  (this->CustomClock).field0_0x0.DebugPtr = (UMovieSceneClock *)0x0;
  uVar5 = local_res8 >> 8;
  local_res8 = uVar5 << 8;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->SelectionRange).Value.LowerBound = TVar1;
  uVar6 = local_res18 >> 8;
  local_res18 = uVar6 << 8;
  TVar3.Value.Value = 0;
  TVar3._0_4_ = local_res18;
  (this->SelectionRange).Value.UpperBound = TVar3;
  local_res8 = uVar5 << 8;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res8;
  (this->PlaybackRange).Value.LowerBound = TVar2;
  local_res18 = uVar6 << 8;
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res18;
  (this->PlaybackRange).Value.UpperBound = TVar4;
  (this->TickResolution).Numerator = 60000;
  (this->TickResolution).Denominator = 1;
  (this->DisplayRate).Numerator = 60000;
  (this->DisplayRate).Denominator = 1;
  (this->MarkedFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkedFrames).ArrayNum = 0;
  (this->MarkedFrames).ArrayMax = 0;
  (this->GeneratedConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedConditions).ArrayNum = 0;
  (this->GeneratedConditions).ArrayMax = 0;
  this->EvaluationType = WithSubFrames;
  this->ClockSource = Tick;
  if ((this->_padding_ & 0x10) == 0) {
    local_18 = FSequencerObjectVersion::GUID;
    iVar7 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    if (iVar7 < 7) {
      FVar8 = GetLegacyConversionFrameRate();
      this->TickResolution = *(FFrameRate *)FVar8;
    }
  }
  return this;
}

// ~UMovieScene @ 146185c80

void __thiscall UMovieScene::~UMovieScene(UMovieScene *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieScene__6B_;
  pFVar1 = (this->GeneratedConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneMarkedFrame,int>
            ((FMovieSceneMarkedFrame *)(this->MarkedFrames).AllocatorInstance.Data,
             (this->MarkedFrames).ArrayNum);
  pFVar1 = (this->MarkedFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BindingGroups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BindingGroups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneObjectBindingIDs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BindingGroups);
  DestructItems<FMovieSceneBinding,int>
            ((FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data,
             (this->ObjectBindings).ArrayNum);
  pFVar1 = (this->ObjectBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieScenePossessable,int>
            ((FMovieScenePossessable *)(this->Possessables).AllocatorInstance.Data,
             (this->Possessables).ArrayNum);
  pFVar1 = (this->Possessables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneSpawnable,int>
            ((FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data,
             (this->Spawnables).ArrayNum);
  pFVar1 = (this->Spawnables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// AddCameraCutTrack @ 14618cc10

UMovieSceneTrack * __thiscall
UMovieScene::AddCameraCutTrack(UMovieScene *this,TSubclassOf<UMovieSceneTrack> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UMovieSceneTrack *this_00;
  UClass *pUVar5;
  
  if ((this->CameraCutTrack).field0_0x0.DebugPtr == (UMovieSceneTrack *)0x0) {
    pUVar5 = (UClass *)0x0;
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) &&
       (pUVar4 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    this_00 = NewObject<UMovieSceneTrack>
                        ((UObject *)this,pUVar5,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UMovieSceneTrack *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->CameraCutTrack).field0_0x0.DebugPtr = this_00;
    UMovieSceneTrack::OnAddedToMovieScene(this_00,this);
    return (this->CameraCutTrack).field0_0x0.DebugPtr;
  }
  return (this->CameraCutTrack).field0_0x0.DebugPtr;
}

// AddGivenTrack @ 14618d9f0

bool __thiscall UMovieScene::AddGivenTrack(UMovieScene *this,UMovieSceneTrack *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  UMovieSceneTrack *local_18 [2];
  
  pTVar2 = &this->Tracks;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)(this->Tracks).ArrayNum * 8;
  for (; pFVar7 != pFVar3; pFVar7 = pFVar7 + 8) {
    if (*(UMovieSceneTrack **)pFVar7 == (UMovieSceneTrack *)0x0) {
      bVar8 = param_1 == (UMovieSceneTrack *)0x0;
    }
    else {
      bVar8 = *(UMovieSceneTrack **)pFVar7 == param_1;
    }
    if (bVar8) {
      return false;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Tracks).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return (bool)uVar5;
  }
  iVar6 = (this->Tracks).ArrayNum;
  piVar1 = &(this->Tracks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Tracks).ArrayNum = iVar6 + 1;
  *(UMovieSceneTrack **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0x10);
  UMovieSceneTrack::OnAddedToMovieScene(param_1,this);
  return true;
}

// AddGivenTrack @ 14618db60

bool __thiscall
UMovieScene::AddGivenTrack(UMovieScene *this,UMovieSceneTrack *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMovieSceneBinding *this_00;
  
  if (((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectGuid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x4ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_1 == (UMovieSceneTrack *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTrack",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x4ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = FindBinding(this,param_2);
  if (this_00 != (FMovieSceneBinding *)0x0) {
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0x10);
    FMovieSceneBinding::AddTrack(this_00,param_1,this);
    return true;
  }
  return false;
}

// AddMarkedFrame @ 14618dd20

int __thiscall UMovieScene::AddMarkedFrame(UMovieScene *this,FMovieSceneMarkedFrame *param_1)

{
  int *piVar1;
  TArray<FMovieSceneMarkedFrame,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMovieSceneMarkedFrame *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FString *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  int local_84;
  FText local_80;
  FString local_70;
  FString local_60 [2];
  
  pFVar19 = (FScriptContainerElement *)0x0;
  iVar8 = 0;
  if ((param_1->Label).Data.ArrayNum < 2) {
    FText::AsLocalizable_Advanced_LocText
              (&local_80,L"MovieScene",L"MarkedFrameCharacters",L"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    bVar7 = false;
    local_84 = 1;
    bVar6 = false;
    do {
      uVar16 = 0;
      uVar20 = uVar16;
LAB_14618dd95:
      iVar3 = local_84;
      pFVar12 = FText::ToString(&local_80);
      iVar15 = (pFVar12->Data).ArrayNum;
      iVar9 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar9 = 0;
      }
      iVar15 = (int)uVar16;
      if ((iVar15 < iVar9) && (!bVar7)) {
        pFVar12 = FText::ToString(&local_80);
        if (-1 < iVar15) {
          iVar9 = (pFVar12->Data).ArrayNum;
          iVar13 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar13 = 0;
          }
          if (iVar15 < iVar13) goto LAB_14618de13;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
LAB_14618de13:
        pFVar12 = ::FString::ChrN(&local_70,iVar3,
                                  *(wchar_t *)((pFVar12->Data).AllocatorInstance.Data + uVar20));
        if (local_60 != pFVar12) {
          if (pFVar19 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar19);
          }
          pFVar19 = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar8 = (pFVar12->Data).ArrayNum;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        iVar3 = (this->MarkedFrames).ArrayNum;
        pFVar14 = (this->MarkedFrames).AllocatorInstance.Data;
        pFVar17 = pFVar14 + (longlong)iVar3 * 0x20;
        do {
          if ((this->MarkedFrames).ArrayNum != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FMovieSceneMarkedFrame,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar14 == pFVar17) {
            bVar7 = true;
            uVar16 = (ulonglong)(iVar15 + 1);
            bVar6 = true;
            uVar20 = uVar20 + 2;
            goto LAB_14618dd95;
          }
          iVar9 = *(int *)(pFVar14 + 0x10);
          if (iVar9 == iVar8) {
            if (iVar9 < 2) goto LAB_14618deed;
            iVar9 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(pFVar14 + 8),(wchar_t *)pFVar19);
            bVar7 = iVar9 == 0;
          }
          else {
            bVar7 = iVar9 + iVar8 == 1;
          }
          if (bVar7) goto LAB_14618deed;
          pFVar14 = pFVar14 + 0x20;
        } while( true );
      }
      local_84 = iVar3 + 1;
    } while (!bVar7);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  pTVar2 = &this->MarkedFrames;
  pFVar4 = (FMovieSceneMarkedFrame *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->MarkedFrames).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  uVar10 = (this->MarkedFrames).ArrayNum;
  piVar1 = &(this->MarkedFrames).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar14 = (pTVar2->AllocatorInstance).Data;
  (this->MarkedFrames).ArrayNum = uVar10 + 1;
  pFVar14 = pFVar14 + (longlong)(int)uVar10 * 0x20;
  *(int *)pFVar14 = (param_1->FrameNumber).Value;
  ::FString::FString((FString *)(pFVar14 + 8),&param_1->Label);
  pFVar14[0x18] = (FScriptContainerElement)param_1->bIsDeterminismFence;
  pFVar14[0x19] = (FScriptContainerElement)param_1->bIsInclusiveTime;
  if (1 < iVar8) {
    uVar11 = 0;
    if ((int)uVar10 < (this->MarkedFrames).ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    iVar15 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar15 = 0;
    }
    ::FString::AssignRange
              ((FString *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20 + 8),
               (wchar_t *)pFVar19,iVar15);
  }
  local_res10 = SUB81(param_1,0);
  local_88[0] = 0;
  AlgoImpl::
  IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
            ((FMovieSceneMarkedFrame *)(pTVar2->AllocatorInstance).Data,
             (this->MarkedFrames).ArrayNum,local_res10,(<lambda_1> *)local_88);
  uVar10 = 0;
  iVar8 = (param_1->FrameNumber).Value;
  if (0 < (this->MarkedFrames).ArrayNum) {
    lVar18 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar10 < (this->MarkedFrames).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if (*(int *)((pTVar2->AllocatorInstance).Data + lVar18) == iVar8) goto LAB_14618e118;
      uVar10 = uVar10 + 1;
      lVar18 = lVar18 + 0x20;
    } while ((int)uVar10 < (this->MarkedFrames).ArrayNum);
  }
  uVar10 = 0xffffffff;
LAB_14618e118:
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar19);
  }
  return uVar10;
LAB_14618deed:
  uVar16 = (ulonglong)(iVar15 + 1);
  uVar20 = uVar20 + 2;
  bVar7 = bVar6;
  goto LAB_14618dd95;
}

// AddNewBindingTag @ 14618e420

void __thiscall UMovieScene::AddNewBindingTag(UMovieScene *this,FName *param_1)

{
  TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
  ::Emplace<FName_const_&>
            ((TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
              *)&this->BindingGroups,param_1);
  return;
}

// AddPossessable @ 14618e740

FGuid * __thiscall
UMovieScene::AddPossessable
          (UMovieScene *this,FGuid *__return_storage_ptr__,FString *param_1,UClass *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FGuid *pFVar10;
  FMovieSceneBinding local_e8;
  undefined1 local_a8 [40];
  void *local_80;
  undefined8 local_78;
  FGuid local_70;
  FString local_60;
  FGuid local_50;
  FGuid local_40;
  int local_30;
  int local_2c;
  
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_a8._32_8_ = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_a8._16_8_ = (UFunction *)0x0;
  local_a8._24_8_ = 0;
  FGuid::NewGuid(&local_70);
  ::FString::FString(&local_60,param_1);
  local_50.A = 0;
  local_50.B = 0;
  local_50.C = 0;
  local_50.D = 0;
  local_40.A = 0;
  local_40.B = 0;
  local_40.C = 0;
  local_40.D = 0;
  local_30 = 0;
  local_2c = -1;
  uVar7 = InsertSorted<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FMovieScenePossessable>
                    (&this->Possessables,(FMovieScenePossessable *)local_a8);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  piVar1 = &(this->Possessables).ArrayNum;
  if ((((int)uVar7 < 0) || (*piVar1 <= (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Possessables.IsValidIndex(NewPossessableIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                         ,0x18b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar3)();
    return pFVar10;
  }
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar3)();
    return pFVar10;
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  pFVar2 = (this->Possessables).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x80 + 0x38;
  local_e8.ObjectGuid._0_8_ = *(undefined8 *)pFVar2;
  local_e8.ObjectGuid._8_8_ = *(undefined8 *)(pFVar2 + 8);
  local_e8.BindingName_DEPRECATED.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.BindingName_DEPRECATED.Data.ArrayNum = 0;
  local_e8.BindingName_DEPRECATED.Data.ArrayMax = 0;
  local_e8.Tracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Tracks.ArrayNum = 0;
  local_e8.Tracks.ArrayMax = 0;
  uVar8 = InsertSorted<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FMovieSceneBinding>
                    (&this->ObjectBindings,&local_e8);
  if (local_e8.Tracks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Tracks.AllocatorInstance.Data);
  }
  if (local_e8.BindingName_DEPRECATED.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_e8.BindingName_DEPRECATED.Data.AllocatorInstance.Data);
  }
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  piVar1 = &(this->ObjectBindings).ArrayNum;
  if ((((int)uVar8 < 0) || (*piVar1 <= (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectBindings.IsValidIndex(NewBindingIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                         ,0x18e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar3)();
    return pFVar10;
  }
  uVar9 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar3)();
    return pFVar10;
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->Possessables).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar3)();
    return pFVar10;
  }
  pFVar2 = (this->Possessables).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x80 + 0x38;
  uVar4 = *(undefined8 *)pFVar2;
  uVar5 = *(undefined8 *)(pFVar2 + 8);
  __return_storage_ptr__->A = (int)uVar4;
  __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->C = (int)uVar5;
  __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
  return __return_storage_ptr__;
}

// AddPossessable @ 14618ea00

void __thiscall
UMovieScene::AddPossessable
          (UMovieScene *this,FMovieScenePossessable *param_1,FMovieSceneBinding *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  FGuid *pFVar11;
  FName *pFVar12;
  FString *pFVar13;
  int iVar14;
  uint uVar15;
  FName FVar16;
  wchar_t *pwVar17;
  undefined8 *puVar18;
  ForAnyElementType FVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  ulonglong in_stack_fffffffffffffe78;
  FString local_178;
  undefined1 local_168 [16];
  FName local_158;
  uint uStack_150;
  uint uStack_14c;
  undefined1 local_148 [24];
  FName FStack_130;
  ForAnyElementType local_128;
  ForAnyElementType local_118;
  undefined8 local_110;
  FName local_108;
  uint uStack_100;
  uint uStack_fc;
  FName local_f8 [2];
  FString local_e8;
  FGuid local_d8;
  undefined1 local_c8 [56];
  FName local_90;
  FName FStack_88;
  ForAnyElementType local_80;
  
  local_178.Data.AllocatorInstance.Data._0_4_ = (param_2->ObjectGuid).A;
  local_178.Data.AllocatorInstance.Data._4_4_ = (param_2->ObjectGuid).B;
  local_178.Data.ArrayNum = (param_2->ObjectGuid).C;
  local_178.Data.ArrayMax = (param_2->ObjectGuid).D;
  uVar3 = (param_1->Guid).C;
  uVar5 = (param_1->Guid).D;
  uVar10 = (param_1->Guid).A;
  local_158.Number = (param_1->Guid).B;
  uStack_150 = (param_1->Guid).C;
  uStack_14c = (param_1->Guid).D;
  local_108.ComparisonIndex.Value = uVar10;
  local_108.Number = local_158.Number;
  uStack_100 = uStack_150;
  uStack_fc = uStack_14c;
  pFVar12 = &local_108;
  if (((local_158.Number == 0 && uVar5 == 0) && uVar3 == 0) && uVar10 == 0) {
    pFVar12 = local_f8;
  }
  local_f8[0] = (FName)local_178.Data.AllocatorInstance.Data;
  local_f8[1].ComparisonIndex.Value = local_178.Data.ArrayNum;
  local_f8[1].Number = local_178.Data.ArrayMax;
  local_168._0_8_ = *pFVar12;
  local_168._8_8_ = pFVar12[1];
  local_158.ComparisonIndex.Value = uVar10;
  FMovieScenePossessable::FMovieScenePossessable((FMovieScenePossessable *)local_c8,param_1);
  FMovieSceneBinding::FMovieSceneBinding((FMovieSceneBinding *)local_148,param_2);
  uVar15 = (pFVar12->ComparisonIndex).Value;
  uVar6 = pFVar12->Number;
  uVar7 = pFVar12[1].ComparisonIndex.Value;
  uVar8 = pFVar12[1].Number;
  if (((uVar8 != 0 || uVar7 != 0) || uVar6 != 0) || uVar15 != 0) {
    if (((local_178.Data.ArrayMax == uStack_14c && local_178.Data.ArrayNum == uVar3) &&
        local_178.Data.AllocatorInstance.Data._4_4_ == local_158.Number) &&
        local_178.Data.AllocatorInstance.Data._0_4_ == uVar10) goto LAB_14618eb4e;
  }
  local_res8[0] = 0;
  bVar9 = `UMovieScene::AddPossessable'::__l3::<lambda_1>::operator()(local_res8);
  if ((!bVar9) &&
     (local_148._16_8_ = local_168._0_8_, FStack_130 = (FName)local_168._8_8_,
     local_90 = (FName)local_168._0_8_, FStack_88 = (FName)local_168._8_8_,
     ((uVar8 == 0 && uVar7 == 0) && uVar6 == 0) && uVar15 == 0)) {
    pFVar11 = FGuid::NewGuid(&local_d8);
    local_148._16_4_ = pFVar11->A;
    local_148._20_4_ = pFVar11->B;
    FStack_130.ComparisonIndex.Value = pFVar11->C;
    FStack_130.Number = pFVar11->D;
    local_90 = (FName)local_148._16_8_;
    FStack_88 = FStack_130;
  }
LAB_14618eb4e:
  InsertSorted<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FMovieScenePossessable>
            (&this->Possessables,(FMovieScenePossessable *)local_c8);
  iVar14 = (int)local_110;
  pFVar1 = local_118.Data + (longlong)iVar14 * 8;
  FVar19.Data = local_118.Data;
  while( true ) {
    if ((int)local_110 != iVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar19.Data == pFVar1) break;
    this_00 = *(UObjectBaseUtility **)FVar19.Data;
    bVar9 = UObjectBaseUtility::IsIn(this_00,(UObject *)this);
    if (!bVar9) {
      local_res20.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
      local_res20.Number = *(uint *)&this_00->field_0x1c;
      ::FName::ToString(&local_res20,&local_178);
      FVar16 = (FName)L"";
      if (local_178.Data.ArrayNum != 0) {
        FVar16 = (FName)local_178.Data.AllocatorInstance.Data;
      }
      pFVar12 = ::FName::FName(&local_158,(wchar_t *)FVar16);
      FVar16.ComparisonIndex.Value = *(uint *)&this_00->field_0x10;
      FVar16.Number = *(uint *)&this_00->field_0x14;
      in_stack_fffffffffffffe78 = in_stack_fffffffffffffe78 & 0xffffffff00000000;
      MakeUniqueObjectName
                ((UObject *)local_168,(UClass *)this,FVar16,(*pFVar12).ComparisonIndex.Value);
      if ((FName)local_178.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      pcVar4 = *(code **)(*(longlong *)this_00 + 0x170);
      pFVar13 = ::FName::ToString((FName *)local_168,&local_e8);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      (*pcVar4)(this_00,pwVar17,this,0x10,in_stack_fffffffffffffe78);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    FVar19.Data = FVar19.Data + 8;
  }
  uVar10 = InsertSorted<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FMovieSceneBinding>
                     (&this->ObjectBindings,(FMovieSceneBinding *)local_148);
  if ((((int)uVar10 < 0) || ((this->ObjectBindings).ArrayNum <= (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectBindings.IsValidIndex(NewBindingIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                         ,0x1b7,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = 0;
  if ((int)uVar10 < (this->ObjectBindings).ArrayNum) {
    uVar15 = ~uVar10 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (this->ObjectBindings).AllocatorInstance.Data;
  puVar18 = *(undefined8 **)(pFVar1 + (longlong)(int)uVar10 * 0x40 + 0x30);
  iVar14 = *(int *)(pFVar1 + (longlong)(int)uVar10 * 0x40 + 0x38);
  puVar2 = puVar18 + iVar14;
  while( true ) {
    if (*(int *)(pFVar1 + (longlong)(int)uVar10 * 0x40 + 0x38) != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (puVar18 == puVar2) break;
    UMovieSceneTrack::OnAddedToMovieScene((UMovieSceneTrack *)*puVar18,this);
    puVar18 = puVar18 + 1;
  }
  uVar15 = 0;
  if ((int)uVar10 < (this->ObjectBindings).ArrayNum) {
    uVar15 = ~uVar10 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if ((void *)local_148._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if ((void *)local_c8._40_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._40_8_);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// AddSpawnable @ 14618fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
UMovieScene::AddSpawnable
          (UMovieScene *this,FGuid *__return_storage_ptr__,FString *param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FGuid *pFVar9;
  uint uVar10;
  undefined1 auStack_1b8 [32];
  FIdentityFunctor local_188;
  FMovieSceneBinding local_180;
  undefined1 local_138 [144];
  void *local_a8;
  undefined8 local_a0;
  FGuid local_98;
  FString local_88;
  TObjectPtr<UObject>_u_0 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ESpawnOwnership local_60;
  FName local_5c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_138._96_8_ = (FScriptContainerElement *)0x0;
  local_138._104_4_ = 0;
  local_138._108_4_ = 0;
  local_138[0x70] = false;
  local_138[0x71] = false;
  local_138._120_8_ = (UFunction *)0x0;
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138._128_8_ = 0;
  local_138._136_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_138._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_138._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138._28_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_138._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_138._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138._44_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138._56_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_138._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138._60_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_138._72_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_138._64_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138._76_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_138._88_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_138._80_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138._92_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FGuid::NewGuid(&local_98);
  ::FString::FString(&local_88,param_1);
  local_78.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60 = InnerSequence;
  local_5c.ComparisonIndex.Value = 0;
  local_5c.Number = 0;
  FMovieSceneSpawnable::MarkSpawnableTemplate(param_2);
  FMovieSceneSpawnable::AutoSetNetAddressableName((FMovieSceneSpawnable *)local_138);
  uVar6 = AlgoImpl::
          LowerBoundInternal<FMovieSceneSpawnable_const_,int,FMovieSceneSpawnable,FIdentityFunctor,TLess<void>_>
                    ((FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data,
                     (this->Spawnables).ArrayNum,(FMovieSceneSpawnable *)local_138,local_188,
                     (TLess<void>)local_188);
  if (((int)uVar6 < 0) || ((this->Spawnables).ArrayNum < (int)uVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= GetNum(Range)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x11f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FGuid *)(*pcVar2)();
      return pFVar9;
    }
  }
  TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>::Insert
            (&this->Spawnables,(FMovieSceneSpawnable *)local_138,uVar6);
  if (((int)uVar6 < 0) || ((this->Spawnables).ArrayNum <= (int)uVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spawnables.IsValidIndex(NewSpawnableIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FGuid *)(*pcVar2)();
      return pFVar9;
    }
  }
  uVar10 = 0;
  uVar7 = uVar10;
  if ((int)uVar6 < (this->Spawnables).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FGuid *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_180._padding_ = 0;
  local_180._padding_ = 0;
  pFVar1 = (this->Spawnables).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xf0 + 0xa0;
  local_180.ObjectGuid._0_8_ = *(undefined8 *)pFVar1;
  local_180.ObjectGuid._8_8_ = *(undefined8 *)(pFVar1 + 8);
  local_180.BindingName_DEPRECATED.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.BindingName_DEPRECATED.Data.ArrayNum = 0;
  local_180.BindingName_DEPRECATED.Data.ArrayMax = 0;
  local_180.Tracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Tracks.ArrayNum = 0;
  local_180.Tracks.ArrayMax = 0;
  uVar7 = InsertSorted<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FMovieSceneBinding>
                    (&this->ObjectBindings,&local_180);
  if (local_180.Tracks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Tracks.AllocatorInstance.Data);
  }
  if (local_180.BindingName_DEPRECATED.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_180.BindingName_DEPRECATED.Data.AllocatorInstance.Data);
  }
  if ((void *)local_180._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_180._padding_);
  }
  uVar8 = uVar10;
  if ((int)uVar7 < (this->ObjectBindings).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FGuid *)(*pcVar2)();
      return pFVar9;
    }
  }
  if ((int)uVar6 < (this->Spawnables).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FGuid *)(*pcVar2)();
      return pFVar9;
    }
  }
  pFVar1 = (this->Spawnables).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xf0 + 0xa0;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->A = (int)uVar3;
  __return_storage_ptr__->B = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->C = (int)uVar4;
  __return_storage_ptr__->D = (int)((ulonglong)uVar4 >> 0x20);
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_138._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._96_8_);
  }
  return __return_storage_ptr__;
}

// AddSpawnable @ 146190070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieScene::AddSpawnable
          (UMovieScene *this,FMovieSceneSpawnable *param_1,FMovieSceneBinding *param_2)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  UObjectBaseUtility *this_00;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FString *pFVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  undefined1 auStackY_208 [32];
  FIdentityFunctor local_1c8;
  undefined1 local_1c7 [3];
  uint local_1c4;
  FName local_1c0;
  undefined1 local_1b8 [16];
  FString local_1a8;
  FName local_198;
  FString local_190;
  FMovieSceneBinding local_178;
  undefined1 local_138 [144];
  void *local_a8;
  undefined8 local_a0;
  FGuid local_98;
  FString local_88;
  TObjectPtr<UObject>_u_0 local_78;
  ForAnyElementType FStack_70;
  undefined8 local_68;
  ESpawnOwnership local_60;
  FName local_5c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_138._16_8_ = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0];
  local_138._24_8_ = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1];
  local_138._96_8_ = (FScriptContainerElement *)0x0;
  local_78.DebugPtr = (UObject *)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_138._0_8_ = (param_1->SpawnTransform).Rotation.XY.m128d_f64[0];
  local_138._8_8_ = (param_1->SpawnTransform).Rotation.XY.m128d_f64[1];
  local_138._48_8_ = (param_1->SpawnTransform).Translation.ZW.m128d_f64[0];
  local_138._56_8_ = (param_1->SpawnTransform).Translation.ZW.m128d_f64[1];
  local_138._104_4_ = 0;
  local_138._108_4_ = 0;
  local_138._32_8_ = (param_1->SpawnTransform).Translation.XY.m128d_f64[0];
  local_138._40_8_ = (param_1->SpawnTransform).Translation.XY.m128d_f64[1];
  local_138[0x70] = false;
  local_138[0x71] = false;
  local_138._80_8_ = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0];
  local_138._88_8_ = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1];
  local_138._120_8_ = (UFunction *)0x0;
  local_138._64_8_ = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0];
  local_138._72_8_ = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1];
  local_138._128_8_ = 0;
  local_138._136_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98.A = 0;
  local_98.B = 0;
  local_98.C = 0;
  local_98.D = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60 = InnerSequence;
  local_5c.ComparisonIndex.Value = 0;
  local_5c.Number = 0;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(local_138 + 0x60),&param_1->Tags);
  local_138[0x70] = param_1->bContinuouslyRespawn;
  local_138[0x71] = param_1->bNetAddressableName;
  FMovieSceneDynamicBinding::operator=
            ((FMovieSceneDynamicBinding *)(local_138 + 0x78),&param_1->DynamicBinding_DEPRECATED);
  local_98.A = (param_1->Guid).A;
  local_98.B = (param_1->Guid).B;
  local_98.C = (param_1->Guid).C;
  local_98.D = (param_1->Guid).D;
  ::FString::operator=(&local_88,&param_1->Name);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->ObjectTemplate).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_78 = (param_1->ObjectTemplate).field0_0x0;
  if ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)&FStack_70 != &param_1->ChildPossessables) {
    iVar10 = (param_1->ChildPossessables).ArrayNum;
    pFVar3 = (param_1->ChildPossessables).AllocatorInstance.Data;
    local_68._0_4_ = iVar10;
    if ((iVar10 == 0) && (local_68._4_4_ == 0)) {
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar10,local_68._4_4_,&FStack_70,iVar10,(int *)((longlong)&local_68 + 4));
      if (iVar10 != 0) {
        memcpy(FStack_70.Data,pFVar3,(longlong)iVar10 << 4);
      }
    }
  }
  local_60 = param_1->Ownership;
  local_5c = param_1->LevelName;
  FMovieSceneSpawnable::AutoSetNetAddressableName((FMovieSceneSpawnable *)local_138);
  iVar10 = (this->Spawnables).ArrayNum;
  iVar7 = AlgoImpl::
          LowerBoundInternal<FMovieSceneSpawnable_const_,int,FMovieSceneSpawnable,FIdentityFunctor,TLess<void>_>
                    ((FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data,iVar10,
                     (FMovieSceneSpawnable *)local_138,local_1c8,(TLess<void>)local_1c8);
  if ((iVar7 < 0) || (iVar10 < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= GetNum(Range)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                       ,0x11f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>::Insert
            (&this->Spawnables,(FMovieSceneSpawnable *)local_138,iVar7);
  FMovieSceneBinding::FMovieSceneBinding(&local_178,param_2);
  iVar10 = local_178.Tracks.ArrayNum;
  pFVar3 = local_178.Tracks.AllocatorInstance.Data + (longlong)iVar10 * 8;
  FVar16.Data = local_178.Tracks.AllocatorInstance.Data;
  while( true ) {
    if (local_178.Tracks.ArrayNum != iVar10) {
      local_1c7[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1c7);
    }
    if (FVar16.Data == pFVar3) break;
    this_00 = *(UObjectBaseUtility **)FVar16.Data;
    bVar6 = UObjectBaseUtility::IsIn(this_00,(UObject *)this);
    if (!bVar6) {
      local_1c0.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
      local_1c0.Number = *(uint *)&this_00->field_0x1c;
      ::FName::ToString(&local_1c0,&local_1a8);
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_198,(wchar_t *)FVar12.Data);
      FVar4.ComparisonIndex.Value = *(uint *)&this_00->field_0x10;
      FVar4.Number = *(uint *)&this_00->field_0x14;
      MakeUniqueObjectName
                ((UObject *)local_1b8,(UClass *)this,FVar4,(*pFVar8).ComparisonIndex.Value);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      pcVar5 = *(code **)(*(longlong *)this_00 + 0x170);
      pFVar9 = ::FName::ToString((FName *)local_1b8,&local_190);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      (*pcVar5)(this_00,pwVar13,this,0x10);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    FVar16.Data = FVar16.Data + 8;
  }
  local_1c4 = InsertSorted<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FMovieSceneBinding>
                        (&this->ObjectBindings,&local_178);
  lVar14 = (longlong)(int)local_1c4;
  uVar17 = ~local_1c4;
  uVar11 = 0;
  if ((int)local_1c4 < (this->ObjectBindings).ArrayNum) {
    uVar11 = uVar17 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->ObjectBindings).AllocatorInstance.Data;
  puVar15 = *(undefined8 **)(pFVar3 + lVar14 * 0x40 + 0x30);
  iVar10 = *(int *)(pFVar3 + lVar14 * 0x40 + 0x38);
  puVar1 = puVar15 + iVar10;
  local_1b8._8_8_ = lVar14;
  while( true ) {
    if (*(int *)(pFVar3 + lVar14 * 0x40 + 0x38) != iVar10) {
      local_1c8 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c8);
    }
    if (puVar15 == puVar1) break;
    UMovieSceneTrack::OnAddedToMovieScene((UMovieSceneTrack *)*puVar15,this);
    puVar15 = puVar15 + 1;
  }
  uVar11 = 0;
  if ((int)local_1c4 < (this->ObjectBindings).ArrayNum) {
    uVar11 = uVar17 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_178.Tracks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Tracks.AllocatorInstance.Data);
  }
  if (local_178.BindingName_DEPRECATED.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_178.BindingName_DEPRECATED.Data.AllocatorInstance.Data);
  }
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_138._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._96_8_);
  }
  return;
}

// AddTrack @ 146191620

UMovieSceneTrack * __thiscall
UMovieScene::AddTrack(UMovieScene *this,TSubclassOf<UMovieSceneTrack> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UMovieSceneTrack *pUVar9;
  UClass *pUVar10;
  UMovieSceneTrack *local_18 [2];
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pUVar10 = (UClass *)0x0;
  if ((lVar3 != 0) &&
     (pUVar8 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar10 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar9 = NewObject<UMovieSceneTrack>
                     ((UObject *)this,pUVar10,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pTVar2 = &this->Tracks;
  local_18[0] = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->Tracks).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (UMovieSceneTrack *)(*pcVar5)();
    return pUVar9;
  }
  iVar7 = (this->Tracks).ArrayNum;
  piVar1 = &(this->Tracks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Tracks).ArrayNum = iVar7 + 1;
  *(UMovieSceneTrack **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  UMovieSceneTrack::OnAddedToMovieScene(pUVar9,this);
  return pUVar9;
}

// AddTrack @ 1461917b0

UMovieSceneTrack * __thiscall
UMovieScene::AddTrack(UMovieScene *this,TSubclassOf<UMovieSceneTrack> param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UMovieSceneTrack *pUVar5;
  FMovieSceneBinding *this_00;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar7 = (UClass *)0x0;
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                         ,0x496,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UMovieSceneTrack *)(*pcVar3)();
    return pUVar5;
  }
  this_00 = FindBinding(this,param_2);
  if (this_00 != (FMovieSceneBinding *)0x0) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) &&
       (pUVar6 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar7 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar7 = (UClass *)
             NewObject<UMovieSceneTrack>
                       ((UObject *)this,pUVar7,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((pUVar7 == (UClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CreatedType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                           ,0x49d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UMovieSceneTrack *)(*pcVar3)();
      return pUVar5;
    }
    FMovieSceneBinding::AddTrack(this_00,(UMovieSceneTrack *)pUVar7,this);
  }
  return (UMovieSceneTrack *)pUVar7;
}

// ContainsTrack @ 14619a1c0

bool __thiscall UMovieScene::ContainsTrack(UMovieScene *this,UMovieSceneTrack *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Tracks).AllocatorInstance.Data;
  iVar2 = (this->Tracks).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneTrack>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (param_1 == *(UMovieSceneTrack **)pFVar3) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// DeleteMarkedFrame @ 14619cc10

void __thiscall UMovieScene::DeleteMarkedFrame(UMovieScene *this,int param_1)

{
  int *piVar1;
  TArray<FMovieSceneMarkedFrame,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  undefined1 local_res10 [8];
  
  pTVar2 = &this->MarkedFrames;
  uVar5 = 0;
  if (param_1 < (this->MarkedFrames).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Dst = (pTVar2->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  if (*(void **)(_Dst + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 8));
  }
  iVar6 = (this->MarkedFrames).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar6 << 5);
  }
  piVar1 = &(this->MarkedFrames).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,&pTVar2->AllocatorInstance,(this->MarkedFrames).ArrayNum,
             &(this->MarkedFrames).ArrayMax);
  local_res10[0] = 0;
  AlgoImpl::
  IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
            ((FMovieSceneMarkedFrame *)(pTVar2->AllocatorInstance).Data,
             (this->MarkedFrames).ArrayNum,(FIdentityFunctor)0x0,(<lambda_1> *)local_res10);
  return;
}

// DeleteMarkedFrames @ 14619cd00

void __thiscall UMovieScene::DeleteMarkedFrames(UMovieScene *this)

{
  int *piVar1;
  
  DestructItems<FMovieSceneMarkedFrame,int>
            ((FMovieSceneMarkedFrame *)(this->MarkedFrames).AllocatorInstance.Data,
             (this->MarkedFrames).ArrayNum);
  piVar1 = &(this->MarkedFrames).ArrayMax;
  (this->MarkedFrames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->MarkedFrames).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindBinding @ 1461a77c0

FMovieSceneBinding * __thiscall UMovieScene::FindBinding(UMovieScene *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneBinding *pFVar4;
  uint uVar5;
  TLess<void> local_res8;
  
  uVar3 = Algo::
          BinarySearch<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->ObjectBindings,param_1,local_res8);
  if (uVar3 == 0xffffffff) {
    return (FMovieSceneBinding *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->ObjectBindings).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieSceneBinding *)
         ((this->ObjectBindings).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40);
}

// FindBinding @ 1461a7860

FMovieSceneBinding * __thiscall UMovieScene::FindBinding(UMovieScene *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneBinding *pFVar4;
  uint uVar5;
  TLess<void> local_res8;
  
  uVar3 = Algo::
          BinarySearch<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->ObjectBindings,param_1,local_res8);
  if (uVar3 == 0xffffffff) {
    return (FMovieSceneBinding *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->ObjectBindings).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneBinding *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieSceneBinding *)
         ((this->ObjectBindings).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40);
}

// FindMarkedFrameByFrameNumber @ 1461a8970

int __thiscall UMovieScene::FindMarkedFrameByFrameNumber(UMovieScene *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->MarkedFrames).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->MarkedFrames).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(int *)((this->MarkedFrames).AllocatorInstance.Data + lVar5) == param_1.Value) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while ((int)uVar6 < (this->MarkedFrames).ArrayNum);
  }
  return -1;
}

// FindMarkedFrameByLabel @ 1461a8a30

int __thiscall UMovieScene::FindMarkedFrameByLabel(UMovieScene *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->MarkedFrames).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->MarkedFrames).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar2 = (this->MarkedFrames).AllocatorInstance.Data;
      iVar6 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(pFVar2 + lVar8 + 0x10);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) {
          return uVar7;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar2 + lVar8 + 8),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
      }
      else {
        bVar4 = iVar1 + iVar6 == 1;
      }
      if (bVar4) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (this->MarkedFrames).ArrayNum);
  }
  return -1;
}

// FindNextMarkedFrame @ 1461a8e10

int __thiscall UMovieScene::FindNextMarkedFrame(UMovieScene *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar4 = (this->MarkedFrames).ArrayNum;
  if (iVar4 == 0) {
    return -1;
  }
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::FindNextMarkedFrame_::__l2::<lambda_1>_>_>
            ((FMovieSceneMarkedFrame *)(this->MarkedFrames).AllocatorInstance.Data,iVar4,
             (FIdentityFunctor)0x0,(<lambda_1> *)local_res8);
  iVar4 = (this->MarkedFrames).ArrayNum;
  if (param_2) {
    uVar6 = iVar4 - 2;
    if (-1 < (int)uVar6) {
      lVar5 = (longlong)(int)uVar6 << 5;
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->MarkedFrames).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (*(int *)((this->MarkedFrames).AllocatorInstance.Data + lVar5) <= param_1.Value) {
          return uVar6 + 1;
        }
        lVar5 = lVar5 + -0x20;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    iVar4 = 0;
  }
  else {
    uVar6 = 1;
    if (1 < iVar4) {
      lVar5 = 0x20;
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->MarkedFrames).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (param_1.Value <= *(int *)((this->MarkedFrames).AllocatorInstance.Data + lVar5)) {
          return uVar6 - 1;
        }
        iVar4 = (this->MarkedFrames).ArrayNum;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while ((int)uVar6 < iVar4);
    }
    iVar4 = iVar4 + -1;
  }
  return iVar4;
}

// FindPossessable @ 1461a9520

FMovieScenePossessable * __thiscall UMovieScene::FindPossessable(UMovieScene *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieScenePossessable *pFVar4;
  uint uVar5;
  TLess<void> local_res8;
  
  uVar3 = Algo::
          BinarySearch<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Possessables,param_1,local_res8);
  if (uVar3 == 0xffffffff) {
    return (FMovieScenePossessable *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Possessables).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieScenePossessable *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieScenePossessable *)
         ((this->Possessables).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x80);
}

// FindPossessable @ 1461a95c0

FMovieScenePossessable * __thiscall
UMovieScene::FindPossessable
          (UMovieScene *this,TFunctionRef<bool___cdecl(FMovieScenePossessable_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  FMovieScenePossessable *pFVar4;
  FMovieScenePossessable *pFVar5;
  
  pFVar4 = (FMovieScenePossessable *)(this->Possessables).AllocatorInstance.Data;
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pFVar5 = pFVar4 + (this->Possessables).ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar5) {
      return (FMovieScenePossessable *)0x0;
    }
    cVar3 = (*pcVar1)(uVar2,pFVar4);
    if (cVar3 != '\0') break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// FindSpawnable @ 1461a9920

FMovieSceneSpawnable * __thiscall UMovieScene::FindSpawnable(UMovieScene *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneSpawnable *pFVar4;
  uint uVar5;
  TLess<void> local_res8;
  
  uVar3 = Algo::
          BinarySearch<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Spawnables,param_1,local_res8);
  if (uVar3 == 0xffffffff) {
    return (FMovieSceneSpawnable *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Spawnables).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneSpawnable *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieSceneSpawnable *)
         ((this->Spawnables).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xf0);
}

// FindSpawnable @ 1461a99c0

FMovieSceneSpawnable * __thiscall
UMovieScene::FindSpawnable
          (UMovieScene *this,TFunctionRef<bool___cdecl(FMovieSceneSpawnable_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  FMovieSceneSpawnable *pFVar4;
  FMovieSceneSpawnable *pFVar5;
  
  pFVar4 = (FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data;
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pFVar5 = pFVar4 + (this->Spawnables).ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar5) {
      return (FMovieSceneSpawnable *)0x0;
    }
    cVar3 = (*pcVar1)(uVar2,pFVar4);
    if (cVar3 != '\0') break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// FindTrack @ 1461a9ab0

UMovieSceneTrack * __thiscall
UMovieScene::FindTrack(UMovieScene *this,TSubclassOf<UMovieSceneTrack> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->Tracks).AllocatorInstance.Data;
  iVar2 = (this->Tracks).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if ((this->Tracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneTrack>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return (UMovieSceneTrack *)0x0;
    }
    lVar4 = *(longlong *)param_1.Class.field0_0x0;
    lVar5 = *(longlong *)(*(longlong *)pFVar8 + 0x10);
    if ((lVar4 != 0) &&
       (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar3 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (lVar4 = *(longlong *)param_1.Class.field0_0x0, lVar4 != 0)) {
        if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          return *(UMovieSceneTrack **)pFVar8;
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// FindTrack @ 1461a9b90

UMovieSceneTrack * __thiscall
UMovieScene::FindTrack
          (UMovieScene *this,TSubclassOf<UMovieSceneTrack> param_1,FGuid *param_2,FName *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  UMovieSceneTrack *pUVar9;
  FMovieSceneBinding *pFVar10;
  UClass *pUVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [8];
  undefined1 local_30 [8];
  
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                         ,0x463,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pUVar9 = (UMovieSceneTrack *)(*pcVar7)();
    return pUVar9;
  }
  pFVar10 = FindBinding(this,param_2);
  if (pFVar10 != (FMovieSceneBinding *)0x0) {
    pFVar13 = (pFVar10->Tracks).AllocatorInstance.Data;
    iVar2 = (pFVar10->Tracks).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar10->Tracks).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar13 == pFVar1) break;
      pUVar11 = *(UClass **)param_1.Class.field0_0x0;
      if (pUVar11 == (UClass *)0x0) {
LAB_1461a9d14:
        if ((*param_3 == (FName)0x0) ||
           (pFVar12 = (FName *)(**(code **)(**(longlong **)pFVar13 + 0x308))
                                         (*(longlong **)pFVar13,local_30), *pFVar12 == *param_3)) {
          return *(UMovieSceneTrack **)pFVar13;
        }
      }
      else {
        if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar11);
        }
        pUVar4 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar4 == (UObject *)0x0) {
LAB_1461a9c7c:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pUVar9 = (UMovieSceneTrack *)(*pcVar7)();
            return pUVar9;
          }
          if (pUVar4 == (UObject *)0x0) goto LAB_1461a9d14;
        }
        else {
          pUVar11 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
          iVar3 = (int)pUVar11->_padding_;
          if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar11->_padding_)) goto LAB_1461a9c7c;
        }
        lVar5 = *(longlong *)param_1.Class.field0_0x0;
        lVar6 = *(longlong *)(*(longlong *)pFVar13 + 0x10);
        if ((lVar5 != 0) &&
           (pUVar11 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar11 != (UClass *)0x0)) {
          iVar3 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar5 + 0x38) < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar11->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((bVar8) && (lVar5 = *(longlong *)param_1.Class.field0_0x0, lVar5 != 0)) {
            if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) goto LAB_1461a9d14;
          }
        }
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  return (UMovieSceneTrack *)0x0;
}

// FindTrackBinding @ 1461a9d70

bool __thiscall
UMovieScene::FindTrackBinding(UMovieScene *this,UMovieSceneTrack *param_1,FGuid *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  uVar2 = (this->ObjectBindings).ArrayNum;
  uVar6 = (ulonglong)(int)uVar2;
  pFVar10 = (this->ObjectBindings).AllocatorInstance.Data;
  pFVar9 = pFVar10 + uVar6 * 0x40;
  pFVar8 = pFVar10 + 0x38;
  while( true ) {
    if ((this->ObjectBindings).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    plVar7 = *(longlong **)(pFVar8 + -8);
    iVar3 = *(int *)pFVar8;
    plVar1 = plVar7 + iVar3;
    while( true ) {
      if (*(int *)pFVar8 != iVar3) {
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar7 == plVar1) break;
      if ((UMovieSceneTrack *)*plVar7 == param_1) {
        uVar4 = *(undefined8 *)(pFVar10 + 0x10);
        uVar5 = *(undefined8 *)(pFVar10 + 0x18);
        param_2->A = (int)uVar4;
        param_2->B = (int)((ulonglong)uVar4 >> 0x20);
        param_2->C = (int)uVar5;
        param_2->D = (int)((ulonglong)uVar5 >> 0x20);
        return true;
      }
      plVar7 = plVar7 + 1;
    }
    uVar6 = (ulonglong)uVar2;
    pFVar10 = pFVar10 + 0x40;
    pFVar8 = pFVar8 + 0x40;
  }
  return false;
}

// FindTracks @ 1461a9f30

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieScene::FindTracks
          (UMovieScene *this,
          TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UMovieSceneTrack> param_1,FGuid *param_2,FName *param_3)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FMovieSceneBinding *pFVar10;
  ulonglong uVar11;
  UClass *pUVar12;
  FName *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [16];
  uint local_res20;
  undefined1 local_48 [16];
  
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                         ,0x478,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = FindBinding(this,param_2);
  if (pFVar10 != (FMovieSceneBinding *)0x0) {
    pFVar14 = (pFVar10->Tracks).AllocatorInstance.Data;
    local_res20 = (pFVar10->Tracks).ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    pFVar1 = pFVar14 + uVar11 * 8;
    while( true ) {
      if ((pFVar10->Tracks).ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar14 == pFVar1) break;
      pUVar12 = *(UClass **)param_1.Class.field0_0x0;
      if (pUVar12 == (UClass *)0x0) {
LAB_1461aa0f0:
        if ((*param_3 == (FName)0x0) ||
           (pFVar13 = (FName *)(**(code **)(**(longlong **)pFVar14 + 0x308))
                                         (*(longlong **)pFVar14,local_48), *pFVar13 == *param_3)) {
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar5 <= pFVar14) &&
             ((pFVar14 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar6 = (code *)swi(3);
            pTVar9 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               *(longlong *)pFVar14;
        }
      }
      else {
        if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar12);
        }
        pUVar2 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar2 == (UObject *)0x0) {
LAB_1461aa046:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar9 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar9;
          }
          if (pUVar2 == (UObject *)0x0) goto LAB_1461aa0f0;
        }
        else {
          pUVar12 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
          iVar8 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar12->_padding_)) goto LAB_1461aa046;
        }
        lVar3 = *(longlong *)param_1.Class.field0_0x0;
        lVar4 = *(longlong *)(*(longlong *)pFVar14 + 0x10);
        if ((lVar3 != 0) &&
           (pUVar12 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar12 != (UClass *)0x0)) {
          iVar8 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar8) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar12->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (lVar3 = *(longlong *)param_1.Class.field0_0x0, lVar3 != 0)) {
            if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                lVar3 + 0x30)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) goto LAB_1461aa0f0;
          }
        }
      }
      uVar11 = (ulonglong)local_res20;
      pFVar14 = pFVar14 + 8;
    }
  }
  return __return_storage_ptr__;
}

// GetAllSections @ 1461aff40

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieScene::GetAllSections
          (UMovieScene *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  int iVar2;
  UMovieSceneTrack *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  uVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (0 < (this->Tracks).ArrayNum) {
    lVar15 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (this->Tracks).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
               (**(code **)(**(longlong **)((this->Tracks).AllocatorInstance.Data + lVar15) + 0x360)
               )();
      if (__return_storage_ptr__ == pTVar9) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar2 = pTVar9->ArrayNum;
      if (iVar2 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar2,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
               (pTVar9->AllocatorInstance).Data,(longlong)iVar2 << 3);
      }
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar11 < (this->Tracks).ArrayNum);
  }
  pUVar3 = (this->CameraCutTrack).field0_0x0.DebugPtr;
  if (pUVar3 != (UMovieSceneTrack *)0x0) {
    pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
             (**(code **)(pUVar3->_padding_ + 0x360))();
    TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
    Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,pTVar9);
  }
  local_res20 = (this->ObjectBindings).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar14 = (this->ObjectBindings).AllocatorInstance.Data;
  pFVar12 = pFVar14 + uVar10 * 0x40;
  pFVar16 = pFVar14 + 0x38;
  while( true ) {
    if ((this->ObjectBindings).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar12) break;
    puVar13 = *(undefined8 **)(pFVar16 + -8);
    iVar2 = *(int *)pFVar16;
    puVar1 = puVar13 + iVar2;
    while( true ) {
      if (*(int *)pFVar16 != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar13 == puVar1) break;
      pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
               (**(code **)(*(longlong *)*puVar13 + 0x360))();
      if (__return_storage_ptr__ == pTVar9) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar7 = pTVar9->ArrayNum;
      if (iVar7 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar7,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8,
               (pTVar9->AllocatorInstance).Data,(longlong)iVar7 << 3);
      }
      puVar13 = puVar13 + 1;
    }
    pFVar14 = pFVar14 + 0x40;
    pFVar16 = pFVar16 + 0x40;
    uVar10 = (ulonglong)local_res20;
  }
  return __return_storage_ptr__;
}

// GetCameraCutTrack @ 1461b0650

UMovieSceneTrack * __thiscall UMovieScene::GetCameraCutTrack(UMovieScene *this)

{
  return (this->CameraCutTrack).field0_0x0.DebugPtr;
}

// GetEarliestTimecodeSource @ 1461b0b20

FMovieSceneTimecodeSource * __thiscall
UMovieScene::GetEarliestTimecodeSource
          (UMovieScene *this,FMovieSceneTimecodeSource *__return_storage_ptr__)

{
  (__return_storage_ptr__->Timecode).Hours = 0;
  (__return_storage_ptr__->Timecode).Minutes = 0;
  (__return_storage_ptr__->Timecode).Seconds = 0;
  (__return_storage_ptr__->Timecode).Frames = 0;
  (__return_storage_ptr__->Timecode).Subframe = 0.0;
  (__return_storage_ptr__->Timecode).bDropFrameFormat = false;
  return __return_storage_ptr__;
}

// GetObjectDisplayName @ 1461b19e0

FText * __thiscall
UMovieScene::GetObjectDisplayName(UMovieScene *this,FText *__return_storage_ptr__,FGuid *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetPossessable @ 1461b2a90

FMovieScenePossessable * __thiscall UMovieScene::GetPossessable(UMovieScene *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieScenePossessable *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Possessables).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieScenePossessable *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieScenePossessable *)
         ((this->Possessables).AllocatorInstance.Data + (longlong)param_1 * 0x80);
}

// GetPossessableCount @ 1461b2b10

int __thiscall UMovieScene::GetPossessableCount(UMovieScene *this)

{
  return (this->Possessables).ArrayNum;
}

// GetPrivateStaticClass @ 1461b2b20

UClass * __cdecl UMovieScene::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScene",
               &Z_Registration_Info_UClass_UMovieScene.InnerSingleton,
               StaticRegisterNativesUMovieScene,0x170,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScene>,InternalVTableHelperCtorCaller<UMovieScene>,
               local_res8,UMovieSceneDecorationContainerObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene.InnerSingleton;
}

// GetSpawnable @ 1461b4130

FMovieSceneSpawnable * __thiscall UMovieScene::GetSpawnable(UMovieScene *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneSpawnable *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Spawnables).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneSpawnable *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieSceneSpawnable *)
         ((this->Spawnables).AllocatorInstance.Data + (longlong)param_1 * 0xf0);
}

// GetSpawnableCount @ 1461b41b0

int __thiscall UMovieScene::GetSpawnableCount(UMovieScene *this)

{
  return (this->Spawnables).ArrayNum;
}

// IndexOfBinding @ 1461b5650

int __thiscall UMovieScene::IndexOfBinding(UMovieScene *this,FGuid *param_1)

{
  int iVar1;
  TLess<void> local_res8;
  
  iVar1 = Algo::
          BinarySearch<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->ObjectBindings,param_1,local_res8);
  return iVar1;
}

// IndexOfPossessable @ 1461b5670

int __thiscall UMovieScene::IndexOfPossessable(UMovieScene *this,FGuid *param_1)

{
  int iVar1;
  TLess<void> local_res8;
  
  iVar1 = Algo::
          BinarySearch<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Possessables,param_1,local_res8);
  return iVar1;
}

// IndexOfSpawnable @ 1461b5690

int __thiscall UMovieScene::IndexOfSpawnable(UMovieScene *this,FGuid *param_1)

{
  int iVar1;
  TLess<void> local_res8;
  
  iVar1 = Algo::
          BinarySearch<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Spawnables,param_1,local_res8);
  return iVar1;
}

// IsPostLoadThreadSafe @ 1461bbe30

bool __thiscall UMovieScene::IsPostLoadThreadSafe(UMovieScene *this)

{
  return true;
}

// MakeCustomTimeController @ 1461bdbd0

TSharedPtr<FMovieSceneTimeController,1> * __thiscall
UMovieScene::MakeCustomTimeController
          (UMovieScene *this,TSharedPtr<FMovieSceneTimeController,1> *__return_storage_ptr__,
          UObject *param_1)

{
  UMovieSceneClock *pUVar1;
  
  pUVar1 = (this->CustomClock).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMovieSceneClock *)0x0) && (this->ClockSource == Custom)) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FMovieSceneTimeController *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MoveBindingContents @ 1461bea60

void __thiscall UMovieScene::MoveBindingContents(UMovieScene *this,FGuid *param_1,FGuid *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FMovieSceneBinding *this_00;
  FMovieSceneBinding *this_01;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FMovieSceneSpawnable *pFVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FMovieScenePossessable *this_02;
  TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  undefined8 local_68;
  FGuid local_60;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> local_50;
  
  this_00 = FindBinding(this,param_1);
  this_01 = FindBinding(this,param_2);
  if ((this_00 != (FMovieSceneBinding *)0x0) && (this_01 != (FMovieSceneBinding *)0x0)) {
    pTVar7 = FMovieSceneBinding::StealTracks(this_00,&local_50,this);
    FMovieSceneBinding::SetTracks(this_01,pTVar7,this);
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    pFVar11 = (this_01->Tracks).AllocatorInstance.Data;
    iVar14 = (this_01->Tracks).ArrayNum;
    pFVar13 = pFVar11 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this_01->Tracks).ArrayNum != iVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar11 == pFVar13) break;
      pFVar11 = pFVar11 + 8;
    }
  }
  pFVar8 = FindSpawnable(this,param_2);
  local_70.Data = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  local_68 = 0;
  do {
    if ((iVar14 < 0) || ((this->Possessables).ArrayNum <= iVar14)) {
      iVar14 = (int)local_68;
      pFVar13 = local_70.Data + (longlong)(int)local_68 * 0x10;
      pTVar12 = &this->Possessables;
      FVar16.Data = local_70.Data;
      do {
        if ((int)local_68 != iVar14) {
          local_78[0] = 0;
          `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_78)
          ;
        }
        if (FVar16.Data == pFVar13) {
          if (local_70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data);
          }
          return;
        }
        local_60._0_8_ = *(undefined8 *)FVar16.Data;
        local_60._8_8_ = *(undefined8 *)(FVar16.Data + 8);
        uVar10 = 0;
        while( true ) {
          if (((int)uVar10 < 0) || ((this->Possessables).ArrayNum <= (int)uVar10))
          goto LAB_1461beeb2;
          if (((int)uVar10 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (pTVar12->AllocatorInstance).Data;
          lVar15 = (longlong)(int)uVar10 * 0x80;
          if (((local_60.D == *(uint *)(pFVar11 + lVar15 + 0x44) &&
               local_60.C == *(uint *)(pFVar11 + lVar15 + 0x40)) &&
              local_60.B == *(uint *)(pFVar11 + lVar15 + 0x3c)) &&
              local_60.A == *(uint *)(pFVar11 + lVar15 + 0x38)) break;
          uVar10 = uVar10 + 1;
        }
        uVar6 = 0;
        if ((int)uVar10 < (this->Possessables).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (pTVar12->AllocatorInstance).Data + lVar15;
        if (*(void **)(pFVar11 + 0x48) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar11 + 0x48));
        }
        if (*(void **)(pFVar11 + 0x28) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar11 + 0x28));
        }
        if (*(void **)pFVar11 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar11);
        }
        iVar9 = (this->Possessables).ArrayNum + ~uVar10;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 0x80,(longlong)iVar9 << 7);
        }
        iVar9 = (this->Possessables).ArrayNum + -1;
        (this->Possessables).ArrayNum = iVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,&pTVar12->AllocatorInstance,iVar9,&(this->Possessables).ArrayMax);
LAB_1461beeb2:
        RemoveBinding(this,&local_60);
        FVar16.Data = FVar16.Data + 0x10;
      } while( true );
    }
    if ((iVar14 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_02 = (FMovieScenePossessable *)
              ((this->Possessables).AllocatorInstance.Data + (longlong)iVar14 * 0x80);
    if ((((this_02->ParentGuid).D == param_1->D && (this_02->ParentGuid).C == param_1->C) &&
        (this_02->ParentGuid).B == param_1->B) && (this_02->ParentGuid).A == param_1->A) {
      iVar9 = 0;
LAB_1461bebb0:
      if ((iVar9 < 0) || ((this->Possessables).ArrayNum <= iVar9)) goto LAB_1461bed04;
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (this_02->Name).Data.ArrayNum;
      pFVar13 = (this->Possessables).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar13 + (longlong)iVar9 * 0x80 + 0x50);
      if (iVar1 != iVar5) {
        bVar4 = iVar1 + iVar5 == 1;
LAB_1461bec38:
        if (bVar4) goto LAB_1461bec3f;
LAB_1461bec62:
        iVar9 = iVar9 + 1;
        goto LAB_1461bebb0;
      }
      if (1 < iVar1) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar13 + (longlong)iVar9 * 0x80 + 0x48),
                           (wchar_t *)(this_02->Name).Data.AllocatorInstance.Data);
        bVar4 = iVar5 == 0;
        goto LAB_1461bec38;
      }
LAB_1461bec3f:
      if (((*(uint *)(pFVar13 + (longlong)iVar9 * 0x80 + 100) != param_2->D ||
           *(uint *)(pFVar13 + (longlong)iVar9 * 0x80 + 0x60) != param_2->C) ||
          *(uint *)(pFVar13 + (longlong)iVar9 * 0x80 + 0x5c) != param_2->B) ||
          *(uint *)(pFVar13 + (longlong)iVar9 * 0x80 + 0x58) != param_2->A) goto LAB_1461bec62;
      pFVar11 = pFVar13 + (longlong)iVar9 * 0x80 + 0x38;
      if (((local_70.Data <= pFVar11) && (pFVar11 < local_70.Data + (longlong)local_68._4_4_ * 0x10)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)local_68;
      if ((int)local_68 == local_68._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&local_70,(int *)((longlong)&local_68 + 4));
      }
      local_68 = CONCAT44(local_68._4_4_,iVar5 + 1);
      uVar3 = *(undefined8 *)(pFVar13 + (longlong)iVar9 * 0x80 + 0x40);
      *(undefined8 *)(local_70.Data + (longlong)iVar5 * 0x10) = *(undefined8 *)pFVar11;
      *(undefined8 *)(local_70.Data + (longlong)iVar5 * 0x10 + 8) = uVar3;
LAB_1461bed04:
      FMovieScenePossessable::SetParent(this_02,param_2,this);
      if (pFVar8 != (FMovieSceneSpawnable *)0x0) {
        TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                  (&pFVar8->ChildPossessables,&this_02->Guid);
      }
    }
    iVar14 = iVar14 + 1;
  } while( true );
}

// OnDecorationAdded @ 1461bf450

void __thiscall UMovieScene::OnDecorationAdded(UMovieScene *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneDecoration_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,this);
    }
  }
  return;
}

// OnDecorationRemoved @ 1461bf4a0

void __thiscall UMovieScene::OnDecorationRemoved(UMovieScene *this,UObject *param_1)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneDecoration_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  return;
}

// PostInitProperties @ 1461c3800

void __thiscall UMovieScene::PostInitProperties(UMovieScene *this)

{
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  UMovieSceneSignedObject::PostInitProperties((UMovieSceneSignedObject *)this);
  return;
}

// PostLoad @ 1461c3830

void __thiscall UMovieScene::PostLoad(UMovieScene *this)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
            ((FMovieSceneMarkedFrame *)(this->MarkedFrames).AllocatorInstance.Data,
             (this->MarkedFrames).ArrayNum,(FIdentityFunctor)0x0,(<lambda_1> *)local_res8);
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  return;
}

// PreSave @ 1461c3900

void __thiscall UMovieScene::PreSave(UMovieScene *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RemoveBinding @ 1461ca1f0

void __thiscall UMovieScene::RemoveBinding(UMovieScene *this,FGuid *param_1)

{
  int *piVar1;
  TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  TLess<void> local_res8 [8];
  
  pTVar2 = &this->ObjectBindings;
  uVar6 = Algo::
          BinarySearch<TArray<FMovieSceneBinding,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (pTVar2,param_1,local_res8[0]);
  if (uVar6 != 0xffffffff) {
    uVar12 = ~uVar6 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar6 < (this->ObjectBindings).ArrayNum) {
      uVar11 = uVar12;
    }
    if (uVar11 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    lVar8 = (longlong)(int)uVar6 * 0x40;
    puVar9 = *(undefined8 **)(pFVar10 + lVar8 + 0x30);
    iVar7 = *(int *)(pFVar10 + lVar8 + 0x38);
    puVar3 = puVar9 + iVar7;
    while( true ) {
      if (*(int *)(pFVar10 + lVar8 + 0x38) != iVar7) {
        local_res8[0] = (TLess<void>)0x0;
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar9 == puVar3) break;
      UMovieSceneTrack::OnRemovedFromMovieScene((UMovieSceneTrack *)*puVar9);
      puVar9 = puVar9 + 1;
    }
    uVar11 = 0;
    if ((int)uVar6 < (this->ObjectBindings).ArrayNum) {
      uVar11 = uVar12;
    }
    if (uVar11 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = (pTVar2->AllocatorInstance).Data + lVar8;
    if (*(void **)(pFVar10 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar10 + 0x30));
    }
    if (*(void **)(pFVar10 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar10 + 0x20));
    }
    if (*(void **)pFVar10 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar10);
    }
    iVar7 = ~uVar6 + (this->ObjectBindings).ArrayNum;
    if (iVar7 != 0) {
      memmove(pFVar10,pFVar10 + 0x40,(longlong)iVar7 << 6);
    }
    piVar1 = &(this->ObjectBindings).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,&pTVar2->AllocatorInstance,(this->ObjectBindings).ArrayNum,
               &(this->ObjectBindings).ArrayMax);
  }
  return;
}

// RemoveCameraCutTrack @ 1461cacc0

void __thiscall UMovieScene::RemoveCameraCutTrack(UMovieScene *this)

{
  if ((this->CameraCutTrack).field0_0x0.DebugPtr != (UMovieSceneTrack *)0x0) {
    (this->CameraCutTrack).field0_0x0.DebugPtr = (UMovieSceneTrack *)0x0;
  }
  return;
}

// RemovePossessable @ 1461caf60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UMovieScene::RemovePossessable(UMovieScene *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  FMovieSceneSpawnable *pFVar6;
  FGuid *pFVar7;
  TLess<void> local_res8;
  
  uVar4 = Algo::
          BinarySearch<TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                    (&this->Possessables,param_1,local_res8);
  if (uVar4 == 0xffffffff) {
    bVar2 = false;
  }
  else {
    uVar5 = 0;
    if ((int)uVar4 < (this->Possessables).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar7 = (FGuid *)((this->Possessables).AllocatorInstance.Data +
                      (longlong)(int)uVar4 * 0x80 + 0x58);
    if (((pFVar7->D != 0 || pFVar7->C != 0) || pFVar7->B != 0) || pFVar7->A != 0) {
      pFVar6 = FindSpawnable(this,pFVar7);
      if (pFVar6 != (FMovieSceneSpawnable *)0x0) {
        TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove(&pFVar6->ChildPossessables,param_1);
      }
    }
    TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Possessables,uVar4,Default);
    RemoveBinding(this,param_1);
    bVar2 = true;
  }
  return bVar2;
}

// RemoveSpawnable @ 1461cb060

bool __thiscall UMovieScene::RemoveSpawnable(UMovieScene *this,FGuid *param_1)

{
  TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  TLess<void> local_res10;
  
  if (((param_1->D != 0 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0) {
    pTVar1 = &this->Spawnables;
    uVar6 = Algo::
            BinarySearch<TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
                      (pTVar1,param_1,local_res10);
    if (uVar6 == 0xffffffff) {
      bVar4 = false;
    }
    else {
      RemoveBinding(this,param_1);
      uVar7 = 0;
      if ((int)uVar6 < (this->Spawnables).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0xf0;
      if (*(void **)(_Dst + 200) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 200));
      }
      if (*(void **)(_Dst + 0xb0) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0xb0));
      }
      if (*(void **)(_Dst + 0x90) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x90));
      }
      if (*(void **)(_Dst + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x60));
      }
      iVar8 = (this->Spawnables).ArrayNum + ~uVar6;
      if (iVar8 != 0) {
        memmove(_Dst,_Dst + 0xf0,(longlong)iVar8 * 0xf0);
      }
      piVar2 = &(this->Spawnables).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,&pTVar1->AllocatorInstance,(this->Spawnables).ArrayNum,
                 &(this->Spawnables).ArrayMax);
      bVar4 = true;
    }
    return bVar4;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<697391642490962266>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                     ,0x15a,"Guid.IsValid()");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// RemoveTag @ 1461cba30

void __thiscall UMovieScene::RemoveTag(UMovieScene *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = *param_1;
  if (*(int *)&(this->BindingGroups).field_0x8 != *(int *)&(this->BindingGroups).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
                         *)&this->BindingGroups,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

// RemoveTrack @ 1461cbbe0

bool __thiscall UMovieScene::RemoveTrack(UMovieScene *this,UMovieSceneTrack *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FMovieSceneBinding *pFVar5;
  FMovieSceneBinding *this_00;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Tracks).AllocatorInstance.Data;
  pFVar3 = pFVar6 + (longlong)(this->Tracks).ArrayNum * 8;
  while( true ) {
    if (pFVar6 == pFVar3) {
      this_00 = (FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data;
      iVar2 = (this->ObjectBindings).ArrayNum;
      pFVar5 = this_00 + iVar2;
      while( true ) {
        if ((this->ObjectBindings).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMovieSceneBinding,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_00 == pFVar5) break;
        bVar7 = FMovieSceneBinding::RemoveTrack(this_00,param_1,this);
        if (bVar7) {
          return true;
        }
        this_00 = this_00 + 1;
      }
      return false;
    }
    if (*(UMovieSceneTrack **)pFVar6 == (UMovieSceneTrack *)0x0) {
      bVar7 = param_1 == (UMovieSceneTrack *)0x0;
    }
    else {
      bVar7 = *(UMovieSceneTrack **)pFVar6 == param_1;
    }
    if (bVar7) break;
    pFVar6 = pFVar6 + 8;
  }
  UMovieSceneTrack::OnRemovedFromMovieScene(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneTrack *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->Tracks).AllocatorInstance.Data;
  iVar2 = (this->Tracks).ArrayNum;
  pFVar6 = pFVar3;
  while( true ) {
    if (pFVar6 == pFVar3 + (longlong)iVar2 * 8) {
      return false;
    }
    if (*(UMovieSceneTrack **)pFVar6 == param_1) break;
    pFVar6 = pFVar6 + 8;
  }
  iVar4 = (int)((longlong)pFVar6 - (longlong)pFVar3 >> 3);
  if (iVar4 == -1) {
    return false;
  }
  memmove(pFVar3 + (longlong)iVar4 * 8,pFVar3 + (longlong)iVar4 * 8 + 8,
          (longlong)((iVar2 - iVar4) + -1) << 3);
  piVar1 = &(this->Tracks).ArrayNum;
  *piVar1 = *piVar1 + -1;
  return true;
}

// ReplaceBinding @ 1461cc070

void __thiscall
UMovieScene::ReplaceBinding(UMovieScene *this,FGuid *param_1,FGuid *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FMovieSceneBinding *pFVar6;
  FScriptContainerElement *pFVar7;
  FIdentityFunctor local_18 [16];
  
  pFVar6 = FindBinding(this,param_1);
  if (pFVar6 != (FMovieSceneBinding *)0x0) {
    uVar3 = param_2->B;
    uVar4 = param_2->C;
    uVar5 = param_2->D;
    (pFVar6->ObjectGuid).A = param_2->A;
    (pFVar6->ObjectGuid).B = uVar3;
    (pFVar6->ObjectGuid).C = uVar4;
    (pFVar6->ObjectGuid).D = uVar5;
    AlgoImpl::
    IntroSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
              ((FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data,
               (this->ObjectBindings).ArrayNum,local_18[0],(TLess<void> *)local_18);
    pFVar6 = FindBinding(this,param_2);
    pFVar7 = (pFVar6->Tracks).AllocatorInstance.Data;
    iVar2 = (pFVar6->Tracks).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar6->Tracks).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_18);
      }
      if (pFVar7 == pFVar1) break;
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// ReplaceBinding @ 1461cc110

void __thiscall
UMovieScene::ReplaceBinding(UMovieScene *this,FGuid *param_1,FMovieSceneBinding *param_2)

{
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  TObjectPtr<UObject> *pTVar3;
  FScriptContainerElement *pFVar4;
  UObjectBaseUtility *this_00;
  FName FVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  FMovieSceneBinding *pFVar11;
  int *piVar12;
  FName *pFVar13;
  FString *pFVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  FName local_res20;
  FMovieSceneBinding *in_stack_ffffffffffffff88;
  undefined1 local_58 [16];
  FString local_48;
  FString local_38;
  
  pFVar11 = FindBinding(this,param_1);
  if (pFVar11 != (FMovieSceneBinding *)0x0) {
    if (pFVar11 != param_2) {
      iVar2 = (int)param_2->_padding_;
      piVar12 = (int *)((longlong)&pFVar11->_padding_ + 4);
      pTVar3 = (TObjectPtr<UObject> *)param_2->_padding_;
      *(int *)&pFVar11->_padding_ = iVar2;
      if ((iVar2 == 0) && (*piVar12 == 0)) {
        *piVar12 = 0;
      }
      else {
        in_stack_ffffffffffffff88 = pFVar11;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,*piVar12,(ForAnyElementType *)pFVar11,iVar2,piVar12);
        ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                  ((void *)pFVar11->_padding_,pTVar3,iVar2);
      }
    }
    uVar7 = (param_2->ObjectGuid).B;
    uVar8 = (param_2->ObjectGuid).C;
    uVar9 = (param_2->ObjectGuid).D;
    (pFVar11->ObjectGuid).A = (param_2->ObjectGuid).A;
    (pFVar11->ObjectGuid).B = uVar7;
    (pFVar11->ObjectGuid).C = uVar8;
    (pFVar11->ObjectGuid).D = uVar9;
    ::FString::operator=(&pFVar11->BindingName_DEPRECATED,&param_2->BindingName_DEPRECATED);
    pTVar1 = &pFVar11->Tracks;
    if (pTVar1 != &param_2->Tracks) {
      iVar2 = (param_2->Tracks).ArrayNum;
      piVar12 = &(pFVar11->Tracks).ArrayMax;
      pFVar4 = (param_2->Tracks).AllocatorInstance.Data;
      (pFVar11->Tracks).ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar12 == 0)) {
        *piVar12 = 0;
      }
      else {
        in_stack_ffffffffffffff88 = (FMovieSceneBinding *)pTVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,*piVar12,&pTVar1->AllocatorInstance,iVar2,piVar12);
        ConstructItems<TObjectPtr<UMovieSceneTrack>,TObjectPtr<UMovieSceneTrack>,int>
                  ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMovieSceneTrack> *)pFVar4,iVar2);
      }
    }
    pFVar17 = (pTVar1->AllocatorInstance).Data;
    iVar2 = (pFVar11->Tracks).ArrayNum;
    pFVar4 = pFVar17 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar11->Tracks).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar17 == pFVar4) break;
      this_00 = *(UObjectBaseUtility **)pFVar17;
      bVar10 = UObjectBaseUtility::IsIn(this_00,(UObject *)this);
      if (!bVar10) {
        local_res20.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_res20.Number = *(uint *)&this_00->field_0x1c;
        ::FName::ToString(&local_res20,&local_48);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar15.Data = local_48.Data.AllocatorInstance.Data;
        }
        pFVar13 = ::FName::FName((FName *)(local_58 + 8),(wchar_t *)FVar15.Data);
        FVar5.ComparisonIndex.Value = *(uint *)&this_00->field_0x10;
        FVar5.Number = *(uint *)&this_00->field_0x14;
        in_stack_ffffffffffffff88 =
             (FMovieSceneBinding *)((ulonglong)in_stack_ffffffffffffff88 & 0xffffffff00000000);
        MakeUniqueObjectName
                  ((UObject *)local_58,(UClass *)this,FVar5,(*pFVar13).ComparisonIndex.Value);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pcVar6 = *(code **)(*(longlong *)this_00 + 0x170);
        pFVar14 = ::FName::ToString((FName *)local_58,&local_38);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        (*pcVar6)(this_00,pwVar16,this,0x10,in_stack_ffffffffffffff88);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = pFVar17 + 8;
    }
  }
  return;
}

// ReplacePossessable @ 1461cc480

bool __thiscall
UMovieScene::ReplacePossessable(UMovieScene *this,FGuid *param_1,FMovieScenePossessable *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FMovieScenePossessable *pFVar6;
  FMovieSceneBinding *pFVar7;
  FScriptContainerElement *pFVar8;
  FIdentityFunctor local_res20 [8];
  
  pFVar6 = FindPossessable(this,param_1);
  if (pFVar6 != (FMovieScenePossessable *)0x0) {
    uVar3 = (param_2->Guid).B;
    uVar4 = (param_2->Guid).C;
    uVar5 = (param_2->Guid).D;
    (pFVar6->Guid).A = (param_2->Guid).A;
    (pFVar6->Guid).B = uVar3;
    (pFVar6->Guid).C = uVar4;
    (pFVar6->Guid).D = uVar5;
    ::FString::operator=(&pFVar6->Name,&param_2->Name);
    AlgoImpl::
    IntroSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>
              ((FMovieScenePossessable *)(this->Possessables).AllocatorInstance.Data,
               (this->Possessables).ArrayNum,local_res20[0],(TLess<void> *)local_res20);
    pFVar7 = FindBinding(this,param_1);
    if (pFVar7 != (FMovieSceneBinding *)0x0) {
      uVar3 = (param_2->Guid).B;
      uVar4 = (param_2->Guid).C;
      uVar5 = (param_2->Guid).D;
      (pFVar7->ObjectGuid).A = (param_2->Guid).A;
      (pFVar7->ObjectGuid).B = uVar3;
      (pFVar7->ObjectGuid).C = uVar4;
      (pFVar7->ObjectGuid).D = uVar5;
      AlgoImpl::
      IntroSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
                ((FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data,
                 (this->ObjectBindings).ArrayNum,local_res20[0],(TLess<void> *)local_res20);
      pFVar7 = FindBinding(this,&param_2->Guid);
      pFVar8 = (pFVar7->Tracks).AllocatorInstance.Data;
      iVar2 = (pFVar7->Tracks).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar7->Tracks).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar8 == pFVar1) break;
        pFVar8 = pFVar8 + 8;
      }
    }
    return true;
  }
  return false;
}

// Serialize @ 1461d15c0

void __thiscall UMovieScene::Serialize(UMovieScene *this,FArchive *param_1)

{
  int iVar1;
  FIdentityFunctor local_res10 [24];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieSceneEvaluationCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x76) {
      AlgoImpl::
      IntroSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>
                ((FMovieScenePossessable *)(this->Possessables).AllocatorInstance.Data,
                 (this->Possessables).ArrayNum,local_res10[0],(TLess<void> *)local_res10);
      AlgoImpl::
      IntroSortInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>
                ((FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data,
                 (this->Spawnables).ArrayNum,local_res10[0],(TLess<void> *)local_res10);
      AlgoImpl::
      IntroSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
                ((FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data,
                 (this->ObjectBindings).ArrayNum,local_res10[0],(TLess<void> *)local_res10);
    }
  }
  return;
}

// Serialize @ 1461d16a0

void __thiscall UMovieScene::Serialize(UMovieScene *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FMovieSceneEvaluationCustomVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FSequencerObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x76) {
      AlgoImpl::
      IntroSortInternal<FMovieScenePossessable,int,FIdentityFunctor,TDereferenceWrapper<FMovieScenePossessable,TLess<void>_>_>
                ((FMovieScenePossessable *)(this->Possessables).AllocatorInstance.Data,
                 (this->Possessables).ArrayNum,local_res10[0].StructuredArchive._0_1_,
                 (TLess<void> *)local_res10);
      AlgoImpl::
      IntroSortInternal<FMovieSceneSpawnable,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSpawnable,TLess<void>_>_>
                ((FMovieSceneSpawnable *)(this->Spawnables).AllocatorInstance.Data,
                 (this->Spawnables).ArrayNum,local_res10[0].StructuredArchive._0_1_,
                 (TLess<void> *)local_res10);
      AlgoImpl::
      IntroSortInternal<FMovieSceneBinding,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneBinding,TLess<void>_>_>
                ((FMovieSceneBinding *)(this->ObjectBindings).AllocatorInstance.Data,
                 (this->ObjectBindings).ArrayNum,local_res10[0].StructuredArchive._0_1_,
                 (TLess<void> *)local_res10);
    }
  }
  return;
}

// SetCameraCutTrack @ 1461d1e30

void __thiscall UMovieScene::SetCameraCutTrack(UMovieScene *this,UMovieSceneTrack *param_1)

{
  if (param_1 != (UMovieSceneTrack *)0x0) {
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0x10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->CameraCutTrack).field0_0x0.DebugPtr = param_1;
    UMovieSceneTrack::OnAddedToMovieScene(param_1,this);
  }
  return;
}

// SetClockSource @ 1461d1e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMovieScene::SetClockSource(UMovieScene *this,UObject *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  UMovieSceneClock *pUVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  FSoftObjectPath local_c8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UMovieSceneExternalClock_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = this;
  pUVar3 = (UMovieSceneClock *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_c8.AssetPath.PackageName.Number = 0;
  local_c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_c8.AssetPath.AssetName.Number = 0;
  local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.SubPathString.Data.ArrayNum = 0;
  local_c8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_c8,param_1);
  puVar1 = &pUVar3[1].field_0x10;
  *(uint *)&pUVar3[1].field_0x0 = local_c8.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&pUVar3[1].field_0x4 = local_c8.AssetPath.PackageName.Number;
  *(FName *)&pUVar3[1].field_0x8 = local_c8.AssetPath.AssetName;
  if ((FUtf8String *)puVar1 != &local_c8.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_c8.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&pUVar3[1].field_0x18 = local_c8.SubPathString.Data.ArrayNum;
    *(int *)&pUVar3[1].field_0x1c = local_c8.SubPathString.Data.ArrayMax;
    local_c8.SubPathString.Data.ArrayNum = 0;
    local_c8.SubPathString.Data.ArrayMax = 0;
    local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.SubPathString.Data.AllocatorInstance.Data);
  }
  this->ClockSource = Custom;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneClock *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->CustomClock).field0_0x0.DebugPtr = pUVar3;
  return;
}

// SetClockSource @ 1461d1ff0

void __thiscall UMovieScene::SetClockSource(UMovieScene *this,EUpdateClockSource param_1)

{
  if (this->ClockSource != param_1) {
    this->ClockSource = param_1;
  }
  return;
}

// SetCustomClock @ 1461d2130

void __thiscall UMovieScene::SetCustomClock(UMovieScene *this,UMovieSceneClock *param_1)

{
  UMovieSceneClock *pUVar1;
  UClass *pUVar2;
  bool bVar3;
  
  if (this->ClockSource == Custom) {
    pUVar1 = (this->CustomClock).field0_0x0.DebugPtr;
    if (pUVar1 == (UMovieSceneClock *)0x0) {
      bVar3 = param_1 == (UMovieSceneClock *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_1;
    }
    if (bVar3) {
      return;
    }
  }
  this->ClockSource = Custom;
  bVar3 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,(UObject *)this);
  if (!bVar3) {
    pUVar2 = Z_Construct_UClass_UMovieSceneClock_NoRegister();
    param_1 = (UMovieSceneClock *)
              DuplicateObject_Internal(pUVar2,(UObject *)param_1,(UObject *)this,(FName)0x0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneClock *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CustomClock).field0_0x0.DebugPtr = param_1;
  return;
}

// SetMarkedFrame @ 1461d24a0

void __thiscall UMovieScene::SetMarkedFrame(UMovieScene *this,int param_1,FFrameNumber param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) || (param_1 <= (this->MarkedFrames).ArrayNum + -1)) {
    uVar3 = 0;
    if (param_1 < (this->MarkedFrames).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(int *)((this->MarkedFrames).AllocatorInstance.Data + (longlong)param_1 * 0x20) = param_2.Value
    ;
  }
  return;
}

// SetPlaybackRange @ 1461d2af0

void __thiscall
UMovieScene::SetPlaybackRange(UMovieScene *this,TRange<FFrameNumber> *param_1,bool param_2)

{
  uchar uVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  bool bVar4;
  
  if ((((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewRange.GetLowerBound().IsClosed() && NewRange.GetUpperBound().IsClosed()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScene.cpp"
                            ,0x2c8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = TRange<FFrameNumber>::IsEmpty(&(this->PlaybackRange).Value);
  if (((!bVar4) || (bVar4 = TRange<FFrameNumber>::IsEmpty(param_1), !bVar4)) &&
     ((((uVar1 = (this->PlaybackRange).Value.LowerBound.Type.Value,
        uVar1 != (param_1->LowerBound).Type.Value ||
        ((uVar1 != '\x02' &&
         ((this->PlaybackRange).Value.LowerBound.Value.Value != (param_1->LowerBound).Value.Value)))
        ) || (uVar1 = (this->PlaybackRange).Value.UpperBound.Type.Value,
             uVar1 != (param_1->UpperBound).Type.Value)) ||
      ((uVar1 != '\x02' &&
       ((this->PlaybackRange).Value.UpperBound.Value.Value != (param_1->UpperBound).Value.Value)))))
     ) {
    TVar3 = param_1->UpperBound;
    (this->PlaybackRange).Value.LowerBound = param_1->LowerBound;
    (this->PlaybackRange).Value.UpperBound = TVar3;
  }
  return;
}

// SetPlaybackRange @ 1461d2ba0

void __thiscall
UMovieScene::SetPlaybackRange(UMovieScene *this,FFrameNumber param_1,int param_2,bool param_3)

{
  uchar uVar1;
  int iVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  bool bVar5;
  FFrameNumber *pFVar6;
  FMovieSceneFrameRange *this_00;
  TRangeBound<FFrameNumber> local_18;
  TRangeBound<FFrameNumber> TStack_10;
  
  TStack_10.Value.Value = param_1.Value + param_2;
  local_18.Type.Value = '\x01';
  this_00 = &this->PlaybackRange;
  TStack_10._0_4_ = TStack_10._0_4_ & 0xffffff00;
  local_18.Value.Value = param_1.Value;
  bVar5 = TRange<FFrameNumber>::IsEmpty(&this_00->Value);
  if (bVar5) {
    if ((local_18.Type.Value == '\x02') || (TStack_10.Type.Value == '\x02')) goto LAB_1461d2c2b;
    if (TStack_10.Value.Value < local_18.Value.Value) {
      return;
    }
    pFVar6 = TRangeBound<FFrameNumber>::GetValue(&TStack_10);
    iVar2 = pFVar6->Value;
    pFVar6 = TRangeBound<FFrameNumber>::GetValue(&local_18);
    if (pFVar6->Value == iVar2) {
      if (local_18.Type.Value == '\0') {
        return;
      }
      if (TStack_10.Type.Value == '\0') {
        return;
      }
      goto LAB_1461d2c2b;
    }
  }
LAB_1461d2c2b:
  uVar1 = (this_00->Value).LowerBound.Type.Value;
  if ((uVar1 == local_18.Type.Value) &&
     ((uVar1 == '\x02' ||
      ((this->PlaybackRange).Value.LowerBound.Value.Value == local_18.Value.Value)))) {
    uVar1 = (this->PlaybackRange).Value.UpperBound.Type.Value;
    if (uVar1 == TStack_10.Type.Value) {
      if (uVar1 == '\x02') {
        return;
      }
      if ((this->PlaybackRange).Value.UpperBound.Value.Value == TStack_10.Value.Value) {
        return;
      }
    }
  }
  TVar3.Value.Value = local_18.Value.Value;
  TVar3.Type.Value = local_18.Type.Value;
  TVar3._1_3_ = local_18._1_3_;
  TVar4.Value.Value = TStack_10.Value.Value;
  TVar4.Type.Value = TStack_10.Type.Value;
  TVar4._1_3_ = TStack_10._1_3_;
  (this_00->Value).LowerBound = TVar3;
  (this->PlaybackRange).Value.UpperBound = TVar4;
  return;
}

// SetTickResolutionDirectly @ 1461d2e60

void __thiscall UMovieScene::SetTickResolutionDirectly(UMovieScene *this,FFrameRate param_1)

{
  FFrameRate FVar1;
  UMovieSceneClock *pUVar2;
  
  FVar1 = this->TickResolution;
  this->TickResolution = param_1;
  pUVar2 = (this->CustomClock).field0_0x0.DebugPtr;
  if (pUVar2 != (UMovieSceneClock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461d2e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))
              (pUVar2,FVar1,param_1,*(code **)(*(longlong *)pUVar2 + 0x2c0));
    return;
  }
  return;
}

// SetViewRange @ 1461d2fb0

void __thiscall UMovieScene::SetViewRange(UMovieScene *this,double param_1,double param_2)

{
  return;
}

// SetWorkingRange @ 1461d3650

void __thiscall UMovieScene::SetWorkingRange(UMovieScene *this,double param_1,double param_2)

{
  return;
}

// SortMarkedFrames @ 1461d4750

void __thiscall UMovieScene::SortMarkedFrames(UMovieScene *this)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<FMovieSceneMarkedFrame,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneMarkedFrame,_UMovieScene::SortMarkedFrames_::__l2::<lambda_1>_>_>
            ((FMovieSceneMarkedFrame *)(this->MarkedFrames).AllocatorInstance.Data,
             (this->MarkedFrames).ArrayNum,(FIdentityFunctor)0x0,(<lambda_1> *)local_res8);
  return;
}

// StaticRegisterNativesUMovieScene @ 1461d48d0

void __cdecl UMovieScene::StaticRegisterNativesUMovieScene(void)

{
  return;
}

// TagBinding @ 1461d5c30

void __thiscall
UMovieScene::TagBinding(UMovieScene *this,FName *param_1,FFixedObjectBindingID *param_2)

{
  FName FVar1;
  uint uVar2;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *this_00;
  FMovieSceneObjectBindingID local_28;
  
  local_28.Guid.A = (param_2->Guid).A;
  local_28.Guid.B = (param_2->Guid).B;
  local_28.Guid.C = (param_2->Guid).C;
  local_28.Guid.D = (param_2->Guid).D;
  FVar1 = *param_1;
  local_28.SequenceID = (param_2->SequenceID).Value;
  local_28.ResolveParentIndex = -1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = &TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
                         *)&this->BindingGroups,uVar2 + FVar1.Number,param_1)->IDs;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FMovieSceneObjectBindingID_const_&>(this_00,&local_28);
  return;
}

// UntagBinding @ 1461de2f0

void __thiscall
UMovieScene::UntagBinding(UMovieScene *this,FName *param_1,FFixedObjectBindingID *param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *local_res8;
  FName local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  undefined4 local_14;
  
  local_28._0_4_ = (param_2->Guid).A;
  local_28._4_4_ = (param_2->Guid).B;
  uStack_20._0_4_ = (param_2->Guid).C;
  uStack_20._4_4_ = (param_2->Guid).D;
  FVar1 = *param_1;
  local_18 = (param_2->SequenceID).Value;
  local_14 = 0xffffffff;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->BindingGroups).field_0x8 != *(int *)&(this->BindingGroups).field_0x34) {
    puVar7 = *(undefined1 **)&(this->BindingGroups).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->BindingGroups).field_0x38;
    }
    uVar5 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->BindingGroups).field_0x48 - 1U &
                               FVar1.Number + uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      while (pFVar6 = (FName *)((longlong)(int)uVar5 * 0x20 +
                               *(longlong *)&(this->BindingGroups).field_0x0), *pFVar6 != FVar1) {
        uVar5 = pFVar6[3].ComparisonIndex.Value;
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      this_00 = (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)(pFVar6 + 1);
      if (pFVar6 == (FName *)0x0) {
        this_00 = (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)0x0;
      }
      if (this_00 != (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar2 = (this_00->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
           ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)this_00->ArrayMax * 0x18)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_res8 = &local_28;
        TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::
        RemoveAll<_TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                  (this_00,(<lambda_1> *)&local_res8);
        if (this_00->ArrayNum == 0) {
          FVar1 = *param_1;
          if (*(int *)&(this->BindingGroups).field_0x8 != *(int *)&(this->BindingGroups).field_0x34)
          {
            local_res10 = FVar1;
            uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
            TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneObjectBindingIDs>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>,FDefaultSetAllocator>
                                 *)&this->BindingGroups,FVar1.Number + uVar5,&local_res10);
          }
        }
      }
    }
  }
  return;
}

// UpgradeTimeRanges @ 1461e0f70

void __thiscall UMovieScene::UpgradeTimeRanges(UMovieScene *this)

{
  undefined8 *puVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  bool bVar9;
  ulonglong uVar10;
  TRangeBound<FFrameNumber> TVar11;
  FScriptContainerElement *pFVar12;
  TEnumAsByte<ERangeBoundTypes::Type> TVar13;
  FFrameNumber FVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  TRangeBound<FFrameNumber> local_res8;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TRangeBound<FFrameNumber> local_98;
  uint local_90;
  TRangeBound<FFrameNumber> local_88;
  TOptional<TRangeBound<FFrameNumber>_> local_80;
  TOptional<TRangeBound<FFrameNumber>_> local_70;
  uint local_60;
  uint uStack_58;
  
  bVar9 = TRange<FFrameNumber>::IsEmpty(&(this->PlaybackRange).Value);
  FVar14.Value = 0;
  if (bVar9) {
    iVar4 = (this->Tracks).ArrayNum;
    TVar13.Value = '\0';
    pFVar15 = (this->Tracks).AllocatorInstance.Data;
    local_98 = (TRangeBound<FFrameNumber>)(((ulonglong)local_98 >> 8 & 0xffffff) << 8);
    pFVar17 = pFVar15 + (longlong)iVar4 * 8;
    local_res8 = local_98;
    while( true ) {
      if ((this->Tracks).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UMovieSceneTrack>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar15 == pFVar17) break;
      GetMaxUpperBound(&local_80,*(UMovieSceneTrack **)pFVar15);
      TVar11 = local_res8;
      if (local_80.bIsSet != false) {
        if (((TVar13.Value != '\x02') &&
            (TVar5.Value.Value = local_80.TypedValue.Value.Value,
            TVar5.Type.Value = local_80.TypedValue.Type.Value,
            TVar5._1_3_ = local_80.TypedValue._1_3_, TVar11 = TVar5,
            local_80.TypedValue.Type.Value != '\x02')) &&
           ((TVar11 = local_res8, FVar14.Value <= local_80.TypedValue.Value.Value &&
            ((TVar11 = TVar5, local_80.TypedValue.Value.Value <= FVar14.Value &&
             (TVar13.Value == '\x01')))))) {
          TVar11 = local_res8;
        }
        local_98.Value = TVar11.Value.Value;
        local_98.Type = TVar11.Type.Value;
        TVar13.Value = local_98.Type.Value;
        FVar14.Value = local_98.Value.Value;
      }
      pFVar15 = pFVar15 + 8;
      local_res8 = TVar11;
    }
    local_res10[0] = (this->ObjectBindings).ArrayNum;
    uVar10 = (ulonglong)(int)local_res10[0];
    pFVar15 = (this->ObjectBindings).AllocatorInstance.Data;
    pFVar12 = pFVar15 + uVar10 * 0x40;
    pFVar17 = pFVar15 + 0x38;
    while( true ) {
      if ((this->ObjectBindings).ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<FMovieSceneBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar15 == pFVar12) break;
      puVar16 = *(undefined8 **)(pFVar17 + -8);
      iVar4 = *(int *)pFVar17;
      puVar1 = puVar16 + iVar4;
      while( true ) {
        if (*(int *)pFVar17 != iVar4) {
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (puVar16 == puVar1) break;
        GetMaxUpperBound(&local_70,(UMovieSceneTrack *)*puVar16);
        TVar11 = local_res8;
        if (local_70.bIsSet != false) {
          if ((((TVar13.Value != '\x02') &&
               (TVar6.Value.Value = local_70.TypedValue.Value.Value,
               TVar6.Type.Value = local_70.TypedValue.Type.Value,
               TVar6._1_3_ = local_70.TypedValue._1_3_, TVar11 = TVar6,
               local_70.TypedValue.Type.Value != '\x02')) &&
              (TVar11 = local_res8, FVar14.Value <= local_70.TypedValue.Value.Value)) &&
             ((TVar11 = TVar6, local_70.TypedValue.Value.Value <= FVar14.Value &&
              (TVar13.Value == '\x01')))) {
            TVar11 = local_res8;
          }
          local_98.Value = TVar11.Value.Value;
          local_98.Type = TVar11.Type.Value;
          TVar13.Value = local_98.Type.Value;
          FVar14.Value = local_98.Value.Value;
        }
        puVar16 = puVar16 + 1;
        local_res8 = TVar11;
      }
      pFVar15 = pFVar15 + 0x40;
      pFVar17 = pFVar17 + 0x40;
      uVar10 = (ulonglong)local_res10[0];
    }
    if (TVar13.Value == '\x01') {
      local_res8 = (TRangeBound<FFrameNumber>)
                   (CONCAT44(FVar14.Value + 1,(int)this) & 0xffffffffffffff00);
    }
    local_90 = CONCAT31(local_90._1_3_,1);
    TVar11.Value.Value = 0;
    TVar11._0_4_ = local_90;
    (this->PlaybackRange).Value.LowerBound = TVar11;
    (this->PlaybackRange).Value.UpperBound = local_res8;
  }
  else if ((this->PlaybackRange).Value.UpperBound.Type.Value == '\x01') {
    local_88 = (TRangeBound<FFrameNumber>)
               (CONCAT44((this->PlaybackRange).Value.UpperBound.Value.Value + 1,local_88._0_4_) &
               0xffffffffffffff00);
    (this->PlaybackRange).Value.UpperBound = local_88;
  }
  uVar2 = (this->PlaybackRange).Value.LowerBound.Type.Value;
  if (((uVar2 == '\x02') ||
      (uVar3 = (this->PlaybackRange).Value.UpperBound.Type.Value, uVar3 == '\x02')) ||
     ((uVar2 == '\x01' &&
      ((uVar3 == '\x01' &&
       ((this->PlaybackRange).Value.LowerBound.Value.Value ==
        (this->PlaybackRange).Value.UpperBound.Value.Value)))))) {
    local_60 = CONCAT31(local_60._1_3_,1);
    uStack_58 = uStack_58 & 0xffffff00;
    TVar7.Value.Value = 0;
    TVar7._0_4_ = local_60;
    TVar8.Value.Value = 0;
    TVar8._0_4_ = uStack_58;
    (this->PlaybackRange).Value.LowerBound = TVar7;
    (this->PlaybackRange).Value.UpperBound = TVar8;
  }
  return;
}

// AddTrack<UTestMovieSceneEvalHookTrack> @ 14627d370

UTestMovieSceneEvalHookTrack * __thiscall
UMovieScene::AddTrack<UTestMovieSceneEvalHookTrack>(UMovieScene *this)

{
  int iVar1;
  UTestMovieSceneEvalHookTrack *pUVar2;
  UClass *pUVar3;
  UClass *local_res10 [3];
  
  local_res10[0] = UTestMovieSceneEvalHookTrack::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  pUVar2 = (UTestMovieSceneEvalHookTrack *)AddTrack(this,(TSubclassOf<UMovieSceneTrack>)local_res10)
  ;
  if (pUVar2 != (UTestMovieSceneEvalHookTrack *)0x0) {
    pUVar3 = UTestMovieSceneEvalHookTrack::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTestMovieSceneEvalHookTrack *)0x0;
}

// GetCustomClock @ 1462aef20

UMovieSceneClock * __thiscall UMovieScene::GetCustomClock(UMovieScene *this)

{
  UMovieSceneClock *pUVar1;
  
  if (this->ClockSource == Custom) {
    pUVar1 = (this->CustomClock).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UMovieSceneClock *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMovieSceneClock *)0x0;
}

// operator() @ 1504e6220

bool __thiscall `UMovieScene::AddPossessable'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<697391642490962337>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<697391642490962337>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

