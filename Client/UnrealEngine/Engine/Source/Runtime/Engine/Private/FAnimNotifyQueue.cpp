// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// operator= @ 147439c90

FAnimNotifyQueue * __thiscall
FAnimNotifyQueue::operator=(FAnimNotifyQueue *this,FAnimNotifyQueue *param_1)

{
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
  *pTVar3;
  TMap<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
  *this_00;
  undefined1 *_Src;
  undefined1 *_Dst;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  pTVar1 = &param_1->AnimNotifies;
  this->PredictedLODLevel = param_1->PredictedLODLevel;
  pTVar2 = &this->AnimNotifies;
  this->RandomStream = param_1->RandomStream;
  if (pTVar2 != pTVar1) {
    DestructItems<FAnimNotifyEventReference,int>
              ((FAnimNotifyEventReference *)(pTVar2->AllocatorInstance).Data,
               (this->AnimNotifies).ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AnimNotifies).ArrayNum = (param_1->AnimNotifies).ArrayNum;
    (this->AnimNotifies).ArrayMax = (param_1->AnimNotifies).ArrayMax;
    (param_1->AnimNotifies).ArrayNum = 0;
    (param_1->AnimNotifies).ArrayMax = 0;
  }
  pTVar3 = &param_1->UnfilteredMontageAnimNotifies;
  this_00 = &this->UnfilteredMontageAnimNotifies;
  if (this_00 != pTVar3) {
    TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->UnfilteredMontageAnimNotifies).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    _Src = &(param_1->UnfilteredMontageAnimNotifies).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar3;
    _Dst = &(this->UnfilteredMontageAnimNotifies).field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x8 =
         *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x8;
    *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0xc =
         *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0xc;
    *(undefined8 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->UnfilteredMontageAnimNotifies).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->UnfilteredMontageAnimNotifies).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->UnfilteredMontageAnimNotifies).field_0x20 =
           *(undefined8 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x20;
      *(undefined8 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x20 = 0;
      *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x28 =
           *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x28;
      *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x2c =
           *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x2c;
      *(undefined8 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x28 = 0;
    }
    *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x30 =
         *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x30;
    *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x34 =
         *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x34;
    *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x34 = 0;
    if (*(longlong *)&(param_1->UnfilteredMontageAnimNotifies).field_0x40 == 0) {
      *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x38 =
           *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x38;
    }
    pvVar5 = *(void **)&(this->UnfilteredMontageAnimNotifies).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->UnfilteredMontageAnimNotifies).field_0x40 =
         *(undefined8 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x40;
    *(undefined8 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x40 = 0;
    *(undefined4 *)&(this->UnfilteredMontageAnimNotifies).field_0x48 =
         *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x48;
    *(undefined4 *)&(param_1->UnfilteredMontageAnimNotifies).field_0x48 = 0;
  }
  (this->World).WeakPtr = (param_1->World).WeakPtr;
  return this;
}

// StaticStruct @ 1474a2150

UScriptStruct * __cdecl FAnimNotifyQueue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyQueue,(UObject *)pUVar1,
                         L"AnimNotifyQueue");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.OuterSingleton;
}

// AddAnimNotifies @ 1474b8570

void __thiscall
FAnimNotifyQueue::AddAnimNotifies
          (FAnimNotifyQueue *this,bool param_1,
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  AddAnimNotifiesToDest(this,param_1,param_2,&this->AnimNotifies,param_3);
  return;
}

// AddAnimNotifies @ 1474b8590

void __thiscall
FAnimNotifyQueue::AddAnimNotifies
          (FAnimNotifyQueue *this,bool param_1,
          TMap<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>,0>_>
          *param_2,float param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 local_res18 [16];
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iVar16 = 0;
  uVar7 = 1;
  iVar17 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      iVar17 = iVar17 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1474b863d;
      uVar12 = puVar14[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = iVar17 + -1 + (int)lVar10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1474b863d:
  uVar12 = *(uint *)&param_2->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar7,iVar16);
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar17;
  uStack_58 = CONCAT44(uStack_84,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&param_2->field_0x28;
  if (uVar12 != uVar7) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar16;
      uVar11 = uVar11 + 0x20;
      iVar16 = iVar16 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1474b8740;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_1474b8740:
  while( true ) {
    if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_78.CurrentBitIndex == uVar12) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FName *)((longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)param_2);
    FVar4 = *pFVar13;
    uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    pTVar9 = &TMapBase<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
                          *)&this->UnfilteredMontageAnimNotifies,uVar7 + FVar4.Number,pFVar13)->
              Notifies;
    AddAnimNotifiesToDest
              (this,param_1,
               (TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1),pTVar9
               ,param_3);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// AddAnimNotifiesToDest @ 1474b87f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNotifyQueue::AddAnimNotifiesToDest
          (FAnimNotifyQueue *this,bool param_1,
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  FAnimNotifyEvent *pFVar3;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FAnimNotifyEventReference *pFVar5;
  code *pcVar6;
  float fVar7;
  FName FVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  ENetMode EVar12;
  uint uVar13;
  int iVar14;
  UWorld *this_00;
  FName *pFVar15;
  ulonglong uVar16;
  longlong *plVar17;
  FAnimNotifyEventReference *pFVar18;
  FScriptContainerElement *pFVar19;
  FAnimNotifyEventReference *pFVar20;
  undefined1 local_77;
  undefined1 local_76 [2];
  uint local_74;
  FAnimNotifyEventReference *local_70;
  undefined1 local_68 [48];
  
  bVar9 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (bVar9) {
    this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    EVar12 = UWorld::InternalGetNetMode(this_00);
    bVar9 = EVar12 == NM_DedicatedServer;
  }
  else {
    bVar9 = false;
  }
  fVar7 = __real_3f800000;
  local_74 = param_2->ArrayNum;
  uVar16 = (ulonglong)(int)local_74;
  pFVar20 = (FAnimNotifyEventReference *)(param_2->AllocatorInstance).Data;
  pFVar18 = pFVar20 + uVar16;
  local_70 = pFVar18;
  do {
    if (param_2->ArrayNum != (int)uVar16) {
      local_77 = 0;
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_77);
    }
    if (pFVar20 == pFVar18) {
      return;
    }
    if (((((pFVar20->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
         (pFVar3 = pFVar20->Notify, pFVar3 != (FAnimNotifyEvent *)0x0)) &&
        ((param_1 || (pFVar3->bTriggerOnFollower != false)))) &&
       (((pFVar3->bTriggerOnDedicatedServer != false || (!bVar9)) &&
        (pFVar3->TriggerWeightThreshold <= param_4)))) {
      uVar2 = (pFVar3->NotifyFilterType).Value;
      if (uVar2 != '\0') {
        if (uVar2 == '\x01') {
          if (pFVar3->NotifyFilterLOD <= this->PredictedLODLevel) goto LAB_1474b8aab;
        }
        else {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2804023507191594966>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNotifyQueue.cpp"
                              ,0x2a,"false");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      if (((pFVar3->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) ||
         (uVar13 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b,
         (this->RandomStream).Seed = uVar13,
         (float)(uVar13 >> 9 | 0x3f800000) - fVar7 < pFVar3->NotifyTriggerChance)) {
        if (pFVar3->bCanBeFilteredViaRequest != false) {
          pTVar4 = (pFVar20->ContextData).Object;
          if (pTVar4 == (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                         *)0x0) {
LAB_1474b89d9:
            plVar17 = (longlong *)0x0;
          }
          else {
            pFVar19 = (pTVar4->AllocatorInstance).Data;
            iVar14 = pTVar4->ArrayNum;
            pFVar1 = pFVar19 + (longlong)iVar14 * 8;
            while( true ) {
              if (pTVar4->ArrayNum != iVar14) {
                local_76[0] = 0;
                `TCheckedPointerIterator<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_76);
              }
              FVar8 = UE::Anim::IAnimEventsFilterContext::TypeName;
              pFVar18 = local_70;
              if (pFVar19 == pFVar1) goto LAB_1474b89d9;
              pFVar15 = (FName *)(**(code **)(**(longlong **)pFVar19 + 8))
                                           (*(longlong **)pFVar19,local_68);
              if (*pFVar15 == FVar8) break;
              pFVar19 = pFVar19 + 8;
            }
            plVar17 = *(longlong **)pFVar19;
            pFVar18 = local_70;
          }
          if ((plVar17 != (longlong *)0x0) &&
             (cVar11 = (**(code **)(*plVar17 + 0x10))(plVar17,pFVar20), cVar11 != '\0'))
          goto LAB_1474b8aab;
        }
        if ((pFVar3->NotifyStateClass).field0_0x0.DebugPtr == (UAnimNotifyState *)0x0) {
          pFVar5 = (FAnimNotifyEventReference *)(param_3->AllocatorInstance).Data;
          if (((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_3->ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = param_3->ArrayNum;
          if (iVar14 == param_3->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar14 + 1;
          FAnimNotifyEventReference::FAnimNotifyEventReference
                    ((FAnimNotifyEventReference *)
                     ((param_3->AllocatorInstance).Data + (longlong)iVar14 * 0x30),pFVar20);
        }
        else {
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FAnimNotifyEventReference_const_&>(param_3,pFVar20);
        }
      }
    }
LAB_1474b8aab:
    pFVar20 = pFVar20 + 1;
    uVar16 = (ulonglong)local_74;
  } while( true );
}

// AddAnimNotifiesToDestNoFiltering @ 1474b8b00

void __thiscall
FAnimNotifyQueue::AddAnimNotifiesToDestNoFiltering
          (FAnimNotifyQueue *this,
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FAnimNotifyEventReference *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnimNotifyEventReference *pFVar6;
  FAnimNotifyEventReference *pFVar7;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (FAnimNotifyEventReference *)(param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + iVar1;
LAB_1474b8b31:
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    if (((pFVar6->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
       (pFVar6->Notify != (FAnimNotifyEvent *)0x0)) {
      if ((pFVar6->Notify->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
        TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FAnimNotifyEventReference_const_&>(param_2,pFVar6);
        pFVar6 = pFVar6 + 1;
        goto LAB_1474b8b31;
      }
      pFVar2 = (FAnimNotifyEventReference *)(param_2->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + param_2->ArrayMax)) {
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
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      FAnimNotifyEventReference::FAnimNotifyEventReference
                ((FAnimNotifyEventReference *)
                 ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30),pFVar6);
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// AddAnimNotify @ 1474b8c40

void __thiscall
FAnimNotifyQueue::AddAnimNotify(FAnimNotifyQueue *this,FAnimNotifyEvent *param_1,UObject *param_2)

{
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FAnimNotifyEventReference *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimNotifyEventReference local_38;
  
  pTVar1 = &this->AnimNotifies;
  local_38.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_38.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_38.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  local_38.Notify = param_1;
  local_38.NotifySource.field0_0x0 = (TObjectPtr<UObject_const_>_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  pFVar3 = (FAnimNotifyEventReference *)(pTVar1->AllocatorInstance).Data;
  local_38.CurrentAnimTime = 0.0;
  local_38.bActiveContext = false;
  if ((pFVar3 <= &local_38) && (&local_38 < pFVar3 + (this->AnimNotifies).ArrayMax)) {
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
  iVar6 = (this->AnimNotifies).ArrayNum;
  piVar2 = &(this->AnimNotifies).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->AnimNotifies).ArrayNum = iVar6 + 1;
  FAnimNotifyEventReference::FAnimNotifyEventReference
            ((FAnimNotifyEventReference *)
             ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30),&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// Append @ 1474bce50

void __thiscall FAnimNotifyQueue::Append(FAnimNotifyQueue *this,FAnimNotifyQueue *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AddAnimNotifiesToDestNoFiltering(this,&param_1->AnimNotifies,&this->AnimNotifies);
  iVar3 = *(int *)&(param_1->UnfilteredMontageAnimNotifies).field_0x28;
  puVar1 = &(param_1->UnfilteredMontageAnimNotifies).field_0x10;
  iVar14 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_1->UnfilteredMontageAnimNotifies).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1474bcefd;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1474bcefd:
  uVar12 = *(uint *)&(param_1->UnfilteredMontageAnimNotifies).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->UnfilteredMontageAnimNotifies).field_0x8 -
                       *(int *)&(param_1->UnfilteredMontageAnimNotifies).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->UnfilteredMontageAnimNotifies).field_0x28;
  if (uVar12 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->UnfilteredMontageAnimNotifies).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1474bd000;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_1474bd000:
  while( true ) {
    if (*(int *)&(param_1->UnfilteredMontageAnimNotifies).field_0x8 -
        *(int *)&(param_1->UnfilteredMontageAnimNotifies).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x20 +
                       *(longlong *)&param_1->UnfilteredMontageAnimNotifies);
    FVar4 = *pFVar13;
    uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    pTVar9 = &TMapBase<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
                          *)&this->UnfilteredMontageAnimNotifies,uVar7 + FVar4.Number,pFVar13)->
              Notifies;
    AddAnimNotifiesToDestNoFiltering
              (this,(TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1),
               pTVar9);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ApplyMontageNotifies @ 1474bd9a0

void __thiscall
FAnimNotifyQueue::ApplyMontageNotifies(FAnimNotifyQueue *this,FAnimInstanceProxy *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FAnimInstanceProxy *this_00;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  FAnimInstanceProxy *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  iVar3 = *(int *)&(this->UnfilteredMontageAnimNotifies).field_0x28;
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->UnfilteredMontageAnimNotifies).field_0x10;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->UnfilteredMontageAnimNotifies).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1474bda4e;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1474bda4e:
  uVar11 = *(uint *)&(this->UnfilteredMontageAnimNotifies).field_0x28;
  puVar1 = &(this->UnfilteredMontageAnimNotifies).field_0x10;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->UnfilteredMontageAnimNotifies).field_0x8 -
                       *(int *)&(this->UnfilteredMontageAnimNotifies).field_0x34);
  local_res10 = param_1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res10;
  uVar6 = *(uint *)&(this->UnfilteredMontageAnimNotifies).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->UnfilteredMontageAnimNotifies).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1474bdb50;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1474bdb50:
  while( true ) {
    if (*(int *)&(this->UnfilteredMontageAnimNotifies).field_0x8 -
        *(int *)&(this->UnfilteredMontageAnimNotifies).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar9 = (FName *)(*(longlong *)&(this->UnfilteredMontageAnimNotifies).field_0x0 +
                      (longlong)TStack_60.CurrentBitIndex * 0x20);
    bVar5 = FAnimInstanceProxy::IsSlotNodeRelevantForNotifies(this_00,pFVar9);
    if (bVar5) {
      AddAnimNotifiesToDestNoFiltering
                (this,(TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *)(pFVar9 + 1),
                 &this->AnimNotifies);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
           *)&this->UnfilteredMontageAnimNotifies);
  return;
}

// PassesChanceOfTriggering @ 1474ef5a0

bool __thiscall
FAnimNotifyQueue::PassesChanceOfTriggering(FAnimNotifyQueue *this,FAnimNotifyEvent *param_1)

{
  uint uVar1;
  
  if ((param_1->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
    return true;
  }
  uVar1 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar1;
  return (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000 < param_1->NotifyTriggerChance;
}

// PassesFiltering @ 1474ef5f0

bool __thiscall FAnimNotifyQueue::PassesFiltering(FAnimNotifyQueue *this,FAnimNotifyEvent *param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  uVar1 = (param_1->NotifyFilterType).Value;
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      return this->PredictedLODLevel < param_1->NotifyFilterLOD;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2804023507191594966>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNotifyQueue.cpp"
                       ,0x2a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return true;
}

// Reset @ 1474f6710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimNotifyQueue::Reset(FAnimNotifyQueue *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  int iVar2;
  FAnimNotifyEventReference *pFVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  piVar1 = &(this->AnimNotifies).ArrayMax;
  pFVar3 = (FAnimNotifyEventReference *)(this->AnimNotifies).AllocatorInstance.Data;
  iVar2 = (this->AnimNotifies).ArrayNum;
  if ((this->AnimNotifies).ArrayMax < 0) {
    DestructItems<FAnimNotifyEventReference,int>(pFVar3,iVar2);
    (this->AnimNotifies).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AnimNotifies).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAnimNotifyEventReference,int>(pFVar3,iVar2);
    (this->AnimNotifies).ArrayNum = 0;
  }
  TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
           *)&this->UnfilteredMontageAnimNotifies);
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    this->PredictedLODLevel = *(int *)((longlong)&param_1->_padding_ + 4);
    local_res8 = (FWeakObjectPtr)param_1->_padding_;
    if (local_res8 == (FWeakObjectPtr)0x0) {
      local_res8 = (FWeakObjectPtr)UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FWeakObjectPtr)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
    return;
  }
  this->PredictedLODLevel = -1;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->World).WeakPtr = local_res8;
  return;
}

