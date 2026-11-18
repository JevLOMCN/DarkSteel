// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 146791040

void __thiscall
UE::MovieScene::FGatherAudioTriggers::ForEachAllocation
          (FGatherAudioTriggers *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FInstanceHandle> param_2,
          TRead<FMovieSceneAudioComponentData> param_3,TRead<FName> param_4)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  UMovieSceneAudioSystem *pUVar3;
  UObject *pUVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>_>
  *this_00;
  int local_res8 [2];
  FEntityAllocation *local_res10;
  int local_68;
  int iStack_64;
  FWeakObjectPtr local_60;
  UObject *local_58;
  uint *local_50;
  uint local_48;
  FWeakObjectPtr local_44;
  
  pUVar3 = this->AudioSystem;
  iVar16 = 0;
  this_00 = &pUVar3->AudioInputsBySectionKey;
  if (param_1->Size != 0) {
    lVar10 = (longlong)param_4 - (longlong)param_3;
    local_res10 = param_1;
    do {
      iStack_64 = 0;
      pUVar4 = *(UObject **)param_3;
      pFVar2 = (FScriptContainerElement *)(lVar10 + (longlong)param_3);
      if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
        if (pUVar4 != (UObject *)0x0) goto LAB_1467910e5;
        local_44.ObjectIndex = 0;
        local_44.ObjectSerialNumber = 0;
        local_68 = iStack_64;
      }
      else {
        GC::MarkAsReachable(pUVar4);
LAB_1467910e5:
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_60.ObjectIndex = 0;
        local_60.ObjectSerialNumber = 0;
        local_58 = pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_58);
        iStack_64 = local_60.ObjectSerialNumber;
        local_68 = local_60.ObjectIndex;
        local_44 = local_60;
      }
      local_48 = *(uint *)param_2;
      uVar8 = local_44.ObjectSerialNumber;
      uVar12 = local_48 & 0xffff;
      uVar15 = local_68 - uVar8 ^ uVar8 >> 0xd;
      uVar14 = (-0x61c88647 - uVar8) - uVar15 ^ uVar15 << 8;
      uVar8 = (uVar8 - uVar14) - uVar15 ^ uVar14 >> 0xd;
      uVar15 = (uVar15 - uVar8) - uVar14 ^ uVar8 >> 0xc;
      uVar14 = (uVar14 - uVar15) - uVar8 ^ uVar15 << 0x10;
      uVar8 = (uVar8 - uVar14) - uVar15 ^ uVar14 >> 5;
      uVar15 = (uVar15 - uVar8) - uVar14 ^ uVar8 >> 3;
      uVar14 = (uVar14 - uVar15) - uVar8 ^ uVar15 << 10;
      uVar12 = (uVar12 >> 2) +
               ((uVar8 - uVar14) - uVar15 ^ uVar14 >> 0xf) + 0x9e3779b9 + uVar12 * 0x40 ^ uVar12;
      if (*(int *)&(pUVar3->AudioInputsBySectionKey).field_0x8 !=
          *(int *)&(pUVar3->AudioInputsBySectionKey).field_0x34) {
        puVar5 = *(undefined1 **)&(pUVar3->AudioInputsBySectionKey).field_0x40;
        puVar13 = &(pUVar3->AudioInputsBySectionKey).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar13 = puVar5;
        }
        iVar9 = *(int *)(puVar13 +
                        (ulonglong)
                        (*(int *)&(pUVar3->AudioInputsBySectionKey).field_0x48 - 1U & uVar12) * 4);
        if (iVar9 != -1) {
          do {
            puVar11 = (undefined4 *)((longlong)iVar9 * 0x168 + *(longlong *)&this_00->field_0x0);
            if (((((short)*puVar11 == (short)local_48) &&
                 ((short)((uint)*puVar11 >> 0x10) == (short)(local_48 >> 0x10))) &&
                (puVar11[1] == local_68)) && (puVar11[2] == iStack_64)) {
              if ((iVar9 != -1) && (puVar11 != (undefined4 *)0x0)) goto LAB_1467912a9;
              break;
            }
            iVar9 = puVar11[0x58];
          } while (iVar9 != -1);
        }
      }
      local_50 = &local_48;
      TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&>_>
                ((TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
                  *)this_00,(uint)local_res8,
                 (TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&> *)
                 (ulonglong)uVar12,(bool *)&local_50);
      puVar11 = (undefined4 *)((longlong)local_res8[0] * 0x168 + *(longlong *)&this_00->field_0x0);
LAB_1467912a9:
      pFVar1 = (ForAnyElementType *)(puVar11 + 0x54);
      if (((pFVar1->Data <= pFVar2) && (pFVar2 < pFVar1->Data + (longlong)(int)puVar11[0x57] * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = puVar11[0x56];
      if (iVar9 == puVar11[0x57]) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar1,puVar11 + 0x57);
      }
      puVar11[0x56] = iVar9 + 1;
      iVar16 = iVar16 + 1;
      param_3 = (TRead<FMovieSceneAudioComponentData>)((longlong)param_3 + 8);
      param_2 = (TRead<UE::MovieScene::FInstanceHandle>)((longlong)param_2 + 4);
      *(undefined8 *)(pFVar1->Data + (longlong)iVar9 * 8) = *(undefined8 *)pFVar2;
    } while (iVar16 < (int)(uint)local_res10->Size);
  }
  return;
}

