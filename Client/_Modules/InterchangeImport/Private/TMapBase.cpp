// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 13

// FindOrAddImpl<int_const_&> @ 14e677830

TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
* __thiscall
TMapBase<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadData> @ 14e6778e0

FAnimationPayloadData * __thiscall
TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
::
FindOrAddImpl<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadData>
          (TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
           *this,uint param_1,TTuple<FString,FInterchangeAnimationPayLoadKey> *param_2,
          FAnimationPayloadData *param_3)

{
  int iVar1;
  longlong lVar2;
  FAnimationPayloadData *pFVar3;
  int local_res8 [2];
  TTuple<FString,FInterchangeAnimationPayLoadKey> *local_18;
  FAnimationPayloadData *local_10;
  
  iVar1 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 200 + *(longlong *)&(this->Pairs).Elements, lVar2 == 0)) {
    local_18 = param_2;
    local_10 = param_3;
    TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadData_&&>_>
              (&this->Pairs,(uint)local_res8,
               (TPairInitializer<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadData_&&>
                *)(ulonglong)param_1,(bool *)&local_18);
    pFVar3 = (FAnimationPayloadData *)
             (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 200 + 0x28);
  }
  else {
    pFVar3 = (FAnimationPayloadData *)(lVar2 + 0x28);
  }
  return pFVar3;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14e677980

void __thiscall
TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
           *this,TArray<TTuple<FString,FInterchangeAnimationPayLoadKey>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TTuple<FString,FInterchangeAnimationPayLoadKey>,int>
            ((TTuple<FString,FInterchangeAnimationPayLoadKey> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  iVar9 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14e677a60;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14e677a60:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x80 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 0x28)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x28;
      ::FString::FString((FString *)pFVar5,(FString *)pFVar10);
      ::FString::FString((FString *)(pFVar5 + 0x10),(FString *)(pFVar10 + 0x10));
      *(undefined1 *)
       &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5[0x20].field_0x0)->AllocatorInstance
        ).Data = pFVar10[0x20].field_0x0;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14e677bf0

void __thiscall
TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
           *this,TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FAnimationPayloadQuery *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FAnimationPayloadQuery *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
            ((FAnimationPayloadQuery *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e677cd0;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14e677cd0:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar11 = (FAnimationPayloadQuery *)
                (*(longlong *)&(this->Pairs).Elements + 0x28 +
                (longlong)TStack_40.CurrentBitIndex * 0x80);
      pFVar5 = (FAnimationPayloadQuery *)(param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery
                ((FAnimationPayloadQuery *)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x50),pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14e69b3e0

FString * __thiscall
TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
::Find(TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
       *this,FNode *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FString *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FNode *)*plVar2 == param_1) {
          pFVar4 = (FString *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FString *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FString *)0x0;
}

// FindChecked @ 14e69b480

FAnimationPayloadData * __thiscall
TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
::FindChecked(TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
              *this,TTuple<FString,FInterchangeAnimationPayLoadKey> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FAnimationPayloadData *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  
  iVar5 = *(int *)&param_1->field_0x8;
  if (iVar5 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)param_1;
  }
  lVar9 = 0;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  uVar4 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&param_1->field_0x10);
  iVar5 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                    (&this->Pairs,uVar3 * 0x40 + (uVar3 >> 2) + uVar4 + 0x9e3779b9 ^ uVar3,param_1);
  if ((iVar5 == -1) ||
     (lVar9 = (longlong)iVar5 * 200 + *(longlong *)&(this->Pairs).Elements, lVar9 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FAnimationPayloadData *)(*pcVar1)();
      return pFVar6;
    }
  }
  return (FAnimationPayloadData *)(lVar9 + 0x28);
}

// FindChecked @ 14e69b540

UInterchangeSkeletalAnimationTrackNode ** __thiscall
TMapBase<FString,UInterchangeSkeletalAnimationTrackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>_>
::FindChecked(TMapBase<FString,UInterchangeSkeletalAnimationTrackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UInterchangeSkeletalAnimationTrackNode **ppUVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,UInterchangeSkeletalAnimationTrackNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeSkeletalAnimationTrackNode_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppUVar5 = (UInterchangeSkeletalAnimationTrackNode **)(*pcVar1)();
      return ppUVar5;
    }
  }
  return (UInterchangeSkeletalAnimationTrackNode **)(lVar8 + 0x10);
}

// FindOrAddImpl<int_const_&> @ 14e6af4a0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<int_const_&> @ 14e6af550

TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FString_const_&> @ 14e6d9910

FGroupData * __thiscall
TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FObjData::FGroupData>,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,FObjData::FGroupData>,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FGroupData *)(lVar2 + 0x10);
}

// Find @ 14e6ef5d0

FGroupData * __thiscall
TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
::Find(TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FGroupData *pFVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FObjData::FGroupData>,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pFVar6 = (FGroupData *)0x0;
    if (lVar1 != 0) {
      pFVar6 = (FGroupData *)(lVar1 + 0x10);
    }
    return pFVar6;
  }
  return (FGroupData *)0x0;
}

// Find @ 14e6ef660

FMaterialData * __thiscall
TMapBase<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
::Find(TMapBase<FString,FObjData::FMaterialData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FMaterialData *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FObjData::FMaterialData>,TDefaultMapHashableKeyFuncs<FString,FObjData::FMaterialData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 400 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FMaterialData *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FMaterialData *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FMaterialData *)0x0;
}

// FindOrAddImpl<int_const_&> @ 14e7034a0

FLodPayloads * __thiscall
TMapBase<int,UInterchangeStaticMeshFactory::FLodPayloads,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UInterchangeStaticMeshFactory::FLodPayloads,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x1a0 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FLodPayloads *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x66];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UInterchangeStaticMeshFactory::FLodPayloads>,TDefaultMapHashableKeyFuncs<int,UInterchangeStaticMeshFactory::FLodPayloads,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FLodPayloads *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x1a0 + 8);
}

