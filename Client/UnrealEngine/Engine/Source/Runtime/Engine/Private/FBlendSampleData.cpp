// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1473c8020

UScriptStruct * __cdecl FBlendSampleData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendSampleData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendSampleData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendSampleData,(UObject *)pUVar1,
                         L"BlendSampleData");
  }
  return Z_Registration_Info_UScriptStruct_FBlendSampleData.OuterSingleton;
}

// NormalizeDataWeight @ 14740c100

void __cdecl
FBlendSampleData::NormalizeDataWeight(TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  uint local_res18;
  ulonglong local_res20;
  ForElementType<float> local_e0;
  int local_d8 [2];
  code *local_d0;
  undefined1 *local_c8;
  FMemMark local_c0 [3];
  
  fVar19 = 0.0;
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleDataList.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                         ,800,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int *)((param_1->AllocatorInstance).Data + 0x48);
  uVar15 = (ulonglong)iVar9;
  local_res10 = CONCAT44(local_res10._4_4_,iVar9);
  puVar11 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_c8 = local_res8;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar11);
  local_e0.Data = (float *)0x0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c0[0].Mem = (FMemStackBase *)(pFVar12 + 2);
  local_c0[0].Top = (local_c0[0].Mem)->Top;
  local_c0[0].SavedChunk = *(FTaggedMemory **)(pFVar12 + 4);
  local_c0[0].bPopped = false;
  local_c0[0].NextTopmostMark = *(FMemMark **)(pFVar12 + 5);
  pFVar12[5] = (FTlsAutoCleanup)local_c0;
  *(int *)(pFVar12 + 6) = *(int *)(pFVar12 + 6) + 1;
  iVar9 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                    (4,4,iVar9,&local_e0,local_d8,local_d8 + 1);
  local_res20 = uVar15;
  memset(local_e0.Data + iVar9,0,uVar15 * 4);
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  fVar5 = __real_3727c5ac;
  iVar9 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar9) {
    lVar17 = 0;
    do {
      uVar13 = ~uVar16 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar16 < iVar9) {
        uVar14 = uVar13;
      }
      local_res18 = uVar13;
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)((param_1->AllocatorInstance).Data + lVar17 + 0x48) != (int)uVar15) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SampleDataList[PoseIndex].PerBoneBlendData.Num() == NumBones",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                             ,0x329,
                             L"Attempted to normalise a blend sample list, but the samples have differing numbers of bones."
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar19 = fVar19 + *(float *)((param_1->AllocatorInstance).Data + lVar17 + 0x10);
      uVar14 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (0 < *(int *)((param_1->AllocatorInstance).Data + lVar17 + 0x48)) {
        uVar14 = 0;
        lVar18 = 0;
        if (0 < (longlong)local_res20) {
          do {
            uVar10 = 0;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)uVar14 < *(int *)(pFVar2 + lVar17 + 0x48)) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar1 = *(float *)(*(longlong *)(pFVar2 + lVar17 + 0x40) + lVar18 * 4);
            uVar13 = 0;
            if ((int)uVar14 < local_d8[0]) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar14 = uVar14 + 1;
            local_e0.Data[lVar18] = fVar1 + local_e0.Data[lVar18];
            lVar18 = lVar18 + 1;
            uVar13 = local_res18;
          } while (lVar18 < (longlong)local_res20);
        }
        uVar15 = local_res10 & 0xffffffff;
      }
      iVar9 = param_1->ArrayNum;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x60;
    } while ((int)uVar16 < iVar9);
    if (fVar5 < fVar19) {
      if ((fVar5 < (float)((uint)(fVar19 - fVar6) & uVar7)) && (uVar16 = 0, 0 < iVar9)) {
        lVar17 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar16 < iVar9) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          uVar16 = uVar16 + 1;
          *(float *)(pFVar2 + lVar17 + 0x10) = (fVar6 / fVar19) * *(float *)(pFVar2 + lVar17 + 0x10)
          ;
          lVar17 = lVar17 + 0x60;
          iVar9 = param_1->ArrayNum;
        } while ((int)uVar16 < iVar9);
      }
      goto LAB_14740c62e;
    }
  }
  uVar16 = 0;
  if (0 < iVar9) {
    lVar17 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar16 < iVar9) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = uVar16 + 1;
      *(float *)((param_1->AllocatorInstance).Data + lVar17 + 0x10) = fVar6 / (float)iVar9;
      lVar17 = lVar17 + 0x60;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar16 < iVar9);
  }
LAB_14740c62e:
  uVar16 = 0;
  if (0 < (longlong)local_res20) {
    lVar17 = 0;
    local_res10 = 0;
    do {
      uVar15 = local_res10;
      uVar13 = ~uVar16 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar16 < local_d8[0]) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(uVar15 + local_e0.Data) <= fVar5) {
        iVar9 = param_1->ArrayNum;
        uVar14 = 0;
        if (0 < iVar9) {
          lVar18 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar14 < iVar9) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar10 = 0;
            if ((int)uVar16 < *(int *)(pFVar2 + lVar18 + 0x48)) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = lVar18 + 0x40;
            uVar14 = uVar14 + 1;
            lVar18 = lVar18 + 0x60;
            *(float *)(*(longlong *)(pFVar2 + lVar3) + lVar17 * 4) = fVar6 / (float)iVar9;
            iVar9 = param_1->ArrayNum;
            uVar15 = local_res10;
          } while ((int)uVar14 < iVar9);
        }
      }
      else {
        uVar14 = 0;
        if ((int)uVar16 < local_d8[0]) {
          uVar14 = uVar13;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((fVar5 < (float)((uint)(local_e0.Data[lVar17] - fVar6) & uVar7)) &&
           (uVar14 = 0, 0 < param_1->ArrayNum)) {
          lVar18 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar16 < local_d8[0]) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar19 = local_e0.Data[lVar17];
            uVar10 = 0;
            if ((int)uVar14 < param_1->ArrayNum) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar10 = 0;
            if ((int)uVar16 < *(int *)(pFVar2 + lVar18 + 0x48)) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = *(longlong *)(pFVar2 + lVar18 + 0x40);
            uVar14 = uVar14 + 1;
            lVar18 = lVar18 + 0x60;
            *(float *)(lVar3 + lVar17 * 4) = *(float *)(lVar3 + lVar17 * 4) / fVar19;
            uVar15 = local_res10;
          } while ((int)uVar14 < param_1->ArrayNum);
        }
      }
      local_res10 = uVar15 + 4;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (longlong)local_res20);
  }
  if (local_c0[0].bPopped == false) {
    if (((local_c0[0].Mem)->TopMark != local_c0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_c0[0].bPopped = true;
    (local_c0[0].Mem)->NumMarks = (local_c0[0].Mem)->NumMarks + -1;
    if (local_c0[0].SavedChunk != (local_c0[0].Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_c0[0].Mem,local_c0[0].SavedChunk);
    }
    (local_c0[0].Mem)->Top = local_c0[0].Top;
    (local_c0[0].Mem)->TopMark = local_c0[0].NextTopmostMark;
  }
  return;
}

// FBlendSampleData @ 147531150

FBlendSampleData * __thiscall
FBlendSampleData::FBlendSampleData(FBlendSampleData *this,FBlendSampleData *param_1)

{
  UAnimSequence *pUVar1;
  FMarkerPair FVar2;
  float fVar3;
  undefined3 uVar4;
  
  this->SampleDataIndex = param_1->SampleDataIndex;
  pUVar1 = (param_1->Animation).field0_0x0.DebugPtr;
  (this->Animation).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->TotalWeight = param_1->TotalWeight;
  this->WeightRate = param_1->WeightRate;
  this->Time = param_1->Time;
  this->PreviousTime = param_1->PreviousTime;
  this->SamplePlayRate = param_1->SamplePlayRate;
  fVar3 = (param_1->DeltaTimeRecord).Previous;
  (this->DeltaTimeRecord).Delta = (param_1->DeltaTimeRecord).Delta;
  (this->DeltaTimeRecord).Previous = fVar3;
  uVar4 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
  (this->DeltaTimeRecord).bPreviousIsValid = (param_1->DeltaTimeRecord).bPreviousIsValid;
  *(undefined3 *)&(this->DeltaTimeRecord).field_0x9 = uVar4;
  FVar2 = (param_1->MarkerTickRecord).NextMarker;
  (this->MarkerTickRecord).PreviousMarker = (param_1->MarkerTickRecord).PreviousMarker;
  (this->MarkerTickRecord).NextMarker = FVar2;
  (this->PerBoneBlendData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneBlendData).AllocatorInstance.Data =
       (param_1->PerBoneBlendData).AllocatorInstance.Data;
  (param_1->PerBoneBlendData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneBlendData).ArrayNum = (param_1->PerBoneBlendData).ArrayNum;
  (this->PerBoneBlendData).ArrayMax = (param_1->PerBoneBlendData).ArrayMax;
  (param_1->PerBoneBlendData).ArrayNum = 0;
  (param_1->PerBoneBlendData).ArrayMax = 0;
  (this->PerBoneWeightRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneWeightRate).AllocatorInstance.Data =
       (param_1->PerBoneWeightRate).AllocatorInstance.Data;
  (param_1->PerBoneWeightRate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerBoneWeightRate).ArrayNum = (param_1->PerBoneWeightRate).ArrayNum;
  (this->PerBoneWeightRate).ArrayMax = (param_1->PerBoneWeightRate).ArrayMax;
  (param_1->PerBoneWeightRate).ArrayNum = 0;
  (param_1->PerBoneWeightRate).ArrayMax = 0;
  return this;
}

// FBlendSampleData @ 147531210

FBlendSampleData * __thiscall
FBlendSampleData::FBlendSampleData(FBlendSampleData *this,FBlendSampleData *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UAnimSequence *pUVar4;
  FScriptContainerElement *pFVar5;
  FMarkerPair FVar6;
  float fVar7;
  undefined3 uVar8;
  
  this->SampleDataIndex = param_1->SampleDataIndex;
  pUVar4 = (param_1->Animation).field0_0x0.DebugPtr;
  (this->Animation).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->PerBoneBlendData;
  this->TotalWeight = param_1->TotalWeight;
  this->WeightRate = param_1->WeightRate;
  this->Time = param_1->Time;
  this->PreviousTime = param_1->PreviousTime;
  this->SamplePlayRate = param_1->SamplePlayRate;
  fVar7 = (param_1->DeltaTimeRecord).Previous;
  (this->DeltaTimeRecord).Delta = (param_1->DeltaTimeRecord).Delta;
  (this->DeltaTimeRecord).Previous = fVar7;
  uVar8 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
  (this->DeltaTimeRecord).bPreviousIsValid = (param_1->DeltaTimeRecord).bPreviousIsValid;
  *(undefined3 *)&(this->DeltaTimeRecord).field_0x9 = uVar8;
  piVar2 = &(this->PerBoneBlendData).ArrayMax;
  FVar6 = (param_1->MarkerTickRecord).NextMarker;
  (this->MarkerTickRecord).PreviousMarker = (param_1->MarkerTickRecord).PreviousMarker;
  (this->MarkerTickRecord).NextMarker = FVar6;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PerBoneBlendData).ArrayNum;
  pFVar5 = (param_1->PerBoneBlendData).AllocatorInstance.Data;
  (this->PerBoneBlendData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->PerBoneWeightRate;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PerBoneWeightRate).ArrayMax;
  iVar3 = (param_1->PerBoneWeightRate).ArrayNum;
  pFVar5 = (param_1->PerBoneWeightRate).AllocatorInstance.Data;
  (this->PerBoneWeightRate).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar3 << 2);
  }
  return this;
}

