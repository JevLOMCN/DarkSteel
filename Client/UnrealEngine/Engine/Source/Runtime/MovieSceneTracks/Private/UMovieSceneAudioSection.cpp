// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 43

// StaticClass @ 146589530

UClass * __cdecl UMovieSceneAudioSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioSection",
               &Z_Registration_Info_UClass_UMovieSceneAudioSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioSection,0x6b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneAudioSection>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioSection.InnerSingleton;
}

// ForEachInternal<FMovieSceneAudioTriggerChannel,TFunction<void___cdecl(FName,FMovieSceneAudioTriggerChannel_const_&)>_> @ 1465d0190

void __cdecl
UMovieSceneAudioSection::
ForEachInternal<FMovieSceneAudioTriggerChannel,TFunction<void___cdecl(FName,FMovieSceneAudioTriggerChannel_const_&)>_>
          (TFunction<void___cdecl(FName,FMovieSceneAudioTriggerChannel_const_&)> *param_1,
          TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_a8 [8];
  TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1465d023d;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1465d023d:
  uVar13 = *(uint *)&param_2->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_58.CurrentBitIndex = iStack_84;
  TStack_58.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_58._28_4_ = iStack_84;
  TStack_58.BaseBitIndex = local_80;
  uStack_38 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_60 = param_2;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1465d0340;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1465d0340:
  while( true ) {
    pTVar6 = local_60;
    if (*(int *)&local_60->field_0x8 - *(int *)&local_60->field_0x34 != (int)uStack_38) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_58.CurrentBitIndex == uVar13) &&
        (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    puVar14 = (undefined8 *)((longlong)TStack_58.CurrentBitIndex * 0x120 + *(longlong *)pTVar6);
    local_68 = *puVar14;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_68,puVar14 + 1);
    TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// ForEachInternal<FMovieSceneBoolChannel,TFunction<void___cdecl(FName,FMovieSceneBoolChannel_const_&)>_> @ 1465d0410

void __cdecl
UMovieSceneAudioSection::
ForEachInternal<FMovieSceneBoolChannel,TFunction<void___cdecl(FName,FMovieSceneBoolChannel_const_&)>_>
          (TFunction<void___cdecl(FName,FMovieSceneBoolChannel_const_&)> *param_1,
          TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
  *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_a8 [8];
  TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1465d04bd;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1465d04bd:
  uVar13 = *(uint *)&param_2->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_58.CurrentBitIndex = iStack_84;
  TStack_58.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_58._28_4_ = iStack_84;
  TStack_58.BaseBitIndex = local_80;
  uStack_38 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_60 = param_2;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1465d05c0;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1465d05c0:
  while( true ) {
    pTVar6 = local_60;
    if (*(int *)&local_60->field_0x8 - *(int *)&local_60->field_0x34 != (int)uStack_38) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_58.CurrentBitIndex == uVar13) &&
        (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    puVar14 = (undefined8 *)((longlong)TStack_58.CurrentBitIndex * 0x130 + *(longlong *)pTVar6);
    local_68 = *puVar14;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_68,puVar14 + 1);
    TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// ForEachInternal<FMovieSceneFloatChannel,TFunction<void___cdecl(FName,FMovieSceneFloatChannel_const_&)>_> @ 1465d0690

void __cdecl
UMovieSceneAudioSection::
ForEachInternal<FMovieSceneFloatChannel,TFunction<void___cdecl(FName,FMovieSceneFloatChannel_const_&)>_>
          (TFunction<void___cdecl(FName,FMovieSceneFloatChannel_const_&)> *param_1,
          TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
  *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_a8 [8];
  TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1465d073d;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1465d073d:
  uVar13 = *(uint *)&param_2->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_58.CurrentBitIndex = iStack_84;
  TStack_58.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_58._28_4_ = iStack_84;
  TStack_58.BaseBitIndex = local_80;
  uStack_38 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_60 = param_2;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1465d0840;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1465d0840:
  while( true ) {
    pTVar6 = local_60;
    if (*(int *)&local_60->field_0x8 - *(int *)&local_60->field_0x34 != (int)uStack_38) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_58.CurrentBitIndex == uVar13) &&
        (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    puVar14 = (undefined8 *)((longlong)TStack_58.CurrentBitIndex * 0x138 + *(longlong *)pTVar6);
    local_68 = *puVar14;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_68,puVar14 + 1);
    TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// ForEachInternal<FMovieSceneIntegerChannel,TFunction<void___cdecl(FName,FMovieSceneIntegerChannel_const_&)>_> @ 1465d0910

void __cdecl
UMovieSceneAudioSection::
ForEachInternal<FMovieSceneIntegerChannel,TFunction<void___cdecl(FName,FMovieSceneIntegerChannel_const_&)>_>
          (TFunction<void___cdecl(FName,FMovieSceneIntegerChannel_const_&)> *param_1,
          TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
  *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_a8 [8];
  TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1465d09bd;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1465d09bd:
  uVar13 = *(uint *)&param_2->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_58.CurrentBitIndex = iStack_84;
  TStack_58.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_58._28_4_ = iStack_84;
  TStack_58.BaseBitIndex = local_80;
  uStack_38 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_60 = param_2;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1465d0ac0;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1465d0ac0:
  while( true ) {
    pTVar6 = local_60;
    if (*(int *)&local_60->field_0x8 - *(int *)&local_60->field_0x34 != (int)uStack_38) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_58.CurrentBitIndex == uVar13) &&
        (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    puVar14 = (undefined8 *)((longlong)TStack_58.CurrentBitIndex * 0x130 + *(longlong *)pTVar6);
    local_68 = *puVar14;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_68,puVar14 + 1);
    TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// ForEachInternal<FMovieSceneStringChannel,TFunction<void___cdecl(FName,FMovieSceneStringChannel_const_&)>_> @ 1465d0b90

void __cdecl
UMovieSceneAudioSection::
ForEachInternal<FMovieSceneStringChannel,TFunction<void___cdecl(FName,FMovieSceneStringChannel_const_&)>_>
          (TFunction<void___cdecl(FName,FMovieSceneStringChannel_const_&)> *param_1,
          TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
  *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_a8 [8];
  TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1465d0c3d;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1465d0c3d:
  uVar13 = *(uint *)&param_2->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_58.CurrentBitIndex = iStack_84;
  TStack_58.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_58._28_4_ = iStack_84;
  TStack_58.BaseBitIndex = local_80;
  uStack_38 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_60 = param_2;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1465d0d40;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1465d0d40:
  while( true ) {
    pTVar6 = local_60;
    if (*(int *)&local_60->field_0x8 - *(int *)&local_60->field_0x34 != (int)uStack_38) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_58.CurrentBitIndex == uVar13) &&
        (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_2))
    break;
    puVar14 = (undefined8 *)((longlong)TStack_58.CurrentBitIndex * 0x138 + *(longlong *)pTVar6);
    local_68 = *puVar14;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_68,puVar14 + 1);
    TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// UMovieSceneAudioSection @ 14661aab0

UMovieSceneAudioSection * __thiscall
UMovieSceneAudioSection::UMovieSceneAudioSection
          (UMovieSceneAudioSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneScalingDriver__;
  (this->StartFrameOffset).Value = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->SoundVolume);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->PitchMultiplier);
  *(undefined8 *)&this->Inputs_Float = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Float).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Float).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_String = 0;
  *(undefined8 *)&(this->Inputs_String).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_String).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_String).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_String).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_String).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_String).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_String).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_String).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_Bool = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Bool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Bool).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_Int = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Int).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Int).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_Trigger = 0;
  *(undefined8 *)&(this->Inputs_Trigger).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Trigger).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Trigger).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x48 = 0;
  FMovieSceneActorReferenceData::FMovieSceneActorReferenceData(&this->AttachActorData);
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  *(undefined8 *)&this->OnQueueSubtitles = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x8 = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioFinished = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioPlaybackPercent = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x10 = 0;
  return this;
}

// UMovieSceneAudioSection @ 14661acc0

UMovieSceneAudioSection * __thiscall
UMovieSceneAudioSection::UMovieSceneAudioSection
          (UMovieSceneAudioSection *this,FObjectInitializer *param_1)

{
  float fVar1;
  int iVar2;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneScalingDriver__;
  (this->StartFrameOffset).Value = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->SoundVolume);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->PitchMultiplier);
  *(undefined8 *)&this->Inputs_Float = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Float).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Float).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_String = 0;
  *(undefined8 *)&(this->Inputs_String).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_String).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_String).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_String).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_String).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_String).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_String).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_String).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_Bool = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Bool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Bool).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_Int = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Int).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Int).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x48 = 0;
  *(undefined8 *)&this->Inputs_Trigger = 0;
  *(undefined8 *)&(this->Inputs_Trigger).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Trigger).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Trigger).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Trigger).field_0x48 = 0;
  FMovieSceneActorReferenceData::FMovieSceneActorReferenceData(&this->AttachActorData);
  fVar1 = AudioDeprecatedMagicNumber;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  *(undefined8 *)&this->OnQueueSubtitles = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x8 = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x10 = 0;
  this->StartOffset_DEPRECATED = fVar1;
  this->AudioStartTime_DEPRECATED = fVar1;
  this->AudioDilationFactor_DEPRECATED = fVar1;
  this->AudioVolume_DEPRECATED = fVar1;
  *(undefined8 *)&this->OnAudioFinished = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioPlaybackPercent = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x10 = 0;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  this->bLooping = true;
  this->bSuppressSubtitles = false;
  this->bOverrideAttenuation = false;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  local_18 = FSequencerObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = (5 < iVar2) + '\x01';
  (this->SoundVolume).bHasDefaultValue = true;
  (this->SoundVolume).DefaultValue = 1.0;
  (this->PitchMultiplier).bHasDefaultValue = true;
  (this->PitchMultiplier).DefaultValue = 1.0;
  return this;
}

// ~UMovieSceneAudioSection @ 146621a30

void __thiscall UMovieSceneAudioSection::~UMovieSceneAudioSection(UMovieSceneAudioSection *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneScalingDriver__;
  pvVar1 = *(void **)&(this->OnAudioPlaybackPercent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioPlaybackPercent);
  pvVar1 = *(void **)&(this->OnAudioFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioFinished);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueueSubtitles);
  FMovieSceneActorReferenceData::~FMovieSceneActorReferenceData(&this->AttachActorData);
  *(undefined4 *)&(this->Inputs_Trigger).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs_Trigger).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneAudioTriggerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_Trigger);
  *(undefined4 *)&(this->Inputs_Int).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs_Int).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneIntegerChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_Int);
  *(undefined4 *)&(this->Inputs_Bool).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs_Bool).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneBoolChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_Bool);
  *(undefined4 *)&(this->Inputs_String).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs_String).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneStringChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_String);
  *(undefined4 *)&(this->Inputs_Float).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs_Float).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieSceneFloatChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_Float);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->PitchMultiplier);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->SoundVolume);
  this->_padding_ = (longlong)&___7IMovieSceneScalingDriver__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// CacheChannelProxy @ 1466411d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UMovieSceneAudioSection::CacheChannelProxy(UMovieSceneAudioSection *this)

{
  int *piVar1;
  int iVar2;
  UMovieSceneTrack *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneChannelProxyType EVar7;
  UClass *pUVar8;
  UMovieScene *pUVar9;
  undefined ***pppuVar10;
  ForElementType<FMovieSceneChannelEntry> FVar11;
  longlong *plVar12;
  longlong *plVar13;
  UMovieScene *pUVar14;
  undefined1 auStack_258 [32];
  longlong *local_238;
  FSharedReferencer<1> local_230;
  code *local_228;
  undefined **local_218;
  FMovieSceneChannelProxyData *local_210;
  undefined ***local_200;
  code *local_1f8;
  undefined **local_1e8;
  FMovieSceneChannelProxyData *local_1e0;
  undefined ***local_1d0;
  code *local_1c8;
  undefined **local_1b8;
  FMovieSceneChannelProxyData *local_1b0;
  undefined ***local_1a0;
  code *local_198;
  undefined **local_188;
  FMovieSceneChannelProxyData *local_180;
  undefined ***local_170;
  code *local_168;
  undefined **local_158;
  FMovieSceneChannelProxyData *local_150;
  undefined ***local_140;
  code *local_138 [2];
  FFunctionStorage local_128;
  code *local_108 [2];
  FFunctionStorage local_f8;
  code *local_d8 [2];
  FFunctionStorage local_c8;
  code *local_a8 [2];
  FFunctionStorage local_98;
  code *local_78 [2];
  FFunctionStorage local_68;
  FMovieSceneChannelProxyData local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_258;
  pUVar3 = (UMovieSceneTrack *)this->_padding_;
  pUVar14 = (UMovieScene *)0x0;
  local_48.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_48.Entries.ArrayNum = 0;
  local_48.Entries.ArrayMax = 1;
  if (pUVar3 == (UMovieSceneTrack *)0x0) {
LAB_1466412d3:
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_48,&this->SoundVolume);
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_48,&this->PitchMultiplier);
  }
  else {
    pUVar8 = Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) goto LAB_1466412d3;
    pUVar9 = (UMovieScene *)pUVar3->_padding_;
    if (pUVar9 == (UMovieScene *)0x0) {
LAB_146641281:
      pUVar9 = pUVar14;
    }
    else {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) goto LAB_146641281;
    }
    if ((pUVar9 == (UMovieScene *)0x0) ||
       (bVar6 = UMovieScene::ContainsTrack(pUVar9,pUVar3), !bVar6)) goto LAB_1466412d3;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_48,&this->SoundVolume);
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_48,&this->PitchMultiplier);
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneActorReferenceData>
              (&local_48,&this->AttachActorData);
  }
  SetupSoundInputParameters(this,(this->Sound).field0_0x0.DebugPtr);
  local_200 = (undefined ***)0x0;
  local_218 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddInputChannels_UFMovieSceneFloatChannel__M_MovieSceneAudioSectionPrivate__YAXPEAVUMovieSceneAudioSection__AEAUFMovieSceneChannelProxyData___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_210 = &local_48;
  local_128.HeapAllocation = (void *)0x0;
  local_228 = UE::Core::Private::Function::
              TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneFloatChannel,float>'::__l2::<lambda_1>,void,FName,FMovieSceneFloatChannel_const_&>
              ::Call;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneFloatChannel,float>'::__l2::<lambda_1>,void,FName,FMovieSceneFloatChannel_const_&>
                 ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneFloatChannel,float>'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_218,&local_128);
  ForEachInternal<FMovieSceneFloatChannel,TFunction<void___cdecl(FName,FMovieSceneFloatChannel_const_&)>_>
            ((TFunction<void___cdecl(FName,FMovieSceneFloatChannel_const_&)> *)local_138,
             &this->Inputs_Float);
  if (local_228 != (code *)0x0) {
    pppuVar10 = &local_218;
    if (local_200 != (undefined ***)0x0) {
      pppuVar10 = local_200;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_1d0 = (undefined ***)0x0;
  local_1e8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddInputChannels_UFMovieSceneBoolChannel___N_MovieSceneAudioSectionPrivate__YAXPEAVUMovieSceneAudioSection__AEAUFMovieSceneChannelProxyData___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1e0 = &local_48;
  local_f8.HeapAllocation = (void *)0x0;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneBoolChannel,bool>'::__l2::<lambda_1>,void,FName,FMovieSceneBoolChannel_const_&>
              ::Call;
  local_108[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneBoolChannel,bool>'::__l2::<lambda_1>,void,FName,FMovieSceneBoolChannel_const_&>
                 ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneBoolChannel,bool>'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_1e8,&local_f8);
  ForEachInternal<FMovieSceneBoolChannel,TFunction<void___cdecl(FName,FMovieSceneBoolChannel_const_&)>_>
            ((TFunction<void___cdecl(FName,FMovieSceneBoolChannel_const_&)> *)local_108,
             &this->Inputs_Bool);
  if (local_1f8 != (code *)0x0) {
    pppuVar10 = &local_1e8;
    if (local_1d0 != (undefined ***)0x0) {
      pppuVar10 = local_1d0;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_1a0 = (undefined ***)0x0;
  local_1b8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddInputChannels_UFMovieSceneIntegerChannel__H_MovieSceneAudioSectionPrivate__YAXPEAVUMovieSceneAudioSection__AEAUFMovieSceneChannelProxyData___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1b0 = &local_48;
  local_c8.HeapAllocation = (void *)0x0;
  local_1c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneIntegerChannel,int>'::__l2::<lambda_1>,void,FName,FMovieSceneIntegerChannel_const_&>
              ::Call;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneIntegerChannel,int>'::__l2::<lambda_1>,void,FName,FMovieSceneIntegerChannel_const_&>
                ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneIntegerChannel,int>'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_1b8,&local_c8);
  ForEachInternal<FMovieSceneIntegerChannel,TFunction<void___cdecl(FName,FMovieSceneIntegerChannel_const_&)>_>
            ((TFunction<void___cdecl(FName,FMovieSceneIntegerChannel_const_&)> *)local_d8,
             &this->Inputs_Int);
  if (local_1c8 != (code *)0x0) {
    pppuVar10 = &local_1b8;
    if (local_1a0 != (undefined ***)0x0) {
      pppuVar10 = local_1a0;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_170 = (undefined ***)0x0;
  local_188 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddInputChannels_UFMovieSceneStringChannel__VFString___MovieSceneAudioSectionPrivate__YAXPEAVUMovieSceneAudioSection__AEAUFMovieSceneChannelProxyData___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_180 = &local_48;
  local_98.HeapAllocation = (void *)0x0;
  local_198 = UE::Core::Private::Function::
              TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneStringChannel,FString>'::__l2::<lambda_1>,void,FName,FMovieSceneStringChannel_const_&>
              ::Call;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneStringChannel,FString>'::__l2::<lambda_1>,void,FName,FMovieSceneStringChannel_const_&>
                ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneStringChannel,FString>'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_188,&local_98);
  ForEachInternal<FMovieSceneStringChannel,TFunction<void___cdecl(FName,FMovieSceneStringChannel_const_&)>_>
            ((TFunction<void___cdecl(FName,FMovieSceneStringChannel_const_&)> *)local_a8,
             &this->Inputs_String);
  if (local_198 != (code *)0x0) {
    pppuVar10 = &local_188;
    if (local_170 != (undefined ***)0x0) {
      pppuVar10 = local_170;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_140 = (undefined ***)0x0;
  local_158 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddInputChannels_UFMovieSceneAudioTriggerChannel___N_MovieSceneAudioSectionPrivate__YAXPEAVUMovieSceneAudioSection__AEAUFMovieSceneChannelProxyData___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_150 = &local_48;
  local_68.HeapAllocation = (void *)0x0;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneAudioTriggerChannel,bool>'::__l2::<lambda_1>,void,FName,FMovieSceneAudioTriggerChannel_const_&>
              ::Call;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneAudioTriggerChannel,bool>'::__l2::<lambda_1>,void,FName,FMovieSceneAudioTriggerChannel_const_&>
                ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`MovieSceneAudioSectionPrivate::AddInputChannels<FMovieSceneAudioTriggerChannel,bool>'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_158,&local_68);
  ForEachInternal<FMovieSceneAudioTriggerChannel,TFunction<void___cdecl(FName,FMovieSceneAudioTriggerChannel_const_&)>_>
            ((TFunction<void___cdecl(FName,FMovieSceneAudioTriggerChannel_const_&)> *)local_78,
             &this->Inputs_Trigger);
  if (local_168 != (code *)0x0) {
    pppuVar10 = &local_158;
    if (local_140 != (undefined ***)0x0) {
      pppuVar10 = local_140;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  pUVar9 = ::operator_new(0x68);
  if (pUVar9 == (UMovieScene *)0x0) {
    plVar13 = (longlong *)&DAT_00000010;
  }
  else {
    *(undefined4 *)&pUVar9->_padding_ = 1;
    *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = 1;
    pUVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pUVar9->_padding_ = 0;
    pUVar9->_padding_ = 0;
    pUVar9->_padding_ = 0;
    pUVar9->_padding_ = 0;
    pUVar9->_padding_ = 0;
    pUVar9->_padding_ = 2;
    pUVar9->_padding_ = 0;
    if (local_48.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(&pUVar9->_padding_,&local_48,0x18);
    }
    if ((void *)pUVar9->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pUVar9->_padding_);
    }
    plVar13 = &pUVar9->_padding_;
    pUVar9->_padding_ = (longlong)local_48.Entries.AllocatorInstance.SecondaryData;
    local_48.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pUVar9->_padding_ = local_48.Entries.ArrayNum;
    *(int *)((longlong)&pUVar9->_padding_ + 4) = local_48.Entries.ArrayMax;
    local_48.Entries.ArrayNum = 0;
    local_48.Entries.ArrayMax = 1;
    pUVar14 = pUVar9;
    if (plVar13 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      goto LAB_1466416a3;
    }
  }
  if (((*plVar13 == 0) || (plVar13[1] == 0)) || (*(int *)(plVar13[1] + 8) < 1)) {
    plVar12 = plVar13 + 1;
    if (pUVar14 != (UMovieScene *)0x0) {
      LOCK();
      *(int *)&pUVar14->_padding_ = (int)pUVar14->_padding_ + 1;
      UNLOCK();
    }
    *plVar13 = (longlong)plVar13;
    if (pUVar14 != (UMovieScene *)*plVar12) {
      if (pUVar14 != (UMovieScene *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pUVar14->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar4 = (longlong *)*plVar12;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *plVar12 = (longlong)pUVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar14);
  }
LAB_1466416a3:
  if (pUVar14 != (UMovieScene *)0x0) {
    LOCK();
    *(int *)&pUVar14->_padding_ = (int)pUVar14->_padding_ + 1;
    UNLOCK();
  }
  local_238 = plVar13;
  local_230.ReferenceController = (TReferenceControllerBase<1> *)pUVar14;
  if ((longlong **)&this->_padding_ != &local_238) {
    this->_padding_ = (longlong)plVar13;
    local_238 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_230);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar14);
  FVar11 = (ForElementType<FMovieSceneChannelEntry>)&local_48;
  if (local_48.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar11 = local_48.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar11,local_48.Entries.ArrayNum);
  if (local_48.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_48.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// GetAttachComponent @ 146688b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
UMovieSceneAudioSection::GetAttachComponent
          (UMovieSceneAudioSection *this,AActor *param_1,FMovieSceneActorReferenceKey *param_2)

{
  TObjectPtr<USceneComponent>_u_0 *pTVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  USceneComponent *pUVar11;
  TObjectPtr<USceneComponent>_u_0 *pTVar12;
  <lambda_1> <Var13;
  TObjectPtr<USceneComponent>_u_0 *pTVar14;
  UClass *pUVar15;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [8];
  UClass *local_1f0;
  TObjectPtr<USceneComponent>_u_0 local_1e8 [24];
  TObjectPtr<USceneComponent>_u_0 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [192];
  TObjectPtr<USceneComponent>_u_0 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  FVar3 = param_2->SocketName;
  FVar4 = param_2->ComponentName;
  if (FVar3 == (FName)0x0) {
    if (FVar4 != (FName)0x0) {
      pUVar9 = (UClass *)0x0;
      pUVar15 = (UClass *)0x0;
      local_4c = 0x18;
      local_58 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
      local_50 = 0;
      if (param_1 != (AActor *)0x0) {
        pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UClass *)0x0) goto LAB_146688d8f;
        }
        else {
          pUVar15 = pUVar9;
          if (pUVar7 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_146688d8f:
            pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
            pUVar15 = pUVar9;
            if (pUVar8 != (UClass *)0x0) {
              iVar2 = (int)pUVar8->_padding_;
              if (((int)pUVar7->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
                  &pUVar8->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                pUVar15 = pUVar7;
              }
            }
          }
        }
        pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_1f0 = pUVar7;
        if (pUVar15 == pUVar9) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1f0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_118);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1f0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_118);
        }
      }
      iVar2 = local_50;
      <Var13.OutComponents =
           (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *)
           local_118;
      if (local_58 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        <Var13.OutComponents =
             (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *)
             local_58;
      }
      pTVar14 = (TObjectPtr<USceneComponent>_u_0 *)
                ((longlong)<Var13.OutComponents + (longlong)local_50 * 8);
      while( true ) {
        if (local_50 != iVar2) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1f8);
        }
        pTVar12 = local_58;
        if ((TObjectPtr<USceneComponent>_u_0 *)<Var13.OutComponents == pTVar14) goto LAB_146688e7d;
        pUVar11 = *(USceneComponent **)<Var13.OutComponents;
        if ((FName)pUVar11->_padding_ == FVar4) break;
        <Var13.OutComponents = <Var13.OutComponents + 8;
      }
      goto LAB_146688cdb;
    }
  }
  else {
    if (FVar4 != (FName)0x0) {
      pUVar9 = (UClass *)0x0;
      pUVar15 = (UClass *)0x0;
      local_11c = 0x18;
      local_128 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
      local_120 = 0;
      if (param_1 != (AActor *)0x0) {
        pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UClass *)0x0) goto LAB_146688beb;
        }
        else {
          pUVar15 = pUVar9;
          if (pUVar7 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_146688beb:
            pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
            pUVar15 = pUVar9;
            if (pUVar8 != (UClass *)0x0) {
              iVar2 = (int)pUVar8->_padding_;
              if (((int)pUVar7->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
                  &pUVar8->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                pUVar15 = pUVar7;
              }
            }
          }
        }
        pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_1f0 = pUVar7;
        if (pUVar15 == pUVar9) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1f0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1e8);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (param_1,(TSubclassOf<UActorComponent>)&local_1f0,
                     (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1e8);
        }
      }
      iVar2 = local_120;
      pTVar14 = local_1e8;
      if (local_128 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        pTVar14 = local_128;
      }
      pTVar1 = pTVar14 + local_120;
      while( true ) {
        if (local_120 != iVar2) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1f8);
        }
        pTVar12 = local_128;
        if (pTVar14 == pTVar1) goto LAB_146688e7d;
        pUVar11 = pTVar14->DebugPtr;
        if (((FName)pUVar11->_padding_ == FVar4) &&
           (cVar6 = (**(code **)(pUVar11->_padding_ + 0x540))(pUVar11,FVar3), pTVar12 = local_128,
           cVar6 != '\0')) break;
        pTVar14 = pTVar14 + 1;
      }
LAB_146688cdb:
      if (pTVar12 == (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        return pUVar11;
      }
      FMemory::Free(pTVar12);
      return pUVar11;
    }
    pUVar11 = (param_1->RootComponent).field0_0x0.DebugPtr;
    cVar6 = (**(code **)(pUVar11->_padding_ + 0x540))(pUVar11,FVar3);
    if (cVar6 != '\0') goto LAB_146688d0e;
  }
  goto LAB_146688e87;
LAB_146688e7d:
  if (pTVar12 != (TObjectPtr<USceneComponent>_u_0 *)0x0) {
    FMemory::Free(pTVar12);
  }
LAB_146688e87:
  lVar10 = (**(code **)(param_1->_padding_ + 0x440))(param_1);
  if (lVar10 != 0) {
    pUVar11 = (USceneComponent *)(**(code **)(param_1->_padding_ + 0x440))(param_1);
    return pUVar11;
  }
LAB_146688d0e:
  return (param_1->RootComponent).field0_0x0.DebugPtr;
}

// GetAutoSizeRange @ 146688ec0

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneAudioSection::GetAutoSizeRange
          (UMovieSceneAudioSection *this,TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  code *pcVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  UObject *pUVar9;
  TOptional<TRange<FFrameNumber>_> *pTVar10;
  FFrameTime FVar11;
  int iVar12;
  FFrameNumber FVar13;
  float fVar14;
  float extraout_XMM0_Da;
  double dVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  double dVar17;
  float fVar18;
  float fStackX_1c;
  uint local_78;
  uint uStack_70;
  undefined4 local_68;
  undefined4 uStack_60;
  
  if ((this->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0) {
    local_78 = CONCAT31(local_78._1_3_,2);
    uStack_70 = CONCAT31(uStack_70._1_3_,2);
    TVar2.Value.Value = 0;
    TVar2._0_4_ = local_78;
    TVar3.Value.Value = 0;
    TVar3._0_4_ = uStack_70;
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).LowerBound = TVar2;
    (__return_storage_ptr__->TypedValue).UpperBound = TVar3;
    return __return_storage_ptr__;
  }
  pcVar8 = (char *)Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,(UClass *)pcVar8);
  dVar17 = (double)(int)*(undefined8 *)&pUVar9[7].field_0x20 /
           (double)(int)((ulonglong)*(undefined8 *)&pUVar9[7].field_0x20 >> 0x20);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar17;
  auVar16 = roundpd(in_XMM2,auVar16,1);
  dVar15 = auVar16._0_8_;
  dVar17 = dVar17 - dVar15;
  if (__real_41dfffffffc00000 <= dVar15) {
    dVar15 = __real_41dfffffffc00000;
  }
  if (dVar15 <= __real_c1e0000000000000) {
    dVar15 = __real_c1e0000000000000;
  }
  iVar7 = (int)dVar17;
  fVar18 = (float)dVar17 - (float)iVar7;
  if ((0.0 < fVar18) && (::FFrameTime::MaxSubframe <= fVar18)) {
    fVar18 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar18) {
    fVar18 = ::FFrameTime::MaxSubframe;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  iVar7 = (int)dVar15 + iVar7;
  cVar5 = (**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x318))();
  if ((cVar5 != '\0') &&
     (cVar5 = (**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 800))(), cVar5 == '\0'))
  {
    fVar14 = MovieSceneHelpers::GetSoundDuration((this->Sound).field0_0x0.DebugPtr);
    if (fVar14 == __real_461c4000) {
      pcVar8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneAudioSection.cpp"
      ;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundDuration != 10000.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneAudioSection.cpp"
                         ,0x176,L"");
      fVar14 = extraout_XMM0_Da;
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar1)();
        return pTVar10;
      }
    }
    else if (fVar14 <= 0.0) goto LAB_146689112;
    iVar7 = (this->StartFrameOffset).Value;
    bVar6 = true;
    FVar11 = ::operator*(fVar14,(FFrameRate)pcVar8);
    fStackX_1c = (float)((ulonglong)*(undefined8 *)FVar11 >> 0x20);
    auVar16 = roundps(auVar16,ZEXT416((uint)(fStackX_1c - 0.0)),1);
    fVar14 = (fStackX_1c - 0.0) - auVar16._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar14) {
      fVar14 = ::FFrameTime::MaxSubframe;
    }
    iVar12 = ((int)*(undefined8 *)FVar11 - iVar7) + (int)auVar16._0_4_;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if ((iVar12 < 2) && ((iVar12 != 1 || (fVar14 <= 0.0)))) {
      bVar6 = false;
    }
    fVar18 = 0.0;
    iVar7 = 1;
    if (bVar6) {
      fVar18 = fVar14;
      iVar7 = iVar12;
    }
  }
LAB_146689112:
  fVar18 = fVar18 + __real_3f000000;
  iVar12 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar5 = (char)this->_padding_;
  if (cVar5 != '\x01') {
    if ((cVar5 == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar1)();
      return pTVar10;
    }
    iVar12 = iVar12 + 1;
  }
  FVar13.Value = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar5 = (char)this->_padding_;
  if (cVar5 != '\x01') {
    if ((cVar5 == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar1)();
      return pTVar10;
    }
    FVar13.Value = FVar13.Value + 1;
  }
  local_68 = CONCAT31(local_68._1_3_,1);
  TVar4.Value.Value = FVar13.Value;
  TVar4._0_4_ = local_68;
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).LowerBound = TVar4;
  (__return_storage_ptr__->TypedValue).UpperBound =
       (TRangeBound<FFrameNumber>)
       (CONCAT44((int)fVar18 + iVar7 + iVar12,uStack_60) & 0xffffffffffffff00);
  return __return_storage_ptr__;
}

// GetOffsetTime @ 14668e540

TOptional<FFrameTime> * __thiscall
UMovieSceneAudioSection::GetOffsetTime
          (UMovieSceneAudioSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->StartFrameOffset).Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPlaybackSound @ 146691060

USoundBase * __thiscall UMovieSceneAudioSection::GetPlaybackSound(UMovieSceneAudioSection *this)

{
  int iVar1;
  USoundBase *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (this->Sound).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = (USoundBase *)
           UMovieSceneLanguagePreviewDecoration::FindLocalizedAsset
                     ((UObject *)pUVar2,(UMovieSceneSection *)this);
  if (pUVar2 == (USoundBase *)0x0) {
    pUVar2 = (USoundBase *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_USoundBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<USoundBase>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 146696330

UClass * __cdecl UMovieSceneAudioSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioSection",
               &Z_Registration_Info_UClass_UMovieSceneAudioSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioSection,0x6b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneAudioSection>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioSection.InnerSingleton;
}

// GetSourceObject @ 146697d90

UObject * __thiscall UMovieSceneAudioSection::GetSourceObject(UMovieSceneAudioSection *this)

{
  return (UObject *)(this->Sound).field0_0x0.DebugPtr;
}

// ImportEntityImpl @ 14669bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneAudioSection::ImportEntityImpl
          (UMovieSceneAudioSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TEnumAsByte<ERichCurveExtrapolation> *this_00;
  undefined1 *puVar1;
  undefined1 uVar2;
  TComponentTypeID<FMovieSceneAudioComponentData> TVar3;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> TVar4;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> TVar5;
  TComponentTypeID<FMovieSceneAudioInputData> TVar6;
  TComponentTypeID<FName> TVar7;
  undefined8 uVar8;
  code *pcVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FMovieSceneFloatChannel *pFVar17;
  UMovieSceneAudioSection *pUVar18;
  longlong *this_01;
  bool bVar19;
  uint uVar20;
  FBuiltInComponentTypes *pFVar21;
  FMovieSceneTracksComponentTypes *pFVar22;
  undefined8 *puVar23;
  TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional>
  *this_02;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>_>
  *pTVar24;
  char cVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  UObject *pUVar29;
  uint uVar30;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined1 auStackY_488 [32];
  FIdentityFunctor local_458 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_450;
  undefined **local_440;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_438;
  FMovieSceneFloatChannel *local_430;
  undefined1 local_428;
  undefined1 local_420;
  FGuid local_418;
  TArray<FName,TSizedDefaultAllocator<32>_> local_408;
  ushort local_3f8;
  bool bStack_3f6;
  undefined1 uStack_3f5;
  ushort local_3f0;
  bool bStack_3ee;
  undefined1 uStack_3ed;
  UMovieSceneAudioSection *local_3e8;
  UObject *local_3e0;
  undefined8 local_3d8;
  uint uStack_3d0;
  uint uStack_3cc;
  longlong *local_3c8;
  undefined8 local_3c0;
  uint uStack_3b8;
  uint uStack_3b4;
  TObjectPtr<UMovieSceneAudioSection>_u_0 local_3b0 [2];
  undefined4 local_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  undefined4 local_388;
  uint uStack_384;
  uint uStack_380;
  uint uStack_37c;
  undefined **local_370 [3];
  char local_354;
  undefined4 local_350;
  undefined2 local_348;
  UObject *local_340;
  char local_338;
  TComponentTypeID<FName> local_330;
  undefined8 local_32c;
  undefined1 local_320;
  undefined **local_318;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_310;
  FMovieSceneStringChannel *local_308;
  undefined1 local_300;
  undefined1 local_2f8;
  undefined **local_2f0;
  TComponentTypeID<UE::MovieScene::FSourceBoolChannel> local_2e8;
  FMovieSceneBoolChannel *local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d0;
  undefined **local_2c8;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_2c0;
  FMovieSceneIntegerChannel *local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8;
  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_> local_2a0;
  undefined **local_278;
  undefined4 local_270;
  FScriptContainerElement *local_26c;
  int iStack_264;
  int iStack_260;
  undefined1 local_25c;
  undefined4 local_258;
  TComponentTypeID<FMovieSceneAudioComponentData> local_250;
  uint *local_248;
  undefined1 local_240;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_238;
  longlong *local_230;
  undefined1 local_228;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_220;
  longlong *local_218;
  undefined1 local_210;
  undefined1 local_208;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  TComponentTypeID<FGuid> local_1f0;
  bool bStack_1ee;
  undefined1 uStack_1ed;
  undefined **local_1d8;
  undefined4 local_1d0;
  FName *local_1cc;
  int iStack_1c4;
  int iStack_1c0;
  undefined1 local_1bc;
  undefined4 local_1b8;
  TComponentTypeID<FMovieSceneAudioComponentData> local_1b0;
  UObject *local_1a8;
  undefined1 local_1a0;
  TComponentTypeID<FMovieSceneAudioInputData> local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint local_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint local_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined1 local_134;
  undefined1 local_130;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional> local_128;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>_>
  local_100;
  undefined8 local_b8 [2];
  FNameEntryId local_a8;
  uint uStack_a4;
  FNameEntryId FStack_a0;
  uint uStack_9c;
  FNameEntryId local_98;
  uint uStack_94;
  FNameEntryId FStack_90;
  uint uStack_8c;
  FNameEntryId local_88;
  uint uStack_84;
  FNameEntryId FStack_80;
  uint uStack_7c;
  FNameEntryId local_78;
  uint uStack_74;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  ulonglong local_58;
  ulonglong uVar31;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_488;
  pUVar29 = (UObject *)&this[-1].AttachActorData.DefaultValue.Object.Guid.C;
  if (this->_padding_ != 0) {
    local_3e8 = this;
    local_3e0 = pUVar29;
    local_3d8 = param_3;
    pFVar21 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar22 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_3c0 = pFVar22;
    UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_418);
    uVar30 = param_2->EntityID & 0xffffff;
    uVar31 = (ulonglong)uVar30;
    cVar25 = (char)(param_2->EntityID >> 0x18);
    if (cVar25 == '\0') {
      local_408.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44(local_418.B,local_418.A);
      local_408.ArrayMax = local_418.D;
      local_408.ArrayNum = local_418.C;
      local_388._2_1_ =
           ((local_418.C != 0 || local_418.B != 0) || local_418.A != 0) || local_418.D != 0;
      local_388._0_2_ = pFVar21->GenericObjectBinding;
      bStack_3f6 = ((local_418.C == 0 && local_418.B == 0) && local_418.A == 0) && local_418.D == 0;
      local_3f8 = (pFVar21->Tags).Root.Value;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar29);
      }
      TVar3 = pFVar22->Audio;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar29 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar29);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
        }
      }
      TVar4 = pFVar21->FloatChannel[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar29);
      }
      TVar5 = pFVar21->FloatChannel[1];
      pFVar17 = &local_3e8->SoundVolume;
      local_270 = local_388;
      local_25c = 1;
      local_258 = _local_3f8;
      local_240 = 1;
      local_26c = local_408.AllocatorInstance.Data;
      iStack_264 = local_408.ArrayNum;
      iStack_260 = local_408.ArrayMax;
      local_250 = TVar3;
      local_248 = (uint *)pUVar29;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar29);
      }
      local_278 = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_23_U__TAdd_UFMovieSceneAudioComponentData___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23_U623__MovieScene_UE__6B_
      ;
      local_228 = 1;
      local_210 = 1;
      local_208 = 0;
      local_238 = TVar4;
      local_230 = &this->_padding_;
      local_220 = TVar5;
      local_218 = &pFVar17->_padding_;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                (local_3d8,
                 (TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                  *)&local_278);
    }
    else {
      if (cVar25 == '\x01') {
        local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_450.ArrayMax = 0;
        puVar23 = local_b8;
        local_450.ArrayNum = 0;
        lVar26 = 9;
        do {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        local_3c8 = &(this->PitchMultiplier)._padding_;
        uVar28 = uVar30 * 7;
        iVar32 = (int)(this->PitchMultiplier)._padding_ -
                 *(int *)((longlong)&(this->PitchMultiplier)._padding_ + 4);
        FStack_70.ComparisonIndex.Value = 0;
        FStack_70.Number = 0;
        local_68.ComparisonIndex.Value = 0;
        local_68.Number = 0;
        FStack_60.ComparisonIndex.Value = 0;
        FStack_60.Number = 0;
        if ((int)uVar28 < iVar32) {
          iVar32 = iVar32 + uVar30 * -7;
          TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      *)local_3c8,&local_450);
          if (7 < iVar32) {
            iVar32 = 7;
          }
          lVar26 = (longlong)iVar32;
          param_3 = local_3d8;
          if (0 < iVar32) {
            uVar33 = (ulonglong)uVar28;
            lVar34 = uVar33 * 8;
            do {
              uVar20 = 0;
              if ((int)uVar28 < local_450.ArrayNum) {
                uVar20 = ~uVar28 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar28 = uVar28 + 1;
              *(undefined8 *)((longlong)&(&local_a8)[uVar33 * -2].Value + lVar34) =
                   *(undefined8 *)(local_450.AllocatorInstance.Data + lVar34);
              lVar34 = lVar34 + 8;
              lVar26 = lVar26 + -1;
              pUVar29 = local_3e0;
              param_3 = local_3d8;
            } while (lVar26 != 0);
          }
        }
        pUVar18 = local_3e8;
        this_00 = &(local_3e8->PitchMultiplier).PreInfinityExtrap;
        local_3e0 = (UObject *)this_00;
        if ((int)uVar30 <
            *(int *)&(local_3e8->PitchMultiplier).Times.AllocatorInstance.Data -
            *(int *)&(local_3e8->PitchMultiplier).KeyHandles.field_0x4) {
          local_450.ArrayNum = 0;
          if ((local_450.ArrayMax < 0) && (local_450.ArrayMax != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&local_450.AllocatorInstance,0,&local_450.ArrayMax);
          }
          TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
                      *)this_00,&local_450);
          if ((local_450.ArrayNum <= (int)uVar30) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FStack_70 = *(FName *)(local_450.AllocatorInstance.Data + uVar31 * 8);
        }
        puVar1 = &(pUVar18->PitchMultiplier).KeyHandles.field_0x20;
        local_3e8 = (UMovieSceneAudioSection *)puVar1;
        if ((int)uVar30 <
            *(int *)&(pUVar18->PitchMultiplier).KeyHandles.field_0x28 -
            *(int *)&(pUVar18->PitchMultiplier).KeyHandles.field_0x54) {
          local_450.ArrayNum = 0;
          if ((local_450.ArrayMax < 0) && (local_450.ArrayMax != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&local_450.AllocatorInstance,0,&local_450.ArrayMax);
          }
          TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
                      *)puVar1,&local_450);
          if ((local_450.ArrayNum <= (int)uVar30) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_68 = *(FName *)(local_450.AllocatorInstance.Data + uVar31 * 8);
        }
        puVar1 = &(pUVar18->PitchMultiplier).KeyHandles.field_0x70;
        if ((int)uVar30 <
            *(int *)&(pUVar18->PitchMultiplier).KeyHandles.field_0x78 -
            *(int *)&(pUVar18->Inputs_Float).field_0x14) {
          local_450.ArrayNum = 0;
          if ((local_450.ArrayMax < 0) && (local_450.ArrayMax != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&local_450.AllocatorInstance,0,&local_450.ArrayMax);
          }
          TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
                      *)puVar1,&local_450);
          if ((local_450.ArrayNum <= (int)uVar30) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FStack_60 = *(FName *)(local_450.AllocatorInstance.Data + uVar31 * 8);
        }
        local_408.AllocatorInstance.Data =
             (FScriptContainerElement *)CONCAT44(local_418.B,local_418.A);
        local_408.ArrayMax = local_418.D;
        local_408.ArrayNum = local_418.C;
        bStack_1ee = ((local_418.C != 0 || local_418.B != 0) || local_418.A != 0) ||
                     local_418.D != 0;
        local_1f0 = pFVar21->GenericObjectBinding;
        bStack_3ee = ((local_418.C == 0 && local_418.B == 0) && local_418.A == 0) &&
                     local_418.D == 0;
        local_3f0 = (pFVar21->Tags).Root.Value;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
        }
        pFVar22 = local_3c0;
        TVar3 = local_3c0->Audio;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar29 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar29);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar29);
          }
        }
        TVar6 = pFVar22->AudioInputs;
        local_1d0 = _local_1f0;
        local_1bc = 1;
        local_1b8 = _local_3f0;
        local_1a0 = 1;
        local_3b0[0]._4_4_ = local_b8[0]._4_4_;
        local_3b0[0]._0_4_ = (undefined4)local_b8[0];
        local_3b0[1]._0_4_ = (undefined4)local_b8[1];
        local_3b0[1]._4_4_ = local_b8[1]._4_4_;
        local_1cc = (FName *)local_408.AllocatorInstance.Data;
        iStack_1c4 = local_408.ArrayNum;
        iStack_1c0 = local_408.ArrayMax;
        local_3c0 = (FMovieSceneTracksComponentTypes *)CONCAT44(uStack_a4,local_a8.Value);
        uStack_3b8 = FStack_a0.Value;
        uStack_3b4 = uStack_9c;
        local_3d8 = (FImportedEntity *)CONCAT44(uStack_94,local_98.Value);
        uStack_3d0 = FStack_90.Value;
        uStack_3cc = uStack_8c;
        local_200 = local_88.Value;
        uStack_1fc = uStack_84;
        uStack_1f8 = FStack_80.Value;
        uStack_1f4 = uStack_7c;
        local_3a0 = local_78.Value;
        uStack_39c = uStack_74;
        uStack_398 = FStack_70.ComparisonIndex.Value;
        uStack_394 = FStack_70.Number;
        local_388 = local_68.ComparisonIndex.Value;
        uStack_384 = local_68.Number;
        uStack_380 = FStack_60.ComparisonIndex.Value;
        uStack_37c = FStack_60.Number;
        local_184 = local_a8.Value;
        uStack_180 = uStack_a4;
        local_174 = local_98.Value;
        uStack_170 = uStack_94;
        local_1b0 = TVar3;
        local_1a8 = pUVar29;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
          local_b8[0]._0_4_ = local_3b0[0]._0_4_;
          local_b8[0]._4_4_ = local_3b0[0]._4_4_;
          local_184 = (uint)local_3c0;
          uStack_180 = local_3c0._4_4_;
          local_174 = (uint)local_3d8;
          uStack_170 = local_3d8._4_4_;
        }
        local_1d8 = &
                    ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_23_U__TAdd_UFMovieSceneAudioComponentData___23_U__TAdd_UFMovieSceneAudioInputData___23__MovieScene_UE__6B_
        ;
        local_134 = 1;
        local_130 = 0;
        local_198 = TVar6;
        local_194 = (undefined4)local_b8[0];
        uStack_190 = local_b8[0]._4_4_;
        uStack_18c = local_3b0[1]._0_4_;
        uStack_188 = local_3b0[1]._4_4_;
        uStack_17c = uStack_3b8;
        uStack_178 = uStack_3b4;
        uStack_16c = uStack_3d0;
        uStack_168 = uStack_3cc;
        local_164 = local_200;
        uStack_160 = uStack_1fc;
        uStack_15c = uStack_1f8;
        uStack_158 = uStack_1f4;
        local_154 = local_3a0;
        uStack_150 = uStack_39c;
        uStack_14c = uStack_398;
        uStack_148 = uStack_394;
        local_144 = local_388;
        uStack_140 = uStack_384;
        uStack_13c = uStack_380;
        uStack_138 = uStack_37c;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FMovieSceneAudioInputData>_>
                            *)&local_1d8);
        this_01 = local_3c8;
        FVar10.Number = uStack_a4;
        FVar10.ComparisonIndex.Value = local_a8.Value;
        if (FVar10 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)local_3c8,FVar10);
          local_438 = pFVar21->FloatChannel[2];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        FVar11.Number = uStack_9c;
        FVar11.ComparisonIndex.Value = FStack_a0.Value;
        if (FVar11 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)this_01,FVar11);
          local_438 = pFVar21->FloatChannel[3];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        FVar12.Number = uStack_94;
        FVar12.ComparisonIndex.Value = local_98.Value;
        if (FVar12 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)this_01,FVar12);
          local_438 = pFVar21->FloatChannel[4];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        FVar13.Number = uStack_8c;
        FVar13.ComparisonIndex.Value = FStack_90.Value;
        if (FVar13 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)this_01,FVar13);
          local_438 = pFVar21->FloatChannel[5];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        FVar14.Number = uStack_84;
        FVar14.ComparisonIndex.Value = local_88.Value;
        if (FVar14 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)this_01,FVar14);
          local_438 = pFVar21->FloatChannel[6];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        FVar15.Number = uStack_7c;
        FVar15.ComparisonIndex.Value = FStack_80.Value;
        if (FVar15 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)this_01,FVar15);
          local_438 = pFVar21->FloatChannel[7];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        FVar16.Number = uStack_74;
        FVar16.ComparisonIndex.Value = local_78.Value;
        if (FVar16 != (FName)0x0) {
          local_430 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                                     *)this_01,FVar16);
          local_438 = pFVar21->FloatChannel[8];
          local_428 = 1;
          local_420 = 0;
          local_440 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                              *)&local_440);
        }
        if (FStack_70 != (FName)0x0) {
          local_308 = TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
                                     *)local_3e0,FStack_70);
          local_310 = pFVar21->StringChannel;
          local_300 = 1;
          local_2f8 = 0;
          local_318 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceStringChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_>
                              *)&local_318);
        }
        if (local_68 != (FName)0x0) {
          local_2e0 = TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
                                     *)local_3e8,local_68);
          local_2e8 = pFVar21->BoolChannel;
          local_2d8 = 1;
          local_2d0 = 0;
          local_2f0 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>_>
                              *)&local_2f0);
        }
        FVar27.Data = local_450.AllocatorInstance.Data;
        if (FStack_60 != (FName)0x0) {
          local_2b8 = TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
                      ::FindChecked((TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
                                     *)puVar1,FStack_60);
          local_2c0 = pFVar21->IntegerChannel;
          local_2b0 = 1;
          local_2a8 = 0;
          local_2c8 = &
                      ___7__TEntityBuilder_U__TAdd_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
          ;
          UE::MovieScene::FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>_>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>_>
                              *)&local_2c8);
          FVar27.Data = local_450.AllocatorInstance.Data;
        }
      }
      else {
        if (cVar25 != '\x02') {
          return;
        }
        local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.ArrayNum = 0;
        local_408.ArrayMax = 0;
        TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
        ::GetKeys<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
                    *)&(this->Inputs_Float).field_0x30,&local_408);
        AlgoImpl::
        IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
                  ((FName *)local_408.AllocatorInstance.Data,local_408.ArrayNum,local_458[0],
                   (FNameLexicalLess *)local_458);
        local_3a0 = CONCAT22(CONCAT11(local_3a0._3_1_,
                                      ((local_418.C != 0 || local_418.B != 0) || local_418.A != 0)
                                      || local_418.D != 0),pFVar21->GenericObjectBinding);
        local_2a0.Payload._0_4_ = local_3a0;
        local_2a0.Payload._20_1_ = 1;
        local_2a0._padding_ =
             (longlong)
             &___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE___MovieScene_UE__6B_;
        local_2a0.bAddMutualComponents = false;
        this_02 = (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional>
                   *)UE::MovieScene::
                     TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                     ::AddTagConditional(&local_2a0,&local_128,
                                         (FComponentTypeID)(pFVar21->Tags).Root.Value,
                                         ((local_418.C == 0 && local_418.B == 0) && local_418.A == 0
                                         ) && local_418.D == 0);
        local_3b0[0] = (TObjectPtr<UMovieSceneAudioSection>_u_0)pUVar29;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar29);
        }
        pFVar22 = local_3c0;
        pTVar24 = UE::MovieScene::
                  TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional>
                  ::Add<FMovieSceneAudioComponentData,FMovieSceneAudioComponentData>
                            (this_02,&local_100,local_3c0->Audio,
                             (FMovieSceneAudioComponentData *)&local_3b0[0].ObjectPtr);
        if ((local_408.ArrayNum <= (int)uVar30) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TVar7 = pFVar22->AudioTriggerName;
        uVar8 = *(undefined8 *)(local_408.AllocatorInstance.Data + uVar31 * 8);
        iVar32 = (int)uVar8;
        if ((iVar32 == -1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_370[1]._0_4_ = *(undefined4 *)&pTVar24->field_0x8;
        uVar2 = pTVar24->field_0x40;
        local_354 = pTVar24->field_0x1c;
        if (local_354 != '\0') {
          local_370._12_8_ = *(undefined8 *)&pTVar24->field_0xc;
          unique0x10000c74 = *(undefined8 *)&pTVar24->field_0x14;
        }
        local_350 = *(undefined4 *)&pTVar24->field_0x20;
        local_348 = *(undefined2 *)&pTVar24->field_0x28;
        local_338 = pTVar24->field_0x38;
        if (((local_338 != '\0') &&
            (local_340 = *(UObject **)&pTVar24->field_0x30,
            UE::GC::GIsIncrementalReachabilityPending != false)) && (local_340 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_340);
        }
        local_32c = 0xffffffff;
        if (iVar32 != -1) {
          local_32c = uVar8;
        }
        local_370[0] = &
                       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAddConditional_23_U__TAdd_UFMovieSceneAudioComponentData___23_U__TAdd_VFName___23__MovieScene_UE__6B_
        ;
        local_330 = TVar7;
        local_320 = uVar2;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAddConditional,UE::MovieScene::TAdd<FMovieSceneAudioComponentData>,UE::MovieScene::TAdd<FName>_>
                            *)local_370);
        FVar27.Data = local_408.AllocatorInstance.Data;
      }
      if ((FName *)FVar27.Data != (FName *)0x0) {
        FMemory::Free(FVar27.Data);
      }
    }
  }
  return;
}

// MigrateFrameTimes @ 1466a87a0

void __thiscall
UMovieSceneAudioSection::MigrateFrameTimes
          (UMovieSceneAudioSection *this,FFrameRate param_1,FFrameRate param_2)

{
  FFrameRate FVar1;
  FFrameTime FVar2;
  uint local_res8 [8];
  
  local_res8[0] = (this->StartFrameOffset).Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    FVar2 = ConvertFrameTime((FFrameTime)local_res8,FVar1,param_1);
    (this->StartFrameOffset).Value = *(int *)FVar2;
  }
  return;
}

// PopulateAnchors @ 1466aad20

void __thiscall
UMovieSceneAudioSection::PopulateAnchors
          (UMovieSceneAudioSection *this,
          TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
          *param_1)

{
  USoundBase *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UMovieSceneSectionAnchorsDecoration *pUVar6;
  USoundBase *pUVar7;
  UClass *pUVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int local_res18;
  int local_res1c;
  FGuid *local_58;
  int *local_50;
  
  pUVar6 = UMovieSceneDecorationContainerObject::FindDecoration<UMovieSceneSectionAnchorsDecoration>
                     ((UMovieSceneDecorationContainerObject *)&this[-1].AttachActorData.DefaultValue
                     );
  if (((pUVar6 != (UMovieSceneSectionAnchorsDecoration *)0x0) &&
      (this[-1].AttachActorData.KeyHandles.field_0x78 != '\x02')) &&
     (this[-1].AttachActorData.KeyHandles.field_0x80 != '\x02')) {
    pUVar1 = (USoundBase *)this->_padding_;
    pUVar7 = GetPlaybackSound((UMovieSceneAudioSection *)&this[-1].AttachActorData.DefaultValue);
    if (((pUVar7 != (USoundBase *)0x0) && (pUVar1 != (USoundBase *)0x0)) && (pUVar1 != pUVar7)) {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      UObjectBaseUtility::GetTypedOuter
                ((UObjectBaseUtility *)&this[-1].AttachActorData.DefaultValue,pUVar8);
      fVar11 = MovieSceneHelpers::GetSoundDuration(pUVar1);
      fVar12 = MovieSceneHelpers::GetSoundDuration(pUVar7);
      uVar2 = *(undefined8 *)&this[-1].AttachActorData.KeyHandles.field_0x78;
      iVar10 = (int)((ulonglong)uVar2 >> 0x20);
      cVar4 = (char)uVar2;
      if (cVar4 != '\x01') {
        if ((cVar4 == '\x02') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar10 = iVar10 + 1;
      }
      uVar2 = *(undefined8 *)&this[-1].AttachActorData.KeyHandles.field_0x80;
      iVar9 = (int)((ulonglong)uVar2 >> 0x20);
      cVar4 = (char)uVar2;
      if (cVar4 == '\x01') {
        iVar9 = iVar9 + 1;
      }
      else if ((cVar4 == '\x02') &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res1c = -((int)ROUND(__real_bfe0000000000000 -
                                 (double)(iVar9 - iVar10) *
                                 ((double)(fVar12 / fVar11) + (double)(fVar12 / fVar11))) >> 1);
      local_58 = &pUVar6->StartAnchor;
      local_50 = &local_res18;
      local_res18 = iVar10;
      TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_&&>_>
                ((TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
                  *)param_1,
                 (TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_&&> *)&stack0x00000008,
                 (bool *)&local_58);
    }
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1466ab070

bool __thiscall
UMovieSceneAudioSection::PopulateEvaluationFieldImpl
          (UMovieSceneAudioSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  uint *puVar1;
  uchar uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FMovieSceneAudioTriggerChannel *pFVar11;
  int iVar12;
  TRangeBound<FFrameNumber> *pTVar13;
  TRange<FFrameNumber> *pTVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *this_00;
  FIdentityFunctor local_res8 [8];
  TRange<FFrameNumber> local_84;
  longlong local_70;
  UObject *local_68;
  TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *local_60;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  TRange<FFrameNumber> local_48;
  
  iVar7 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  puVar1 = &this[-1].AttachActorData.DefaultValue.Object.Guid.C;
  local_68 = (UObject *)puVar1;
  iVar8 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity(param_3,(UObject *)puVar1,0);
  FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar8,iVar7);
  iVar12 = ((int)(this->PitchMultiplier)._padding_ -
           *(int *)((longlong)&(this->PitchMultiplier)._padding_ + 4)) % 9;
  iVar8 = *(int *)&(this->PitchMultiplier).Times.AllocatorInstance.Data -
          *(int *)&(this->PitchMultiplier).KeyHandles.field_0x4;
  if (iVar8 < iVar12) {
    iVar8 = iVar12;
  }
  iVar12 = *(int *)&(this->PitchMultiplier).KeyHandles.field_0x28 -
           *(int *)&(this->PitchMultiplier).KeyHandles.field_0x54;
  if (iVar12 < iVar8) {
    iVar12 = iVar8;
  }
  iVar8 = *(int *)&(this->PitchMultiplier).KeyHandles.field_0x78 -
          *(int *)&(this->Inputs_Float).field_0x14;
  if (iVar8 < iVar12) {
    iVar8 = iVar12;
  }
  uVar15 = 0;
  if (0 < iVar8) {
    do {
      if ((0xfffffe < uVar15) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneAudioSection.cpp"
                             ,0x3d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar12 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                         (param_3,(UObject *)puVar1,uVar15 | 0x1000000);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar12,iVar7);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar8);
  }
  this_00 = (TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
             *)&(this->Inputs_Float).field_0x30;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_60 = this_00;
  TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>(this_00,&local_58);
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_58.AllocatorInstance.Data,local_58.ArrayNum,local_res8[0],
             (FNameLexicalLess *)local_res8);
  uVar15 = 0;
  if (0 < local_58.ArrayNum) {
    local_70 = 0;
    do {
      lVar17 = local_70;
      uVar9 = 0;
      if ((int)uVar15 < local_58.ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar11 = TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
                ::FindChecked(this_00,*(FName *)(local_58.AllocatorInstance.Data + lVar17));
      iVar8 = (pFVar11->Times).ArrayNum;
      pFVar3 = (pFVar11->Times).AllocatorInstance.Data;
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar12 = 0;
      if (0 < iVar8) {
        lVar16 = 0;
        do {
          if ((iVar12 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar2 = (param_1->LowerBound).Type.Value;
          local_84.LowerBound.Value.Value = *(int *)(pFVar3 + lVar16 * 4);
          local_84.LowerBound.Type.Value = '\x01';
          if (uVar2 == '\x02') {
LAB_1466ab2ff:
            uVar2 = (param_1->UpperBound).Type.Value;
            pTVar13 = &param_1->UpperBound;
            local_84.UpperBound.Type.Value = '\x01';
            local_84.UpperBound.Value.Value = local_84.LowerBound.Value.Value;
            if (uVar2 != '\x02') {
              iVar10 = (param_1->UpperBound).Value.Value;
              if (iVar10 <= local_84.LowerBound.Value.Value) {
                if (iVar10 < local_84.LowerBound.Value.Value) {
                  pTVar13 = &local_84.UpperBound;
                }
                if (uVar2 != '\x01') goto LAB_1466ab3df;
              }
              if ((pTVar13->Value).Value != (param_1->UpperBound).Value.Value) goto LAB_1466ab3df;
            }
            if ((iVar12 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            local_48.LowerBound.Type.Value = '\x01';
            local_48.LowerBound.Value.Value = *(int *)(pFVar3 + lVar16 * 4);
            local_48.UpperBound.Type.Value = '\x01';
            local_48.UpperBound.Value.Value = *(int *)(pFVar3 + lVar16 * 4);
            if ((0xfffffe < uVar15) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneAudioSection.cpp"
                                   ,0x3d,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar10 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                               (param_3,local_68,uVar15 | 0x2000000);
            FMovieSceneEntityComponentFieldBuilder::AddOneShotEntity(param_3,&local_48,iVar10,iVar7)
            ;
          }
          else {
            iVar10 = (param_1->LowerBound).Value.Value;
            pTVar14 = param_1;
            if (iVar10 < local_84.LowerBound.Value.Value) {
LAB_1466ab2f3:
              if ((pTVar14->LowerBound).Value.Value == (param_1->LowerBound).Value.Value)
              goto LAB_1466ab2ff;
            }
            else {
              if (local_84.LowerBound.Value.Value < iVar10) {
                pTVar14 = &local_84;
              }
              if (uVar2 == '\x01') goto LAB_1466ab2f3;
            }
          }
LAB_1466ab3df:
          iVar12 = iVar12 + 1;
          lVar16 = lVar16 + 1;
          lVar17 = local_70;
          this_00 = local_60;
        } while (iVar12 < iVar8);
      }
      local_70 = lVar17 + 8;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < local_58.ArrayNum);
  }
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return true;
}

// PopulateInitialAnchors @ 1466abef0

void __thiscall
UMovieSceneAudioSection::PopulateInitialAnchors
          (UMovieSceneAudioSection *this,
          TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
          *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UMovieSceneSectionAnchorsDecoration *pUVar6;
  int iVar7;
  int iStackX_1c;
  int local_res20;
  int local_res24;
  FGuid *local_28;
  int *local_20;
  
  pUVar6 = UMovieSceneDecorationContainerObject::FindDecoration<UMovieSceneSectionAnchorsDecoration>
                     ((UMovieSceneDecorationContainerObject *)&this[-1].AttachActorData.DefaultValue
                     );
  if (pUVar6 != (UMovieSceneSectionAnchorsDecoration *)0x0) {
    uVar1 = *(undefined8 *)&this[-1].AttachActorData.KeyHandles.field_0x78;
    if (((char)uVar1 != '\x02') && (this[-1].AttachActorData.KeyHandles.field_0x80 != '\x02')) {
      uVar5 = (uint)uVar1 & 0xff;
      iStackX_1c = (int)((ulonglong)uVar1 >> 0x20);
      if ((char)uVar1 == '\x01') {
        if ((uVar5 == 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        if ((uVar5 == 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iStackX_1c = iStackX_1c + 1;
      }
      uVar1 = *(undefined8 *)&this[-1].AttachActorData.KeyHandles.field_0x80;
      iVar7 = (int)((ulonglong)uVar1 >> 0x20);
      cVar4 = (char)uVar1;
      local_res20 = iStackX_1c;
      if (cVar4 == '\x01') {
        iVar7 = iVar7 + 1;
      }
      else if ((cVar4 == '\x02') &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28 = &pUVar6->StartAnchor;
      local_res24 = iVar7 - iStackX_1c;
      local_20 = &local_res20;
      TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_&&>_>
                ((TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
                  *)param_1,
                 (TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_&&> *)&stack0x00000008,
                 (bool *)&local_28);
    }
  }
  return;
}

// PostLoad @ 1466ad7d0

void __thiscall UMovieSceneAudioSection::PostLoad(UMovieSceneAudioSection *this)

{
  float fVar1;
  undefined8 uVar2;
  FFrameRate FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  FFrameRate FVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FFrameTime FVar12;
  int iVar13;
  double dVar14;
  float fVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res20 [8];
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  fVar15 = AudioDeprecatedMagicNumber;
  if (this->AudioDilationFactor_DEPRECATED != AudioDeprecatedMagicNumber) {
    (this->PitchMultiplier).DefaultValue = this->AudioDilationFactor_DEPRECATED;
    this->AudioDilationFactor_DEPRECATED = fVar15;
    (this->PitchMultiplier).bHasDefaultValue = true;
  }
  if (this->AudioVolume_DEPRECATED != fVar15) {
    (this->SoundVolume).DefaultValue = this->AudioVolume_DEPRECATED;
    this->AudioVolume_DEPRECATED = fVar15;
    (this->SoundVolume).bHasDefaultValue = true;
  }
  bVar8 = false;
  if (this->AudioStartTime_DEPRECATED == fVar15) {
    dVar19 = (double)CONCAT44(uStackX_c,local_res8);
  }
  else if ((this->AudioStartTime_DEPRECATED == 0.0) || ((char)this->_padding_ == '\x02')) {
    dVar19 = (double)CONCAT44(uStackX_c,local_res8);
    this->AudioStartTime_DEPRECATED = fVar15;
  }
  else {
    pUVar10 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
    uVar2 = *(undefined8 *)&pUVar11[7].field_0x20;
    iVar13 = (int)((ulonglong)this->_padding_ >> 0x20);
    cVar7 = (char)this->_padding_;
    if (cVar7 != '\x01') {
      if ((cVar7 == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = iVar13 + 1;
    }
    fVar15 = AudioDeprecatedMagicNumber;
    iVar9 = (int)((ulonglong)uVar2 >> 0x20);
    bVar8 = true;
    dVar19 = ((double)((longlong)iVar9 * (longlong)iVar13) + (double)iVar9 * 0.0) /
             (double)(int)uVar2 - (double)this->AudioStartTime_DEPRECATED;
    this->AudioStartTime_DEPRECATED = AudioDeprecatedMagicNumber;
  }
  fVar1 = this->StartOffset_DEPRECATED;
  if (fVar1 == fVar15) {
    GetLegacyConversionFrameRate();
    if (!bVar8) {
      return;
    }
  }
  else {
    this->StartOffset_DEPRECATED = fVar15;
    dVar19 = (double)fVar1;
    GetLegacyConversionFrameRate();
  }
  pUVar10 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  FVar3.Numerator = *(int *)&pUVar11[8].field_0x0;
  FVar3.Denominator = *(int *)&pUVar11[8].field_0x4;
  pUVar10 = Z_Construct_UClass_UMovieScene_NoRegister();
  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  dVar19 = ((double)FVar3.Numerator / (double)FVar3.Denominator) * dVar19;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar19;
  auVar18 = roundpd(in_XMM2,auVar18,1);
  dVar17 = auVar18._0_8_;
  dVar14 = dVar17;
  if (__real_41dfffffffc00000 <= dVar17) {
    dVar14 = __real_41dfffffffc00000;
  }
  fVar15 = (float)(dVar19 - dVar17);
  if (dVar14 <= __real_c1e0000000000000) {
    dVar14 = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar15) {
    fVar15 = ::FFrameTime::MaxSubframe;
  }
  auVar16 = ZEXT416((uint)fVar15);
  if (fVar15 <= 0.0) {
    auVar16 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar16._0_4_) {
    auVar16._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar16._0_4_ <= 0.0) {
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar16._4_12_;
    auVar16 = auVar5 << 0x20;
  }
  FVar6.Denominator = auVar16._0_4_;
  FVar6.Numerator = (int)dVar14;
  FVar12 = ConvertFrameTime((FFrameTime)local_res20,FVar6,FVar3);
  (this->StartFrameOffset).Value = *(int *)FVar12;
  return;
}

// SetSound @ 1466fb890

void __thiscall UMovieSceneAudioSection::SetSound(UMovieSceneAudioSection *this,USoundBase *param_1)

{
  char cVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Sound).field0_0x0.DebugPtr = param_1;
  cVar1 = (**(code **)(param_1->_padding_ + 800))(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x318))();
    this->bLooping = cVar1 == '\0';
  }
  UMovieSceneSection::InvalidateChannelProxy((UMovieSceneSection *)this);
  return;
}

// SetupSoundInputParameters @ 1466fb960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMovieSceneAudioSection::SetupSoundInputParameters
          (UMovieSceneAudioSection *this,USoundBase *param_1)

{
  TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
  *pTVar1;
  TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
  *pTVar2;
  TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
  *pTVar3;
  TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
  *pTVar4;
  ulonglong uVar5;
  EAudioParameterType EVar6;
  FName FVar7;
  code *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UMovieSceneAudioSection *pUVar12;
  longlong *plVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FMovieSceneStringChannel *pFVar17;
  FString *pFVar18;
  FMovieSceneFloatChannel *pFVar19;
  FMovieSceneIntegerChannel *pFVar20;
  FMovieSceneBoolChannel *pFVar21;
  byte bVar22;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  longlong lVar23;
  uint uVar24;
  FAudioParameter *pFVar25;
  TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *this_01;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  uint *puVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  FAudioParameter *pFVar30;
  undefined1 auStack_bb8 [32];
  undefined1 local_b98;
  undefined1 local_b97;
  undefined1 local_b96;
  undefined1 local_b95;
  undefined1 local_b94;
  undefined1 local_b93 [3];
  longlong *local_b90;
  int iStack_b88;
  uint uStack_b84;
  TBitArray<FDefaultBitArrayAllocator> *local_b80;
  undefined4 uStack_b78;
  uint uStack_b74;
  int local_b70;
  undefined4 uStack_b6c;
  int iStack_b68;
  undefined4 uStack_b64;
  TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
  *local_b60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b58;
  undefined8 local_b38;
  ulonglong local_b30;
  TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *local_b28;
  FAudioParameter *local_b20;
  undefined8 local_b18;
  TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
  *local_b10;
  TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
  *local_b08;
  TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
  *local_b00;
  TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
  *local_af8;
  UMovieSceneAudioSection *local_af0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_ae8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_ac8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_aa8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a28;
  FName local_a08;
  FName local_a00;
  FName local_9f8;
  FName local_9f0;
  FName local_9e8;
  FName local_9e0;
  FName local_9d8;
  undefined4 local_9d0;
  FName local_9cc;
  undefined1 local_9c4 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9b8;
  TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
  *local_998;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_990;
  TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
  *local_970;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_968;
  TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
  *local_948;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_940;
  TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
  *local_920;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_918;
  undefined4 local_8f8;
  undefined1 local_8f4 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8e8;
  undefined8 uStack_8c8;
  longlong *local_8c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8b8;
  undefined8 uStack_898;
  longlong *local_890;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_888;
  undefined8 uStack_868;
  longlong *local_860;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_858;
  undefined8 uStack_838;
  FString local_830 [2];
  undefined4 local_804;
  undefined4 local_7e4;
  undefined4 local_7c4;
  undefined4 local_7a4;
  undefined1 local_798 [32];
  ForElementType<unsigned_int> local_778;
  uint local_770;
  int local_76c;
  int local_768;
  int local_764;
  ForElementType<FSetElementId> local_758;
  int local_750;
  undefined1 local_748 [32];
  ForElementType<unsigned_int> local_728;
  uint local_720;
  int local_71c;
  int local_718;
  int local_714;
  ForElementType<FSetElementId> local_708;
  int local_700;
  undefined1 local_6f8 [32];
  ForElementType<unsigned_int> local_6d8;
  uint local_6d0;
  int local_6cc;
  int local_6c8;
  int local_6c4;
  ForElementType<FSetElementId> local_6b8;
  int local_6b0;
  undefined1 local_6a8 [32];
  uint *local_688;
  uint local_680;
  undefined4 local_67c;
  undefined4 local_678;
  int local_674;
  ForElementType<FSetElementId> local_668;
  int local_660;
  undefined1 local_658 [32];
  ForElementType<unsigned_int> local_638;
  uint local_630;
  int local_62c;
  int local_628;
  int local_624;
  ForElementType<FSetElementId> local_618;
  int local_610;
  undefined1 local_608 [136];
  undefined1 local_580 [64];
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  void *local_508;
  ulonglong local_500;
  FMovieSceneIntegerChannel local_4f8;
  FMovieSceneBoolChannel local_3d8;
  FMovieSceneStringChannel local_2b8;
  FMovieSceneFloatChannel local_190;
  ulonglong local_68;
  
  if (param_1 == (USoundBase *)0x0) {
    return;
  }
  local_68 = __security_cookie.value ^ (ulonglong)auStack_bb8;
  local_af0 = this;
  (**(code **)(param_1->_padding_ + 0x360))(param_1);
  local_b20 = (FAudioParameter *)0x0;
  local_b18 = 0;
  (**(code **)(param_1->_padding_ + 0x390))(param_1,&local_b20);
  pTVar1 = &this->Inputs_Float;
  local_658._0_8_ = (FScriptContainerElement *)0x0;
  local_658._8_8_ = 0;
  local_638 = (ForElementType<unsigned_int>)0x0;
  local_630 = 0;
  local_62c = 0x80;
  local_628 = -1;
  local_624 = 0;
  local_618 = (ForElementType<FSetElementId>)0x0;
  local_610 = 0;
  local_b30 = 1;
  uVar24 = *(int *)&(this->Inputs_Float).field_0x8 - *(int *)&(this->Inputs_Float).field_0x34;
  iVar15 = 1;
  local_af8 = pTVar1;
  if (uVar24 != 0) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_658,uVar24);
    if (3 < uVar24) {
      uVar5 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_9d0 = (undefined4)lVar23;
      iVar15 = 1 << ((byte)lVar23 & 0x1f);
    }
    if ((local_610 == 0) || (local_610 < iVar15)) {
      local_610 = iVar15;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_658);
    }
  }
  local_ac8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Inputs_Float).field_0x10;
  local_ac8._padding_._0_4_ = 0;
  local_ac8.UnvisitedBitMask = 0xffffffff;
  local_ac8._padding_._4_4_ = 1;
  local_ac8.CurrentBitIndex = 0;
  local_ac8.BaseBitIndex = 0;
  if (*(int *)&(this->Inputs_Float).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_ac8);
  }
  TStack_9b8._padding_._0_4_ = (undefined4)local_ac8._padding_;
  TStack_9b8._padding_._4_4_ = local_ac8._padding_._4_4_;
  TStack_b58.UnvisitedBitMask = local_ac8.UnvisitedBitMask;
  TStack_b58.UnvisitedBitMask = local_ac8.UnvisitedBitMask;
  TStack_b58.CurrentBitIndex = local_ac8.CurrentBitIndex;
  TStack_b58._28_4_ = local_ac8._28_4_;
  TStack_b58.BaseBitIndex = local_ac8.BaseBitIndex;
  TStack_b58.Array = local_ac8.Array;
  TStack_9b8.Array = local_ac8.Array;
  TStack_9b8.UnvisitedBitMask = local_ac8.UnvisitedBitMask;
  TStack_9b8.CurrentBitIndex = local_ac8.CurrentBitIndex;
  TStack_9b8.BaseBitIndex = local_ac8.BaseBitIndex;
  TStack_9b8._28_4_ = local_ac8._28_4_;
  local_b60 = pTVar1;
  local_9c4._4_8_ = pTVar1;
  TStack_b58._padding_._0_4_ = (undefined4)TStack_9b8._padding_;
  TStack_b58._padding_._4_4_ = TStack_9b8._padding_._4_4_;
  if (local_ac8.CurrentBitIndex < (local_ac8.Array)->NumBits) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_658,&local_9cc,
                 (bool *)((longlong)TStack_9b8.CurrentBitIndex * 0x138 +
                         *(longlong *)local_9c4._4_8_));
      TStack_9b8.UnvisitedBitMask = TStack_9b8.UnvisitedBitMask & ~TStack_9b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9b8);
    } while (TStack_9b8.CurrentBitIndex < (TStack_9b8.Array)->NumBits);
  }
  this_01 = &this->Inputs_Trigger;
  local_6f8._0_8_ = (FScriptContainerElement *)0x0;
  local_6f8._8_8_ = 0;
  local_6d8 = (ForElementType<unsigned_int>)0x0;
  local_6d0 = 0;
  local_6cc = 0x80;
  local_6c8 = -1;
  local_6c4 = 0;
  local_6b8 = (ForElementType<FSetElementId>)0x0;
  local_6b0 = 0;
  uVar24 = *(int *)&(this->Inputs_Trigger).field_0x8 - *(int *)&(this->Inputs_Trigger).field_0x34;
  local_b28 = this_01;
  if (uVar24 != 0) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_6f8,uVar24);
    if (uVar24 < 4) {
      iVar15 = 1;
    }
    else {
      uVar5 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_9cc.Number = (uint)lVar23;
      iVar15 = 1 << ((byte)lVar23 & 0x1f);
    }
    if ((local_6b0 == 0) || (local_6b0 < iVar15)) {
      local_6b0 = iVar15;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_6f8);
    }
  }
  local_aa8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Inputs_Trigger).field_0x10;
  local_aa8._padding_._0_4_ = 0;
  local_aa8._padding_._4_4_ = 1;
  local_aa8.UnvisitedBitMask = 0xffffffff;
  local_aa8.CurrentBitIndex = 0;
  local_aa8.BaseBitIndex = 0;
  if (*(int *)&(this->Inputs_Trigger).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_aa8);
  }
  TStack_990._padding_._0_4_ = (undefined4)local_aa8._padding_;
  TStack_990._padding_._4_4_ = local_aa8._padding_._4_4_;
  TStack_b58.UnvisitedBitMask = local_aa8.UnvisitedBitMask;
  TStack_b58.UnvisitedBitMask = local_aa8.UnvisitedBitMask;
  TStack_b58.CurrentBitIndex = local_aa8.CurrentBitIndex;
  TStack_b58._28_4_ = local_aa8._28_4_;
  TStack_b58.BaseBitIndex = local_aa8.BaseBitIndex;
  TStack_b58.Array = local_aa8.Array;
  TStack_990.Array = local_aa8.Array;
  TStack_990.UnvisitedBitMask = local_aa8.UnvisitedBitMask;
  TStack_990.CurrentBitIndex = local_aa8.CurrentBitIndex;
  TStack_990.BaseBitIndex = local_aa8.BaseBitIndex;
  TStack_990._28_4_ = local_aa8._28_4_;
  local_b60 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
               *)this_01;
  local_998 = this_01;
  TStack_b58._padding_._0_4_ = (undefined4)TStack_990._padding_;
  TStack_b58._padding_._4_4_ = TStack_990._padding_._4_4_;
  if (local_aa8.CurrentBitIndex < (local_aa8.Array)->NumBits) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_6f8,
                 (FName *)local_9c4,
                 (bool *)((longlong)TStack_990.CurrentBitIndex * 0x120 + *(longlong *)local_998));
      TStack_990.UnvisitedBitMask = TStack_990.UnvisitedBitMask & ~TStack_990._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_990);
    } while (TStack_990.CurrentBitIndex < (TStack_990.Array)->NumBits);
  }
  pTVar2 = &this->Inputs_Bool;
  local_748._0_8_ = (FScriptContainerElement *)0x0;
  local_748._8_8_ = 0;
  local_728 = (ForElementType<unsigned_int>)0x0;
  local_720 = 0;
  local_71c = 0x80;
  local_718 = -1;
  local_714 = 0;
  local_708 = (ForElementType<FSetElementId>)0x0;
  local_700 = 0;
  uVar24 = *(int *)&(this->Inputs_Bool).field_0x8 - *(int *)&(this->Inputs_Bool).field_0x34;
  local_b00 = pTVar2;
  if (uVar24 != 0) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_748,uVar24);
    if (uVar24 < 4) {
      iVar15 = 1;
    }
    else {
      uVar5 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_8f8 = (undefined4)lVar23;
      iVar15 = 1 << ((byte)lVar23 & 0x1f);
    }
    if ((local_700 == 0) || (local_700 < iVar15)) {
      local_700 = iVar15;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_748);
    }
  }
  local_a88.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Inputs_Bool).field_0x10;
  local_a88._padding_._0_4_ = 0;
  local_a88._padding_._4_4_ = 1;
  local_a88.UnvisitedBitMask = 0xffffffff;
  local_a88.CurrentBitIndex = 0;
  local_a88.BaseBitIndex = 0;
  if (*(int *)&(this->Inputs_Bool).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a88);
  }
  TStack_968._padding_._0_4_ = (undefined4)local_a88._padding_;
  TStack_968._padding_._4_4_ = local_a88._padding_._4_4_;
  TStack_b58.UnvisitedBitMask = local_a88.UnvisitedBitMask;
  TStack_b58.UnvisitedBitMask = local_a88.UnvisitedBitMask;
  TStack_b58.CurrentBitIndex = local_a88.CurrentBitIndex;
  TStack_b58._28_4_ = local_a88._28_4_;
  TStack_b58.BaseBitIndex = local_a88.BaseBitIndex;
  TStack_b58.Array = local_a88.Array;
  TStack_968.Array = local_a88.Array;
  TStack_968.UnvisitedBitMask = local_a88.UnvisitedBitMask;
  TStack_968.CurrentBitIndex = local_a88.CurrentBitIndex;
  TStack_968.BaseBitIndex = local_a88.BaseBitIndex;
  TStack_968._28_4_ = local_a88._28_4_;
  local_b60 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
               *)pTVar2;
  local_970 = pTVar2;
  TStack_b58._padding_._0_4_ = (undefined4)TStack_968._padding_;
  TStack_b58._padding_._4_4_ = TStack_968._padding_._4_4_;
  if (local_a88.CurrentBitIndex < (local_a88.Array)->NumBits) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_748,
                 (FName *)local_8f4,
                 (bool *)((longlong)TStack_968.CurrentBitIndex * 0x130 + *(longlong *)local_970));
      TStack_968.UnvisitedBitMask = TStack_968.UnvisitedBitMask & ~TStack_968._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_968);
    } while (TStack_968.CurrentBitIndex < (TStack_968.Array)->NumBits);
  }
  pTVar3 = &this->Inputs_Int;
  local_6a8._0_8_ = 0;
  local_6a8._8_8_ = 0;
  local_688 = (uint *)0x0;
  local_680 = 0;
  local_67c = 0x80;
  local_678 = 0xffffffff;
  local_674 = 0;
  local_668 = (ForElementType<FSetElementId>)0x0;
  local_660 = 0;
  local_b10 = pTVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reserve
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_6a8,
             *(int *)&(this->Inputs_Int).field_0x8 - *(int *)&(this->Inputs_Int).field_0x34);
  local_a68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Inputs_Int).field_0x10;
  local_a68._padding_._0_4_ = 0;
  local_a68._padding_._4_4_ = 1;
  local_a68.UnvisitedBitMask = 0xffffffff;
  local_a68.CurrentBitIndex = 0;
  local_a68.BaseBitIndex = 0;
  if (*(int *)&(this->Inputs_Int).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a68);
  }
  TStack_940._padding_._0_4_ = (undefined4)local_a68._padding_;
  TStack_940._padding_._4_4_ = local_a68._padding_._4_4_;
  TStack_b58.UnvisitedBitMask = local_a68.UnvisitedBitMask;
  TStack_b58.UnvisitedBitMask = local_a68.UnvisitedBitMask;
  TStack_b58.CurrentBitIndex = local_a68.CurrentBitIndex;
  TStack_b58._28_4_ = local_a68._28_4_;
  TStack_b58.BaseBitIndex = local_a68.BaseBitIndex;
  TStack_b58.Array = local_a68.Array;
  TStack_940.Array = local_a68.Array;
  TStack_940.UnvisitedBitMask = local_a68.UnvisitedBitMask;
  TStack_940.CurrentBitIndex = local_a68.CurrentBitIndex;
  TStack_940.BaseBitIndex = local_a68.BaseBitIndex;
  TStack_940._28_4_ = local_a68._28_4_;
  local_b60 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
               *)pTVar3;
  local_948 = pTVar3;
  TStack_b58._padding_._0_4_ = (undefined4)TStack_940._padding_;
  TStack_b58._padding_._4_4_ = TStack_940._padding_._4_4_;
  if (local_a68.CurrentBitIndex < (local_a68.Array)->NumBits) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_6a8,&local_a08,
                 (bool *)((longlong)TStack_940.CurrentBitIndex * 0x130 + *(longlong *)local_948));
      TStack_940.UnvisitedBitMask = TStack_940.UnvisitedBitMask & ~TStack_940._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_940);
    } while (TStack_940.CurrentBitIndex < (TStack_940.Array)->NumBits);
  }
  pTVar4 = &this->Inputs_String;
  local_798._0_8_ = (FScriptContainerElement *)0x0;
  local_798._8_8_ = 0;
  local_778 = (ForElementType<unsigned_int>)0x0;
  local_770 = 0;
  local_76c = 0x80;
  local_768 = -1;
  local_764 = 0;
  local_758 = (ForElementType<FSetElementId>)0x0;
  local_750 = 0;
  uVar24 = *(int *)&(this->Inputs_String).field_0x8 - *(int *)&(this->Inputs_String).field_0x34;
  local_b08 = pTVar4;
  if (uVar24 != 0) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_798,uVar24);
    if (uVar24 < 4) {
      iVar15 = 1;
    }
    else {
      uVar5 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_a08.Number = (uint)lVar23;
      iVar15 = 1 << ((byte)lVar23 & 0x1f);
    }
    if ((local_750 == 0) || (local_750 < iVar15)) {
      local_750 = iVar15;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_798);
    }
  }
  local_a48.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Inputs_String).field_0x10;
  local_a48._padding_._0_4_ = 0;
  local_a48._padding_._4_4_ = 1;
  local_a48.UnvisitedBitMask = 0xffffffff;
  local_a48.CurrentBitIndex = 0;
  local_a48.BaseBitIndex = 0;
  if (*(int *)&(this->Inputs_String).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a48);
  }
  TStack_918._padding_._0_4_ = (undefined4)local_a48._padding_;
  TStack_918._padding_._4_4_ = local_a48._padding_._4_4_;
  TStack_b58.UnvisitedBitMask = local_a48.UnvisitedBitMask;
  TStack_b58.UnvisitedBitMask = local_a48.UnvisitedBitMask;
  TStack_b58.CurrentBitIndex = local_a48.CurrentBitIndex;
  TStack_b58._28_4_ = local_a48._28_4_;
  TStack_b58.BaseBitIndex = local_a48.BaseBitIndex;
  TStack_b58.Array = local_a48.Array;
  TStack_918.Array = local_a48.Array;
  TStack_918.UnvisitedBitMask = local_a48.UnvisitedBitMask;
  TStack_918.CurrentBitIndex = local_a48.CurrentBitIndex;
  TStack_918.BaseBitIndex = local_a48.BaseBitIndex;
  TStack_918._28_4_ = local_a48._28_4_;
  local_b60 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
               *)pTVar4;
  local_920 = pTVar4;
  TStack_b58._padding_._0_4_ = (undefined4)TStack_918._padding_;
  TStack_b58._padding_._4_4_ = TStack_918._padding_._4_4_;
  if (local_a48.CurrentBitIndex < (local_a48.Array)->NumBits) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_798,&local_a00,
                 (bool *)((longlong)TStack_918.CurrentBitIndex * 0x138 + *(longlong *)local_920));
      TStack_918.UnvisitedBitMask = TStack_918.UnvisitedBitMask & ~TStack_918._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_918);
    } while (TStack_918.CurrentBitIndex < (TStack_918.Array)->NumBits);
  }
  pTVar1 = local_af8;
  pTVar2 = local_b00;
  uVar11 = _UNK_150631d98;
  uVar10 = ___xmm_00000000ffffffff0000008000000000;
  lVar9 = _UNK_150631d48;
  lVar23 = ___xmm_00000000000000020000000000000000;
  iVar15 = (int)local_b18;
  pFVar30 = local_b20 + (int)local_b18;
  pFVar25 = local_b20;
LAB_1466fc182:
  do {
    if ((int)local_b18 != iVar15) {
      local_b98 = 0;
      `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_b98);
    }
    pUVar12 = local_af0;
    if (pFVar25 == pFVar30) break;
    EVar6 = pFVar25->ParamType;
    if (EVar6 == Boolean) {
      pFVar21 = FMovieSceneBoolChannel::FMovieSceneBoolChannel(&local_3d8);
      FVar7 = pFVar25->ParamName;
      uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      pFVar21 = TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
                ::FindOrAddImpl<FName_const_&,FMovieSceneBoolChannel>
                          ((TMapBase<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
                            *)pTVar2,FVar7.Number + uVar24,&pFVar25->ParamName,pFVar21);
      pFVar21->DefaultValue = pFVar25->BoolParam;
      pFVar21->bHasDefaultValue = true;
      FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_3d8);
      this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_748;
      goto LAB_1466fc568;
    }
    if (EVar6 != Integer) {
      if (EVar6 == Float) {
        pFVar19 = FMovieSceneFloatChannel::FMovieSceneFloatChannel(&local_190);
        FVar7 = pFVar25->ParamName;
        uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
        pFVar19 = TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                  ::FindOrAddImpl<FName_const_&,FMovieSceneFloatChannel>
                            ((TMapBase<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                              *)pTVar1,FVar7.Number + uVar24,&pFVar25->ParamName,pFVar19);
        pFVar19->DefaultValue = pFVar25->FloatParam;
        pFVar19->bHasDefaultValue = true;
        FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_190);
        this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_658;
LAB_1466fc568:
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                  (this_00,pFVar25->ParamName);
        this_01 = local_b28;
      }
      else {
        if (EVar6 == String) {
          pFVar17 = FMovieSceneStringChannel::FMovieSceneStringChannel(&local_2b8);
          FVar7 = pFVar25->ParamName;
          uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
          pFVar17 = TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
                    ::FindOrAddImpl<FName_const_&,FMovieSceneStringChannel>
                              ((TMapBase<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
                                *)local_b08,FVar7.Number + uVar24,&pFVar25->ParamName,pFVar17);
          pFVar18 = ::FString::FString(local_830,&pFVar25->StringParam);
          FMovieSceneStringChannel::SetDefault(pFVar17,pFVar18);
          FMovieSceneStringChannel::~FMovieSceneStringChannel(&local_2b8);
          this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_798;
          goto LAB_1466fc568;
        }
        if (EVar6 == Trigger) {
          local_608._104_8_ = (FScriptContainerElement *)0x0;
          local_608._120_8_ = (FScriptContainerElement *)0x0;
          local_580._0_8_ = 0;
          local_580._32_8_ = 0;
          local_580._56_8_ = 0;
          local_528 = 0;
          local_508 = (void *)0x0;
          FVar7 = pFVar25->ParamName;
          local_510 = 0;
          local_580._16_8_ = 0;
          local_580._24_8_ = 0;
          local_500 = 0;
          local_538 = 0;
          uStack_530 = 0;
          local_608._0_8_ = &___7FMovieSceneAudioTriggerChannel__6B_;
          local_608._8_8_ = 0;
          local_608._16_8_ = 0;
          local_608._112_4_ = 0;
          local_608._116_4_ = 0;
          local_608._24_8_ = lVar23;
          local_608._32_8_ = lVar9;
          local_608._128_4_ = 0;
          local_608._132_4_ = 0;
          local_608._40_8_ = 0;
          local_608._48_8_ = 0;
          local_580._8_8_ = 0;
          local_608._56_8_ = lVar23;
          local_608._64_8_ = lVar9;
          local_540 = 0;
          local_608._72_8_ = 0;
          local_608._80_8_ = 0;
          local_608._88_8_ = lVar23;
          local_608._96_8_ = lVar9;
          local_580._40_8_ = uVar10;
          local_580._48_8_ = uVar11;
          local_520 = uVar10;
          uStack_518 = uVar11;
          uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
          TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
          ::FindOrAddImpl<FName_const_&,FMovieSceneAudioTriggerChannel>
                    ((TMapBase<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
                      *)this_01,FVar7.Number + uVar24,&pFVar25->ParamName,
                     (FMovieSceneAudioTriggerChannel *)local_608);
          local_500 = local_500 & 0xffffffff00000000;
          if (local_508 != (void *)0x0) {
            FMemory::Free(local_508);
          }
          TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_580 + 0x38));
          TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
          ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
                    ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)local_580);
          if ((FScriptContainerElement *)local_608._120_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_608._120_8_);
          }
          if ((FScriptContainerElement *)local_608._104_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_608._104_8_);
          }
          FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)local_608);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_6f8,
                     pFVar25->ParamName);
          pFVar25 = pFVar25 + 1;
          goto LAB_1466fc182;
        }
      }
      pFVar25 = pFVar25 + 1;
      goto LAB_1466fc182;
    }
    local_4f8._padding_ = (longlong)&___7FMovieSceneIntegerChannel__6B_;
    local_4f8.PreInfinityExtrap.Value = '\x04';
    local_4f8.PostInfinityExtrap.Value = '\x04';
    local_4f8._padding_ = 0;
    local_4f8._padding_ = 0;
    local_4f8.bInterpolateLinearKeys = false;
    local_4f8._padding_ = 0;
    local_4f8._padding_ = 0;
    local_4f8.Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f8._padding_ = 0;
    local_4f8._padding_ = 0;
    local_4f8.Times.ArrayNum = 0;
    local_4f8.Times.ArrayMax = 0;
    local_4f8._padding_ = lVar23;
    local_4f8._padding_ = lVar9;
    local_4f8.DefaultValue = 0;
    local_4f8._padding_ = lVar23;
    local_4f8._padding_ = lVar9;
    local_4f8.bHasDefaultValue = false;
    local_4f8._padding_ = lVar23;
    local_4f8._padding_ = lVar9;
    local_4f8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f8.Values.ArrayNum = 0;
    local_4f8.Values.ArrayMax = 0;
    FMovieSceneKeyHandleMap::FMovieSceneKeyHandleMap(&local_4f8.KeyHandles);
    FVar7 = pFVar25->ParamName;
    uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    pFVar20 = TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
              ::FindOrAddImpl<FName_const_&,FMovieSceneIntegerChannel>
                        ((TMapBase<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
                          *)local_b10,FVar7.Number + uVar24,&pFVar25->ParamName,&local_4f8);
    pFVar20->DefaultValue = pFVar25->IntParam;
    pFVar20->bHasDefaultValue = true;
    FMovieSceneKeyHandleMap::~FMovieSceneKeyHandleMap(&local_4f8.KeyHandles);
    if (local_4f8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Values.AllocatorInstance.Data);
    }
    if (local_4f8.Times.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Times.AllocatorInstance.Data);
    }
    FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)&local_4f8);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_6a8,
               pFVar25->ParamName);
    pFVar25 = pFVar25 + 1;
  } while( true );
  local_a28.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_658 + 0x10);
  local_a28._padding_._0_4_ = 0;
  uVar24 = (uint)local_b30;
  local_a28.UnvisitedBitMask = 0xffffffff;
  local_a28.CurrentBitIndex = 0;
  local_a28.BaseBitIndex = 0;
  local_a28._padding_._4_4_ = uVar24;
  if (local_630 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a28);
  }
  uVar29 = local_630;
  TStack_b58._padding_ = CONCAT44(local_a28._padding_._4_4_,(undefined4)local_a28._padding_);
  local_b60 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
               *)local_658;
  TStack_b58.CurrentBitIndex = local_a28.CurrentBitIndex;
  TStack_b58.UnvisitedBitMask = local_a28.UnvisitedBitMask;
  TStack_b58._28_4_ = local_a28._28_4_;
  TStack_b58.BaseBitIndex = local_a28.BaseBitIndex;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)(local_658 + 0x10);
  bVar22 = (byte)local_630 & 0x1f;
  local_b38 = CONCAT44(local_b38._4_4_,local_658._8_4_ - local_624);
  local_ae8._padding_._0_4_ = (int)local_630 >> 5;
  local_ae8._padding_._4_4_ = uVar24 << bVar22;
  local_ae8.UnvisitedBitMask = -1 << bVar22;
  TStack_b58.Array = local_a28.Array;
  local_ae8.BaseBitIndex = local_630 & 0xffffffe0;
  local_ae8.CurrentBitIndex = local_630;
  TStack_8e8.Array = local_a28.Array;
  uStack_8c8 = local_b38;
  local_ae8.Array = pTVar26;
  local_8f4._4_8_ = local_b60;
  TStack_8e8._padding_ = TStack_b58._padding_;
  TStack_8e8._16_8_ = TStack_b58._16_8_;
  TStack_8e8._24_8_ = TStack_b58._24_8_;
  if (((int)local_630 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar29 != local_630) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_ae8);
    pTVar26 = local_ae8.Array;
    uVar29 = local_ae8.CurrentBitIndex;
  }
  while( true ) {
    uVar10 = local_8f4._4_8_;
    if ((int)*(longlong *)(local_8f4._4_8_ + 8) - *(int *)(local_8f4._4_8_ + 0x34) !=
        (int)uStack_8c8) {
      local_b97 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b97);
    }
    uVar16 = local_6d0;
    if (((TStack_8e8.CurrentBitIndex == uVar29) && (TStack_8e8.Array == pTVar26)) &&
       ((undefined1 *)uVar10 == local_658)) break;
    FVar7 = *(FName *)(*(longlong *)uVar10 + (longlong)TStack_8e8.CurrentBitIndex * 0x10);
    local_9f8 = FVar7;
    if (*(int *)&(pUVar12->Inputs_Float).field_0x8 != *(int *)&(pUVar12->Inputs_Float).field_0x34) {
      uVar16 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      TSet<TTuple<FName,FMovieSceneFloatChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneFloatChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>,FDefaultSetAllocator>
                           *)&pUVar12->Inputs_Float,FVar7.Number + uVar16,&local_9f8);
    }
    TStack_8e8.UnvisitedBitMask = TStack_8e8.UnvisitedBitMask & ~TStack_8e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8e8);
  }
  iStack_b88 = 0;
  local_b70 = 0;
  uStack_b74 = 0;
  if (local_6d0 != 0) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_6f8 + 0x10);
    if (local_6d8 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_6d8;
    }
    uVar29 = *(uint *)FVar28;
    while (uVar29 == 0) {
      lVar23 = (longlong)iStack_b88;
      local_b70 = local_b70 + 0x20;
      iStack_b88 = iStack_b88 + 1;
      uStack_b74 = local_6d0;
      if ((int)((local_6d0 - 1) + ((int)(local_6d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b88)
      goto LAB_1466fc7f3;
      uVar29 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    uVar24 = -uVar29 & uVar29;
    uVar5 = (ulonglong)uVar24 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_a00.Number = (uint)lVar23;
    uStack_b74 = local_b70 + -1 + local_a00.Number;
    if ((int)local_6d0 < (int)uStack_b74) {
      uStack_b74 = local_6d0;
    }
  }
LAB_1466fc7f3:
  local_b90 = (longlong *)local_6f8;
  uStack_b6c = local_7a4;
  local_b80 = (TBitArray<FDefaultBitArrayAllocator> *)(local_6f8 + 0x10);
  uVar29 = local_6d0 & 0xffffffe0;
  iStack_b68 = local_6f8._8_4_ - local_6c4;
  TStack_8b8._padding_ = CONCAT44(uVar24,iStack_b88);
  uStack_b78 = 0xffffffff;
  TStack_8b8.CurrentBitIndex = uStack_b74;
  TStack_8b8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_6d0 >> 5;
  TStack_8b8._28_4_ = local_7a4;
  TStack_8b8.BaseBitIndex = local_b70;
  uStack_898 = CONCAT44(uStack_b64,iStack_b68);
  bVar22 = (byte)local_6d0;
  uStack_b84 = uVar24;
  local_8c0 = local_b90;
  TStack_8b8.Array = local_b80;
  if (((int)local_6d0 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar16 != local_6d0) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_6f8 + 0x10);
    if (local_6d8 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_6d8;
    }
    uVar24 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar15 * 4);
    while (uVar24 == 0) {
      lVar23 = (longlong)iVar15;
      uVar29 = uVar29 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = local_6d0;
      if ((int)((local_6d0 - 1) + ((int)(local_6d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1466fc920;
      uVar24 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    uVar5 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar16 = (uVar29 - 1) + (int)lVar23;
    local_af0 = (UMovieSceneAudioSection *)CONCAT44(local_af0._4_4_,(int)lVar23);
    if ((int)local_6d0 < (int)uVar16) {
      uVar16 = local_6d0;
    }
  }
LAB_1466fc920:
  while( true ) {
    plVar13 = local_8c0;
    if ((int)local_8c0[1] - *(int *)((longlong)local_8c0 + 0x34) != (int)uStack_898) {
      local_b96 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b96);
    }
    uVar24 = local_720;
    if (((TStack_8b8.CurrentBitIndex == uVar16) &&
        (TStack_8b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_6f8 + 0x10))) &&
       (plVar13 == (longlong *)local_6f8)) break;
    FVar7 = *(FName *)(*plVar13 + (longlong)TStack_8b8.CurrentBitIndex * 0x10);
    local_9d8 = FVar7;
    if (*(int *)&(pUVar12->Inputs_Trigger).field_0x8 !=
        *(int *)&(pUVar12->Inputs_Trigger).field_0x34) {
      uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      TSet<TTuple<FName,FMovieSceneAudioTriggerChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneAudioTriggerChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>,FDefaultSetAllocator>
                           *)&pUVar12->Inputs_Trigger,FVar7.Number + uVar24,&local_9d8);
    }
    TStack_8b8.UnvisitedBitMask = TStack_8b8.UnvisitedBitMask & ~TStack_8b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8b8);
  }
  iStack_b88 = 0;
  uStack_b84 = (uint)local_b30;
  local_b70 = 0;
  uStack_b74 = 0;
  if (local_720 != 0) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_748 + 0x10);
    if (local_728 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_728;
    }
    uVar29 = *(uint *)FVar28;
    while (uVar29 == 0) {
      lVar23 = (longlong)iStack_b88;
      local_b70 = local_b70 + 0x20;
      iStack_b88 = iStack_b88 + 1;
      uStack_b74 = local_720;
      if ((int)((local_720 - 1) + ((int)(local_720 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b88)
      goto LAB_1466fca70;
      uVar29 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    uStack_b84 = -uVar29 & uVar29;
    uVar5 = (ulonglong)uStack_b84 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_b10 = (TMap<FName,FMovieSceneIntegerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>_>
                 *)CONCAT44(local_b10._4_4_,(int)lVar23);
    uStack_b74 = (int)lVar23 + -1 + local_b70;
    if ((int)local_720 < (int)uStack_b74) {
      uStack_b74 = local_720;
    }
  }
LAB_1466fca70:
  local_b90 = (longlong *)local_748;
  uStack_b6c = local_804;
  local_b80 = (TBitArray<FDefaultBitArrayAllocator> *)(local_748 + 0x10);
  uVar29 = local_720 & 0xffffffe0;
  iStack_b68 = local_748._8_4_ - local_714;
  TStack_888._padding_ = CONCAT44(uStack_b84,iStack_b88);
  uStack_b78 = 0xffffffff;
  TStack_888.CurrentBitIndex = uStack_b74;
  TStack_888.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_720 >> 5;
  TStack_888._28_4_ = local_804;
  TStack_888.BaseBitIndex = local_b70;
  uStack_868 = CONCAT44(uStack_b64,iStack_b68);
  bVar22 = (byte)local_720;
  local_890 = local_b90;
  TStack_888.Array = local_b80;
  if (((int)local_720 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar24 != local_720) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_748 + 0x10);
    if (local_728 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_728;
    }
    uVar24 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar15 * 4);
    while (uVar24 == 0) {
      lVar23 = (longlong)iVar15;
      uVar29 = uVar29 + 0x20;
      iVar15 = iVar15 + 1;
      uVar24 = local_720;
      if ((int)((local_720 - 1) + ((int)(local_720 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1466fcba0;
      uVar24 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    uVar5 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar24 = (uVar29 - 1) + (int)lVar23;
    local_b08 = (TMap<FName,FMovieSceneStringChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>_>
                 *)CONCAT44(local_b08._4_4_,(int)lVar23);
    if ((int)local_720 < (int)uVar24) {
      uVar24 = local_720;
    }
  }
LAB_1466fcba0:
  while( true ) {
    plVar13 = local_890;
    if ((int)local_890[1] - *(int *)((longlong)local_890 + 0x34) != (int)uStack_868) {
      local_b95 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b95);
    }
    uVar29 = local_680;
    if (((TStack_888.CurrentBitIndex == uVar24) &&
        (TStack_888.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_748 + 0x10))) &&
       (plVar13 == (longlong *)local_748)) break;
    FVar7 = *(FName *)(*plVar13 + (longlong)TStack_888.CurrentBitIndex * 0x10);
    local_9f0 = FVar7;
    if (*(int *)&(pUVar12->Inputs_Bool).field_0x8 != *(int *)&(pUVar12->Inputs_Bool).field_0x34) {
      uVar29 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      TSet<TTuple<FName,FMovieSceneBoolChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneBoolChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>,FDefaultSetAllocator>
                           *)&pUVar12->Inputs_Bool,FVar7.Number + uVar29,&local_9f0);
    }
    TStack_888.UnvisitedBitMask = TStack_888.UnvisitedBitMask & ~TStack_888._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_888);
  }
  iStack_b88 = 0;
  local_b70 = 0;
  uStack_b84 = (uint)local_b30;
  uStack_b74 = 0;
  if (local_680 != 0) {
    puVar27 = (uint *)(local_6a8 + 0x10);
    if (local_688 != (uint *)0x0) {
      puVar27 = local_688;
    }
    uVar24 = *puVar27;
    while (uVar24 == 0) {
      lVar23 = (longlong)iStack_b88;
      local_b70 = local_b70 + 0x20;
      iStack_b88 = iStack_b88 + 1;
      uStack_b74 = local_680;
      if ((int)((local_680 - 1) + ((int)(local_680 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b88)
      goto LAB_1466fccf0;
      uVar24 = puVar27[lVar23 + 1];
    }
    uStack_b84 = -uVar24 & uVar24;
    uVar5 = (ulonglong)uStack_b84 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uStack_b74 = local_b70 + -1 + (int)lVar23;
    local_b00 = (TMap<FName,FMovieSceneBoolChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneBoolChannel,0>_>
                 *)CONCAT44(local_b00._4_4_,(int)lVar23);
    if ((int)local_680 < (int)uStack_b74) {
      uStack_b74 = local_680;
    }
  }
LAB_1466fccf0:
  local_b90 = (longlong *)local_6a8;
  uStack_b6c = local_7e4;
  local_b80 = (TBitArray<FDefaultBitArrayAllocator> *)(local_6a8 + 0x10);
  uVar24 = local_680 & 0xffffffe0;
  iStack_b68 = local_6a8._8_4_ - local_674;
  TStack_858._padding_ = CONCAT44(uStack_b84,iStack_b88);
  uStack_b78 = 0xffffffff;
  TStack_858.CurrentBitIndex = uStack_b74;
  TStack_858.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_680 >> 5;
  TStack_858._28_4_ = local_7e4;
  TStack_858.BaseBitIndex = local_b70;
  uStack_838 = CONCAT44(uStack_b64,iStack_b68);
  bVar22 = (byte)local_680;
  local_860 = local_b90;
  TStack_858.Array = local_b80;
  if (((int)local_680 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar29 != local_680) {
    puVar27 = (uint *)(local_6a8 + 0x10);
    if (local_688 != (uint *)0x0) {
      puVar27 = local_688;
    }
    uVar29 = -1 << (bVar22 & 0x1f) & puVar27[iVar15];
    while (uVar29 == 0) {
      lVar23 = (longlong)iVar15;
      uVar24 = uVar24 + 0x20;
      iVar15 = iVar15 + 1;
      uVar29 = local_680;
      if ((int)((local_680 - 1) + ((int)(local_680 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1466fce20;
      uVar29 = puVar27[lVar23 + 1];
    }
    uVar5 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar29 = (uVar24 - 1) + (int)lVar23;
    local_af8 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                 *)CONCAT44(local_af8._4_4_,(int)lVar23);
    if ((int)local_680 < (int)uVar29) {
      uVar29 = local_680;
    }
  }
LAB_1466fce20:
  while( true ) {
    plVar13 = local_860;
    if ((int)local_860[1] - *(int *)((longlong)local_860 + 0x34) != (int)uStack_838) {
      local_b94 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b94);
    }
    uVar24 = local_770;
    if (((TStack_858.CurrentBitIndex == uVar29) &&
        (TStack_858.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_6a8 + 0x10))) &&
       (plVar13 == (longlong *)local_6a8)) break;
    FVar7 = *(FName *)(*plVar13 + (longlong)TStack_858.CurrentBitIndex * 0x10);
    local_9e8 = FVar7;
    if (*(int *)&(pUVar12->Inputs_Int).field_0x8 != *(int *)&(pUVar12->Inputs_Int).field_0x34) {
      uVar24 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      TSet<TTuple<FName,FMovieSceneIntegerChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneIntegerChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneIntegerChannel,0>,FDefaultSetAllocator>
                           *)&pUVar12->Inputs_Int,FVar7.Number + uVar24,&local_9e8);
    }
    TStack_858.UnvisitedBitMask = TStack_858.UnvisitedBitMask & ~TStack_858._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_858);
  }
  iStack_b88 = 0;
  local_b70 = 0;
  uStack_b74 = 0;
  if (local_770 != 0) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_798 + 0x10);
    if (local_778 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_778;
    }
    uVar29 = *(uint *)FVar28;
    local_b70 = 0;
    while (uVar29 == 0) {
      lVar23 = (longlong)iStack_b88;
      local_b70 = local_b70 + 0x20;
      iStack_b88 = iStack_b88 + 1;
      uStack_b74 = local_770;
      if ((int)((local_770 - 1) + ((int)(local_770 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b88)
      goto LAB_1466fcf72;
      uVar29 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    local_b30 = (ulonglong)(-uVar29 & uVar29);
    uVar5 = local_b30 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uStack_b74 = local_b70 + -1 + (int)lVar23;
    local_b28 = (TMap<FName,FMovieSceneAudioTriggerChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneAudioTriggerChannel,0>_>
                 *)CONCAT44(local_b28._4_4_,(int)lVar23);
    if ((int)local_770 < (int)uStack_b74) {
      uStack_b74 = local_770;
    }
  }
LAB_1466fcf72:
  local_b90 = (longlong *)local_798;
  uVar29 = local_770 & 0xffffffe0;
  uStack_b84 = (uint)local_b30;
  uStack_b6c = local_7c4;
  local_b80 = (TBitArray<FDefaultBitArrayAllocator> *)(local_798 + 0x10);
  iStack_b68 = local_798._8_4_ - local_764;
  uStack_b78 = 0xffffffff;
  TStack_b58.CurrentBitIndex = uStack_b74;
  TStack_b58.UnvisitedBitMask = 0xffffffff;
  TStack_b58._padding_ = CONCAT44(uStack_b84,iStack_b88);
  iVar15 = (int)local_770 >> 5;
  TStack_b58._28_4_ = local_7c4;
  TStack_b58.BaseBitIndex = local_b70;
  local_b38 = CONCAT44(uStack_b64,iStack_b68);
  bVar22 = (byte)local_770;
  local_b60 = (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
               *)local_b90;
  TStack_b58.Array = local_b80;
  if (((int)local_770 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar24 != local_770) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_798 + 0x10);
    if (local_778 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_778;
    }
    uVar24 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar15 * 4);
    while (uVar24 == 0) {
      lVar23 = (longlong)iVar15;
      uVar29 = uVar29 + 0x20;
      iVar15 = iVar15 + 1;
      uVar24 = local_770;
      if ((int)((local_770 - 1) + ((int)(local_770 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1466fd092;
      uVar24 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    uVar5 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar24 = (uVar29 - 1) + (int)lVar23;
    if ((int)local_770 < (int)uVar24) {
      uVar24 = local_770;
    }
  }
LAB_1466fd092:
  while( true ) {
    pTVar1 = local_b60;
    if ((int)*(longlong *)((longlong)local_b60 + 8) - *(int *)((longlong)local_b60 + 0x34) !=
        (int)local_b38) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b93);
    }
    if (((TStack_b58.CurrentBitIndex == uVar24) &&
        (TStack_b58.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_798 + 0x10))) &&
       (pTVar1 == (TMap<FName,FMovieSceneFloatChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneFloatChannel,0>_>
                   *)local_798)) break;
    FVar7 = *(FName *)(*(longlong *)pTVar1 + (longlong)TStack_b58.CurrentBitIndex * 0x10);
    local_9e0 = FVar7;
    if (*(int *)&(pUVar12->Inputs_String).field_0x8 != *(int *)&(pUVar12->Inputs_String).field_0x34)
    {
      uVar29 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      TSet<TTuple<FName,FMovieSceneStringChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FMovieSceneStringChannel>,TDefaultMapHashableKeyFuncs<FName,FMovieSceneStringChannel,0>,FDefaultSetAllocator>
                           *)&pUVar12->Inputs_String,FVar7.Number + uVar29,&local_9e0);
    }
    TStack_b58.UnvisitedBitMask = TStack_b58.UnvisitedBitMask & ~TStack_b58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b58);
  }
  local_750 = 0;
  if (local_758 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_758);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_798);
  local_660 = 0;
  if (local_668 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_668);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_6a8);
  local_700 = 0;
  if (local_708 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_708);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_748);
  local_6b0 = 0;
  if (local_6b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_6b8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_6f8);
  local_610 = 0;
  if (local_618 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_618);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_658);
  DestructItems<FAudioParameter,int>(local_b20,(int)local_b18);
  if (local_b20 != (FAudioParameter *)0x0) {
    FMemory::Free(local_b20);
  }
  return;
}

// SplitSection @ 1466fe3d0

UMovieSceneSection * __thiscall
UMovieSceneAudioSection::SplitSection
          (UMovieSceneAudioSection *this,FQualifiedFrameTime *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UMovieSceneSection *pUVar4;
  UClass *pUVar5;
  char cVar6;
  UMovieSceneSection *pUVar7;
  FQualifiedFrameTime local_18;
  
  iVar1 = (this->StartFrameOffset).Value;
  cVar6 = (char)this->_padding_;
  if (cVar6 == '\x02') {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)((ulonglong)this->_padding_ >> 0x20);
    if (cVar6 != '\x01') {
      iVar3 = iVar3 + 1;
    }
    local_18.Time.FrameNumber = (param_1->Time).FrameNumber;
    iVar3 = (iVar1 - iVar3) + local_18.Time.FrameNumber.Value;
  }
  local_18.Time = param_1->Time;
  local_18.Rate = param_1->Rate;
  pUVar4 = UMovieSceneSection::SplitSection((UMovieSceneSection *)this,&local_18,param_2);
  if (pUVar4 != (UMovieSceneSection *)0x0) {
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    pUVar7 = (UMovieSceneSection *)0x0;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      pUVar7 = pUVar4;
    }
    *(int *)&pUVar7[1]._padding_ = iVar3;
  }
  (this->StartFrameOffset).Value = iVar1;
  return pUVar4;
}

// StaticRegisterNativesUMovieSceneAudioSection @ 1466fe750

void __cdecl UMovieSceneAudioSection::StaticRegisterNativesUMovieSceneAudioSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneAudioSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TrimSection @ 1466ff550

void __thiscall
UMovieSceneAudioSection::TrimSection
          (UMovieSceneAudioSection *this,FQualifiedFrameTime *param_1,bool param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iStack_34;
  FFrameNumber local_28;
  FQualifiedFrameTime local_18;
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  bVar3 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar3) {
    if (param_2) {
      lVar1 = this->_padding_;
      if ((char)lVar1 == '\x02') {
        iVar5 = 0;
      }
      else {
        uVar4 = (uint)lVar1 & 0xff;
        iStack_34 = (int)((ulonglong)lVar1 >> 0x20);
        if ((char)lVar1 == '\x01') {
          if ((uVar4 == 2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          if ((uVar4 == 2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iStack_34 = iStack_34 + 1;
        }
        local_28 = (param_1->Time).FrameNumber;
        iVar5 = ((this->StartFrameOffset).Value - iStack_34) + local_28.Value;
      }
      (this->StartFrameOffset).Value = iVar5;
    }
    local_18.Time = param_1->Time;
    local_18.Rate = param_1->Rate;
    UMovieSceneSection::TrimSection((UMovieSceneSection *)this,&local_18,param_2,param_3);
  }
  return;
}

// __VTableCtorCaller @ 146720890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMovieSceneAudioSection::__VTableCtorCaller(FVTableHelper *param_1)

{
  UMovieSceneSection *pUVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMovieSceneSection *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ = (longlong)&_vftable__for__IMovieSceneScalingDriver__;
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[1]._padding_);
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)&this[2]._padding_);
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].Easing.EaseIn = 0;
    *(undefined4 *)&this[3].Easing.EaseIn.field_0x8 = 0;
    *(undefined4 *)&this[3].Easing.EaseIn.field_0xc = 0x80;
    *(undefined4 *)&this[3].Easing.bManualEaseIn = 0xffffffff;
    this[3].Easing.ManualEaseInDuration = 0;
    *(undefined8 *)&this[3].Easing.EaseOut.field_0x8 = 0;
    *(undefined4 *)&this[3].Easing.bManualEaseOut = 0;
    pUVar1 = this + 3;
    (pUVar1->SectionRange).Value.LowerBound.Type = '\0';
    *(undefined3 *)&(pUVar1->SectionRange).Value.LowerBound.field_0x1 = 0;
    (pUVar1->SectionRange).Value.LowerBound.Value = 0;
    pUVar1 = this + 3;
    (pUVar1->SectionRange).Value.UpperBound.Type = '\0';
    *(undefined3 *)&(pUVar1->SectionRange).Value.UpperBound.field_0x1 = 0;
    (pUVar1->SectionRange).Value.UpperBound.Value = 0;
    this[3].RowIndex = 0;
    this[3].OverlapPriority = 0;
    *(undefined4 *)&this[3].field_0xd8 = 0;
    this[3].StartTime_DEPRECATED = 1.79366e-43;
    this[3].EndTime_DEPRECATED = -NAN;
    this[3].PreRollTime_DEPRECATED = 0.0;
    this[3].bSupportsInfiniteRange = false;
    this[3].BlendType.BlendType = Invalid;
    this[3].BlendType.bIsValid = false;
    *(undefined5 *)&this[3].field_0xf3 = 0;
    *(undefined4 *)&this[3].ChannelProxy.Object = 0;
    this[3].ChannelProxy.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this[3].ChannelProxyType = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    this[4].EvalOptions.bCanEditCompletionMode = true;
    this[4].EvalOptions.CompletionMode = ~KeepState;
    this[4].EventHandlers = (TDataEventContainer<UE::MovieScene::ISectionEventHandler>)0xff;
    this[4].field_0x73 = 0xff;
    this[4]._padding_ = 0;
    *(undefined8 *)&this[4].Easing.EaseIn = 0;
    *(undefined4 *)&this[4].Easing.EaseIn.field_0x8 = 0;
    this[4].Easing.bManualEaseIn = false;
    *(undefined3 *)&this[4].Easing.field_0x19 = 0;
    this[4].Easing.ManualEaseInDuration = 0;
    *(undefined8 *)&this[4].Easing.EaseOut = 0;
    pUVar1 = this + 4;
    (pUVar1->SectionRange).Value.LowerBound.Type = '\0';
    *(undefined3 *)&(pUVar1->SectionRange).Value.LowerBound.field_0x1 = 0;
    (pUVar1->SectionRange).Value.LowerBound.Value = 0;
    *(undefined4 *)&this[4].SectionRange.Value.UpperBound = 0;
    this[4].SectionRange.Value.UpperBound.Value.Value = 0x80;
    *(undefined4 *)&this[4].ConditionContainer.Condition.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[4].ConditionContainer.Condition.field0_0x0 + 4) = 0;
    this[4].RowIndex = 0;
    this[4].OverlapPriority = 0;
    *(undefined4 *)&this[4].field_0xd8 = 0;
    FMovieSceneActorReferenceData::FMovieSceneActorReferenceData
              ((FMovieSceneActorReferenceData *)&this[4].EndTime_DEPRECATED);
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// _getUObject @ 146720b80

UObject * __thiscall UMovieSceneAudioSection::_getUObject(UMovieSceneAudioSection *this)

{
  return (UObject *)&this[-1].AttachActorData.DefaultValue.Object.Guid.C;
}

// _getUObject`adjustor{8}' @ 146720b90

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneAudioSection::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneAudioSection::_getUObject_adjustor_8__(UMovieSceneAudioSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneAudioSection *)&this[-1].OnAudioPlaybackPercent.field_0x10);
  return (UObject *)pUVar1;
}

// execGetAttenuationSettings @ 146720d30

void __cdecl
UMovieSceneAudioSection::execGetAttenuationSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x28].field_0x20;
  return;
}

// execGetLooping @ 146720da0

void __cdecl UMovieSceneAudioSection::execGetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x28].field_0x18;
  return;
}

// execGetOverrideAttenuation @ 146720dd0

void __cdecl
UMovieSceneAudioSection::execGetOverrideAttenuation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x28].field_0x1a;
  return;
}

// execGetPlaybackSound @ 146720e00

void __cdecl
UMovieSceneAudioSection::execGetPlaybackSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  USoundBase *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetPlaybackSound((UMovieSceneAudioSection *)param_1);
  *(USoundBase **)param_3 = pUVar1;
  return;
}

// execGetSound @ 146720e40

void __cdecl UMovieSceneAudioSection::execGetSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[7].field_0x8;
  return;
}

// execGetStartOffset @ 146720e70

void __cdecl
UMovieSceneAudioSection::execGetStartOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[7].field_0x10;
  return;
}

// execGetSuppressSubtitles @ 146720ea0

void __cdecl
UMovieSceneAudioSection::execGetSuppressSubtitles(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x28].field_0x19;
  return;
}

// execSetAttenuationSettings @ 146720ed0

void __cdecl
UMovieSceneAudioSection::execSetAttenuationSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0x28].field_0x20 = pUVar2;
  return;
}

// execSetLooping @ 146721030

void __cdecl UMovieSceneAudioSection::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x28].field_0x18 = local_res8[0] != 0;
  return;
}

// execSetOverrideAttenuation @ 1467210c0

void __cdecl
UMovieSceneAudioSection::execSetOverrideAttenuation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x28].field_0x1a = local_res8[0] != 0;
  return;
}

// execSetSound @ 146721150

void __cdecl UMovieSceneAudioSection::execSetSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  char cVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[7].field_0x8 = pUVar2;
  cVar3 = (**(code **)(*(longlong *)pUVar2 + 800))(pUVar2);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(**(longlong **)&param_1[7].field_0x8 + 0x318))();
    param_1[0x28].field_0x18 = cVar3 == '\0';
  }
  UMovieSceneSection::InvalidateChannelProxy((UMovieSceneSection *)param_1);
  return;
}

// execSetStartOffset @ 146721230

void __cdecl
UMovieSceneAudioSection::execSetStartOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[7].field_0x10 = local_res8[0];
  return;
}

// execSetSuppressSubtitles @ 1467212c0

void __cdecl
UMovieSceneAudioSection::execSetSuppressSubtitles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x28].field_0x19 = local_res8[0] != 0;
  return;
}

