// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// TBaseKeyIterator<1> @ 146805e20

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<UMovieScenePropertyInstantiatorSystem::FContributorKey_const_>
                   param_2)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  int iVar3;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar1 = (param_1->Hash).SecondaryData;
    if (FVar1 == (ForElementType<FSetElementId>)0x0) {
      FVar1 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar1 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(param_2.Ref)->PropertyIndex) * 4)
    ;
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&param_1->Elements + 8 + lVar2 * 0x10);
        this->NextIndex = iVar3;
        if (*(int *)(*(longlong *)&param_1->Elements + lVar2 * 0x10) == (param_2.Ref)->PropertyIndex
           ) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 146805eb0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FObjectKey_const_> param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint uVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = (param_2.Ref)->ObjectSerialNumber;
    FVar5 = (param_1->Hash).SecondaryData;
    uVar6 = (param_2.Ref)->ObjectIndex - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
    uVar7 = (uVar3 - uVar2) - uVar6 ^ uVar2 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar2 ^ uVar7 >> 0xc;
    uVar3 = (uVar2 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar3) - uVar6 ^ uVar3 >> 5;
    uVar2 = (uVar6 - uVar7) - uVar3 ^ uVar7 >> 3;
    uVar3 = (uVar3 - uVar2) - uVar7 ^ uVar2 << 10;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 +
                    (((longlong)(int)((uVar7 - uVar3) - uVar2) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar1;
    this->Index = iVar1;
    if (iVar1 != -1) {
      while( true ) {
        lVar4 = (longlong)iVar1;
        iVar1 = *(int *)(*(longlong *)&param_1->Elements + 0x80 + lVar4 * 0x90);
        this->NextIndex = iVar1;
        if ((*(int *)(*(longlong *)&param_1->Elements + lVar4 * 0x90) == (param_2.Ref)->ObjectIndex)
           && (*(int *)(*(longlong *)&param_1->Elements + 4 + lVar4 * 0x90) ==
               (param_2.Ref)->ObjectSerialNumber)) break;
        this->Index = iVar1;
        if (iVar1 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 146810510

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = this->NextIndex;
  this->Index = iVar2;
  if (iVar2 != -1) {
    do {
      lVar1 = (longlong)iVar2;
      iVar2 = *(int *)(*(longlong *)&this->Set->Elements + 8 + lVar1 * 0x10);
      this->NextIndex = iVar2;
      if (*(int *)(*(longlong *)&this->Set->Elements + lVar1 * 0x10) == this->Key->PropertyIndex) {
        return this;
      }
      this->Index = iVar2;
    } while (iVar2 != -1);
  }
  return this;
}

// operator++ @ 146810570

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = this->NextIndex;
  this->Index = iVar3;
  if (iVar3 != -1) {
    do {
      lVar2 = (longlong)iVar3;
      iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x80 + lVar2 * 0x90);
      this->NextIndex = iVar3;
      lVar1 = *(longlong *)&this->Set->Elements;
      if ((*(int *)(lVar1 + lVar2 * 0x90) == this->Key->ObjectIndex) &&
         (*(int *)(lVar1 + 4 + lVar2 * 0x90) == this->Key->ObjectSerialNumber)) {
        return this;
      }
      this->Index = iVar3;
    } while (iVar3 != -1);
  }
  return this;
}

