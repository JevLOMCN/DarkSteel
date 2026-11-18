// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 12

// StaticClass @ 146061170

UClass * __cdecl UMovieSceneTrackRowDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackRowDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackRowDecoration,0x80,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackRowDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackRowDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton;
}

// UMovieSceneTrackRowDecoration @ 146095de0

UMovieSceneTrackRowDecoration * __thiscall
UMovieSceneTrackRowDecoration::UMovieSceneTrackRowDecoration
          (UMovieSceneTrackRowDecoration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  *(undefined8 *)&this->MuteSoloData = 0;
  *(undefined8 *)&(this->MuteSoloData).field_0x8 = 0;
  *(undefined8 *)&(this->MuteSoloData).field_0x20 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x28 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MuteSoloData).field_0x34 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MuteSoloData).field_0x40 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x48 = 0;
  return this;
}

// UMovieSceneTrackRowDecoration @ 146095e40

UMovieSceneTrackRowDecoration * __thiscall
UMovieSceneTrackRowDecoration::UMovieSceneTrackRowDecoration(UMovieSceneTrackRowDecoration *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  *(undefined8 *)&this->MuteSoloData = 0;
  *(undefined8 *)&(this->MuteSoloData).field_0x8 = 0;
  *(undefined8 *)&(this->MuteSoloData).field_0x20 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x28 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MuteSoloData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MuteSoloData).field_0x34 = 0;
  *(undefined8 *)&(this->MuteSoloData).field_0x40 = 0;
  *(undefined4 *)&(this->MuteSoloData).field_0x48 = 0;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transient);
  return this;
}

// ~UMovieSceneTrackRowDecoration @ 1460987e0

void __thiscall
UMovieSceneTrackRowDecoration::~UMovieSceneTrackRowDecoration(UMovieSceneTrackRowDecoration *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  *(undefined4 *)&(this->MuteSoloData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MuteSoloData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneMuteSoloData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MuteSoloData);
  this->_padding_ = (longlong)&___7IMovieSceneDecoration__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1460cff60

UClass * __cdecl UMovieSceneTrackRowDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackRowDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackRowDecoration,0x80,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackRowDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackRowDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackRowDecoration.InnerSingleton;
}

// IsMuted @ 1460d9030

bool __thiscall
UMovieSceneTrackRowDecoration::IsMuted(UMovieSceneTrackRowDecoration *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FMovieSceneMuteSoloData *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MuteSoloData).field_0x8 != *(int *)&(this->MuteSoloData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MuteSoloData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MuteSoloData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->MuteSoloData).field_0x48 - 1U & param_1) *
                              4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->MuteSoloData;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pFVar3 = TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
                   ::FindChecked((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
                                  *)&this->MuteSoloData,param_1);
          return pFVar3->bMuted;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// IsSoloed @ 1460d92d0

bool __thiscall
UMovieSceneTrackRowDecoration::IsSoloed(UMovieSceneTrackRowDecoration *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FMovieSceneMuteSoloData *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MuteSoloData).field_0x8 != *(int *)&(this->MuteSoloData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MuteSoloData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MuteSoloData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->MuteSoloData).field_0x48 - 1U & param_1) *
                              4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->MuteSoloData;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pFVar3 = TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
                   ::FindChecked((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
                                  *)&this->MuteSoloData,param_1);
          return pFVar3->bSoloed;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// OnRowIndicesChanged @ 1460db9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneTrackRowDecoration::OnRowIndicesChanged
          (UMovieSceneTrackRowDecoration *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  TMap<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar15 = 0;
  local_5c = 0x80;
  this_00 = &this->MuteSoloData;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
               *)this_00);
  bVar5 = 1 < *(int *)&(this->MuteSoloData).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->MuteSoloData).field_0xc;
  *(undefined4 *)&(this->MuteSoloData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MuteSoloData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MuteSoloData).field_0x34 = 0;
  iVar2 = *(int *)&(this->MuteSoloData).field_0x2c;
  *(undefined4 *)&(this->MuteSoloData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MuteSoloData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MuteSoloData).field_0x10,0);
  }
  uVar6 = 1;
  if (bVar5) {
    *(undefined4 *)&(this->MuteSoloData).field_0x48 = 1;
    TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FMovieSceneMuteSoloData>,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  iVar2 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  local_d0 = 0;
  iStack_d4 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    local_d0 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar15;
      local_d0 = local_d0 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_d4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1460dbb4d;
      uVar13 = puVar17[lVar8 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar9 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_c0 = (int)lVar8;
    iStack_d4 = local_d0 + -1 + local_c0;
    if (iVar2 < iStack_d4) {
      iStack_d4 = iVar2;
    }
  }
LAB_1460dbb4d:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_c8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_d8 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uVar6,iVar15);
  TStack_b0.CurrentBitIndex = iStack_d4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_b0._28_4_ = iStack_d4;
  TStack_b0.BaseBitIndex = local_d0;
  uStack_90 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = param_1;
  iStack_e8 = iVar15;
  uStack_e4 = uVar6;
  local_e0 = puVar1;
  iStack_cc = iStack_d4;
  local_b8 = param_1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar6) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1460dbc4d;
      uVar13 = *(uint *)(puVar16 + lVar8 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_bc = (int)lVar8;
    uVar13 = local_bc + -1 + uVar12;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_1460dbc4d:
LAB_1460dbc50:
  pTVar4 = local_b8;
  if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
    local_f8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
  }
  if (((TStack_b0.CurrentBitIndex == uVar13) &&
      (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == param_1)) {
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar15 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    return;
  }
  piVar14 = (int *)((longlong)TStack_b0.CurrentBitIndex * 0x10 + *(longlong *)pTVar4);
  uVar6 = piVar14[1];
  if (local_88._8_4_ != local_54) {
    FVar7 = (ForElementType<FSetElementId>)local_50;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FVar7 = local_48;
    }
    uVar9 = (ulonglong)(local_40 - 1U & uVar6);
    for (iVar15 = *(int *)((longlong)FVar7 + uVar9 * 4); iVar15 != -1;
        iVar15 = *(int *)(local_88._0_8_ + (longlong)iVar15 * 0x10 + 8)) {
      if (*(uint *)(local_88._0_8_ + (longlong)iVar15 * 0x10) == uVar6) {
        FVar7 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = local_48;
        }
        uVar12 = *(uint *)((longlong)FVar7 + uVar9 * 4);
        goto joined_r0x0001460dbcf7;
      }
    }
  }
  goto LAB_1460dbd4f;
joined_r0x0001460dbcf7:
  pFVar11 = (FScriptContainerElement *)0x0;
  if (uVar12 == 0xffffffff) goto LAB_1460dbd1a;
  pFVar11 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar12 * 0x10);
  if (*(uint *)pFVar11 == uVar6) {
    if (pFVar11 != (FScriptContainerElement *)0x0) goto LAB_1460dbd40;
    goto LAB_1460dbd1a;
  }
  uVar12 = *(uint *)(pFVar11 + 8);
  goto joined_r0x0001460dbcf7;
LAB_1460dbd1a:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1460dbd40:
  TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
  ::Emplace<int_const_&,FMovieSceneMuteSoloData_const_&>
            ((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
              *)this_00,piVar14,(FMovieSceneMuteSoloData *)(pFVar11 + 4));
LAB_1460dbd4f:
  TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  goto LAB_1460dbc50;
}

// SetMuted @ 1460f8060

void __thiscall
UMovieSceneTrackRowDecoration::SetMuted
          (UMovieSceneTrackRowDecoration *this,int param_1,bool param_2)

{
  TMap<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
  *this_00;
  int iVar1;
  FMovieSceneMuteSoloData *pFVar2;
  undefined1 *puVar3;
  int local_res10 [2];
  FMovieSceneMuteSoloData local_res18 [8];
  
  this_00 = &this->MuteSoloData;
  local_res10[0] = param_1;
  if (*(int *)&(this->MuteSoloData).field_0x8 != *(int *)&(this->MuteSoloData).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MuteSoloData).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MuteSoloData).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->MuteSoloData).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar1 * 0x10) == param_1) goto LAB_1460f80d3;
        iVar1 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res18[0].bMuted = false;
  local_res18[0].bSoloed = false;
  TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
  ::Emplace<int_const_&,FMovieSceneMuteSoloData>
            ((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
              *)this_00,local_res10,local_res18);
LAB_1460f80d3:
  pFVar2 = TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
           ::FindChecked((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
                          *)this_00,local_res10[0]);
  pFVar2->bMuted = param_2;
  return;
}

// SetSoloed @ 1460f8500

void __thiscall
UMovieSceneTrackRowDecoration::SetSoloed
          (UMovieSceneTrackRowDecoration *this,int param_1,bool param_2)

{
  TMap<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
  *this_00;
  int iVar1;
  FMovieSceneMuteSoloData *pFVar2;
  undefined1 *puVar3;
  int local_res10 [2];
  FMovieSceneMuteSoloData local_res18 [8];
  
  this_00 = &this->MuteSoloData;
  local_res10[0] = param_1;
  if (*(int *)&(this->MuteSoloData).field_0x8 != *(int *)&(this->MuteSoloData).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MuteSoloData).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MuteSoloData).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->MuteSoloData).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar1 * 0x10) == param_1) goto LAB_1460f8575;
        iVar1 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res18[0].bMuted = false;
  local_res18[0].bSoloed = false;
  TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
  ::Emplace<int_const_&,FMovieSceneMuteSoloData>
            ((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
              *)this_00,local_res10,local_res18);
LAB_1460f8575:
  pFVar2 = TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
           ::FindChecked((TMapBase<int,FMovieSceneMuteSoloData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneMuteSoloData,0>_>
                          *)this_00,local_res10[0]);
  pFVar2->bSoloed = param_2;
  return;
}

// StaticRegisterNativesUMovieSceneTrackRowDecoration @ 1460fa310

void __cdecl UMovieSceneTrackRowDecoration::StaticRegisterNativesUMovieSceneTrackRowDecoration(void)

{
  return;
}

// _getUObject @ 1461008f0

UObject * __thiscall UMovieSceneTrackRowDecoration::_getUObject(UMovieSceneTrackRowDecoration *this)

{
  return (UObject *)&this[-1].MuteSoloData.field_0x28;
}

