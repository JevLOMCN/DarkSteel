// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FSequenceWeights @ 146182560

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceWeights * __thiscall
UE::MovieScene::FSequenceWeights::FSequenceWeights
          (FSequenceWeights *this,UMovieSceneEntitySystemLinker *param_1,FRootInstanceHandle param_2
          )

{
  UMovieSceneEntitySystemLinker *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneEntitySystemLinker *)0x0))
  {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakLinker).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->WeightEntitiesBySequenceID).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightEntitiesBySequenceID).Pairs.ArrayNum = 0;
  (this->WeightEntitiesBySequenceID).Pairs.ArrayMax = 0;
  this->RootInstanceHandle = param_2;
  return this;
}

// ~FSequenceWeights @ 146185a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSequenceWeights::~FSequenceWeights(FSequenceWeights *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  FBuiltInComponentTypes *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 != (UObject *)0x0) {
    pFVar4 = FBuiltInComponentTypes::Get();
    pFVar5 = (this->WeightEntitiesBySequenceID).Pairs.AllocatorInstance.Data;
    iVar1 = (this->WeightEntitiesBySequenceID).Pairs.ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->WeightEntitiesBySequenceID).Pairs.ArrayNum != iVar1) {
        `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar2) break;
      FEntityManager::AddComponent
                ((FEntityManager *)(pUVar3 + 1),
                 (FMovieSceneEntityID)(ushort)((ulonglong)*(undefined8 *)pFVar5 >> 0x20),
                 (FComponentTypeID)(pFVar4->Tags).NeedsUnlink.Value);
      pFVar5 = pFVar5 + 8;
    }
  }
  pFVar2 = (this->WeightEntitiesBySequenceID).Pairs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// RemoveWeight @ 1461cbef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceWeights::RemoveWeight(FSequenceWeights *this,FMovieSceneSequenceID param_1)

{
  TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
  *this_00;
  int *piVar1;
  FMovieSceneEntityID FVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  FMovieSceneEntityID *pFVar8;
  UObject *pUVar9;
  FBuiltInComponentTypes *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FMovieSceneSequenceID local_res10 [2];
  
  this_00 = &this->WeightEntitiesBySequenceID;
  local_res10[0].Value = param_1.Value;
  pFVar8 = TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
           ::Find(this_00,local_res10);
  if (pFVar8 == (FMovieSceneEntityID *)0x0) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    return;
  }
  FVar2.Value = pFVar8->Value;
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (FVar2.Value != 0xffff) {
    if (pUVar9 == (UObject *)0x0) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6172252184881660006>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceWeights.cpp"
                         ,0x66,"Linker");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar10 = FBuiltInComponentTypes::Get();
      FEntityManager::AddComponent
                ((FEntityManager *)(pUVar9 + 1),FVar2,
                 (FComponentTypeID)(pFVar10->Tags).NeedsUnlink.Value);
      uVar3 = (this->WeightEntitiesBySequenceID).Pairs.ArrayNum;
      uVar12 = 0;
      pFVar4 = (this_00->Pairs).AllocatorInstance.Data;
      uVar13 = uVar3;
      if (0 < (int)uVar3) {
        do {
          iVar11 = (uVar13 >> 1) + uVar12;
          if (*(uint *)(pFVar4 + (longlong)iVar11 * 8) < param_1.Value) {
            uVar12 = iVar11 + (uVar13 & 1);
          }
          uVar6 = uVar13 >> 1;
          uVar13 = uVar13 >> 1;
        } while (uVar6 != 0);
      }
      if ((((int)uVar12 < (int)uVar3) &&
          (*(uint *)(pFVar4 + (longlong)(int)uVar12 * 8) <= param_1.Value)) &&
         (uVar12 != 0xffffffff)) {
        if ((int)uVar12 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar4 = (this_00->Pairs).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
        iVar11 = (this->WeightEntitiesBySequenceID).Pairs.ArrayNum + ~uVar12;
        if (iVar11 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar11 << 3);
        }
        piVar1 = &(this->WeightEntitiesBySequenceID).Pairs.ArrayNum;
        *piVar1 = *piVar1 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)this_00,
                   (this->WeightEntitiesBySequenceID).Pairs.ArrayNum,
                   &(this->WeightEntitiesBySequenceID).Pairs.ArrayMax);
        return;
      }
    }
  }
  return;
}

// SetWeight @ 1461d2fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceWeights::SetWeight
          (FSequenceWeights *this,FMovieSceneSequenceID param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneEntityID FVar3;
  UObject *pUVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneEntityID *pFVar6;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
  *this_00;
  undefined6 extraout_var;
  FMovieSceneEntityID local_res8 [4];
  FMovieSceneSequenceID local_res10 [6];
  undefined1 local_148 [10];
  FRootInstanceHandle local_13e;
  undefined1 local_13a;
  TComponentTypeID<FMovieSceneSequenceID> local_138;
  uint local_134;
  undefined1 local_130;
  TComponentTypeID<double> local_128;
  double local_120;
  undefined1 local_118;
  TComponentTypeID<double> local_110;
  double local_108;
  undefined1 local_100;
  bool local_f8;
  undefined1 local_f0 [80];
  undefined4 local_a0;
  undefined4 local_9c;
  TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
  local_98;
  
  local_res10[0].Value = param_1.Value;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar4 == (UObject *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6172252184881659936>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceWeights.cpp"
                       ,0x20,"Linker");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar5 = FBuiltInComponentTypes::Get();
    pFVar6 = TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
             ::Find(&this->WeightEntitiesBySequenceID,local_res10);
    if (pFVar6 == (FMovieSceneEntityID *)0x0) {
      FVar3.Value = 0xffff;
    }
    else {
      FVar3.Value = pFVar6->Value;
    }
    if (FVar3.Value == 0xffff) {
      local_148._8_2_ = pFVar5->RootInstanceHandle;
      local_13e = this->RootInstanceHandle;
      local_138 = pFVar5->HierarchicalEasingProvider;
      local_134 = local_res10[0].Value;
      local_128 = pFVar5->WeightResult;
      local_110 = pFVar5->WeightAndEasingResult;
      local_148._0_8_ =
           &
           ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___23_U__TAdd_N_23_U523__MovieScene_UE__6B_
      ;
      local_13a = 1;
      local_130 = 1;
      local_118 = 1;
      local_100 = 1;
      local_f8 = false;
      local_120 = param_2;
      local_108 = param_2;
      this_00 = TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
                ::AddTag((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>_>
                          *)local_148,&local_98,(FComponentTypeID)(pFVar5->Tags).NeedsLink.Value);
      local_a0 = 0;
      local_9c = 0x180;
      FVar3 = FEntityBuilderImplBase::CreateEntity
                        ((FEntityBuilderImplBase *)this_00,(FEntityManager *)(local_res10 + 4),
                         (FComponentMask *)(pUVar4 + 1));
      local_res8[0].Value = *(ushort *)CONCAT62(extraout_var,FVar3.Value);
      TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
      ::Emplace<FMovieSceneSequenceID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                (&this->WeightEntitiesBySequenceID,local_res10,local_res8);
    }
    else {
      FEntityManager::WriteComponent<double>
                ((FEntityManager *)(pUVar4 + 1),
                 (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)local_f0,FVar3,
                 pFVar5->WeightResult);
      if ((double *)local_f0._24_8_ != (double *)0x0) {
        *(double *)local_f0._24_8_ = param_2;
      }
      if (local_f0._0_8_ != 0) {
        if ((ulonglong)local_f0._8_8_ < *(ulonglong *)(local_f0._0_8_ + 0x28)) {
          local_f0._8_8_ = *(ulonglong *)(local_f0._0_8_ + 0x28);
        }
        *(undefined8 *)(local_f0._0_8_ + 0x28) = local_f0._8_8_;
        LOCK();
        *(int *)(local_f0._0_8_ + 0x30) = *(int *)(local_f0._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_f0._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_f0._0_8_ + 0x20));
        }
      }
    }
  }
  return;
}

// SetWeights @ 1461d31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceWeights::SetWeights
          (FSequenceWeights *this,
          TSortedMap<FMovieSceneSequenceID,double,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  TComponentTypeID<double> TVar4;
  code *pcVar5;
  FMovieSceneEntityID FVar6;
  FBuiltInComponentTypes *pFVar7;
  bool bVar8;
  EEntityThreadingModel EVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  FMovieSceneEntityID *pFVar12;
  FEntityAllocationWriteContext *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  FMovieSceneEntityID local_194 [2];
  UObject *local_190;
  FScriptContainerElement *local_188;
  FSequenceWeights *local_180;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined2 local_16c;
  undefined8 local_168 [2];
  FEntityInfo local_158;
  <lambda_1> local_140;
  FEntityAllocationWriteContext local_138;
  FBuiltInComponentTypes *local_130;
  TSortedMap<FMovieSceneSequenceID,double,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
  *local_128;
  FEntityRange local_120;
  undefined **local_110;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_108;
  FRootInstanceHandle local_106;
  undefined1 local_102;
  TComponentTypeID<FMovieSceneSequenceID> local_100;
  uint local_fc;
  undefined1 local_f8;
  TComponentTypeID<double> local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  TComponentTypeID<double> local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  ushort local_c0;
  char local_b8;
  FEntityAllocationWriteContext local_b0;
  <lambda_1> local_a8;
  FComponentMask local_90;
  FMutualComponentInitializers local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_180 = this;
  local_128 = param_1;
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  local_190 = pUVar10;
  if (pUVar10 == (UObject *)0x0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6172252184881659969>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceWeights.cpp"
                       ,0x41,"Linker");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    local_130 = FBuiltInComponentTypes::Get();
    pFVar17 = (param_1->Pairs).AllocatorInstance.Data;
    local_174 = (param_1->Pairs).ArrayNum;
    uVar11 = (ulonglong)(int)local_174;
    local_188 = pFVar17 + uVar11 * 0x10;
    pFVar15 = local_188;
    while( true ) {
      pFVar7 = local_130;
      if ((param_1->Pairs).ArrayNum != (int)uVar11) {
        local_198[0] = 0;
        `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,double>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_198);
      }
      if (pFVar17 == pFVar15) break;
      local_168[0] = *(undefined8 *)pFVar17;
      local_168[1] = *(undefined8 *)(pFVar17 + 8);
      pFVar12 = TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
                ::Find(&this->WeightEntitiesBySequenceID,(FMovieSceneSequenceID *)local_168);
      if (pFVar12 == (FMovieSceneEntityID *)0x0) {
        local_194[0].Value = 0xffff;
      }
      else {
        local_194[0].Value = pFVar12->Value;
      }
      if (local_194[0].Value == 0xffff) {
        local_108 = pFVar7->RootInstanceHandle;
        local_106 = this->RootInstanceHandle;
        local_100 = pFVar7->HierarchicalEasingProvider;
        local_fc = local_168[0]._0_4_;
        local_f0 = pFVar7->WeightResult;
        local_d8 = pFVar7->WeightAndEasingResult;
        local_c0 = (pFVar7->Tags).NeedsLink.Value;
        local_110 = &
                    ___7__TEntityBuilder_U__TAdd_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneSequenceID___23_U__TAdd_N_23_U523_UFAdd_23__MovieScene_UE__6B_
        ;
        local_140.OutMask = &local_90;
        local_e8 = local_168[1];
        local_d0 = local_168[1];
        local_102 = 1;
        local_f8 = 1;
        local_e0 = 1;
        local_c8 = 1;
        local_b8 = '\0';
        local_90.Bits.NumBits = 0;
        local_90.Bits.MaxBits = 0x180;
        Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
        Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>_&>
                  (&local_140,
                   (TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
                    *)&local_108);
        bVar8 = local_b8 != '\0';
        local_58.Initializers.ArrayMax = 2;
        local_58.Initializers.AllocatorInstance.SecondaryData =
             (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
        local_58.Initializers.ArrayNum = 0;
        FEntityAllocationWriteContext::FEntityAllocationWriteContext
                  (&local_138,(FEntityManager *)(pUVar10 + 1));
        FEntityFactories::ComputeMutuallyInclusiveComponents
                  (*(FEntityFactories **)&pUVar10[0x10].field_0x8,bVar8 * '\x02' + Mandatory,
                   &local_90,&local_58);
        FEntityManager::AllocateEntity((FEntityManager *)(pUVar10 + 1),&local_158,&local_90);
        if ((code *)local_110[3] ==
            TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
            ::Initialize) {
          if (local_158.Data.Allocation != (FEntityAllocation *)0x0) {
            local_a8.Entity.Data.Allocation = local_158.Data.Allocation;
            Core::Private::Tuple::
            TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4>_>::
            Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>::Initialize_::__l5::<lambda_1>,TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>_&>
                      (&local_a8,
                       (TTuple<UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::FAdd>
                        *)&local_108);
          }
        }
        else {
          (*(code *)local_110[3])(&local_110,pUVar10 + 1,&local_158);
        }
        local_120.Allocation = local_158.Data.Allocation;
        local_120.ComponentStartOffset = local_158.Data.ComponentOffset;
        local_120.Num = 1;
        FMutualComponentInitializers::Execute(&local_58,&local_120,&local_138);
        FVar6.Value = local_158.EntityID.Value;
        if (local_58.Initializers.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
          FMemory::Free((void *)local_58.Initializers.AllocatorInstance.SecondaryData);
        }
        local_194[0].Value = FVar6.Value;
        TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
        ::Emplace<FMovieSceneSequenceID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                  (&this->WeightEntitiesBySequenceID,(FMovieSceneSequenceID *)local_168,local_194);
        uVar11 = (ulonglong)local_174;
        pFVar17 = pFVar17 + 0x10;
        pFVar15 = local_188;
        param_1 = local_128;
      }
      else {
        TVar4 = pFVar7->WeightResult;
        if (TVar4 != (TComponentTypeID<double>)0xffff) {
          local_170 = *(uint *)(*(longlong *)&pUVar10[4].field_0x20 +
                               (ulonglong)local_194[0].Value * 8);
          local_16c = *(undefined2 *)
                       (*(longlong *)&pUVar10[4].field_0x20 + 4 + (ulonglong)local_194[0].Value * 8)
          ;
          if ((short)local_170 != -1) {
            lVar14 = (ulonglong)(local_170 & 0xffff) * 0x38 + *(longlong *)&pUVar10[1].field_0x8;
            pFVar15 = local_188;
            if (((int)(uint)(ushort)TVar4 < *(int *)(lVar14 + 0x30)) &&
               ((*(uint *)(lVar14 + (ulonglong)((ushort)TVar4 >> 5) * 4) >> ((ushort)TVar4 & 0x1f) &
                1) != 0)) {
              lVar14 = *(longlong *)
                        (*(longlong *)&pUVar10[3].field_0x10 + (ulonglong)(local_170 & 0xffff) * 8);
              local_178 = local_170 >> 0x10;
              EVar9 = FEntityManager::GetThreadingModel((FEntityManager *)(pUVar10 + 1));
              lVar16 = *(longlong *)(lVar14 + 0x28);
              lVar14 = (ulonglong)*(ushort *)(lVar14 + 0xc) * 0x38 + lVar16;
              for (; pFVar15 = local_188, this = local_180, lVar16 != lVar14; lVar16 = lVar16 + 0x38
                  ) {
                if (*(TComponentTypeID<double> *)(lVar16 + 0x36) == TVar4) {
                  pFVar13 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                                      (&local_b0,(FEntityManager *)(pUVar10 + 1));
                  uVar11 = pFVar13->SystemSerial;
                  if (EVar9 != NoThreading) {
                    AcquireSRWLockExclusive((PSRWLOCK)(lVar16 + 0x20));
                  }
                  LOCK();
                  piVar1 = (int *)(lVar16 + 0x30);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                  if ((iVar3 != 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("PreviousAccessCount == 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                         ,0x487,
                                         L"Component header is still in use when it is being opened for write!"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  puVar2 = (undefined8 *)
                           (*(longlong *)(lVar16 + 0x18) + (longlong)(int)local_178 * 8);
                  if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = local_168[1];
                  }
                  pFVar15 = local_188;
                  this = local_180;
                  if (lVar16 != 0) {
                    if (uVar11 < *(ulonglong *)(lVar16 + 0x28)) {
                      uVar11 = *(ulonglong *)(lVar16 + 0x28);
                    }
                    *(ulonglong *)(lVar16 + 0x28) = uVar11;
                    LOCK();
                    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + -1;
                    UNLOCK();
                    if (EVar9 != NoThreading) {
                      ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x20));
                      pFVar15 = local_188;
                      this = local_180;
                    }
                  }
                  break;
                }
              }
            }
          }
        }
        pFVar17 = pFVar17 + 0x10;
        uVar11 = (ulonglong)local_174;
        param_1 = local_128;
        pUVar10 = local_190;
      }
    }
  }
  return;
}

