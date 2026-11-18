// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 47

// operator= @ 149891e50

FPCGPointArrayProperty<float> * __thiscall
FPCGPointArrayProperty<float>::operator=
          (FPCGPointArrayProperty<float> *this,FPCGPointArrayProperty<float> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Values).ArrayMax;
    piVar1 = &(this->Values).ArrayMax;
    _Src = (param_1->Values).AllocatorInstance.Data;
    iVar3 = (param_1->Values).ArrayNum;
    (this->Values).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Values).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  this->Value = param_1->Value;
  this->NumValues = param_1->NumValues;
  return this;
}

// CopyTo @ 1498a6530

void __thiscall
FPCGPointArrayProperty<int>::CopyTo
          (FPCGPointArrayProperty<int> *this,FPCGPointArrayProperty<int> *param_1,int param_2,
          int param_3,int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = (ulonglong)param_3;
  if (((this->NumValues < param_2 + param_4) || (param_1->NumValues < param_3 + param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartReadIndex + Count <= NumValues && StartWriteIndex + Count <= OutProperty.NumValues"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xd6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Values).ArrayNum;
  if (((iVar1 != 0) && (iVar1 != this->NumValues)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (param_1->Values).ArrayNum;
  if ((this->Values).ArrayNum == 0) {
    if (((iVar1 != 0) && (iVar1 != param_1->NumValues)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<581474658470068384>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->Values).ArrayNum == 0) {
      param_1->Value = this->Value;
    }
    else if (param_3 < param_3 + param_4) {
      lVar8 = uVar7 * 4;
      do {
        uVar6 = (uint)uVar7;
        iVar1 = this->Value;
        uVar5 = 0;
        if ((int)uVar6 < (param_1->Values).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
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
        uVar7 = (ulonglong)(uVar6 + 1);
        *(int *)((param_1->Values).AllocatorInstance.Data + lVar8) = iVar1;
        lVar8 = lVar8 + 4;
      } while ((int)(uVar6 + 1) < param_3 + param_4);
    }
  }
  else {
    if (((iVar1 != 0) && (iVar1 != param_1->NumValues)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<581474658470068384>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((param_1->Values).ArrayNum == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutProperty.IsAllocated()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xe7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
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
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar5 = 0;
    if (param_3 < (param_1->Values).ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
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
    memcpy((param_1->Values).AllocatorInstance.Data + uVar7 * 4,pFVar2 + (longlong)param_2 * 4,
           (longlong)param_4 << 2);
  }
  return;
}

// CopyTo @ 1498a67f0

void __thiscall
FPCGPointArrayProperty<float>::CopyTo
          (FPCGPointArrayProperty<float> *this,FPCGPointArrayProperty<float> *param_1,int param_2,
          int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = (ulonglong)param_3;
  if (((this->NumValues < param_2 + param_4) || (param_1->NumValues < param_3 + param_4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartReadIndex + Count <= NumValues && StartWriteIndex + Count <= OutProperty.NumValues"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xd6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Values).ArrayNum;
  if (((iVar2 != 0) && (iVar2 != this->NumValues)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (param_1->Values).ArrayNum;
  if ((this->Values).ArrayNum == 0) {
    if (((iVar2 != 0) && (iVar2 != param_1->NumValues)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<581474658470068384>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->Values).ArrayNum == 0) {
      param_1->Value = this->Value;
    }
    else if (param_3 < param_3 + param_4) {
      lVar9 = uVar8 * 4;
      do {
        uVar7 = (uint)uVar8;
        fVar1 = this->Value;
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Values).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        *(float *)((param_1->Values).AllocatorInstance.Data + lVar9) = fVar1;
        lVar9 = lVar9 + 4;
      } while ((int)(uVar7 + 1) < param_3 + param_4);
    }
  }
  else {
    if (((iVar2 != 0) && (iVar2 != param_1->NumValues)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<581474658470068384>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1->Values).ArrayNum == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutProperty.IsAllocated()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xe7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_3 < (param_1->Values).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    memcpy((param_1->Values).AllocatorInstance.Data + uVar8 * 4,pFVar3 + (longlong)param_2 * 4,
           (longlong)param_4 << 2);
  }
  return;
}

// CopyTo @ 1498a6ab0

void __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::CopyTo
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TTransform<double>_> *param_1,int param_2,int param_3,
          int param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  
  uVar23 = (ulonglong)param_3;
  if (((this->NumValues < param_2 + param_4) || (param_1->NumValues < param_3 + param_4)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartReadIndex + Count <= NumValues && StartWriteIndex + Count <= OutProperty.NumValues"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xd6,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Values).ArrayNum;
  if (((iVar2 != 0) && (iVar2 != this->NumValues)) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<581474658470068384>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (param_1->Values).ArrayNum;
  if ((this->Values).ArrayNum == 0) {
    if (((iVar2 != 0) && (iVar2 != param_1->NumValues)) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<581474658470068384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->Values).ArrayNum == 0) {
      dVar9 = (this->Value).Rotation.XY.m128d_f64[1];
      (param_1->Value).Rotation.XY.m128d_f64[0] = (this->Value).Rotation.XY.m128d_f64[0];
      (param_1->Value).Rotation.XY.m128d_f64[1] = dVar9;
      dVar9 = (this->Value).Rotation.ZW.m128d_f64[1];
      (param_1->Value).Rotation.ZW.m128d_f64[0] = (this->Value).Rotation.ZW.m128d_f64[0];
      (param_1->Value).Rotation.ZW.m128d_f64[1] = dVar9;
      dVar9 = (this->Value).Translation.XY.m128d_f64[1];
      (param_1->Value).Translation.XY.m128d_f64[0] = (this->Value).Translation.XY.m128d_f64[0];
      (param_1->Value).Translation.XY.m128d_f64[1] = dVar9;
      dVar9 = (this->Value).Translation.ZW.m128d_f64[1];
      (param_1->Value).Translation.ZW.m128d_f64[0] = (this->Value).Translation.ZW.m128d_f64[0];
      (param_1->Value).Translation.ZW.m128d_f64[1] = dVar9;
      dVar9 = (this->Value).Scale3D.XY.m128d_f64[1];
      (param_1->Value).Scale3D.XY.m128d_f64[0] = (this->Value).Scale3D.XY.m128d_f64[0];
      (param_1->Value).Scale3D.XY.m128d_f64[1] = dVar9;
      dVar9 = (this->Value).Scale3D.ZW.m128d_f64[1];
      (param_1->Value).Scale3D.ZW.m128d_f64[0] = (this->Value).Scale3D.ZW.m128d_f64[0];
      (param_1->Value).Scale3D.ZW.m128d_f64[1] = dVar9;
    }
    else if (param_3 < param_4 + param_3) {
      lVar21 = uVar23 * 0x60;
      do {
        dVar9 = (this->Value).Rotation.ZW.m128d_f64[0];
        dVar10 = (this->Value).Rotation.ZW.m128d_f64[1];
        uVar22 = (uint)uVar23;
        dVar11 = (this->Value).Translation.XY.m128d_f64[0];
        dVar12 = (this->Value).Translation.XY.m128d_f64[1];
        uVar5 = *(undefined4 *)(this->Value).Rotation.XY.m128d_f64;
        uVar6 = *(undefined4 *)((longlong)(this->Value).Rotation.XY.m128d_f64 + 4);
        uVar7 = *(undefined4 *)((this->Value).Rotation.XY.m128d_f64 + 1);
        uVar8 = *(undefined4 *)((longlong)(this->Value).Rotation.XY.m128d_f64 + 0xc);
        dVar13 = (this->Value).Translation.ZW.m128d_f64[0];
        dVar14 = (this->Value).Translation.ZW.m128d_f64[1];
        uVar20 = 0;
        if ((int)uVar22 < (param_1->Values).ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        dVar15 = (this->Value).Scale3D.XY.m128d_f64[0];
        dVar16 = (this->Value).Scale3D.XY.m128d_f64[1];
        dVar17 = (this->Value).Scale3D.ZW.m128d_f64[0];
        dVar18 = (this->Value).Scale3D.ZW.m128d_f64[1];
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->Values).AllocatorInstance.Data;
        uVar23 = (ulonglong)(uVar22 + 1);
        pFVar1 = pFVar3 + lVar21;
        *(undefined4 *)pFVar1 = uVar5;
        *(undefined4 *)(pFVar1 + 4) = uVar6;
        *(undefined4 *)(pFVar1 + 8) = uVar7;
        *(undefined4 *)(pFVar1 + 0xc) = uVar8;
        *(double *)(pFVar3 + lVar21 + 0x10) = dVar9;
        *(double *)(pFVar3 + lVar21 + 0x10 + 8) = dVar10;
        *(double *)(pFVar3 + lVar21 + 0x20) = dVar11;
        *(double *)(pFVar3 + lVar21 + 0x20 + 8) = dVar12;
        *(double *)(pFVar3 + lVar21 + 0x30) = dVar13;
        *(double *)(pFVar3 + lVar21 + 0x30 + 8) = dVar14;
        *(double *)(pFVar3 + lVar21 + 0x40) = dVar15;
        *(double *)(pFVar3 + lVar21 + 0x40 + 8) = dVar16;
        *(double *)(pFVar3 + lVar21 + 0x50) = dVar17;
        *(double *)(pFVar3 + lVar21 + 0x50 + 8) = dVar18;
        lVar21 = lVar21 + 0x60;
      } while ((int)(uVar22 + 1) < param_4 + param_3);
    }
  }
  else {
    if (((iVar2 != 0) && (iVar2 != param_1->NumValues)) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<581474658470068384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1->Values).ArrayNum == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutProperty.IsAllocated()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xe7,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar20 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar20 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    uVar20 = 0;
    if (param_3 < (param_1->Values).ArrayNum) {
      uVar20 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    memcpy((param_1->Values).AllocatorInstance.Data + uVar23 * 0x60,
           pFVar1 + (longlong)param_2 * 0x60,(longlong)param_4 * 0x60);
  }
  return;
}

// CopyTo @ 1498a6e10

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector4<double>_>::CopyTo
          (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TVector4<double>_> *param_1,int param_2,int param_3,
          int param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  uVar14 = (ulonglong)param_3;
  if (((this->NumValues < param_2 + param_4) || (param_1->NumValues < param_3 + param_4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartReadIndex + Count <= NumValues && StartWriteIndex + Count <= OutProperty.NumValues"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xd6,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Values).ArrayNum;
  if (((iVar2 != 0) && (iVar2 != this->NumValues)) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<581474658470068384>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (param_1->Values).ArrayNum;
  if ((this->Values).ArrayNum == 0) {
    if (((iVar2 != 0) && (iVar2 != param_1->NumValues)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<581474658470068384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->Values).ArrayNum == 0) {
      dVar9 = (this->Value).field0_0x0._s_0.Y;
      (param_1->Value).field0_0x0._s_0.X = (this->Value).field0_0x0._s_0.X;
      (param_1->Value).field0_0x0._s_0.Y = dVar9;
      dVar9 = (this->Value).field0_0x0._s_0.W;
      (param_1->Value).field0_0x0._s_0.Z = (this->Value).field0_0x0._s_0.Z;
      (param_1->Value).field0_0x0._s_0.W = dVar9;
    }
    else if (param_3 < param_3 + param_4) {
      lVar15 = uVar14 << 5;
      do {
        uVar13 = (uint)uVar14;
        uVar5 = *(undefined4 *)&(this->Value).field0_0x0;
        uVar6 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
        uVar7 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
        uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
        dVar9 = (this->Value).field0_0x0._s_0.Z;
        dVar10 = (this->Value).field0_0x0._s_0.W;
        uVar12 = 0;
        if ((int)uVar13 < (param_1->Values).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->Values).AllocatorInstance.Data;
        uVar14 = (ulonglong)(uVar13 + 1);
        pFVar1 = pFVar3 + lVar15;
        *(undefined4 *)pFVar1 = uVar5;
        *(undefined4 *)(pFVar1 + 4) = uVar6;
        *(undefined4 *)(pFVar1 + 8) = uVar7;
        *(undefined4 *)(pFVar1 + 0xc) = uVar8;
        pFVar3 = pFVar3 + lVar15 + 0x10;
        *(double *)pFVar3 = dVar9;
        *(double *)(pFVar3 + 8) = dVar10;
        lVar15 = lVar15 + 0x20;
      } while ((int)(uVar13 + 1) < param_3 + param_4);
    }
  }
  else {
    if (((iVar2 != 0) && (iVar2 != param_1->NumValues)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<581474658470068384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1->Values).ArrayNum == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutProperty.IsAllocated()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xe7,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    uVar12 = 0;
    if (param_3 < (param_1->Values).ArrayNum) {
      uVar12 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    memcpy((param_1->Values).AllocatorInstance.Data + uVar14 * 0x20,
           pFVar1 + (longlong)param_2 * 0x20,(longlong)param_4 << 5);
  }
  return;
}

// CopyTo @ 1498a70f0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TVector<double>_> *param_1,int param_2,int param_3,
          int param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar13 = (ulonglong)param_3;
  if (((this->NumValues < param_2 + param_4) || (param_1->NumValues < param_3 + param_4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartReadIndex + Count <= NumValues && StartWriteIndex + Count <= OutProperty.NumValues"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xd6,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (this->Values).ArrayNum;
  if (((iVar3 != 0) && (iVar3 != this->NumValues)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<581474658470068384>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (param_1->Values).ArrayNum;
  if ((this->Values).ArrayNum == 0) {
    if (((iVar3 != 0) && (iVar3 != param_1->NumValues)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<581474658470068384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_1->Values).ArrayNum == 0) {
      dVar2 = (this->Value).field0_0x0._s_0.Y;
      (param_1->Value).field0_0x0._s_0.X = (this->Value).field0_0x0._s_0.X;
      (param_1->Value).field0_0x0._s_0.Y = dVar2;
      (param_1->Value).field0_0x0._s_0.Z = (this->Value).field0_0x0._s_0.Z;
    }
    else if (param_3 < param_4 + param_3) {
      lVar14 = uVar13 * 0x18;
      do {
        uVar12 = (uint)uVar13;
        uVar6 = *(undefined4 *)&(this->Value).field0_0x0;
        uVar7 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
        uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
        uVar9 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
        dVar2 = (this->Value).field0_0x0._s_0.Z;
        uVar11 = 0;
        if ((int)uVar12 < (param_1->Values).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Values).AllocatorInstance.Data;
        uVar13 = (ulonglong)(uVar12 + 1);
        pFVar1 = pFVar4 + lVar14;
        *(undefined4 *)pFVar1 = uVar6;
        *(undefined4 *)(pFVar1 + 4) = uVar7;
        *(undefined4 *)(pFVar1 + 8) = uVar8;
        *(undefined4 *)(pFVar1 + 0xc) = uVar9;
        *(double *)(pFVar4 + lVar14 + 0x10) = dVar2;
        lVar14 = lVar14 + 0x18;
      } while ((int)(uVar12 + 1) < param_4 + param_3);
    }
  }
  else {
    if (((iVar3 != 0) && (iVar3 != param_1->NumValues)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<581474658470068384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((param_1->Values).ArrayNum == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutProperty.IsAllocated()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                            ,0xe7,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    uVar11 = 0;
    if (param_3 < (param_1->Values).ArrayNum) {
      uVar11 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    memcpy((param_1->Values).AllocatorInstance.Data + uVar13 * 0x18,
           pFVar1 + (longlong)param_2 * 0x18,(longlong)param_4 * 0x18);
  }
  return;
}

// CopyTo @ 1498a73e0

void __thiscall
FPCGPointArrayProperty<__int64>::CopyTo
          (FPCGPointArrayProperty<__int64> *this,FPCGPointArrayProperty<__int64> *param_1,
          int param_2,int param_3,int param_4)

{
  int iVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = (ulonglong)param_3;
  if (((this->NumValues < param_2 + param_4) || (param_1->NumValues < param_3 + param_4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartReadIndex + Count <= NumValues && StartWriteIndex + Count <= OutProperty.NumValues"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xd6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->Values).ArrayNum;
  if (((iVar1 != 0) && (iVar1 != this->NumValues)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (param_1->Values).ArrayNum;
  if ((this->Values).ArrayNum == 0) {
    if (((iVar1 != 0) && (iVar1 != param_1->NumValues)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<581474658470068384>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->Values).ArrayNum == 0) {
      param_1->Value = this->Value;
    }
    else if (param_3 < param_3 + param_4) {
      lVar9 = uVar8 * 8;
      do {
        uVar7 = (uint)uVar8;
        lVar2 = this->Value;
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Values).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        *(long64 *)((param_1->Values).AllocatorInstance.Data + lVar9) = lVar2;
        lVar9 = lVar9 + 8;
      } while ((int)(uVar7 + 1) < param_3 + param_4);
    }
  }
  else {
    if (((iVar1 != 0) && (iVar1 != param_1->NumValues)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<581474658470068384>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1->Values).ArrayNum == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutProperty.IsAllocated()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                           ,0xe7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_3 < (param_1->Values).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    memcpy((param_1->Values).AllocatorInstance.Data + uVar8 * 8,pFVar3 + (longlong)param_2 * 8,
           (longlong)param_4 << 3);
  }
  return;
}

// CopyUnallocatedProperty @ 1498a7a10

void __thiscall
FPCGPointArrayProperty<float>::CopyUnallocatedProperty
          (FPCGPointArrayProperty<float> *this,FPCGPointArrayProperty<float> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Values).ArrayNum == 0) {
    iVar1 = (param_1->Values).ArrayNum;
    if ((iVar1 != 0) && (iVar1 != param_1->NumValues)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1->Values).ArrayNum == 0) {
      param_1->Value = this->Value;
    }
  }
  return;
}

// CopyUnallocatedProperty @ 1498a7ac0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyUnallocatedProperty
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TVector<double>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Values).ArrayNum == 0) {
    iVar1 = (param_1->Values).ArrayNum;
    if ((iVar1 != 0) && (iVar1 != param_1->NumValues)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1->Values).ArrayNum == 0) {
      dVar3 = (this->Value).field0_0x0._s_0.Y;
      (param_1->Value).field0_0x0._s_0.X = (this->Value).field0_0x0._s_0.X;
      (param_1->Value).field0_0x0._s_0.Y = dVar3;
      (param_1->Value).field0_0x0._s_0.Z = (this->Value).field0_0x0._s_0.Z;
    }
  }
  return;
}

// GetConstValueRange @ 1498b75c0

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
FPCGPointArrayProperty<float>::GetConstValueRange
          (FPCGPointArrayProperty<float> *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *pTVar5;
  int iVar6;
  
  iVar6 = (this->Values).ArrayNum;
  iVar1 = this->NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->Values).ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&this->Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (float *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 4;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  return __return_storage_ptr__;
}

// GetConstValueRange @ 1498b76f0

TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
* __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::GetConstValueRange
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,
          TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  *pTVar13;
  int iVar14;
  
  iVar14 = (this->Values).ArrayNum;
  iVar1 = this->NumValues;
  if (((iVar14 != 0) && (iVar14 != iVar1)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<581474658470068384>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
               *)(*pcVar3)();
    return pTVar13;
  }
  iVar14 = (this->Values).ArrayNum;
  if (iVar14 == 0) {
    pTVar2 = &this->Value;
    iVar14 = 1;
  }
  else {
    pTVar2 = (TTransform<double> *)(this->Values).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumElements >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x3f,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
  }
  (__return_storage_ptr__->ElementView).FirstElementPtr = pTVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0x60;
  (__return_storage_ptr__->ElementView).NumElements = iVar14;
  __return_storage_ptr__->NumElements = iVar1;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Translation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64 = auVar11;
  return __return_storage_ptr__;
}

// GetConstValueRange @ 1498b7860

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::GetConstValueRange
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  *pTVar5;
  int iVar6;
  
  iVar6 = (this->Values).ArrayNum;
  iVar1 = this->NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
              *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->Values).ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&this->Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector<double> *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0x18;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  return __return_storage_ptr__;
}

// GetValueRange @ 1498ca040

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
FPCGPointArrayProperty<float>::GetValueRange
          (FPCGPointArrayProperty<float> *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1,
          bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<float,TStridedView<float,int>_> *pTVar5;
  int iVar6;
  
  if (param_1) {
    SetNum(this,this->NumValues,true,param_2);
  }
  iVar6 = (this->Values).ArrayNum;
  iVar1 = this->NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->Values).ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&this->Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (float *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 4;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  return __return_storage_ptr__;
}

// GetValueRange @ 1498ca180

TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_> *
__thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::GetValueRange
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,
          TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
          *__return_storage_ptr__,bool param_1,bool param_2)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
  *pTVar13;
  int iVar14;
  
  if (param_1) {
    SetNum(this,this->NumValues,true,param_2);
  }
  iVar14 = (this->Values).ArrayNum;
  iVar1 = this->NumValues;
  if (((iVar14 != 0) && (iVar14 != iVar1)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<581474658470068384>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                          ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar12)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
               *)(*pcVar3)();
    return pTVar13;
  }
  iVar14 = (this->Values).ArrayNum;
  if (iVar14 == 0) {
    pTVar2 = &this->Value;
    iVar14 = 1;
  }
  else {
    pTVar2 = (TTransform<double> *)(this->Values).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumElements >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x3f,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
  }
  (__return_storage_ptr__->ElementView).FirstElementPtr = pTVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0x60;
  (__return_storage_ptr__->ElementView).NumElements = iVar14;
  __return_storage_ptr__->NumElements = iVar1;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Translation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64 = auVar11;
  return __return_storage_ptr__;
}

// GetValueRange @ 1498ca300

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::GetValueRange
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> *pTVar5;
  int iVar6;
  
  if (param_1) {
    SetNum(this,this->NumValues,true,param_2);
  }
  iVar6 = (this->Values).ArrayNum;
  iVar1 = this->NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
              *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->Values).ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&this->Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector<double> *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0x18;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  return __return_storage_ptr__;
}

// IsAllocated @ 1498d0a80

bool __thiscall FPCGPointArrayProperty<int>::IsAllocated(FPCGPointArrayProperty<int> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->Values).ArrayNum != 0;
}

// IsAllocated @ 1498d0ae0

bool __thiscall FPCGPointArrayProperty<float>::IsAllocated(FPCGPointArrayProperty<float> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->Values).ArrayNum != 0;
}

// IsAllocated @ 1498d0b40

bool __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::IsAllocated
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->Values).ArrayNum != 0;
}

// IsAllocated @ 1498d0ba0

bool __thiscall
FPCGPointArrayProperty<UE::Math::TVector4<double>_>::IsAllocated
          (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->Values).ArrayNum != 0;
}

// IsAllocated @ 1498d0c00

bool __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::IsAllocated
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->Values).ArrayNum != 0;
}

// IsAllocated @ 1498d0c60

bool __thiscall FPCGPointArrayProperty<__int64>::IsAllocated(FPCGPointArrayProperty<__int64> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->Values).ArrayNum != 0;
}

// SetNum @ 1498df380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGPointArrayProperty<int>::SetNum
          (FPCGPointArrayProperty<int> *this,int param_1,bool param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = (this->Values).ArrayNum;
  uVar6 = (ulonglong)iVar1;
  this->NumValues = param_1;
  if (((iVar1 != param_1) &&
      (((0 < iVar1 || (param_2)) &&
       (TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->Values,param_1,Default),
       param_3)))) && (iVar1 < param_1)) {
    lVar7 = uVar6 * 4;
    do {
      iVar1 = this->Value;
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->Values).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      *(int *)((this->Values).AllocatorInstance.Data + lVar7) = iVar1;
      lVar7 = lVar7 + 4;
    } while ((int)(uVar5 + 1) < param_1);
  }
  return;
}

// SetNum @ 1498df460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGPointArrayProperty<float>::SetNum
          (FPCGPointArrayProperty<float> *this,int param_1,bool param_2,bool param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar2 = (this->Values).ArrayNum;
  uVar7 = (ulonglong)iVar2;
  this->NumValues = param_1;
  if (((iVar2 != param_1) &&
      (((0 < iVar2 || (param_2)) &&
       (TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->Values,param_1,Default), param_3)))) && (iVar2 < param_1)) {
    lVar8 = uVar7 * 4;
    do {
      fVar1 = this->Value;
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->Values).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      uVar7 = (ulonglong)(uVar6 + 1);
      *(float *)((this->Values).AllocatorInstance.Data + lVar8) = fVar1;
      lVar8 = lVar8 + 4;
    } while ((int)(uVar6 + 1) < param_1);
  }
  return;
}

// SetNum @ 1498df560

void __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::SetNum
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,int param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  
  iVar2 = (this->Values).ArrayNum;
  uVar23 = (ulonglong)iVar2;
  piVar1 = &(this->Values).ArrayNum;
  this->NumValues = param_1;
  if ((iVar2 != param_1) && ((0 < iVar2 || (param_2)))) {
    if (iVar2 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_1 - iVar2,(ForAnyElementType *)this,piVar1,&(this->Values).ArrayMax
                );
    }
    else {
      if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
      if (param_1 < iVar2) {
        uVar24 = iVar2 - param_1;
        if (((int)(uVar24 | param_1) < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar24 != 0) {
          pFVar21 = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x60;
          iVar20 = (*piVar1 - uVar24) - param_1;
          if (iVar20 != 0) {
            memmove(pFVar21,pFVar21 + (longlong)(int)uVar24 * 0x60,(longlong)iVar20 * 0x60);
          }
          *piVar1 = *piVar1 - uVar24;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,(ForAnyElementType *)this,*piVar1,&(this->Values).ArrayMax);
        }
      }
    }
    if ((param_3) && (iVar2 < param_1)) {
      lVar25 = uVar23 * 0x60;
      do {
        dVar9 = (this->Value).Rotation.ZW.m128d_f64[0];
        dVar10 = (this->Value).Rotation.ZW.m128d_f64[1];
        dVar11 = (this->Value).Translation.XY.m128d_f64[0];
        dVar12 = (this->Value).Translation.XY.m128d_f64[1];
        uVar22 = (uint)uVar23;
        uVar5 = *(undefined4 *)(this->Value).Rotation.XY.m128d_f64;
        uVar6 = *(undefined4 *)((longlong)(this->Value).Rotation.XY.m128d_f64 + 4);
        uVar7 = *(undefined4 *)((this->Value).Rotation.XY.m128d_f64 + 1);
        uVar8 = *(undefined4 *)((longlong)(this->Value).Rotation.XY.m128d_f64 + 0xc);
        dVar13 = (this->Value).Translation.ZW.m128d_f64[0];
        dVar14 = (this->Value).Translation.ZW.m128d_f64[1];
        uVar24 = 0;
        if ((int)uVar22 < *piVar1) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        dVar15 = (this->Value).Scale3D.XY.m128d_f64[0];
        dVar16 = (this->Value).Scale3D.XY.m128d_f64[1];
        dVar17 = (this->Value).Scale3D.ZW.m128d_f64[0];
        dVar18 = (this->Value).Scale3D.ZW.m128d_f64[1];
        if ((uVar24 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Values).AllocatorInstance.Data;
        uVar23 = (ulonglong)(uVar22 + 1);
        pFVar21 = pFVar3 + lVar25;
        *(undefined4 *)pFVar21 = uVar5;
        *(undefined4 *)(pFVar21 + 4) = uVar6;
        *(undefined4 *)(pFVar21 + 8) = uVar7;
        *(undefined4 *)(pFVar21 + 0xc) = uVar8;
        *(double *)(pFVar3 + lVar25 + 0x10) = dVar9;
        *(double *)(pFVar3 + lVar25 + 0x10 + 8) = dVar10;
        *(double *)(pFVar3 + lVar25 + 0x20) = dVar11;
        *(double *)(pFVar3 + lVar25 + 0x20 + 8) = dVar12;
        *(double *)(pFVar3 + lVar25 + 0x30) = dVar13;
        *(double *)(pFVar3 + lVar25 + 0x30 + 8) = dVar14;
        *(double *)(pFVar3 + lVar25 + 0x40) = dVar15;
        *(double *)(pFVar3 + lVar25 + 0x40 + 8) = dVar16;
        *(double *)(pFVar3 + lVar25 + 0x50) = dVar17;
        *(double *)(pFVar3 + lVar25 + 0x50 + 8) = dVar18;
        lVar25 = lVar25 + 0x60;
      } while ((int)(uVar22 + 1) < param_1);
    }
  }
  return;
}

// SetNum @ 1498df7b0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector4<double>_>::SetNum
          (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this,int param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  
  iVar2 = (this->Values).ArrayNum;
  uVar15 = (ulonglong)iVar2;
  piVar1 = &(this->Values).ArrayNum;
  this->NumValues = param_1;
  if ((iVar2 != param_1) && ((0 < iVar2 || (param_2)))) {
    if (iVar2 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,param_1 - iVar2,(ForAnyElementType *)this,piVar1,&(this->Values).ArrayMax
                );
    }
    else {
      if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
      if (param_1 < iVar2) {
        uVar16 = iVar2 - param_1;
        if (((int)(uVar16 | param_1) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar16 != 0) {
          pFVar13 = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x20;
          iVar12 = (*piVar1 - uVar16) - param_1;
          if (iVar12 != 0) {
            memmove(pFVar13,pFVar13 + (longlong)(int)uVar16 * 0x20,(longlong)iVar12 << 5);
          }
          *piVar1 = *piVar1 - uVar16;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,0x10,(ForAnyElementType *)this,*piVar1,&(this->Values).ArrayMax);
        }
      }
    }
    if ((param_3) && (iVar2 < param_1)) {
      lVar17 = uVar15 << 5;
      do {
        uVar5 = *(undefined4 *)&(this->Value).field0_0x0;
        uVar6 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
        uVar7 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
        uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
        uVar14 = (uint)uVar15;
        dVar9 = (this->Value).field0_0x0._s_0.Z;
        dVar10 = (this->Value).field0_0x0._s_0.W;
        uVar16 = 0;
        if ((int)uVar14 < *piVar1) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Values).AllocatorInstance.Data;
        uVar15 = (ulonglong)(uVar14 + 1);
        pFVar13 = pFVar3 + lVar17;
        *(undefined4 *)pFVar13 = uVar5;
        *(undefined4 *)(pFVar13 + 4) = uVar6;
        *(undefined4 *)(pFVar13 + 8) = uVar7;
        *(undefined4 *)(pFVar13 + 0xc) = uVar8;
        pFVar3 = pFVar3 + lVar17 + 0x10;
        *(double *)pFVar3 = dVar9;
        *(double *)(pFVar3 + 8) = dVar10;
        lVar17 = lVar17 + 0x20;
      } while ((int)(uVar14 + 1) < param_1);
    }
  }
  return;
}

// SetNum @ 1498df9a0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,int param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  
  iVar4 = (this->Values).ArrayNum;
  uVar14 = (ulonglong)iVar4;
  piVar1 = &(this->Values).ArrayNum;
  this->NumValues = param_1;
  if ((iVar4 != param_1) && ((0 < iVar4 || (param_2)))) {
    if (iVar4 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1 - iVar4,(ForAnyElementType *)this,piVar1,&(this->Values).ArrayMax);
    }
    else {
      if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
      if (param_1 < iVar4) {
        uVar15 = iVar4 - param_1;
        if (((int)(uVar15 | param_1) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar15 != 0) {
          pFVar2 = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x18;
          iVar12 = (*piVar1 - uVar15) - param_1;
          if (iVar12 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar15 * 0x18,(longlong)iVar12 * 0x18);
          }
          *piVar1 = *piVar1 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(ForAnyElementType *)this,*piVar1,&(this->Values).ArrayMax);
        }
      }
    }
    if ((param_3) && (iVar4 < param_1)) {
      lVar16 = uVar14 * 0x18;
      do {
        uVar7 = *(undefined4 *)&(this->Value).field0_0x0;
        uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
        uVar9 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
        uVar10 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
        uVar13 = (uint)uVar14;
        dVar3 = (this->Value).field0_0x0._s_0.Z;
        uVar15 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->Values).AllocatorInstance.Data;
        uVar14 = (ulonglong)(uVar13 + 1);
        pFVar2 = pFVar5 + lVar16;
        *(undefined4 *)pFVar2 = uVar7;
        *(undefined4 *)(pFVar2 + 4) = uVar8;
        *(undefined4 *)(pFVar2 + 8) = uVar9;
        *(undefined4 *)(pFVar2 + 0xc) = uVar10;
        *(double *)(pFVar5 + lVar16 + 0x10) = dVar3;
        lVar16 = lVar16 + 0x18;
      } while ((int)(uVar13 + 1) < param_1);
    }
  }
  return;
}

// SetNum @ 1498dfb90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGPointArrayProperty<__int64>::SetNum
          (FPCGPointArrayProperty<__int64> *this,int param_1,bool param_2,bool param_3)

{
  int iVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = (this->Values).ArrayNum;
  uVar7 = (ulonglong)iVar1;
  this->NumValues = param_1;
  if (((iVar1 != param_1) &&
      (((0 < iVar1 || (param_2)) &&
       (TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->Values,param_1,Default), param_3)))) && (iVar1 < param_1)) {
    lVar8 = uVar7 * 8;
    do {
      lVar2 = this->Value;
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->Values).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      uVar7 = (ulonglong)(uVar6 + 1);
      *(long64 *)((this->Values).AllocatorInstance.Data + lVar8) = lVar2;
      lVar8 = lVar8 + 8;
    } while ((int)(uVar6 + 1) < param_1);
  }
  return;
}

// operator= @ 149f34e30

FPCGPointArrayProperty<UE::Math::TVector<double>_> * __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::operator=
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TVector<double>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  if (this != param_1) {
    iVar2 = (this->Values).ArrayMax;
    piVar1 = &(this->Values).ArrayMax;
    _Src = (param_1->Values).AllocatorInstance.Data;
    iVar3 = (param_1->Values).ArrayNum;
    (this->Values).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Values).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x18);
      }
    }
  }
  dVar4 = (param_1->Value).field0_0x0._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar4;
  (this->Value).field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  this->NumValues = param_1->NumValues;
  return this;
}

// operator== @ 149f352a0

bool __thiscall
FPCGPointArrayProperty<float>::operator==
          (FPCGPointArrayProperty<float> *this,FPCGPointArrayProperty<float> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (((this->NumValues == param_1->NumValues) &&
      (iVar1 = (this->Values).ArrayNum, iVar1 == (param_1->Values).ArrayNum)) &&
     (param_1->Value == this->Value)) {
    uVar7 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Values).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (param_1->Values).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->Values).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(float *)(pFVar2 + lVar8 * 4) !=
            *(float *)((this->Values).AllocatorInstance.Data + lVar8 * 4)) goto LAB_149f353a1;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar7 < (this->Values).ArrayNum);
    }
    bVar4 = true;
  }
  else {
LAB_149f353a1:
    bVar4 = false;
  }
  return bVar4;
}

// operator== @ 149f353d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::operator==
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TTransform<double>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  bool bVar25;
  undefined1 uVar26;
  int iVar27;
  int iVar28;
  undefined7 extraout_var;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  
  dVar24 = __real_3f1a36e2e0000000;
  uVar23 = _UNK_15061cc8c;
  uVar22 = _UNK_15061cc88;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((this->NumValues == param_1->NumValues) &&
     (iVar28 = (this->Values).ArrayNum, iVar28 == (param_1->Values).ArrayNum)) {
    dVar35 = (this->Value).Translation.ZW.m128d_f64[0] -
             (param_1->Value).Translation.ZW.m128d_f64[0];
    dVar37 = (this->Value).Translation.ZW.m128d_f64[1] -
             (param_1->Value).Translation.ZW.m128d_f64[1];
    dVar39 = (this->Value).Translation.XY.m128d_f64[0] -
             (param_1->Value).Translation.XY.m128d_f64[0];
    dVar41 = (this->Value).Translation.XY.m128d_f64[1] -
             (param_1->Value).Translation.XY.m128d_f64[1];
    lVar33 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar37,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar33;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
    uVar29 = movmskpd((int)this,auVar4);
    lVar33 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar41,0) & _UNK_15061cc88));
    auVar14._8_4_ = (int)lVar33;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar14._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
    iVar27 = movmskpd(param_1->NumValues,auVar14);
    if ((uVar29 & 0x3fffffff) == 0 && iVar27 == 0) {
      dVar35 = (this->Value).Rotation.ZW.m128d_f64[0];
      dVar37 = (this->Value).Rotation.ZW.m128d_f64[1];
      dVar39 = (this->Value).Rotation.XY.m128d_f64[0];
      dVar41 = (this->Value).Rotation.XY.m128d_f64[1];
      dVar36 = dVar35 - (param_1->Value).Rotation.ZW.m128d_f64[0];
      dVar38 = dVar37 - (param_1->Value).Rotation.ZW.m128d_f64[1];
      dVar35 = dVar35 + (param_1->Value).Rotation.ZW.m128d_f64[0];
      dVar37 = dVar37 + (param_1->Value).Rotation.ZW.m128d_f64[1];
      dVar40 = dVar39 - (param_1->Value).Rotation.XY.m128d_f64[0];
      dVar42 = dVar41 - (param_1->Value).Rotation.XY.m128d_f64[1];
      dVar39 = dVar39 + (param_1->Value).Rotation.XY.m128d_f64[0];
      dVar41 = dVar41 + (param_1->Value).Rotation.XY.m128d_f64[1];
      lVar33 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar38,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar33;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar36,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      iVar30 = movmskpd(0,auVar5);
      lVar33 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar42,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar33;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar40,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      uVar29 = movmskpd(iVar27,auVar6);
      uVar31 = iVar30 << 2 | uVar29;
      if (uVar31 != 0) {
        lVar33 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar37,0) & _UNK_15061cc88));
        auVar7._8_4_ = (int)lVar33;
        auVar7._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar35,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar7._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
        uVar31 = movmskpd(uVar31,auVar7);
        lVar33 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar41,0) & _UNK_15061cc88));
        auVar15._8_4_ = (int)lVar33;
        auVar15._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar15._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
        uVar29 = movmskpd(uVar29,auVar15);
        if ((uVar31 & 0x3fffffff) != 0 || uVar29 != 0) {
          return false;
        }
      }
      dVar35 = (this->Value).Scale3D.ZW.m128d_f64[0] - (param_1->Value).Scale3D.ZW.m128d_f64[0];
      dVar37 = (this->Value).Scale3D.ZW.m128d_f64[1] - (param_1->Value).Scale3D.ZW.m128d_f64[1];
      dVar39 = (this->Value).Scale3D.XY.m128d_f64[0] - (param_1->Value).Scale3D.XY.m128d_f64[0];
      dVar41 = (this->Value).Scale3D.XY.m128d_f64[1] - (param_1->Value).Scale3D.XY.m128d_f64[1];
      lVar33 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar37,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar33;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar35,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      uVar31 = movmskpd(0,auVar8);
      lVar33 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar41,0) & _UNK_15061cc88));
      auVar16._8_4_ = (int)lVar33;
      auVar16._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar16._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      iVar27 = movmskpd(uVar29,auVar16);
      if ((uVar31 & 0x3fffffff) == 0 && iVar27 == 0) {
        uVar29 = 0;
        if (0 < iVar28) {
          lVar33 = 0;
          do {
            uVar31 = 0;
            if ((int)uVar29 < (param_1->Values).ArrayNum) {
              uVar31 = ~uVar29 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar3 = (code *)swi(3);
              uVar26 = (*pcVar3)();
              return (bool)uVar26;
            }
            iVar28 = (this->Values).ArrayNum;
            pFVar1 = (param_1->Values).AllocatorInstance.Data;
            uVar31 = 0;
            if ((int)uVar29 < iVar28) {
              uVar31 = ~uVar29 >> 0x1f;
            }
            if (uVar31 == 0) {
              iVar28 = 0x506106c8;
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              uVar31 = (uint)CONCAT71(extraout_var,bVar25);
              if (bVar25) {
                pcVar3 = (code *)swi(3);
                uVar26 = (*pcVar3)();
                return (bool)uVar26;
              }
            }
            pFVar2 = (this->Values).AllocatorInstance.Data;
            dVar35 = *(double *)(pFVar2 + lVar33 + 0x30) - *(double *)(pFVar1 + lVar33 + 0x30);
            dVar37 = *(double *)(pFVar2 + lVar33 + 0x30 + 8) -
                     *(double *)(pFVar1 + lVar33 + 0x30 + 8);
            dVar39 = *(double *)(pFVar2 + lVar33 + 0x20) - *(double *)(pFVar1 + lVar33 + 0x20);
            dVar41 = *(double *)(pFVar2 + lVar33 + 0x20 + 8) -
                     *(double *)(pFVar1 + lVar33 + 0x20 + 8);
            lVar34 = -(ulonglong)
                      (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar23,
                                                 SUB84(dVar37,0) & uVar22));
            auVar9._8_4_ = (int)lVar34;
            auVar9._0_8_ = -(ulonglong)
                            (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar21,
                                                       SUB84(dVar35,0) & uVar20));
            auVar9._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
            uVar32 = movmskpd(iVar28,auVar9);
            lVar34 = -(ulonglong)
                      (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar23,
                                                 SUB84(dVar41,0) & uVar22));
            auVar17._8_4_ = (int)lVar34;
            auVar17._0_8_ =
                 -(ulonglong)
                  (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar21,
                                             SUB84(dVar39,0) & uVar20));
            auVar17._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
            iVar28 = movmskpd(uVar31,auVar17);
            if ((uVar32 & 0x3fffffff) != 0 || iVar28 != 0) {
              return false;
            }
            dVar35 = *(double *)(pFVar2 + lVar33 + 0x10);
            dVar37 = *(double *)(pFVar2 + lVar33 + 0x10 + 8);
            dVar39 = *(double *)(pFVar2 + lVar33);
            dVar41 = *(double *)(pFVar2 + lVar33 + 8);
            dVar36 = dVar35 - *(double *)(pFVar1 + lVar33 + 0x10);
            dVar38 = dVar37 - *(double *)(pFVar1 + lVar33 + 0x10 + 8);
            dVar35 = dVar35 + *(double *)(pFVar1 + lVar33 + 0x10);
            dVar37 = dVar37 + *(double *)(pFVar1 + lVar33 + 0x10 + 8);
            dVar40 = dVar39 - *(double *)(pFVar1 + lVar33);
            dVar42 = dVar41 - *(double *)(pFVar1 + lVar33 + 8);
            dVar39 = dVar39 + *(double *)(pFVar1 + lVar33);
            dVar41 = dVar41 + *(double *)(pFVar1 + lVar33 + 8);
            lVar34 = -(ulonglong)
                      (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar23,
                                                 SUB84(dVar38,0) & uVar22));
            auVar10._8_4_ = (int)lVar34;
            auVar10._0_8_ =
                 -(ulonglong)
                  (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar21,
                                             SUB84(dVar36,0) & uVar20));
            auVar10._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
            iVar27 = movmskpd(0,auVar10);
            lVar34 = -(ulonglong)
                      (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar23,
                                                 SUB84(dVar42,0) & uVar22));
            auVar11._8_4_ = (int)lVar34;
            auVar11._0_8_ =
                 -(ulonglong)
                  (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar21,
                                             SUB84(dVar40,0) & uVar20));
            auVar11._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
            uVar31 = movmskpd(iVar28,auVar11);
            uVar32 = iVar27 << 2 | uVar31;
            if (uVar32 != 0) {
              lVar34 = -(ulonglong)
                        (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar23,
                                                   SUB84(dVar37,0) & uVar22));
              auVar12._8_4_ = (int)lVar34;
              auVar12._0_8_ =
                   -(ulonglong)
                    (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar21,
                                               SUB84(dVar35,0) & uVar20));
              auVar12._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
              uVar32 = movmskpd(uVar32,auVar12);
              lVar34 = -(ulonglong)
                        (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar23,
                                                   SUB84(dVar41,0) & uVar22));
              auVar18._8_4_ = (int)lVar34;
              auVar18._0_8_ =
                   -(ulonglong)
                    (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar21,
                                               SUB84(dVar39,0) & uVar20));
              auVar18._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
              uVar31 = movmskpd(uVar31,auVar18);
              if ((uVar32 & 0x3fffffff) != 0 || uVar31 != 0) {
                return false;
              }
            }
            dVar35 = *(double *)(pFVar2 + lVar33 + 0x50) - *(double *)(pFVar1 + lVar33 + 0x50);
            dVar37 = *(double *)(pFVar2 + lVar33 + 0x50 + 8) -
                     *(double *)(pFVar1 + lVar33 + 0x50 + 8);
            dVar39 = *(double *)(pFVar2 + lVar33 + 0x40) - *(double *)(pFVar1 + lVar33 + 0x40);
            dVar41 = *(double *)(pFVar2 + lVar33 + 0x40 + 8) -
                     *(double *)(pFVar1 + lVar33 + 0x40 + 8);
            lVar34 = -(ulonglong)
                      (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar23,
                                                 SUB84(dVar37,0) & uVar22));
            auVar13._8_4_ = (int)lVar34;
            auVar13._0_8_ =
                 -(ulonglong)
                  (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar21,
                                             SUB84(dVar35,0) & uVar20));
            auVar13._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
            uVar32 = movmskpd(0,auVar13);
            lVar34 = -(ulonglong)
                      (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar23,
                                                 SUB84(dVar41,0) & uVar22));
            auVar19._8_4_ = (int)lVar34;
            auVar19._0_8_ =
                 -(ulonglong)
                  (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar21,
                                             SUB84(dVar39,0) & uVar20));
            auVar19._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
            iVar28 = movmskpd(uVar31,auVar19);
            if ((uVar32 & 0x3fffffff) != 0 || iVar28 != 0) {
              return false;
            }
            uVar29 = uVar29 + 1;
            lVar33 = lVar33 + 0x60;
          } while ((int)uVar29 < (this->Values).ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

// operator== @ 149f35720

bool __thiscall
FPCGPointArrayProperty<UE::Math::TVector4<double>_>::operator==
          (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TVector4<double>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  
  dVar7 = __real_3f1a36e2e0000000;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (((((this->NumValues != param_1->NumValues) ||
        (iVar1 = (this->Values).ArrayNum, iVar1 != (param_1->Values).ArrayNum)) ||
       (dVar13 = (this->Value).field0_0x0._s_0.X - (param_1->Value).field0_0x0._s_0.X,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      ((dVar13 = (this->Value).field0_0x0._s_0.Y - (param_1->Value).field0_0x0._s_0.Y,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (dVar13 = (this->Value).field0_0x0._s_0.Z - (param_1->Value).field0_0x0._s_0.Z,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) ||
     (dVar13 = (this->Value).field0_0x0._s_0.W - (param_1->Value).field0_0x0._s_0.W,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    return false;
  }
  uVar12 = 0;
  if (0 < iVar1) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (param_1->Values).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar2 = (param_1->Values).AllocatorInstance.Data;
      uVar10 = 0;
      if ((int)uVar12 < (this->Values).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar3 = (this->Values).AllocatorInstance.Data;
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11) -
                                          *(double *)(pFVar2 + lVar11)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11) - *(double *)(pFVar2 + lVar11)
                                         ,0) & uVar5)) {
        return false;
      }
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11 + 8) -
                                          *(double *)(pFVar2 + lVar11 + 8)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11 + 8) -
                                         *(double *)(pFVar2 + lVar11 + 8),0) & uVar5)) {
        return false;
      }
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11 + 0x10) -
                                          *(double *)(pFVar2 + lVar11 + 0x10)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11 + 0x10) -
                                         *(double *)(pFVar2 + lVar11 + 0x10),0) & uVar5)) {
        return false;
      }
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11 + 0x18) -
                                          *(double *)(pFVar2 + lVar11 + 0x18)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11 + 0x18) -
                                         *(double *)(pFVar2 + lVar11 + 0x18),0) & uVar5)) {
        return false;
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar12 < (this->Values).ArrayNum);
  }
  return true;
}

// operator== @ 149f35910

bool __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::operator==
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,
          FPCGPointArrayProperty<UE::Math::TVector<double>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  
  dVar7 = __real_3f1a36e2e0000000;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((((this->NumValues != param_1->NumValues) ||
       (iVar1 = (this->Values).ArrayNum, iVar1 != (param_1->Values).ArrayNum)) ||
      (dVar13 = (this->Value).field0_0x0._s_0.X - (param_1->Value).field0_0x0._s_0.X,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     ((dVar13 = (this->Value).field0_0x0._s_0.Y - (param_1->Value).field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
      (dVar13 = (this->Value).field0_0x0._s_0.Z - (param_1->Value).field0_0x0._s_0.Z,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    return false;
  }
  uVar12 = 0;
  if (0 < iVar1) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (param_1->Values).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar2 = (param_1->Values).AllocatorInstance.Data;
      uVar10 = 0;
      if ((int)uVar12 < (this->Values).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar3 = (this->Values).AllocatorInstance.Data;
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11) -
                                          *(double *)(pFVar2 + lVar11)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11) - *(double *)(pFVar2 + lVar11)
                                         ,0) & uVar5)) {
        return false;
      }
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11 + 8) -
                                          *(double *)(pFVar2 + lVar11 + 8)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11 + 8) -
                                         *(double *)(pFVar2 + lVar11 + 8),0) & uVar5)) {
        return false;
      }
      if (dVar7 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar3 + lVar11 + 0x10) -
                                          *(double *)(pFVar2 + lVar11 + 0x10)) >> 0x20) & uVar6,
                                   SUB84(*(double *)(pFVar3 + lVar11 + 0x10) -
                                         *(double *)(pFVar2 + lVar11 + 0x10),0) & uVar5)) {
        return false;
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar12 < (this->Values).ArrayNum);
  }
  return true;
}

// MoveRange @ 149f555a0

void __thiscall
FPCGPointArrayProperty<int>::MoveRange
          (FPCGPointArrayProperty<int> *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (((((param_2 < 0) || (iVar1 <= param_2)) || (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) ||
        ((iVar1 <= iVar5 || (param_1 < 0)))) ||
       ((iVar1 <= param_1 || ((iVar5 = param_3 + -1 + param_1, iVar5 < 0 || (iVar1 <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.IsValidIndex(MoveToIndex) && Values.IsValidIndex(MoveToIndex + NumElements - 1) && Values.IsValidIndex(RangeStartIndex) && Values.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0x98,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Values).AllocatorInstance.Data + (longlong)param_2 * 4,
            pFVar2 + (longlong)param_1 * 4,(longlong)param_3 << 2);
  }
  return;
}

// MoveRange @ 149f55730

void __thiscall
FPCGPointArrayProperty<float>::MoveRange
          (FPCGPointArrayProperty<float> *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (((((param_2 < 0) || (iVar1 <= param_2)) || (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) ||
        ((iVar1 <= iVar5 || (param_1 < 0)))) ||
       ((iVar1 <= param_1 || ((iVar5 = param_3 + -1 + param_1, iVar5 < 0 || (iVar1 <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.IsValidIndex(MoveToIndex) && Values.IsValidIndex(MoveToIndex + NumElements - 1) && Values.IsValidIndex(RangeStartIndex) && Values.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0x98,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Values).AllocatorInstance.Data + (longlong)param_2 * 4,
            pFVar2 + (longlong)param_1 * 4,(longlong)param_3 << 2);
  }
  return;
}

// MoveRange @ 149f558c0

void __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::MoveRange
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,int param_1,int param_2,
          int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (((((param_2 < 0) || (iVar1 <= param_2)) || (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) ||
        ((iVar1 <= iVar5 || (param_1 < 0)))) ||
       ((iVar1 <= param_1 || ((iVar5 = param_3 + -1 + param_1, iVar5 < 0 || (iVar1 <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.IsValidIndex(MoveToIndex) && Values.IsValidIndex(MoveToIndex + NumElements - 1) && Values.IsValidIndex(RangeStartIndex) && Values.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0x98,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Values).AllocatorInstance.Data + (longlong)param_2 * 0x60,
            pFVar2 + (longlong)param_1 * 0x60,(longlong)param_3 * 0x60);
  }
  return;
}

// MoveRange @ 149f55a60

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector4<double>_>::MoveRange
          (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this,int param_1,int param_2,
          int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (((((param_2 < 0) || (iVar1 <= param_2)) || (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) ||
        ((iVar1 <= iVar5 || (param_1 < 0)))) ||
       ((iVar1 <= param_1 || ((iVar5 = param_3 + -1 + param_1, iVar5 < 0 || (iVar1 <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.IsValidIndex(MoveToIndex) && Values.IsValidIndex(MoveToIndex + NumElements - 1) && Values.IsValidIndex(RangeStartIndex) && Values.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0x98,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Values).AllocatorInstance.Data + (longlong)param_2 * 0x20,
            pFVar2 + (longlong)param_1 * 0x20,(longlong)param_3 << 5);
  }
  return;
}

// MoveRange @ 149f55bf0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::MoveRange
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,int param_1,int param_2,
          int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (((((param_2 < 0) || (iVar1 <= param_2)) || (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) ||
        ((iVar1 <= iVar5 || (param_1 < 0)))) ||
       ((iVar1 <= param_1 || ((iVar5 = param_3 + -1 + param_1, iVar5 < 0 || (iVar1 <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.IsValidIndex(MoveToIndex) && Values.IsValidIndex(MoveToIndex + NumElements - 1) && Values.IsValidIndex(RangeStartIndex) && Values.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0x98,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Values).AllocatorInstance.Data + (longlong)param_2 * 0x18,
            pFVar2 + (longlong)param_1 * 0x18,(longlong)param_3 * 0x18);
  }
  return;
}

// MoveRange @ 149f55d90

void __thiscall
FPCGPointArrayProperty<__int64>::MoveRange
          (FPCGPointArrayProperty<__int64> *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (this->Values).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != this->NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 != 0) {
    if (((((param_2 < 0) || (iVar1 <= param_2)) || (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) ||
        ((iVar1 <= iVar5 || (param_1 < 0)))) ||
       ((iVar1 <= param_1 || ((iVar5 = param_3 + -1 + param_1, iVar5 < 0 || (iVar1 <= iVar5)))))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.IsValidIndex(MoveToIndex) && Values.IsValidIndex(MoveToIndex + NumElements - 1) && Values.IsValidIndex(RangeStartIndex) && Values.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0x98,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Values).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Values).AllocatorInstance.Data + (longlong)param_2 * 8,
            pFVar2 + (longlong)param_1 * 8,(longlong)param_3 << 3);
  }
  return;
}

// RemoveAt @ 149f5d3a0

void __thiscall FPCGPointArrayProperty<int>::RemoveAt(FPCGPointArrayProperty<int> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0x89,"Index >= 0 && Index < NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  if ((iVar6 != 0) && (iVar6 != *piVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar2 = &(this->Values).ArrayNum;
  if (*piVar2 == 0) {
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar5 = 0;
    if (param_1 < *piVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 4;
    iVar6 = *piVar2 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar6 << 2);
    }
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)this,*piVar2,&(this->Values).ArrayMax);
    this->NumValues = this->NumValues + -1;
  }
  return;
}

// RemoveAt @ 149f5d500

void __thiscall
FPCGPointArrayProperty<float>::RemoveAt(FPCGPointArrayProperty<float> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0x89,"Index >= 0 && Index < NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  if ((iVar6 != 0) && (iVar6 != *piVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar2 = &(this->Values).ArrayNum;
  if (*piVar2 == 0) {
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar5 = 0;
    if (param_1 < *piVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 4;
    iVar6 = *piVar2 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar6 << 2);
    }
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)this,*piVar2,&(this->Values).ArrayMax);
    this->NumValues = this->NumValues + -1;
  }
  return;
}

// RemoveAt @ 149f5d660

void __thiscall
FPCGPointArrayProperty<UE::Math::TTransform<double>_>::RemoveAt
          (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0x89,"Index >= 0 && Index < NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  if ((iVar6 != 0) && (iVar6 != *piVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar2 = &(this->Values).ArrayNum;
  if (*piVar2 == 0) {
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar5 = 0;
    if (param_1 < *piVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x60;
    iVar6 = *piVar2 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x60,(longlong)iVar6 * 0x60);
    }
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,(ForAnyElementType *)this,*piVar2,&(this->Values).ArrayMax);
    this->NumValues = this->NumValues + -1;
  }
  return;
}

// RemoveAt @ 149f5d7d0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector4<double>_>::RemoveAt
          (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0x89,"Index >= 0 && Index < NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  if ((iVar6 != 0) && (iVar6 != *piVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar2 = &(this->Values).ArrayNum;
  if (*piVar2 == 0) {
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar5 = 0;
    if (param_1 < *piVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x20;
    iVar6 = *piVar2 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x20,(longlong)iVar6 << 5);
    }
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,(ForAnyElementType *)this,*piVar2,&(this->Values).ArrayMax);
    this->NumValues = this->NumValues + -1;
  }
  return;
}

// RemoveAt @ 149f5d930

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::RemoveAt
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0x89,"Index >= 0 && Index < NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  if ((iVar6 != 0) && (iVar6 != *piVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar2 = &(this->Values).ArrayNum;
  if (*piVar2 == 0) {
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar5 = 0;
    if (param_1 < *piVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 0x18;
    iVar6 = *piVar2 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar6 * 0x18);
    }
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)this,*piVar2,&(this->Values).ArrayMax);
    this->NumValues = this->NumValues + -1;
  }
  return;
}

// RemoveAt @ 149f5daa0

void __thiscall
FPCGPointArrayProperty<__int64>::RemoveAt(FPCGPointArrayProperty<__int64> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0x89,"Index >= 0 && Index < NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  if ((iVar6 != 0) && (iVar6 != *piVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar2 = &(this->Values).ArrayNum;
  if (*piVar2 == 0) {
    *piVar1 = *piVar1 + -1;
  }
  else {
    uVar5 = 0;
    if (param_1 < *piVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    _Dst = (this->Values).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar6 = *piVar2 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
    }
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,*piVar2,&(this->Values).ArrayMax);
    this->NumValues = this->NumValues + -1;
  }
  return;
}

// Serialize @ 149f5fae0

void __thiscall
FPCGPointArrayProperty<float>::Serialize(FPCGPointArrayProperty<float> *this,FArchive *param_1)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  
  piVar1 = &this->NumValues;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &this->Value;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&this->Values);
  return;
}

// Serialize @ 149f5fba0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::Serialize
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &this->NumValues;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->Value);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Values);
  return;
}

// SetValue @ 149f62eb0

void __thiscall
FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
          (FPCGPointArrayProperty<UE::Math::TVector<double>_> *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = (this->Values).ArrayNum;
  uVar11 = 0;
  if (0 < iVar13) {
    lVar12 = 0;
    do {
      uVar5 = *(undefined4 *)&param_1->field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
      uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
      uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      uVar10 = 0;
      if ((int)uVar11 < iVar13) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Values).AllocatorInstance.Data;
      uVar11 = uVar11 + 1;
      pFVar1 = pFVar3 + lVar12;
      *(undefined4 *)pFVar1 = uVar5;
      *(undefined4 *)(pFVar1 + 4) = uVar6;
      *(undefined4 *)(pFVar1 + 8) = uVar7;
      *(undefined4 *)(pFVar1 + 0xc) = uVar8;
      *(double *)(pFVar3 + lVar12 + 0x10) = dVar2;
      lVar12 = lVar12 + 0x18;
      iVar13 = (this->Values).ArrayNum;
    } while ((int)uVar11 < iVar13);
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar2;
  (this->Value).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

