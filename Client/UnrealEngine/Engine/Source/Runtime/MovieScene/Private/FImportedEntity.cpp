// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// Manufacture @ 1460d9a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::FImportedEntity::Manufacture
          (FImportedEntity *this,FEntityImportParams *param_1,FEntityManager *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  FEntityImportParams *pFVar5;
  bool bVar6;
  ushort uVar7;
  FBuiltInComponentTypes *pFVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TObjectPtr<UMovieSceneCondition_const_>_u_0 TVar11;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar12;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar13;
  EMutuallyInclusiveComponentType EVar14;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar15;
  FEntityManager *in_R9;
  undefined1 uVar16;
  undefined1 auStackY_1d8 [32];
  char local_1a8 [4];
  undefined4 local_1a4;
  int local_1a0;
  FRootInstanceHandle local_19c;
  <lambda_1> local_198;
  FEntityManager *local_190;
  FEntityInfo local_188;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_170;
  bool bStack_16e;
  undefined1 uStack_16d;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_166;
  undefined2 uStack_164;
  undefined **local_158;
  undefined1 local_150 [12];
  int local_144;
  undefined1 local_140;
  TAddConditional<UE::MovieScene::FRootInstanceHandle> local_13c;
  TAddConditional<UE::MovieScene::FInstanceHandle> local_132;
  TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_> local_128;
  char local_110;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FEntityAllocationWriteContext local_f8;
  FEntityImportParams *local_f0;
  TComponentTypeID<FMovieSceneSequenceID> local_e8;
  bool bStack_e6;
  undefined1 uStack_e5;
  FEntityRange local_d8;
  TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_> local_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FMutualComponentInitializers local_98;
  FComponentMask local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_190 = in_R9;
  local_108 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  local_f0 = param_1;
  pFVar8 = FBuiltInComponentTypes::Get();
  local_1a0 = *(int *)&(param_2->EntityAllocationMasks).field_0x24;
  uVar7 = (pFVar8->Tags).NeedsLink.Value;
  uVar2 = (pFVar8->Tags).ImportedEntity.Value;
  local_1a4 = CONCAT13(local_1a4._3_1_,
                       CONCAT12((byte)(param_2->EntityAllocationMasks).field_0x32 >> 2,
                                (pFVar8->Tags).AlwaysCacheInitialValue.Value)) & 0xff01ffff;
  bStack_e6 = local_1a0 != 0;
  local_e8 = pFVar8->SequenceID;
  bStack_16e = *(short *)&(param_2->EntityAllocationMasks).field_0x2c != -1;
  local_170 = pFVar8->RootInstanceHandle;
  local_19c = *(FRootInstanceHandle *)&(param_2->EntityAllocationMasks).field_0x2c;
  uStack_164._0_1_ = *(short *)&(param_2->EntityAllocationMasks).field_0x28 != -1;
  local_166 = pFVar8->InstanceHandle;
  local_198.OutMask._0_4_ =
       (FInstanceHandle)*(undefined4 *)&(param_2->EntityAllocationMasks).field_0x28;
  if (((TPersistentObjectPtr<FSoftObjectPath> *)param_2->_padding_ ==
       (TPersistentObjectPtr<FSoftObjectPath> *)0x0) ||
     (pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)param_2->_padding_),
     pUVar9 == (UObject *)0x0)) {
LAB_1460d9b0b:
    uVar16 = 0;
  }
  else {
    pUVar10 = UMovieSceneCondition::StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar10->_padding_)) goto LAB_1460d9b0b;
    uVar16 = 1;
  }
  if (((TPersistentObjectPtr<FSoftObjectPath> *)param_2->_padding_ !=
       (TPersistentObjectPtr<FSoftObjectPath> *)0x0) &&
     (TVar11.DebugPtr =
           (UMovieSceneCondition *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_2->_padding_),
     TVar11.DebugPtr != (UMovieSceneCondition *)0x0)) {
    pUVar10 = UMovieSceneCondition::StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar10->_padding_)) goto LAB_1460d9b52;
  }
  TVar11.DebugPtr = (UMovieSceneCondition *)0x0;
LAB_1460d9b52:
  uStack_c6 = uVar16;
  local_c8 = pFVar8->Condition;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (TVar11.DebugPtr != (UMovieSceneCondition *)0x0) {
      GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (TVar11.DebugPtr != (UMovieSceneCondition *)0x0)) {
      GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
    }
  }
  local_150._4_4_ = local_1a4;
  local_150._8_4_ = _local_e8;
  local_144 = local_1a0;
  local_13c._0_4_ = _local_170;
  local_13c.Payload.TypedValue = local_19c;
  local_132._0_4_ = _local_166;
  local_132.Payload.TypedValue = local_198.OutMask._0_4_;
  local_128._padding_._0_4_ = _local_c8;
  local_140 = 1;
  local_13c.Payload.bIsSet = true;
  local_132.Payload.bIsSet = true;
  local_128.Payload.bIsSet = true;
  local_150._0_2_ = uVar7;
  local_150._2_2_ = uVar2;
  local_128.Payload.TypedValue.field0_0x0 = TVar11;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (TVar11.DebugPtr != (UMovieSceneCondition *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
  }
  local_158 = &
              ___7__TEntityBuilder_UFAdd_MovieScene_UE__U123_UFAddConditional_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFRootInstanceHandle_MovieScene_UE___23_U__TAddConditional_UFInstanceHandle_MovieScene_UE___23_U__TAddConditional_U__TObjectPtr___CBVUMovieSceneCondition_____23__MovieScene_UE__6B_
  ;
  local_110 = '\0';
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_f8,local_190);
  local_198.OutMask = &local_78;
  local_1a8[0] = '\0';
  local_78.Bits.NumBits = 0;
  local_78.Bits.MaxBits = 0x180;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>_>::
  Do<_UE::MovieScene::TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>::GenerateType_::__l2::<lambda_1>,TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>_&>
            (&local_198,
             (TTuple<UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAddConditional,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>_>
              *)local_150);
  if (local_110 != '\0') {
    local_1a8[0] = '\x01';
  }
  FVar15 = (this->Builders).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Builders).ArrayNum;
  iVar3 = *piVar1;
  if (FVar15 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar15;
  }
  FVar15 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)
           ((longlong)this + (longlong)iVar3 * 0x48);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_1a8[1] = 0;
      `TCheckedPointerIterator<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_1a8 + 1);
    }
    if ((ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this == FVar15) break;
    if (((*(uchar *)((longlong)this + 0x40) & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FMovieSceneEntityID)uVar7;
    }
    FVar12 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if ((*(uchar *)((longlong)this + 0x40) & 2) == 0) {
      FVar12 = *(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)this;
    }
    (**(code **)((longlong)
                 *(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)FVar12 +
                0x10))(FVar12,local_190,&local_78,local_1a8);
    this = (FImportedEntity *)((longlong)this + 0x48);
  }
  local_98.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_98.Initializers.ArrayNum = 0;
  EVar14 = Mandatory;
  if (local_1a8[0] != '\0') {
    EVar14 = All;
  }
  local_98.Initializers.ArrayMax = 2;
  FMutualInclusivityGraph::ComputeMutuallyInclusiveComponents
            (&(local_190->ComponentRegistry->Factories).MutualInclusivityGraph,EVar14,&local_78,
             &local_78,&local_98);
  FEntityManager::AllocateEntity(local_190,&local_188,&local_78);
  FVar15 = local_108;
  if ((FEntityAllocation *)CONCAT44(local_188.Data.Allocation._4_4_,local_188.Data.Allocation._0_4_)
      != (FEntityAllocation *)0x0) {
    local_108._4_4_ = local_188.Data.Allocation._4_4_;
    local_108._0_4_ = local_188.Data.Allocation._0_4_;
    iStack_100 = local_188.Data.ComponentOffset;
    uStack_fc = local_188.Data._12_4_;
    local_b0 = local_188.Data.Allocation._0_4_;
    uStack_ac = local_188.Data.Allocation._4_4_;
    iStack_a8 = local_188.Data.ComponentOffset;
    uStack_a4 = local_188.Data._12_4_;
    TAddConditional<FMovieSceneSequenceID>::Apply
              ((TAddConditional<FMovieSceneSequenceID> *)(local_150 + 8),
               (FEntityAllocation *)
               CONCAT44(local_188.Data.Allocation._4_4_,local_188.Data.Allocation._0_4_),
               local_188.Data.ComponentOffset);
    iVar3 = iStack_100;
    FVar12 = local_108;
    TAddConditional<UE::MovieScene::FRootInstanceHandle>::Apply
              (&local_13c,(FEntityAllocation *)local_108,iStack_100);
    TAddConditional<UE::MovieScene::FInstanceHandle>::Apply
              (&local_132,(FEntityAllocation *)FVar12,iVar3);
    TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>::Apply
              (&local_128,(FEntityAllocation *)FVar12,iVar3);
  }
  iVar3 = *piVar1;
  if (*(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
       ((longlong)FVar15 + 0x48) !=
      (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar15 = *(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
              ((longlong)FVar15 + 0x48);
  }
  FVar12 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)
           ((longlong)FVar15 + (longlong)iVar3 * 0x48);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_1a8[2] = 0;
      `TCheckedPointerIterator<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_1a8 + 2);
    }
    if (FVar15 == FVar12) break;
    if (((*(byte *)((longlong)FVar15 + 0x40) & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FMovieSceneEntityID)uVar7;
    }
    FVar13 = FVar15;
    if ((*(byte *)((longlong)FVar15 + 0x40) & 2) == 0) {
      FVar13 = *(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)FVar15;
    }
    (**(code **)(*(longlong *)FVar13 + 0x18))(FVar13,local_190,&local_188);
    FVar15 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)
             ((longlong)FVar15 + 0x48);
  }
  local_d8.ComponentStartOffset = local_188.Data.ComponentOffset;
  local_d8.Num = 1;
  FMutualComponentInitializers::Execute(&local_98,&local_d8,&local_f8);
  pFVar5 = local_f0;
  *(ushort *)&local_f0->EntityMetaData = local_188.EntityID.Value;
  if (local_98.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_98.Initializers.AllocatorInstance.SecondaryData);
  }
  return (FMovieSceneEntityID)(ushort)pFVar5;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_>_> @ 1461ea920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001461eab46) */
/* WARNING: Removing unreachable block (ram,0x0001461eab4c) */
/* WARNING: Removing unreachable block (ram,0x0001461eab51) */
/* WARNING: Removing unreachable block (ram,0x0001461eab63) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_>_>
          (FImportedEntity *this,TEntityBuilder<UE::MovieScene::TAdd<FFrameTime>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined *****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined *****local_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_44 = CONCAT31((int3)((uint)uStack_44 >> 8),param_1->field_0x14);
  if (param_1->field_0x14 != '\0') {
    uStack_4c = (undefined4)*(undefined8 *)&param_1->field_0xc;
    uStack_48 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0xc >> 0x20);
  }
  uStack_40 = param_1->field_0x18;
  local_58 = (undefined *****)
             &___7__TEntityBuilder_U__TAdd_UFFrameTime___MovieScene_UE___MovieScene_UE__6B_;
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if ((ppppppuVar10 != ppppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_58 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = (undefined *****)&local_58;
      local_78 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_18 & 0xfe) & 2;
    *plVar2 = (longlong)local_58;
    plVar2[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    plVar2[2] = CONCAT44(uStack_44,uStack_48);
    plVar2[3] = CONCAT71(uStack_3f,uStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_> @ 1461eaba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001461ead0d) */
/* WARNING: Removing unreachable block (ram,0x0001461ead14) */
/* WARNING: Removing unreachable block (ram,0x0001461ead1a) */
/* WARNING: Removing unreachable block (ram,0x0001461ead34) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
          *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8> local_58;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58.bIsValid = false;
  TInlineValue<UE::MovieScene::IEntityBuilder,64,8>::
  InitializeFrom<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>,UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_>
            (&local_58,param_1);
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= &local_58) {
    lVar9 = (longlong)(this->Builders).ArrayMax;
    FVar7 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar7 = FVar3;
    }
    if (&local_58 <
        (TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)((longlong)FVar7 + lVar9 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = &local_58;
      local_78 = lVar9;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (uchar *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar8 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  puVar2[0x40] = bVar8 | 2;
  if (local_58.bIsValid) {
    puVar2[0x40] = bVar8 | 3;
    puVar2[0x40] = puVar2[0x40] ^ (puVar2[0x40] ^ local_58._64_1_ & 0xfe) & 2;
    *(undefined8 *)puVar2 = local_58.Data.Pad._0_8_;
    *(undefined8 *)(puVar2 + 8) = local_58.Data.Pad._8_8_;
    *(undefined8 *)(puVar2 + 0x10) = local_58.Data.Pad._16_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_58.Data.Pad._24_8_;
    *(undefined4 *)(puVar2 + 0x20) = local_58.Data.Pad._32_4_;
    *(undefined4 *)(puVar2 + 0x24) = local_58.Data.Pad._36_4_;
    *(undefined4 *)(puVar2 + 0x28) = local_58.Data.Pad._40_4_;
    *(undefined4 *)(puVar2 + 0x2c) = local_58.Data.Pad._44_4_;
    *(undefined4 *)(puVar2 + 0x30) = local_58.Data.Pad._48_4_;
    *(undefined4 *)(puVar2 + 0x34) = local_58.Data.Pad._52_4_;
    *(undefined4 *)(puVar2 + 0x38) = local_58.Data.Pad._56_4_;
    *(undefined4 *)(puVar2 + 0x3c) = local_58.Data.Pad._60_4_;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>_> @ 1461ead60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001461eafb1) */
/* WARNING: Removing unreachable block (ram,0x0001461eafb7) */
/* WARNING: Removing unreachable block (ram,0x0001461eafbc) */
/* WARNING: Removing unreachable block (ram,0x0001461eafce) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined *****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined *****local_58;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  UObject *local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A___U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  local_28 = CONCAT31((int3)((uint)local_28 >> 8),param_1->field_0x30);
  if (param_1->field_0x30 != '\0') {
    local_48 = *(UObject **)&param_1->field_0x10;
    if ((GC::GIsIncrementalReachabilityPending) && (local_48 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_48);
    }
    lStack_40 = *(longlong *)&param_1->field_0x18;
    local_38 = *(undefined8 *)&param_1->field_0x20;
    uStack_30 = *(undefined8 *)&param_1->field_0x28;
  }
  uStack_20 = CONCAT31(uStack_20._1_3_,param_1->field_0x38);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneEvaluationHookComponent___MovieScene_UE___MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if ((ppppppuVar10 != ppppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_58 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = (undefined *****)&local_58;
      local_78 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_18 & 0xfe) & 2;
    *plVar2 = (longlong)local_58;
    plVar2[1] = CONCAT62(uStack_4e,uStack_50);
    plVar2[2] = (longlong)local_48;
    plVar2[3] = lStack_40;
    *(undefined4 *)(plVar2 + 4) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 5) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_30._4_4_;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_> @ 1461eb010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001461eb244) */
/* WARNING: Removing unreachable block (ram,0x0001461eb24a) */
/* WARNING: Removing unreachable block (ram,0x0001461eb24f) */
/* WARNING: Removing unreachable block (ram,0x0001461eb261) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined8 *****pppppuVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined8 ****local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = local_28 & 0xfc;
  local_68 = FMemory::Malloc(0xb0,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N___U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_34_U__TAddConditional_UFEasingComponentData___34_U__TAddConditional_F_34_U__TAddConditional_UFInterrogationKey_MovieScene_UE___34_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___34_U__TAddConditional_UFFrameTime___34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34_UFAddConditional_34__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FEasingComponentData>,UE::MovieScene::TAddConditional<short>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TAddConditional<FFrameTime>,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional,UE::MovieScene::FAddConditional>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x15) = param_1->field_0xa8;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAddConditional_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__U__TAddConditional_H_23_U__TAddConditional_UFEasingComponentData___23_U__TAddConditional_F_23_U__TAddConditional_UFInterrogationKey_MovieScene_UE___23_U__TAddConditional_UFInterrogationInstance_MovieScene_UE___23_U__TAddConditional_UFFrameTime___23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23_UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar7 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar7 = (undefined8 *****)local_68;
  }
  if ((pppppuVar10 != pppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_68) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_68 < (undefined8 *****)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = &local_68;
      local_88 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(puVar2 + 8) = bVar9 | 2;
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar9 | 3;
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) ^ (local_28 & 0xfe ^ *(byte *)(puVar2 + 8)) & 2;
    *puVar2 = local_68;
    puVar2[1] = uStack_60;
    puVar2[2] = local_58;
    puVar2[3] = uStack_50;
    *(undefined4 *)(puVar2 + 4) = local_48;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_44;
    *(undefined4 *)(puVar2 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_3c;
    *(undefined4 *)(puVar2 + 6) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_34;
    *(undefined4 *)(puVar2 + 7) = uStack_30;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_2c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_> @ 146273240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146273482) */
/* WARNING: Removing unreachable block (ram,0x000146273488) */
/* WARNING: Removing unreachable block (ram,0x00014627348d) */
/* WARNING: Removing unreachable block (ram,0x00014627349f) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
          *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined *****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined *****local_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_3c = CONCAT31((int3)((uint)uStack_3c >> 8),param_1->field_0x1c);
  if (param_1->field_0x1c != '\0') {
    uStack_4c = (undefined4)*(undefined8 *)&param_1->field_0xc;
    uStack_48 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0xc >> 0x20);
    uStack_44 = (undefined4)*(undefined8 *)&param_1->field_0x14;
    uStack_40 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0x14 >> 0x20);
  }
  local_38 = *(undefined4 *)&param_1->field_0x20;
  uStack_34._0_2_ = CONCAT11(param_1->field_0x25,(undefined1)uStack_34);
  if (param_1->field_0x25 != '\0') {
    uStack_34 = CONCAT31(uStack_34._1_3_,param_1->field_0x24);
  }
  uStack_30 = CONCAT31(uStack_30._1_3_,param_1->field_0x28);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if ((ppppppuVar10 != ppppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_58 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = (undefined *****)&local_58;
      local_78 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_18 & 0xfe) & 2;
    *plVar2 = (longlong)local_58;
    plVar2[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    plVar2[2] = CONCAT44(uStack_44,uStack_48);
    plVar2[3] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>_> @ 1462734d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001462736fc) */
/* WARNING: Removing unreachable block (ram,0x000146273702) */
/* WARNING: Removing unreachable block (ram,0x000146273707) */
/* WARNING: Removing unreachable block (ram,0x000146273719) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined *****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined *****local_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_3c = CONCAT31((int3)((uint)uStack_3c >> 8),param_1->field_0x1c);
  if (param_1->field_0x1c != '\0') {
    uStack_4c = (undefined4)*(undefined8 *)&param_1->field_0xc;
    uStack_48 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0xc >> 0x20);
    uStack_44 = (undefined4)*(undefined8 *)&param_1->field_0x14;
    uStack_40 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field_0x14 >> 0x20);
  }
  local_38 = *(undefined4 *)&param_1->field_0x20;
  uStack_34 = CONCAT31(uStack_34._1_3_,param_1->field_0x24);
  local_58 = (undefined *****)
             &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if ((ppppppuVar10 != ppppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_58 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = (undefined *****)&local_58;
      local_78 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_18 & 0xfe) & 2;
    *plVar2 = (longlong)local_58;
    plVar2[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    plVar2[2] = CONCAT44(uStack_44,uStack_48);
    plVar2[3] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_> @ 146273750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146273984) */
/* WARNING: Removing unreachable block (ram,0x00014627398a) */
/* WARNING: Removing unreachable block (ram,0x00014627398f) */
/* WARNING: Removing unreachable block (ram,0x0001462739a1) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined8 *****pppppuVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined8 ****local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = local_28 & 0xfc;
  local_68 = FMemory::Malloc(0xc0,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x17) = param_1->field_0xb8;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar7 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar7 = (undefined8 *****)local_68;
  }
  if ((pppppuVar10 != pppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_68) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_68 < (undefined8 *****)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = &local_68;
      local_88 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(puVar2 + 8) = bVar9 | 2;
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar9 | 3;
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) ^ (local_28 & 0xfe ^ *(byte *)(puVar2 + 8)) & 2;
    *puVar2 = local_68;
    puVar2[1] = uStack_60;
    puVar2[2] = local_58;
    puVar2[3] = uStack_50;
    *(undefined4 *)(puVar2 + 4) = local_48;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_44;
    *(undefined4 *)(puVar2 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_3c;
    *(undefined4 *)(puVar2 + 6) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_34;
    *(undefined4 *)(puVar2 + 7) = uStack_30;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_2c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_> @ 1462739d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146273bdf) */
/* WARNING: Removing unreachable block (ram,0x000146273be5) */
/* WARNING: Removing unreachable block (ram,0x000146273bea) */
/* WARNING: Removing unreachable block (ram,0x000146273bfc) */

void __thiscall
UE::MovieScene::FImportedEntity::AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>
          (FImportedEntity *this,TEntityBuilder<UE::MovieScene::FAdd> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ******ppppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined ******ppppppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined *****local_88;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined *****local_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_18 = local_18 | 3;
  uStack_50 = *(undefined2 *)&param_1->field_0x8;
  uStack_4e = param_1->field_0xa;
  local_58 = (undefined *****)&___7__TEntityBuilder_UFAdd_MovieScene_UE___MovieScene_UE__6B_;
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar10 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar10 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppppppuVar7 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar7 = (undefined ******)local_58;
  }
  if ((ppppppuVar10 != ppppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_58) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_58 < (undefined ******)((longlong)FVar8 + lVar11 * 0x48)) {
      local_70 = (longlong)(this->Builders).ArrayNum;
      local_68 = 0x48;
      local_80 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_80 = FVar3;
      }
      local_88 = (undefined *****)&local_58;
      local_78 = lVar11;
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
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  plVar2 = (longlong *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(plVar2 + 8) = bVar9 | 2;
  if ((local_18 & 1) != 0) {
    *(byte *)(plVar2 + 8) = bVar9 | 3;
    *(byte *)(plVar2 + 8) = *(byte *)(plVar2 + 8) ^ (*(byte *)(plVar2 + 8) ^ local_18 & 0xfe) & 2;
    *plVar2 = (longlong)local_58;
    plVar2[1] = CONCAT53(uStack_4d,CONCAT12(uStack_4e,uStack_50));
    plVar2[2] = local_48;
    plVar2[3] = lStack_40;
    *(undefined4 *)(plVar2 + 4) = local_38;
    *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_34;
    *(undefined4 *)(plVar2 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar2 + 6) = local_28;
    *(undefined4 *)((longlong)plVar2 + 0x34) = uStack_24;
    *(undefined4 *)(plVar2 + 7) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_1c;
  }
  return;
}

