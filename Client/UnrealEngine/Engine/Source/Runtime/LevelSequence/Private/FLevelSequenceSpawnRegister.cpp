// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 5

// FLevelSequenceSpawnRegister @ 146c4e360

FLevelSequenceSpawnRegister * __thiscall
FLevelSequenceSpawnRegister::FLevelSequenceSpawnRegister
          (FLevelSequenceSpawnRegister *this,FLevelSequenceSpawnRegister *param_1)

{
  TArray<TSharedRef<IMovieSceneObjectSpawner,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedRef<IMovieSceneObjectSpawner,1> *pTVar4;
  
  FMovieSceneSpawnRegister::FMovieSceneSpawnRegister
            ((FMovieSceneSpawnRegister *)this,(FMovieSceneSpawnRegister *)param_1);
  pTVar1 = &this->MovieSceneObjectSpawners;
  this->_padding_ = (longlong)&___7FLevelSequenceSpawnRegister__6B_;
  piVar2 = &(this->MovieSceneObjectSpawners).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->MovieSceneObjectSpawners).ArrayNum;
  pTVar4 = (TSharedRef<IMovieSceneObjectSpawner,1> *)
           (param_1->MovieSceneObjectSpawners).AllocatorInstance.Data;
  (this->MovieSceneObjectSpawners).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedRef<IMovieSceneObjectSpawner,1>,TSharedRef<IMovieSceneObjectSpawner,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  return this;
}

// FLevelSequenceSpawnRegister @ 146c4e400

FLevelSequenceSpawnRegister * __thiscall
FLevelSequenceSpawnRegister::FLevelSequenceSpawnRegister(FLevelSequenceSpawnRegister *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  FLevelSequenceSpawnRegister *pFVar4;
  IModuleInterface *pIVar5;
  FName local_res8;
  FName local_res10;
  FString local_28;
  
  FMovieSceneSpawnRegister::FMovieSceneSpawnRegister((FMovieSceneSpawnRegister *)this);
  this->_padding_ = (longlong)&___7FLevelSequenceSpawnRegister__6B_;
  (this->MovieSceneObjectSpawners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovieSceneObjectSpawners).ArrayNum = 0;
  (this->MovieSceneObjectSpawners).ArrayMax = 0;
  pFVar3 = ::FName::FName(&local_res10,"LevelSequence");
  local_res8 = *pFVar3;
  this_00 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this_00,local_res8);
  if (!bVar2) {
    ::FName::ToString(&local_res8,&local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLevelSequenceSpawnRegister *)(*pcVar1)();
      return pFVar4;
    }
  }
  pIVar5 = FModuleManager::GetModule(this_00,local_res8);
  (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,&this->MovieSceneObjectSpawners);
  return this;
}

// ~FLevelSequenceSpawnRegister @ 146c4ef30

void __thiscall
FLevelSequenceSpawnRegister::~FLevelSequenceSpawnRegister(FLevelSequenceSpawnRegister *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLevelSequenceSpawnRegister__6B_;
  DestructItems<TSharedRef<IMovieSceneObjectSpawner,1>,int>
            ((TSharedRef<IMovieSceneObjectSpawner,1> *)
             (this->MovieSceneObjectSpawners).AllocatorInstance.Data,
             (this->MovieSceneObjectSpawners).ArrayNum);
  pFVar1 = (this->MovieSceneObjectSpawners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister((FMovieSceneSpawnRegister *)this);
  return;
}

// DestroySpawnedObject @ 146c52350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLevelSequenceSpawnRegister::DestroySpawnedObject
          (FLevelSequenceSpawnRegister *this,UObject *param_1,
          UMovieSceneSpawnableBindingBase *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName local_res18;
  FString local_48;
  FString local_38;
  
  if (param_2 != (UMovieSceneSpawnableBindingBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c52371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x300))(param_2);
    return;
  }
  pFVar6 = (this->MovieSceneObjectSpawners).AllocatorInstance.Data;
  iVar1 = (this->MovieSceneObjectSpawners).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MovieSceneObjectSpawners).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<IMovieSceneObjectSpawner,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res18);
    }
    if (pFVar6 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    plVar3 = *(longlong **)pFVar6;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar4 = (**(code **)*plVar3)(plVar3);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) +
         (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar6 = pFVar6 + 0x10;
  }
  if ((byte)LogMovieScene._0_1_ < 2) {
    return;
  }
  local_res18 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
  ::FName::ToString(&local_res18,&local_48);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_48.Data.AllocatorInstance.Data);
  return;
}

// SpawnObject @ 146c5c360

UObject * __thiscall
FLevelSequenceSpawnRegister::SpawnObject
          (FLevelSequenceSpawnRegister *this,FMovieSceneSpawnable *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FSharedPlaybackState *local_50;
  TReferenceControllerBase<1> *local_48;
  
  uVar1 = (this->MovieSceneObjectSpawners).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar9 = (this->MovieSceneObjectSpawners).AllocatorInstance.Data;
  pFVar10 = pFVar9 + uVar6 * 0x10;
  do {
    if ((this->MovieSceneObjectSpawners).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<TSharedRef<IMovieSceneObjectSpawner,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return (UObject *)0x0;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    plVar3 = *(longlong **)pFVar9;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar8 = (param_1->ObjectTemplate).field0_0x0.DebugPtr;
    if (pUVar8 != (UObject *)0x0) {
      lVar7 = (**(code **)*plVar3)(plVar3);
      lVar4 = *(longlong *)&pUVar8->field_0x10;
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        pcVar5 = *(code **)(*plVar3 + 8);
        local_50 = param_3->Object;
        local_48 = (param_3->SharedReferenceCount).ReferenceController;
        if (local_48 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar8 = (UObject *)(*pcVar5)(plVar3,param_1,param_2,&local_50);
        if (pUVar8 != (UObject *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_3->SharedReferenceCount).ReferenceController);
          return pUVar8;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar6 = (ulonglong)uVar1;
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

