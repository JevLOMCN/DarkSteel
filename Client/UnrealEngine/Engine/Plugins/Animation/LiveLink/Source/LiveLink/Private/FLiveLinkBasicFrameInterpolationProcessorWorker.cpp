// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 9

// FLiveLinkBasicFrameInterpolationProcessorWorker @ 14d010b00

FLiveLinkBasicFrameInterpolationProcessorWorker * __thiscall
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
FLiveLinkBasicFrameInterpolationProcessorWorker
          (FLiveLinkBasicFrameInterpolationProcessorWorker *this,bool param_1)

{
  this->bInterpolatePropertyValues = param_1;
  this->_padding_ =
       (longlong)
       &
       ___7FLiveLinkBasicFrameInterpolationProcessorWorker_ULiveLinkBasicFrameInterpolationProcessor__6B_
  ;
  return this;
}

// FindInterpolateIndex @ 14d041220

bool __cdecl
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
FindInterpolateIndex
          (double param_1,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_2,int *param_3,int *param_4,FLiveLinkInterpolationInfo *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  double *pdVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 == 0) {
    return false;
  }
  uVar6 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar6 = ~(iVar1 - 1U) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pdVar5 = (double *)
           (**(code **)(*(longlong *)
                         ((param_2->AllocatorInstance).Data +
                         (longlong)param_2->ArrayNum * 0x28 + -0x28) + 0x10))();
  param_5->ExpectedEvaluationDistanceFromNewestSeconds = (float)(*pdVar5 - param_1);
  if ((param_2->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pdVar5 = (double *)(**(code **)(*(longlong *)(param_2->AllocatorInstance).Data + 0x10))();
  param_5->ExpectedEvaluationDistanceFromOldestSeconds = (float)(param_1 - *pdVar5);
  uVar6 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar8 = (longlong)(int)uVar6 * 0x28;
    do {
      uVar9 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar7 = (param_2->AllocatorInstance).Data + lVar8;
      pdVar5 = (double *)(**(code **)(*(longlong *)pFVar7 + 0x10))(pFVar7);
      if (*pdVar5 <= param_1) {
        iVar1 = param_2->ArrayNum;
        *param_3 = uVar6;
        if (uVar6 == iVar1 - 1U) {
          *param_4 = uVar6;
          pdVar5 = (double *)(**(code **)(*(longlong *)pFVar7 + 0x10))(pFVar7);
          uVar6 = SUB84(param_1 - *pdVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar9 = (uint)((ulonglong)(param_1 - *pdVar5) >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          param_5->bOverflowDetected =
               __real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar6) &&
               (double)CONCAT44(uVar9,uVar6) != __real_3e45798ee2308c3a;
          return true;
        }
        *param_4 = uVar6 + 1;
        return true;
      }
      lVar8 = lVar8 + -0x28;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  *param_3 = 0;
  *param_4 = 0;
  param_5->bUnderflowDetected = true;
  return true;
}

// FindInterpolateIndex @ 14d041440

bool __cdecl
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
FindInterpolateIndex
          (FQualifiedFrameTime *param_1,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_2,int *param_3,int *param_4,FLiveLinkInterpolationInfo *param_5)

{
  FFrameTime FVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  float fStackX_14;
  float fStack_5c;
  float fStack_54;
  float fStack_4c;
  float fStack_44;
  float fStack_3c;
  
  iVar8 = param_2->ArrayNum;
  if (iVar8 == 0) {
    return false;
  }
  uVar10 = 0;
  if ((int)(iVar8 - 1U) < iVar8) {
    uVar10 = ~(iVar8 - 1U) >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)
                        ((param_2->AllocatorInstance).Data +
                        (longlong)param_2->ArrayNum * 0x28 + -0x28) + 0x10))();
  iVar8 = (param_1->Rate).Denominator;
  iVar9 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x68) >> 0x20);
  dVar13 = __real_3ff0000000000000 / (double)(param_1->Rate).Numerator;
  fStackX_14 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x60) >> 0x20);
  fStack_5c = (param_1->Time).SubFrame;
  dVar14 = (double)((longlong)iVar8 * (longlong)(param_1->Time).FrameNumber.Value);
  dVar12 = (double)iVar8;
  param_5->ExpectedEvaluationDistanceFromNewestSeconds =
       (float)(((double)((longlong)(int)*(undefined8 *)(lVar6 + 0x60) * (longlong)iVar9) +
               (double)iVar9 * (double)fStackX_14) / (double)(int)*(undefined8 *)(lVar6 + 0x68) -
              ((double)fStack_5c * dVar12 + dVar14) * dVar13);
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar6 = (**(code **)(*(longlong *)(param_2->AllocatorInstance).Data + 0x10))();
  fStack_54 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x60) >> 0x20);
  iVar8 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x68) >> 0x20);
  FVar1 = param_1->Time;
  FVar2 = param_1->Rate;
  iVar9 = FVar2.Denominator;
  param_5->ExpectedEvaluationDistanceFromOldestSeconds =
       (float)(((double)fStack_5c * dVar12 + dVar14) * dVar13 -
              ((double)((longlong)(int)*(undefined8 *)(lVar6 + 0x60) * (longlong)iVar8) +
              (double)iVar8 * (double)fStack_54) / (double)(int)*(undefined8 *)(lVar6 + 0x68));
  fStack_4c = FVar1.SubFrame;
  uVar10 = param_2->ArrayNum - 1;
  dVar12 = ((double)((longlong)iVar9 * (longlong)FVar1.FrameNumber.Value.Value) +
           (double)iVar9 * (double)fStack_4c) / (double)FVar2.Numerator;
  if (-1 < (int)uVar10) {
    lVar6 = (longlong)(int)uVar10 * 0x28;
    do {
      uVar15 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar15 = ~uVar10 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = (param_2->AllocatorInstance).Data + lVar6;
      lVar7 = (**(code **)(*(longlong *)pFVar11 + 0x10))(pFVar11);
      iVar8 = (int)((ulonglong)*(undefined8 *)(lVar7 + 0x68) >> 0x20);
      fStack_44 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x60) >> 0x20);
      if (((double)((longlong)iVar8 * (longlong)(int)*(undefined8 *)(lVar7 + 0x60)) +
          (double)iVar8 * (double)fStack_44) / (double)(int)*(undefined8 *)(lVar7 + 0x68) <= dVar12)
      {
        iVar8 = param_2->ArrayNum;
        *param_3 = uVar10;
        if (uVar10 == iVar8 - 1U) {
          *param_4 = uVar10;
          lVar6 = (**(code **)(*(longlong *)pFVar11 + 0x10))(pFVar11);
          fStack_3c = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x60) >> 0x20);
          iVar8 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x68) >> 0x20);
          dVar12 = dVar12 - ((double)((longlong)(int)*(undefined8 *)(lVar6 + 0x60) * (longlong)iVar8
                                     ) + (double)fStack_3c * (double)iVar8) /
                            (double)(int)*(undefined8 *)(lVar6 + 0x68);
          uVar10 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar15 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          param_5->bOverflowDetected =
               __real_3e45798ee2308c3a <= (double)CONCAT44(uVar15,uVar10) &&
               (double)CONCAT44(uVar15,uVar10) != __real_3e45798ee2308c3a;
          return true;
        }
        *param_4 = uVar10 + 1;
        return true;
      }
      lVar6 = lVar6 + -0x28;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  *param_3 = 0;
  *param_4 = 0;
  param_5->bUnderflowDetected = true;
  return true;
}

// GenericInterpolate @ 14d0471c0

void __cdecl
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
GenericInterpolate(double param_1,FGenericInterpolateOptions *param_2,
                  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_3,
                  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_4,
                  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  UScriptStruct *pUVar12;
  void *pvVar13;
  void *pvVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  void *pvVar19;
  UStruct *pUVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  UScriptStruct *pUVar25;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 in_XMM2 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  double dVar36;
  undefined1 in_XMM5 [16];
  FWeakObjectPtr local_res8;
  FGenericInterpolateOptions *local_res10;
  FWeakObjectPtr local_res18;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *local_res20;
  undefined8 local_98;
  UScriptStruct *local_90;
  UScriptStruct *local_88;
  undefined8 local_80;
  
  local_res10 = param_2;
  local_res20 = param_4;
  pUVar10 = (UScriptStruct *)(**(code **)((param_4->WrappedStruct)._padding_ + 0x20))(param_4);
  pUVar25 = (UScriptStruct *)0x0;
  if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14d04722f:
    pUVar10 = pUVar25;
  }
  else {
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar11->_padding_)) goto LAB_14d04722f;
  }
  pUVar12 = (UScriptStruct *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x20))(param_3);
  if (pUVar12 == (UScriptStruct *)0x0) {
LAB_14d047266:
    pUVar12 = pUVar25;
  }
  else {
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar11->_padding_)) goto LAB_14d047266;
  }
  if ((pUVar12 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameDataA.GetStruct() == FrameDataB.GetStruct()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\InterpolationProcessor\\LiveLinkBasicFrameInterpolateProcessor.cpp"
                         ,0xf0,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar26 = param_3;
  if (__real_3fe0000000000000 < param_1) {
    pFVar26 = param_4;
  }
  if (param_2->bCopyClosestFrame == false) {
    pUVar10 = (UScriptStruct *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x20))(param_3);
    if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14d047425:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L"");
      pUVar10 = pUVar25;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar7 = (int)pUVar11->_padding_;
      if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar11->_padding_)) goto LAB_14d047425;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_88 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_88);
    FVar5 = local_res18;
    (**(code **)((param_5->WrappedStruct)._padding_ + 0x40))(param_5);
    puVar2 = (undefined8 *)(param_5->WrappedStruct)._padding_;
    (param_5->WrappedStruct).ScriptStruct.WeakPtr = FVar5;
    (*(code *)*puVar2)(param_5);
    if (param_2->bCopyClosestMetaData != false) {
      lVar16 = (**(code **)((pFVar26->WrappedStruct)._padding_ + 0x10))(pFVar26);
      lVar17 = (**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(lVar17 + 0x10),
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(lVar16 + 0x10));
      uVar3 = *(undefined8 *)(lVar16 + 0x68);
      *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)(lVar16 + 0x60);
      *(undefined8 *)(lVar17 + 0x68) = uVar3;
    }
  }
  else {
    pvVar13 = (void *)(**(code **)((pFVar26->WrappedStruct)._padding_ + 0x10))(pFVar26);
    pUVar10 = (UScriptStruct *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x20))(param_3);
    if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14d0472f2:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L"");
      pUVar10 = pUVar25;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar7 = (int)pUVar11->_padding_;
      if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar11->_padding_)) goto LAB_14d0472f2;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_90 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_90);
    FVar5 = local_res8;
    (**(code **)((param_5->WrappedStruct)._padding_ + 0x40))(param_5);
    puVar2 = (undefined8 *)(param_5->WrappedStruct)._padding_;
    (param_5->WrappedStruct).ScriptStruct.WeakPtr = FVar5;
    (*(code *)*puVar2)(param_5);
    if (pvVar13 != (void *)0x0) {
      pUVar10 = (UScriptStruct *)(**(code **)((param_5->WrappedStruct)._padding_ + 0x20))(param_5);
      if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14d0473cc:
        pUVar10 = pUVar25;
      }
      else {
        pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar7 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar11->_padding_)) goto LAB_14d0473cc;
      }
      pvVar14 = (void *)(**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
      UScriptStruct::CopyScriptStruct(pUVar10,pvVar14,pvVar13,1);
    }
  }
  pdVar15 = (double *)(**(code **)((param_4->WrappedStruct)._padding_ + 0x10))(param_4);
  dVar36 = *pdVar15;
  pdVar15 = (double *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  dVar32 = *pdVar15;
  pdVar15 = (double *)(**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
  *pdVar15 = (dVar36 - dVar32) * param_1 + dVar32;
  pdVar15[1] = 0.0;
  lVar16 = (**(code **)((param_4->WrappedStruct)._padding_ + 0x10))(param_4);
  lVar17 = (**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  auVar31 = ZEXT416((uint)::FFrameTime::MaxSubframe);
  uVar3 = *(undefined8 *)(lVar17 + 0x60);
  local_98._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
  local_80._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  auVar33 = roundps(in_XMM2,ZEXT416((uint)(local_98._4_4_ - local_80._4_4_)),1);
  fVar34 = (local_98._4_4_ - local_80._4_4_) - auVar33._0_4_;
  iVar7 = (int)auVar33._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar34) {
    fVar34 = ::FFrameTime::MaxSubframe;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  dVar32 = ((double)fVar34 + (double)(((int)*(undefined8 *)(lVar16 + 0x60) - (int)uVar3) + iVar7)) *
           param_1;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dVar32;
  auVar33 = roundpd(in_XMM5,auVar33,1);
  dVar36 = auVar33._0_8_;
  fVar34 = (float)(dVar32 - dVar36);
  if (::FFrameTime::MaxSubframe <= fVar34) {
    fVar34 = ::FFrameTime::MaxSubframe;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar34) {
    fVar34 = ::FFrameTime::MaxSubframe;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  fVar34 = fVar34 + local_80._4_4_;
  iVar21 = (int)fVar34;
  fVar27 = (fVar34 + fVar34) - __real_3f000000;
  auVar33 = ZEXT416((uint)fVar27);
  fVar29 = fVar34;
  if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
    auVar30._4_4_ = fVar34;
    auVar30._0_4_ = fVar34;
    auVar30._8_8_ = 0;
    uVar8 = movmskps(iVar7,auVar30);
    fVar29 = (float)(int)(iVar21 - (uVar8 & 1));
  }
  if (__real_41dfffffffc00000 <= dVar36) {
    dVar36 = __real_41dfffffffc00000;
  }
  if (dVar36 <= __real_c1e0000000000000) {
    dVar36 = __real_c1e0000000000000;
  }
  fVar35 = fVar34 - fVar29;
  if (::FFrameTime::MaxSubframe <= fVar34 - fVar29) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  local_98 = CONCAT44(fVar35,(int)dVar36 + ((int)ROUND(fVar27) >> 1) + (int)uVar3);
  local_80 = uVar3;
  lVar16 = (**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
  *(undefined8 *)(lVar16 + 0x60) = local_98;
  lVar16 = (**(code **)((param_4->WrappedStruct)._padding_ + 0x10))(param_4);
  lVar17 = (**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  dVar36 = *(double *)(lVar16 + 0x80);
  dVar32 = *(double *)(lVar17 + 0x80);
  lVar16 = (**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
  *(double *)(lVar16 + 0x80) = (dVar36 - dVar32) * param_1 + dVar32;
  lVar17 = (**(code **)((param_4->WrappedStruct)._padding_ + 0x10))(param_4);
  lVar16 = (**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  local_80._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x88) >> 0x20);
  lVar16 = *(longlong *)(lVar16 + 0x88);
  local_98._4_4_ = (float)((ulonglong)lVar16 >> 0x20);
  auVar33 = roundps(auVar33,ZEXT416((uint)(local_80._4_4_ - local_98._4_4_)),1);
  fVar34 = (local_80._4_4_ - local_98._4_4_) - auVar33._0_4_;
  iVar7 = (int)auVar33._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar34) {
    fVar34 = ::FFrameTime::MaxSubframe;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  dVar32 = ((double)fVar34 + (double)(((int)*(undefined8 *)(lVar17 + 0x88) - (int)lVar16) + iVar7))
           * param_1;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = dVar32;
  auVar33 = roundpd(auVar31,auVar28,1);
  dVar36 = auVar33._0_8_;
  fVar34 = (float)(dVar32 - dVar36);
  if (::FFrameTime::MaxSubframe <= fVar34) {
    fVar34 = ::FFrameTime::MaxSubframe;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar34) {
    fVar34 = ::FFrameTime::MaxSubframe;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  fVar34 = fVar34 + local_98._4_4_;
  iVar21 = (int)fVar34;
  fVar29 = fVar34;
  if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar34)) {
    auVar31._4_4_ = fVar34;
    auVar31._0_4_ = fVar34;
    auVar31._8_8_ = 0;
    uVar8 = movmskps(iVar7,auVar31);
    fVar29 = (float)(int)(iVar21 - (uVar8 & 1));
  }
  if (__real_41dfffffffc00000 <= dVar36) {
    dVar36 = __real_41dfffffffc00000;
  }
  if (dVar36 <= __real_c1e0000000000000) {
    dVar36 = __real_c1e0000000000000;
  }
  fVar27 = fVar34 - fVar29;
  if (::FFrameTime::MaxSubframe <= fVar34 - fVar29) {
    fVar27 = ::FFrameTime::MaxSubframe;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  local_98 = CONCAT44(fVar27,(int)dVar36 +
                             ((int)ROUND((fVar34 + fVar34) - __real_3f000000) >> 1) + (int)lVar16);
  local_80 = lVar16;
  lVar16 = (**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
  *(undefined8 *)(lVar16 + 0x88) = local_98;
  if (param_2->bInterpolatePropertyValues == false) {
    if (param_2->bCopyClosestFrame == false) {
      lVar16 = (**(code **)((pFVar26->WrappedStruct)._padding_ + 0x10))(pFVar26);
      lVar17 = (**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(lVar17 + 0x70),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(lVar16 + 0x70));
    }
  }
  else {
    lVar16 = (**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
    lVar17 = (**(code **)((param_4->WrappedStruct)._padding_ + 0x10))(param_4);
    lVar18 = (**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
    uVar8 = *(uint *)(lVar17 + 0x78);
    if (*(int *)(lVar16 + 0x78) < (int)*(uint *)(lVar17 + 0x78)) {
      uVar8 = *(uint *)(lVar16 + 0x78);
    }
    piVar1 = (int *)(lVar18 + 0x78);
    iVar7 = *(int *)(lVar18 + 0x78);
    if (iVar7 < (int)uVar8) {
      iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar8 - iVar7,(ForAnyElementType *)(lVar18 + 0x70),piVar1,
                          (int *)(lVar18 + 0x7c));
      memset((void *)(*(longlong *)(lVar18 + 0x70) + (longlong)iVar21 * 4),0,
             (longlong)(int)(uVar8 - iVar7) << 2);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar7) {
        iVar7 = iVar7 - uVar8;
        if (iVar7 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar7 == 0) goto LAB_14d0478fa;
        pvVar13 = (void *)(*(longlong *)(lVar18 + 0x70) + (longlong)(int)uVar8 * 4);
        iVar21 = (*piVar1 - iVar7) - uVar8;
        if (iVar21 != 0) {
          memmove(pvVar13,(void *)((longlong)pvVar13 + (longlong)iVar7 * 4),(longlong)iVar21 << 2);
        }
        *piVar1 = *piVar1 - iVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)(lVar18 + 0x70),*piVar1,(int *)(lVar18 + 0x7c));
      }
    }
LAB_14d0478fa:
    uVar22 = 0;
    lVar23 = 0;
    param_4 = local_res20;
    param_2 = local_res10;
    if (0 < (int)uVar8) {
      do {
        uVar24 = ~uVar22 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar22 < *(int *)(lVar17 + 0x78)) {
          uVar9 = uVar24;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_80 = *(longlong *)(lVar17 + 0x70);
        uVar9 = 0;
        if ((int)uVar22 < *(int *)(lVar16 + 0x78)) {
          uVar9 = uVar24;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar34 = *(float *)(*(longlong *)(lVar16 + 0x70) + lVar23 * 4);
        fVar29 = *(float *)(local_80 + lVar23 * 4);
        uVar9 = 0;
        if ((int)uVar22 < *(int *)(lVar18 + 0x78)) {
          uVar9 = uVar24;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar22 = uVar22 + 1;
        *(float *)(*(longlong *)(lVar18 + 0x70) + lVar23 * 4) =
             (float)((double)(fVar29 - fVar34) * param_1 + (double)fVar34);
        lVar23 = lVar23 + 1;
        param_4 = local_res20;
        param_2 = local_res10;
      } while (lVar23 < (int)uVar8);
    }
  }
  if (param_2->bInterpolateInterpProperties == false) {
    return;
  }
  pvVar13 = (void *)(**(code **)((param_5->WrappedStruct)._padding_ + 0x18))(param_5);
  pvVar14 = (void *)(**(code **)((param_4->WrappedStruct)._padding_ + 0x10))(param_4);
  pvVar19 = (void *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  pUVar20 = (UStruct *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x20))(param_3);
  if (pUVar20 != (UStruct *)0x0) {
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar11->_padding_;
    if ((iVar7 <= *(int *)(pUVar20->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar11->_padding_)) goto LAB_14d047ac6;
  }
  pUVar20 = (UStruct *)0x0;
LAB_14d047ac6:
  LiveLinkInterpolation::Interpolate(pUVar20,true,(float)param_1,pvVar19,pvVar14,pvVar13);
  return;
}

// GetBlendFactor @ 14d0483d0

double __cdecl
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
GetBlendFactor(double param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,
              FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_3)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = (double *)(**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  dVar1 = *pdVar2;
  pdVar2 = (double *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  dVar3 = *pdVar2 - dVar1;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return (param_1 - dVar1) / dVar3;
  }
  return __real_3ff0000000000000;
}

// GetBlendFactor @ 14d048460

double __cdecl
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
GetBlendFactor(FQualifiedFrameTime *param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2
              ,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  float fStackX_14;
  
  lVar2 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  iVar1 = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x68) >> 0x20);
  fStackX_14 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x60) >> 0x20);
  dVar4 = ((double)iVar1 * (double)fStackX_14 +
          (double)((longlong)iVar1 * (longlong)(int)*(undefined8 *)(lVar2 + 0x60))) /
          (double)(int)*(undefined8 *)(lVar2 + 0x68);
  lVar2 = (**(code **)((param_3->WrappedStruct)._padding_ + 0x10))(param_3);
  iVar1 = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x68) >> 0x20);
  fStackX_14 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x60) >> 0x20);
  dVar3 = ((double)((longlong)iVar1 * (longlong)(int)*(undefined8 *)(lVar2 + 0x60)) +
          (double)iVar1 * (double)fStackX_14) / (double)(int)*(undefined8 *)(lVar2 + 0x68) - dVar4;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    fStackX_14 = (param_1->Time).SubFrame;
    iVar1 = (param_1->Rate).Denominator;
    return (((double)iVar1 * (double)fStackX_14 +
            (double)((longlong)(param_1->Time).FrameNumber.Value * (longlong)iVar1)) /
            (double)(param_1->Rate).Numerator - dVar4) / dVar3;
  }
  return __real_3ff0000000000000;
}

// GetRole @ 14d053580

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::GetRole
          (FLiveLinkBasicFrameInterpolationProcessorWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// Interpolate @ 14d05dc30

void __thiscall
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
Interpolate(FLiveLinkBasicFrameInterpolationProcessorWorker *this,FQualifiedFrameTime *param_1,
           FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
           TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
           *param_3,FLiveLinkSubjectFrameData *param_4,FLiveLinkInterpolationInfo *param_5)

{
  FQualifiedFrameTime local_18;
  
  local_18.Time = param_1->Time;
  local_18.Rate = param_1->Rate;
  LiveLinkInterpolation::Interpolate<FQualifiedFrameTime>
            (&local_18,param_2,param_3,param_4,this->bInterpolatePropertyValues,param_5);
  return;
}

// Interpolate @ 14d05dc80

void __thiscall
ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker::
Interpolate(FLiveLinkBasicFrameInterpolationProcessorWorker *this,double param_1,
           FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
           TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
           *param_3,FLiveLinkSubjectFrameData *param_4,FLiveLinkInterpolationInfo *param_5)

{
  LiveLinkInterpolation::Interpolate<double>
            (param_1,param_2,param_3,param_4,this->bInterpolatePropertyValues,param_5);
  return;
}

