// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Add @ 146204670

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
FMovieSceneSpawnableAnnotation::Add
          (UObject *param_1,FGuid *param_2,FMovieSceneSequenceID param_3,
          UMovieSceneSequence *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UObjectBase *pUVar3;
  UMovieSceneSequence *local_res8;
  UObjectBase *local_68;
  UObjectBase **local_60;
  FGuid *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  FWeakObjectPtr local_40;
  uint local_38;
  FGuid local_30;
  FWeakObjectPtr local_20;
  uint local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_50._0_4_ = param_2->A;
    local_50._4_4_ = param_2->B;
    uStack_48._0_4_ = param_2->C;
    uStack_48._4_4_ = param_2->D;
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_res8 = param_4;
    local_38 = param_3.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_4 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_res8);
    local_30.C = (undefined4)uStack_48;
    local_30.D = uStack_48._4_4_;
    local_30.A = (undefined4)local_50;
    local_30.B = local_50._4_4_;
    local_18 = local_38;
    local_20 = local_40;
    local_68 = (UObjectBase *)param_1;
    if ((((int)((ulonglong)local_50 >> 0x20) == 0 && (int)((ulonglong)uStack_48 >> 0x20) == 0) &&
        (int)uStack_48 == 0) && (int)local_50 == 0) {
      FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::RemoveAnnotation
                (&SpawnedObjectAnnotation,(UObjectBase *)param_1);
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationMapCritical);
    uVar2 = SpawnedObjectAnnotation.AnnotationMap._52_4_;
    uVar1 = SpawnedObjectAnnotation.AnnotationMap._8_4_;
    local_60 = &local_68;
    local_58 = &local_30;
    TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FMovieSceneSpawnableAnnotation_const_&>_>
              ((TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
                *)&SpawnedObjectAnnotation.AnnotationMap,
               (TPairInitializer<UObjectBase_const_*_const_&,FMovieSceneSpawnableAnnotation_const_&>
                *)&local_res8,(bool *)&local_60);
    pUVar3 = local_68;
    AcquireSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
    SpawnedObjectAnnotation.AnnotationCacheValue.ObjectBindingID = local_30;
    SpawnedObjectAnnotation.AnnotationCacheKey = pUVar3;
    SpawnedObjectAnnotation.AnnotationCacheValue.OriginatingSequence.WeakPtr = local_20;
    SpawnedObjectAnnotation.AnnotationCacheValue.SequenceID.Value = local_18;
    ReleaseSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
    ReleaseSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationMapCritical);
    if (uVar1 == uVar2) {
      FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::ProcessRegistration
                (&SpawnedObjectAnnotation);
    }
  }
  return;
}

// Find @ 146210d70

TOptional<FMovieSceneSpawnableAnnotation> * __cdecl
FMovieSceneSpawnableAnnotation::Find
          (TOptional<FMovieSceneSpawnableAnnotation> *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FMovieSceneSpawnableAnnotation> *pTVar3;
  FMovieSceneSpawnableAnnotation *pFVar4;
  FPlatformRWLock *SRWLock;
  FMovieSceneSequenceID FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FWeakObjectPtr local_res8;
  FMovieSceneSpawnableAnnotation local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  FMovieSceneSpawnableAnnotation local_4c;
  TOptional<FMovieSceneSpawnableAnnotation> local_30;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x11d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TOptional<FMovieSceneSpawnableAnnotation> *)(*pcVar1)();
    return pTVar3;
  }
  AcquireSRWLockShared((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
  SRWLock = &SpawnedObjectAnnotation.AnnotationCacheCritical;
  if ((UObjectBase *)param_1 == SpawnedObjectAnnotation.AnnotationCacheKey) {
    local_88.ObjectBindingID = SpawnedObjectAnnotation.AnnotationCacheValue.ObjectBindingID;
    local_res8 = SpawnedObjectAnnotation.AnnotationCacheValue.OriginatingSequence.WeakPtr;
    FVar5 = SpawnedObjectAnnotation.AnnotationCacheValue.SequenceID;
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
    AcquireSRWLockShared((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationMapCritical);
    pFVar4 = TMapBase<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>_>
             ::Find((TMapBase<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>_>
                     *)&SpawnedObjectAnnotation.AnnotationMap,(UObjectBase *)param_1);
    if (pFVar4 == (FMovieSceneSpawnableAnnotation *)0x0) {
      FVar5.Value = 0xffffffff;
      local_88.ObjectBindingID = (FGuid)ZEXT816(0);
      local_88.OriginatingSequence.WeakPtr.ObjectIndex = 0;
      local_88.OriginatingSequence.WeakPtr.ObjectSerialNumber = 0;
      local_88.SequenceID.Value = 0xffffffff;
      FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::SetAnnotationCacheKeyAndValue
                (&SpawnedObjectAnnotation,(UObjectBase *)param_1,&local_88);
      local_68 = 0;
      uStack_60 = 0;
      uVar6 = 0;
      uVar7 = 0;
      local_58 = 0;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
    }
    else {
      local_4c.SequenceID.Value = (pFVar4->SequenceID).Value;
      local_4c.ObjectBindingID.A = (pFVar4->ObjectBindingID).A;
      local_4c.ObjectBindingID.B = (pFVar4->ObjectBindingID).B;
      local_4c.ObjectBindingID.C = (pFVar4->ObjectBindingID).C;
      local_4c.ObjectBindingID.D = (pFVar4->ObjectBindingID).D;
      local_4c.OriginatingSequence.WeakPtr = (pFVar4->OriginatingSequence).WeakPtr;
      FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::SetAnnotationCacheKeyAndValue
                (&SpawnedObjectAnnotation,(UObjectBase *)param_1,&local_4c);
      uVar6._0_4_ = (pFVar4->ObjectBindingID).A;
      uVar6._4_4_ = (pFVar4->ObjectBindingID).B;
      uVar7._0_4_ = (pFVar4->ObjectBindingID).C;
      uVar7._4_4_ = (pFVar4->ObjectBindingID).D;
      local_res8 = (pFVar4->OriginatingSequence).WeakPtr;
      FVar5.Value = (pFVar4->SequenceID).Value;
    }
    local_88.ObjectBindingID.C = (int)uVar7;
    local_88.ObjectBindingID.D = (int)((ulonglong)uVar7 >> 0x20);
    local_88.ObjectBindingID.A = (int)uVar6;
    local_88.ObjectBindingID.B = (int)((ulonglong)uVar6 >> 0x20);
    SRWLock = &SpawnedObjectAnnotation.AnnotationMapCritical;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  __return_storage_ptr__->bIsSet = false;
  if ((((local_88.ObjectBindingID.D != 0 || local_88.ObjectBindingID.C != 0) ||
       local_88.ObjectBindingID.B != 0) || local_88.ObjectBindingID.A != 0) &&
     (&local_30 != __return_storage_ptr__)) {
    (__return_storage_ptr__->TypedValue).ObjectBindingID.A = local_88.ObjectBindingID.A;
    (__return_storage_ptr__->TypedValue).ObjectBindingID.B = local_88.ObjectBindingID.B;
    (__return_storage_ptr__->TypedValue).ObjectBindingID.C = local_88.ObjectBindingID.C;
    (__return_storage_ptr__->TypedValue).ObjectBindingID.D = local_88.ObjectBindingID.D;
    (__return_storage_ptr__->TypedValue).OriginatingSequence.WeakPtr = local_res8;
    (__return_storage_ptr__->TypedValue).SequenceID.Value = FVar5.Value;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

