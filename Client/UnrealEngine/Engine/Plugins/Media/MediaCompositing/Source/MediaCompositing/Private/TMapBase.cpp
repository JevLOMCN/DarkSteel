// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 4

// Emplace<FName_const_&,FVariant> @ 14ea65730

FVariant * __thiscall
TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
Emplace<FName_const_&,FVariant>
          (TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
           *this,FName *param_1,FVariant *param_2)

{
  int iVar1;
  int iVar2;
  EVariantTypes EVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TSparseSetElement<TTuple<FName,FVariant>_> *pTVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  pTVar9 = (TSparseSetElement<TTuple<FName,FVariant>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FVariant>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    EVar3 = param_2->Type;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(EVariantTypes *)((longlong)local_28.Pointer + 8) = EVar3;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x10) =
         (param_2->Value).AllocatorInstance.Data;
    (param_2->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x18) = (param_2->Value).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x1c) = (param_2->Value).ArrayMax;
    (param_2->Value).ArrayNum = 0;
    (param_2->Value).ArrayMax = 0;
    param_2->Type = Empty;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
    pTVar9 = local_28.Pointer;
  }
  uVar4 = *(undefined8 *)pTVar9;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,pTVar9,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,pTVar9,local_res8[0]);
  }
  return (FVariant *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 8);
}

// Find @ 14ea6b490

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer ** __thiscall
TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
::Find(TMapBase<FObjectKey,UMediaPlayer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMediaPlayer_*,0>_>
       *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  UMediaPlayer **ppUVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar8 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x18;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x18) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (UMediaPlayer **)0x0;
          }
          ppUVar6 = (UMediaPlayer **)0x0;
          if (lVar1 != 0) {
            ppUVar6 = (UMediaPlayer **)(lVar1 + 8);
          }
          return ppUVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (UMediaPlayer **)0x0;
}

// Find @ 14ea6b5a0

FMovieSceneMediaPlayerPriority * __thiscall
TMapBase<FObjectKey,FMovieSceneMediaPlayerPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>_>
::Find(TMapBase<FObjectKey,FMovieSceneMediaPlayerPriority,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneMediaPlayerPriority,0>_>
       *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FMovieSceneMediaPlayerPriority *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar8 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x18;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x18) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (FMovieSceneMediaPlayerPriority *)0x0;
          }
          pFVar6 = (FMovieSceneMediaPlayerPriority *)0x0;
          if (lVar1 != 0) {
            pFVar6 = (FMovieSceneMediaPlayerPriority *)(lVar1 + 8);
          }
          return pFVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (FMovieSceneMediaPlayerPriority *)0x0;
}

// FindChecked @ 14ea6b6b0

FVariant * __thiscall
TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
FindChecked(TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FVariant *pFVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FVariant *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FVariant *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar7 = (FVariant *)(*pcVar3)();
  return pFVar7;
}

