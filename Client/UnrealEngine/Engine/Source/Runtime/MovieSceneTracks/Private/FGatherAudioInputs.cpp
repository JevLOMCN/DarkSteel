// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 146790aa0

void __thiscall
UE::MovieScene::FGatherAudioInputs::ForEachAllocation
          (FGatherAudioInputs *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FInstanceHandle> param_2,
          TRead<FMovieSceneAudioComponentData> param_3,TRead<FMovieSceneAudioInputData> param_4,
          TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<FString>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TReadOptional<bool>_>
          *param_5)

{
  UObject *pUVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  TRead<UE::MovieScene::FInstanceHandle> TVar4;
  TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<FString>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TReadOptional<bool>_>
  *pTVar5;
  undefined4 *puVar6;
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TRead<FMovieSceneAudioInputData> TVar19;
  longlong lVar20;
  int local_res8 [2];
  FEntityAllocation *local_res10;
  TRead<UE::MovieScene::FInstanceHandle> local_res18;
  longlong local_res20;
  int iStack_144;
  float local_138;
  undefined4 local_134;
  FWeakObjectPtr local_130;
  undefined4 *local_128;
  uint local_120;
  FWeakObjectPtr local_11c;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  UObject *local_100;
  uint *local_f8;
  longlong local_f0;
  longlong local_e8;
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
  *local_e0;
  TRead<FMovieSceneAudioInputData> local_d8;
  float *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  pTVar5 = param_5;
  local_e0 = (TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
              *)&this->AudioSystem->AudioInputsBySectionKey;
  param_5._0_4_ = 0;
  local_e8 = *(longlong *)&(pTVar5->Data).field_0x58;
  local_98[0] = *(longlong *)&pTVar5->Data;
  local_98[1] = *(undefined8 *)&(pTVar5->Data).field_0x8;
  local_98[2] = *(undefined8 *)&(pTVar5->Data).field_0x10;
  local_98[3] = *(undefined8 *)&(pTVar5->Data).field_0x18;
  local_78 = *(undefined8 *)&(pTVar5->Data).field_0x20;
  local_70 = *(undefined8 *)&(pTVar5->Data).field_0x28;
  local_68 = *(undefined8 *)&(pTVar5->Data).field_0x30;
  local_60 = *(undefined8 *)&(pTVar5->Data).field_0x38;
  local_58 = *(undefined8 *)&(pTVar5->Data).field_0x40;
  local_f0 = *(longlong *)&(pTVar5->Data).field_0x48;
  puVar12 = *(undefined4 **)&(pTVar5->Data).field_0x50;
  if (param_1->Size != 0) {
    lVar14 = (longlong)param_3 - (longlong)puVar12;
    local_res10 = param_1;
    local_res20 = lVar14;
    local_128 = puVar12;
    do {
      this_00 = local_e0;
      iVar18 = 0;
      pUVar1 = *(UObject **)(lVar14 + (longlong)puVar12);
      local_res18 = param_2;
      if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UObject *)0x0)) {
        iStack_144 = 0;
        if (pUVar1 != (UObject *)0x0) goto LAB_146790bc2;
        local_11c.ObjectIndex = 0;
        local_11c.ObjectSerialNumber = 0;
      }
      else {
        GC::MarkAsReachable(pUVar1);
LAB_146790bc2:
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar1);
        }
        local_130.ObjectIndex = 0;
        local_130.ObjectSerialNumber = 0;
        local_100 = pUVar1;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar1);
        }
        FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_100);
        iStack_144 = local_130.ObjectSerialNumber;
        iVar18 = local_130.ObjectIndex;
        local_11c = local_130;
      }
      local_120 = *(uint *)param_2;
      uVar8 = local_11c.ObjectSerialNumber;
      uVar9 = local_120 & 0xffff;
      uVar17 = iVar18 - uVar8 ^ uVar8 >> 0xd;
      uVar15 = (-0x61c88647 - uVar8) - uVar17 ^ uVar17 << 8;
      uVar8 = (uVar8 - uVar15) - uVar17 ^ uVar15 >> 0xd;
      uVar17 = (uVar17 - uVar8) - uVar15 ^ uVar8 >> 0xc;
      uVar15 = (uVar15 - uVar17) - uVar8 ^ uVar17 << 0x10;
      uVar8 = (uVar8 - uVar15) - uVar17 ^ uVar15 >> 5;
      uVar17 = (uVar17 - uVar8) - uVar15 ^ uVar8 >> 3;
      uVar15 = (uVar15 - uVar17) - uVar8 ^ uVar17 << 10;
      uVar9 = (uVar9 >> 2) + ((uVar8 - uVar15) - uVar17 ^ uVar15 >> 0xf) + 0x9e3779b9 + uVar9 * 0x40
              ^ uVar9;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        FVar2 = (this_00->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this_00->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        iVar16 = *(int *)((longlong)FVar10 + (ulonglong)(this_00->HashSize - 1U & uVar9) * 4);
        if (iVar16 != -1) {
          do {
            puVar11 = (undefined4 *)((longlong)iVar16 * 0x168 + *(longlong *)&this_00->Elements);
            if (((((short)*puVar11 == (short)local_120) &&
                 ((short)((uint)*puVar11 >> 0x10) == (short)(local_120 >> 0x10))) &&
                (puVar11[1] == iVar18)) && (puVar11[2] == iStack_144)) {
              if ((iVar16 != -1) && (puVar11 != (undefined4 *)0x0)) goto LAB_146790d8e;
              break;
            }
            iVar16 = puVar11[0x58];
          } while (iVar16 != -1);
        }
      }
      local_f8 = &local_120;
      TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&>_>
                (this_00,(uint)local_res8,
                 (TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&> *)
                 (ulonglong)uVar9,(bool *)&local_f8);
      puVar11 = (undefined4 *)((longlong)local_res8[0] * 0x168 + *(longlong *)&this_00->Elements);
LAB_146790d8e:
      puVar6 = local_128;
      plVar13 = local_98;
      lVar20 = 9;
      TVar19 = param_4;
      do {
        if (*(longlong *)(((longlong)param_4 - (longlong)local_98) + (longlong)plVar13) != 0) {
          if (*plVar13 == 0) {
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8951503854013251783>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneAudioSystem.cpp"
                               ,199,"DoubleResults[FloatIndex]");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            local_d0 = &local_138;
            local_138 = (float)*(double *)((longlong)puVar12 + (*plVar13 - (longlong)puVar6));
            local_d8 = TVar19;
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,float_&&>_>
                      ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                        *)(puVar11 + 4),(TPairInitializer<FName_const_&,float_&&> *)local_110,
                       (bool *)&local_d8);
          }
        }
        lVar14 = local_res20;
        TVar4 = local_res18;
        TVar19 = (TRead<FMovieSceneAudioInputData>)((longlong)TVar19 + 8);
        plVar13 = plVar13 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if (*(longlong *)((longlong)param_4 + 0x48) != 0) {
        if (local_f0 == 0) {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8951503854013251790>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneAudioSystem.cpp"
                             ,0xce,"StringResults");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          local_c0 = (longlong)(int)param_5 * 0x10 + local_f0;
          local_c8 = (longlong)param_4 + 0x48;
          TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
                    ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                      *)(puVar11 + 0x18),
                     (TPairInitializer<FName_const_&,FString_const_&> *)(local_110 + 4),
                     (bool *)&local_c8);
        }
      }
      if (*(longlong *)((longlong)param_4 + 0x58) != 0) {
        if (local_128 == (undefined4 *)0x0) {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8951503854013251796>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneAudioSystem.cpp"
                             ,0xd4,"IntegerResults");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          local_134 = *puVar12;
          local_b0 = &local_134;
          local_b8 = (longlong)param_4 + 0x58;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_&&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)(puVar11 + 0x40),(TPairInitializer<FName_const_&,int_&&> *)local_108,
                     (bool *)&local_b8);
        }
      }
      if (*(longlong *)((longlong)param_4 + 0x50) != 0) {
        if (local_e8 == 0) {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8951503854013251802>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneAudioSystem.cpp"
                             ,0xda,"BoolResults");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          local_a0 = (int)param_5 + local_e8;
          local_a8 = (longlong)param_4 + 0x50;
          TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
                    ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                      *)(puVar11 + 0x2c),
                     (TPairInitializer<FName_const_&,bool_const_&> *)(local_108 + 4),
                     (bool *)&local_a8);
        }
      }
      param_5._0_4_ = (int)param_5 + 1;
      param_4 = (TRead<FMovieSceneAudioInputData>)((longlong)param_4 + 0x60);
      param_2 = (TRead<UE::MovieScene::FInstanceHandle>)((longlong)TVar4 + 4);
      puVar12 = puVar12 + 2;
    } while ((int)param_5 < (int)(uint)local_res10->Size);
  }
  return;
}

