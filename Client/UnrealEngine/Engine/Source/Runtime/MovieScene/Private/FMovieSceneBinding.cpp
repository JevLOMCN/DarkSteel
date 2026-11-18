// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// FMovieSceneBinding @ 14617ea20

FMovieSceneBinding * __thiscall
FMovieSceneBinding::FMovieSceneBinding(FMovieSceneBinding *this,FMovieSceneBinding *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TObjectPtr<UObject> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  iVar3 = (int)param_1->_padding_;
  pTVar4 = (TObjectPtr<UObject> *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((void *)this->_padding_,pTVar4,iVar3);
  }
  uVar6 = (param_1->ObjectGuid).B;
  uVar7 = (param_1->ObjectGuid).C;
  uVar8 = (param_1->ObjectGuid).D;
  (this->ObjectGuid).A = (param_1->ObjectGuid).A;
  (this->ObjectGuid).B = uVar6;
  (this->ObjectGuid).C = uVar7;
  (this->ObjectGuid).D = uVar8;
  ::FString::FString(&this->BindingName_DEPRECATED,&param_1->BindingName_DEPRECATED);
  pTVar2 = &this->Tracks;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Tracks).ArrayMax;
  iVar3 = (param_1->Tracks).ArrayNum;
  pFVar5 = (param_1->Tracks).AllocatorInstance.Data;
  (this->Tracks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<TObjectPtr<UMovieSceneTrack>,TObjectPtr<UMovieSceneTrack>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMovieSceneTrack> *)pFVar5,iVar3);
  }
  return this;
}

// StaticStruct @ 1461e4f10

UScriptStruct * __cdecl FMovieSceneBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBinding.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBinding,(UObject *)pUVar1,
                         L"MovieSceneBinding");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBinding.OuterSingleton;
}

// AddTrack @ 146206d70

void __thiscall
FMovieSceneBinding::AddTrack
          (FMovieSceneBinding *this,UMovieSceneTrack *param_1,UMovieScene *param_2)

{
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneTrack *local_18 [2];
  
  pTVar1 = &this->Tracks;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Tracks).ArrayMax * 8)) {
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
  iVar6 = (this->Tracks).ArrayNum;
  piVar2 = &(this->Tracks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Tracks).ArrayNum = iVar6 + 1;
  *(UMovieSceneTrack **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// RemoveNullTracks @ 14622fe70

void __thiscall FMovieSceneBinding::RemoveNullTracks(FMovieSceneBinding *this)

{
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = (this->Tracks).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    pTVar1 = &this->Tracks;
    lVar8 = (longlong)(int)uVar9;
    lVar7 = lVar8 * 8;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->Tracks).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar7) == 0) {
        uVar5 = 0;
        if ((int)uVar9 < (this->Tracks).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar1->AllocatorInstance).Data + lVar8 * 8;
        iVar6 = (this->Tracks).ArrayNum + ~uVar9;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
        }
        piVar2 = &(this->Tracks).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,(this->Tracks).ArrayNum,&(this->Tracks).ArrayMax);
      }
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// RemoveTrack @ 1462303c0

bool __thiscall
FMovieSceneBinding::RemoveTrack
          (FMovieSceneBinding *this,UMovieSceneTrack *param_1,UMovieScene *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneTrack *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->Tracks).AllocatorInstance.Data;
  iVar2 = (this->Tracks).ArrayNum;
  pFVar5 = pFVar3;
  while( true ) {
    if (pFVar5 == pFVar3 + (longlong)iVar2 * 8) {
      return false;
    }
    if (*(UMovieSceneTrack **)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 8;
  }
  iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar3 >> 3);
  if (iVar4 == -1) {
    return false;
  }
  memmove(pFVar3 + (longlong)iVar4 * 8,pFVar3 + (longlong)iVar4 * 8 + 8,
          (longlong)((iVar2 - iVar4) + -1) << 3);
  piVar1 = &(this->Tracks).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UMovieSceneTrack::OnRemovedFromMovieScene(param_1);
  return true;
}

// SetTracks @ 146235b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneBinding::SetTracks
          (FMovieSceneBinding *this,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *param_1,
          UMovieScene *param_2)

{
  int *piVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  ulonglong uVar3;
  UMovieSceneTrack *this_00;
  UObject *pUVar4;
  TObjectPtr<UObject> TVar5;
  code *pcVar6;
  UMovieScene *pUVar7;
  undefined8 uVar8;
  bool bVar9;
  UClass *pUVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TObjectPtr<UObject>_u_0 *pTVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  FMovieSceneBinding *pFVar26;
  UMovieScene *pUVar27;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186 [6];
  undefined8 local_180;
  UObject *local_178;
  FMovieSceneBinding *local_170;
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *local_168;
  UMovieScene *local_160;
  undefined8 local_158;
  int local_150;
  undefined8 local_148;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TArrayView<TObjectPtr<UObject>_const_,int> local_e0;
  TArrayView<TObjectPtr<UObject>_const_,int> local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar19 = (param_1->AllocatorInstance).Data;
  iVar17 = param_1->ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  pFVar22 = pFVar19 + (longlong)iVar17 * 8;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_170 = this;
  local_160 = param_2;
  while( true ) {
    if (param_1->ArrayNum != iVar17) {
      local_188 = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_188);
    }
    if (pFVar19 == pFVar22) break;
    local_148 = *(undefined8 *)pFVar19;
    TSet<UMovieSceneTrack_*,DefaultKeyFuncs<UMovieSceneTrack_*,0>,FDefaultSetAllocator>::
    Emplace<UMovieSceneTrack_*_const_&>
              ((TSet<UMovieSceneTrack_*,DefaultKeyFuncs<UMovieSceneTrack_*,0>,FDefaultSetAllocator>
                *)local_98,(UMovieSceneTrack **)&local_158,(bool *)&local_148);
    pFVar19 = pFVar19 + 8;
  }
  local_168 = (TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *)0x1;
  uVar24 = (local_170->Tracks).ArrayNum - 1;
  if (-1 < (int)uVar24) {
    lVar25 = (longlong)(int)uVar24;
    lVar21 = lVar25 * 8;
    pFVar26 = local_170;
    do {
      uVar18 = ~uVar24 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar24 < (pFVar26->Tracks).ArrayNum) {
        uVar14 = uVar18;
      }
      local_180 = lVar21;
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(UMovieSceneTrack **)((pFVar26->Tracks).AllocatorInstance.Data + lVar21);
      uVar14 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar14 = uVar14 >> 0x10 ^ uVar14;
      if (local_98._8_4_ != local_64) {
        FVar16 = (ForElementType<FSetElementId>)local_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_58;
        }
        for (iVar17 = *(int *)((longlong)FVar16 + (ulonglong)(local_50 - 1U & uVar14) * 4);
            iVar17 != -1; iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(UMovieSceneTrack **)(local_98._0_8_ + (longlong)iVar17 * 0x10) == this_00) {
            FVar16 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_58;
            }
            uVar14 = *(uint *)((longlong)FVar16 + (longlong)(int)(local_50 - 1U & uVar14) * 4);
            if (uVar14 != 0xffffffff) goto LAB_146236190;
            goto LAB_146235d79;
          }
        }
      }
      UMovieSceneTrack::OnRemovedFromMovieScene(this_00);
      uVar14 = 0;
      if ((int)uVar24 < (pFVar26->Tracks).ArrayNum) {
        uVar14 = uVar18;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar22 = (pFVar26->Tracks).AllocatorInstance.Data + lVar25 * 8;
      iVar17 = (pFVar26->Tracks).ArrayNum + ~uVar24;
      if (iVar17 != 0) {
        memmove(pFVar22,pFVar22 + 8,(longlong)iVar17 << 3);
      }
      piVar1 = &(pFVar26->Tracks).ArrayNum;
      *piVar1 = *piVar1 + -1;
LAB_146235d79:
      lVar21 = lVar21 + -8;
      lVar25 = lVar25 + -1;
      uVar24 = uVar24 - 1;
      param_2 = local_160;
      local_180 = lVar21;
    } while (-1 < (int)uVar24);
  }
  uVar24 = local_70;
  uStack_134 = (uint)local_168;
  uStack_138 = 0;
  local_120 = 0;
  uStack_124 = uStack_138;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar14 = *(uint *)FVar15;
    local_120 = 0;
    uStack_138 = 0;
    while (uVar14 == 0) {
      lVar21 = (longlong)(int)uStack_138;
      local_120 = local_120 + 0x20;
      uStack_138 = uStack_138 + 1;
      uStack_124 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
      goto LAB_146235e11;
      uVar14 = ((uint *)((longlong)FVar15 + 4))[lVar21];
    }
    uStack_134 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_134 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_158._4_4_ = (int)lVar21;
    uStack_124 = (local_120 - 1) + local_158._4_4_;
    if ((int)local_70 < (int)uStack_124) {
      uStack_124 = local_70;
    }
  }
LAB_146235e11:
  local_140 = (longlong *)local_98;
  uStack_11c = local_a4;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_118 = local_98._8_4_ - local_64;
  uVar14 = local_70 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_134,uStack_138);
  iVar17 = (int)local_70 >> 5;
  TStack_108._28_4_ = local_a4;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar13 = (byte)local_70;
  local_180._0_4_ = local_70;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_70 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar24 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar24 = -1 << (bVar13 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar17 * 4);
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) {
        local_180._0_4_ = local_70;
        uVar24 = local_70;
        goto LAB_146235f19;
      }
      uVar24 = ((uint *)((longlong)FVar15 + 4))[lVar21];
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_150 = (int)lVar21;
    local_180._0_4_ = local_150 + -1 + uVar14;
    uVar24 = (uint)local_180;
    if ((int)local_70 < (int)(uint)local_180) {
      uVar24 = local_70;
      local_180._0_4_ = local_70;
    }
  }
LAB_146235f19:
  local_168 = &local_170->Tracks;
  pFVar26 = local_170;
  while( true ) {
    plVar11 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      local_187 = 0;
      `TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_187);
    }
    if (((TStack_108.CurrentBitIndex == uVar24) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar11 == (longlong *)local_98)) {
      iVar17 = local_168->ArrayNum;
      if (local_168->ArrayMax != iVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar17,&local_168->AllocatorInstance,iVar17,&local_168->ArrayMax);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UMovieSceneTrack_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    pUVar4 = *(UObject **)(*plVar11 + (longlong)TStack_108.CurrentBitIndex * 0x10);
    local_178 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar22 = (pFVar26->Tracks).AllocatorInstance.Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 < pFVar22 + (longlong)(pFVar26->Tracks).ArrayMax * 8)
        ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) break;
    iVar17 = (pFVar26->Tracks).ArrayNum;
    piVar1 = &(pFVar26->Tracks).ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar26->Tracks).AllocatorInstance,piVar1);
    }
    (pFVar26->Tracks).ArrayNum = iVar17 + 1;
    *(UObject **)((pFVar26->Tracks).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_178;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_178 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_178);
    }
    if (param_2 != (UMovieScene *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4,param_2);
      FMovieSceneDecorationContainer::GetDecorations
                ((FMovieSceneDecorationContainer *)&pUVar4[2].field_0x10,&local_e0);
      pTVar2 = &local_e0.DataPtr[local_e0.ArrayNum].field0_0x0;
      for (pTVar20 = &(local_e0.DataPtr)->field0_0x0; pTVar20 != pTVar2; pTVar20 = pTVar20 + 1) {
        TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr;
        if (TVar5.field0_0x0 != (UObject *)0x0) {
          pUVar10 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
          plVar11 = UObjectBaseUtility::GetInterfaceAddress
                              ((UObjectBaseUtility *)TVar5.field0_0x0,pUVar10);
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,param_2);
          }
        }
      }
      plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4);
      pUVar27 = (UMovieScene *)*plVar11;
      lVar21 = plVar11[1];
      local_160 = (UMovieScene *)(&pUVar27->_padding_ + (int)lVar21);
      while( true ) {
        pUVar7 = local_160;
        if ((int)plVar11[1] != (int)lVar21) {
          local_186[0] = 0;
          `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_186);
        }
        pFVar26 = local_170;
        uVar24 = (uint)local_180;
        if (pUVar27 == pUVar7) break;
        FMovieSceneDecorationContainer::GetDecorations
                  ((FMovieSceneDecorationContainer *)(pUVar27->_padding_ + 0x60),local_d0);
        pTVar2 = &local_d0[0].DataPtr[local_d0[0].ArrayNum].field0_0x0;
        for (pTVar20 = &(local_d0[0].DataPtr)->field0_0x0; pTVar20 != pTVar2; pTVar20 = pTVar20 + 1)
        {
          TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr;
          if (TVar5.field0_0x0 != (UObject *)0x0) {
            pUVar10 = Z_Construct_UClass_UMovieSceneLifetimeDecoration_NoRegister();
            plVar12 = UObjectBaseUtility::GetInterfaceAddress
                                ((UObjectBaseUtility *)TVar5.field0_0x0,pUVar10);
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,param_2);
            }
          }
        }
        pUVar27 = (UMovieScene *)&pUVar27->_padding_;
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
LAB_146236190:
  lVar23 = (longlong)(int)uVar14 * 0x10;
  if (*(UMovieSceneTrack **)(local_98._0_8_ + lVar23) != this_00) goto code_r0x0001462361a1;
  if (((int)uVar14 < 0) || ((int)local_70 <= (int)uVar14)) {
LAB_1462361e2:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Elements.IsValidIndex(ElementIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar18 = uVar14;
    if ((int)uVar14 < 0) {
      uVar18 = uVar14 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar15 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0
       ) goto LAB_1462361e2;
  }
  uVar8 = local_98._0_8_;
  FVar16 = (ForElementType<FSetElementId>)local_60;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FVar16 = local_58;
  }
  pFVar22 = (FScriptContainerElement *)
            ((longlong)FVar16 + (longlong)*(int *)(local_98._0_8_ + lVar23 + 0xc) * 4);
  while( true ) {
    uVar18 = *(uint *)pFVar22;
    if ((uVar18 == 0xffffffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar18 == uVar14) break;
    pFVar22 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar18 * 0x10 + 8);
  }
  *(uint *)pFVar22 = *(uint *)(uVar8 + lVar23 + 8);
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98,uVar14,1);
  lVar21 = local_180;
  pFVar26 = local_170;
  goto LAB_146235d79;
code_r0x0001462361a1:
  uVar14 = *(uint *)(local_98._0_8_ + lVar23 + 8);
  if (uVar14 == 0xffffffff) goto LAB_146235d79;
  goto LAB_146236190;
}

// StealTracks @ 146237d40

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __thiscall
FMovieSceneBinding::StealTracks
          (FMovieSceneBinding *this,
          TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieScene *param_1)

{
  TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->Tracks;
  if (param_1 != (UMovieScene *)0x0) {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    iVar2 = (this->Tracks).ArrayNum;
    pFVar3 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Tracks).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieSceneTrack>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar5 == pFVar3) break;
      UMovieSceneTrack::OnRemovedFromMovieScene(*(UMovieSceneTrack **)pFVar5);
      pFVar5 = pFVar5 + 8;
    }
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  uVar4 = (this->Tracks).ArrayNum;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = uVar4;
  if (uVar4 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,0,&__return_storage_ptr__->AllocatorInstance,uVar4,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,(longlong)(int)uVar4 << 3);
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

