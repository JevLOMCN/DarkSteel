// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// SetAudioInputParameters<int> @ 14675bf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateAudio::SetAudioInputParameters<int>
          (FEvaluateAudio *this,
          TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *param_1,
          IAudioParameterControllerInterface *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  FString *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  TSharedPtr<Audio::IProxyData,1> *local_78;
  undefined8 local_70;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar14 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675bfad;
      uVar11 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14675bfad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_10c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c0b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14675c0b0:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    lVar9 = *(longlong *)pTVar5;
    local_100 = 0;
    local_fc = 0;
    local_f0 = 0;
    pvStack_e8 = (void *)0x0;
    local_108 = *(undefined8 *)(lVar9 + (longlong)TStack_60.CurrentBitIndex * 0x14);
    local_f8 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
    local_88 = 2;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98 = (FString *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
    local_70 = 0;
    (**(code **)((longlong)*param_2 + 0x78))(param_2,&local_108);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_78,(int)local_70);
    if (local_78 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_78);
    }
    DestructItems<FString,int>(local_98,(int)local_90);
    if (local_98 != (FString *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (pvStack_e8 != (void *)0x0) {
      FMemory::Free(pvStack_e8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetAudioInputParameters<float> @ 14675c210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateAudio::SetAudioInputParameters<float>
          (FEvaluateAudio *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1,IAudioParameterControllerInterface *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  FString *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  TSharedPtr<Audio::IProxyData,1> *local_78;
  undefined8 local_70;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar14 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c2ad;
      uVar11 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14675c2ad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_10c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c3b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14675c3b0:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    lVar9 = *(longlong *)pTVar5;
    local_fc = 0;
    local_88 = 3;
    local_108 = *(undefined8 *)(lVar9 + (longlong)TStack_60.CurrentBitIndex * 0x14);
    local_100 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
    local_f8 = 0;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98 = (FString *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
    local_70 = 0;
    local_f0 = 0;
    pvStack_e8 = (void *)0x0;
    (**(code **)((longlong)*param_2 + 0x78))(param_2,&local_108);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_78,(int)local_70);
    if (local_78 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_78);
    }
    DestructItems<FString,int>(local_98,(int)local_90);
    if (local_98 != (FString *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (pvStack_e8 != (void *)0x0) {
      FMemory::Free(pvStack_e8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetAudioInputParameters<FString> @ 14675c510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateAudio::SetAudioInputParameters<FString>
          (FEvaluateAudio *this,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_1,IAudioParameterControllerInterface *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  FString local_e8;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  FString *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  TSharedPtr<Audio::IProxyData,1> *local_78;
  undefined8 local_70;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar14 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c5ad;
      uVar11 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14675c5ad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_10c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c6b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14675c6b0:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    lVar9 = *(longlong *)pTVar5;
    local_100 = 0;
    local_fc = 0;
    pcVar4 = *(code **)((longlong)*param_2 + 0x78);
    local_108 = *(undefined8 *)((longlong)TStack_60.CurrentBitIndex * 0x20 + lVar9);
    local_f8 = 0;
    local_f0 = 0;
    ::FString::FString(&local_e8,(FString *)((longlong)TStack_60.CurrentBitIndex * 0x20 + lVar9 + 8)
                      );
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98 = (FString *)0x0;
    local_90 = 0;
    local_88 = 4;
    local_84 = 0;
    local_78 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
    local_70 = 0;
    (*pcVar4)(param_2,&local_108);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_78,(int)local_70);
    if (local_78 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_78);
    }
    DestructItems<FString,int>(local_98,(int)local_90);
    if (local_98 != (FString *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetAudioInputParameters<bool> @ 14675c820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateAudio::SetAudioInputParameters<bool>
          (FEvaluateAudio *this,
          TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *param_1,
          IAudioParameterControllerInterface *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  FString *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  TSharedPtr<Audio::IProxyData,1> *local_78;
  undefined8 local_70;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar14 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c8bd;
      uVar11 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14675c8bd:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_10c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14675c9c0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14675c9c0:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    lVar9 = *(longlong *)pTVar5;
    local_100 = 0;
    local_f0 = 0;
    pvStack_e8 = (void *)0x0;
    local_88 = 1;
    local_108 = *(undefined8 *)(lVar9 + (longlong)TStack_60.CurrentBitIndex * 0x14);
    local_fc = *(undefined1 *)(lVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
    local_f8 = 0;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98 = (FString *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
    local_70 = 0;
    (**(code **)((longlong)*param_2 + 0x78))(param_2,&local_108);
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_78,(int)local_70);
    if (local_78 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      FMemory::Free(local_78);
    }
    DestructItems<FString,int>(local_98,(int)local_90);
    if (local_98 != (FString *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (pvStack_e8 != (void *)0x0) {
      FMemory::Free(pvStack_e8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// EnsureAudioIsPlaying @ 14678a260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying
          (FEvaluateAudio *this,UObject *param_1,FInstanceHandle param_2,
          UMovieSceneAudioSection *param_3,FAudioComponentEvaluationData *param_4,
          FMovieSceneContext *param_5,UObject *param_6)

{
  TOptional<float> *pTVar1;
  TOptional<float> *pTVar2;
  undefined8 *puVar3;
  UMovieSceneAudioSystem *pUVar4;
  USoundBase *pUVar5;
  USoundAttenuation *pUVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  UWorld *pUVar22;
  ulonglong uVar23;
  bool bVar24;
  char cVar25;
  UAudioComponent *this_00;
  UObject *pUVar26;
  UClass *pUVar27;
  UObject *pUVar28;
  UMovieSceneScalingAnchors *this_01;
  FString *pFVar29;
  TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
  *this_02;
  FMovieSceneScalingAnchor *pFVar30;
  FAudioDevice *pFVar31;
  float *pfVar32;
  FName *pFVar33;
  TStatId TVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  undefined1 *puVar39;
  FMovieSceneContext *pFVar40;
  ulonglong uVar41;
  undefined8 *puVar42;
  wchar_t *pwVar43;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  wchar_t *pwVar48;
  int iVar49;
  UMovieSceneAudioSection *pUVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  float fVar56;
  float fVar57;
  undefined1 auStackY_3b8 [32];
  char local_356;
  undefined1 local_355;
  FCachePreAnimatedValueParams local_354;
  undefined1 local_353;
  char local_352;
  USoundBase *local_350;
  <lambda_2> local_348;
  undefined1 local_347 [7];
  ulonglong local_340;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_338;
  UMovieSceneAudioSection *local_330;
  FWeakObjectPtr local_328;
  FString local_320;
  float local_310 [2];
  UWorld *local_308;
  AWorldSettings *local_300;
  FName local_2f8;
  FName local_2f0;
  int local_2e8;
  uint uStack_2e4;
  uint local_2e0;
  undefined4 uStack_2dc;
  uint local_2d8;
  undefined4 uStack_2d4;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  ulonglong local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  float local_210;
  float local_20c;
  ulonglong local_208;
  ulonglong local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  ulonglong local_1e0;
  char local_1d8;
  float local_1d0;
  float local_1cc;
  UMovieSceneAudioSection *local_1c8;
  TObjectPtr<UClass>_u_0 local_1c0;
  TObjectPtr<UClass>_u_0 local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FName local_128;
  FName local_120;
  code *local_118 [5];
  undefined8 *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_338 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
              param_1;
  local_330 = param_3;
  bVar24 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_4);
  if (!bVar24) {
    local_355 = bVar24;
    `UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying'::__l2::<lambda_1>::operator()(&local_355)
    ;
  }
  this_00 = (UAudioComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_4);
  if (param_6 == (UObject *)0x0) {
    local_308 = (UWorld *)0x0;
LAB_14678a315:
    local_300 = (AWorldSettings *)0x0;
  }
  else {
    local_308 = (UWorld *)(**(code **)(*(longlong *)param_6 + 0x180))();
    if (local_308 == (UWorld *)0x0) goto LAB_14678a315;
    local_300 = UWorld::GetWorldSettings(local_308,false,true);
  }
  pUVar4 = this->AudioSystem;
  pwVar48 = L"";
  if (((pUVar4->PreAnimatedStorage).Object == (FPreAnimatedAudioStorage *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_354.bForcePersist = false;
  TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
  ::CachePreAnimatedValue<_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying_::__l2::<lambda_2>_>
            ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
              *)(pUVar4->PreAnimatedStorage).Object,&local_354,(UObject *)this_00,&local_348,
             CacheIfTracked);
  if ((double)this_00->VolumeMultiplier != param_4->VolumeMultiplier) {
    UAudioComponent::SetVolumeMultiplier(this_00,(float)param_4->VolumeMultiplier);
  }
  if ((double)this_00->PitchMultiplier != param_4->PitchMultiplier) {
    UAudioComponent::SetPitchMultiplier(this_00,(float)param_4->PitchMultiplier);
  }
  this_00->field_0x4c9 =
       (param_3->bSuppressSubtitles << 2 ^ this_00->field_0x4c9) & 4U ^ this_00->field_0x4c9;
  if ((local_338 !=
       (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) ||
     (local_356 = '\0', *(longlong *)&this_00->field_0xd0 != 0)) {
    local_356 = '\x01';
  }
  pUVar4 = this->AudioSystem;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  local_328.ObjectIndex = 0;
  local_328.ObjectSerialNumber = 0;
  local_1c8 = param_3;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_1c8);
  local_2e8 = local_328.ObjectIndex;
  uStack_2e4 = local_328.ObjectSerialNumber;
  uVar38 = local_328.ObjectIndex - local_328.ObjectSerialNumber ^
           (uint)local_328.ObjectSerialNumber >> 0xd;
  uVar35 = (-0x61c88647 - local_328.ObjectSerialNumber) - uVar38 ^ uVar38 << 8;
  uVar45 = (local_328.ObjectSerialNumber - uVar38) - uVar35 ^ uVar35 >> 0xd;
  uVar38 = (uVar38 - uVar45) - uVar35 ^ uVar45 >> 0xc;
  uVar35 = (uVar35 - uVar38) - uVar45 ^ uVar38 << 0x10;
  uVar46 = (uVar45 - uVar35) - uVar38 ^ uVar35 >> 5;
  uVar45 = (uVar38 - uVar46) - uVar35 ^ uVar46 >> 3;
  uVar38 = (uVar35 - uVar45) - uVar46 ^ uVar45 << 10;
  uVar35 = (uint)((ulonglong)(uint)param_2 & 0xffff);
  uVar35 = (int)(((ulonglong)(uint)param_2 & 0xffff) >> 2) + -0x61c88647 +
           ((uVar46 - uVar38) - uVar45 ^ uVar38 >> 0xf) + uVar35 * 0x40 ^ uVar35;
  local_350 = (USoundBase *)CONCAT44(local_350._4_4_,uVar35);
  if (*(int *)&(pUVar4->AudioInputsBySectionKey).field_0x8 !=
      *(int *)&(pUVar4->AudioInputsBySectionKey).field_0x34) {
    puVar39 = *(undefined1 **)&(pUVar4->AudioInputsBySectionKey).field_0x40;
    if (puVar39 == (undefined1 *)0x0) {
      puVar39 = &(pUVar4->AudioInputsBySectionKey).field_0x38;
    }
    iVar49 = *(int *)(puVar39 +
                     (ulonglong)
                     (*(int *)&(pUVar4->AudioInputsBySectionKey).field_0x48 - 1U & uVar35) * 4);
    if (iVar49 != -1) {
      lVar37 = *(longlong *)&pUVar4->AudioInputsBySectionKey;
      do {
        lVar36 = (longlong)iVar49 * 0x168;
        if (((((ushort)*(undefined4 *)(lVar36 + lVar37) == param_2.InstanceID) &&
             ((ushort)((uint)*(undefined4 *)(lVar36 + lVar37) >> 0x10) == param_2.InstanceSerial))
            && (*(int *)(lVar36 + 4 + lVar37) == local_328.ObjectIndex)) &&
           (*(uint *)(lVar36 + 8 + lVar37) == local_328.ObjectSerialNumber)) {
          if ((iVar49 != -1) && (lVar37 = (longlong)iVar49 * 0x168 + lVar37, lVar37 != 0)) {
            pTVar44 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                       *)(lVar37 + 0x10);
            if (pTVar44 !=
                (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)0x0) {
              local_338 = pTVar44;
              SetAudioInputParameters<float>
                        (this,pTVar44,(IAudioParameterControllerInterface *)&this_00->field_0x250);
              SetAudioInputParameters<FString>
                        (this,(TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                               *)(lVar37 + 0x60),
                         (IAudioParameterControllerInterface *)&this_00->field_0x250);
              SetAudioInputParameters<bool>
                        (this,(TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
                               *)(lVar37 + 0xb0),
                         (IAudioParameterControllerInterface *)&this_00->field_0x250);
              SetAudioInputParameters<int>
                        (this,(TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)(lVar37 + 0x100),
                         (IAudioParameterControllerInterface *)&this_00->field_0x250);
            }
            goto LAB_14678a582;
          }
          break;
        }
        iVar49 = *(int *)(lVar36 + 0x160 + lVar37);
      } while (iVar49 != -1);
    }
  }
  pTVar44 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
            0x0;
LAB_14678a582:
  cVar25 = (char)param_3->_padding_;
  if (cVar25 == '\x02') {
    iVar49 = 0;
  }
  else {
    iVar49 = (int)((ulonglong)param_3->_padding_ >> 0x20);
    if (cVar25 != '\x01') {
      iVar49 = iVar49 + 1;
    }
  }
  uVar35 = *(uint *)((longlong)&param_5->_padding_ + 4);
  local_338 = pTVar44;
  if (uVar35 == 0x80000000) {
    pFVar40 = param_5;
    if ((int)param_5->_padding_ == 0) {
      pFVar40 = (FMovieSceneContext *)((longlong)&param_5->_padding_ + 4);
    }
    if (((char)pFVar40->_padding_ == '\x02') &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_340 = *(ulonglong *)((longlong)&pFVar40->_padding_ + 4);
  }
  else {
    local_340 = (ulonglong)uVar35;
  }
  uVar41 = local_340;
  local_1c0.DebugPtr = Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_1c0.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_1c0.DebugPtr);
  }
  pUVar26 = FMovieSceneDecorationContainer::FindDecoration
                      ((FMovieSceneDecorationContainer *)&param_3->_padding_,
                       (TSubclassOf<UObject> *)&local_1c0.ObjectPtr);
  if (pUVar26 != (UObject *)0x0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister();
    iVar47 = (int)pUVar27->_padding_;
    if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar47) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar47 * 8) !=
        &pUVar27->_padding_)) {
      pFVar29 = GetTypeName<UMovieSceneSectionAnchorsDecoration>(&local_c8);
      if ((pFVar29->Data).ArrayNum == 0) {
        pwVar43 = L"";
      }
      else {
        pwVar43 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      }
      pFVar29 = GetFullNameForCastLogError<UObject>(&local_b8,pUVar26);
      if ((pFVar29->Data).ArrayNum != 0) {
        pwVar48 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar48,pwVar43);
    }
    local_338 = pTVar44;
    pUVar27 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar28 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)local_330,pUVar27);
    local_1b8.DebugPtr = Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_1b8.DebugPtr != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_1b8.DebugPtr);
    }
    this_01 = (UMovieSceneScalingAnchors *)
              FMovieSceneDecorationContainer::FindDecoration
                        ((FMovieSceneDecorationContainer *)&pUVar28[2].field_0x10,
                         (TSubclassOf<UObject> *)&local_1b8.ObjectPtr);
    if (this_01 == (UMovieSceneScalingAnchors *)0x0) {
      this_01 = (UMovieSceneScalingAnchors *)0x0;
      local_338 = pTVar44;
    }
    else {
      pUVar27 = Z_Construct_UClass_UMovieSceneScalingAnchors_NoRegister();
      iVar47 = (int)pUVar27->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar47) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar47 * 8) !=
          &pUVar27->_padding_)) {
        pFVar29 = GetTypeName<UMovieSceneScalingAnchors>(&local_e8);
        if ((pFVar29->Data).ArrayNum == 0) {
          pwVar43 = L"";
        }
        else {
          pwVar43 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
        }
        pFVar29 = GetFullNameForCastLogError<UObject>(&local_d8,(UObject *)this_01);
        if ((pFVar29->Data).ArrayNum != 0) {
          pwVar48 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar48,pwVar43);
      }
    }
    this_02 = UMovieSceneScalingAnchors::GetCurrentAnchors(this_01);
    pFVar30 = TMapBase<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
              ::Find((TMapBase<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
                      *)this_02,(FGuid *)&pUVar26[1].field_0x18);
    if (pFVar30 != (FMovieSceneScalingAnchor *)0x0) {
      iVar49 = (pFVar30->Position).Value;
      local_353 = 0xf;
      (**(code **)(this_01->_padding_ + 0x2d0))(this_01,&local_1e0,uVar41,uVar41);
      if (local_1d8 != '\0') {
        local_340 = local_1e0;
        uVar41 = local_1e0;
      }
    }
  }
  fVar54 = __real_3f800000;
  fVar57 = __real_322bcc77;
  fVar56 = (float)((longlong)(int)((ulonglong)param_5->_padding_ >> 0x20) * (longlong)iVar49) /
           (float)(int)param_5->_padding_;
  fVar53 = fVar54;
  if ((bUseTimeDilationToAdjustPlayDurationCVar == false) || (local_300 == (AWorldSettings *)0x0)) {
    bVar24 = false;
  }
  else {
    bVar24 = true;
    fVar52 = (float)(**(code **)(local_300->_padding_ + 0x790))();
    if (fVar57 < (float)((uint)fVar52 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar56 = fVar56 * (fVar54 / fVar52);
      fVar53 = fVar54 / fVar52;
    }
  }
  pUVar50 = local_330;
  uVar35 = (local_330->StartFrameOffset).Value;
  local_350 = UMovieSceneAudioSection::GetPlaybackSound(local_330);
  iVar47 = (int)param_5->_padding_;
  uStack_2dc = 0;
  local_1a8 = (ulonglong)uVar35;
  iVar49 = (int)((ulonglong)param_5->_padding_ >> 0x20);
  local_1b0._4_4_ = (float)(uVar41 >> 0x20);
  fVar52 = local_1b0._4_4_;
  fVar56 = ((((float)((longlong)(int)local_340 * (longlong)iVar49) + local_1b0._4_4_ * (float)iVar49
             ) / (float)iVar47) * fVar53 - fVar56) +
           ((float)((longlong)(int)uVar35 * (longlong)iVar49) + (float)iVar49 * 0.0) / (float)iVar47
  ;
  local_2e0 = uVar35;
  uVar23 = uVar41;
  if ((0.0 <= fVar56) && (local_350 != (USoundBase *)0x0)) {
    if (bVar24) {
      if (((param_4->LastAudioTime).bIsSet == false) || ((param_4->LastContextTime).bIsSet == false)
         ) {
        if ((TOptional<float> *)local_310 != &param_4->LastAudioTime) {
          (param_4->LastAudioTime).TypedValue = fVar56;
          (param_4->LastAudioTime).bIsSet = true;
        }
        iVar49 = (int)((ulonglong)param_5->_padding_ >> 0x20);
        local_260 = uVar41;
        if ((TOptional<float> *)&local_20c != &param_4->LastContextTime) {
          (param_4->LastContextTime).TypedValue =
               ((float)iVar49 * local_1b0._4_4_ +
               (float)((longlong)iVar49 * (longlong)(int)local_340)) /
               (float)(int)param_5->_padding_;
          (param_4->LastContextTime).bIsSet = true;
        }
      }
      else {
        pTVar1 = &param_4->LastAudioTime;
        local_1b0 = uVar41;
        if (((param_4->LastAudioTime).bIsSet == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pTVar1->TypedValue <= fVar56 && fVar56 != pTVar1->TypedValue) {
          if (((param_4->LastAudioTime).bIsSet == false) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar56 = pTVar1->TypedValue;
        }
        pTVar2 = &param_4->LastContextTime;
        iVar49 = (int)((ulonglong)param_5->_padding_ >> 0x20);
        fVar52 = ((float)iVar49 * fVar52 + (float)((longlong)iVar49 * (longlong)(int)local_340)) /
                 (float)(int)param_5->_padding_;
        local_1a0 = uVar41;
        if (((param_4->LastContextTime).bIsSet == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar8 = fVar52;
        if (pTVar2->TypedValue <= fVar52) {
          fVar8 = pTVar2->TypedValue;
        }
        fVar56 = fVar56 + (fVar52 - fVar8) * fVar53;
        if ((TOptional<float> *)local_310 != pTVar1) {
          pTVar1->TypedValue = fVar56;
          (param_4->LastAudioTime).bIsSet = true;
        }
        pUVar50 = local_330;
        uVar23 = local_1b0;
        if ((TOptional<float> *)&local_210 != pTVar2) {
          pTVar2->TypedValue = fVar52;
          (param_4->LastContextTime).bIsSet = true;
        }
      }
    }
    local_1b0 = uVar23;
    cVar25 = (**(code **)(local_350->_padding_ + 800))(local_350);
    if (cVar25 == '\0') {
      fVar53 = MovieSceneHelpers::GetSoundDuration(local_350);
      if (((pUVar50->bLooping == false) && (fVar53 < fVar56)) && (fVar53 != 0.0)) {
        cVar25 = (**(code **)(*(longlong *)&this_00->field_0x250 + 0xa8))();
        if (cVar25 == '\0') {
          return;
        }
        if (5 < (byte)LogMovieScene._0_1_) {
          pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
          if (pUVar5 == (USoundBase *)0x0) {
            ::FString::FString(&local_2c0,L"None");
          }
          else {
            local_248 = (FName)pUVar5->_padding_;
            ::FName::ToString(&local_248,&local_2c0);
          }
          local_240.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
          local_240.Number = *(uint *)&this_00->field_0x1c;
          ::FName::ToString(&local_240,&local_188);
          Logging::Private::BasicLog<6>
                    (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                      ::__l78::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)(*(longlong *)this_00 + 0x668))(this_00);
        return;
      }
      uVar23 = local_1b0;
      if (0.0 < fVar53) {
        fVar56 = FGenericPlatformMath::Fmod(fVar56,fVar53);
        uVar23 = local_1b0;
      }
    }
    else {
      uVar23 = local_1b0;
      if (param_5->Status == Playing) {
        if (((param_4->bAudioComponentHasBeenPlayed != false) && (pUVar50->bLooping == false)) &&
           (cVar25 = (**(code **)(*(longlong *)&this_00->field_0x250 + 0xa8))(), uVar23 = local_1b0,
           cVar25 == '\0')) {
          if ((byte)LogMovieScene._0_1_ < 6) {
            return;
          }
          pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
          if (pUVar5 == (USoundBase *)0x0) {
            ::FString::FString(&local_2d0,L"None");
          }
          else {
            local_258 = (FName)pUVar5->_padding_;
            ::FName::ToString(&local_258,&local_2d0);
          }
          local_250.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
          local_250.Number = *(uint *)&this_00->field_0x1c;
          ::FName::ToString(&local_250,&local_198);
          Logging::Private::BasicLog<6>
                    (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                      ::__l50::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (local_2d0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          return;
        }
      }
      else {
        param_4->bAudioComponentHasBeenPlayed = false;
      }
    }
  }
  local_1b0 = uVar23;
  local_352 = (**(code **)(*(longlong *)&this_00->field_0x250 + 0xa8))(&this_00->field_0x250);
  pUVar22 = local_308;
  bVar51 = local_350 != (this_00->Sound).field0_0x0.DebugPtr;
  bVar24 = false;
  bVar21 = false;
  if ((local_308 != (UWorld *)0x0) && (local_300 != (AWorldSettings *)0x0)) {
    fVar53 = (float)(**(code **)(local_300->_padding_ + 0x790))();
    if (((float)((uint)(fVar53 - fVar54) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar57) ||
       (bIgnoreAudioSyncDuringWorldTimeDilationCVar == false)) {
      pFVar31 = UWorld::GetAudioDeviceRaw(pUVar22);
      if ((UseAudioClockForSequencerDesyncCVar == 0) || (pFVar31 == (FAudioDevice *)0x0)) {
        dVar55 = pUVar22->AudioTimeSeconds;
      }
      else {
        dVar55 = pFVar31->AudioClock;
      }
      if ((((param_4->PartialDesyncComputation).bIsSet != false) &&
          (fVar57 < (float)((uint)MaxSequenceAudioDesyncToleranceCVar &
                           __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
         (MaxSequenceAudioDesyncToleranceCVar <
          (float)((uint)((fVar56 + (param_4->PartialDesyncComputation).TypedValue) - (float)dVar55)
                 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        if (5 < (byte)LogMovieScene._0_1_) {
          pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
          if (pUVar5 == (USoundBase *)0x0) {
            ::FString::FString(&local_2b0,L"None");
          }
          else {
            local_238 = (FName)pUVar5->_padding_;
            ::FName::ToString(&local_238,&local_2b0);
          }
          local_230.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
          local_230.Number = *(uint *)&this_00->field_0x1c;
          ::FName::ToString(&local_230,&local_178);
          Logging::Private::BasicLog<6>
                    (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                      ::__l112::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
        }
        bVar24 = true;
        bVar21 = true;
        goto LAB_14678af75;
      }
    }
    bVar24 = false;
  }
LAB_14678af75:
  if (((local_352 == '\0') || (bVar51)) || (bVar24)) {
    local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.Data.ArrayNum = 0;
    local_320.Data.ArrayMax = 0;
    if (local_352 == '\0') {
      pwVar48 = L"playing";
      iVar49 = 7;
    }
    else if (bVar51) {
      pwVar48 = L"state change";
      iVar49 = 0xc;
    }
    else {
      pwVar48 = L"time sync";
      iVar49 = 9;
    }
    ::FString::AppendChars(&local_320,pwVar48,iVar49);
    if (5 < (byte)LogMovieScene._0_1_) {
      local_228.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
      local_228.Number = *(uint *)&this_00->field_0x1c;
      ::FName::ToString(&local_228,&local_168);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,MovieScene::FEvaluateAudio::FInstanceHandle,UMovieSceneAudioSection&___ptr64,MovieScene::FEvaluateAudio::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                  ::O::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    this_00->bAllowSpatialization = '\0';
    this_00->field_0x4c8 = this_00->field_0x4c8 | local_356 << 3;
    if (local_330->bOverrideAttenuation != false) {
      pUVar6 = (local_330->AttenuationSettings).field0_0x0.DebugPtr;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USoundAttenuation *)0x0))
      {
        GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this_00->AttenuationSettings).field0_0x0.DebugPtr = pUVar6;
    }
    if ((param_5->Status != Scrubbing) &&
       ((cVar25 = (**(code **)(*(longlong *)&this_00->field_0x250 + 0xa8))(&this_00->field_0x250),
        cVar25 != '\0' || (bVar21)))) {
      if (5 < (byte)LogMovieScene._0_1_) {
        pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
        if (pUVar5 == (USoundBase *)0x0) {
          ::FString::FString(&local_2a0,L"None");
        }
        else {
          local_220 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_220,&local_2a0);
        }
        local_218.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_218.Number = *(uint *)&this_00->field_0x1c;
        ::FName::ToString(&local_218,&local_158);
        (**(code **)(*(longlong *)&this_00->field_0x250 + 0xa8))();
        Logging::Private::BasicLog<6>
                  (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                    ::__l169::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(*(longlong *)this_00 + 0x668))(this_00);
      if (5 < (byte)LogMovieScene._0_1_) {
        Logging::Private::BasicLog<6>
                  (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                    ::__l187::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      if (param_5->Status != Playing) {
        param_4->bAudioComponentHasBeenPlayed = false;
      }
    }
    this_00->bIsUISound = '\0';
    if (0.0 <= fVar56) {
      if (5 < (byte)LogMovieScene._0_1_) {
        pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
        if (pUVar5 == (USoundBase *)0x0) {
          ::FString::FString(&local_290,L"None");
        }
        else {
          local_2f8 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_2f8,&local_290);
        }
        local_2f8 = (FName)L"";
        if (local_290.Data.ArrayNum != 0) {
          local_2f8 = (FName)local_290.Data.AllocatorInstance.Data;
        }
        local_2f0.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_2f0.Number = *(uint *)&this_00->field_0x1c;
        ::FName::ToString(&local_2f0,&local_148);
        local_2f0 = (FName)L"";
        if (local_148.Data.ArrayNum != 0) {
          local_2f0 = (FName)local_148.Data.AllocatorInstance.Data;
        }
        uStack_2d4 = 0;
        local_208 = (ulonglong)uVar35;
        pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
        local_2d8 = uVar35;
        if (pUVar5 != (USoundBase *)0x0) {
          (**(code **)(pUVar5->_padding_ + 0x2d8))();
        }
        local_200 = uVar41;
        Logging::Private::BasicLog<6>
                  (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                    ::__l212::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if ((FName)local_290.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
      }
      pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
      if (pUVar5 == (USoundBase *)0x0) {
        bVar24 = local_350 == (USoundBase *)0x0;
      }
      else {
        bVar24 = pUVar5 == local_350;
      }
      if (!bVar24) {
        if (5 < (byte)LogMovieScene._0_1_) {
          if (local_350 == (USoundBase *)0x0) {
            ::FString::FString(&local_270,L"None");
          }
          else {
            local_1f8 = (FName)local_350->_padding_;
            ::FName::ToString(&local_1f8,&local_270);
          }
          pUVar5 = (this_00->Sound).field0_0x0.DebugPtr;
          if (pUVar5 == (USoundBase *)0x0) {
            ::FString::FString(&local_280,L"None");
          }
          else {
            local_1f0 = (FName)pUVar5->_padding_;
            ::FName::ToString(&local_1f0,&local_280);
          }
          local_1e8.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
          local_1e8.Number = *(uint *)&this_00->field_0x1c;
          ::FName::ToString(&local_1e8,&local_138);
          Logging::Private::BasicLog<6>
                    (&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                      ::__l234::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
        }
        UAudioComponent::SetSound(this_00,local_350);
      }
      (**(code **)(*(longlong *)this_00 + 0x650))(this_00);
      pUVar22 = local_308;
      if (param_5->Status == Playing) {
        param_4->bAudioComponentHasBeenPlayed = true;
      }
      if (local_308 != (UWorld *)0x0) {
        pFVar31 = UWorld::GetAudioDeviceRaw(local_308);
        if ((UseAudioClockForSequencerDesyncCVar == 0) || (pFVar31 == (FAudioDevice *)0x0)) {
          pfVar32 = &local_1cc;
          dVar55 = pUVar22->AudioTimeSeconds - (double)fVar56;
        }
        else {
          dVar55 = (double)(**(code **)(pFVar31->_padding_ + 0x238))(pFVar31);
          pfVar32 = &local_1d0;
          dVar55 = dVar55 - (double)fVar56;
        }
        if ((TOptional<float> *)pfVar32 != &param_4->PartialDesyncComputation) {
          (param_4->PartialDesyncComputation).bIsSet = true;
          (param_4->PartialDesyncComputation).TypedValue = (float)dVar55;
        }
      }
    }
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
  }
  fVar56 = __real_3d4ccccd;
  puVar39 = &this_00->field_0x250;
  if ((param_5->Status == Stepping) || (param_5->Status == Jumping)) {
    pFVar31 = (FAudioDevice *)(**(code **)(*(longlong *)puVar39 + 0x88))(puVar39);
    fVar57 = fVar56;
    if (pFVar31 != (FAudioDevice *)0x0) {
      fVar54 = FAudioDevice::GetGameDeltaTime(pFVar31);
      fVar57 = fVar54 * __real_3fc00000;
      if (fVar54 * __real_3fc00000 <= fVar56) {
        fVar57 = fVar56;
      }
    }
    UAudioComponent::StopDelayed(this_00,fVar57);
  }
  cVar25 = (**(code **)(*(longlong *)puVar39 + 0xa8))(puVar39);
  pTVar44 = local_338;
  if ((cVar25 != '\0') &&
     (local_338 !=
      (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0)) {
    puVar42 = *(undefined8 **)(local_338 + 4);
    iVar49 = *(int *)&local_338[4].field_0x8;
    puVar3 = puVar42 + iVar49;
    while( true ) {
      if (*(int *)&pTVar44[4].field_0x8 != iVar49) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_347);
      }
      if (puVar42 == puVar3) break;
      (**(code **)(*(longlong *)puVar39 + 0x18))(puVar39,*puVar42);
      puVar42 = puVar42 + 1;
    }
  }
  if ((local_356 != '\0') &&
     (pFVar31 = (FAudioDevice *)(**(code **)(*(longlong *)puVar39 + 0x88))(puVar39),
     pFVar31 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
         ::__l277::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                             ::__l277::_thread_safe_static_guard_0__),
       `private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
       ::__l277::_thread_safe_static_guard_0__ == -1)) {
      _StatPtr_STAT_MovieSceneUpdateAudioTransform = (TStatIdData *)0x0;
      pFVar33 = ::FName::FName(&local_128,"STAT_MovieSceneUpdateAudioTransform");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                  ::__l277::StatPtr_STAT_MovieSceneUpdateAudioTransform,*pFVar33,
                 L"FAudioThreadTask.MovieSceneUpdateAudioTransform","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                           ::__l277::_thread_safe_static_guard_0__);
    }
    TVar34.StatIdPtr = _StatPtr_STAT_MovieSceneUpdateAudioTransform;
    if (_StatPtr_STAT_MovieSceneUpdateAudioTransform == (TStatIdData *)0x0) {
      pFVar33 = ::FName::FName(&local_120,"STAT_MovieSceneUpdateAudioTransform");
      TVar34.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'
                       ::__l277::StatPtr_STAT_MovieSceneUpdateAudioTransform,*pFVar33,
                      L"FAudioThreadTask.MovieSceneUpdateAudioTransform","STATGROUP_TaskGraphTasks",
                      "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    uVar9 = *(undefined8 *)&this_00->field_0x1f0;
    uVar10 = *(undefined8 *)&this_00->field_0x1f8;
    uVar11 = *(undefined8 *)&this_00->field_0x200;
    uVar12 = *(undefined8 *)&this_00->field_0x208;
    uVar13 = *(undefined8 *)&this_00->field_0x210;
    uVar14 = *(undefined8 *)&this_00->field_0x218;
    uVar15 = *(undefined8 *)&this_00->field_0x220;
    uVar16 = *(undefined8 *)&this_00->field_0x228;
    uVar17 = *(undefined8 *)&this_00->field_0x230;
    uVar18 = *(undefined8 *)&this_00->field_0x238;
    uVar19 = *(undefined8 *)&this_00->field_0x240;
    uVar20 = *(undefined8 *)&this_00->field_0x248;
    local_118[0] = (code *)0x0;
    local_f0 = FMemory::Malloc(0x70,0x10);
    local_f0[2] = uVar9;
    local_f0[3] = uVar10;
    local_f0[4] = uVar11;
    local_f0[5] = uVar12;
    *local_f0 = &
                ___7__TFunction_OwnedObject_V<lambda_3>__BBF___EnsureAudioIsPlaying_FEvaluateAudio_MovieScene_UE__AEBAXPEAVUObject__UFInstanceHandle_45_AEAVUMovieSceneAudioSection__AEAUFAudioComponentEvaluationData_45_AEBUFMovieSceneContext__0_Z__00_00_Function_Private_Core_UE__6B_
    ;
    local_f0[6] = uVar13;
    local_f0[7] = uVar14;
    local_f0[8] = uVar15;
    local_f0[9] = uVar16;
    local_f0[10] = uVar17;
    local_f0[0xb] = uVar18;
    local_f0[0xc] = uVar19;
    local_f0[0xd] = uVar20;
    if (local_f0 != (undefined8 *)0xfffffffffffffff0) {
      local_118[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying'::__l277::<lambda_3>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (pFVar31,this_00->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_118,TVar34);
  }
  return;
}

// Evaluate @ 14678b920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateAudio::Evaluate
          (FEvaluateAudio *this,FMovieSceneEntityID *param_1,FMovieSceneAudioComponentData *param_2,
          FSequenceInstance *param_3,FRootInstanceHandle *param_4,double param_5,double param_6,
          UObject *param_7,bool param_8)

{
  FInstanceHandle FVar1;
  Type TVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedPlaybackState *pFVar6;
  UMovieSceneAudioSection *pUVar7;
  UMovieSceneAudioSection *pUVar8;
  UMovieSceneAudioSystem *pUVar9;
  FName FVar10;
  FName FVar11;
  code *pcVar12;
  FMovieSceneAudioComponentData *pFVar13;
  bool bVar14;
  AActor *pAVar15;
  UClass *pUVar16;
  USceneComponent *pUVar17;
  FAudioComponentEvaluationData *pFVar18;
  UWorld *pUVar19;
  UObject *pUVar20;
  FPreAnimatedAudioStorage *pFVar21;
  undefined1 *puVar22;
  FFrameTime FVar23;
  FFrameTime FVar24;
  FWeakObjectPtr *pFVar25;
  FMovieSceneContext *pFVar26;
  FObjectKey FVar27;
  FObjectKey FVar28;
  FMovieSceneContext *pFVar29;
  FObjectKey FVar30;
  float fVar31;
  FMovieSceneAudioComponentData *local_res18;
  FSequenceInstance *local_res20;
  FCachePreAnimatedValueParams local_168;
  FCachePreAnimatedValueParams local_167 [7];
  FWeakObjectPtr local_160;
  <lambda_2> local_158;
  <lambda_3> local_157 [7];
  UMovieSceneAudioSystem *local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  UObject *local_130;
  FMovieSceneActorReferenceKey local_128;
  undefined8 local_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_e0;
  UObject *local_d0;
  UMovieSceneAudioSection *local_c8;
  UMovieSceneAudioSection *local_c0;
  FWeakObjectPtr local_b8;
  FMovieSceneContext *local_b0;
  UMovieSceneAudioSection *local_a8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_a0;
  FMovieSceneObjectBindingID local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  pTVar5 = (param_3->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  pFVar29 = &param_3->Context;
  pFVar6 = (param_3->SharedPlaybackState).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18 = param_2;
  local_res20 = param_3;
  local_b0 = pFVar29;
  local_130 = FWeakObjectPtr::Get(&(pFVar6->WeakPlaybackContext).WeakPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pFVar13 = local_res18;
  pUVar7 = (local_res18->Section).field0_0x0.DebugPtr;
  if (pUVar7 == (UMovieSceneAudioSection *)0x0) {
    local_res18 = (FMovieSceneAudioComponentData *)((ulonglong)local_res18 & 0xffffffffffffff00);
    bVar14 = `UE::MovieScene::FEvaluateAudio::Evaluate'::__l3::<lambda_1>::operator()(&local_res18);
    if (!bVar14) {
      return;
    }
  }
  FVar1 = param_3->InstanceHandle;
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  if (param_7 == (UObject *)0x0) {
    FVar27.ObjectIndex = 0;
    FVar27.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_7);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_d0 = param_7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_7);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_d0);
    FVar27 = (FObjectKey)local_148;
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  if (pUVar7 == (UMovieSceneAudioSection *)0x0) {
    FVar30.ObjectIndex = 0;
    FVar30.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_140.ObjectIndex = 0;
    local_140.ObjectSerialNumber = 0;
    local_c8 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_c8);
    FVar30 = (FObjectKey)local_140;
  }
  TVar2 = (param_3->Context).Status;
  if ((TVar2 == Jumping) && (bPlayAudioWhenPlaybackJumps == false)) {
    return;
  }
  if ((param_3->Context).bHasJumped) {
    pUVar8 = (pFVar13->Section).field0_0x0.DebugPtr;
    local_150 = this->AudioSystem;
    if ((GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar8 == (UMovieSceneAudioSection *)0x0)) {
      local_100 = 0;
      if (pUVar8 == (UMovieSceneAudioSection *)0x0) {
        UMovieSceneAudioSystem::StopSound(local_150,FVar1,FVar27,(FObjectKey)0x0);
        goto LAB_14678bb68;
      }
    }
    else {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    local_c0 = pUVar8;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_c0);
    UMovieSceneAudioSystem::StopSound(local_150,FVar1,FVar27,(FObjectKey)local_138);
LAB_14678bb68:
    if (param_7 == (UObject *)0x0) {
      pUVar17 = (USceneComponent *)0x0;
      local_128.Object.ResolveParentIndex = -1;
      local_128.Object.Guid.A = 0;
      local_128.Object.Guid.B = 0;
      local_128.Object.Guid.C = 0;
      local_128.Object.Guid.D = 0;
      local_128.Object.SequenceID = 0;
      local_128.ComponentName.ComparisonIndex.Value = 0;
      local_128.ComponentName.Number = 0;
      local_128.SocketName.ComparisonIndex.Value = 0;
      local_128.SocketName.Number = 0;
      uVar3 = *(uint *)((longlong)&(param_3->Context)._padding_ + 4);
      if (uVar3 == 0x80000000) {
        if ((int)(param_3->Context)._padding_ == 0) {
          pFVar26 = (FMovieSceneContext *)((longlong)&(param_3->Context)._padding_ + 4);
          if ((*(char *)((longlong)&(param_3->Context)._padding_ + 4) == '\x02') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          pFVar26 = pFVar29;
          if (((char)pFVar29->_padding_ == '\x02') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        FVar23 = *(FFrameTime *)((longlong)&pFVar26->_padding_ + 4);
      }
      else {
        uStack_f4 = 0;
        FVar23.SubFrame = 0.0;
        FVar23.FrameNumber.Value = uVar3;
        local_f8 = uVar3;
      }
      FMovieSceneActorReferenceData::Evaluate(&pUVar7->AttachActorData,FVar23,&local_128);
      local_90.ResolveParentIndex = local_128.Object.ResolveParentIndex;
      local_90.SequenceID = local_128.Object.SequenceID;
      local_90.Guid.A = local_128.Object.Guid.A;
      local_90.Guid.B = local_128.Object.Guid.B;
      local_90.Guid.C = local_128.Object.Guid.C;
      local_90.Guid.D = local_128.Object.Guid.D;
      if (((local_128.Object.Guid.B != 0 || local_128.Object.Guid.D != 0) ||
          local_128.Object.Guid.C != 0) || local_128.Object.Guid.A != 0) {
        pTVar5 = (local_res20->SharedPlaybackState).SharedReferenceCount.ReferenceController;
        local_e0.Object = (local_res20->SharedPlaybackState).Object;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e0.SharedReferenceCount.ReferenceController = pTVar5;
        FMovieSceneObjectBindingID::ResolveBoundObjects
                  (&local_90,&local_a0,(FMovieSceneSequenceID)(local_res20->SequenceID).Value,
                   &local_e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        pUVar17 = (USceneComponent *)0x0;
        for (pFVar25 = &(local_a0.DataPtr)->WeakPtr;
            pFVar25 != &local_a0.DataPtr[local_a0.ArrayNum].WeakPtr; pFVar25 = pFVar25 + 1) {
          local_b8 = *pFVar25;
          pAVar15 = (AActor *)FWeakObjectPtr::Get(&local_b8);
          if (pAVar15 != (AActor *)0x0) {
            pUVar16 = Z_Construct_UClass_AActor_NoRegister();
            iVar4 = (int)pUVar16->_padding_;
            if (((iVar4 <= *(int *)(pAVar15->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(pAVar15->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                 &pUVar16->_padding_)) &&
               (pUVar17 = UMovieSceneAudioSection::GetAttachComponent(pUVar7,pAVar15,&local_128),
               pFVar29 = local_b0, pUVar17 != (USceneComponent *)0x0)) break;
          }
          pFVar29 = local_b0;
        }
      }
      local_f0 = 0;
      pFVar18 = UMovieSceneAudioSystem::GetAudioComponentEvaluationData
                          (this->AudioSystem,FVar1,(FObjectKey)0x0,FVar30);
      if (pFVar18 == (FAudioComponentEvaluationData *)0x0) {
        if (local_130 == (UObject *)0x0) {
          pUVar19 = (UWorld *)0x0;
        }
        else {
          pUVar19 = (UWorld *)(**(code **)(*(longlong *)local_130 + 0x180))();
        }
        pFVar18 = UMovieSceneAudioSystem::AddRootAudioComponent
                            (this->AudioSystem,FVar1,pUVar7,pUVar19);
        if ((pFVar18 == (FAudioComponentEvaluationData *)0x0) ||
           (pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar18), pUVar20 == (UObject *)0x0)) {
          bVar14 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8951503854013251990>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneAudioSystem.cpp"
                              ,0x196,"AudioComponent");
          if (bVar14) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (pFVar18 == (FAudioComponentEvaluationData *)0x0) {
            return;
          }
        }
        else {
          pUVar9 = this->AudioSystem;
          if (((pUVar9->PreAnimatedStorage).Object == (FPreAnimatedAudioStorage *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar22 = &((pUVar9->PreAnimatedStorage).Object)->field_0xd8;
          (**(code **)(*(longlong *)puVar22 + 8))(puVar22,param_1->Value,param_8,*param_4,pUVar20);
          pUVar9 = this->AudioSystem;
          if (((pUVar9->PreAnimatedStorage).Object == (FPreAnimatedAudioStorage *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_168.bForcePersist = false;
          TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
          ::CachePreAnimatedValue<_UE::MovieScene::FEvaluateAudio::Evaluate_::__l38::<lambda_2>_>
                    ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                      *)(pUVar9->PreAnimatedStorage).Object,&local_168,pUVar20,&local_158,
                     CacheIfTracked);
          bVar14 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &pUVar7->OnQueueSubtitles);
          if (bVar14) {
            FOnQueueSubtitles::operator=
                      ((FOnQueueSubtitles *)&pUVar20[0x4d].field_0x8,&pUVar7->OnQueueSubtitles);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar7->OnAudioFinished,&local_78);
          iVar4 = *(int *)&(pUVar7->OnAudioFinished).field_0x10;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
          if (0 < iVar4) {
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &pUVar20[0x47].field_0x18,
                       (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &pUVar7->OnAudioFinished);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar7->OnAudioPlaybackPercent,&local_60);
          iVar4 = *(int *)&(pUVar7->OnAudioPlaybackPercent).field_0x10;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_60);
          if (0 < iVar4) {
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar20 + 0x49),
                       (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &pUVar7->OnAudioPlaybackPercent);
          }
        }
      }
      pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar18);
      if (pUVar20 != (UObject *)0x0) {
        if (pUVar17 == (USceneComponent *)0x0) {
          if ((*(USceneComponent **)&pUVar20[5].field_0x8 != (USceneComponent *)0x0) ||
             (FVar11.ComparisonIndex.Value = *(uint *)&pUVar20[5].field_0x10,
             FVar11.Number = *(uint *)&pUVar20[5].field_0x14, FVar11 != local_128.SocketName)) {
            (**(code **)(*(longlong *)pUVar20 + 0x518))
                      (pUVar20,&FDetachmentTransformRules::KeepRelativeTransform);
          }
        }
        else if ((*(USceneComponent **)&pUVar20[5].field_0x8 != pUVar17) ||
                (FVar10.ComparisonIndex.Value = *(uint *)&pUVar20[5].field_0x10,
                FVar10.Number = *(uint *)&pUVar20[5].field_0x14, FVar10 != local_128.SocketName)) {
          (**(code **)(*(longlong *)pUVar20 + 0x508))
                    (pUVar20,pUVar17,&FAttachmentTransformRules::KeepRelativeTransform);
        }
      }
      uVar3 = *(uint *)((longlong)&pFVar29->_padding_ + 4);
      if (uVar3 == 0x80000000) {
        if ((int)pFVar29->_padding_ == 0) {
          pFVar26 = (FMovieSceneContext *)((longlong)&pFVar29->_padding_ + 4);
          if ((*(char *)((longlong)&pFVar29->_padding_ + 4) == '\x02') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          pFVar26 = pFVar29;
          if (((char)pFVar29->_padding_ == '\x02') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        FVar24 = *(FFrameTime *)((longlong)&pFVar26->_padding_ + 4);
      }
      else {
        uStack_e4 = 0;
        FVar24.SubFrame = 0.0;
        FVar24.FrameNumber.Value = uVar3;
        local_e8 = uVar3;
      }
      fVar31 = UMovieSceneSection::EvaluateEasing((UMovieSceneSection *)pUVar7,FVar24);
      pFVar18->PitchMultiplier = param_6;
      pFVar18->VolumeMultiplier = (double)fVar31 * param_5;
      EnsureAudioIsPlaying(this,(UObject *)0x0,FVar1,pUVar7,pFVar18,pFVar29,local_130);
    }
    else {
      pFVar18 = UMovieSceneAudioSystem::GetAudioComponentEvaluationData
                          (this->AudioSystem,FVar1,FVar27,FVar30);
      if (pFVar18 == (FAudioComponentEvaluationData *)0x0) {
        pFVar18 = UMovieSceneAudioSystem::AddBoundObjectAudioComponent
                            (this->AudioSystem,FVar1,pUVar7,param_7);
        if (pFVar18 == (FAudioComponentEvaluationData *)0x0) {
          return;
        }
        pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar18);
        if (pUVar20 != (UObject *)0x0) {
          pFVar21 = TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1>::operator->
                              (&this->AudioSystem->PreAnimatedStorage);
          (**(code **)(*(longlong *)&pFVar21->field_0xd8 + 8))
                    (&pFVar21->field_0xd8,param_1->Value,param_8,*param_4,pUVar20);
          pFVar21 = TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1>::operator->
                              (&this->AudioSystem->PreAnimatedStorage);
          local_167[0].bForcePersist = false;
          TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
          ::CachePreAnimatedValue<_UE::MovieScene::FEvaluateAudio::Evaluate_::__l68::<lambda_3>_>
                    ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                      *)pFVar21,local_167,pUVar20,local_157,CacheIfTracked);
          bVar14 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &pUVar7->OnQueueSubtitles);
          if (bVar14) {
            FOnQueueSubtitles::operator=
                      ((FOnQueueSubtitles *)&pUVar20[0x4d].field_0x8,&pUVar7->OnQueueSubtitles);
          }
          bVar14 = TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &pUVar7->OnAudioFinished);
          if (bVar14) {
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &pUVar20[0x47].field_0x18,
                       (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &pUVar7->OnAudioFinished);
          }
          bVar14 = TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &pUVar7->OnAudioPlaybackPercent);
          if (bVar14) {
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar20 + 0x49),
                       (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &pUVar7->OnAudioPlaybackPercent);
          }
        }
      }
      pFVar18->VolumeMultiplier = param_5;
      pFVar18->PitchMultiplier = param_6;
      EnsureAudioIsPlaying(this,param_7,FVar1,pUVar7,pFVar18,pFVar29,local_130);
    }
    return;
  }
  if ((((TVar2 - Playing & 0xfffffffc) == 0) && (TVar2 != Jumping)) &&
     ((int)(param_3->Context)._padding_ != 1)) goto LAB_14678bb68;
  pUVar7 = (pFVar13->Section).field0_0x0.DebugPtr;
  pUVar9 = this->AudioSystem;
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (UMovieSceneAudioSection *)0x0)
     ) {
    local_150 = (UMovieSceneAudioSystem *)0x0;
    if (pUVar7 == (UMovieSceneAudioSection *)0x0) {
      FVar28.ObjectIndex = 0;
      FVar28.ObjectSerialNumber = 0;
      goto LAB_14678c26c;
    }
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  local_a8 = pUVar7;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_a8);
  FVar28 = (FObjectKey)local_160;
LAB_14678c26c:
  UMovieSceneAudioSystem::StopSound(pUVar9,FVar1,FVar27,FVar28);
  return;
}

// ForEachAllocation @ 146790880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateAudio::ForEachAllocation
          (FEvaluateAudio *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,
          TRead<UE::MovieScene::FInstanceHandle> param_4,
          TRead<FMovieSceneAudioComponentData> param_5,TRead<double> param_6,TRead<double> param_7,
          TReadOptional<UObject_*> param_8)

{
  ushort uVar1;
  FBuiltInComponentTypes *pFVar2;
  FComponentHeader *pFVar3;
  longlong lVar4;
  FComponentHeader *pFVar5;
  longlong lVar6;
  FComponentHeader *pFVar7;
  ulonglong uVar8;
  FComponentHeader *pFVar9;
  
  pFVar2 = FBuiltInComponentTypes::Get();
  pFVar9 = param_1->ComponentHeaders;
  pFVar3 = (FComponentHeader *)0x0;
  uVar1 = param_1->Size;
  uVar8 = (ulonglong)uVar1;
  pFVar7 = pFVar9 + param_1->NumComponents;
  for (; (pFVar5 = pFVar3, pFVar9 != pFVar7 &&
         (pFVar5 = pFVar9, (pFVar9->ComponentType).Value != (pFVar2->Tags).RestoreState.Value));
      pFVar9 = pFVar9 + 1) {
  }
  if (uVar1 != 0) {
    if (param_8 == (TReadOptional<UObject_*>)0x0) {
      if (uVar1 != 0) {
        lVar4 = (longlong)param_7 - (longlong)param_6;
        pFVar9 = pFVar3;
        do {
          lVar6 = (longlong)(int)pFVar3;
          Evaluate(this,(FMovieSceneEntityID *)((longlong)param_2 + lVar6 * 2),
                   (FMovieSceneAudioComponentData *)((longlong)param_5 + lVar6 * 8),
                   (FSequenceInstance *)
                   ((ulonglong)*(ushort *)((longlong)param_4 + (longlong)pFVar9 * 4) * 0x140 +
                   *(longlong *)&this->InstanceRegistry->Instances),
                   (FRootInstanceHandle *)((longlong)param_3 + lVar6 * 4),*(double *)param_6,
                   *(double *)((longlong)param_6 + lVar4),(UObject *)0x0,
                   pFVar5 != (FComponentHeader *)0x0);
          param_6 = (TRead<double>)((longlong)param_6 + 8);
          pFVar3 = (FComponentHeader *)(ulonglong)((int)pFVar3 + 1);
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
        } while ((longlong)pFVar9 < (longlong)(ulonglong)uVar1);
      }
    }
    else {
      lVar6 = (longlong)param_8 - (longlong)param_7;
      lVar4 = (longlong)param_6 - (longlong)param_7;
      do {
        Evaluate(this,(FMovieSceneEntityID *)param_2,(FMovieSceneAudioComponentData *)param_5,
                 (FSequenceInstance *)
                 ((ulonglong)*(ushort *)param_4 * 0x140 +
                 *(longlong *)&this->InstanceRegistry->Instances),(FRootInstanceHandle *)param_3,
                 *(double *)((longlong)param_7 + lVar4),*(double *)param_7,
                 *(UObject **)((longlong)param_7 + lVar6),pFVar5 != (FComponentHeader *)0x0);
        param_7 = (TRead<double>)((longlong)param_7 + 8);
        param_4 = (TRead<UE::MovieScene::FInstanceHandle>)((longlong)param_4 + 4);
        param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
        param_5 = (TRead<FMovieSceneAudioComponentData>)((longlong)param_5 + 8);
        param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// operator() @ 1504f33d0

bool __thiscall
`UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8951503854013252089>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8951503854013252089>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::EnsureAudioIsPlaying(UObject*___ptr64,UE::MovieScene::FInstanceHandle,UMovieSceneAudioSection&___ptr64,UE::MovieScene::FAudioComponentEvaluationData&___ptr64,FMovieSceneContext_const&___ptr64,UObject*___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f3450

bool __thiscall `UE::MovieScene::FEvaluateAudio::Evaluate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8951503854013251932>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8951503854013251932>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FEvaluateAudio::Evaluate(UE::MovieScene::FMovieSceneEntityID_const&___ptr64,FMovieSceneAudioComponentData_const&___ptr64,UE::MovieScene::FSequenceInstance_const&___ptr64,UE::MovieScene::FRootInstanceHandle_const&___ptr64,double,double,UObject*___ptr64,bool)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

