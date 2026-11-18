// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// StaticClass @ 146165830

UClass * __cdecl UMovieSceneTrackInstanceInstantiator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstanceInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackInstanceInstantiator,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstanceInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton;
}

// UMovieSceneTrackInstanceInstantiator @ 146183520

UMovieSceneTrackInstanceInstantiator * __thiscall
UMovieSceneTrackInstanceInstantiator::UMovieSceneTrackInstanceInstantiator
          (UMovieSceneTrackInstanceInstantiator *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceInstantiator__6B_;
  *(undefined8 *)&this->TrackInstances = 0;
  *(undefined8 *)&(this->TrackInstances).field_0x8 = 0;
  *(undefined8 *)&(this->TrackInstances).field_0x20 = 0;
  *(undefined4 *)&(this->TrackInstances).field_0x28 = 0;
  *(undefined4 *)&(this->TrackInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackInstances).field_0x34 = 0;
  *(undefined4 *)&(this->TrackInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->BoundObjectToInstances = 0;
  *(undefined8 *)&(this->BoundObjectToInstances).field_0x8 = 0;
  *(undefined8 *)&(this->BoundObjectToInstances).field_0x20 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x28 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x34 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoundObjectToInstances).field_0x40 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x48 = 0;
  (this->InvalidatedOutputs).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->InvalidatedOutputs).NumBits = 0;
  (this->InvalidatedOutputs).MaxBits = 0x80;
  return this;
}

// UMovieSceneTrackInstanceInstantiator @ 1461835d0

UMovieSceneTrackInstanceInstantiator * __thiscall
UMovieSceneTrackInstanceInstantiator::UMovieSceneTrackInstanceInstantiator
          (UMovieSceneTrackInstanceInstantiator *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceInstantiator__6B_;
  *(undefined8 *)&this->TrackInstances = 0;
  *(undefined8 *)&(this->TrackInstances).field_0x8 = 0;
  *(undefined8 *)&(this->TrackInstances).field_0x20 = 0;
  *(undefined4 *)&(this->TrackInstances).field_0x28 = 0;
  *(undefined4 *)&(this->TrackInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackInstances).field_0x34 = 0;
  *(undefined8 *)&this->BoundObjectToInstances = 0;
  *(undefined8 *)&(this->BoundObjectToInstances).field_0x8 = 0;
  *(undefined8 *)&(this->BoundObjectToInstances).field_0x20 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x28 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x34 = 0;
  *(undefined8 *)&(this->BoundObjectToInstances).field_0x40 = 0;
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x48 = 0;
  (this->InvalidatedOutputs).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->InvalidatedOutputs).NumBits = 0;
  (this->InvalidatedOutputs).MaxBits = 0x80;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneTrackInstanceInstantiator @ 146185e80

void __thiscall
UMovieSceneTrackInstanceInstantiator::~UMovieSceneTrackInstanceInstantiator
          (UMovieSceneTrackInstanceInstantiator *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceInstantiator__6B_;
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->BoundObjectToInstances).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoundObjectToInstances).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoundObjectToInstances);
  TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>(&this->TrackInstances);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// operator() @ 146188c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneTrackInstanceInstantiator::OnRun'::__l6::<lambda_2>::operator()
          (void *this,FEntityAllocationProxy *param_1,FInstanceHandle *param_2,
          FTrackInstanceInputComponent *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  FComponentMask *pFVar8;
  TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  uint uVar11;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement FVar15;
  uint local_res8 [2];
  TObjectPtr<UMovieSceneSection>_u_0 local_38;
  FInstanceHandle local_30;
  FScriptContainerElement local_2c;
  
  pFVar7 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
  uVar1 = pFVar7->Size;
  pFVar8 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
  uVar2 = *(ushort *)(*(longlong *)((longlong)this + 0x10) + 0x132);
  if (((uVar2 == 0xffff) || ((pFVar8->Bits).NumBits <= (int)(uint)uVar2)) ||
     ((*(uint *)(pFVar8->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
      == 0)) {
    FVar15 = (FScriptContainerElement)0x1;
  }
  else {
    FVar15 = (FScriptContainerElement)0x0;
  }
  if ((ulonglong)uVar1 != 0) {
    lVar13 = 0;
    do {
      local_38 = (TObjectPtr<UMovieSceneSection>_u_0)(param_3->Section).field0_0x0.DebugPtr;
      local_res8[0] = param_3->OutputIndex;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38.DebugPtr != (UMovieSceneSection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
      }
      uVar11 = local_res8[0];
      local_30 = param_2[lVar13];
      local_2c = FVar15;
      if ((-1 < (int)local_res8[0]) &&
         (lVar3 = *(longlong *)this, (int)local_res8[0] < *(int *)(lVar3 + 0xe8))) {
        if ((*(int *)(lVar3 + 0xe8) <= (int)local_res8[0]) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar14 = lVar3 + 0xd0;
        if (*(longlong *)(lVar3 + 0xe0) != 0) {
          lVar14 = *(longlong *)(lVar3 + 0xe0);
        }
        uVar10 = uVar11 & 0x1f;
        if ((int)uVar11 < 0) {
          uVar11 = uVar11 + 0x1f;
        }
        if ((*(uint *)(lVar14 + (longlong)((int)uVar11 >> 5) * 4) >> uVar10 & 1) != 0) {
          pTVar9 = TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                   ::FindOrAddImpl<int_const_&>
                             (*(TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                                **)((longlong)this + 8),(int *)local_res8);
          pTVar12 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar9->AllocatorInstance).Data;
          if (((pTVar12 <= &local_38) && (&local_38 < pTVar12 + (longlong)pTVar9->ArrayMax * 2)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = pTVar9->ArrayNum;
          if (iVar6 == pTVar9->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
          }
          pTVar9->ArrayNum = iVar6 + 1;
          pTVar12 = (TObjectPtr<UMovieSceneSection>_u_0 *)
                    ((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
          pTVar12->DebugPtr = (UMovieSceneSection *)local_38;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38.DebugPtr != (UMovieSceneSection *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
          }
          *(FInstanceHandle *)(pTVar12 + 1) = local_30;
          *(FScriptContainerElement *)((longlong)pTVar12 + 0xc) = local_2c;
        }
      }
      lVar13 = lVar13 + 1;
      param_3 = param_3 + 1;
    } while (lVar13 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// AddReferencedObjects @ 14618f230

void __cdecl
UMovieSceneTrackInstanceInstantiator::AddReferencedObjects
          (UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FReferenceCollector *pFVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  bool bVar9;
  UClass *pUVar10;
  FString *pFVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  wchar_t *pwVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  undefined1 local_res18 [8];
  longlong *local_res20;
  int local_168;
  uint uStack_164;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  uint local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  int local_118;
  int local_110;
  int local_10c;
  int local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  local_res10 = param_2;
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar11 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_98);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar21);
  }
  pUVar10 = GetPrivateStaticClass();
  iVar3 = (int)pUVar10->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar10->_padding_)) {
    pFVar11 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_88);
    pwVar21 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UObject>(local_78,param_1);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar21,pwVar16);
  }
  puVar1 = &param_1[1].field_0x20;
  local_168 = 0;
  iVar3 = *(int *)&param_1[2].field_0x20;
  puVar17 = &param_1[2].field_0x8;
  local_148 = 1;
  uStack_164 = 1;
  iStack_154 = 0;
  iStack_150 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&param_1[2].field_0x18;
    if (*(uint **)&param_1[2].field_0x18 == (uint *)0x0) {
      puVar18 = (uint *)puVar17;
    }
    uVar20 = *puVar18;
    iStack_150 = 0;
    local_168 = 0;
    while (uVar20 == 0) {
      iStack_150 = iStack_150 + 0x20;
      lVar13 = (longlong)local_168;
      local_168 = local_168 + 1;
      iStack_154 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_168) goto LAB_14618f382;
      uVar20 = puVar18[lVar13 + 1];
    }
    uStack_164 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_164 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_110 = (int)lVar13;
    iStack_154 = local_110 + -1 + iStack_150;
    if (iVar3 < iStack_154) {
      iStack_154 = iVar3;
    }
  }
LAB_14618f382:
  local_res20._0_4_ = *(uint *)&param_1[2].field_0x20;
  local_118 = *(int *)(param_1 + 2) - *(int *)&param_1[3].field_0x4;
  local_138._padding_ = CONCAT44(uStack_164,local_168);
  local_138.CurrentBitIndex = iStack_154;
  local_138.UnvisitedBitMask = 0xffffffff;
  local_138._28_4_ = uStack_14c;
  local_138.BaseBitIndex = iStack_150;
  iVar14 = (int)(uint)local_res20 >> 5;
  bVar12 = (byte)(uint)local_res20;
  uVar20 = (uint)local_res20 & 0xffffffe0;
  local_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar17;
  local_100 = puVar1;
  if ((((int)(uint)local_res20 < 0) || (iVar3 < (int)(uint)local_res20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar7 = local_100;
  pFVar5 = local_res10;
  uVar15 = *(uint *)&param_1[2].field_0x20;
  uVar22 = (uint)local_res20;
  if ((uint)local_res20 != uVar15) {
    puVar19 = puVar17;
    if (*(undefined1 **)&param_1[2].field_0x18 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)&param_1[2].field_0x18;
    }
    uVar22 = -1 << (bVar12 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      local_res20._0_4_ = uVar15;
      uVar22 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14618f4a0;
      uVar22 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_10c = (int)lVar13;
    local_res20._0_4_ = local_10c + -1 + uVar20;
    uVar22 = (uint)local_res20;
    if ((int)uVar15 < (int)(uint)local_res20) {
      local_res20._0_4_ = uVar15;
      uVar22 = uVar15;
    }
  }
LAB_14618f4a0:
  while( true ) {
    if (*(int *)(param_1 + 2) - *(int *)&param_1[3].field_0x4 != local_118) {
      local_res8[0] = 0;
      `TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>::TRangedForIterator
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_138.CurrentBitIndex == uVar22) &&
        (local_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) && (puVar1 == puVar7))
    break;
    lVar13 = (longlong)local_138.CurrentBitIndex * 0x10 + *(longlong *)puVar1;
    (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5,lVar13,param_1);
    (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5,lVar13 + 8,param_1);
    local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
  }
  local_res20 = (longlong *)&param_1[3].field_0x8;
  iStack_f0 = 0;
  iVar3 = *(int *)&param_1[4].field_0x8;
  puVar1 = &param_1[3].field_0x18;
  local_d8 = 0;
  iStack_dc = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)(param_1 + 4);
    if (*(uint **)(param_1 + 4) == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar20 = *puVar18;
    while (uVar20 == 0) {
      iStack_f0 = iStack_f0 + 1;
      local_d8 = local_d8 + 0x20;
      iStack_dc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14618f5c0;
      uVar20 = puVar18[iStack_f0];
    }
    local_148 = -uVar20 & uVar20;
    uVar2 = (ulonglong)local_148 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_108 = (int)lVar13;
    iStack_dc = local_108 + -1 + local_d8;
    if (iVar3 < iStack_dc) {
      iStack_dc = iVar3;
    }
  }
LAB_14618f5c0:
  uVar20 = *(uint *)&param_1[4].field_0x8;
  uStack_ec = local_148;
  uStack_d4 = local_4c;
  iStack_d0 = *(int *)&param_1[3].field_0x10 - *(int *)&param_1[4].field_0x14;
  uVar15 = uVar20 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(local_148,iStack_f0);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar20 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = (undefined1 *)local_res20;
  local_e8 = puVar1;
  local_c8 = local_res20;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar6 = local_res20;
  uVar22 = *(uint *)&param_1[4].field_0x8;
  if (uVar20 != uVar22) {
    puVar17 = puVar1;
    if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
      puVar17 = *(undefined1 **)(param_1 + 4);
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      iVar14 = iVar14 + 1;
      uVar15 = uVar15 + 0x20;
      uVar20 = uVar22;
      if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar14)
      goto LAB_14618f6c0;
      uVar20 = *(uint *)(puVar17 + (longlong)iVar14 * 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar20 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar22 < (int)uVar20) {
      uVar20 = uVar22;
    }
  }
LAB_14618f6c0:
  while( true ) {
    plVar8 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (plVar8 == plVar6))
    break;
    (**(code **)(pFVar5->_padding_ + 0x88))
              (pFVar5,*plVar8 + (longlong)TStack_c0.CurrentBitIndex * 0x18,param_1,0);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return;
}

// GetPrivateStaticClass @ 1461b3180

UClass * __cdecl UMovieSceneTrackInstanceInstantiator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstanceInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackInstanceInstantiator,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstanceInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.InnerSingleton;
}

// MakeOutput @ 1461be560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall
UMovieSceneTrackInstanceInstantiator::MakeOutput
          (UMovieSceneTrackInstanceInstantiator *this,UObject *param_1,UClass *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  undefined1 auStackY_178 [32];
  int local_148 [2];
  undefined8 local_140;
  TBaseKeyIterator<1> local_138;
  TPairInitializer<TObjectPtr<UObject>_&&,int_const_&> local_120;
  UObject *local_110;
  UObject *local_108;
  TBaseKeyIterator<1> local_100;
  FSparseArrayAllocationInfo local_e8;
  UObject **local_d8;
  int *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_1);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (param_1 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(param_1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
    }
  }
  local_120.Value = (int *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_100,
             (TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
              *)&this->BoundObjectToInstances,(TObjectPtr<UObject_const_>)&local_120.Value);
  local_138.Key.field0_0x0.DebugPtr = local_100.Key.field0_0x0;
  local_138.Set = local_100.Set;
  local_138.Index = local_100.Index;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_100.Key.field0_0x0.DebugPtr != (TObjectPtr<UObject_const_>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100.Key.field0_0x0);
    local_138.Index = local_100.Index;
  }
  while (local_138.Index != -1) {
    iVar13 = *(int *)(*(longlong *)&(local_100.Set)->Elements + 8 + (longlong)local_138.Index * 0x18
                     );
    if (*(UClass **)
         (*(longlong *)(*(longlong *)&this->TrackInstances + 8 + (longlong)iVar13 * 0x10) + 0x10) ==
        param_2) {
      pTVar1 = &this->InvalidatedOutputs;
      iVar8 = (iVar13 - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar8) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar8);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar8,false);
      }
      if (((iVar13 < 0) || ((this->InvalidatedOutputs).NumBits <= iVar13)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar13 = (*pcVar5)();
        return iVar13;
      }
      FVar12 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<unsigned_int>)0x0) {
        FVar12 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar2 = (uint *)((longlong)FVar12 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
      return iVar13;
    }
    TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::operator++(&local_138);
    local_100.Set = local_138.Set;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_140 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UMovieSceneTrackInstance::StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = this;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pUVar3 = (UObject *)this->_padding_;
  local_110 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar10 + 1),(FObjectPtr)&local_110);
  pUVar10[1].field_0x8 = param_1 == (UObject *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)&pUVar10[1].field_0x10 = pUVar3;
  (**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10);
  iVar13 = *(int *)&(this->TrackInstances).field_0x34;
  if (iVar13 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)&this->TrackInstances,
                       (int *)&(this->TrackInstances).field_0x8,
                       (int *)&(this->TrackInstances).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackInstances).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->TrackInstances).field_0x30;
    lVar4 = *(longlong *)&this->TrackInstances;
    iVar7 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0x10);
    iVar13 = iVar13 + -1;
    *(int *)&(this->TrackInstances).field_0x30 = iVar7;
    *(int *)&(this->TrackInstances).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->TrackInstances,&local_e8,
             iVar8);
  if (local_e8.Pointer != (undefined8 *)0x0) {
    *(UObject **)local_e8.Pointer = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    *(UObject **)((longlong)local_e8.Pointer + 8) = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar10);
    }
  }
  local_148[0] = local_e8.Index;
  local_108 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_d8 = &local_108;
  local_d0 = local_148;
  TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TObjectPtr<UObject>_&&,int_const_&>_>
            ((TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
              *)&this->BoundObjectToInstances,&local_120,(bool *)&local_d8);
  pTVar1 = &this->InvalidatedOutputs;
  iVar13 = (local_148[0] - (this->InvalidatedOutputs).NumBits) + 1;
  if (0 < iVar13) {
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar13);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar8,iVar13,false);
  }
  iVar13 = local_148[0];
  if (((local_148[0] < 0) || ((this->InvalidatedOutputs).NumBits <= local_148[0])) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar13 = (*pcVar5)();
    return iVar13;
  }
  FVar12 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)pTVar1;
  }
  puVar2 = (uint *)((longlong)FVar12 + (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
  return local_148[0];
}

// OnCleanTaggedGarbage @ 1461bf2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstanceInstantiator::OnCleanTaggedGarbage
          (UMovieSceneTrackInstanceInstantiator *this)

{
  int iVar1;
  FBuiltInComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  FScriptContainerElement *this_00;
  undefined1 auStack_1d8 [32];
  FComponentTypeID local_1b8;
  FComponentTypeID local_1b6 [3];
  <lambda_1> local_1b0 [2];
  wchar_t *local_1a0;
  TStatIdData *pTStack_198;
  byte local_190;
  undefined7 uStack_18f;
  Type TStack_188;
  uint uStack_184;
  initializer_list<UE::MovieScene::FComponentTypeID> local_178;
  undefined2 local_168;
  TComponentTypeID<FTrackInstanceInputComponent> TStack_166;
  undefined4 uStack_164;
  wchar_t *pwStack_160;
  TStatIdData *pTStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 local_138 [8];
  wchar_t *pwStack_130;
  TStatId local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1b0[0].__this = this;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_190 = local_190 & 0xe0;
  TStack_188 = AnyHiPriThreadHiPriTask;
  pTStack_198 = &TStatId::TStatId_NAME_None;
  local_1a0 = (wchar_t *)0x0;
  uStack_184 = uStack_184 & 0xffffff00;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uStack_150._1_7_ = uStack_18f;
  uStack_150._0_1_ = local_190;
  uStack_148._4_4_ = uStack_184;
  uStack_148._0_4_ = TStack_188;
  TStack_166 = pFVar3->TrackInstanceInput;
  local_1b8.Value = (pFVar2->Tags).NeedsUnlink.Value;
  pwStack_160 = local_1a0;
  pTStack_158 = pTStack_198;
  local_138._2_2_ = TStack_166;
  local_138._0_2_ = local_168;
  local_138._4_4_ = uStack_164;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.NumBits = 0;
  pwStack_130 = local_1a0;
  local_128.StatIdPtr = pTStack_198;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_5c = 0x180;
  local_28 = 0;
  local_24 = 0x180;
  uStack_120 = uStack_150;
  local_118 = uStack_148;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  iVar1 = local_110.ComplexMasks.ArrayNum;
  if (local_110.ComplexMasks.ArrayNum == local_110.ComplexMasks.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_110.ComplexMasks.AllocatorInstance,
                       &local_110.ComplexMasks.ArrayMax);
  }
  local_110.ComplexMasks.ArrayNum = iVar1 + 1;
  local_178._First = &local_1b8;
  this_00 = local_110.ComplexMasks.AllocatorInstance.Data + (longlong)iVar1 * 0x3c;
  local_178._Last = local_1b6;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_178);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
  ::
  Iterate_PerEntityImpl<_UMovieSceneTrackInstanceInstantiator::OnCleanTaggedGarbage_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
              *)local_138,(FEntityManager *)(this->_padding_ + 0x28),&local_110,local_1b0);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnLink @ 1461bf6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneTrackInstanceInstantiator::OnLink(UMovieSceneTrackInstanceInstantiator *this)

{
  int iVar1;
  TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *this_00;
  byte bVar2;
  TComponentTypeID<FTrackInstanceInputComponent> TVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FBuiltInComponentTypes *pFVar10;
  undefined ******ppppppuVar11;
  undefined ******ppppppuVar12;
  undefined1 auStackY_98 [32];
  FSparseArrayAllocationInfo local_68;
  undefined *****local_58;
  TComponentTypeID<FMovieSceneTrackInstanceComponent> TStack_50;
  TComponentTypeID<FTrackInstanceInputComponent> TStack_4e;
  undefined4 uStack_4c;
  UMovieSceneTrackInstanceInstantiator *local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_98;
  lVar5 = this->_padding_;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  TVar3 = pFVar10->TrackInstanceInput;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  TStack_50 = pFVar10->TrackInstance;
  local_18 = local_18 | 3;
  local_58 = (undefined *****)&___7FTrackInstanceInputComponentInitializer_MovieScene_UE__6B_;
  TStack_4e = TVar3;
  local_48 = this;
  if (((local_18 & 1) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppppppuVar12 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar12 = (undefined ******)local_58;
  }
  if (((local_18 & 1) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppppppuVar11 = &local_58;
  if ((local_18 & 2) == 0) {
    ppppppuVar11 = (undefined ******)local_58;
  }
  if ((ppppppuVar12 != ppppppuVar11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_18 & 1) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInitializer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x17f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)(lVar5 + 0x148);
  if (*(int *)(lVar5 + 0x17c) == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this_00,(int *)(lVar5 + 0x150),
                       (int *)(lVar5 + 0x154));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x158),false);
  }
  else {
    iVar9 = *(int *)(lVar5 + 0x178);
    iVar1 = *(int *)(lVar5 + 0x17c) + -1;
    pFVar6 = (this_00->Data).AllocatorInstance.Data;
    iVar4 = *(int *)(pFVar6 + (longlong)iVar9 * 0x48 + 4);
    *(int *)(lVar5 + 0x178) = iVar4;
    *(int *)(lVar5 + 0x17c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar6 + (longlong)iVar4 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::AllocateIndex(this_00,&local_68,iVar9);
  if (local_68.Pointer != (longlong *)0x0) {
    bVar2 = *(byte *)((longlong)local_68.Pointer + 0x40);
    *(byte *)((longlong)local_68.Pointer + 0x40) = bVar2 & 0xfe | 2;
    if ((local_18 & 1) != 0) {
      *(byte *)((longlong)local_68.Pointer + 0x40) = bVar2 & 0xfe | 3;
      local_18 = local_18 & 0xfe;
      *(byte *)((longlong)local_68.Pointer + 0x40) =
           *(byte *)((longlong)local_68.Pointer + 0x40) ^
           (*(byte *)((longlong)local_68.Pointer + 0x40) ^ local_18) & 2;
      *(undefined ******)local_68.Pointer = local_58;
      *(longlong *)((longlong)local_68.Pointer + 8) =
           CONCAT44(uStack_4c,CONCAT22(TStack_4e,TStack_50));
      *(UMovieSceneTrackInstanceInstantiator **)((longlong)local_68.Pointer + 0x10) = local_48;
      *(longlong *)((longlong)local_68.Pointer + 0x18) = lStack_40;
      *(longlong *)((longlong)local_68.Pointer + 0x20) = local_38;
      *(longlong *)((longlong)local_68.Pointer + 0x28) = lStack_30;
      *(longlong *)((longlong)local_68.Pointer + 0x30) = local_28;
      *(longlong *)((longlong)local_68.Pointer + 0x38) = lStack_20;
    }
  }
  this->ChildInitializerIndex = local_68.Index;
  if ((local_18 & 1) != 0) {
    ppppppuVar12 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppppuVar12 = (undefined ******)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppppuVar12)(ppppppuVar12,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58);
    }
  }
  return;
}

// OnRun @ 1461c0320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstanceInstantiator::OnRun
          (UMovieSceneTrackInstanceInstantiator *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  uint *puVar1;
  TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  FBuiltInComponentTypes *pFVar10;
  ForElementType<unsigned_int> FVar11;
  FScriptContainerElement *this_00;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ForAnyElementType FVar17;
  TObjectPtr<UObject> *pTVar18;
  ForElementType<unsigned_int> FVar19;
  longlong lVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8 [4];
  FComponentTypeID local_3b4;
  FComponentTypeID local_3b2;
  FComponentTypeID local_3b0;
  ushort local_3ae;
  uint local_3ac;
  TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  local_3a8;
  FComponentTypeID *local_398;
  FComponentTypeID *pFStack_390;
  int local_388;
  int local_384;
  int local_380;
  <lambda_1> local_378 [2];
  undefined8 local_368;
  TStatIdData *pTStack_360;
  byte local_358;
  undefined7 uStack_357;
  undefined4 uStack_350;
  uint uStack_34c;
  undefined8 local_340;
  TStatIdData *pTStack_338;
  byte local_330;
  undefined7 uStack_32f;
  undefined4 uStack_328;
  uint uStack_324;
  FComponentTypeID *local_318;
  FComponentTypeID *pFStack_310;
  <lambda_2> local_308;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_2f0;
  TComponentTypeID<FTrackInstanceInputComponent> TStack_2ee;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  TStatIdData *pTStack_2e0;
  ulonglong uStack_2d8;
  undefined8 uStack_2d0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2b8;
  TComponentTypeID<FTrackInstanceInputComponent> local_2a8;
  undefined6 uStack_2a6;
  undefined8 uStack_2a0;
  TStatIdData *pTStack_298;
  ulonglong uStack_290;
  undefined8 uStack_288;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
  local_278;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_158 [8];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  ulonglong uVar16;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar16 = 0;
  pTStack_360 = &TStatId::TStatId_NAME_None;
  local_368 = 0;
  local_2a8 = pFVar10->TrackInstanceInput;
  local_3b0.Value = (pFVar10->Tags).NeedsUnlink.Value;
  uStack_2a0 = 0;
  pTStack_298 = &TStatId::TStatId_NAME_None;
  local_278._2_6_ = uStack_2a6;
  local_278.Accessors =
       (TTuple<UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>)local_2a8;
  local_3ae = (pFVar10->Tags).NeedsLink.Value;
  uStack_34c = uStack_34c & 0xffffff00;
  uStack_350 = 0x6ff;
  uStack_290 = CONCAT71(uStack_357,local_358) & 0xffffffffffffffe0;
  uStack_288._4_4_ = uStack_34c;
  uStack_288._0_4_ = AnyHiPriThreadHiPriTask;
  local_278.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
  local_250.AllMask.Bits.NumBits = 0;
  local_278.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_250.AllMask.Bits.MaxBits = 0x180;
  local_250.NoneMask.Bits.NumBits = 0;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1a0 = 0;
  local_19c = 0x180;
  local_168 = 0;
  local_164 = 0x180;
  local_378[0].__this = this;
  local_358 = local_358 & 0xe0;
  local_278.CommonParams.TaskParams._16_8_ = uStack_290;
  local_278.CommonParams._24_8_ = uStack_288;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_278,&local_250);
  local_398 = &local_3b0;
  pFStack_390 = (FComponentTypeID *)&local_3ac;
  iVar7 = local_250.ComplexMasks.ArrayNum;
  if (local_250.ComplexMasks.ArrayNum == local_250.ComplexMasks.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_250.ComplexMasks.AllocatorInstance,
                       &local_250.ComplexMasks.ArrayMax);
  }
  local_250.ComplexMasks.ArrayNum = iVar7 + 1;
  local_2c8._First = local_398;
  local_2c8._Last = pFStack_390;
  this_00 = local_250.ComplexMasks.AllocatorInstance.Data + (longlong)iVar7 * 0x3c;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_2c8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
  ::Iterate_PerEntityImpl<_UMovieSceneTrackInstanceInstantiator::OnRun_::__l2::<lambda_1>_&>
            (&local_278,(FEntityManager *)(this->_padding_ + 0x28),&local_250,local_378);
  if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  FVar19 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  iVar7 = (this->InvalidatedOutputs).NumBits;
  if (FVar19 == (ForElementType<unsigned_int>)0x0) {
    FVar19 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
  }
  uVar15 = iVar7 + 0x1f;
  FVar11 = FVar19;
  uVar14 = uVar16;
  if (uVar15 >> 5 != 0) {
    while (*(int *)FVar11 == 0) {
      uVar13 = (int)uVar14 + 1;
      FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4);
      uVar14 = (ulonglong)uVar13;
      if ((int)(uVar15 >> 5) <= (int)uVar13) {
        return;
      }
    }
    puVar1 = (uint *)((longlong)FVar19 + uVar14 * 4);
    local_388 = 0;
    bVar22 = *puVar1 != 0;
    if (bVar22) {
      for (; (*puVar1 >> local_388 & 1) == 0; local_388 = local_388 + 1) {
      }
    }
    iVar21 = 0x20;
    if (bVar22) {
      iVar21 = local_388;
    }
    iVar21 = iVar21 + (int)uVar14 * 0x20;
    if ((iVar21 < iVar7) && (iVar21 != -1)) {
      local_308.NewInputs = &local_3a8;
      local_3a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.Pairs.ArrayNum = 0;
      local_3a8.Pairs.ArrayMax = 0;
      local_2f0 = pFVar10->InstanceHandle;
      TStack_2ee = pFVar10->TrackInstanceInput;
      local_3b4.Value = (pFVar10->Tags).NeedsUnlink.Value;
      local_318 = &local_3b4;
      pFStack_310 = &local_3b2;
      local_340 = 0;
      pTStack_338 = &TStatId::TStatId_NAME_None;
      uStack_328 = 0x6ff;
      uStack_324 = uStack_324 & 0xffffff00;
      uStack_2d8 = CONCAT71(uStack_32f,local_330) & 0xffffffffffffffe0;
      uStack_2d0._4_4_ = uStack_324;
      uStack_2d0._0_4_ = AnyHiPriThreadHiPriTask;
      uStack_2e8 = 0;
      pTStack_2e0 = &TStatId::TStatId_NAME_None;
      local_158._2_2_ = TStack_2ee;
      local_158._0_2_ = local_2f0;
      local_158._4_4_ = uStack_2ec;
      pwStack_150 = (wchar_t *)0x0;
      local_148 = &TStatId::TStatId_NAME_None;
      local_130.AllMask.Bits.NumBits = 0;
      local_130.AllMask.Bits.MaxBits = 0x180;
      local_130.NoneMask.Bits.NumBits = 0;
      local_130.NoneMask.Bits.MaxBits = 0x180;
      local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.ComplexMasks.ArrayNum = 0;
      local_130.ComplexMasks.ArrayMax = 0;
      local_80 = 0;
      local_7c = 0x180;
      local_48 = 0;
      local_44 = 0x180;
      local_330 = local_330 & 0xe0;
      local_308.__this = this;
      local_308.BuiltInComponents = pFVar10;
      uStack_140 = uStack_2d8;
      local_138 = uStack_2d0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_158,&local_130);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
      local_2b8._First = local_318;
      local_2b8._Last = pFStack_310;
      UE::MovieScene::FComponentMask::SetAll(&local_130.NoneMask,&local_2b8);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
      ::Iterate_PerAllocationImpl<_UMovieSceneTrackInstanceInstantiator::OnRun_::__l6::<lambda_2>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
                  *)local_158,(FEntityManager *)(this->_padding_ + 0x28),&local_130,&local_308);
      if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
      }
      iVar7 = local_3a8.Pairs.ArrayNum;
      pTVar2 = (TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)
               (local_3a8.Pairs.AllocatorInstance.Data + (longlong)local_3a8.Pairs.ArrayNum * 0x18);
      FVar17.Data = local_3a8.Pairs.AllocatorInstance.Data;
      while( true ) {
        if (local_3a8.Pairs.ArrayNum != iVar7) {
          local_3b8[0] = 0;
          `TCheckedPointerIterator<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_3b8);
        }
        if ((TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)
            FVar17.Data == pTVar2) break;
        iVar21 = *(int *)FVar17.Data;
        if (((iVar21 < 0) || ((this->InvalidatedOutputs).NumBits <= iVar21)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar19 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar19 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar19;
        }
        iVar8 = iVar21;
        if (iVar21 < 0) {
          iVar8 = iVar21 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar11 + (longlong)(iVar8 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar21 & 0x1f));
        if ((*(int *)&((TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>
                        *)FVar17.Data)->field_0x10 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewInput.Value.Num() != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\TrackInstance\\MovieSceneTrackInstanceSystem.cpp"
                                ,0x105,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UMovieSceneTrackInstance::UpdateInputs
                  (*(UMovieSceneTrackInstance **)
                    (*(longlong *)&this->TrackInstances + 8 + (longlong)iVar21 * 0x10),
                   (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)
                   &((TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>
                      *)FVar17.Data)->field_0x8);
        FVar17.Data = FVar17.Data + 0x18;
      }
      local_398 = (FComponentTypeID *)CONCAT44(local_398._4_4_,1);
      iVar7 = (this->InvalidatedOutputs).NumBits;
      iVar21 = 0;
      iVar8 = 0;
      if (iVar7 != 0) {
        FVar19 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        if (FVar19 == (ForElementType<unsigned_int>)0x0) {
          FVar19 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        }
        for (uVar15 = *(uint *)FVar19; uVar15 == 0;
            uVar15 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar15 * 4)) {
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
          iVar21 = iVar21 + 0x20;
          iVar8 = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_1461c0815;
        }
        local_398 = (FComponentTypeID *)(ulonglong)(-uVar15 & uVar15);
        uVar14 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_384 = (int)lVar4;
        iVar8 = local_384 + -1 + iVar21;
        if (iVar7 < iVar8) {
          iVar8 = iVar7;
        }
      }
LAB_1461c0815:
      uVar15 = 0xffffffff;
      if (iVar8 < (this->InvalidatedOutputs).NumBits) {
        do {
          lVar20 = (longlong)iVar8;
          pTVar18 = (TObjectPtr<UObject> *)(lVar20 * 0x10 + *(longlong *)&this->TrackInstances);
          UMovieSceneTrackInstance::Destroy
                    ((UMovieSceneTrackInstance *)pTVar18[1].field0_0x0.DebugPtr);
          TMultiMap<TObjectPtr<UObject>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>_>
          ::Remove(&this->BoundObjectToInstances,pTVar18,iVar8);
          lVar4 = *(longlong *)&this->TrackInstances;
          bVar6 = (byte)iVar8 & 0x1f;
          local_3ac = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if (((iVar8 < 0) || (*(int *)&(this->TrackInstances).field_0x28 <= iVar8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->TrackInstances).field_0x20;
          puVar12 = &(this->TrackInstances).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar12 = puVar3;
          }
          iVar7 = iVar8;
          if (iVar8 < 0) {
            iVar7 = iVar8 + 0x1f;
          }
          if (((*(uint *)(puVar12 + (longlong)(iVar7 >> 5) * 4) & local_3ac) == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(this->TrackInstances).field_0x34 != 0) {
            *(int *)(lVar4 + (longlong)*(int *)&(this->TrackInstances).field_0x30 * 0x10) = iVar8;
          }
          *(undefined4 *)(lVar4 + lVar20 * 0x10) = 0xffffffff;
          if (*(int *)&(this->TrackInstances).field_0x34 < 1) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = *(undefined4 *)&(this->TrackInstances).field_0x30;
          }
          *(undefined4 *)(lVar4 + 4 + lVar20 * 0x10) = uVar9;
          puVar3 = &(this->TrackInstances).field_0x34;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          *(int *)&(this->TrackInstances).field_0x30 = iVar8;
          if (((iVar8 < 0) || (*(int *)&(this->TrackInstances).field_0x28 <= iVar8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->TrackInstances).field_0x20;
          puVar12 = &(this->TrackInstances).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar12 = puVar3;
          }
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0x1f;
          }
          *(uint *)(puVar12 + (longlong)(iVar8 >> 5) * 4) =
               *(uint *)(puVar12 + (longlong)(iVar8 >> 5) * 4) & ~local_3ac;
          iVar7 = (this->InvalidatedOutputs).NumBits;
          uVar15 = uVar15 & ~(uint)local_398;
          FVar19 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
          if (FVar19 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar19;
          }
          for (uVar13 = uVar15 & *(uint *)((longlong)FVar11 + (longlong)(int)uVar16 * 4);
              uVar13 == 0; uVar13 = *(uint *)((longlong)FVar11 + (longlong)(int)uVar13 * 4)) {
            uVar13 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar13;
            iVar21 = iVar21 + 0x20;
            iVar8 = iVar7;
            if ((int)((iVar7 + -1 >> 0x1f & 0x1fU) + iVar7 + -1) >> 5 < (int)uVar13)
            goto LAB_1461c09f3;
            uVar15 = 0xffffffff;
          }
          local_398 = (FComponentTypeID *)CONCAT44(local_398._4_4_,-uVar13 & uVar13);
          uVar14 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_380 = (int)lVar4;
          iVar8 = local_380 + -1 + iVar21;
          if (iVar7 < iVar8) {
            iVar8 = iVar7;
          }
LAB_1461c09f3:
        } while (iVar8 < (this->InvalidatedOutputs).NumBits);
      }
      (this->InvalidatedOutputs).NumBits = 0;
      DestructItems<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)
                 local_3a8.Pairs.AllocatorInstance.Data,local_3a8.Pairs.ArrayNum);
      if ((TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)
          local_3a8.Pairs.AllocatorInstance.Data !=
          (TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)0x0) {
        FMemory::Free(local_3a8.Pairs.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnTagGarbage @ 1461c12b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstanceInstantiator::OnTagGarbage(UMovieSceneTrackInstanceInstantiator *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_158 [32];
  FComponentTypeID local_138;
  FComponentTypeID local_136;
  undefined1 local_134 [4];
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_130;
  wchar_t *local_118;
  TStatIdData *pTStack_110;
  byte local_108;
  undefined7 uStack_107;
  Type TStack_100;
  uint uStack_fc;
  initializer_list<UE::MovieScene::FComponentTypeID> local_f8;
  <lambda_1> local_e8;
  undefined1 local_d8 [8];
  wchar_t *local_d0;
  TStatId TStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_108 = local_108 & 0xe0;
  local_e8.Garbage = &local_130;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTStack_110 = &TStatId::TStatId_NAME_None;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  local_118 = (wchar_t *)0x0;
  TStack_100 = AnyHiPriThreadHiPriTask;
  uStack_fc = uStack_fc & 0xffffff00;
  local_e8.__this = this;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar2 = this->_padding_;
  local_c0._1_7_ = uStack_107;
  local_c0._0_1_ = local_108;
  uStack_b8._4_4_ = uStack_fc;
  uStack_b8._0_4_ = TStack_100;
  local_138.Value = *(ushort *)&pFVar6->TrackInstanceInput;
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  local_d0 = local_118;
  TStack_c8.StatIdPtr = pTStack_110;
  local_d8._2_2_ = local_138.Value;
  if ((TComponentTypeID<FTrackInstanceInputComponent>)local_138.Value ==
      (TComponentTypeID<FTrackInstanceInputComponent>)0xffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("In->ComponentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1a8,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f8._First = &local_138;
  local_f8._Last = &local_136;
  UE::MovieScene::FComponentMask::SetAll(&local_a8.AllMask,&local_f8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
  ::Iterate_PerEntityImpl<_UMovieSceneTrackInstanceInstantiator::OnTagGarbage_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FTrackInstanceInputComponent>_>
              *)local_d8,(FEntityManager *)(lVar2 + 0x28),&local_a8,&local_e8);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  iVar4 = local_130.ArrayNum;
  uVar7 = (ulonglong)local_130.ArrayNum;
  pFVar1 = local_130.AllocatorInstance.Data + uVar7 * 2;
  FVar8.Data = local_130.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_134);
    }
    if (FVar8.Data == pFVar1) break;
    UE::MovieScene::FEntityManager::AddComponent
              ((FEntityManager *)(this->_padding_ + 0x28),(FMovieSceneEntityID)*(ushort *)FVar8.Data
               ,(FComponentTypeID)(pFVar6->Tags).NeedsUnlink.Value,Full);
    uVar7 = local_130._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 2;
  }
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 1461c1500

void __thiscall
UMovieSceneTrackInstanceInstantiator::OnUnlink(UMovieSceneTrackInstanceInstantiator *this)

{
  TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
  ::RemoveAt((TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
              *)(this->_padding_ + 0x148),this->ChildInitializerIndex,1);
  return;
}

// Serialize @ 1461d1790

void __thiscall
UMovieSceneTrackInstanceInstantiator::Serialize
          (UMovieSceneTrackInstanceInstantiator *this,FArchive *param_1)

{
  TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> *pTVar8;
  bool bVar9;
  UPackage *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> *local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    pTVar1 = &this->TrackInstances;
    iVar4 = *(int *)&(this->TrackInstances).field_0x28;
    puVar2 = &(this->TrackInstances).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(this->TrackInstances).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar2;
      }
      uVar13 = *puVar15;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar13 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar11 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_1461d1887;
        uVar13 = puVar15[lVar11 + 1];
      }
      uStack_94 = -uVar13 & uVar13;
      uVar3 = (ulonglong)uStack_94 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      iStack_84 = local_res18 + -1 + iStack_80;
      if (iVar4 < iStack_84) {
LAB_1461d1887:
        iStack_84 = iVar4;
      }
    }
    uVar13 = *(uint *)&(this->TrackInstances).field_0x28;
    local_50 = *(int *)&(this->TrackInstances).field_0x8 -
               *(int *)&(this->TrackInstances).field_0x34;
    local_70._padding_ = CONCAT44(uStack_94,local_98);
    local_70.CurrentBitIndex = iStack_84;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    iVar12 = (int)uVar13 >> 5;
    uVar16 = uVar13 & 0xffffffe0;
    local_res20 = pTVar1;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = local_res20;
    uVar5 = *(uint *)&(this->TrackInstances).field_0x28;
    if (uVar13 != uVar5) {
      puVar14 = *(undefined1 **)&(this->TrackInstances).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1461d1970;
        uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar16;
      if ((int)uVar5 < (int)uVar13) {
        uVar13 = uVar5;
      }
    }
LAB_1461d1970:
    while( true ) {
      if (*(int *)&(this->TrackInstances).field_0x8 - *(int *)&(this->TrackInstances).field_0x34 !=
          local_50) {
        `TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      lVar11 = (longlong)local_70.CurrentBitIndex;
      if (((local_70.CurrentBitIndex == uVar13) &&
          (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar1 == pTVar8))
      break;
      lVar6 = *(longlong *)pTVar1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_MovieScene();
        Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry,
                             (UObject *)pUVar10,L"MovieSceneTrackInstanceEntry");
      }
      UScriptStruct::SerializeItem
                (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceEntry.OuterSingleton,
                 param_1,(void *)(lVar11 * 0x10 + lVar6),(void *)0x0);
      local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
    }
    TSetPrivateFriend::
    Serialize<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<TObjectPtr<UObject>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,int,1>,FDefaultSetAllocator>
                        *)&this->BoundObjectToInstances);
  }
  return;
}

// Serialize @ 1461d1a40

void __thiscall
UMovieSceneTrackInstanceInstantiator::Serialize
          (UMovieSceneTrackInstanceInstantiator *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUMovieSceneTrackInstanceInstantiator @ 1461d4990

void __cdecl
UMovieSceneTrackInstanceInstantiator::StaticRegisterNativesUMovieSceneTrackInstanceInstantiator
          (void)

{
  return;
}

