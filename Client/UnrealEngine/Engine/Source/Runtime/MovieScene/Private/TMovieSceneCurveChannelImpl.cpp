// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 64

// CopyChannel<FMovieSceneDoubleChannel> @ 1460702f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CopyChannel<FMovieSceneDoubleChannel>
          (FMovieSceneDoubleChannel *param_1,FMovieSceneFloatChannel *param_2)

{
  int *piVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_c8 [32];
  uint local_78;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  FScriptContainerElement FStack_40;
  FScriptContainerElement local_3f;
  undefined1 uStack_3e;
  undefined1 local_3d;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (param_2->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (param_2->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  bVar12 = param_1->bHasDefaultValue == false;
  if (bVar12) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar13 = SUB84(param_1->DefaultValue,0);
    uVar14 = (undefined4)((ulonglong)param_1->DefaultValue >> 0x20);
  }
  param_2->bHasDefaultValue = !bVar12;
  param_2->DefaultValue = (float)(double)CONCAT44(uVar14,uVar13);
  uVar3 = (param_1->Times).ArrayNum;
  pFVar11 = (param_1->Times).AllocatorInstance.Data;
  if (((int)uVar3 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = (param_1->Values).ArrayNum;
  pFVar10 = (param_1->Values).AllocatorInstance.Data;
  if (((int)uVar4 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(param_2->Times).ArrayMax;
  (param_2->Times).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&(param_2->Times).AllocatorInstance,0,piVar1);
  }
  pTVar2 = &param_2->Values;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(param_2->Values).ArrayMax;
  (param_2->Values).ArrayNum = 0;
  if (*piVar1 != uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_78 = 0;
  if (0 < (int)uVar3) {
    pFVar10 = pFVar10 + 0x1c;
    do {
      pFVar5 = (param_2->Times).AllocatorInstance.Data;
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)(param_2->Times).ArrayMax * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (param_2->Times).ArrayNum;
      if (iVar8 == (param_2->Times).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_2->Times).AllocatorInstance,&(param_2->Times).ArrayMax);
      }
      (param_2->Times).ArrayNum = iVar8 + 1;
      *(undefined4 *)((param_2->Times).AllocatorInstance.Data + (longlong)iVar8 * 4) =
           *(undefined4 *)pFVar11;
      uVar7 = 0;
      if ((int)local_78 < (int)uVar4) {
        uVar7 = ~local_78 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      uStack_3e = 0;
      local_3d = 0;
      local_58 = (float)*(double *)(pFVar10 + -0x1c);
      uStack_54 = (undefined4)*(undefined8 *)(pFVar10 + -0x14);
      uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(pFVar10 + -0x14) >> 0x20);
      uStack_4c = (undefined4)*(undefined8 *)(pFVar10 + -0xc);
      uStack_48 = (undefined4)((ulonglong)*(undefined8 *)(pFVar10 + -0xc) >> 0x20);
      uStack_44 = *(undefined4 *)(pFVar10 + -4);
      FStack_40 = *pFVar10;
      local_3f = pFVar10[1];
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 0x1c)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (param_2->Values).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar11 = pFVar11 + 4;
      lVar9 = (longlong)iVar8 * 0x1c;
      (param_2->Values).ArrayNum = iVar8 + 1;
      pFVar10 = pFVar10 + 0x20;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + lVar9) = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(pFVar5 + lVar9 + 8) = CONCAT44(uStack_4c,uStack_50);
      *(ulonglong *)(pFVar5 + lVar9 + 0x10) = CONCAT44(uStack_44,uStack_48);
      *(uint *)(pFVar5 + lVar9 + 0x18) =
           CONCAT13(local_3d,CONCAT12(uStack_3e,CONCAT11(local_3f,FStack_40)));
      local_78 = local_78 + 1;
    } while ((int)local_78 < (int)uVar3);
  }
  param_2->TickResolution = param_1->TickResolution;
  return;
}

// CopyChannel<FMovieSceneFloatChannel> @ 1460706e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CopyChannel<FMovieSceneFloatChannel>
          (FMovieSceneFloatChannel *param_1,FMovieSceneDoubleChannel *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStackY_c8 [32];
  FScriptContainerElement *local_70;
  double local_58;
  double dStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  FScriptContainerElement FStack_3c;
  FScriptContainerElement FStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (param_2->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (param_2->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  bVar13 = param_1->bHasDefaultValue == false;
  if (bVar13) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = param_1->DefaultValue;
  }
  param_2->bHasDefaultValue = !bVar13;
  param_2->DefaultValue = (double)fVar14;
  uVar3 = (param_1->Times).ArrayNum;
  pFVar12 = (param_1->Times).AllocatorInstance.Data;
  if ((int)uVar3 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar4 = (param_1->Values).ArrayNum;
  local_70 = (param_1->Values).AllocatorInstance.Data;
  if ((int)uVar4 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1 = &param_2->Times;
  if (-1 < (int)uVar3) {
    piVar2 = &(param_2->Times).ArrayMax;
    (param_2->Times).ArrayNum = 0;
    if (*piVar2 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&pTVar1->AllocatorInstance,0,piVar2);
    }
    pTVar10 = &param_2->Values;
    if (-1 < (int)uVar4) {
      piVar2 = &(param_2->Values).ArrayMax;
      (param_2->Values).ArrayNum = 0;
      if (*piVar2 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar4,&pTVar10->AllocatorInstance,0,piVar2);
      }
      uVar11 = 0;
      if (0 < (int)uVar3) {
        local_70 = local_70 + 0x18;
        do {
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if ((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (longlong)(param_2->Times).ArrayMax * 4)) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar9 = (param_2->Times).ArrayNum;
          if (iVar9 == (param_2->Times).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar1->AllocatorInstance,&(param_2->Times).ArrayMax);
          }
          (param_2->Times).ArrayNum = iVar9 + 1;
          *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
               *(undefined4 *)pFVar12;
          uVar8 = 0;
          if ((int)uVar11 < (int)uVar4) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar5 = (pTVar10->AllocatorInstance).Data;
          uStack_3a = 0;
          uStack_39 = 0;
          local_58 = (double)*(float *)(local_70 + -0x18);
          dStack_50 = *(double *)(local_70 + -0x14);
          uStack_48 = *(undefined8 *)(local_70 + -0xc);
          uStack_40 = *(undefined4 *)(local_70 + -4);
          FStack_3c = *local_70;
          FStack_3b = local_70[1];
          if ((pFVar5 <= (FScriptContainerElement *)&local_58) &&
             ((FScriptContainerElement *)&local_58 <
              pFVar5 + (longlong)(param_2->Values).ArrayMax * 0x20)) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar9 = (param_2->Values).ArrayNum;
          if (iVar9 == (param_2->Values).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&pTVar10->AllocatorInstance,&(param_2->Values).ArrayMax);
          }
          (param_2->Values).ArrayNum = iVar9 + 1;
          local_70 = local_70 + 0x1c;
          uVar11 = uVar11 + 1;
          pFVar6 = (pTVar10->AllocatorInstance).Data;
          pFVar12 = pFVar12 + 4;
          pFVar5 = pFVar6 + (longlong)iVar9 * 0x20;
          *(double *)pFVar5 = local_58;
          *(double *)(pFVar5 + 8) = dStack_50;
          pFVar6 = pFVar6 + (longlong)iVar9 * 0x20 + 0x10;
          *(undefined8 *)pFVar6 = uStack_48;
          *(ulonglong *)(pFVar6 + 8) =
               CONCAT17(uStack_39,
                        CONCAT16(uStack_3a,CONCAT15(FStack_3b,CONCAT14(FStack_3c,uStack_40))));
        } while ((int)uVar11 < (int)uVar3);
      }
      param_2->TickResolution = param_1->TickResolution;
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// AddConstantKey @ 1460a6440

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AddConstantKey
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = InsertKeyInternal(param_1,param_2);
  uVar6 = 0;
  if ((int)uVar4 < (param_1->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (param_1->Values).AllocatorInstance.Data;
  *(double *)(pFVar1 + (longlong)(int)uVar4 * 0x20) = param_3;
  pFVar1[(longlong)(int)uVar4 * 0x20 + 0x1c] = (FScriptContainerElement)0x1;
  AutoSetTangents(param_1,0.0);
  return uVar4;
}

// AddConstantKey @ 1460a64f0

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AddConstantKey
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = InsertKeyInternal(param_1,param_2);
  uVar6 = 0;
  if ((int)uVar4 < (param_1->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (param_1->Values).AllocatorInstance.Data;
  *(float *)(pFVar1 + (longlong)(int)uVar4 * 0x1c) = param_3;
  pFVar1[(longlong)(int)uVar4 * 0x1c + 0x18] = (FScriptContainerElement)0x1;
  AutoSetTangents(param_1,0.0);
  return uVar4;
}

// AddCubicKey @ 1460a66e0

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AddCubicKey
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3,
          ERichCurveTangentMode param_4,FMovieSceneTangentData *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar5 = InsertKeyInternal(param_1,param_2);
  uVar7 = 0;
  if ((int)uVar5 < (param_1->Values).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  pFVar1 = (param_1->Values).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5 * 0x20;
  *(double *)(pFVar1 + lVar8) = param_3;
  pFVar1[lVar8 + 0x1c] = (FScriptContainerElement)0x2;
  pFVar1[lVar8 + 0x1d] = SUB41(param_4,0);
  uVar3 = *(undefined8 *)&param_5->ArriveTangentWeight;
  *(undefined8 *)(pFVar1 + lVar8 + 8) = *(undefined8 *)param_5;
  *(undefined8 *)(pFVar1 + lVar8 + 8 + 8) = uVar3;
  *(undefined4 *)(pFVar1 + lVar8 + 0x18) = *(undefined4 *)&param_5->TangentWeightMode;
  AutoSetTangents(param_1,0.0);
  return uVar5;
}

// AddCubicKey @ 1460a67b0

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AddCubicKey
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3,
          ERichCurveTangentMode param_4,FMovieSceneTangentData *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar5 = InsertKeyInternal(param_1,param_2);
  uVar7 = 0;
  if ((int)uVar5 < (param_1->Values).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  pFVar1 = (param_1->Values).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5 * 0x1c;
  *(float *)(pFVar1 + lVar8) = param_3;
  pFVar1[lVar8 + 0x18] = (FScriptContainerElement)0x2;
  pFVar1[lVar8 + 0x19] = SUB41(param_4,0);
  uVar3 = *(undefined8 *)&param_5->ArriveTangentWeight;
  *(undefined8 *)(pFVar1 + lVar8 + 4) = *(undefined8 *)param_5;
  *(undefined8 *)(pFVar1 + lVar8 + 4 + 8) = uVar3;
  *(undefined4 *)(pFVar1 + lVar8 + 0x14) = *(undefined4 *)&param_5->TangentWeightMode;
  AutoSetTangents(param_1,0.0);
  return uVar5;
}

// AddKeyToChannel @ 1460a6e70

FKeyHandle __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AddKeyToChannel
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,float param_3,
          EMovieSceneKeyInterpolation param_4)

{
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TEnumAsByte<ERangeBoundTypes::Type> TVar7;
  uint uVar8;
  int iVar9;
  FMovieSceneDoubleValue *pFVar10;
  undefined4 in_register_00000014;
  FMovieSceneDoubleChannel *this;
  FFrameNumber *pFVar11;
  FFrameNumber in_R8D;
  uint uVar12;
  float in_XMM3_Da;
  char in_stack_00000028;
  TRange<FFrameNumber> local_118;
  undefined1 local_108;
  FFrameNumber local_104;
  undefined1 local_100;
  FFrameNumber local_fc;
  FMovieSceneTangentData local_f8;
  FMovieSceneDoubleChannel *local_e0;
  FMovieSceneTangentData local_d8;
  FMovieSceneTangentData local_c0;
  FMovieSceneChannelData local_a8;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_90;
  TArrayView<FMovieSceneDoubleValue,int> local_88;
  FMovieSceneChannelData local_78;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_60;
  
  this = (FMovieSceneDoubleChannel *)CONCAT44(in_register_00000014,param_2.Value);
  pTVar1 = &this->Values;
  local_a8.Times = &this->Times;
  local_a8.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_e0 = param_1;
  local_a8.OwningChannel = (FMovieSceneChannel *)this;
  local_90 = pTVar1;
  if (((local_a8.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (FKeyHandle)uVar8;
  }
  iVar9 = FMovieSceneChannelData::FindKey(&local_a8,in_R8D,(FFrameNumber)0x0);
  if (iVar9 != -1) {
    local_88.DataPtr = (FMovieSceneDoubleValue *)(pTVar1->AllocatorInstance).Data;
    iVar2 = (this->Values).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (FKeyHandle)uVar8;
    }
    local_88.ArrayNum = iVar2;
    pFVar10 = TArrayView<FMovieSceneDoubleValue,int>::operator[](&local_88,iVar9);
    pFVar10->Value = (double)in_XMM3_Da;
    AutoSetTangents(this,0.0);
    goto switchD_1460a7128_default;
  }
  local_f8.UnserializedPaddingBytes[0] = '\0';
  local_f8.UnserializedPaddingBytes[1] = '\0';
  local_f8.UnserializedPaddingBytes[2] = '\0';
  local_f8.ArriveTangent = 0.0;
  local_f8.LeaveTangent = 0.0;
  local_f8.ArriveTangentWeight = 0.0;
  local_f8.LeaveTangentWeight = 0.0;
  local_f8.TangentWeightMode.Value = '\0';
  if ((byte)(in_stack_00000028 - 1U) < 2) {
    iVar9 = (this->Times).ArrayNum;
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (FKeyHandle)uVar8;
      }
    }
    else if (1 < iVar9) {
      FMovieSceneChannelData::GetTotalRange(&local_a8,&local_118);
      local_108 = 1;
      TVar7.Value = local_118.LowerBound.Type.Value;
      if (local_118.LowerBound.Type.Value == '\x02') {
        pFVar11 = &local_118.LowerBound.Value;
LAB_1460a703a:
        bVar6 = TVar7.Value != local_118.LowerBound.Type.Value;
        local_118.LowerBound.Type.Value = TVar7.Value;
        if (bVar6) goto LAB_1460a710c;
      }
      else {
        if (in_R8D.Value <= local_118.LowerBound.Value.Value) {
          if ((in_R8D.Value < local_118.LowerBound.Value.Value) ||
             (local_118.LowerBound.Type.Value != '\x01')) {
            pFVar11 = &local_104;
            TVar7.Value = '\x01';
          }
          else {
            pFVar11 = &local_118.LowerBound.Value;
          }
          goto LAB_1460a703a;
        }
        pFVar11 = &local_118.LowerBound.Value;
      }
      if ((local_118.LowerBound.Type.Value == '\x02') ||
         (pFVar11->Value == local_118.LowerBound.Value.Value)) {
        local_100 = 1;
        TVar7.Value = local_118.UpperBound.Type.Value;
        if (local_118.UpperBound.Type.Value == '\x02') {
          pFVar11 = &local_118.UpperBound.Value;
LAB_1460a7098:
          bVar6 = TVar7.Value != local_118.UpperBound.Type.Value;
          local_118.UpperBound.Type.Value = TVar7.Value;
          if (bVar6) goto LAB_1460a710c;
        }
        else {
          if (local_118.UpperBound.Value.Value <= in_R8D.Value) {
            if ((local_118.UpperBound.Value.Value < in_R8D.Value) ||
               (local_118.UpperBound.Type.Value != '\x01')) {
              pFVar11 = &local_fc;
              TVar7.Value = '\x01';
            }
            else {
              pFVar11 = &local_118.UpperBound.Value;
            }
            goto LAB_1460a7098;
          }
          pFVar11 = &local_118.UpperBound.Value;
        }
        if ((local_118.UpperBound.Type.Value == '\x02') ||
           (pFVar11->Value == local_118.UpperBound.Value.Value)) {
          dVar5 = GetTangentValue(this,in_R8D,in_XMM3_Da,__real_bfb999999999999a);
          uVar8 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar12 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          dVar5 = GetTangentValue(this,in_R8D,in_XMM3_Da,__real_3fb999999999999a);
          local_f8.LeaveTangent =
               ((float)dVar5 + (float)(double)CONCAT44(uVar12,uVar8)) * __real_3f000000;
          local_f8.ArriveTangent = local_f8.LeaveTangent;
        }
      }
    }
  }
LAB_1460a710c:
  switch(in_stack_00000028) {
  case '\0':
    local_c0.TangentWeightMode.Value = '\0';
    local_c0.UnserializedPaddingBytes[0] = '\0';
    local_c0.UnserializedPaddingBytes[1] = '\0';
    local_c0.UnserializedPaddingBytes[2] = '\0';
    local_c0.ArriveTangent = 0.0;
    local_c0.LeaveTangent = 0.0;
    local_c0.ArriveTangentWeight = 0.0;
    local_c0.LeaveTangentWeight = 0.0;
    AddCubicKey(this,in_R8D,(double)in_XMM3_Da,RCTM_Auto,&local_c0);
    break;
  case '\x01':
    AddCubicKey(this,in_R8D,(double)in_XMM3_Da,RCTM_User,&local_f8);
    break;
  case '\x02':
    AddCubicKey(this,in_R8D,(double)in_XMM3_Da,RCTM_Break,&local_f8);
    break;
  case '\x03':
    uVar12 = InsertKeyInternal(this,in_R8D);
    uVar8 = 0;
    if ((int)uVar12 < (this->Values).ArrayNum) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (FKeyHandle)uVar8;
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(double *)(pFVar3 + (longlong)(int)uVar12 * 0x20) = (double)in_XMM3_Da;
    pFVar3[(longlong)(int)uVar12 * 0x20 + 0x1c] = (FScriptContainerElement)0x0;
    AutoSetTangents(this,0.0);
    break;
  case '\x04':
    FMovieSceneDoubleChannel::AddConstantKey(this,in_R8D,(double)in_XMM3_Da);
    break;
  case '\x05':
    local_d8.TangentWeightMode.Value = '\0';
    local_d8.UnserializedPaddingBytes[0] = '\0';
    local_d8.UnserializedPaddingBytes[1] = '\0';
    local_d8.UnserializedPaddingBytes[2] = '\0';
    local_d8.ArriveTangent = 0.0;
    local_d8.LeaveTangent = 0.0;
    local_d8.ArriveTangentWeight = 0.0;
    local_d8.LeaveTangentWeight = 0.0;
    AddCubicKey(this,in_R8D,(double)in_XMM3_Da,RCTM_SmartAuto,&local_d8);
  }
switchD_1460a7128_default:
  local_78.Times = &this->Times;
  local_78.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_78.OwningChannel = (FMovieSceneChannel *)this;
  local_60 = pTVar1;
  if (((local_78.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (FKeyHandle)uVar8;
  }
  FMovieSceneChannelData::GetHandle(&local_78,(int)local_e0);
  return (FKeyHandle)(uint)local_e0;
}

// AddKeyToChannel @ 1460a7330

FKeyHandle __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AddKeyToChannel
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3,
          EMovieSceneKeyInterpolation param_4)

{
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TEnumAsByte<ERangeBoundTypes::Type> TVar6;
  uint uVar7;
  int iVar8;
  FMovieSceneFloatValue *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined4 in_register_00000014;
  FMovieSceneFloatChannel *pFVar12;
  FFrameNumber *pFVar13;
  FFrameNumber in_R8D;
  uint uVar14;
  float in_XMM3_Da;
  char in_stack_00000028;
  TRange<FFrameNumber> local_118;
  undefined1 local_108;
  FFrameNumber local_104;
  undefined1 local_100;
  FFrameNumber local_fc;
  FMovieSceneTangentData local_f8;
  FMovieSceneFloatChannel *local_e0;
  FMovieSceneTangentData local_d8;
  FMovieSceneTangentData local_c0;
  FMovieSceneChannelData local_a8;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_90;
  TArrayView<FMovieSceneFloatValue,int> local_88;
  FMovieSceneChannelData local_78;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_60;
  
  pFVar12 = (FMovieSceneFloatChannel *)CONCAT44(in_register_00000014,param_2.Value);
  pTVar1 = &pFVar12->Values;
  local_a8.Times = &pFVar12->Times;
  local_a8.KeyHandles = (FKeyHandleLookupTable *)&pFVar12->KeyHandles;
  local_e0 = param_1;
  local_a8.OwningChannel = (FMovieSceneChannel *)pFVar12;
  local_90 = pTVar1;
  if (((local_a8.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (FKeyHandle)uVar7;
  }
  iVar8 = FMovieSceneChannelData::FindKey(&local_a8,in_R8D,(FFrameNumber)0x0);
  if (iVar8 != -1) {
    local_88.DataPtr = (FMovieSceneFloatValue *)(pTVar1->AllocatorInstance).Data;
    iVar2 = (pFVar12->Values).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FKeyHandle)uVar7;
    }
    local_88.ArrayNum = iVar2;
    pFVar9 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_88,iVar8);
    pFVar9->Value = in_XMM3_Da;
    goto LAB_1460a7752;
  }
  local_f8.UnserializedPaddingBytes[0] = '\0';
  local_f8.UnserializedPaddingBytes[1] = '\0';
  local_f8.UnserializedPaddingBytes[2] = '\0';
  local_f8.ArriveTangent = 0.0;
  local_f8.LeaveTangent = 0.0;
  local_f8.ArriveTangentWeight = 0.0;
  local_f8.LeaveTangentWeight = 0.0;
  local_f8.TangentWeightMode.Value = '\0';
  if ((byte)(in_stack_00000028 - 1U) < 2) {
    iVar8 = (pFVar12->Times).ArrayNum;
    if (iVar8 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (FKeyHandle)uVar7;
      }
    }
    else if (1 < iVar8) {
      FMovieSceneChannelData::GetTotalRange(&local_a8,&local_118);
      local_108 = 1;
      TVar6.Value = local_118.LowerBound.Type.Value;
      if (local_118.LowerBound.Type.Value == '\x02') {
        pFVar13 = &local_118.LowerBound.Value;
LAB_1460a74e8:
        bVar5 = TVar6.Value != local_118.LowerBound.Type.Value;
        local_118.LowerBound.Type.Value = TVar6.Value;
        if (bVar5) goto LAB_1460a75ba;
      }
      else {
        if (in_R8D.Value <= local_118.LowerBound.Value.Value) {
          if ((in_R8D.Value < local_118.LowerBound.Value.Value) ||
             (local_118.LowerBound.Type.Value != '\x01')) {
            pFVar13 = &local_104;
            TVar6.Value = '\x01';
          }
          else {
            pFVar13 = &local_118.LowerBound.Value;
          }
          goto LAB_1460a74e8;
        }
        pFVar13 = &local_118.LowerBound.Value;
      }
      if ((local_118.LowerBound.Type.Value == '\x02') ||
         (pFVar13->Value == local_118.LowerBound.Value.Value)) {
        local_100 = 1;
        TVar6.Value = local_118.UpperBound.Type.Value;
        if (local_118.UpperBound.Type.Value == '\x02') {
          pFVar13 = &local_118.UpperBound.Value;
LAB_1460a7546:
          bVar5 = TVar6.Value != local_118.UpperBound.Type.Value;
          local_118.UpperBound.Type.Value = TVar6.Value;
          if (bVar5) goto LAB_1460a75ba;
        }
        else {
          if (local_118.UpperBound.Value.Value <= in_R8D.Value) {
            if ((local_118.UpperBound.Value.Value < in_R8D.Value) ||
               (local_118.UpperBound.Type.Value != '\x01')) {
              pFVar13 = &local_fc;
              TVar6.Value = '\x01';
            }
            else {
              pFVar13 = &local_118.UpperBound.Value;
            }
            goto LAB_1460a7546;
          }
          pFVar13 = &local_118.UpperBound.Value;
        }
        if ((local_118.UpperBound.Type.Value == '\x02') ||
           (pFVar13->Value == local_118.UpperBound.Value.Value)) {
          dVar4 = GetTangentValue(pFVar12,in_R8D,in_XMM3_Da,__real_bfb999999999999a);
          uVar7 = SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar14 = (uint)((ulonglong)dVar4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          dVar4 = GetTangentValue(pFVar12,in_R8D,in_XMM3_Da,__real_3fb999999999999a);
          local_f8.LeaveTangent =
               ((float)dVar4 + (float)(double)CONCAT44(uVar14,uVar7)) * __real_3f000000;
          local_f8.ArriveTangent = local_f8.LeaveTangent;
        }
      }
    }
  }
LAB_1460a75ba:
  switch(in_stack_00000028) {
  case '\0':
    local_c0.TangentWeightMode.Value = '\0';
    local_c0.UnserializedPaddingBytes[0] = '\0';
    local_c0.UnserializedPaddingBytes[1] = '\0';
    local_c0.UnserializedPaddingBytes[2] = '\0';
    local_c0.ArriveTangent = 0.0;
    local_c0.LeaveTangent = 0.0;
    local_c0.ArriveTangentWeight = 0.0;
    local_c0.LeaveTangentWeight = 0.0;
    AddCubicKey(pFVar12,in_R8D,in_XMM3_Da,RCTM_Auto,&local_c0);
    break;
  case '\x01':
    AddCubicKey(pFVar12,in_R8D,in_XMM3_Da,RCTM_User,&local_f8);
    break;
  case '\x02':
    AddCubicKey(pFVar12,in_R8D,in_XMM3_Da,RCTM_Break,&local_f8);
    break;
  case '\x03':
    uVar14 = InsertKeyInternal(pFVar12,in_R8D);
    uVar7 = 0;
    if ((int)uVar14 < (pFVar12->Values).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FKeyHandle)uVar7;
    }
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    lVar11 = (longlong)(int)uVar14 * 0x1c;
    pFVar10[lVar11 + 0x18] = (FScriptContainerElement)0x0;
    goto LAB_1460a774d;
  case '\x04':
    uVar14 = InsertKeyInternal(pFVar12,in_R8D);
    uVar7 = 0;
    if ((int)uVar14 < (pFVar12->Values).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (FKeyHandle)uVar7;
    }
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    lVar11 = (longlong)(int)uVar14 * 0x1c;
    pFVar10[lVar11 + 0x18] = (FScriptContainerElement)0x1;
LAB_1460a774d:
    *(float *)(pFVar10 + lVar11) = in_XMM3_Da;
LAB_1460a7752:
    AutoSetTangents(pFVar12,0.0);
    break;
  case '\x05':
    local_d8.TangentWeightMode.Value = '\0';
    local_d8.UnserializedPaddingBytes[0] = '\0';
    local_d8.UnserializedPaddingBytes[1] = '\0';
    local_d8.UnserializedPaddingBytes[2] = '\0';
    local_d8.ArriveTangent = 0.0;
    local_d8.LeaveTangent = 0.0;
    local_d8.ArriveTangentWeight = 0.0;
    local_d8.LeaveTangentWeight = 0.0;
    AddCubicKey(pFVar12,in_R8D,in_XMM3_Da,RCTM_SmartAuto,&local_d8);
  }
  local_78.Times = &pFVar12->Times;
  local_78.KeyHandles = (FKeyHandleLookupTable *)&pFVar12->KeyHandles;
  local_78.OwningChannel = (FMovieSceneChannel *)pFVar12;
  local_60 = pTVar1;
  if (((local_78.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (FKeyHandle)uVar7;
  }
  FMovieSceneChannelData::GetHandle(&local_78,(int)local_e0);
  return (FKeyHandle)(uint)local_e0;
}

// AddLinearKey @ 1460a7bb0

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AddLinearKey
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = InsertKeyInternal(param_1,param_2);
  uVar6 = 0;
  if ((int)uVar4 < (param_1->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (param_1->Values).AllocatorInstance.Data;
  *(double *)(pFVar1 + (longlong)(int)uVar4 * 0x20) = param_3;
  pFVar1[(longlong)(int)uVar4 * 0x20 + 0x1c] = (FScriptContainerElement)0x0;
  AutoSetTangents(param_1,0.0);
  return uVar4;
}

// AddLinearKey @ 1460a7c60

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AddLinearKey
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = InsertKeyInternal(param_1,param_2);
  uVar6 = 0;
  if ((int)uVar4 < (param_1->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (param_1->Values).AllocatorInstance.Data;
  *(float *)(pFVar1 + (longlong)(int)uVar4 * 0x1c) = param_3;
  pFVar1[(longlong)(int)uVar4 * 0x1c + 0x18] = (FScriptContainerElement)0x0;
  AutoSetTangents(param_1,0.0);
  return uVar4;
}

// AssignValue @ 1460ac310

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AssignValue
          (FMovieSceneDoubleChannel *param_1,FKeyHandle param_2,double param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneDoubleValue *pFVar5;
  undefined1 local_res8 [8];
  TArrayView<FMovieSceneDoubleValue,int> local_28 [2];
  
  if ((param_1 == (FMovieSceneDoubleChannel *)0xffffffffffffff90) ||
     (&param_1->Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (&param_1->KeyHandles == (FMovieSceneKeyHandleMap *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    iVar4 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)&param_1->KeyHandles,param_2);
    if (iVar4 != -1) {
      local_28[0].DataPtr = (FMovieSceneDoubleValue *)(param_1->Values).AllocatorInstance.Data;
      iVar1 = (param_1->Values).ArrayNum;
      if (iVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_28[0].ArrayNum = iVar1;
      pFVar5 = TArrayView<FMovieSceneDoubleValue,int>::operator[](local_28,iVar4);
      pFVar5->Value = param_3;
    }
  }
  return;
}

// AssignValue @ 1460ac400

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AssignValue
          (FMovieSceneFloatChannel *param_1,FKeyHandle param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMovieSceneFloatValue *pFVar5;
  undefined1 local_res8 [8];
  TArrayView<FMovieSceneFloatValue,int> local_28 [2];
  
  if ((param_1 == (FMovieSceneFloatChannel *)0xffffffffffffff90) ||
     (&param_1->Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (&param_1->KeyHandles == (FMovieSceneKeyHandleMap *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
  }
  else {
    iVar4 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)&param_1->KeyHandles,param_2);
    if (iVar4 != -1) {
      local_28[0].DataPtr = (FMovieSceneFloatValue *)(param_1->Values).AllocatorInstance.Data;
      iVar1 = (param_1->Values).ArrayNum;
      if (iVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_28[0].ArrayNum = iVar1;
      pFVar5 = TArrayView<FMovieSceneFloatValue,int>::operator[](local_28,iVar4);
      pFVar5->Value = param_3;
    }
  }
  return;
}

// AutoSetTangents @ 1460ac600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents
          (FMovieSceneDoubleChannel *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  int local_res18;
  uint local_res20;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_118;
  
  dVar5 = __real_3f1a36e2e0000000;
  if (1 < (param_1->Values).ArrayNum) {
    pFVar18 = (param_1->Values).AllocatorInstance.Data;
    if (pFVar18[0x1c] == (FScriptContainerElement)0x0) {
      pFVar18[0x18] = (FScriptContainerElement)0x0;
      if (((param_1->Values).ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->Values).AllocatorInstance.Data;
      if (((param_1->Times).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->Times).AllocatorInstance.Data;
      if (((param_1->Times).ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar21 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + 4) - *(int *)pFVar2);
      if (dVar21 <= dVar5) {
        dVar21 = dVar5;
      }
      *(float *)(pFVar18 + 0xc) =
           (float)((*(double *)(pFVar1 + 0x20) - *(double *)pFVar18) / dVar21);
    }
    else if ((pFVar18[0x1c] == (FScriptContainerElement)0x2) &&
            ((pFVar18[0x1d] == (FScriptContainerElement)0x0 ||
             (pFVar18[0x1d] == (FScriptContainerElement)0x4)))) {
      *(double *)(pFVar18 + 8) = 0.0;
      pFVar18[0x18] = (FScriptContainerElement)0x0;
    }
    iVar12 = (param_1->Values).ArrayNum;
    uVar13 = iVar12 - 1;
    uVar8 = 0;
    if ((int)uVar13 < iVar12) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar18 = (param_1->Values).AllocatorInstance.Data;
    lVar16 = (longlong)(param_1->Values).ArrayNum * 0x20;
    if (pFVar18[lVar16 + -4] == (FScriptContainerElement)0x0) {
      pFVar18[lVar16 + -8] = (FScriptContainerElement)0x0;
      iVar12 = (param_1->Values).ArrayNum;
      uVar19 = iVar12 - 1;
      uVar8 = iVar12 - 2;
      uVar13 = 0;
      if ((int)uVar8 < iVar12) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->Values).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar19 < (param_1->Times).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->Times).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar8 < (param_1->Times).ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar21 = (double)(*(int *)(pFVar2 + (longlong)(int)uVar19 * 4) -
                       *(int *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar8 * 4))
      ;
      if (dVar21 <= dVar5) {
        dVar21 = dVar5;
      }
      *(float *)(pFVar18 + lVar16 + -0x18) =
           (float)((*(double *)(pFVar18 + lVar16 + -0x20) -
                   *(double *)(pFVar1 + (longlong)(int)uVar8 * 0x20)) / dVar21);
    }
    else if ((pFVar18[lVar16 + -4] == (FScriptContainerElement)0x2) &&
            ((pFVar18[lVar16 + -3] == (FScriptContainerElement)0x0 ||
             (pFVar18[lVar16 + -3] == (FScriptContainerElement)0x4)))) {
      *(undefined8 *)(pFVar18 + lVar16 + -0x18) = 0;
      pFVar18[lVar16 + -8] = (FScriptContainerElement)0x0;
    }
    dVar6 = __real_401aaaaaaaaaaaaa;
    dVar21 = __real_3feb333333333333;
    fVar4 = __real_3a83126f;
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar19 = 0;
    iVar12 = (param_1->Values).ArrayNum;
    uVar13 = 1;
    local_res18 = 0;
    if (1 < iVar12 + -1) {
      local_138 = 1;
      local_res20 = 2;
      local_128 = 0x20;
      local_130 = 0;
      local_118 = 0;
      uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      do {
        fVar20 = 0.0;
        uVar14 = ~uVar19 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar19 < iVar12) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar25 = *(double *)((param_1->Values).AllocatorInstance.Data + local_118);
        uVar17 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < (param_1->Values).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar18 = (param_1->Values).AllocatorInstance.Data + local_128;
        if (pFVar18[0x1c] == (FScriptContainerElement)0x2) {
          if ((pFVar18[0x1d] == (FScriptContainerElement)0x0) ||
             (pFVar18[0x1d] == (FScriptContainerElement)0x4)) {
            uVar15 = ~local_res20 >> 0x1f;
            uVar9 = 0;
            if ((int)local_res20 < (param_1->Values).ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar23 = *(double *)((param_1->Values).AllocatorInstance.Data + local_128 + 0x20);
            uVar9 = 0;
            if ((int)local_res20 < (param_1->Times).ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (param_1->Times).AllocatorInstance.Data;
            uVar9 = 0;
            if ((int)uVar19 < (param_1->Times).ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar26 = (double)(*(int *)(pFVar1 + local_138 * 4 + 4) -
                             *(int *)((param_1->Times).AllocatorInstance.Data + local_130));
            if (dVar26 <= dVar5) {
              dVar26 = dVar5;
            }
            if (pFVar18[0x1d] == (FScriptContainerElement)0x4) {
              fVar20 = CalcSmartTangent(param_1,uVar13);
              if (((((float)((uint)*(float *)(pFVar18 + 8) & uVar8) <= fVar4) ||
                   ((float)((uint)(*(float *)(pFVar18 + 8) - fVar20) & uVar8) <= fVar4)) ||
                  (9 < local_res18)) || ((int)uVar13 < 2)) {
                local_res18 = 0;
              }
              else {
                local_res18 = local_res18 + 1;
                uVar19 = uVar19 - 2;
                local_128 = local_128 + -0x40;
                local_138 = local_138 + -2;
                local_118 = local_118 + -0x40;
                uVar13 = uVar13 - 2;
                local_res20 = local_res20 - 2;
                local_130 = local_130 + -8;
              }
            }
            else if (GCachedSequencerAutoTangentInterpolation == 0) {
              fVar20 = (float)((double)(float)(((dVar23 - *(double *)pFVar18) +
                                               (*(double *)pFVar18 - dVar25)) *
                                              (double)(__real_3f800000 - param_2)) / dVar26);
            }
            else if ((0 < GCachedSequencerAutoTangentInterpolation) &&
                    (((dVar22 = *(double *)pFVar18, dVar25 < dVar22 && (dVar22 < dVar23)) ||
                     ((dVar22 < dVar25 && (dVar23 < dVar22)))))) {
              dVar24 = dVar22 - dVar25;
              fVar20 = (float)((double)(float)(((dVar23 - dVar22) + dVar24) *
                                              (double)(__real_3f800000 - param_2)) / dVar26);
              if (GCachedSequencerAutoTangentInterpolation < 2) {
                dVar25 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar27,
                                          SUB84(dVar24,0) & uVar10) /
                         (double)CONCAT44((uint)((ulonglong)(dVar23 - dVar25) >> 0x20) & uVar27,
                                          SUB84(dVar23 - dVar25,0) & uVar10);
                if (dVar25 <= dVar21) {
                  if (dVar25 < ___real_3fc3333333333334) {
                    fVar20 = (float)(dVar25 * dVar6 * (double)fVar20);
                  }
                }
                else {
                  fVar20 = (float)((__real_3ff0000000000000 - (dVar25 - dVar21) * dVar6) *
                                  (double)fVar20);
                }
              }
              else if (GCachedSequencerAutoTangentInterpolation == 2) {
                uVar10 = 0;
                if ((int)uVar19 < (param_1->Times).ArrayNum) {
                  uVar10 = uVar14;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar1 = (param_1->Times).AllocatorInstance.Data;
                uVar10 = 0;
                if ((int)uVar13 < (param_1->Times).ArrayNum) {
                  uVar10 = uVar17;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                dVar26 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + local_138 * 4)
                                 - *(int *)(pFVar1 + local_130));
                uVar10 = 0;
                if ((int)uVar13 < (param_1->Times).ArrayNum) {
                  uVar10 = uVar17;
                }
                if (dVar26 <= dVar5) {
                  dVar26 = dVar5;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar1 = (param_1->Times).AllocatorInstance.Data;
                uVar10 = 0;
                if ((int)local_res20 < (param_1->Times).ArrayNum) {
                  uVar10 = uVar15;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                dVar26 = (*(double *)pFVar18 - dVar25) * (__real_3ff8000000000000 / dVar26);
                dVar25 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data +
                                          local_138 * 4 + 4) - *(int *)(pFVar1 + local_138 * 4));
                if (dVar25 <= dVar5) {
                  dVar25 = dVar5;
                }
                dVar22 = (double)fVar20;
                dVar25 = (__real_3ff8000000000000 / dVar25) * (dVar23 - *(double *)pFVar18);
                iVar12 = 1;
                if (0.0 < dVar25) {
                  iVar12 = -1;
                }
                iVar11 = 1;
                if (0.0 < dVar26) {
                  iVar11 = -1;
                }
                if (iVar11 == iVar12) {
                  iVar11 = 1;
                  if (0.0 < dVar22) {
                    iVar11 = -1;
                  }
                  if (iVar11 != iVar12) goto LAB_1460acfeb;
                  if (dVar25 < 0.0) {
                    if (dVar22 <= dVar25) {
                      dVar22 = dVar25;
                    }
                    if (dVar22 <= dVar26) {
                      dVar22 = dVar26;
                    }
                  }
                  else {
                    if (dVar25 <= dVar22) {
                      dVar22 = dVar25;
                    }
                    if (dVar26 <= dVar22) {
                      dVar22 = dVar26;
                    }
                  }
                }
                else {
LAB_1460acfeb:
                  dVar22 = 0.0;
                }
                fVar20 = (float)dVar22;
                uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              }
            }
            *(float *)(pFVar18 + 8) = fVar20;
            *(float *)(pFVar18 + 0xc) = fVar20;
            pFVar18[0x18] = (FScriptContainerElement)0x0;
          }
        }
        else if (pFVar18[0x1c] == (FScriptContainerElement)0x0) {
          pFVar18[0x18] = (FScriptContainerElement)0x0;
          uVar9 = 0;
          if ((int)local_res20 < (param_1->Values).ArrayNum) {
            uVar9 = ~local_res20 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (param_1->Values).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar13 < (param_1->Times).ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_1->Times).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar19 < (param_1->Times).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar23 = (double)(*(int *)(pFVar2 + local_138 * 4) -
                           *(int *)((param_1->Times).AllocatorInstance.Data + local_130));
          if (dVar23 <= dVar5) {
            dVar23 = dVar5;
          }
          *(float *)(pFVar18 + 8) = (float)((*(double *)pFVar18 - dVar25) / dVar23);
          uVar9 = 0;
          if ((int)local_res20 < (param_1->Times).ArrayNum) {
            uVar9 = ~local_res20 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_1->Times).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar13 < (param_1->Times).ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar25 = (double)(*(int *)(pFVar2 + local_138 * 4 + 4) -
                           *(int *)((param_1->Times).AllocatorInstance.Data + local_138 * 4));
          if (dVar25 <= dVar5) {
            dVar25 = dVar5;
          }
          *(float *)(pFVar18 + 0xc) =
               (float)((*(double *)(pFVar1 + local_128 + 0x20) - *(double *)pFVar18) / dVar25);
        }
        uVar19 = uVar19 + 1;
        local_res20 = local_res20 + 1;
        iVar12 = (param_1->Values).ArrayNum;
        local_138 = local_138 + 1;
        local_128 = local_128 + 0x20;
        local_130 = local_130 + 4;
        local_118 = local_118 + 0x20;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar12 + -1);
    }
  }
  return;
}

// AutoSetTangents @ 1460ad310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::AutoSetTangents
          (FMovieSceneFloatChannel *param_1,float param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  int local_res18;
  longlong local_res20;
  longlong local_138;
  longlong local_130;
  longlong local_120;
  
  dVar8 = __real_3f1a36e2e0000000;
  if (1 < (param_1->Values).ArrayNum) {
    pFVar16 = (param_1->Values).AllocatorInstance.Data;
    if (pFVar16[0x18] == (FScriptContainerElement)0x0) {
      pFVar16[0x14] = (FScriptContainerElement)0x0;
      if (((param_1->Values).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->Values).AllocatorInstance.Data;
      if (((param_1->Times).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->Times).AllocatorInstance.Data;
      if (((param_1->Times).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar24 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + 4) - *(int *)pFVar3);
      if (dVar24 <= dVar8) {
        dVar24 = dVar8;
      }
      *(float *)(pFVar16 + 8) =
           (float)((double)(*(float *)(pFVar2 + 0x1c) - *(float *)pFVar16) / dVar24);
    }
    else if ((pFVar16[0x18] == (FScriptContainerElement)0x2) &&
            ((pFVar16[0x19] == (FScriptContainerElement)0x0 ||
             (pFVar16[0x19] == (FScriptContainerElement)0x4)))) {
      *(undefined8 *)(pFVar16 + 4) = 0;
      pFVar16[0x14] = (FScriptContainerElement)0x0;
    }
    iVar14 = (param_1->Values).ArrayNum;
    uVar15 = iVar14 - 1;
    uVar11 = 0;
    if ((int)uVar15 < iVar14) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar16 = (param_1->Values).AllocatorInstance.Data;
    lVar18 = (longlong)(param_1->Values).ArrayNum * 0x1c;
    if (pFVar16[lVar18 + -4] == (FScriptContainerElement)0x0) {
      pFVar16[lVar18 + -8] = (FScriptContainerElement)0x0;
      iVar14 = (param_1->Values).ArrayNum;
      uVar21 = iVar14 - 1;
      uVar11 = iVar14 - 2;
      uVar15 = 0;
      if ((int)uVar11 < iVar14) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->Values).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar21 < (param_1->Times).ArrayNum) {
        uVar15 = ~uVar21 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->Times).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar11 < (param_1->Times).ArrayNum) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar24 = (double)(*(int *)(pFVar3 + (longlong)(int)uVar21 * 4) -
                       *(int *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar11 * 4)
                       );
      if (dVar24 <= dVar8) {
        dVar24 = dVar8;
      }
      *(float *)(pFVar16 + lVar18 + -0x18) =
           (float)((double)(*(float *)(pFVar16 + lVar18 + -0x1c) -
                           *(float *)(pFVar2 + (longlong)(int)uVar11 * 0x1c)) / dVar24);
    }
    else if ((pFVar16[lVar18 + -4] == (FScriptContainerElement)0x2) &&
            ((pFVar16[lVar18 + -3] == (FScriptContainerElement)0x0 ||
             (pFVar16[lVar18 + -3] == (FScriptContainerElement)0x4)))) {
      *(undefined8 *)(pFVar16 + lVar18 + -0x18) = 0;
      pFVar16[lVar18 + -8] = (FScriptContainerElement)0x0;
    }
    dVar9 = __real_401aaaaaaaaaaaaa;
    dVar24 = __real_3feb333333333333;
    fVar7 = __real_3a83126f;
    uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    iVar14 = (param_1->Values).ArrayNum;
    local_res18 = 0;
    uVar15 = 1;
    if (1 < iVar14 + -1) {
      uVar22 = 0;
      uVar21 = 2;
      local_138 = 1;
      local_res20 = 0x1c;
      local_130 = 0;
      local_120 = 0;
      fVar28 = __real_3f800000;
      do {
        fVar23 = 0.0;
        uVar20 = ~uVar22 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar22 < iVar14) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = ~uVar15 >> 0x1f;
        fVar5 = *(float *)((param_1->Values).AllocatorInstance.Data + local_120);
        uVar12 = 0;
        if ((int)uVar15 < (param_1->Values).ArrayNum) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (param_1->Values).AllocatorInstance.Data + local_res20;
        if (pFVar16[0x18] == (FScriptContainerElement)0x2) {
          if ((pFVar16[0x19] == (FScriptContainerElement)0x0) ||
             (pFVar16[0x19] == (FScriptContainerElement)0x4)) {
            uVar17 = ~uVar21 >> 0x1f;
            uVar12 = 0;
            if ((int)uVar21 < (param_1->Values).ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar6 = *(float *)((param_1->Values).AllocatorInstance.Data + local_res20 + 0x1c);
            uVar12 = 0;
            if ((int)uVar21 < (param_1->Times).ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (param_1->Times).AllocatorInstance.Data;
            uVar12 = 0;
            if ((int)uVar22 < (param_1->Times).ArrayNum) {
              uVar12 = uVar20;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            dVar26 = (double)(*(int *)(pFVar2 + local_138 * 4 + 4) -
                             *(int *)((param_1->Times).AllocatorInstance.Data + local_130));
            if (dVar26 <= dVar8) {
              dVar26 = dVar8;
            }
            if (pFVar16[0x19] == (FScriptContainerElement)0x4) {
              fVar23 = CalcSmartTangent(param_1,uVar15);
              if (((((float)((uint)*(float *)(pFVar16 + 4) & uVar11) <= fVar7) ||
                   ((float)((uint)(*(float *)(pFVar16 + 4) - fVar23) & uVar11) <= fVar7)) ||
                  (9 < local_res18)) || ((int)uVar15 < 2)) {
                local_res18 = 0;
              }
              else {
                local_res18 = local_res18 + 1;
                uVar22 = uVar22 - 2;
                local_138 = local_138 + -2;
                local_120 = local_120 + -0x38;
                local_res20 = local_res20 + -0x38;
                uVar15 = uVar15 - 2;
                uVar21 = uVar21 - 2;
                local_130 = local_130 + -8;
              }
            }
            else if (GCachedSequencerAutoTangentInterpolation == 0) {
              fVar23 = (float)((double)(((fVar6 - *(float *)pFVar16) + (*(float *)pFVar16 - fVar5))
                                       * (fVar28 - param_2)) / dVar26);
            }
            else if ((0 < GCachedSequencerAutoTangentInterpolation) &&
                    (((fVar1 = *(float *)pFVar16, fVar5 < fVar1 && (fVar1 < fVar6)) ||
                     ((fVar1 < fVar5 && (fVar6 < fVar1)))))) {
              fVar23 = (float)((double)(((fVar6 - fVar1) + (fVar1 - fVar5)) * (fVar28 - param_2)) /
                              dVar26);
              if (GCachedSequencerAutoTangentInterpolation < 2) {
                dVar26 = (double)(float)((uint)(fVar1 - fVar5) & uVar11) /
                         (double)(float)((uint)(fVar6 - fVar5) & uVar11);
                if (dVar26 <= dVar24) {
                  if (dVar26 < ___real_3fc3333333333334) {
                    fVar23 = (float)(dVar26 * dVar9 * (double)fVar23);
                  }
                }
                else {
                  fVar23 = (float)((__real_3ff0000000000000 - (dVar26 - dVar24) * dVar9) *
                                  (double)fVar23);
                }
              }
              else if (GCachedSequencerAutoTangentInterpolation == 2) {
                uVar12 = 0;
                if ((int)uVar22 < (param_1->Times).ArrayNum) {
                  uVar12 = uVar20;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar2 = (param_1->Times).AllocatorInstance.Data;
                uVar12 = 0;
                if ((int)uVar15 < (param_1->Times).ArrayNum) {
                  uVar12 = uVar19;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                dVar26 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + local_138 * 4)
                                 - *(int *)(pFVar2 + local_130));
                uVar12 = 0;
                if ((int)uVar15 < (param_1->Times).ArrayNum) {
                  uVar12 = uVar19;
                }
                if (dVar26 <= dVar8) {
                  dVar26 = dVar8;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar2 = (param_1->Times).AllocatorInstance.Data;
                uVar12 = 0;
                if ((int)uVar21 < (param_1->Times).ArrayNum) {
                  uVar12 = uVar17;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                dVar27 = (double)(*(float *)pFVar16 - fVar5) * (__real_3ff8000000000000 / dVar26);
                dVar26 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data +
                                          local_138 * 4 + 4) - *(int *)(pFVar2 + local_138 * 4));
                if (dVar26 <= dVar8) {
                  dVar26 = dVar8;
                }
                dVar25 = (__real_3ff8000000000000 / dVar26) * (double)(fVar6 - *(float *)pFVar16);
                dVar26 = (double)fVar23;
                iVar14 = 1;
                if (0.0 < dVar25) {
                  iVar14 = -1;
                }
                iVar13 = 1;
                if (0.0 < dVar27) {
                  iVar13 = -1;
                }
                if (iVar13 == iVar14) {
                  iVar13 = 1;
                  if (0.0 < dVar26) {
                    iVar13 = -1;
                  }
                  if (iVar13 != iVar14) goto LAB_1460add43;
                  if (dVar25 < 0.0) {
                    if (dVar26 <= dVar25) {
                      dVar26 = dVar25;
                    }
                    if (dVar26 <= dVar27) {
                      dVar26 = dVar27;
                    }
                  }
                  else {
                    if (dVar25 <= dVar26) {
                      dVar26 = dVar25;
                    }
                    if (dVar27 <= dVar26) {
                      dVar26 = dVar27;
                    }
                  }
                }
                else {
LAB_1460add43:
                  dVar26 = 0.0;
                }
                fVar23 = (float)dVar26;
                fVar28 = __real_3f800000;
              }
            }
            *(float *)(pFVar16 + 4) = fVar23;
            *(float *)(pFVar16 + 8) = fVar23;
            pFVar16[0x14] = (FScriptContainerElement)0x0;
          }
        }
        else if (pFVar16[0x18] == (FScriptContainerElement)0x0) {
          pFVar16[0x14] = (FScriptContainerElement)0x0;
          uVar12 = 0;
          if ((int)uVar21 < (param_1->Values).ArrayNum) {
            uVar12 = ~uVar21 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (param_1->Values).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar15 < (param_1->Times).ArrayNum) {
            uVar12 = uVar19;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_1->Times).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar22 < (param_1->Times).ArrayNum) {
            uVar12 = uVar20;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar26 = (double)(*(int *)(pFVar3 + local_138 * 4) -
                           *(int *)((param_1->Times).AllocatorInstance.Data + local_130));
          if (dVar26 <= dVar8) {
            dVar26 = dVar8;
          }
          *(float *)(pFVar16 + 4) = (float)((double)(*(float *)pFVar16 - fVar5) / dVar26);
          uVar12 = 0;
          if ((int)uVar21 < (param_1->Times).ArrayNum) {
            uVar12 = ~uVar21 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_1->Times).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar15 < (param_1->Times).ArrayNum) {
            uVar12 = uVar19;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar26 = (double)(*(int *)(pFVar3 + local_138 * 4 + 4) -
                           *(int *)((param_1->Times).AllocatorInstance.Data + local_138 * 4));
          if (dVar26 <= dVar8) {
            dVar26 = dVar8;
          }
          *(float *)(pFVar16 + 8) =
               (float)((double)(*(float *)(pFVar2 + local_res20 + 0x1c) - *(float *)pFVar16) /
                      dVar26);
        }
        uVar22 = uVar22 + 1;
        iVar14 = (param_1->Values).ArrayNum;
        local_138 = local_138 + 1;
        local_res20 = local_res20 + 0x1c;
        local_130 = local_130 + 4;
        local_120 = local_120 + 0x1c;
        uVar15 = uVar15 + 1;
        uVar21 = uVar21 + 1;
      } while ((int)uVar15 < iVar14 + -1);
    }
  }
  return;
}

// CacheExtrapolation @ 1460ae9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CacheExtrapolation
          (FMovieSceneDoubleChannel *param_1,FFrameTime param_2,FCachedInterpolation *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FFrameNumber FVar19;
  uint uVar20;
  FCachedInterpolationRange FVar21;
  double dVar22;
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  FFrameTime local_438;
  FFrameTime local_430;
  uint local_428;
  undefined4 uStack_424;
  uint local_420;
  undefined4 uStack_41c;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 local_380;
  undefined4 uStack_37c;
  FCachedInterpolation local_378;
  FCachedInterpolation local_318;
  FCachedInterpolation local_2b8;
  FCachedInterpolation local_258;
  FCachedInterpolation local_1f8;
  FCachedInterpolation local_198;
  FCachedInterpolation local_138;
  FCachedInterpolation local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_468;
  iVar5 = (param_1->Times).ArrayNum;
  if (iVar5 < 1) {
    local_448 = 0;
    local_440 = (longlong)iVar5;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
  }
  local_428 = *(uint *)(param_1->Times).AllocatorInstance.Data;
  uStack_424 = 0;
  local_430 = (FFrameTime)(ulonglong)local_428;
  FVar19 = param_2.FrameNumber.Value;
  local_438 = param_2;
  if ((FVar19.Value < (int)local_428) ||
     ((local_438.SubFrame = param_2.SubFrame, fVar10 = local_438.SubFrame, FVar19.Value == local_428
      && (local_438.SubFrame < 0.0)))) {
    if ((param_1->PreInfinityExtrap).Value != '\x05') {
      iVar5 = (param_1->Times).ArrayNum;
      if (iVar5 < 1) {
        local_448 = 0;
        local_440 = (longlong)iVar5;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
      }
      FVar21 = (FCachedInterpolationRange)
               ((ulonglong)*(uint *)(param_1->Times).AllocatorInstance.Data << 0x20 | 0x80000000);
      uVar4 = (param_1->PreInfinityExtrap).Value;
      if (uVar4 == '\x04') {
        iVar5 = (param_1->Values).ArrayNum;
        if (iVar5 < 1) {
          local_448 = 0;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        lVar15 = *(longlong *)(param_1->Values).AllocatorInstance.Data;
        iVar5 = (param_1->Times).ArrayNum;
        if (iVar5 < 1) {
          local_448 = 0;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        local_3f0 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
        local_138.Data._padding_ = CONCAT44(uStack_3ec,local_3f0);
        local_138.Data.TypeIndex = '\x01';
        local_138.Data._padding_ = lVar15;
        local_138.Range = FVar21;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_138);
        return true;
      }
      if (uVar4 == '\x03') {
        iVar5 = (param_1->Values).ArrayNum;
        if (iVar5 < 1) {
          local_448 = 0;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        pFVar6 = (param_1->Values).AllocatorInstance.Data;
        dVar9 = *(double *)pFVar6;
        dVar2 = *(double *)(pFVar6 + 8);
        cVar13 = (char)((ulonglong)*(double *)(pFVar6 + 0x18) >> 0x20);
        if (cVar13 == '\x01') {
          iVar5 = (param_1->Times).ArrayNum;
          if (iVar5 < 1) {
            local_448 = 0;
            local_440 = (longlong)iVar5;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
          }
          local_3e0 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
          local_d8.Data._padding_ = CONCAT44(uStack_3dc,local_3e0);
          local_d8.Data.TypeIndex = '\x01';
          local_d8.Data._padding_ = (longlong)dVar9;
          local_d8.Range = FVar21;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_d8);
          return true;
        }
        if (cVar13 == '\x02') {
          iVar5 = (param_1->Times).ArrayNum;
          if (iVar5 < 1) {
            local_448 = 0;
            local_440 = (longlong)iVar5;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
          }
          local_2b8.Data._padding_ = (longlong)(double)SUB84(dVar2,0);
          local_398 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
          local_2b8.Data._padding_ = CONCAT44(uStack_394,local_398);
          local_2b8.Data.TypeIndex = '\x02';
          local_2b8.Data._padding_ = (longlong)dVar9;
          local_2b8.Range = FVar21;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_2b8);
          return true;
        }
        if (cVar13 != '\0') {
          return true;
        }
        iVar5 = (param_1->Times).ArrayNum;
        if (iVar5 < 2) {
          local_448 = 1;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar5 = (param_1->Values).ArrayNum;
        if (iVar5 < 2) {
          local_448 = 1;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar2 = *(double *)((param_1->Values).AllocatorInstance.Data + 0x20);
        iVar5 = (param_1->Times).ArrayNum;
        if (iVar5 < 1) {
          local_448 = 0;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar5 = (param_1->Times).ArrayNum;
        pFVar6 = (param_1->Times).AllocatorInstance.Data;
        if (iVar5 < 2) {
          local_448 = 1;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar8 = 0.0;
        dVar22 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + 4) - *(int *)pFVar6);
        if (dVar22 != 0.0) {
          dVar8 = (dVar2 - dVar9) / dVar22;
        }
        iVar5 = (param_1->Times).ArrayNum;
        if (iVar5 < 1) {
          local_448 = 0;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        local_380 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
        local_258.Data._padding_ = CONCAT44(uStack_37c,local_380);
        local_258.Data.TypeIndex = '\x02';
        local_258.Data._padding_ = (longlong)dVar8;
        local_258.Data._padding_ = (longlong)dVar9;
        local_258.Range = FVar21;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_258);
        return true;
      }
    }
  }
  else {
    iVar5 = (param_1->Times).ArrayNum;
    uVar16 = iVar5 - 1;
    uVar14 = 0;
    if ((int)uVar16 < iVar5) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if (uVar14 == 0) {
      local_448 = (longlong)(int)uVar16;
      local_440 = (longlong)iVar5;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
    }
    iVar5 = (param_1->Times).ArrayNum;
    lVar15 = (longlong)iVar5 + -1;
    uStack_41c = 0;
    local_420 = *(uint *)((param_1->Times).AllocatorInstance.Data + lVar15 * 4);
    local_438 = (FFrameTime)(ulonglong)local_420;
    if ((((int)local_420 < FVar19.Value) || ((FVar19.Value == local_420 && (0.0 < fVar10)))) &&
       ((param_1->PostInfinityExtrap).Value != '\x05')) {
      uVar14 = 0;
      if ((int)(iVar5 - 1U) < iVar5) {
        uVar14 = ~(iVar5 - 1U) >> 0x1f;
      }
      local_430 = param_2;
      if ((uVar14 == 0) &&
         (local_448 = lVar15, local_440 = (longlong)iVar5,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      FVar21 = (FCachedInterpolationRange)
               ((ulonglong)
                *(uint *)((param_1->Times).AllocatorInstance.Data +
                         (longlong)(param_1->Times).ArrayNum * 4 + -4) | 0x7fffffff00000000);
      uVar4 = (param_1->PostInfinityExtrap).Value;
      uVar14 = 0;
      if (uVar4 == '\x04') {
        iVar5 = (param_1->Values).ArrayNum;
        uVar17 = iVar5 - 1;
        uVar16 = uVar14;
        if ((int)uVar17 < iVar5) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar5 = (param_1->Times).ArrayNum;
        uVar16 = iVar5 - 1;
        lVar15 = *(longlong *)
                  ((param_1->Values).AllocatorInstance.Data +
                  (longlong)(param_1->Values).ArrayNum * 0x20 + -0x20);
        if ((int)uVar16 < iVar5) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_448 = (longlong)(int)uVar16;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        local_410 = *(undefined4 *)
                     ((param_1->Times).AllocatorInstance.Data +
                     (longlong)(param_1->Times).ArrayNum * 4 + -4);
        local_1f8.Data._padding_ = CONCAT44(uStack_40c,local_410);
        local_1f8.Data.TypeIndex = '\x01';
        local_1f8.Data._padding_ = lVar15;
        local_1f8.Range = FVar21;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_1f8);
        return true;
      }
      if (uVar4 == '\x03') {
        iVar5 = (param_1->Values).ArrayNum;
        uVar17 = iVar5 - 1;
        uVar16 = uVar14;
        if ((int)uVar17 < iVar5) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        pFVar6 = (param_1->Values).AllocatorInstance.Data;
        lVar15 = (longlong)(param_1->Values).ArrayNum * 0x20;
        auVar3 = *(undefined1 (*) [16])(pFVar6 + lVar15 + -0x20);
        cVar13 = (char)((ulonglong)*(undefined8 *)(pFVar6 + lVar15 + -8) >> 0x20);
        dVar9 = auVar3._0_8_;
        if (cVar13 == '\x01') {
          iVar5 = (param_1->Times).ArrayNum;
          uVar16 = iVar5 - 1;
          if ((int)uVar16 < iVar5) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_448 = (longlong)(int)uVar16;
            local_440 = (longlong)iVar5;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
          }
          local_400 = *(undefined4 *)
                       ((param_1->Times).AllocatorInstance.Data +
                       (longlong)(param_1->Times).ArrayNum * 4 + -4);
          local_198.Data._padding_ = CONCAT44(uStack_3fc,local_400);
          local_198.Data.TypeIndex = '\x01';
          local_198.Data._padding_ = (longlong)dVar9;
          local_198.Range = FVar21;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_198);
          return true;
        }
        if (cVar13 == '\x02') {
          iVar5 = (param_1->Times).ArrayNum;
          uVar16 = iVar5 - 1;
          if ((int)uVar16 < iVar5) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_448 = (longlong)(int)uVar16;
            local_440 = (longlong)iVar5;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
          }
          local_378.Data._padding_ = (longlong)(double)auVar3._12_4_;
          local_3c8 = *(undefined4 *)
                       ((param_1->Times).AllocatorInstance.Data +
                       (longlong)(param_1->Times).ArrayNum * 4 + -4);
          local_378.Data._padding_ = CONCAT44(uStack_3c4,local_3c8);
          local_378.Data.TypeIndex = '\x02';
          local_378.Data._padding_ = (longlong)dVar9;
          local_378.Range = FVar21;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_378);
          return true;
        }
        if (cVar13 != '\0') {
          return true;
        }
        iVar5 = (param_1->Times).ArrayNum;
        uVar17 = iVar5 - 2;
        uVar20 = ~uVar17 >> 0x1f;
        uVar16 = uVar14;
        if ((int)uVar17 < iVar5) {
          uVar16 = uVar20;
        }
        if (uVar16 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar5 = (param_1->Times).ArrayNum;
        uVar18 = iVar5 - 1;
        uVar16 = uVar14;
        if ((int)uVar18 < iVar5) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_448 = (longlong)(int)uVar18;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar5 = (param_1->Values).ArrayNum;
        uVar16 = uVar14;
        if ((int)uVar17 < iVar5) {
          uVar16 = uVar20;
        }
        if (uVar16 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        lVar15 = (longlong)(int)uVar17;
        dVar2 = *(double *)((param_1->Values).AllocatorInstance.Data + lVar15 * 0x20);
        iVar5 = (param_1->Times).ArrayNum;
        uVar16 = uVar14;
        if ((int)uVar17 < iVar5) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (local_448 = lVar15, local_440 = (longlong)iVar5,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        iVar5 = (param_1->Times).ArrayNum;
        pFVar6 = (param_1->Times).AllocatorInstance.Data;
        uVar17 = iVar5 - 1;
        uVar16 = uVar14;
        if ((int)uVar17 < iVar5) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_448 = (longlong)(int)uVar17;
          local_440 = (longlong)iVar5;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar5 = (param_1->Times).ArrayNum;
        dVar8 = 0.0;
        lVar1 = (longlong)iVar5 + -1;
        dVar22 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + lVar1 * 4) -
                         *(int *)(pFVar6 + lVar15 * 4));
        if (dVar22 != 0.0) {
          dVar8 = (dVar9 - dVar2) / dVar22;
        }
        if ((int)(iVar5 - 1U) < iVar5) {
          uVar14 = ~(iVar5 - 1U) >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_448 = lVar1, local_440 = (longlong)iVar5,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_3b0 = *(undefined4 *)
                     ((param_1->Times).AllocatorInstance.Data +
                     (longlong)(param_1->Times).ArrayNum * 4 + -4);
        local_318.Data._padding_ = CONCAT44(uStack_3ac,local_3b0);
        local_318.Data.TypeIndex = '\x02';
        local_318.Data._padding_ = (longlong)dVar8;
        local_318.Data._padding_ = (longlong)dVar9;
        local_318.Range = FVar21;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_318);
        return true;
      }
    }
  }
  return false;
}

// CacheExtrapolation @ 1460af520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CacheExtrapolation
          (FMovieSceneFloatChannel *param_1,FFrameTime param_2,FCachedInterpolation *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FFrameNumber FVar17;
  uint uVar18;
  FCachedInterpolationRange FVar19;
  double dVar20;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong local_460;
  FFrameTime local_458;
  FFrameTime local_450;
  uint local_448;
  undefined4 uStack_444;
  uint local_440;
  undefined4 uStack_43c;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined8 local_388;
  FCachedInterpolation local_378;
  FCachedInterpolation local_318;
  FCachedInterpolation local_2b8;
  FCachedInterpolation local_258;
  FCachedInterpolation local_1f8;
  FCachedInterpolation local_198;
  FCachedInterpolation local_138;
  FCachedInterpolation local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_488;
  iVar6 = (param_1->Times).ArrayNum;
  if (iVar6 < 1) {
    local_468 = 0;
    local_460 = (longlong)iVar6;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  local_448 = *(uint *)(param_1->Times).AllocatorInstance.Data;
  uStack_444 = 0;
  local_450 = (FFrameTime)(ulonglong)local_448;
  FVar17 = param_2.FrameNumber.Value;
  local_458 = param_2;
  if ((FVar17.Value < (int)local_448) ||
     ((local_458.SubFrame = param_2.SubFrame, fVar2 = local_458.SubFrame, FVar17.Value == local_448
      && (local_458.SubFrame < 0.0)))) {
    if ((param_1->PreInfinityExtrap).Value != '\x05') {
      iVar6 = (param_1->Times).ArrayNum;
      if (iVar6 < 1) {
        local_468 = 0;
        local_460 = (longlong)iVar6;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      FVar19 = (FCachedInterpolationRange)
               ((ulonglong)*(uint *)(param_1->Times).AllocatorInstance.Data << 0x20 | 0x80000000);
      uVar4 = (param_1->PreInfinityExtrap).Value;
      if (uVar4 == '\x04') {
        iVar6 = (param_1->Values).ArrayNum;
        if (iVar6 < 1) {
          local_468 = 0;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        fVar2 = *(float *)(param_1->Values).AllocatorInstance.Data;
        iVar6 = (param_1->Times).ArrayNum;
        if (iVar6 < 1) {
          local_468 = 0;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        local_410 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
        local_138.Data._padding_ = CONCAT44(uStack_40c,local_410);
        local_138.Data.TypeIndex = '\x01';
        local_138.Data._padding_ = (longlong)(double)fVar2;
        local_138.Range = FVar19;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_138);
        return true;
      }
      if (uVar4 == '\x03') {
        iVar6 = (param_1->Values).ArrayNum;
        if (iVar6 < 1) {
          local_468 = 0;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        pFVar7 = (param_1->Values).AllocatorInstance.Data;
        FVar5 = pFVar7[0x18];
        local_388 = *(undefined8 *)(pFVar7 + 0x10);
        fVar2 = *(float *)pFVar7;
        fVar3 = *(float *)(pFVar7 + 4);
        if (FVar5 == (FScriptContainerElement)0x1) {
          iVar6 = (param_1->Times).ArrayNum;
          if (iVar6 < 1) {
            local_468 = 0;
            local_460 = (longlong)iVar6;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
          }
          local_d8.Data._padding_ = (longlong)(double)fVar2;
          local_400 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
          local_d8.Data._padding_ = CONCAT44(uStack_3fc,local_400);
          local_d8.Data.TypeIndex = '\x01';
          local_d8.Range = FVar19;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_d8);
          return true;
        }
        if (FVar5 == (FScriptContainerElement)0x2) {
          iVar6 = (param_1->Times).ArrayNum;
          if (iVar6 < 1) {
            local_468 = 0;
            local_460 = (longlong)iVar6;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
          }
          local_2b8.Data._padding_ = (longlong)(double)fVar3;
          local_3b8 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
          local_2b8.Data._padding_ = CONCAT44(uStack_3b4,local_3b8);
          local_2b8.Data.TypeIndex = '\x02';
          local_2b8.Data._padding_ = (longlong)(double)fVar2;
          local_2b8.Range = FVar19;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_2b8);
          return true;
        }
        if (FVar5 != (FScriptContainerElement)0x0) {
          return true;
        }
        iVar6 = (param_1->Times).ArrayNum;
        if (iVar6 < 2) {
          local_468 = 1;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        iVar6 = (param_1->Values).ArrayNum;
        if (iVar6 < 2) {
          local_468 = 1;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        fVar3 = *(float *)((param_1->Values).AllocatorInstance.Data + 0x1c);
        iVar6 = (param_1->Times).ArrayNum;
        if (iVar6 < 1) {
          local_468 = 0;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        iVar6 = (param_1->Times).ArrayNum;
        pFVar7 = (param_1->Times).AllocatorInstance.Data;
        if (iVar6 < 2) {
          local_468 = 1;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        dVar9 = 0.0;
        dVar20 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + 4) - *(int *)pFVar7);
        if (dVar20 != 0.0) {
          dVar9 = (double)(fVar3 - fVar2) / dVar20;
        }
        iVar6 = (param_1->Times).ArrayNum;
        if (iVar6 < 1) {
          local_468 = 0;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        local_3a0 = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
        local_258.Data._padding_ = CONCAT44(uStack_39c,local_3a0);
        local_258.Data.TypeIndex = '\x02';
        local_258.Data._padding_ = (longlong)dVar9;
        local_258.Data._padding_ = (longlong)(double)fVar2;
        local_258.Range = FVar19;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_258);
        return true;
      }
    }
  }
  else {
    iVar6 = (param_1->Times).ArrayNum;
    uVar14 = iVar6 - 1;
    uVar12 = 0;
    if ((int)uVar14 < iVar6) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_468 = (longlong)(int)uVar14;
      local_460 = (longlong)iVar6;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
    }
    iVar6 = (param_1->Times).ArrayNum;
    lVar13 = (longlong)iVar6 + -1;
    uStack_43c = 0;
    local_440 = *(uint *)((param_1->Times).AllocatorInstance.Data + lVar13 * 4);
    local_458 = (FFrameTime)(ulonglong)local_440;
    if ((((int)local_440 < FVar17.Value) || ((FVar17.Value == local_440 && (0.0 < fVar2)))) &&
       ((param_1->PostInfinityExtrap).Value != '\x05')) {
      uVar12 = 0;
      if ((int)(iVar6 - 1U) < iVar6) {
        uVar12 = ~(iVar6 - 1U) >> 0x1f;
      }
      local_450 = param_2;
      if ((uVar12 == 0) &&
         (local_468 = lVar13, local_460 = (longlong)iVar6,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      FVar19 = (FCachedInterpolationRange)
               ((ulonglong)
                *(uint *)((param_1->Times).AllocatorInstance.Data +
                         (longlong)(param_1->Times).ArrayNum * 4 + -4) | 0x7fffffff00000000);
      uVar4 = (param_1->PostInfinityExtrap).Value;
      uVar12 = 0;
      if (uVar4 == '\x04') {
        iVar6 = (param_1->Values).ArrayNum;
        uVar15 = iVar6 - 1;
        uVar14 = uVar12;
        if ((int)uVar15 < iVar6) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_468 = (longlong)(int)uVar15;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        iVar6 = (param_1->Times).ArrayNum;
        uVar14 = iVar6 - 1;
        fVar2 = *(float *)((param_1->Values).AllocatorInstance.Data +
                          (longlong)(param_1->Values).ArrayNum * 0x1c + -0x1c);
        if ((int)uVar14 < iVar6) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_468 = (longlong)(int)uVar14;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        local_430 = *(undefined4 *)
                     ((param_1->Times).AllocatorInstance.Data +
                     (longlong)(param_1->Times).ArrayNum * 4 + -4);
        local_1f8.Data._padding_ = CONCAT44(uStack_42c,local_430);
        local_1f8.Data.TypeIndex = '\x01';
        local_1f8.Data._padding_ = (longlong)(double)fVar2;
        local_1f8.Range = FVar19;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_1f8);
        return true;
      }
      if (uVar4 == '\x03') {
        iVar6 = (param_1->Values).ArrayNum;
        uVar15 = iVar6 - 1;
        uVar14 = uVar12;
        if ((int)uVar15 < iVar6) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_468 = (longlong)(int)uVar15;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        lVar13 = (longlong)(param_1->Values).ArrayNum * 0x1c;
        pFVar7 = (param_1->Values).AllocatorInstance.Data;
        FVar5 = pFVar7[lVar13 + -4];
        local_388 = *(undefined8 *)(pFVar7 + lVar13 + -0xc);
        fVar2 = *(float *)(pFVar7 + lVar13 + -0x1c);
        fVar3 = *(float *)(pFVar7 + lVar13 + -0x1c + 8);
        if (FVar5 == (FScriptContainerElement)0x1) {
          iVar6 = (param_1->Times).ArrayNum;
          uVar14 = iVar6 - 1;
          if ((int)uVar14 < iVar6) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_468 = (longlong)(int)uVar14;
            local_460 = (longlong)iVar6;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
          }
          local_198.Data._padding_ = (longlong)(double)fVar2;
          local_420 = *(undefined4 *)
                       ((param_1->Times).AllocatorInstance.Data +
                       (longlong)(param_1->Times).ArrayNum * 4 + -4);
          local_198.Data._padding_ = CONCAT44(uStack_41c,local_420);
          local_198.Data.TypeIndex = '\x01';
          local_198.Range = FVar19;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_198);
          return true;
        }
        if (FVar5 == (FScriptContainerElement)0x2) {
          iVar6 = (param_1->Times).ArrayNum;
          uVar14 = iVar6 - 1;
          if ((int)uVar14 < iVar6) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_468 = (longlong)(int)uVar14;
            local_460 = (longlong)iVar6;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
          }
          local_378.Data._padding_ = (longlong)(double)fVar3;
          local_3e8 = *(undefined4 *)
                       ((param_1->Times).AllocatorInstance.Data +
                       (longlong)(param_1->Times).ArrayNum * 4 + -4);
          local_378.Data._padding_ = CONCAT44(uStack_3e4,local_3e8);
          local_378.Data._padding_ = (longlong)(double)fVar2;
          local_378.Data.TypeIndex = '\x02';
          local_378.Range = FVar19;
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_378);
          return true;
        }
        if (FVar5 != (FScriptContainerElement)0x0) {
          return true;
        }
        iVar6 = (param_1->Times).ArrayNum;
        uVar15 = iVar6 - 2;
        uVar18 = ~uVar15 >> 0x1f;
        uVar14 = uVar12;
        if ((int)uVar15 < iVar6) {
          uVar14 = uVar18;
        }
        if (uVar14 == 0) {
          local_468 = (longlong)(int)uVar15;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        iVar6 = (param_1->Times).ArrayNum;
        uVar16 = iVar6 - 1;
        uVar14 = uVar12;
        if ((int)uVar16 < iVar6) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_468 = (longlong)(int)uVar16;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        iVar6 = (param_1->Values).ArrayNum;
        uVar14 = uVar12;
        if ((int)uVar15 < iVar6) {
          uVar14 = uVar18;
        }
        if (uVar14 == 0) {
          local_468 = (longlong)(int)uVar15;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        lVar13 = (longlong)(int)uVar15;
        fVar3 = *(float *)((param_1->Values).AllocatorInstance.Data + lVar13 * 0x1c);
        iVar6 = (param_1->Times).ArrayNum;
        uVar14 = uVar12;
        if ((int)uVar15 < iVar6) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (local_468 = lVar13, local_460 = (longlong)iVar6,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        iVar6 = (param_1->Times).ArrayNum;
        pFVar7 = (param_1->Times).AllocatorInstance.Data;
        uVar15 = iVar6 - 1;
        uVar14 = uVar12;
        if ((int)uVar15 < iVar6) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_468 = (longlong)(int)uVar15;
          local_460 = (longlong)iVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
        }
        iVar6 = (param_1->Times).ArrayNum;
        dVar9 = 0.0;
        lVar1 = (longlong)iVar6 + -1;
        dVar20 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + lVar1 * 4) -
                         *(int *)(pFVar7 + lVar13 * 4));
        if (dVar20 != 0.0) {
          dVar9 = (double)(fVar2 - fVar3) / dVar20;
        }
        if ((int)(iVar6 - 1U) < iVar6) {
          uVar12 = ~(iVar6 - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_468 = lVar1, local_460 = (longlong)iVar6,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        local_318.Data._padding_ = (longlong)(double)fVar2;
        local_3d0 = *(undefined4 *)
                     ((param_1->Times).AllocatorInstance.Data +
                     (longlong)(param_1->Times).ArrayNum * 4 + -4);
        local_318.Data._padding_ = CONCAT44(uStack_3cc,local_3d0);
        local_318.Data.TypeIndex = '\x02';
        local_318.Data._padding_ = (longlong)dVar9;
        local_318.Range = FVar19;
        UE::MovieScene::Interpolation::FCachedInterpolation::operator=(param_3,&local_318);
        return true;
      }
    }
  }
  return false;
}

// CalcSmartTangent @ 1460b00d0

float __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CalcSmartTangent
          (FMovieSceneDoubleChannel *param_1,int param_2)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 local_100 [192];
  
  uVar10 = 0;
  if (param_2 < (param_1->Values).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  pFVar2 = (param_1->Values).AllocatorInstance.Data;
  uVar16 = param_2 - 1;
  lVar19 = (longlong)param_2 * 0x20;
  uVar10 = 0;
  if ((int)uVar16 < (param_1->Values).ArrayNum) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  uVar15 = param_2 + 1;
  auVar1 = *(undefined1 (*) [16])
            ((param_1->Values).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20);
  uVar10 = 0;
  if ((int)uVar15 < (param_1->Values).ArrayNum) {
    uVar10 = ~uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar20 = __real_322bcc77;
  pFVar3 = (param_1->Values).AllocatorInstance.Data;
  lVar11 = (longlong)(int)uVar15 * 0x20;
  local_100._0_16_ = *(undefined1 (*) [16])(pFVar3 + lVar11);
  uVar27 = local_100._0_4_;
  uVar28 = local_100._4_4_;
  auVar31 = *(undefined1 (*) [16])(pFVar3 + lVar11 + 0x10);
  dVar22 = auVar1._0_8_;
  auVar6 = local_100._0_16_;
  if (GCachedSequencerAutoTangentInterpolation != 2) {
    dVar24 = *(double *)(pFVar2 + lVar19);
    if ((dVar24 <= dVar22) || (local_100._0_8_ <= dVar24)) {
      if (dVar22 <= dVar24) {
        return 0.0;
      }
      if (dVar24 <= local_100._0_8_) {
        return 0.0;
      }
    }
    if ((param_1->Values).ArrayNum + -2 < (int)uVar15) goto LAB_1460b04af;
    uVar17 = param_2 + 2;
    lVar18 = (longlong)(int)uVar15;
    do {
      lVar11 = lVar11 + 0x20;
      if (((fVar20 < (float)(local_100._8_4_ & uVar10)) || (auVar31[0xc] != '\x02')) ||
         ((auVar31._8_8_ >> 0x28 & 0xfb) != 0)) goto LAB_1460b04b5;
      bVar7 = (double)CONCAT44(uVar28,uVar27) < *(double *)(pFVar2 + lVar19);
      if (bVar7 || (double)CONCAT44(uVar28,uVar27) == *(double *)(pFVar2 + lVar19)) {
LAB_1460b039e:
        if (!bVar7) goto LAB_1460b04b5;
        uVar14 = ~uVar17 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar17 < (param_1->Values).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          fVar20 = (float)(*pcVar5)();
          return fVar20;
        }
        pFVar3 = (param_1->Values).AllocatorInstance.Data + lVar11;
        if ((double)CONCAT44(uVar28,uVar27) < *(double *)pFVar3 ||
            (double)CONCAT44(uVar28,uVar27) == *(double *)pFVar3) goto LAB_1460b04b5;
      }
      else {
        uVar14 = ~uVar17 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar17 < (param_1->Values).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          fVar20 = (float)(*pcVar5)();
          return fVar20;
        }
        if (*(double *)((param_1->Values).AllocatorInstance.Data + lVar11) <=
            (double)CONCAT44(uVar28,uVar27)) {
          bVar7 = (double)CONCAT44(uVar28,uVar27) < *(double *)(pFVar2 + lVar19);
          goto LAB_1460b039e;
        }
      }
      uVar15 = uVar15 + 1;
      uVar17 = uVar17 + 1;
      if (((uVar14 & (int)uVar15 < (param_1->Values).ArrayNum) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        fVar20 = (float)(*pcVar5)();
        return fVar20;
      }
      pFVar4 = (param_1->Values).AllocatorInstance.Data;
      lVar12 = (lVar18 + 1) * 0x20;
      pFVar3 = pFVar4 + lVar12;
      uVar27 = *(undefined4 *)&pFVar3->field_0x0;
      uVar28 = *(undefined4 *)(pFVar3 + 4);
      local_100._8_4_ = *(undefined4 *)(pFVar3 + 8);
      auVar31 = *(undefined1 (*) [16])(pFVar4 + lVar12 + 0x10);
      lVar18 = lVar18 + 1;
      auVar6 = *(undefined1 (*) [16])pFVar3;
    } while ((int)uVar15 <= (param_1->Values).ArrayNum + -2);
  }
  local_100._0_16_ = auVar6;
  uVar27 = local_100._0_4_;
  uVar28 = local_100._4_4_;
LAB_1460b04af:
LAB_1460b04b5:
  uVar10 = 0;
  if ((int)uVar16 < (param_1->Times).ArrayNum) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  pFVar3 = (param_1->Times).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_2 < (param_1->Times).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  dVar26 = __real_3fd5555555555555;
  dVar24 = __real_3f1a36e2e0000000;
  dVar30 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)param_2 * 4) -
                   *(int *)(pFVar3 + (longlong)(int)uVar16 * 4));
  uVar10 = 0;
  if (param_2 < (param_1->Times).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if (dVar30 <= __real_3f1a36e2e0000000) {
    dVar30 = __real_3f1a36e2e0000000;
  }
  dVar29 = dVar30 * __real_3fd5555555555555;
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  pFVar3 = (param_1->Times).AllocatorInstance.Data;
  uVar10 = 0;
  if ((int)uVar15 < (param_1->Times).ArrayNum) {
    uVar10 = ~uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    fVar20 = (float)(*pcVar5)();
    return fVar20;
  }
  dVar23 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) -
                   *(int *)(pFVar3 + (longlong)param_2 * 4));
  dVar25 = *(double *)(pFVar2 + lVar19);
  if (dVar23 <= dVar24) {
    dVar23 = dVar24;
  }
  dVar29 = dVar25 - (dVar29 * (double)auVar1._12_4_ + dVar22);
  dVar24 = ((double)CONCAT44(uVar28,uVar27) - dVar23 * dVar26 * (double)(float)local_100._8_4_) -
           dVar25;
  fVar20 = (float)((dVar24 + dVar29) /
                  (dVar23 * __real_3fe5555555555555 + dVar30 * __real_3fe5555555555555));
  if (GCachedSequencerAutoTangentInterpolation == 2) {
    dVar25 = dVar25 - (double)CONCAT44(uVar28,uVar27);
    if (((__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (auVar31[0xc] != '\x02')) || ((auVar31[0xd] != '\0' && ((auVar31._12_4_ >> 8 & 0xff) != 4)))
       ) {
      dVar24 = dVar24 / (dVar23 * __real_3fe5555555555555);
      dVar29 = dVar29 / (dVar30 * __real_3fe5555555555555);
      dVar22 = (double)fVar20;
      iVar13 = 1;
      if (0.0 < dVar24) {
        iVar13 = -1;
      }
      iVar9 = 1;
      if (0.0 < dVar29) {
        iVar9 = -1;
      }
      if (iVar9 == iVar13) {
        iVar9 = 1;
        if (0.0 < dVar22) {
          iVar9 = -1;
        }
        if (iVar9 == iVar13) {
          if (0.0 <= dVar24) {
            if (dVar24 <= dVar22) {
              dVar22 = dVar24;
            }
            if (dVar29 <= dVar22) {
              dVar22 = dVar29;
            }
            return (float)dVar22;
          }
          if (dVar22 <= dVar24) {
            dVar22 = dVar24;
          }
          if (dVar22 <= dVar29) {
            dVar22 = dVar29;
          }
          return (float)dVar22;
        }
      }
      fVar20 = 0.0;
    }
    else {
      fVar20 = 0.0;
    }
  }
  else {
    fVar21 = (float)(**(code **)(*(longlong *)
                                  CVarSequencerSmartAutoBlendLocationPercentage._padding_ + 0xd0))()
    ;
    dVar24 = (double)CONCAT44(uVar28,uVar27) - dVar22;
    dVar22 = (double)CONCAT44((uint)((ulonglong)(*(double *)(pFVar2 + lVar19) - dVar22) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(*(double *)(pFVar2 + lVar19) - dVar22,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) /
             (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if ((0.0 <= fVar21) && (fVar21 <= __real_3f800000)) {
      dVar26 = (double)fVar21;
      dVar24 = __real_3ff0000000000000 - dVar26;
      if (dVar22 <= dVar26) {
        if (dVar22 < dVar24) {
          fVar20 = (float)((dVar22 / dVar24) * (double)fVar20);
        }
      }
      else {
        fVar20 = (float)((__real_3ff0000000000000 - (dVar22 - dVar26) / dVar24) * (double)fVar20);
      }
    }
  }
  return fVar20;
}

// CalcSmartTangent @ 1460b08b0

float __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CalcSmartTangent
          (FMovieSceneFloatChannel *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined4 local_f0;
  
  uVar19 = 0;
  if (param_2 < (param_1->Values).ArrayNum) {
    uVar19 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  uVar16 = param_2 - 1;
  lVar11 = (longlong)param_2 * 0x1c;
  pFVar3 = (param_1->Values).AllocatorInstance.Data;
  uVar19 = 0;
  if ((int)uVar16 < (param_1->Values).ArrayNum) {
    uVar19 = ~uVar16 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  uVar15 = param_2 + 1;
  pFVar1 = (param_1->Values).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x1c;
  fVar21 = *(float *)pFVar1;
  fVar26 = *(float *)(pFVar1 + 8);
  uVar19 = 0;
  if ((int)uVar15 < (param_1->Values).ArrayNum) {
    uVar19 = ~uVar15 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  pFVar4 = (param_1->Values).AllocatorInstance.Data;
  lVar20 = (longlong)(int)uVar15 * 0x1c;
  pFVar1 = pFVar4 + lVar20;
  fVar27 = *(float *)pFVar1;
  fVar28 = *(float *)(pFVar1 + 4);
  uVar19 = *(uint *)(pFVar4 + lVar20 + 0x18);
  local_f0 = uVar19;
  if (GCachedSequencerAutoTangentInterpolation != 2) {
    fVar2 = *(float *)(pFVar3 + lVar11);
    if ((fVar2 <= fVar21) || (fVar27 <= fVar2)) {
      if (fVar21 <= fVar2) {
        return 0.0;
      }
      if (fVar2 <= fVar27) {
        return 0.0;
      }
    }
    if ((int)uVar15 <= (param_1->Values).ArrayNum + -2) {
      uVar17 = param_2 + 2;
      lVar18 = (longlong)(int)uVar15;
      while (lVar20 = lVar20 + 0x1c, local_f0 = uVar19, (float)((uint)fVar28 & uVar7) <= fVar6) {
        if (((char)uVar19 != '\x02') || ((uVar19 >> 8 & 0xfb) != 0)) goto LAB_1460b0cb5;
        bVar8 = fVar27 < *(float *)(pFVar3 + lVar11);
        if (bVar8 || fVar27 == *(float *)(pFVar3 + lVar11)) {
LAB_1460b0b8c:
          if (!bVar8) goto LAB_1460b0cb5;
          uVar14 = ~uVar17 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar17 < (param_1->Values).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            fVar21 = (float)(*pcVar5)();
            return fVar21;
          }
          pFVar1 = (param_1->Values).AllocatorInstance.Data + lVar20;
          if (fVar27 < *(float *)pFVar1 || fVar27 == *(float *)pFVar1) goto LAB_1460b0cb5;
        }
        else {
          uVar14 = ~uVar17 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar17 < (param_1->Values).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            fVar21 = (float)(*pcVar5)();
            return fVar21;
          }
          if (*(float *)((param_1->Values).AllocatorInstance.Data + lVar20) <= fVar27) {
            bVar8 = fVar27 < *(float *)(pFVar3 + lVar11);
            goto LAB_1460b0b8c;
          }
        }
        uVar15 = uVar15 + 1;
        uVar17 = uVar17 + 1;
        if (((uVar14 & (int)uVar15 < (param_1->Values).ArrayNum) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          fVar21 = (float)(*pcVar5)();
          return fVar21;
        }
        lVar12 = (lVar18 + 1) * 0x1c;
        pFVar4 = (param_1->Values).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar12;
        fVar27 = *(float *)pFVar1;
        fVar28 = *(float *)(pFVar1 + 4);
        uVar19 = *(uint *)(pFVar4 + lVar12 + 0x18);
        lVar18 = lVar18 + 1;
        local_f0 = uVar19;
        if ((param_1->Values).ArrayNum + -2 < (int)uVar15) break;
      }
    }
  }
  uVar19 = local_f0 & 0xff;
LAB_1460b0cb5:
  uVar17 = 0;
  if ((int)uVar16 < (param_1->Times).ArrayNum) {
    uVar17 = ~uVar16 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  pFVar1 = (param_1->Times).AllocatorInstance.Data;
  uVar17 = 0;
  if (param_2 < (param_1->Times).ArrayNum) {
    uVar17 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  dVar23 = __real_3fd5555555555555;
  dVar22 = __real_3f1a36e2e0000000;
  dVar30 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)param_2 * 4) -
                   *(int *)(pFVar1 + (longlong)(int)uVar16 * 4));
  uVar16 = 0;
  if (param_2 < (param_1->Times).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  if (dVar30 <= __real_3f1a36e2e0000000) {
    dVar30 = __real_3f1a36e2e0000000;
  }
  dVar24 = dVar30 * __real_3fd5555555555555;
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  pFVar1 = (param_1->Times).AllocatorInstance.Data;
  uVar16 = 0;
  if ((int)uVar15 < (param_1->Times).ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar21 = (float)(*pcVar5)();
    return fVar21;
  }
  fVar2 = *(float *)(pFVar3 + lVar11);
  dVar25 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) -
                   *(int *)(pFVar1 + (longlong)param_2 * 4));
  fVar26 = fVar2 - (float)(dVar24 * (double)fVar26 + (double)fVar21);
  if (dVar25 <= dVar22) {
    dVar25 = dVar22;
  }
  fVar28 = (float)((double)fVar27 - dVar25 * dVar23 * (double)fVar28) - fVar2;
  fVar29 = (float)((double)(fVar28 + fVar26) /
                  (dVar25 * __real_3fe5555555555555 + dVar30 * __real_3fe5555555555555));
  if (GCachedSequencerAutoTangentInterpolation == 2) {
    if (((fVar6 < (float)((uint)(fVar2 - fVar27) & uVar7)) || ((char)uVar19 != '\x02')) ||
       ((local_f0._1_1_ != '\0' && (local_f0._1_1_ != '\x04')))) {
      dVar23 = (double)fVar28 / (dVar25 * __real_3fe5555555555555);
      dVar30 = (double)fVar26 / (dVar30 * __real_3fe5555555555555);
      dVar22 = (double)fVar29;
      iVar13 = 1;
      if (0.0 < dVar23) {
        iVar13 = -1;
      }
      iVar10 = 1;
      if (0.0 < dVar30) {
        iVar10 = -1;
      }
      if (iVar10 == iVar13) {
        iVar10 = 1;
        if (0.0 < dVar22) {
          iVar10 = -1;
        }
        if (iVar10 == iVar13) {
          if (0.0 <= dVar23) {
            if (dVar23 <= dVar22) {
              dVar22 = dVar23;
            }
            if (dVar30 <= dVar22) {
              dVar22 = dVar30;
            }
            return (float)dVar22;
          }
          if (dVar22 <= dVar23) {
            dVar22 = dVar23;
          }
          if (dVar22 <= dVar30) {
            dVar22 = dVar30;
          }
          return (float)dVar22;
        }
      }
      fVar29 = 0.0;
    }
    else {
      fVar29 = 0.0;
    }
  }
  else {
    fVar26 = (float)(**(code **)(*(longlong *)
                                  CVarSequencerSmartAutoBlendLocationPercentage._padding_ + 0xd0))()
    ;
    dVar22 = (double)(float)((uint)(*(float *)(pFVar3 + lVar11) - fVar21) & uVar7) /
             (double)(float)((uint)(fVar27 - fVar21) & uVar7);
    if ((0.0 <= fVar26) && (fVar26 <= __real_3f800000)) {
      dVar30 = (double)fVar26;
      dVar23 = __real_3ff0000000000000 - dVar30;
      if (dVar22 <= dVar30) {
        if (dVar22 < dVar23) {
          fVar29 = (float)((dVar22 / dVar23) * (double)fVar29);
        }
      }
      else {
        fVar29 = (float)((__real_3ff0000000000000 - (dVar22 - dVar30) / dVar23) * (double)fVar29);
      }
    }
  }
  return fVar29;
}

// ChangeFrameResolution @ 1460b1570

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::ChangeFrameResolution
          (FMovieSceneDoubleChannel *param_1,FFrameRate param_2,FFrameRate param_3)

{
  FFrameRateRetiming *pFVar1;
  FFrameRateRetiming local_28;
  
  pFVar1 = UE::MovieScene::FFrameRateRetiming::FFrameRateRetiming(&local_28,param_2,param_3);
  RemapTimes(param_1,(IRetimingInterface *)pFVar1);
  return;
}

// ChangeFrameResolution @ 1460b15a0

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::ChangeFrameResolution
          (FMovieSceneFloatChannel *param_1,FFrameRate param_2,FFrameRate param_3)

{
  FFrameRateRetiming *pFVar1;
  FFrameRateRetiming local_28;
  
  pFVar1 = UE::MovieScene::FFrameRateRetiming::FFrameRateRetiming(&local_28,param_2,param_3);
  RemapTimes(param_1,(IRetimingInterface *)pFVar1);
  return;
}

// DeleteKeysFrom @ 1460bc020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::DeleteKeysFrom
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,bool param_3)

{
  code *pcVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  bool bVar4;
  int iVar5;
  FCachedInterpolation *this;
  undefined1 auStackY_e8 [32];
  double local_b0;
  FMovieSceneTangentData local_a8;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_90;
  FCachedInterpolation local_70;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_90._padding_ = (longlong)&param_1->KeyHandles;
  local_90._padding_ = (longlong)&param_1->Times;
  local_90.Values = &param_1->Values;
  local_90._padding_ = (longlong)param_1;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_90._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_90.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = (param_1->Times).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < iVar5) {
    iVar5 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_90,param_2,(FFrameNumber)0x0);
    if (iVar5 == -1) {
      FVar2.SubFrame = 0.0;
      FVar2.FrameNumber.Value = param_2.Value;
      local_b0 = 0.0;
      this = GetInterpolationForTime(&local_70,param_1,(FTimeEvaluationCache *)0x0,FVar2);
      FVar3.SubFrame = 0.0;
      FVar3.FrameNumber.Value = param_2.Value;
      bVar4 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,FVar3,&local_b0);
      if (bVar4) {
        local_a8.UnserializedPaddingBytes[0] = '\0';
        local_a8.UnserializedPaddingBytes[1] = '\0';
        local_a8.UnserializedPaddingBytes[2] = '\0';
        local_a8.TangentWeightMode.Value = '\0';
        local_a8.ArriveTangent = 0.0;
        local_a8.LeaveTangent = 0.0;
        local_a8.ArriveTangentWeight = 0.0;
        local_a8.LeaveTangentWeight = 0.0;
        AddCubicKey(param_1,param_2,local_b0,RCTM_Auto,&local_a8);
      }
    }
  }
  TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeysFrom(&local_90,param_2,param_3);
  return;
}

// DeleteKeysFrom @ 1460bc1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::DeleteKeysFrom
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,bool param_3)

{
  code *pcVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  bool bVar4;
  int iVar5;
  FCachedInterpolation *this;
  undefined1 auStackY_e8 [32];
  double local_b0;
  FMovieSceneTangentData local_a8;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_90;
  FCachedInterpolation local_70;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_90._padding_ = (longlong)&param_1->KeyHandles;
  local_90._padding_ = (longlong)&param_1->Times;
  local_90.Values = &param_1->Values;
  local_90._padding_ = (longlong)param_1;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_90._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_90.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = (param_1->Times).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < iVar5) {
    iVar5 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_90,param_2,(FFrameNumber)0x0);
    if (iVar5 == -1) {
      FVar2.SubFrame = 0.0;
      FVar2.FrameNumber.Value = param_2.Value;
      local_b0 = 0.0;
      this = GetInterpolationForTime(&local_70,param_1,(FTimeEvaluationCache *)0x0,FVar2);
      FVar3.SubFrame = 0.0;
      FVar3.FrameNumber.Value = param_2.Value;
      bVar4 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,FVar3,&local_b0);
      if (bVar4) {
        local_a8.UnserializedPaddingBytes[0] = '\0';
        local_a8.UnserializedPaddingBytes[1] = '\0';
        local_a8.UnserializedPaddingBytes[2] = '\0';
        local_a8.TangentWeightMode.Value = '\0';
        local_a8.ArriveTangent = 0.0;
        local_a8.LeaveTangent = 0.0;
        local_a8.ArriveTangentWeight = 0.0;
        local_a8.LeaveTangentWeight = 0.0;
        AddCubicKey(param_1,param_2,(float)local_b0,RCTM_Auto,&local_a8);
      }
    }
  }
  TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeysFrom(&local_90,param_2,param_3);
  return;
}

// Dilate @ 1460bde20

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::Dilate
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (param_1 == (FMovieSceneDoubleChannel *)0xffffffffffffff80)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = (param_1->Times).AllocatorInstance.Data;
  iVar2 = (param_1->Times).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f000000;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
    *(int *)pFVar6 =
         ((int)ROUND((float)(*(int *)pFVar6 - param_2.Value) * (param_3 + param_3) - fVar4) >> 1) +
         param_2.Value;
  }
  AutoSetTangents(param_1,0.0);
  return;
}

// Dilate @ 1460bdf20

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::Dilate
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (param_1 == (FMovieSceneFloatChannel *)0xffffffffffffff80)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = (param_1->Times).AllocatorInstance.Data;
  iVar2 = (param_1->Times).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f000000;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
    *(int *)pFVar6 =
         ((int)ROUND((float)(*(int *)pFVar6 - param_2.Value) * (param_3 + param_3) - fVar4) >> 1) +
         param_2.Value;
  }
  AutoSetTangents(param_1,0.0);
  return;
}

// Evaluate @ 1460c22f0

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::Evaluate
          (FMovieSceneDoubleChannel *param_1,FFrameTime param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = EvaluateCached(param_1,(FTimeEvaluationCache *)0x0,param_2,param_3);
  return bVar1;
}

// Evaluate @ 1460c2310

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::Evaluate
          (FMovieSceneFloatChannel *param_1,FFrameTime param_2,float *param_3)

{
  bool bVar1;
  
  bVar1 = EvaluateCached(param_1,(FTimeEvaluationCache *)0x0,param_2,param_3);
  return bVar1;
}

// EvaluateCached @ 1460c31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::EvaluateCached
          (FMovieSceneDoubleChannel *param_1,FTimeEvaluationCache *param_2,FFrameTime param_3,
          double *param_4)

{
  bool bVar1;
  FCachedInterpolation *this;
  undefined1 auStack_98 [32];
  double local_78;
  FCachedInterpolation local_70;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = 0.0;
  this = GetInterpolationForTime(&local_70,param_1,param_2,param_3);
  bVar1 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,param_3,&local_78);
  if (bVar1) {
    *param_4 = local_78;
  }
  return bVar1;
}

// EvaluateCached @ 1460c3240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::EvaluateCached
          (FMovieSceneFloatChannel *param_1,FTimeEvaluationCache *param_2,FFrameTime param_3,
          float *param_4)

{
  bool bVar1;
  FCachedInterpolation *this;
  undefined1 auStack_98 [32];
  double local_78;
  FCachedInterpolation local_70;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = 0.0;
  this = GetInterpolationForTime(&local_70,param_1,param_2,param_3);
  bVar1 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,param_3,&local_78);
  if (bVar1) {
    *param_4 = (float)local_78;
  }
  return bVar1;
}

// EvaluateWithCache @ 1460c45f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::EvaluateWithCache
          (FMovieSceneDoubleChannel *param_1,FTimeEvaluationCache *param_2,FFrameTime param_3,
          double *param_4)

{
  bool bVar1;
  FCachedInterpolation *this;
  undefined1 auStack_98 [32];
  double dStack_78;
  FCachedInterpolation FStack_70;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  dStack_78 = 0.0;
  this = GetInterpolationForTime(&FStack_70,param_1,param_2,param_3);
  bVar1 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,param_3,&dStack_78);
  if (bVar1) {
    *param_4 = dStack_78;
  }
  return bVar1;
}

// EvaluateWithCache @ 1460c4600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::EvaluateWithCache
          (FMovieSceneFloatChannel *param_1,FTimeEvaluationCache *param_2,FFrameTime param_3,
          float *param_4)

{
  bool bVar1;
  FCachedInterpolation *this;
  undefined1 auStack_98 [32];
  double dStack_78;
  FCachedInterpolation FStack_70;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  dStack_78 = 0.0;
  this = GetInterpolationForTime(&FStack_70,param_1,param_2,param_3);
  bVar1 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,param_3,&dStack_78);
  if (bVar1) {
    *param_4 = (float)dStack_78;
  }
  return bVar1;
}

// GetInterpolationForKey @ 1460cab80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForKey
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneDoubleChannel *param_1,
          int param_2,int param_3,FCycleParams *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  double dVar15;
  double dVar16;
  float fVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  FCachedInterpolation *pFVar23;
  FWeightedCubicInterpolation *pFVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  FFrameNumber FVar28;
  uint uVar29;
  longlong lVar30;
  FCachedInterpolationRange FVar31;
  FFrameNumber FVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined8 uVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  undefined1 auStackY_228 [32];
  bool local_1b8;
  bool local_1b7;
  undefined4 uStack_1a4;
  undefined4 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_184;
  undefined4 uStack_17c;
  undefined4 uStack_164;
  char cStack_144;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  FWeightedCubicInterpolation local_110;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_228;
  lVar34 = (longlong)param_3;
  lVar33 = (longlong)param_2;
  if (((((param_2 < 0) || (iVar1 = (param_1->Times).ArrayNum, iVar1 <= param_2)) || (param_3 < 0))
      || (iVar1 <= param_3)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InChannel->Times.IsValidIndex(Index1) && InChannel->Times.IsValidIndex(Index2)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                          ,0x1ac,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  uVar27 = 0;
  uVar25 = uVar27;
  if (param_2 < (param_1->Times).ArrayNum) {
    uVar25 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  pFVar4 = (param_1->Times).AllocatorInstance.Data;
  uVar29 = (uint)~param_3 >> 0x1f;
  uVar25 = uVar27;
  if (param_3 < (param_1->Times).ArrayNum) {
    uVar25 = uVar29;
  }
  if ((uVar25 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  dVar45 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + lVar34 * 4) -
                   *(int *)(pFVar4 + lVar33 * 4));
  uVar25 = uVar27;
  if (param_2 < (param_1->Values).ArrayNum) {
    uVar25 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  pFVar4 = (param_1->Values).AllocatorInstance.Data;
  lVar30 = lVar33 * 0x20;
  fVar17 = *(float *)(pFVar4 + lVar30 + 0x14);
  uVar25 = *(uint *)(pFVar4 + lVar30 + 0x18);
  uVar18 = *(undefined4 *)(pFVar4 + lVar30 + 0x1c);
  auVar37 = *(undefined1 (*) [16])(pFVar4 + lVar30);
  uVar22 = uVar27;
  if (param_3 < (param_1->Values).ArrayNum) {
    uVar22 = uVar29;
  }
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  pFVar5 = (param_1->Values).AllocatorInstance.Data;
  pFVar4 = pFVar5 + lVar34 * 0x20;
  dVar42 = *(double *)pFVar4;
  dVar41 = *(double *)(pFVar4 + 8);
  auVar36 = *(undefined1 (*) [16])(pFVar5 + lVar34 * 0x20 + 0x10);
  if (param_4 == (FCycleParams *)0x0) {
    uVar43 = 0;
    uVar44 = 0;
    uVar22 = uVar27;
  }
  else {
    uVar43 = SUB84(param_4->ValueOffset,0);
    uVar44 = (undefined4)((ulonglong)param_4->ValueOffset >> 0x20);
    uVar22 = param_4->Duration * param_4->CycleCount;
  }
  if (((param_1->Times).ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  iVar1 = (param_1->Times).ArrayNum;
  uVar26 = iVar1 - 1;
  iVar2 = *(int *)(param_1->Times).AllocatorInstance.Data;
  if ((int)uVar26 < iVar1) {
    uVar27 = ~uVar26 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FCachedInterpolation *)(*pcVar6)();
    return pFVar23;
  }
  iVar1 = (param_1->Times).ArrayNum;
  dVar7 = auVar37._0_8_ + (double)CONCAT44(uVar44,uVar43);
  iVar3 = *(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
  dVar9 = (double)auVar37._12_4_;
  uVar19 = (ulonglong)dVar9 >> 0x20;
  if (((uVar25 & 0xff) == 3) || ((uVar25 & 0xff) == 2)) {
    local_1b7 = true;
  }
  else {
    local_1b7 = false;
  }
  dVar42 = dVar42 + (double)CONCAT44(uVar44,uVar43);
  dVar41 = (double)SUB84(dVar41,0);
  uVar40 = 0;
  dVar10 = (double)auVar36._0_4_;
  uVar25 = auVar36._8_4_ & 0xff;
  if ((uVar25 == 3) || (uVar25 == 1)) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  if ((param_4 == (FCycleParams *)0x0) || (param_4->bMirrorCurve == false)) {
    uVar25 = 0;
    if (param_2 < iVar1) {
      uVar25 = (uint)~param_2 >> 0x1f;
    }
    if (uVar25 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar40 = extraout_XMM0_01._8_8_;
      if (bVar21) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FCachedInterpolation *)(*pcVar6)();
        return pFVar23;
      }
    }
    FVar28.Value = *(int *)((param_1->Times).AllocatorInstance.Data + lVar33 * 4) + uVar22;
    uVar25 = 0;
    if (param_3 < (param_1->Times).ArrayNum) {
      uVar25 = (uint)~param_3 >> 0x1f;
    }
    if (uVar25 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar40 = extraout_XMM0_02._8_8_;
      if (bVar21) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FCachedInterpolation *)(*pcVar6)();
        return pFVar23;
      }
    }
    FVar32.Value = uVar22 + *(int *)((param_1->Times).AllocatorInstance.Data + lVar34 * 4);
    dVar15 = dVar7;
    dVar16 = (double)fVar17;
    local_1b8 = bVar20;
  }
  else {
    uVar25 = SUB84(dVar9,0);
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000);
    auVar35._8_4_ = auVar37._8_4_;
    auVar35._0_8_ = dVar7;
    auVar35._12_4_ = auVar37._12_4_;
    uVar40 = auVar35._8_8_;
    uVar27 = 0;
    if (param_3 < iVar1) {
      uVar27 = uVar29;
    }
    dVar41 = (double)CONCAT44((uint)uVar19 ^ __xmm_80000000000000008000000000000000._4_4_,
                              uVar25 ^ (uint)__xmm_80000000000000008000000000000000);
    if (uVar27 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar40 = extraout_XMM0._8_8_;
      if (bVar21) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FCachedInterpolation *)(*pcVar6)();
        return pFVar23;
      }
    }
    FVar28.Value = (uVar22 - *(int *)((param_1->Times).AllocatorInstance.Data + lVar34 * 4)) + iVar3
                   + iVar2;
    uVar25 = 0;
    if (param_2 < (param_1->Times).ArrayNum) {
      uVar25 = (uint)~param_2 >> 0x1f;
    }
    if (uVar25 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar40 = extraout_XMM0_00._8_8_;
      if (bVar21) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FCachedInterpolation *)(*pcVar6)();
        return pFVar23;
      }
    }
    FVar32.Value = (uVar22 - *(int *)((param_1->Times).AllocatorInstance.Data + lVar33 * 4)) + iVar3
                   + iVar2;
    dVar15 = dVar42;
    dVar16 = dVar10;
    dVar10 = (double)fVar17;
    dVar42 = dVar7;
    local_1b8 = local_1b7;
    local_1b7 = bVar20;
  }
  FVar31.End.Value = FVar32.Value;
  FVar31.Start.Value = FVar28.Value;
  cStack_144 = (char)uVar18;
  if (cStack_144 == '\0') {
    if ((GSequencerLinearCubicInterpolation == 0) || (auVar36[0xc] != '\x02')) {
      if (dVar42 - dVar15 == 0.0) {
        auVar11._4_8_ = uVar40;
        auVar11._0_4_ = uStack_1a4;
        auVar36._0_8_ = auVar11._0_8_ << 0x20;
        auVar36._8_4_ = FVar28.Value;
        auVar36._12_4_ = uStack_19c;
        (__return_storage_ptr__->Data)._padding_ = (longlong)dVar15;
        (__return_storage_ptr__->Data)._padding_ = auVar36._8_8_;
        (__return_storage_ptr__->Data).TypeIndex = '\x01';
      }
      else {
        (__return_storage_ptr__->Data)._padding_ = (longlong)((dVar42 - dVar15) / dVar45);
        (__return_storage_ptr__->Data)._padding_ = (longlong)dVar15;
        (__return_storage_ptr__->Data)._padding_ = CONCAT44(uStack_164,FVar28.Value);
        (__return_storage_ptr__->Data).TypeIndex = '\x02';
      }
      goto LAB_1460cb284;
    }
  }
  else if (cStack_144 != '\x02') {
    auVar12._4_8_ = uVar40;
    auVar12._0_4_ = uStack_194;
    auVar37._0_8_ = auVar12._0_8_ << 0x20;
    auVar37._8_4_ = FVar28.Value;
    auVar37._12_4_ = uStack_18c;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar15;
    (__return_storage_ptr__->Data)._padding_ = auVar37._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
    goto LAB_1460cb284;
  }
  if ((((dVar15 == dVar42) && (dVar9 == 0.0)) && (dVar41 == 0.0)) &&
     ((dVar16 == 0.0 && (dVar10 == 0.0)))) {
    auVar13._4_8_ = uVar40;
    auVar13._0_4_ = uStack_184;
    auVar38._0_8_ = auVar13._0_8_ << 0x20;
    auVar38._8_4_ = FVar28.Value;
    auVar38._12_4_ = uStack_17c;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar15;
    (__return_storage_ptr__->Data)._padding_ = auVar38._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
  }
  else if ((local_1b7 == false) && (local_1b8 == false)) {
    dVar7 = dVar9 * dVar45 * __real_3fd5555555555555;
    dVar41 = dVar41 * dVar45 * __real_3fd5555555555555;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar45;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar15;
    auVar14._4_8_ = dVar15;
    auVar14._0_4_ = uStack_11c;
    auVar39._0_8_ = auVar14._0_8_ << 0x20;
    auVar39._8_4_ = FVar28.Value;
    auVar39._12_4_ = uStack_114;
    dVar7 = dVar7 + dVar15;
    dVar41 = dVar42 - dVar41;
    auVar8._8_4_ = SUB84(dVar41,0);
    auVar8._0_8_ = dVar7;
    auVar8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar7;
    (__return_storage_ptr__->Data)._padding_ = auVar8._8_8_;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar42;
    (__return_storage_ptr__->Data)._padding_ = auVar39._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x06';
  }
  else {
    pFVar24 = UE::MovieScene::Interpolation::FWeightedCubicInterpolation::
              FWeightedCubicInterpolation
                        (&local_110,param_1->TickResolution,FVar28,FVar28,dVar15,dVar9,dVar16,
                         local_1b7,FVar32,dVar42,dVar41,dVar10,local_1b8);
    dVar45 = pFVar24->StartKeyValue;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar24->DX;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar45;
    dVar45 = pFVar24->StartKeyTanY;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar24->NormalizedStartTanDX;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar45;
    dVar45 = pFVar24->EndKeyValue;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar24->StartWeight;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar45;
    dVar45 = pFVar24->EndKeyTanY;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar24->NormalizedEndTanDX;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar45;
    lVar33 = *(longlong *)&pFVar24->Origin;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar24->EndWeight;
    (__return_storage_ptr__->Data)._padding_ = lVar33;
    (__return_storage_ptr__->Data).TypeIndex = '\a';
  }
LAB_1460cb284:
  __return_storage_ptr__->Range = FVar31;
  return __return_storage_ptr__;
}

// GetInterpolationForKey @ 1460cb2f0

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForKey
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneDoubleChannel *param_1,
          int param_2,FCycleParams *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FFrameNumber FVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  FFrameNumber FVar8;
  FCachedInterpolation *pFVar9;
  uint uVar10;
  FCachedInterpolationRange FVar11;
  uint uVar12;
  undefined4 uStack_1c;
  
  piVar1 = &(param_1->Times).ArrayNum;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannel->Times.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x19c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FCachedInterpolation *)(*pcVar5)();
    return pFVar9;
  }
  iVar3 = *piVar1;
  uVar10 = iVar3 - 1;
  if (param_2 == uVar10) {
    uVar12 = 0;
    if ((int)uVar10 < iVar3) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FCachedInterpolation *)(*pcVar5)();
      return pFVar9;
    }
    FVar4.Value = *(int *)((param_1->Times).AllocatorInstance.Data +
                          (longlong)(param_1->Times).ArrayNum * 4 + -4);
    FVar8.Value = FVar4.Value + 1;
    if (0x7ffffffe < FVar4.Value) {
      FVar8.Value = FVar4.Value;
    }
    iVar3 = (param_1->Values).ArrayNum;
    FVar11.End.Value = FVar8.Value;
    FVar11.Start.Value = FVar4.Value;
    uVar12 = iVar3 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar3) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FCachedInterpolation *)(*pcVar5)();
      return pFVar9;
    }
    pFVar2 = (param_1->Values).AllocatorInstance.Data +
             (longlong)(param_1->Values).ArrayNum * 0x20 + -0x20;
    uVar6 = *(undefined4 *)(pFVar2 + 4);
    *(undefined4 *)&(__return_storage_ptr__->Data)._padding_ = *(undefined4 *)pFVar2;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Data)._padding_ + 4) = uVar6;
    *(int *)&(__return_storage_ptr__->Data)._padding_ = FVar4.Value;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Data)._padding_ + 4) = uStack_1c;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
    __return_storage_ptr__->Range = FVar11;
  }
  else {
    GetInterpolationForKey(__return_storage_ptr__,param_1,param_2,param_2 + 1,param_3);
  }
  return __return_storage_ptr__;
}

// GetInterpolationForKey @ 1460cb480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForKey
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneFloatChannel *param_1,int param_2
          ,int param_3,FCycleParams *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  bool bVar30;
  bool bVar31;
  uint uVar32;
  FCachedInterpolation *pFVar33;
  FWeightedCubicInterpolation *pFVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  FFrameNumber FVar38;
  uint uVar39;
  FCachedInterpolationRange FVar40;
  FFrameNumber FVar41;
  longlong lVar42;
  longlong lVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  undefined1 auStackY_238 [32];
  bool local_1c8;
  bool local_1c7;
  char local_1c0;
  undefined4 uStack_1ac;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  float local_178;
  char cStack_174;
  char local_170;
  undefined4 uStack_154;
  char cStack_13c;
  undefined4 uStack_104;
  FWeightedCubicInterpolation local_100;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar43 = (longlong)param_3;
  lVar42 = (longlong)param_2;
  if (((((param_2 < 0) || (iVar3 = (param_1->Times).ArrayNum, iVar3 <= param_2)) || (param_3 < 0))
      || (iVar3 <= param_3)) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("InChannel->Times.IsValidIndex(Index1) && InChannel->Times.IsValidIndex(Index2)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                          ,0x1ac,L""), bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  uVar37 = 0;
  uVar32 = uVar37;
  if (param_2 < (param_1->Times).ArrayNum) {
    uVar32 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  pFVar8 = (param_1->Times).AllocatorInstance.Data;
  uVar39 = (uint)~param_3 >> 0x1f;
  uVar32 = uVar37;
  if (param_3 < (param_1->Times).ArrayNum) {
    uVar32 = uVar39;
  }
  if ((uVar32 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  dVar47 = (double)(*(int *)((param_1->Times).AllocatorInstance.Data + lVar43 * 4) -
                   *(int *)(pFVar8 + lVar42 * 4));
  uVar32 = uVar37;
  if (param_2 < (param_1->Values).ArrayNum) {
    uVar32 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  pFVar8 = (param_1->Values).AllocatorInstance.Data;
  lVar35 = lVar42 * 0x1c;
  uVar1 = *(undefined8 *)(pFVar8 + lVar35 + 0x10);
  fVar24 = *(float *)(pFVar8 + lVar35);
  fVar25 = *(float *)(pFVar8 + lVar35 + 8);
  uVar4 = *(undefined4 *)(pFVar8 + lVar35 + 0x18);
  uVar32 = uVar37;
  if (param_3 < (param_1->Values).ArrayNum) {
    uVar32 = uVar39;
  }
  if ((uVar32 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  pFVar9 = (param_1->Values).AllocatorInstance.Data;
  lVar35 = lVar43 * 0x1c;
  uVar2 = *(undefined8 *)(pFVar9 + lVar35 + 0x10);
  pFVar8 = pFVar9 + lVar35;
  fVar26 = *(float *)pFVar8;
  fVar27 = *(float *)(pFVar8 + 4);
  fVar28 = *(float *)(pFVar8 + 0xc);
  uVar5 = *(undefined4 *)(pFVar9 + lVar35 + 0x18);
  if (param_4 == (FCycleParams *)0x0) {
    uVar45 = 0;
    uVar46 = 0;
    uVar32 = uVar37;
  }
  else {
    uVar45 = SUB84(param_4->ValueOffset,0);
    uVar46 = (undefined4)((ulonglong)param_4->ValueOffset >> 0x20);
    uVar32 = param_4->Duration * param_4->CycleCount;
  }
  if (((param_1->Times).ArrayNum < 1) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  iVar3 = (param_1->Times).ArrayNum;
  uVar36 = iVar3 - 1;
  iVar6 = *(int *)(param_1->Times).AllocatorInstance.Data;
  if ((int)uVar36 < iVar3) {
    uVar37 = ~uVar36 >> 0x1f;
  }
  if ((uVar37 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar33 = (FCachedInterpolation *)(*pcVar10)();
    return pFVar33;
  }
  iVar3 = (param_1->Times).ArrayNum;
  cStack_174 = (char)((ulonglong)uVar1 >> 0x20);
  local_178 = (float)uVar1;
  iVar7 = *(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
  dVar18 = (double)fVar24 + (double)CONCAT44(uVar46,uVar45);
  dVar44 = (double)fVar25;
  uVar29 = (ulonglong)dVar44 >> 0x20;
  if ((cStack_174 == '\x03') || (cStack_174 == '\x02')) {
    local_1c7 = true;
  }
  else {
    local_1c7 = false;
  }
  cStack_13c = (char)((ulonglong)uVar2 >> 0x20);
  dVar17 = (double)fVar26 + (double)CONCAT44(uVar46,uVar45);
  dVar20 = (double)fVar27;
  dVar21 = (double)fVar28;
  if ((cStack_13c == '\x03') || (cStack_13c == '\x01')) {
    bVar30 = true;
  }
  else {
    bVar30 = false;
  }
  if ((param_4 == (FCycleParams *)0x0) || (param_4->bMirrorCurve == false)) {
    uVar37 = 0;
    if (param_2 < iVar3) {
      uVar37 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar10 = (code *)swi(3);
      pFVar33 = (FCachedInterpolation *)(*pcVar10)();
      return pFVar33;
    }
    FVar38.Value = *(int *)((param_1->Times).AllocatorInstance.Data + lVar42 * 4) + uVar32;
    uVar37 = 0;
    if (param_3 < (param_1->Times).ArrayNum) {
      uVar37 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar10 = (code *)swi(3);
      pFVar33 = (FCachedInterpolation *)(*pcVar10)();
      return pFVar33;
    }
    FVar41.Value = uVar32 + *(int *)((param_1->Times).AllocatorInstance.Data + lVar43 * 4);
    dVar22 = dVar18;
    dVar23 = (double)local_178;
    local_1c8 = bVar30;
  }
  else {
    uVar37 = SUB84(dVar44,0);
    dVar44 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000);
    uVar36 = 0;
    if (param_3 < iVar3) {
      uVar36 = uVar39;
    }
    dVar20 = (double)CONCAT44((uint)uVar29 ^ __xmm_80000000000000008000000000000000._4_4_,
                              uVar37 ^ (uint)__xmm_80000000000000008000000000000000);
    if ((uVar36 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar10 = (code *)swi(3);
      pFVar33 = (FCachedInterpolation *)(*pcVar10)();
      return pFVar33;
    }
    FVar38.Value = (uVar32 - *(int *)((param_1->Times).AllocatorInstance.Data + lVar43 * 4)) + iVar7
                   + iVar6;
    uVar37 = 0;
    if (param_2 < (param_1->Times).ArrayNum) {
      uVar37 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar10 = (code *)swi(3);
      pFVar33 = (FCachedInterpolation *)(*pcVar10)();
      return pFVar33;
    }
    FVar41.Value = (uVar32 - *(int *)((param_1->Times).AllocatorInstance.Data + lVar42 * 4)) + iVar7
                   + iVar6;
    dVar22 = dVar17;
    dVar23 = dVar21;
    dVar17 = dVar18;
    dVar21 = (double)local_178;
    local_1c8 = local_1c7;
    local_1c7 = bVar30;
  }
  uVar45 = (undefined4)((ulonglong)dVar22 >> 0x20);
  FVar40.End.Value = FVar41.Value;
  FVar40.Start.Value = FVar38.Value;
  local_170 = (char)uVar4;
  if (local_170 == '\0') {
    if ((GSequencerLinearCubicInterpolation == 0) || (local_1c0 = (char)uVar5, local_1c0 != '\x02'))
    {
      if (dVar17 - dVar22 == 0.0) {
        auVar11._8_4_ = FVar38.Value;
        auVar11._0_8_ = dVar22;
        auVar11._12_4_ = uStack_1ac;
        (__return_storage_ptr__->Data)._padding_ = (longlong)dVar22;
        (__return_storage_ptr__->Data)._padding_ = auVar11._8_8_;
        (__return_storage_ptr__->Data).TypeIndex = '\x01';
      }
      else {
        dVar47 = (dVar17 - dVar22) / dVar47;
        auVar16._8_4_ = SUB84(dVar22,0);
        auVar16._0_8_ = dVar47;
        auVar16._12_4_ = uVar45;
        (__return_storage_ptr__->Data)._padding_ = (longlong)dVar47;
        (__return_storage_ptr__->Data)._padding_ = auVar16._8_8_;
        (__return_storage_ptr__->Data)._padding_ = CONCAT44(uStack_154,FVar38.Value);
        (__return_storage_ptr__->Data).TypeIndex = '\x02';
      }
      goto LAB_1460cbb8e;
    }
  }
  else if (local_170 != '\x02') {
    auVar15._8_4_ = FVar38.Value;
    auVar15._0_8_ = dVar22;
    auVar15._12_4_ = uStack_19c;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar22;
    (__return_storage_ptr__->Data)._padding_ = auVar15._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
    goto LAB_1460cbb8e;
  }
  if ((((dVar22 == dVar17) && (dVar44 == 0.0)) && (dVar20 == 0.0)) &&
     ((dVar23 == 0.0 && (dVar21 == 0.0)))) {
    auVar12._8_4_ = FVar38.Value;
    auVar12._0_8_ = dVar22;
    auVar12._12_4_ = uStack_18c;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar22;
    (__return_storage_ptr__->Data)._padding_ = auVar12._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
  }
  else if ((local_1c7 == false) && (local_1c8 == false)) {
    dVar18 = dVar44 * dVar47 * __real_3fd5555555555555;
    dVar44 = dVar20 * dVar47 * __real_3fd5555555555555;
    auVar13._8_4_ = SUB84(dVar22,0);
    auVar13._0_8_ = dVar47;
    auVar13._12_4_ = uVar45;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar47;
    (__return_storage_ptr__->Data)._padding_ = auVar13._8_8_;
    dVar18 = dVar18 + dVar22;
    dVar44 = dVar17 - dVar44;
    auVar19._8_4_ = SUB84(dVar44,0);
    auVar19._0_8_ = dVar18;
    auVar19._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar18;
    (__return_storage_ptr__->Data)._padding_ = auVar19._8_8_;
    auVar14._8_4_ = FVar38.Value;
    auVar14._0_8_ = dVar17;
    auVar14._12_4_ = uStack_104;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar17;
    (__return_storage_ptr__->Data)._padding_ = auVar14._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x06';
  }
  else {
    pFVar34 = UE::MovieScene::Interpolation::FWeightedCubicInterpolation::
              FWeightedCubicInterpolation
                        (&local_100,param_1->TickResolution,FVar38,FVar38,dVar22,dVar44,dVar23,
                         local_1c7,FVar41,dVar17,dVar20,dVar21,local_1c8);
    dVar47 = pFVar34->StartKeyValue;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar34->DX;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar47;
    dVar47 = pFVar34->StartKeyTanY;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar34->NormalizedStartTanDX;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar47;
    dVar47 = pFVar34->EndKeyValue;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar34->StartWeight;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar47;
    dVar47 = pFVar34->EndKeyTanY;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar34->NormalizedEndTanDX;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar47;
    lVar42 = *(longlong *)&pFVar34->Origin;
    (__return_storage_ptr__->Data)._padding_ = (longlong)pFVar34->EndWeight;
    (__return_storage_ptr__->Data)._padding_ = lVar42;
    (__return_storage_ptr__->Data).TypeIndex = '\a';
  }
LAB_1460cbb8e:
  __return_storage_ptr__->Range = FVar40;
  return __return_storage_ptr__;
}

// GetInterpolationForKey @ 1460cbc00

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForKey
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneFloatChannel *param_1,int param_2
          ,FCycleParams *param_3)

{
  int *piVar1;
  int iVar2;
  FFrameNumber FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  FFrameNumber FVar7;
  FCachedInterpolation *pFVar8;
  uint uVar9;
  FCachedInterpolationRange FVar10;
  uint uVar11;
  double dVar12;
  undefined4 uStack_1c;
  
  piVar1 = &(param_1->Times).ArrayNum;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannel->Times.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x19c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FCachedInterpolation *)(*pcVar4)();
    return pFVar8;
  }
  iVar2 = *piVar1;
  uVar9 = iVar2 - 1;
  if (param_2 == uVar9) {
    uVar11 = 0;
    if ((int)uVar9 < iVar2) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar8;
    }
    FVar3.Value = *(int *)((param_1->Times).AllocatorInstance.Data +
                          (longlong)(param_1->Times).ArrayNum * 4 + -4);
    FVar7.Value = FVar3.Value + 1;
    if (0x7ffffffe < FVar3.Value) {
      FVar7.Value = FVar3.Value;
    }
    iVar2 = (param_1->Values).ArrayNum;
    FVar10.End.Value = FVar7.Value;
    FVar10.Start.Value = FVar3.Value;
    uVar11 = iVar2 - 1;
    uVar9 = 0;
    if ((int)uVar11 < iVar2) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar8;
    }
    dVar12 = (double)*(float *)((param_1->Values).AllocatorInstance.Data +
                               (longlong)(param_1->Values).ArrayNum * 0x1c + -0x1c);
    auVar5._8_4_ = FVar3.Value;
    auVar5._0_8_ = dVar12;
    auVar5._12_4_ = uStack_1c;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar12;
    (__return_storage_ptr__->Data)._padding_ = auVar5._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
    __return_storage_ptr__->Range = FVar10;
  }
  else {
    GetInterpolationForKey(__return_storage_ptr__,param_1,param_2,param_2 + 1,param_3);
  }
  return __return_storage_ptr__;
}

// GetInterpolationForTime @ 1460cbd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneDoubleChannel *param_1,
          FTimeEvaluationCache *param_2,FFrameTime param_3)

{
  longlong lVar1;
  uchar uVar2;
  FFrameNumber FVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  FFrameTime FVar10;
  bool bVar11;
  uint uVar12;
  FFrameNumber FVar13;
  FCachedInterpolation *pFVar14;
  TArrayView<FFrameNumber_const_,int> *pTVar15;
  uint uVar16;
  uint uVar17;
  FFrameNumber FVar18;
  ulonglong uVar19;
  uint uVar20;
  FCachedInterpolationRange FVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined1 in_XMM0 [16];
  undefined1 auVar25 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar26 [16];
  TArrayView<FFrameNumber_const_,int> TVar27;
  TArrayView<FFrameNumber_const_,int> extraout_XMM0_01;
  TArrayView<FFrameNumber_const_,int> extraout_XMM0_02;
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 auVar28 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FFrameTime local_170;
  FFrameTime local_168;
  FTimeEvaluationCache *local_160;
  FCycleParams local_158;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  TArrayView<FFrameNumber_const_,int> local_118;
  undefined4 uStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  TArrayView<FFrameNumber_const_,int> local_e8;
  TArrayView<FFrameNumber_const_,int> local_d8;
  TArrayView<FFrameNumber_const_,int> local_c8;
  FCachedInterpolation local_b8;
  ulonglong local_58;
  undefined8 uVar29;
  
  uVar29 = in_XMM0._8_8_;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVar13.Value = (param_1->Times).ArrayNum;
  local_168.FrameNumber.Value = FVar13.Value;
  if (FVar13.Value == 0) {
    if (param_1->bHasDefaultValue != false) {
      auVar6._4_8_ = uVar29;
      auVar6._0_4_ = uStack_134;
      auVar25._0_8_ = auVar6._0_8_ << 0x20;
      auVar25._8_4_ = 0;
      auVar25._12_4_ = uStack_12c;
      (__return_storage_ptr__->Data)._padding_ = (longlong)param_1->DefaultValue;
      (__return_storage_ptr__->Data)._padding_ = auVar25._8_8_;
      (__return_storage_ptr__->Data).TypeIndex = '\x01';
      (__return_storage_ptr__->Range).Start = -0x80000000;
      (__return_storage_ptr__->Range).End = 0x7fffffff;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->Data).TypeIndex = '\0';
    (__return_storage_ptr__->Range).Start = 0;
    (__return_storage_ptr__->Range).End = -1;
    return __return_storage_ptr__;
  }
  local_160 = param_2;
  if (FVar13.Value == 1) {
    if ((param_1->Values).ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar29 = extraout_XMM0._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FCachedInterpolation *)(*pcVar4)();
        return pFVar14;
      }
    }
    lVar1 = *(longlong *)(param_1->Values).AllocatorInstance.Data;
    if ((param_1->Times).ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar29 = extraout_XMM0_00._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FCachedInterpolation *)(*pcVar4)();
        return pFVar14;
      }
    }
    auVar7._4_8_ = uVar29;
    auVar7._0_4_ = uStack_124;
    auVar26._0_8_ = auVar7._0_8_ << 0x20;
    auVar26._8_4_ = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
    auVar26._12_4_ = uStack_11c;
    (__return_storage_ptr__->Data)._padding_ = lVar1;
    (__return_storage_ptr__->Data)._padding_ = auVar26._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
    (__return_storage_ptr__->Range).Start = -0x80000000;
    (__return_storage_ptr__->Range).End = 0x7fffffff;
    return __return_storage_ptr__;
  }
  local_b8.Data.TypeIndex = 0;
  local_b8.Range.Start.Value = 0;
  local_b8.Range.End.Value = -1;
  bVar11 = CacheExtrapolation(param_1,param_3,&local_b8);
  if (bVar11) {
    uVar19 = (ulonglong)local_b8.Data.TypeIndex;
    (__return_storage_ptr__->Data).TypeIndex = local_b8.Data.TypeIndex;
    if ((7 < local_b8.Data.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x105,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar19] !=
        UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FInvalidValue>::
        Construct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar19])(__return_storage_ptr__,&local_b8);
    }
    __return_storage_ptr__->Range = local_b8.Range;
    return __return_storage_ptr__;
  }
  if (((param_1->Times).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar14 = (FCachedInterpolation *)(*pcVar4)();
    return pFVar14;
  }
  iVar24 = (param_1->Times).ArrayNum;
  uVar17 = iVar24 - 1;
  FVar13.Value = *(int *)(param_1->Times).AllocatorInstance.Data;
  uVar12 = 0;
  if ((int)uVar17 < iVar24) {
    uVar12 = ~uVar17 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar14 = (FCachedInterpolation *)(*pcVar4)();
    return pFVar14;
  }
  FVar3.Value = *(int *)((param_1->Times).AllocatorInstance.Data +
                        (longlong)(param_1->Times).ArrayNum * 4 + -4);
  UE::MovieScene::CycleTime(&local_158,FVar13,FVar3,param_3);
  FVar18 = param_3.FrameNumber.Value;
  local_170 = param_3;
  if ((FVar18.Value < FVar13.Value) ||
     ((local_170.SubFrame = param_3.SubFrame, FVar18.Value == FVar13.Value &&
      (local_170.SubFrame < 0.0)))) {
    uVar2 = (param_1->PreInfinityExtrap).Value;
    if (uVar2 != '\x01') goto joined_r0x0001460cc07e;
LAB_1460cc098:
    uVar17 = local_168.FrameNumber.Value - 1;
    uVar12 = 0;
    if ((int)uVar17 < (param_1->Values).ArrayNum) {
      uVar12 = ~uVar17 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar14;
    }
    dVar5 = *(double *)((param_1->Values).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x20);
    if (((param_1->Values).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar14;
    }
    local_158.ValueOffset =
         (dVar5 - *(double *)(param_1->Values).AllocatorInstance.Data) *
         (double)local_158.CycleCount;
    FVar10 = local_170;
  }
  else if ((FVar3.Value < FVar18.Value) ||
          ((FVar10 = param_3, FVar18.Value == FVar3.Value &&
           (FVar10 = param_3, 0.0 < local_170.SubFrame)))) {
    uVar2 = (param_1->PostInfinityExtrap).Value;
    if (uVar2 == '\x01') goto LAB_1460cc098;
joined_r0x0001460cc07e:
    FVar10 = param_3;
    if (uVar2 == '\x02') {
      UE::MovieScene::FCycleParams::Oscillate(&local_158,FVar13.Value,FVar3.Value);
      FVar10 = local_170;
    }
  }
  local_170 = FVar10;
  FVar18.Value = local_158.Time.FrameNumber.Value;
  if ((local_158.Time.FrameNumber.Value < FVar13.Value) ||
     (FVar3.Value < local_158.Time.FrameNumber.Value)) {
    local_178[0] = 0;
    bVar11 = `TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime'::__l27
             ::<lambda_1>::operator()(local_178);
    if (!bVar11) {
      (__return_storage_ptr__->Data).TypeIndex = '\0';
      (__return_storage_ptr__->Range).Start = 0;
      (__return_storage_ptr__->Range).End = -1;
      return __return_storage_ptr__;
    }
  }
  uVar12 = 0;
  if (param_2 != (FTimeEvaluationCache *)0x0) {
    iVar24 = param_2->CachedNumFrames;
    FVar10.SubFrame = local_158.Time.SubFrame;
    FVar10.FrameNumber.Value = local_158.Time.FrameNumber.Value;
    if (iVar24 == -1) {
      pTVar15 = TArrayView<FFrameNumber_const_,int>::
                TArrayView<FFrameNumber_const_,int><TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_const_&,TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                          (&local_d8,&param_1->Times);
      local_e8.DataPtr = pTVar15->DataPtr;
      local_e8.ArrayNum = pTVar15->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
      UE::MovieScene::EvaluateTime
                (&local_e8,FVar10,&param_2->Index1,&param_2->Index2,&param_2->InterpValue);
      iVar24 = (param_1->Times).ArrayNum;
      param_2->CachedNumFrames = iVar24;
      param_2->CacheFrameTime = FVar10;
    }
    if ((iVar24 == (param_1->Times).ArrayNum) &&
       (local_170 = param_2->CacheFrameTime, local_168 = FVar10,
       local_170.FrameNumber.Value.Value == FVar18.Value)) {
      TVar27 = (TArrayView<FFrameNumber_const_,int>)ZEXT416((uint)local_170.SubFrame);
      if (local_170.SubFrame == local_158.Time.SubFrame) {
        uVar22 = param_2->Index1;
        uVar20 = local_160->Index2;
        goto LAB_1460cc32d;
      }
    }
  }
  pTVar15 = TArrayView<FFrameNumber_const_,int>::
            TArrayView<FFrameNumber_const_,int><TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_const_&,TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                      (&local_c8,&param_1->Times);
  local_160 = *(FTimeEvaluationCache **)&pTVar15->ArrayNum;
  iVar24 = (int)local_160;
  uVar19 = (ulonglong)local_160 & 0xffffffff;
  TVar27 = *pTVar15;
  uVar17 = uVar12;
  if (0 < iVar24) {
    local_118.DataPtr = TVar27.DataPtr;
    uVar17 = 0;
    do {
      uVar22 = (uint)uVar19;
      uVar23 = uVar22 >> 1;
      uVar19 = (ulonglong)uVar23;
      if (local_118.DataPtr[(int)(uVar23 + uVar17)].Value <= FVar18.Value) {
        uVar17 = uVar23 + uVar17 + (uVar22 & 1);
      }
    } while (uVar23 != 0);
  }
  uVar23 = uVar17 - 1;
  uVar22 = 0xffffffff;
  if (-1 < (int)uVar23) {
    uVar22 = uVar23;
  }
  uVar20 = 0xffffffff;
  if ((int)uVar17 < iVar24) {
    uVar20 = uVar17;
  }
  local_118 = TVar27;
  if ((-1 < (int)uVar23) && ((int)uVar17 < iVar24)) {
    uVar16 = uVar12;
    if ((int)uVar23 < iVar24) {
      uVar16 = ~uVar23 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       TVar27 = extraout_XMM0_01, bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar14;
    }
    uVar23 = uVar12;
    if ((int)uVar17 < (int)local_160) {
      uVar23 = ~uVar17 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       TVar27 = extraout_XMM0_02, bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar14;
    }
  }
LAB_1460cc32d:
  uVar29 = TVar27._8_8_;
  if (uVar22 == 0xffffffff) {
    FVar13.Value = FVar18.Value + 1;
    if (0x7ffffffe < FVar18.Value) {
      FVar13.Value = FVar18.Value;
    }
    uVar17 = uVar12;
    if ((int)uVar20 < (param_1->Values).ArrayNum) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar29 = extraout_XMM0_03._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FCachedInterpolation *)(*pcVar4)();
        return pFVar14;
      }
    }
    dVar5 = local_158.ValueOffset +
            *(double *)((param_1->Values).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x20);
    if ((int)uVar20 < (param_1->Times).ArrayNum) {
      uVar12 = ~uVar20 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar29 = extraout_XMM0_04._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FCachedInterpolation *)(*pcVar4)();
        return pFVar14;
      }
    }
    auVar8._4_8_ = uVar29;
    auVar8._0_4_ = uStack_104;
    auVar28._0_8_ = auVar8._0_8_ << 0x20;
    auVar28._8_4_ =
         *(undefined4 *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar20 * 4);
    auVar28._12_4_ = uStack_fc;
  }
  else {
    if (uVar20 != 0xffffffff) {
      GetInterpolationForKey(__return_storage_ptr__,param_1,uVar22,uVar20,&local_158);
      return __return_storage_ptr__;
    }
    FVar13.Value = FVar18.Value + 1;
    if (0x7ffffffe < FVar18.Value) {
      FVar13.Value = FVar18.Value;
    }
    uVar17 = uVar12;
    if ((int)uVar22 < (param_1->Values).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if (uVar17 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar29 = extraout_XMM0_05._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FCachedInterpolation *)(*pcVar4)();
        return pFVar14;
      }
    }
    dVar5 = local_158.ValueOffset +
            *(double *)((param_1->Values).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x20);
    if ((int)uVar22 < (param_1->Times).ArrayNum) {
      uVar12 = ~uVar22 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar29 = extraout_XMM0_06._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FCachedInterpolation *)(*pcVar4)();
        return pFVar14;
      }
    }
    auVar9._4_8_ = uVar29;
    auVar9._0_4_ = uStack_f4;
    auVar28._0_8_ = auVar9._0_8_ << 0x20;
    auVar28._8_4_ =
         *(undefined4 *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
    auVar28._12_4_ = uStack_ec;
  }
  FVar21.End.Value = FVar13.Value;
  FVar21.Start.Value = FVar18.Value;
  (__return_storage_ptr__->Data)._padding_ = (longlong)dVar5;
  (__return_storage_ptr__->Data)._padding_ = auVar28._8_8_;
  (__return_storage_ptr__->Data).TypeIndex = '\x01';
  __return_storage_ptr__->Range = FVar21;
  return __return_storage_ptr__;
}

// GetInterpolationForTime @ 1460cc560

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneDoubleChannel *param_1,
          FFrameTime param_2)

{
  GetInterpolationForTime(__return_storage_ptr__,param_1,(FTimeEvaluationCache *)0x0,param_2);
  return __return_storage_ptr__;
}

// GetInterpolationForTime @ 1460cc590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneFloatChannel *param_1,
          FTimeEvaluationCache *param_2,FFrameTime param_3)

{
  float fVar1;
  uchar uVar2;
  FFrameNumber FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  FFrameTime FVar9;
  bool bVar10;
  uint uVar11;
  FFrameNumber FVar12;
  FCachedInterpolation *pFVar13;
  TArrayView<FFrameNumber_const_,int> *pTVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FFrameNumber FVar18;
  ulonglong uVar19;
  FCachedInterpolationRange FVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FFrameTime local_170;
  FFrameTime local_168;
  FTimeEvaluationCache *local_160;
  FCycleParams local_158;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  FFrameNumber *local_118;
  undefined8 uStack_110;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  TArrayView<FFrameNumber_const_,int> local_e8;
  TArrayView<FFrameNumber_const_,int> local_d8;
  TArrayView<FFrameNumber_const_,int> local_c8;
  FCachedInterpolation local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVar12.Value = (param_1->Times).ArrayNum;
  local_168.FrameNumber.Value = FVar12.Value;
  if (FVar12.Value == 0) {
    if (param_1->bHasDefaultValue != false) {
      auVar5._8_4_ = 0;
      auVar5._0_8_ = (double)param_1->DefaultValue;
      auVar5._12_4_ = uStack_12c;
      (__return_storage_ptr__->Data)._padding_ = (longlong)(double)param_1->DefaultValue;
      (__return_storage_ptr__->Data)._padding_ = auVar5._8_8_;
      (__return_storage_ptr__->Data).TypeIndex = '\x01';
      (__return_storage_ptr__->Range).Start = -0x80000000;
      (__return_storage_ptr__->Range).End = 0x7fffffff;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->Data).TypeIndex = '\0';
    (__return_storage_ptr__->Range).Start = 0;
    (__return_storage_ptr__->Range).End = -1;
    return __return_storage_ptr__;
  }
  local_160 = param_2;
  if (FVar12.Value == 1) {
    if (((param_1->Values).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    dVar8 = (double)*(float *)(param_1->Values).AllocatorInstance.Data;
    if (((param_1->Times).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    auVar6._8_4_ = *(undefined4 *)(param_1->Times).AllocatorInstance.Data;
    auVar6._0_8_ = dVar8;
    auVar6._12_4_ = uStack_11c;
    (__return_storage_ptr__->Data)._padding_ = (longlong)dVar8;
    (__return_storage_ptr__->Data)._padding_ = auVar6._8_8_;
    (__return_storage_ptr__->Data).TypeIndex = '\x01';
    (__return_storage_ptr__->Range).Start = -0x80000000;
    (__return_storage_ptr__->Range).End = 0x7fffffff;
    return __return_storage_ptr__;
  }
  local_b8.Data.TypeIndex = 0;
  local_b8.Range.Start.Value = 0;
  local_b8.Range.End.Value = -1;
  bVar10 = CacheExtrapolation(param_1,param_3,&local_b8);
  if (bVar10) {
    uVar19 = (ulonglong)local_b8.Data.TypeIndex;
    (__return_storage_ptr__->Data).TypeIndex = local_b8.Data.TypeIndex;
    if ((7 < local_b8.Data.TypeIndex) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x105,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar19] !=
        UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FInvalidValue>::
        Construct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar19])(__return_storage_ptr__,&local_b8);
    }
    __return_storage_ptr__->Range = local_b8.Range;
    return __return_storage_ptr__;
  }
  uVar24 = 0;
  uVar23 = 0;
  if (((param_1->Times).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FCachedInterpolation *)(*pcVar4)();
    return pFVar13;
  }
  iVar22 = (param_1->Times).ArrayNum;
  uVar16 = iVar22 - 1;
  FVar12.Value = *(int *)(param_1->Times).AllocatorInstance.Data;
  uVar11 = uVar23;
  if ((int)uVar16 < iVar22) {
    uVar11 = ~uVar16 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FCachedInterpolation *)(*pcVar4)();
    return pFVar13;
  }
  FVar3.Value = *(int *)((param_1->Times).AllocatorInstance.Data +
                        (longlong)(param_1->Times).ArrayNum * 4 + -4);
  UE::MovieScene::CycleTime(&local_158,FVar12,FVar3,param_3);
  FVar18 = param_3.FrameNumber.Value;
  local_170 = param_3;
  if ((FVar18.Value < FVar12.Value) ||
     ((local_170.SubFrame = param_3.SubFrame, FVar18.Value == FVar12.Value &&
      (local_170.SubFrame < 0.0)))) {
    uVar2 = (param_1->PreInfinityExtrap).Value;
    if (uVar2 != '\x01') goto joined_r0x0001460cc884;
LAB_1460cc89e:
    uVar16 = local_168.FrameNumber.Value - 1;
    uVar11 = uVar23;
    if ((int)uVar16 < (param_1->Values).ArrayNum) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    fVar1 = *(float *)((param_1->Values).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x1c);
    if (((param_1->Values).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    local_158.ValueOffset =
         ((double)fVar1 - (double)*(float *)(param_1->Values).AllocatorInstance.Data) *
         (double)local_158.CycleCount;
    FVar9 = local_170;
  }
  else if ((FVar3.Value < FVar18.Value) ||
          ((FVar9 = param_3, FVar18.Value == FVar3.Value &&
           (FVar9 = param_3, 0.0 < local_170.SubFrame)))) {
    uVar2 = (param_1->PostInfinityExtrap).Value;
    if (uVar2 == '\x01') goto LAB_1460cc89e;
joined_r0x0001460cc884:
    FVar9 = param_3;
    if (uVar2 == '\x02') {
      UE::MovieScene::FCycleParams::Oscillate(&local_158,FVar12.Value,FVar3.Value);
      FVar9 = local_170;
    }
  }
  local_170 = FVar9;
  FVar18.Value = local_158.Time.FrameNumber.Value;
  if ((local_158.Time.FrameNumber.Value < FVar12.Value) ||
     (FVar3.Value < local_158.Time.FrameNumber.Value)) {
    local_178[0] = 0;
    bVar10 = `TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime'::__l27
             ::<lambda_1>::operator()(local_178);
    if (!bVar10) {
      (__return_storage_ptr__->Data).TypeIndex = '\0';
      (__return_storage_ptr__->Range).Start = 0;
      (__return_storage_ptr__->Range).End = -1;
      return __return_storage_ptr__;
    }
  }
  uVar11 = 0;
  if (param_2 != (FTimeEvaluationCache *)0x0) {
    iVar22 = param_2->CachedNumFrames;
    FVar9.SubFrame = local_158.Time.SubFrame;
    FVar9.FrameNumber.Value = local_158.Time.FrameNumber.Value;
    if (iVar22 == -1) {
      pTVar14 = TArrayView<FFrameNumber_const_,int>::
                TArrayView<FFrameNumber_const_,int><TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_const_&,TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                          (&local_d8,&param_1->Times);
      local_e8.DataPtr = pTVar14->DataPtr;
      local_e8.ArrayNum = pTVar14->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
      UE::MovieScene::EvaluateTime
                (&local_e8,FVar9,&param_2->Index1,&param_2->Index2,&param_2->InterpValue);
      iVar22 = (param_1->Times).ArrayNum;
      param_2->CachedNumFrames = iVar22;
      param_2->CacheFrameTime = FVar9;
    }
    if (((iVar22 == (param_1->Times).ArrayNum) &&
        (local_170 = param_2->CacheFrameTime, local_168 = FVar9,
        local_170.FrameNumber.Value.Value == FVar18.Value)) &&
       (local_170.SubFrame == local_158.Time.SubFrame)) {
      uVar24 = param_2->Index1;
      uVar21 = local_160->Index2;
      goto LAB_1460ccb3d;
    }
  }
  pTVar14 = TArrayView<FFrameNumber_const_,int>::
            TArrayView<FFrameNumber_const_,int><TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_const_&,TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                      (&local_c8,&param_1->Times);
  local_160 = *(FTimeEvaluationCache **)&pTVar14->ArrayNum;
  iVar22 = (int)local_160;
  uVar19 = (ulonglong)local_160 & 0xffffffff;
  local_118 = pTVar14->DataPtr;
  uStack_110 = *(undefined8 *)&pTVar14->ArrayNum;
  uVar16 = uVar11;
  if (0 < iVar22) {
    do {
      uVar17 = (uint)uVar19;
      uVar21 = uVar17 >> 1;
      uVar19 = (ulonglong)uVar21;
      uVar16 = uVar24;
      if (local_118[(int)(uVar21 + uVar24)].Value <= FVar18.Value) {
        uVar16 = uVar21 + uVar24 + (uVar17 & 1);
      }
      uVar24 = uVar16;
    } while (uVar21 != 0);
  }
  uVar17 = uVar16 - 1;
  uVar24 = 0xffffffff;
  if (-1 < (int)uVar17) {
    uVar24 = uVar17;
  }
  uVar21 = 0xffffffff;
  if ((int)uVar16 < iVar22) {
    uVar21 = uVar16;
  }
  if ((-1 < (int)uVar17) && ((int)uVar16 < iVar22)) {
    uVar15 = uVar11;
    if ((int)uVar17 < iVar22) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    uVar17 = uVar11;
    if ((int)uVar16 < (int)local_160) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
  }
LAB_1460ccb3d:
  if (uVar24 == 0xffffffff) {
    FVar12.Value = FVar18.Value + 1;
    if (0x7ffffffe < FVar18.Value) {
      FVar12.Value = FVar18.Value;
    }
    if ((int)uVar21 < (param_1->Values).ArrayNum) {
      uVar11 = ~uVar21 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    if ((int)uVar21 < (param_1->Times).ArrayNum) {
      uVar23 = ~uVar21 >> 0x1f;
    }
    dVar8 = (double)*(float *)((param_1->Values).AllocatorInstance.Data +
                              (longlong)(int)uVar21 * 0x1c) + local_158.ValueOffset;
    if ((uVar23 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    uVar25 = *(undefined4 *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
  }
  else {
    if (uVar21 != 0xffffffff) {
      GetInterpolationForKey(__return_storage_ptr__,param_1,uVar24,uVar21,&local_158);
      return __return_storage_ptr__;
    }
    FVar12.Value = FVar18.Value + 1;
    if (0x7ffffffe < FVar18.Value) {
      FVar12.Value = FVar18.Value;
    }
    if ((int)uVar24 < (param_1->Values).ArrayNum) {
      uVar11 = ~uVar24 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    if ((int)uVar24 < (param_1->Times).ArrayNum) {
      uVar23 = ~uVar24 >> 0x1f;
    }
    dVar8 = (double)*(float *)((param_1->Values).AllocatorInstance.Data +
                              (longlong)(int)uVar24 * 0x1c) + local_158.ValueOffset;
    if ((uVar23 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCachedInterpolation *)(*pcVar4)();
      return pFVar13;
    }
    uVar25 = *(undefined4 *)((param_1->Times).AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
    uStack_fc = uStack_ec;
  }
  FVar20.End.Value = FVar12.Value;
  FVar20.Start.Value = FVar18.Value;
  auVar7._8_4_ = uVar25;
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = uStack_fc;
  (__return_storage_ptr__->Data)._padding_ = (longlong)dVar8;
  (__return_storage_ptr__->Data)._padding_ = auVar7._8_8_;
  (__return_storage_ptr__->Data).TypeIndex = '\x01';
  __return_storage_ptr__->Range = FVar20;
  return __return_storage_ptr__;
}

// GetInterpolationForTime @ 1460ccd70

FCachedInterpolation * __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime
          (FCachedInterpolation *__return_storage_ptr__,FMovieSceneFloatChannel *param_1,
          FFrameTime param_2)

{
  GetInterpolationForTime(__return_storage_ptr__,param_1,(FTimeEvaluationCache *)0x0,param_2);
  return __return_storage_ptr__;
}

// GetInterpolationMode @ 1460cceb0

EMovieSceneKeyInterpolation __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationMode
          (FMovieSceneDoubleChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneKeyInterpolation EVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (&param_1->Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar3 = (param_1->Values).ArrayNum;
  pFVar4 = (param_1->Values).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  uVar8 = (param_1->Times).ArrayNum;
  if ((int)uVar8 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  else if (0 < (int)uVar8) {
    iVar9 = 0;
    do {
      iVar1 = (uVar8 >> 1) + iVar9;
      if (*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) < param_2->Value)
      {
        iVar9 = iVar1 + (uVar8 & 1);
      }
      uVar10 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar10 != 0);
    uVar8 = 0;
    if (-1 < (int)(iVar9 - 1U)) {
      uVar8 = iVar9 - 1U;
    }
    uVar10 = 0;
    if ((int)uVar8 < iVar3) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    FVar2 = pFVar4[(longlong)(int)uVar8 * 0x20 + 0x1c];
    if (FVar2 == (FScriptContainerElement)0x0) {
      param_3 = Linear;
    }
    else if (FVar2 == (FScriptContainerElement)0x1) {
      param_3 = Constant;
    }
    else if (FVar2 == (FScriptContainerElement)0x2) {
      FVar2 = pFVar4[(longlong)(int)uVar8 * 0x20 + 0x1d];
      if (FVar2 == (FScriptContainerElement)0x0) {
        param_3 = Auto;
      }
      else if (FVar2 == (FScriptContainerElement)0x1) {
        param_3 = User;
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        param_3 = Break;
      }
      else if (FVar2 == (FScriptContainerElement)0x4) {
        param_3 = SmartAuto;
      }
    }
  }
  return param_3;
}

// GetInterpolationMode @ 1460cd080

EMovieSceneKeyInterpolation __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationMode
          (FMovieSceneFloatChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  int iVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneKeyInterpolation EVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (((&param_1->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (&param_1->Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  iVar3 = (param_1->Values).ArrayNum;
  pFVar4 = (param_1->Values).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  uVar8 = (param_1->Times).ArrayNum;
  if ((int)uVar8 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  else if (0 < (int)uVar8) {
    iVar9 = 0;
    do {
      iVar1 = (uVar8 >> 1) + iVar9;
      if (*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) < param_2->Value)
      {
        iVar9 = iVar1 + (uVar8 & 1);
      }
      uVar10 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar10 != 0);
    uVar8 = 0;
    if (-1 < (int)(iVar9 - 1U)) {
      uVar8 = iVar9 - 1U;
    }
    uVar10 = 0;
    if ((int)uVar8 < iVar3) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    FVar2 = pFVar4[(longlong)(int)uVar8 * 0x1c + 0x18];
    if (FVar2 == (FScriptContainerElement)0x0) {
      param_3 = Linear;
    }
    else if (FVar2 == (FScriptContainerElement)0x1) {
      param_3 = Constant;
    }
    else if (FVar2 == (FScriptContainerElement)0x2) {
      FVar2 = pFVar4[(longlong)(int)uVar8 * 0x1c + 0x19];
      if (FVar2 == (FScriptContainerElement)0x0) {
        param_3 = Auto;
      }
      else if (FVar2 == (FScriptContainerElement)0x1) {
        param_3 = User;
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        param_3 = Break;
      }
      else if (FVar2 == (FScriptContainerElement)0x4) {
        param_3 = SmartAuto;
      }
    }
  }
  return param_3;
}

// GetTangentValue @ 1460d0560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetTangentValue
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,float param_3,double param_4)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FCachedInterpolation *pFVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  double dVar12;
  undefined1 in_register_00001284 [12];
  undefined1 auVar13 [16];
  double dVar15;
  FFrameNumber FVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_148 [32];
  FFrameTime local_128;
  FFrameTime local_120;
  double local_118;
  FCachedInterpolation local_110;
  ulonglong local_b0;
  undefined1 auVar14 [16];
  
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  auVar13._4_12_ = in_register_00001284;
  auVar13._0_4_ = param_3;
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    param_4 = __real_3fb999999999999a;
  }
  local_128.SubFrame = 0.0;
  local_128.FrameNumber.Value = param_2.Value;
  FVar16.Value = 0;
  fVar17 = 0.0;
  local_120 = local_128;
  iVar7 = (param_1->TickResolution).Denominator;
  dVar18 = (double)iVar7;
  local_128.SubFrame = 0.0;
  dVar19 = (double)(param_1->TickResolution).Numerator;
  dVar12 = ((double)((longlong)iVar7 * (longlong)param_2.Value) + dVar18 * 0.0) / dVar19;
  local_118 = dVar12;
  pFVar6 = GetInterpolationForTime(&local_110,param_1,(FTimeEvaluationCache *)0x0,local_128);
  UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
            (pFVar6,local_128,(double *)&local_120);
  dVar15 = ((dVar12 + param_4) * dVar19) / dVar18;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar15;
  auVar13 = roundpd(auVar13,auVar9,1);
  dVar12 = auVar13._0_8_;
  dVar15 = dVar15 - dVar12;
  if (__real_41dfffffffc00000 <= dVar12) {
    dVar12 = __real_41dfffffffc00000;
  }
  if (dVar12 <= __real_c1e0000000000000) {
    dVar12 = __real_c1e0000000000000;
  }
  iVar7 = (int)dVar15;
  local_128.SubFrame = (float)dVar15 - (float)iVar7;
  if ((0.0 < local_128.SubFrame) && (::FFrameTime::MaxSubframe <= local_128.SubFrame)) {
    local_128.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= local_128.SubFrame) {
    local_128.SubFrame = ::FFrameTime::MaxSubframe;
  }
  local_120.FrameNumber.Value = 0;
  local_120.SubFrame = 0.0;
  if (local_128.SubFrame <= 0.0) {
    local_128.SubFrame = 0.0;
  }
  local_128.FrameNumber.Value = iVar7 + (int)dVar12;
  pFVar6 = GetInterpolationForTime(&local_110,param_1,(FTimeEvaluationCache *)0x0,local_128);
  bVar5 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
                    (pFVar6,local_128,(double *)&local_120);
  if (bVar5) {
    FVar16 = local_120.FrameNumber.Value;
    fVar17 = local_120.SubFrame;
  }
  dVar12 = ((double)CONCAT44(fVar17,FVar16.Value) - (double)param_3) /
           (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & uVar4,SUB84(param_4,0) & uVar3);
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar4,SUB84(dVar12,0) & uVar3) -
           __real_7fefffffffffffff;
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar4,SUB84(dVar15,0) & uVar3);
  for (iVar7 = 10; (dVar2 < dVar15 && (auVar14._8_8_ = 0, auVar14._0_8_ = dVar12, 0 < iVar7));
      iVar7 = iVar7 + -1) {
    uVar11 = SUB84(dVar12,0);
    uVar1 = (ulonglong)dVar12 >> 0x20;
    param_4 = param_4 * __real_3fe0000000000000;
    dVar15 = ((local_118 + param_4) * dVar19) / dVar18;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar15;
    auVar13 = roundpd(auVar14,auVar10,1);
    dVar12 = auVar13._0_8_;
    dVar15 = dVar15 - dVar12;
    if (__real_41dfffffffc00000 <= dVar12) {
      dVar12 = __real_41dfffffffc00000;
    }
    if (dVar12 <= __real_c1e0000000000000) {
      dVar12 = __real_c1e0000000000000;
    }
    iVar8 = (int)dVar15;
    local_120.SubFrame = (float)dVar15 - (float)iVar8;
    if ((0.0 < local_120.SubFrame) && (::FFrameTime::MaxSubframe <= local_120.SubFrame)) {
      local_120.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= local_120.SubFrame) {
      local_120.SubFrame = ::FFrameTime::MaxSubframe;
    }
    local_128.FrameNumber.Value = 0;
    local_128.SubFrame = 0.0;
    if (local_120.SubFrame <= 0.0) {
      local_120.SubFrame = 0.0;
    }
    local_120.FrameNumber.Value = iVar8 + (int)dVar12;
    pFVar6 = GetInterpolationForTime(&local_110,param_1,(FTimeEvaluationCache *)0x0,local_120);
    bVar5 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
                      (pFVar6,local_120,(double *)&local_128);
    if (bVar5) {
      FVar16 = local_128.FrameNumber.Value;
      fVar17 = local_128.SubFrame;
    }
    dVar12 = ((double)CONCAT44(fVar17,FVar16.Value) - (double)param_3) /
             (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & uVar4,SUB84(param_4,0) & uVar3);
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar4,SUB84(dVar12,0) & uVar3) -
             (double)CONCAT44((uint)uVar1 & uVar4,uVar11 & uVar3);
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar4,SUB84(dVar15,0) & uVar3);
  }
  return (dVar18 / dVar19) * dVar12;
}

// GetTangentValue @ 1460d08f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetTangentValue
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3,double param_4)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FCachedInterpolation *pFVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  double dVar12;
  undefined1 in_register_00001284 [12];
  undefined1 auVar13 [16];
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_148 [32];
  FFrameTime local_128;
  FFrameTime local_120;
  double local_118;
  FCachedInterpolation local_110;
  ulonglong local_b0;
  undefined1 auVar14 [16];
  
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  auVar13._4_12_ = in_register_00001284;
  auVar13._0_4_ = param_3;
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    param_4 = __real_3fb999999999999a;
  }
  local_128.SubFrame = 0.0;
  local_128.FrameNumber.Value = param_2.Value;
  fVar16 = 0.0;
  local_120 = local_128;
  iVar7 = (param_1->TickResolution).Denominator;
  dVar17 = (double)iVar7;
  local_128.SubFrame = 0.0;
  dVar18 = (double)(param_1->TickResolution).Numerator;
  dVar12 = ((double)((longlong)iVar7 * (longlong)param_2.Value) + dVar17 * 0.0) / dVar18;
  local_118 = dVar12;
  pFVar6 = GetInterpolationForTime(&local_110,param_1,(FTimeEvaluationCache *)0x0,local_128);
  UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
            (pFVar6,local_128,(double *)&local_120);
  dVar15 = ((dVar12 + param_4) * dVar18) / dVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar15;
  auVar13 = roundpd(auVar13,auVar9,1);
  dVar12 = auVar13._0_8_;
  dVar15 = dVar15 - dVar12;
  if (__real_41dfffffffc00000 <= dVar12) {
    dVar12 = __real_41dfffffffc00000;
  }
  if (dVar12 <= __real_c1e0000000000000) {
    dVar12 = __real_c1e0000000000000;
  }
  iVar7 = (int)dVar15;
  local_128.SubFrame = (float)dVar15 - (float)iVar7;
  if ((0.0 < local_128.SubFrame) && (::FFrameTime::MaxSubframe <= local_128.SubFrame)) {
    local_128.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= local_128.SubFrame) {
    local_128.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_128.SubFrame <= 0.0) {
    local_128.SubFrame = 0.0;
  }
  local_120.FrameNumber.Value = 0;
  local_120.SubFrame = 0.0;
  local_128.FrameNumber.Value = iVar7 + (int)dVar12;
  pFVar6 = GetInterpolationForTime(&local_110,param_1,(FTimeEvaluationCache *)0x0,local_128);
  bVar5 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
                    (pFVar6,local_128,(double *)&local_120);
  if (bVar5) {
    fVar16 = (float)(double)local_120;
  }
  dVar12 = ((double)fVar16 - (double)param_3) /
           (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & uVar4,SUB84(param_4,0) & uVar3);
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar4,SUB84(dVar12,0) & uVar3) -
           __real_7fefffffffffffff;
  dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar4,SUB84(dVar15,0) & uVar3);
  for (iVar7 = 10; (dVar2 < dVar15 && (auVar14._8_8_ = 0, auVar14._0_8_ = dVar12, 0 < iVar7));
      iVar7 = iVar7 + -1) {
    uVar11 = SUB84(dVar12,0);
    uVar1 = (ulonglong)dVar12 >> 0x20;
    param_4 = param_4 * __real_3fe0000000000000;
    dVar15 = ((local_118 + param_4) * dVar18) / dVar17;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar15;
    auVar13 = roundpd(auVar14,auVar10,1);
    dVar12 = auVar13._0_8_;
    dVar15 = dVar15 - dVar12;
    if (__real_41dfffffffc00000 <= dVar12) {
      dVar12 = __real_41dfffffffc00000;
    }
    if (dVar12 <= __real_c1e0000000000000) {
      dVar12 = __real_c1e0000000000000;
    }
    iVar8 = (int)dVar15;
    local_120.SubFrame = (float)dVar15 - (float)iVar8;
    if ((0.0 < local_120.SubFrame) && (::FFrameTime::MaxSubframe <= local_120.SubFrame)) {
      local_120.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= local_120.SubFrame) {
      local_120.SubFrame = ::FFrameTime::MaxSubframe;
    }
    local_128.FrameNumber.Value = 0;
    local_128.SubFrame = 0.0;
    if (local_120.SubFrame <= 0.0) {
      local_120.SubFrame = 0.0;
    }
    local_120.FrameNumber.Value = iVar8 + (int)dVar12;
    pFVar6 = GetInterpolationForTime(&local_110,param_1,(FTimeEvaluationCache *)0x0,local_120);
    bVar5 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate
                      (pFVar6,local_120,(double *)&local_128);
    if (bVar5) {
      fVar16 = (float)(double)local_128;
    }
    dVar12 = ((double)fVar16 - (double)param_3) /
             (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & uVar4,SUB84(param_4,0) & uVar3);
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar4,SUB84(dVar12,0) & uVar3) -
             (double)CONCAT44((uint)uVar1 & uVar4,uVar11 & uVar3);
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar4,SUB84(dVar15,0) & uVar3);
  }
  return (dVar17 / dVar18) * dVar12;
}

// InsertKeyInternal @ 1460d6660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::InsertKeyInternal
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2)

{
  int *piVar1;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FFrameNumber local_res10 [2];
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined2 uStack_23;
  undefined1 uStack_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar11 = (param_1->Times).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar11) {
    do {
      iVar8 = (uVar11 >> 1) + iVar7;
      if (*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar8 * 4) <= param_2.Value)
      {
        iVar7 = iVar8 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  local_res10[0].Value = param_2.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(&param_1->Times,local_res10,iVar7);
  uStack_28 = 0;
  pTVar2 = &param_1->Values;
  uStack_21 = 0;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  uStack_27 = 0x2000000;
  local_40 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if ((pFVar10 <= (FScriptContainerElement *)&local_40) &&
     (lVar9 = (longlong)(param_1->Values).ArrayMax,
     (FScriptContainerElement *)&local_40 < pFVar10 + lVar9 * 0x20)) {
    local_60 = (longlong)(param_1->Values).ArrayNum;
    local_58 = 0x20;
    local_78 = &local_40;
    local_70 = pFVar10;
    local_68 = lVar9;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar8 = (param_1->Values).ArrayNum;
  piVar1 = &(param_1->Values).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  (param_1->Values).ArrayNum = iVar8 + 1;
  lVar9 = (longlong)iVar7 * 0x20;
  pFVar10 = pFVar10 + lVar9;
  memmove(pFVar10 + 0x20,pFVar10,(longlong)(iVar8 - iVar7) << 5);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar10 = pFVar3 + lVar9;
  *(undefined8 *)pFVar10 = local_40;
  *(undefined8 *)(pFVar10 + 8) = uStack_38;
  pFVar3 = pFVar3 + lVar9 + 0x10;
  *(undefined8 *)pFVar3 = uStack_30;
  *(ulonglong *)(pFVar3 + 8) = CONCAT17(uStack_21,CONCAT25(uStack_23,CONCAT41(uStack_27,uStack_28)))
  ;
  FKeyHandleLookupTable::AllocateHandle((FKeyHandleLookupTable *)&param_1->KeyHandles,(int)local_48)
  ;
  return iVar7;
}

// InsertKeyInternal @ 1460d6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::InsertKeyInternal
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2)

{
  int *piVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FFrameNumber local_res10 [2];
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = (param_1->Times).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar7 = (uVar10 >> 1) + iVar6;
      if (*(int *)((param_1->Times).AllocatorInstance.Data + (longlong)iVar7 * 4) <= param_2.Value)
      {
        iVar6 = iVar7 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  local_res10[0].Value = param_2.Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(&param_1->Times,local_res10,iVar6);
  local_30 = 0;
  pTVar2 = &param_1->Values;
  uStack_25 = 0;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  uStack_2c = 0;
  uStack_28 = 2;
  uStack_27 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_40) &&
     (lVar8 = (longlong)(param_1->Values).ArrayMax,
     (FScriptContainerElement *)&local_40 < pFVar9 + lVar8 * 0x1c)) {
    local_60 = (longlong)(param_1->Values).ArrayNum;
    local_58 = 0x1c;
    local_78 = &local_40;
    local_70 = pFVar9;
    local_68 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar7 = (param_1->Values).ArrayNum;
  piVar1 = &(param_1->Values).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  (param_1->Values).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar6 * 0x1c;
  pFVar9 = pFVar9 + lVar8;
  memmove(pFVar9 + 0x1c,pFVar9,(longlong)(iVar7 - iVar6) * 0x1c);
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + lVar8) = local_40;
  *(undefined8 *)(pFVar9 + lVar8 + 8) = uStack_38;
  *(ulonglong *)(pFVar9 + lVar8 + 0x10) = CONCAT44(uStack_2c,local_30);
  *(uint *)(pFVar9 + lVar8 + 0x18) = CONCAT13(uStack_25,CONCAT21(uStack_27,uStack_28));
  FKeyHandleLookupTable::AllocateHandle((FKeyHandleLookupTable *)&param_1->KeyHandles,(int)local_48)
  ;
  return iVar6;
}

// Optimize @ 1460dcb50

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::Optimize
          (FMovieSceneDoubleChannel *param_1,FKeyDataOptimizationParams *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FFrameRate FVar6;
  code *pcVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  uint local_158;
  uint local_154;
  FScriptContainerElement *local_150;
  uint local_148;
  void *local_140;
  undefined8 local_138;
  uint local_130;
  uint local_12c;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_128;
  longlong local_108;
  void *local_100;
  undefined8 local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<FKeyHandle_const_,int> local_c8 [8];
  
  local_128._padding_ = (longlong)&param_1->Times;
  local_128._padding_ = (longlong)&param_1->KeyHandles;
  local_128.Values = &param_1->Values;
  local_128._padding_ = (longlong)param_1;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_128._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_128.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_140 = (void *)0x0;
  local_138 = 0;
  (**(code **)(param_1->_padding_ + 8))(param_1,&param_2->Range,&local_100,&local_140);
  dVar11 = __real_3fd5555555555555;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  if (2 < (int)local_138) {
    local_154 = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    local_15c = 0;
    local_148 = 1;
    if (1 < (int)local_138 + -1) {
      local_108 = 4;
      do {
        lVar18 = local_108;
        uVar14 = local_148;
        local_130 = ~local_148 >> 0x1f;
        uVar13 = 0;
        uVar16 = uVar13;
        if ((int)local_148 < (int)local_138) {
          uVar16 = local_130;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((FKeyHandleLookupTable *)local_128._padding_ == (FKeyHandleLookupTable *)0x0) {
          local_res18[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res18);
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)local_128._padding_,
                              (FKeyHandle)*(uint *)(lVar18 + (longlong)local_140));
        }
        local_12c = uVar14 + 1;
        uVar14 = uVar13;
        if ((int)local_12c < (int)local_138) {
          uVar14 = ~local_12c >> 0x1f;
        }
        local_158 = uVar16;
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e8 = lVar18 + 4;
        if ((FKeyHandleLookupTable *)local_128._padding_ == (FKeyHandleLookupTable *)0x0) {
          local_res20[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res20);
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)local_128._padding_,
                              (FKeyHandle)*(uint *)(local_e8 + (longlong)local_140));
        }
        iVar3 = (local_128.Values)->ArrayNum;
        pFVar17 = ((local_128.Values)->AllocatorInstance).Data;
        if ((iVar3 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = uVar13;
        if ((int)uVar16 < iVar3) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar1 = *(double *)(pFVar17 + (longlong)(int)uVar16 * 0x20);
        FVar6 = param_2->DisplayRate;
        iVar3 = *(int *)(local_128._padding_ + 8);
        pFVar17 = ((ForAnyElementType *)local_128._padding_)->Data;
        if ((iVar3 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = uVar13;
        if ((int)local_158 < iVar3) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar3 = *(int *)(pFVar17 + (longlong)(int)uVar16 * 4);
        iVar4 = *(int *)(local_128._padding_ + 8);
        local_150 = ((ForAnyElementType *)local_128._padding_)->Data;
        if ((iVar4 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((int)uVar14 < iVar4) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar4 = (local_128.Values)->ArrayNum;
        pFVar17 = ((local_128.Values)->AllocatorInstance).Data;
        iVar5 = *(int *)(local_150 + (longlong)(int)uVar14 * 4);
        local_150 = pFVar17;
        if ((iVar4 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar16 = 0;
        if ((int)uVar14 < iVar4) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = local_150 + (longlong)(int)uVar14 * 0x20;
        iVar4 = *(int *)(local_128._padding_ + 8);
        local_150 = ((ForAnyElementType *)local_128._padding_)->Data;
        if ((iVar4 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = (longlong)(int)local_154;
        uVar16 = ~local_154;
        uVar14 = 0;
        if ((int)local_154 < iVar4) {
          uVar14 = uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f0 = ((local_128.Values)->AllocatorInstance).Data;
        iVar4 = *(int *)(local_150 + lVar18 * 4);
        local_150 = (FScriptContainerElement *)
                    CONCAT44(local_150._4_4_,(local_128.Values)->ArrayNum);
        if (((local_128.Values)->ArrayNum < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = 0;
        if ((int)local_154 < (int)local_150) {
          uVar14 = uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = local_f0 + lVar18 * 0x20;
        dVar23 = (double)FVar6.Numerator / (double)FVar6.Denominator;
        dVar22 = (double)(iVar5 - iVar4) * (dVar8 / dVar23);
        if (dVar22 <= 0.0) {
LAB_1460dd1dd:
          dVar21 = *(double *)pFVar19;
        }
        else if (pFVar19[0x1c] == (FScriptContainerElement)0x1) {
          if (iVar3 < iVar5) goto LAB_1460dd1dd;
          dVar21 = *(double *)pFVar17;
        }
        else {
          dVar21 = *(double *)pFVar19;
          dVar2 = *(double *)pFVar17;
          dVar20 = ((double)(iVar3 - iVar4) * (dVar8 / dVar23)) / dVar22;
          if ((pFVar19[0x1c] == (FScriptContainerElement)0x0) &&
             ((GSequencerLinearCubicInterpolation == 0 ||
              (pFVar17[0x1c] != (FScriptContainerElement)0x2)))) {
            dVar21 = (dVar2 - dVar21) * dVar20 + dVar21;
          }
          else {
            dVar21 = UE::Curves::BezierInterp<double>
                               (dVar21,(double)*(float *)(pFVar19 + 0xc) * dVar23 * dVar22 * dVar11
                                       + dVar21,
                                dVar2 - (double)*(float *)(pFVar17 + 8) * dVar23 * dVar22 * dVar11,
                                dVar2,(float)dVar20);
          }
        }
        dVar21 = dVar21 - dVar1;
        if ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar10,SUB84(dVar21,0) & uVar9) <=
            (double)param_2->Tolerance) {
          uVar14 = 0;
          if ((int)local_148 < (int)local_138) {
            uVar14 = local_130;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar17 = (FScriptContainerElement *)(local_108 + (longlong)local_140);
          if (((local_168.Data <= pFVar17) && (pFVar17 < local_168.Data + (longlong)local_15c * 4))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_160 == local_15c) {
            local_160 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_168,&local_15c);
          }
          *(undefined4 *)(local_168.Data + (longlong)local_160 * 4) = *(undefined4 *)pFVar17;
          local_160 = local_160 + 1;
        }
        else {
          local_154 = local_158;
        }
        local_148 = local_12c;
        local_108 = local_e8;
      } while ((int)local_12c < (int)local_138 + -1);
    }
    iVar3 = local_160;
    local_d8 = local_168.Data;
    if ((local_160 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar3;
    local_c8[0].DataPtr = (FKeyHandle *)local_d8;
    iStack_d0 = iVar3;
    TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeys(&local_128,local_c8);
    if (param_2->bAutoSetInterpolation != false) {
      AutoSetTangents(param_1,0.0);
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}

// Optimize @ 1460dd430

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::Optimize
          (FMovieSceneFloatChannel *param_1,FKeyDataOptimizationParams *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FFrameRate FVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_188;
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  FScriptContainerElement *local_170;
  uint local_168;
  uint local_164;
  void *local_160;
  undefined8 local_158;
  FScriptContainerElement *local_150;
  uint local_148;
  uint local_144;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_140;
  longlong local_120;
  void *local_118;
  undefined8 local_110;
  FScriptContainerElement *local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<FKeyHandle_const_,int> local_e8 [10];
  
  local_140._padding_ = (longlong)&param_1->Times;
  local_140._padding_ = (longlong)&param_1->KeyHandles;
  local_140.Values = &param_1->Values;
  local_140._padding_ = (longlong)param_1;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_140._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_140.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_118 = (void *)0x0;
  local_110 = 0;
  local_160 = (void *)0x0;
  local_158 = 0;
  (**(code **)(param_1->_padding_ + 8))(param_1,&param_2->Range,&local_118,&local_160);
  dVar9 = __real_3fd5555555555555;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar7 = __real_3ff0000000000000;
  if (2 < (int)local_158) {
    local_188 = 0;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    local_174 = 0;
    local_164 = 1;
    if (1 < (int)local_158 + -1) {
      local_120 = 4;
      do {
        lVar10 = local_120;
        uVar13 = local_164;
        local_148 = ~local_164 >> 0x1f;
        uVar12 = 0;
        if ((int)local_164 < (int)local_158) {
          uVar12 = local_148;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((FKeyHandleLookupTable *)local_140._padding_ == (FKeyHandleLookupTable *)0x0) {
          local_res18[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res18);
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)local_140._padding_,
                              (FKeyHandle)*(uint *)((longlong)local_160 + lVar10));
        }
        local_144 = uVar13 + 1;
        uVar15 = 0;
        uVar13 = uVar15;
        if ((int)local_144 < (int)local_158) {
          uVar13 = ~local_144 >> 0x1f;
        }
        local_168 = uVar12;
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_100 = lVar10 + 4;
        if ((FKeyHandleLookupTable *)local_140._padding_ == (FKeyHandleLookupTable *)0x0) {
          local_res20[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res20);
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)local_140._padding_,
                              (FKeyHandle)*(uint *)((longlong)local_160 + local_100));
        }
        iVar2 = (local_140.Values)->ArrayNum;
        pFVar17 = ((local_140.Values)->AllocatorInstance).Data;
        if ((iVar2 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = uVar15;
        if ((int)uVar12 < iVar2) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar24 = *(float *)(pFVar17 + (longlong)(int)uVar12 * 0x1c);
        iVar2 = *(int *)(local_140._padding_ + 8);
        local_170 = ((ForAnyElementType *)local_140._padding_)->Data;
        FVar5 = param_2->DisplayRate;
        if ((iVar2 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = uVar15;
        if ((int)uVar12 < iVar2) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = ((ForAnyElementType *)local_140._padding_)->Data;
        iVar2 = *(int *)(local_170 + (longlong)(int)uVar12 * 4);
        iVar3 = *(int *)(local_140._padding_ + 8);
        if ((iVar3 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar15;
        if ((int)uVar13 < iVar3) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_170 = ((local_140.Values)->AllocatorInstance).Data;
        iVar3 = *(int *)(pFVar17 + (longlong)(int)uVar13 * 4);
        iVar4 = (local_140.Values)->ArrayNum;
        if ((iVar4 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar15;
        if ((int)uVar13 < iVar4) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = local_170 + (longlong)(int)uVar13 * 0x1c;
        iVar4 = *(int *)(local_140._padding_ + 8);
        local_150 = ((ForAnyElementType *)local_140._padding_)->Data;
        if ((iVar4 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar15;
        if ((int)local_188 < iVar4) {
          uVar13 = ~local_188 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_170 = (FScriptContainerElement *)(longlong)(int)local_188;
        iVar4 = *(int *)(local_150 + (longlong)local_170 * 4);
        local_108 = ((local_140.Values)->AllocatorInstance).Data;
        local_150 = (FScriptContainerElement *)
                    CONCAT44(local_150._4_4_,(local_140.Values)->ArrayNum);
        if (((local_140.Values)->ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar15;
        if ((int)local_188 < (int)local_150) {
          uVar13 = ~local_188 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_108 + (longlong)local_170 * 0x1c;
        dVar26 = (double)FVar5.Numerator / (double)FVar5.Denominator;
        dVar25 = (double)(iVar3 - iVar4) * (dVar7 / dVar26);
        if (dVar25 <= 0.0) {
LAB_1460ddb52:
          fVar23 = *(float *)pFVar16;
        }
        else if (pFVar16[0x18] == (FScriptContainerElement)0x1) {
          if (iVar2 < iVar3) goto LAB_1460ddb52;
          fVar23 = *(float *)pFVar17;
        }
        else {
          fVar23 = *(float *)pFVar16;
          fVar1 = *(float *)pFVar17;
          dVar21 = ((double)(iVar2 - iVar4) * (dVar7 / dVar26)) / dVar25;
          if ((pFVar16[0x18] == (FScriptContainerElement)0x0) &&
             ((GSequencerLinearCubicInterpolation == 0 ||
              (pFVar17[0x18] != (FScriptContainerElement)0x2)))) {
            fVar23 = (float)((double)(fVar1 - fVar23) * dVar21 + (double)fVar23);
          }
          else {
            fVar20 = (float)dVar21;
            fVar22 = (float)((double)fVar1 -
                            (double)*(float *)(pFVar17 + 4) * dVar26 * dVar25 * dVar9);
            fVar18 = (float)((double)*(float *)(pFVar16 + 8) * dVar26 * dVar25 * dVar9 +
                            (double)fVar23);
            fVar19 = (fVar22 - fVar18) * fVar20 + fVar18;
            fVar23 = (fVar18 - fVar23) * fVar20 + fVar23;
            fVar23 = (fVar19 - fVar23) * fVar20 + fVar23;
            fVar23 = (((((fVar1 - fVar22) * fVar20 + fVar22) - fVar19) * fVar20 + fVar19) - fVar23)
                     * fVar20 + fVar23;
          }
        }
        fVar24 = (float)((uint)(fVar23 - fVar24) & uVar8);
        if (fVar24 < param_2->Tolerance || fVar24 == param_2->Tolerance) {
          if ((int)local_164 < (int)local_158) {
            uVar15 = local_148;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (FScriptContainerElement *)((longlong)local_160 + local_120);
          if (((local_180.Data <= pFVar17) && (pFVar17 < local_180.Data + (longlong)local_174 * 4))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_178 == local_174) {
            local_178 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_180,&local_174);
          }
          *(undefined4 *)(local_180.Data + (longlong)local_178 * 4) = *(undefined4 *)pFVar17;
          local_178 = local_178 + 1;
        }
        else {
          local_188 = local_168;
        }
        local_164 = local_144;
        local_120 = local_100;
      } while ((int)local_144 < (int)local_158 + -1);
    }
    iVar2 = local_178;
    local_f8 = local_180.Data;
    if ((local_178 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_e8[0]._12_4_ = uStack_ec;
    local_e8[0].ArrayNum = iVar2;
    local_e8[0].DataPtr = (FKeyHandle *)local_f8;
    iStack_f0 = iVar2;
    TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeys(&local_140,local_e8);
    if (param_2->bAutoSetInterpolation != false) {
      AutoSetTangents(param_1,0.0);
    }
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  return;
}

// PopulateCurvePoints @ 1460de130

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::PopulateCurvePoints
          (FMovieSceneDoubleChannel *param_1,double param_2,double param_3,double param_4,
          double param_5,FFrameRate param_6,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_7)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  double local_res8;
  double local_b8;
  double local_b0;
  double local_a8;
  FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
  local_a0;
  
  if (param_1 != (FMovieSceneDoubleChannel *)0x0) {
    uVar1 = (param_1->PreInfinityExtrap).Value;
    uVar2 = (param_1->PostInfinityExtrap).Value;
    iVar3 = (param_1->Times).ArrayNum;
    local_b0 = param_5;
    local_res8 = param_3;
    local_b8 = param_2;
    local_a8 = param_4;
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = (param_1->Values).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((uVar1 == '\0') || (uVar1 == '\x01')) || (uVar1 == '\x02')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (((uVar2 == '\0') || (uVar2 == '\x01')) || (uVar2 == '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((bVar7) || (bVar6)) && ((1 < iVar3 && (1 < iVar4)))) {
      UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                (&local_a0,param_1,&param_6,&local_a8,&local_b0,&local_b8,&local_res8,param_7);
    }
    else {
      UE::MovieScene::Private::
      PopulateCurvePoints<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                (param_1,&param_6,local_a8,local_b0,local_b8,local_res8,param_7);
    }
  }
  return;
}

// PopulateCurvePoints @ 1460de2e0

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::PopulateCurvePoints
          (FMovieSceneFloatChannel *param_1,double param_2,double param_3,double param_4,
          float param_5,FFrameRate param_6,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_7)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  double local_res8;
  double local_b8;
  double local_b0;
  double local_a8;
  FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float> local_a0;
  
  if (param_1 != (FMovieSceneFloatChannel *)0x0) {
    uVar1 = (param_1->PreInfinityExtrap).Value;
    uVar2 = (param_1->PostInfinityExtrap).Value;
    local_res8 = (double)param_5;
    iVar3 = (param_1->Times).ArrayNum;
    local_b8 = param_3;
    local_b0 = param_2;
    local_a8 = param_4;
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = (param_1->Values).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((uVar1 == '\0') || (uVar1 == '\x01')) || (uVar1 == '\x02')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (((uVar2 == '\0') || (uVar2 == '\x01')) || (uVar2 == '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((bVar7) || (bVar6)) && ((1 < iVar3 && (1 < iVar4)))) {
      UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                (&local_a0,param_1,&param_6,&local_a8,&local_res8,&local_b0,&local_b8,param_7);
    }
    else {
      UE::MovieScene::Private::
      PopulateCurvePoints<FMovieSceneFloatChannel,FMovieSceneFloatValue,float>
                (param_1,&param_6,local_a8,(float)local_res8,local_b0,local_b8,param_7);
    }
  }
  return;
}

// RemapTimes @ 1460e7370

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::RemapTimes
          (FMovieSceneDoubleChannel *param_1,IRetimingInterface *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_38;
  
  pTVar2 = &param_1->Values;
  pTVar1 = &param_1->Times;
  if ((param_1->Times).ArrayNum != (param_1->Values).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel->Times.Num() == InChannel->Values.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                       ,0x361,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar9 = (double)(**(code **)((longlong)*param_2 + 0x10))(param_2);
  local_38._padding_ = (longlong)&param_1->KeyHandles;
  local_38._padding_ = (longlong)pTVar1;
  local_38._padding_ = (longlong)param_1;
  local_38.Values = pTVar2;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar2 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes(&local_38,param_2);
  uVar7 = 0;
  if (0 < (param_1->Times).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (param_1->Values).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uVar7 = uVar7 + 1;
      *(float *)(pFVar3 + lVar8 + 8) = (float)((double)*(float *)(pFVar3 + lVar8 + 8) * dVar9);
      *(float *)(pFVar3 + lVar8 + 0xc) = (float)((double)*(float *)(pFVar3 + lVar8 + 0xc) * dVar9);
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (param_1->Times).ArrayNum);
  }
  return;
}

// RemapTimes @ 1460e74f0

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::RemapTimes
          (FMovieSceneFloatChannel *param_1,IRetimingInterface *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  TMovieSceneChannelData<FMovieSceneFloatValue> local_38;
  
  pTVar2 = &param_1->Values;
  pTVar1 = &param_1->Times;
  if ((param_1->Times).ArrayNum != (param_1->Values).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel->Times.Num() == InChannel->Values.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                       ,0x361,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar9 = (double)(**(code **)((longlong)*param_2 + 0x10))(param_2);
  local_38._padding_ = (longlong)&param_1->KeyHandles;
  local_38._padding_ = (longlong)pTVar1;
  local_38._padding_ = (longlong)param_1;
  local_38.Values = pTVar2;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar2 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes(&local_38,param_2);
  uVar7 = 0;
  if (0 < (param_1->Times).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (param_1->Values).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uVar7 = uVar7 + 1;
      *(float *)(pFVar3 + lVar8 + 4) = (float)((double)*(float *)(pFVar3 + lVar8 + 4) * dVar9);
      *(float *)(pFVar3 + lVar8 + 8) = (float)((double)*(float *)(pFVar3 + lVar8 + 8) * dVar9);
      lVar8 = lVar8 + 0x1c;
    } while ((int)uVar7 < (param_1->Times).ArrayNum);
  }
  return;
}

// Serialize @ 1460f2dc0

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::Serialize
          (FMovieSceneDoubleChannel *param_1,FArchive *param_2)

{
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  FFrameRate *pFVar3;
  undefined1 *puVar4;
  uchar *puVar5;
  longlong *plVar6;
  double *pdVar7;
  int *piVar8;
  int *piVar9;
  ulonglong *puVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FFortniteMainBranchObjectVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_2,&FSequencerObjectVersion::GUID);
  if ((iVar11 < 0xc) &&
     (iVar11 = FArchiveState::CustomVer
                         ((FArchiveState *)param_2,&FFortniteMainBranchObjectVersion::GUID),
     iVar11 < 0x35)) {
    return false;
  }
  iVar11 = FArchiveState::CustomVer
                     ((FArchiveState *)param_2,&FFortniteMainBranchObjectVersion::GUID);
  puVar5 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  local_res20 = iVar11;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->PreInfinityExtrap,1);
  }
  else {
    (param_1->PreInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar5 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->PostInfinityExtrap,1);
  }
  else {
    (param_1->PostInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  if ((param_2->field_0x28 & 1) == 0) {
    if ((param_2->field_0x28 & 4) == 0) goto LAB_1460f3311;
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 4;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    puVar4 = &param_2->field_0x2a;
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)(param_1->Times).ArrayNum << 2,
               (longlong)(param_1->Times).ArrayMax << 2);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = (param_1->Times).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (0 < (int)local_res10[0]) {
      (**(code **)(*(longlong *)param_2 + 0x188))
                (param_2,(param_1->Times).AllocatorInstance.Data,
                 (longlong)(int)(local_res10[0] * local_res18[0]));
    }
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)(param_1->Values).ArrayNum << 5,
               (longlong)(param_1->Values).ArrayMax << 5);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 0x20;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = (param_1->Values).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    iVar11 = local_res20;
    if ((int)local_res10[0] < 1) goto LAB_1460f3311;
    iVar11 = local_res10[0] * local_res18[0];
    pFVar12 = (param_1->Values).AllocatorInstance.Data;
  }
  else {
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((local_res10[0] == 4) && ((param_2->field_0x2a & 1) == 0)) {
      piVar8 = &(param_1->Times).ArrayMax;
      (**(code **)(*(longlong *)param_2 + 0x10))
                (param_2,(longlong)(param_1->Times).ArrayNum << 2,
                 (longlong)(param_1->Times).ArrayMax << 2);
      plVar6 = *(longlong **)&param_2->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
        if ((param_2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar6;
        *plVar6 = *plVar6 + 4;
      }
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
      }
      (param_1->Times).ArrayNum = 0;
      if (*piVar8 != local_res18[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_res18[0],&(param_1->Times).AllocatorInstance,0,piVar8);
      }
      if (0 < (int)local_res18[0]) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_res18[0],&(param_1->Times).AllocatorInstance,&(param_1->Times).ArrayNum
                   ,piVar8);
        (**(code **)(*(longlong *)param_2 + 0x188))
                  (param_2,(param_1->Times).AllocatorInstance.Data,
                   (longlong)(int)(local_res18[0] * local_res10[0]));
      }
    }
    else {
      TArrayPrivateFriend::Serialize<FFrameNumber,TSizedDefaultAllocator<32>_>
                (param_2,&param_1->Times);
    }
    plVar6 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((local_res10[0] != 0x20) || ((param_2->field_0x2a & 1) != 0)) {
      TArrayPrivateFriend::Serialize<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>
                (param_2,&param_1->Values);
      iVar11 = local_res20;
      goto LAB_1460f3311;
    }
    pTVar1 = &param_1->Values;
    piVar8 = &(param_1->Values).ArrayMax;
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)(param_1->Values).ArrayNum << 5,
               (longlong)(param_1->Values).ArrayMax << 5);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
    }
    piVar9 = &(param_1->Values).ArrayNum;
    *piVar9 = 0;
    if (*piVar8 != local_res18[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_res18[0],&pTVar1->AllocatorInstance,0,piVar8);
    }
    iVar11 = local_res20;
    if ((int)local_res18[0] < 1) goto LAB_1460f3311;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_res18[0],&pTVar1->AllocatorInstance,piVar9,piVar8);
    iVar11 = local_res18[0] * local_res10[0];
    pFVar12 = (pTVar1->AllocatorInstance).Data;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pFVar12,(longlong)iVar11);
  iVar11 = local_res20;
LAB_1460f3311:
  pdVar2 = &param_1->DefaultValue;
  pdVar7 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar7 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar7;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  piVar8 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar8 + 1) {
    local_res10[0] = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      local_res10[0] = (uint)(param_1->bHasDefaultValue != false);
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_2);
    }
    if ((param_2->field_0x28 & 1) != 0) {
      param_1->bHasDefaultValue = local_res10[0] != 0;
    }
  }
  else {
    param_1->bHasDefaultValue = *piVar8 != 0;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  pFVar3 = &param_1->TickResolution;
  piVar8 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar8 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pFVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pFVar3);
    }
  }
  else {
    pFVar3->Numerator = *piVar8;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  piVar8 = &(param_1->TickResolution).Denominator;
  piVar9 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar9 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,piVar8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)piVar8);
    }
  }
  else {
    *piVar8 = *piVar9;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  if (0x34 < iVar11) {
    puVar10 = *(ulonglong **)&param_2->field_0x8;
    if (puVar10[1] < *puVar10 + 4) {
      local_res10[0] = 0;
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_2);
      }
    }
    else {
      *puVar10 = *puVar10 + 4;
    }
  }
  return true;
}

// Serialize @ 1460f34f0

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::Serialize
          (FMovieSceneFloatChannel *param_1,FArchive *param_2)

{
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  FFrameRate *pFVar3;
  undefined1 *puVar4;
  uchar *puVar5;
  longlong *plVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  ulonglong *puVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FFortniteMainBranchObjectVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_2,&FSequencerObjectVersion::GUID);
  if ((iVar11 < 0xc) &&
     (iVar11 = FArchiveState::CustomVer
                         ((FArchiveState *)param_2,&FFortniteMainBranchObjectVersion::GUID),
     iVar11 < 0x35)) {
    return false;
  }
  iVar11 = FArchiveState::CustomVer
                     ((FArchiveState *)param_2,&FFortniteMainBranchObjectVersion::GUID);
  puVar5 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  local_res20 = iVar11;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->PreInfinityExtrap,1);
  }
  else {
    (param_1->PreInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar5 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->PostInfinityExtrap,1);
  }
  else {
    (param_1->PostInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  if ((param_2->field_0x28 & 1) == 0) {
    if ((param_2->field_0x28 & 4) == 0) goto LAB_1460f3a41;
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 4;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    puVar4 = &param_2->field_0x2a;
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)(param_1->Times).ArrayNum << 2,
               (longlong)(param_1->Times).ArrayMax << 2);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = (param_1->Times).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (0 < (int)local_res10[0]) {
      (**(code **)(*(longlong *)param_2 + 0x188))
                (param_2,(param_1->Times).AllocatorInstance.Data,
                 (longlong)(int)(local_res10[0] * local_res18[0]));
    }
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)(param_1->Values).ArrayNum * 0x1c,
               (longlong)(param_1->Values).ArrayMax * 0x1c);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 0x1c;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = (param_1->Values).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    iVar11 = local_res20;
    if ((int)local_res10[0] < 1) goto LAB_1460f3a41;
    iVar11 = local_res10[0] * local_res18[0];
    pFVar12 = (param_1->Values).AllocatorInstance.Data;
  }
  else {
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((local_res10[0] == 4) && ((param_2->field_0x2a & 1) == 0)) {
      piVar8 = &(param_1->Times).ArrayMax;
      (**(code **)(*(longlong *)param_2 + 0x10))
                (param_2,(longlong)(param_1->Times).ArrayNum << 2,
                 (longlong)(param_1->Times).ArrayMax << 2);
      plVar6 = *(longlong **)&param_2->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
        if ((param_2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar6;
        *plVar6 = *plVar6 + 4;
      }
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
      }
      (param_1->Times).ArrayNum = 0;
      if (*piVar8 != local_res18[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_res18[0],&(param_1->Times).AllocatorInstance,0,piVar8);
      }
      if (0 < (int)local_res18[0]) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_res18[0],&(param_1->Times).AllocatorInstance,&(param_1->Times).ArrayNum
                   ,piVar8);
        (**(code **)(*(longlong *)param_2 + 0x188))
                  (param_2,(param_1->Times).AllocatorInstance.Data,
                   (longlong)(int)(local_res18[0] * local_res10[0]));
      }
    }
    else {
      TArrayPrivateFriend::Serialize<FFrameNumber,TSizedDefaultAllocator<32>_>
                (param_2,&param_1->Times);
    }
    plVar6 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((local_res10[0] != 0x1c) || ((param_2->field_0x2a & 1) != 0)) {
      TArrayPrivateFriend::Serialize<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>
                (param_2,&param_1->Values);
      iVar11 = local_res20;
      goto LAB_1460f3a41;
    }
    pTVar1 = &param_1->Values;
    piVar8 = &(param_1->Values).ArrayMax;
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)(param_1->Values).ArrayNum * 0x1c,
               (longlong)(param_1->Values).ArrayMax * 0x1c);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_res18[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
    }
    piVar9 = &(param_1->Values).ArrayNum;
    *piVar9 = 0;
    if (*piVar8 != local_res18[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,local_res18[0],&pTVar1->AllocatorInstance,0,piVar8);
    }
    iVar11 = local_res20;
    if ((int)local_res18[0] < 1) goto LAB_1460f3a41;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,local_res18[0],&pTVar1->AllocatorInstance,piVar9,piVar8);
    iVar11 = local_res18[0] * local_res10[0];
    pFVar12 = (pTVar1->AllocatorInstance).Data;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pFVar12,(longlong)iVar11);
  iVar11 = local_res20;
LAB_1460f3a41:
  pfVar2 = &param_1->DefaultValue;
  pfVar7 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar7 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar7;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  piVar8 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar8 + 1) {
    local_res10[0] = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      local_res10[0] = (uint)(param_1->bHasDefaultValue != false);
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_2);
    }
    if ((param_2->field_0x28 & 1) != 0) {
      param_1->bHasDefaultValue = local_res10[0] != 0;
    }
  }
  else {
    param_1->bHasDefaultValue = *piVar8 != 0;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  pFVar3 = &param_1->TickResolution;
  piVar8 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar8 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pFVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pFVar3);
    }
  }
  else {
    pFVar3->Numerator = *piVar8;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  piVar8 = &(param_1->TickResolution).Denominator;
  piVar9 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar9 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,piVar8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)piVar8);
    }
  }
  else {
    *piVar8 = *piVar9;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  if (0x34 < iVar11) {
    puVar10 = *(ulonglong **)&param_2->field_0x8;
    if (puVar10[1] < *puVar10 + 4) {
      local_res10[0] = 0;
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_2);
      }
    }
    else {
      *puVar10 = *puVar10 + 4;
    }
  }
  return true;
}

// SerializeChannelValue @ 1460f4430

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeChannelValue
          (FMovieSceneDoubleValue *param_1,FArchive *param_2)

{
  TEnumAsByte<ERichCurveTangentWeightMode> *pTVar1;
  longlong *plVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  float local_res10 [2];
  
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FSequencerObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_2,&FSequencerObjectVersion::GUID);
  if (iVar7 < 10) {
    return false;
  }
  if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_2->field_0x28 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x50a,L"float -> double conversion applied outside of load!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    local_res10[0] = (float)param_1->Value;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    param_1->Value = (double)local_res10[0];
  }
  else {
    ::operator<<(param_2,&param_1->Value);
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_2,&FSequencerObjectVersion::GUID);
  if (iVar7 < 0xc) {
    puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->InterpMode,1);
    }
    else {
      (param_1->InterpMode).Value = *puVar3;
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
    }
    puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
    if (puVar3 + 1 <= (uchar *)(*(undefined8 **)&param_2->field_0x8)[1]) {
      (param_1->TangentMode).Value = *puVar3;
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
      FMovieSceneTangentData::Serialize(&param_1->Tangent,param_2);
      return true;
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->TangentMode,1);
    FMovieSceneTangentData::Serialize(&param_1->Tangent,param_2);
    return true;
  }
  ::operator<<(param_2,&(param_1->Tangent).ArriveTangent);
  ::operator<<(param_2,&(param_1->Tangent).LeaveTangent);
  ::operator<<(param_2,&(param_1->Tangent).ArriveTangentWeight);
  ::operator<<(param_2,&(param_1->Tangent).LeaveTangentWeight);
  pTVar1 = &(param_1->Tangent).TangentWeightMode;
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pTVar1,1);
  }
  else {
    pTVar1->Value = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->InterpMode,1);
  }
  else {
    (param_1->InterpMode).Value = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->TangentMode,1);
  }
  else {
    (param_1->TangentMode).Value = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if (puVar3 + 1 <= (uchar *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    param_1->PaddingByte = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
    return true;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->PaddingByte,1);
  return true;
}

// SerializeChannelValue @ 1460f4700

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeChannelValue
          (FMovieSceneFloatValue *param_1,FArchive *param_2)

{
  TEnumAsByte<ERichCurveTangentWeightMode> *pTVar1;
  float *pfVar2;
  uchar *puVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FSequencerObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_2,&FSequencerObjectVersion::GUID);
  if (iVar4 < 10) {
    return false;
  }
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,param_1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)param_1);
    }
  }
  else {
    param_1->Value = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_2,&FSequencerObjectVersion::GUID);
  if (iVar4 < 0xc) {
    puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->InterpMode,1);
    }
    else {
      (param_1->InterpMode).Value = *puVar3;
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
    }
    puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
    if (puVar3 + 1 <= (uchar *)(*(undefined8 **)&param_2->field_0x8)[1]) {
      (param_1->TangentMode).Value = *puVar3;
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
      FMovieSceneTangentData::Serialize(&param_1->Tangent,param_2);
      return true;
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->TangentMode,1);
    FMovieSceneTangentData::Serialize(&param_1->Tangent,param_2);
    return true;
  }
  ::operator<<(param_2,&(param_1->Tangent).ArriveTangent);
  ::operator<<(param_2,&(param_1->Tangent).LeaveTangent);
  ::operator<<(param_2,&(param_1->Tangent).ArriveTangentWeight);
  ::operator<<(param_2,&(param_1->Tangent).LeaveTangentWeight);
  pTVar1 = &(param_1->Tangent).TangentWeightMode;
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pTVar1,1);
  }
  else {
    pTVar1->Value = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->InterpMode,1);
  }
  else {
    (param_1->InterpMode).Value = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->TangentMode,1);
  }
  else {
    (param_1->TangentMode).Value = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_2->field_0x8;
  if (puVar3 + 1 <= (uchar *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    param_1->PaddingByte = *puVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
    return true;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&param_1->PaddingByte,1);
  return true;
}

// SerializeFromRichCurve @ 1460f6010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve
          (FMovieSceneDoubleChannel *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3)

{
  int *piVar1;
  code *pcVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UScriptStruct *this;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  double in_XMM2_Qa;
  undefined1 auStackY_148 [32];
  FPropertyTypeName local_118;
  FFrameNumber local_114;
  int local_110;
  int iStack_10c;
  TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
  local_108;
  FMovieSceneDoubleValue local_f8;
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  void *local_90;
  undefined4 local_88;
  void *local_80;
  longlong local_78;
  float local_70;
  undefined2 local_6c;
  ForAnyElementType local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve(FMovieSceneDoubleChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve(FMovieSceneDoubleChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve(FMovieSceneDoubleChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve(FMovieSceneDoubleChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                    ::__l2::RichCurveName,"RichCurve");
    _Init_thread_footer(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve(FMovieSceneDoubleChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((param_1 == (FMovieSceneDoubleChannel *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x4cc,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_118.Index = (param_2->TypeName).Index;
  bVar4 = UE::FPropertyTypeName::IsStruct
                    (&local_118,
                     `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve(FMovieSceneDoubleChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                     ::__l2::RichCurveName);
  if (bVar4) {
    local_d8._8_8_ = 0;
    local_c8 = 0;
    local_b0 = 0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    local_a8 = ___xmm_00000000ffffffff0000008000000000;
    lStack_a0 = _UNK_150631d98;
    local_70 = 3.4028235e+38;
    local_6c = 0x404;
    local_d8._0_8_ = &___7FRichCurve__6B_;
    this = FRichCurve::StaticStruct();
    UScriptStruct::SerializeItem(this,param_3,local_d8,(void *)0x0);
    if (local_70 != __real_7f7fffff) {
      param_1->bHasDefaultValue = true;
      param_1->DefaultValue = (double)local_70;
    }
    (param_1->PreInfinityExtrap).Value = (uchar)local_6c;
    (param_1->PostInfinityExtrap).Value = local_6c._1_1_;
    if ((int)(uint)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_60 & 0xffffffff);
    }
    piVar1 = &(param_1->Times).ArrayMax;
    if (*piVar1 < (int)(uint)local_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)local_60,&(param_1->Times).AllocatorInstance,(param_1->Times).ArrayNum,
                 piVar1);
    }
    if ((int)(uint)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_60);
    }
    piVar1 = &(param_1->Values).ArrayMax;
    if (*piVar1 < (int)(uint)local_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(uint)local_60,&(param_1->Values).AllocatorInstance,
                 (param_1->Values).ArrayNum,piVar1);
    }
    GetLegacyConversionFrameRate();
    FRichCurve::GetKeyIterator((FRichCurve *)local_d8,&local_108);
    iVar9 = 0;
    for (; (pTVar3 = local_108.Container, lVar7 = (longlong)local_108.Index, -1 < local_108.Index &&
           (local_108.Index < (local_108.Container)->ArrayNum));
        local_108.Index = local_108.Index + 1) {
      uVar6 = 0;
      if (local_108.Index < (local_108.Container)->ArrayNum) {
        uVar6 = (uint)~local_108.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar8 = (pTVar3->AllocatorInstance).Data + lVar7 * 0x1c;
      uVar6 = 0;
      if (local_108.Index < (local_108.Container)->ArrayNum) {
        uVar6 = (uint)~local_108.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      UpgradeLegacyMovieSceneTime((UObject *)&local_114,(FFrameRate)0x0,in_XMM2_Qa);
      local_f8.Tangent.ArriveTangentWeight = 0.0;
      local_f8.Tangent.LeaveTangentWeight = 0.0;
      local_f8.Tangent.UnserializedPaddingBytes[0] = '\0';
      local_f8.Tangent.UnserializedPaddingBytes[1] = '\0';
      local_f8.Tangent.UnserializedPaddingBytes[2] = '\0';
      local_f8.PaddingByte = '\0';
      local_f8.UnserializedPaddingBytes[0] = '\0';
      local_f8.Tangent.TangentWeightMode.Value = '\0';
      local_f8.Value = (double)*(float *)(pFVar8 + 8);
      local_f8.InterpMode.Value = *(uchar *)pFVar8;
      local_f8.TangentMode.Value = *(uchar *)(pFVar8 + 1);
      local_f8.Tangent.ArriveTangent =
           ((float)iStack_10c / (float)local_110) * *(float *)(pFVar8 + 0xc);
      local_f8.Tangent.LeaveTangent =
           ((float)iStack_10c / (float)local_110) * *(float *)(pFVar8 + 0x14);
      ConvertInsertAndSort<FMovieSceneDoubleValue>
                (iVar9,local_114,&local_f8,&param_1->Times,&param_1->Values);
      iVar9 = iVar9 + 1;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    local_d8._0_8_ = &___7FIndexedCurve__6B_;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_d8 + 8));
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// SerializeFromRichCurve @ 1460f6450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve
          (FMovieSceneFloatChannel *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3)

{
  int *piVar1;
  code *pcVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UScriptStruct *this;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  double in_XMM2_Qa;
  undefined1 auStackY_148 [32];
  FPropertyTypeName local_118;
  FFrameNumber local_114;
  int local_110;
  int iStack_10c;
  TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
  local_108;
  FMovieSceneFloatValue local_f8;
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  void *local_90;
  undefined4 local_88;
  void *local_80;
  longlong local_78;
  float local_70;
  undefined2 local_6c;
  ForAnyElementType local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                    ::__l2::RichCurveName,"RichCurve");
    _Init_thread_footer(&`public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((param_1 == (FMovieSceneFloatChannel *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x4cc,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_118.Index = (param_2->TypeName).Index;
  bVar4 = UE::FPropertyTypeName::IsStruct
                    (&local_118,
                     `public:_static_bool___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::SerializeFromRichCurve(FMovieSceneFloatChannel*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot)'
                     ::__l2::RichCurveName);
  if (bVar4) {
    local_d8._8_8_ = 0;
    local_c8 = 0;
    local_b0 = 0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    local_a8 = ___xmm_00000000ffffffff0000008000000000;
    lStack_a0 = _UNK_150631d98;
    local_70 = 3.4028235e+38;
    local_6c = 0x404;
    local_d8._0_8_ = &___7FRichCurve__6B_;
    this = FRichCurve::StaticStruct();
    UScriptStruct::SerializeItem(this,param_3,local_d8,(void *)0x0);
    if (local_70 != __real_7f7fffff) {
      param_1->DefaultValue = local_70;
      param_1->bHasDefaultValue = true;
    }
    (param_1->PreInfinityExtrap).Value = (uchar)local_6c;
    (param_1->PostInfinityExtrap).Value = local_6c._1_1_;
    if ((int)(uint)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_60 & 0xffffffff);
    }
    piVar1 = &(param_1->Times).ArrayMax;
    if (*piVar1 < (int)(uint)local_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)local_60,&(param_1->Times).AllocatorInstance,(param_1->Times).ArrayNum,
                 piVar1);
    }
    if ((int)(uint)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_60);
    }
    piVar1 = &(param_1->Values).ArrayMax;
    if (*piVar1 < (int)(uint)local_60) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,(uint)local_60,&(param_1->Values).AllocatorInstance,
                 (param_1->Values).ArrayNum,piVar1);
    }
    GetLegacyConversionFrameRate();
    FRichCurve::GetKeyIterator((FRichCurve *)local_d8,&local_108);
    iVar9 = 0;
    for (; (pTVar3 = local_108.Container, lVar7 = (longlong)local_108.Index, -1 < local_108.Index &&
           (local_108.Index < (local_108.Container)->ArrayNum));
        local_108.Index = local_108.Index + 1) {
      uVar6 = 0;
      if (local_108.Index < (local_108.Container)->ArrayNum) {
        uVar6 = (uint)~local_108.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar8 = (pTVar3->AllocatorInstance).Data + lVar7 * 0x1c;
      uVar6 = 0;
      if (local_108.Index < (local_108.Container)->ArrayNum) {
        uVar6 = (uint)~local_108.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      UpgradeLegacyMovieSceneTime((UObject *)&local_114,(FFrameRate)0x0,in_XMM2_Qa);
      local_f8.Tangent.ArriveTangentWeight = 0.0;
      local_f8.Tangent.LeaveTangentWeight = 0.0;
      local_f8.Tangent.UnserializedPaddingBytes[0] = '\0';
      local_f8.Tangent.UnserializedPaddingBytes[1] = '\0';
      local_f8.Tangent.UnserializedPaddingBytes[2] = '\0';
      local_f8.PaddingByte = '\0';
      local_f8.UnserializedPaddingBytes[0] = '\0';
      local_f8.Tangent.TangentWeightMode.Value = '\0';
      local_f8.Value = *(float *)(pFVar8 + 8);
      local_f8.InterpMode.Value = *(uchar *)pFVar8;
      local_f8.TangentMode.Value = *(uchar *)(pFVar8 + 1);
      local_f8.Tangent.ArriveTangent =
           ((float)iStack_10c / (float)local_110) * *(float *)(pFVar8 + 0xc);
      local_f8.Tangent.LeaveTangent =
           ((float)iStack_10c / (float)local_110) * *(float *)(pFVar8 + 0x14);
      ConvertInsertAndSort<FMovieSceneFloatValue>
                (iVar9,local_114,&local_f8,&param_1->Times,&param_1->Values);
      iVar9 = iVar9 + 1;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    local_d8._0_8_ = &___7FIndexedCurve__6B_;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_d8 + 8));
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// Set @ 1460f6890

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::Set
          (FMovieSceneDoubleChannel *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = &param_1->Times;
  iVar6 = 0;
  if (pTVar1 != param_2) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->Times).ArrayNum = param_2->ArrayNum;
    (param_1->Times).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  pTVar2 = &param_1->Values;
  if (pTVar2 != param_3) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->Values).ArrayNum = param_3->ArrayNum;
    (param_1->Values).ArrayMax = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&param_1->KeyHandles);
  if (0 < (param_1->Times).ArrayNum) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&param_1->KeyHandles,(int)local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (param_1->Times).ArrayNum);
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Set @ 1460f69c0

void __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::Set
          (FMovieSceneFloatChannel *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = &param_1->Times;
  iVar6 = 0;
  if (pTVar1 != param_2) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->Times).ArrayNum = param_2->ArrayNum;
    (param_1->Times).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  pTVar2 = &param_1->Values;
  if (pTVar2 != param_3) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->Values).ArrayNum = param_3->ArrayNum;
    (param_1->Values).ArrayMax = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&param_1->KeyHandles);
  if (0 < (param_1->Times).ArrayNum) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&param_1->KeyHandles,(int)local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (param_1->Times).ArrayNum);
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ValueExistsAtTime @ 1460ff070

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::ValueExistsAtTime
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,FMovieSceneDoubleValue *param_3)

{
  bool bVar1;
  
  bVar1 = ValueExistsAtTime(param_1,param_2,param_3->Value);
  return bVar1;
}

// ValueExistsAtTime @ 1460ff080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::ValueExistsAtTime
          (FMovieSceneDoubleChannel *param_1,FFrameNumber param_2,double param_3)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  bool bVar3;
  FCachedInterpolation *this;
  undefined1 auStack_b8 [32];
  FFrameNumber local_98;
  float fStack_94;
  double local_90;
  FCachedInterpolation local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fStack_94 = 0.0;
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  local_90 = 0.0;
  local_98.Value = param_2.Value;
  this = GetInterpolationForTime(&local_88,param_1,(FTimeEvaluationCache *)0x0,FVar1);
  FVar2.SubFrame = fStack_94;
  FVar2.FrameNumber.Value = local_98.Value;
  bVar3 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,FVar2,&local_90);
  if ((!bVar3) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(local_90 - param_3) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_90 - param_3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// ValueExistsAtTime @ 1460ff130

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::ValueExistsAtTime
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,FMovieSceneFloatValue *param_3)

{
  bool bVar1;
  
  bVar1 = ValueExistsAtTime(param_1,param_2,param_3->Value);
  return bVar1;
}

// ValueExistsAtTime @ 1460ff140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::ValueExistsAtTime
          (FMovieSceneFloatChannel *param_1,FFrameNumber param_2,float param_3)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  bool bVar3;
  FCachedInterpolation *this;
  undefined1 auStack_b8 [32];
  FFrameNumber local_98;
  float fStack_94;
  double local_90;
  FCachedInterpolation local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fStack_94 = 0.0;
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  local_90 = 0.0;
  local_98.Value = param_2.Value;
  this = GetInterpolationForTime(&local_88,param_1,(FTimeEvaluationCache *)0x0,FVar1);
  FVar2.SubFrame = fStack_94;
  FVar2.FrameNumber.Value = local_98.Value;
  bVar3 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this,FVar2,&local_90);
  if ((!bVar3) ||
     (__real_38d1b717 <
      (float)((uint)((float)local_90 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 1504e2de0

bool __thiscall
`TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime'::__l27::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1031416231262945639>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1031416231262945639>,
                       &`public:___cdecl_`public:_static_struct_UE::MovieScene::Interpolation::FCachedInterpolation___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime(FMovieSceneDoubleChannel_const*___ptr64,TMovieSceneCurveChannelImpl<struct_FMovieSceneDoubleChannel>::FTimeEvaluationCache*___ptr64,FFrameTime)'::`27'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2e20

bool __thiscall
`TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime'::__l27::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1031416231262945639>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1031416231262945639>,
                       &`public:___cdecl_`public:_static_struct_UE::MovieScene::Interpolation::FCachedInterpolation___cdecl_TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::GetInterpolationForTime(FMovieSceneFloatChannel_const*___ptr64,TMovieSceneCurveChannelImpl<struct_FMovieSceneFloatChannel>::FTimeEvaluationCache*___ptr64,FFrameTime)'::`27'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

