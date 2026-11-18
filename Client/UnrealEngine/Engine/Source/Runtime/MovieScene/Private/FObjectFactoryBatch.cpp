// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FObjectFactoryBatch @ 146094470

FObjectFactoryBatch * __thiscall
UE::MovieScene::FObjectFactoryBatch::FObjectFactoryBatch
          (FObjectFactoryBatch *this,FObjectFactoryBatch *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7FChildEntityFactory_MovieScene_UE__6B_;
  lVar4 = param_1->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  *plVar1 = 0;
  iVar3 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,_Src,(longlong)iVar3 << 2);
  }
  this->_padding_ = (longlong)&___7FObjectFactoryBatch_MovieScene_UE__6B_;
  this->StaleEntitiesToPreserve = param_1->StaleEntitiesToPreserve;
  (this->PreservedEntities).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreservedEntities).Pairs.AllocatorInstance.Data =
       (param_1->PreservedEntities).Pairs.AllocatorInstance.Data;
  (param_1->PreservedEntities).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreservedEntities).Pairs.ArrayNum = (param_1->PreservedEntities).Pairs.ArrayNum;
  (this->PreservedEntities).Pairs.ArrayMax = (param_1->PreservedEntities).Pairs.ArrayMax;
  (param_1->PreservedEntities).Pairs.ArrayNum = 0;
  (param_1->PreservedEntities).Pairs.ArrayMax = 0;
  (this->ObjectsToAssign).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToAssign).AllocatorInstance.Data = (param_1->ObjectsToAssign).AllocatorInstance.Data
  ;
  (param_1->ObjectsToAssign).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToAssign).ArrayNum = (param_1->ObjectsToAssign).ArrayNum;
  (this->ObjectsToAssign).ArrayMax = (param_1->ObjectsToAssign).ArrayMax;
  (param_1->ObjectsToAssign).ArrayNum = 0;
  (param_1->ObjectsToAssign).ArrayMax = 0;
  return this;
}

// Add @ 1460a61f0

void __thiscall
UE::MovieScene::FObjectFactoryBatch::Add(FObjectFactoryBatch *this,int param_1,UObject *param_2)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [2];
  UObject *local_res18 [2];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if (((int *)this->_padding_ <= local_res10) &&
     (local_res10 < (int *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  pTVar2 = &this->ObjectsToAssign;
  *(int *)&this->_padding_ = iVar6 + 1;
  *(int *)(this->_padding_ + (longlong)iVar6 * 4) = local_res10[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar3 + (longlong)(this->ObjectsToAssign).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ObjectsToAssign).ArrayNum;
  piVar1 = &(this->ObjectsToAssign).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ObjectsToAssign).ArrayNum = iVar6 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res18[0];
  return;
}

// GenerateDerivedType @ 1460c7ae0

void __thiscall
UE::MovieScene::FObjectFactoryBatch::GenerateDerivedType
          (FObjectFactoryBatch *this,FComponentMask *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  
  pFVar1 = FBuiltInComponentTypes::Get();
  FComponentMask::Set(param_1,(FComponentTypeID)*(ushort *)&pFVar1->BoundObject);
  return;
}

// InitializeAllocation @ 1460d2160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FObjectFactoryBatch::InitializeAllocation
          (FObjectFactoryBatch *this,UMovieSceneEntitySystemLinker *param_1,FComponentMask *param_2,
          FComponentMask *param_3,FEntityAllocation *param_4,TArrayView<int_const_,int> *param_5,
          FEntityRange *param_6)

{
  TComponentTypeID<UObject_*> TVar1;
  FMovieSceneEntityID FVar2;
  int iVar3;
  FEntityAllocation *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FBuiltInComponentTypes *pFVar8;
  TTuple<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID>
  *pTVar9;
  FComponentHeader *pFVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  FComponentHeader *pFVar14;
  longlong lVar15;
  EComponentHeaderLockMode EVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  FMovieSceneEntityID local_98 [2];
  FMovieSceneEntityID local_94 [2];
  uint local_90;
  EComponentHeaderLockMode local_8c;
  FComponentHeader *local_88;
  uchar *local_80;
  FMovieSceneEntityID *local_78;
  FEntityManager *local_70;
  TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID> local_68;
  TComponentLock<UE::MovieScene::TWrite<UObject_*>_> local_58;
  
  pFVar8 = FBuiltInComponentTypes::Get();
  TVar1 = pFVar8->BoundObject;
  pFVar8 = FBuiltInComponentTypes::Get();
  pFVar4 = param_6->Allocation;
  local_78 = pFVar4->EntityIDs;
  pFVar14 = pFVar4->ComponentHeaders;
  local_90 = (uint)pFVar4->Size;
  pFVar10 = pFVar14 + pFVar4->NumComponents;
  for (; pFVar14 != pFVar10; pFVar14 = pFVar14 + 1) {
    local_88 = pFVar14;
    if ((TComponentTypeID<UE::MovieScene::FMovieSceneEntityID>)(pFVar14->ComponentType).Value ==
        pFVar8->ParentEntity) goto LAB_1460d2206;
  }
  pFVar14 = (FComponentHeader *)0x0;
  local_88 = (FComponentHeader *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1460d2206:
  EVar16 = pFVar4->LockMode;
  local_8c = EVar16;
  if (EVar16 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
  UNLOCK();
  local_80 = pFVar14->Components;
  FEntityAllocation::WriteComponents<UObject_*>
            (param_6->Allocation,&local_58,TVar1,(FEntityAllocationWriteContext)0x0);
  if (this->_padding_ == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = this->_padding_ - this->_padding_ >> 2;
  }
  iVar3 = param_6->ComponentStartOffset;
  uVar19 = (ulonglong)iVar3;
  if (iVar3 < param_6->Num + iVar3) {
    local_70 = &param_1->EntityManager;
    lVar17 = uVar19 * 8;
    lVar11 = uVar19 * 2;
    lVar15 = (longlong)(int)uVar13 * 8;
    do {
      uVar18 = (uint)uVar19;
      FVar2.Value = *(ushort *)(local_80 + lVar11);
      uVar7 = 0;
      if ((int)uVar18 < (int)local_90) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = (uint)uVar13;
      local_94[0].Value = *(ushort *)((longlong)&local_78->Value + lVar11);
      uVar7 = 0;
      if ((int)uVar12 < (this->ObjectsToAssign).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      local_68._0_8_ = *(undefined8 *)((this->ObjectsToAssign).AllocatorInstance.Data + lVar15);
      lVar15 = lVar15 + 8;
      *(undefined8 *)(local_58._24_8_ + lVar17) = local_68._0_8_;
      local_68._8_2_ = FVar2.Value;
      pTVar9 = TSet<TTuple<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                       *)this->StaleEntitiesToPreserve,&local_68);
      if (pTVar9 == (TTuple<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID>
                     *)0x0) {
        local_98[0].Value = 0xffff;
      }
      else {
        local_98[0].Value = *(ushort *)&pTVar9->field_0x10;
        if (local_98[0].Value != 0xffff) {
          TSortedMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
          ::
          Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                    (&this->PreservedEntities,local_94,local_98);
        }
      }
      FEntityManager::AddChild(local_70,FVar2,local_94[0]);
      uVar19 = (ulonglong)(uVar18 + 1);
      lVar11 = lVar11 + 2;
      lVar17 = lVar17 + 8;
      pFVar14 = local_88;
      EVar16 = local_8c;
    } while ((int)(uVar18 + 1) < param_6->ComponentStartOffset + param_6->Num);
  }
  if (local_58._0_8_ != 0) {
    if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
      local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
    }
    *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
    LOCK();
    *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_58._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
    }
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar16 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  return;
}

// PostInitialize @ 1460e0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FObjectFactoryBatch::PostInitialize
          (FObjectFactoryBatch *this,UMovieSceneEntitySystemLinker *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  TBitArray<TFixedAllocator<12>_> local_64;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_64.NumBits = 0;
  local_64.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_64,&(((param_1->EntityManager).ComponentRegistry)->PreservationMask).Bits);
  pFVar3 = (this->PreservedEntities).Pairs.AllocatorInstance.Data;
  iVar2 = (this->PreservedEntities).Pairs.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->PreservedEntities).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if (pFVar3 == pFVar1) break;
    FEntityManager::CombineComponents
              (&param_1->EntityManager,(FMovieSceneEntityID)(ushort)*(undefined4 *)pFVar3,
               (FMovieSceneEntityID)(ushort)((uint)*(undefined4 *)pFVar3 >> 0x10),
               (FComponentMask *)&local_64);
    pFVar3 = pFVar3 + 4;
  }
  return;
}

