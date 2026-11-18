// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 14758bca0

UScriptStruct * __cdecl FTimeStretchCurveInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurveInstance,(UObject *)pUVar1,
                         L"TimeStretchCurveInstance");
  }
  return Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.OuterSingleton;
}

// AreValidMarkerBookendsForPosition @ 1475b3ba0

bool __thiscall
FTimeStretchCurveInstance::AreValidMarkerBookendsForPosition
          (FTimeStretchCurveInstance *this,float param_1,float param_2,float param_3)

{
  if ((param_2 <= param_1) && (param_1 <= param_3)) {
    return true;
  }
  return false;
}

// BinarySearchMarkerIndex @ 1475b5590

int __thiscall
FTimeStretchCurveInstance::BinarySearchMarkerIndex
          (FTimeStretchCurveInstance *this,float param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if ((this->bHasValidData == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasValidData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                         ,0x1a4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar3 = param_2->ArrayNum;
  if ((iVar3 < 1) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7355087135977767335>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                         ,0x1a7,"NumMarkers > 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar6 = 0;
  iVar3 = iVar3 + -2;
  uVar4 = 0xffffffff;
  fVar9 = 0.0;
  fVar8 = 0.0;
  if (-1 < iVar3) {
    do {
      uVar4 = (int)(iVar3 + uVar6) / 2;
      uVar7 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar7 = uVar4 + 1;
      fVar9 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 4);
      uVar5 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      fVar8 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
      if (param_1 < fVar9) {
        if (param_1 <= fVar8) {
          iVar3 = uVar4 - 1;
          uVar7 = uVar6;
        }
      }
      else if (param_1 <= fVar8) {
        return uVar4;
      }
      uVar6 = uVar7;
    } while ((int)uVar6 <= iVar3);
    if (uVar4 != 0xffffffff) goto LAB_1475b574a;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7355087135977767370>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                     ,0x1ca,"MarkerIndex != INDEX_NONE");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
LAB_1475b574a:
  if (((param_1 < fVar9) || (fVar8 < param_1)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7355087135977767371>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                         ,0x1cb,
                         "AreValidMarkerBookendsForPosition(InPosition, P_CurrMarker, P_NextMarker)"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return uVar4;
}

// Clamp_P_Target @ 1475b98a0

float __thiscall
FTimeStretchCurveInstance::Clamp_P_Target(FTimeStretchCurveInstance *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  iVar1 = (this->P_Marker_Target).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar6 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data +
                    (longlong)(this->P_Marker_Target).ArrayNum * 4 + -4);
  if (param_1 <= fVar6) {
    fVar6 = param_1;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar6;
}

// Convert_P_Original_To_Target @ 1475bb610

float __thiscall
FTimeStretchCurveInstance::Convert_P_Original_To_Target
          (FTimeStretchCurveInstance *this,int param_1,float param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if ((this->bHasValidData == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasValidData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                         ,0x1d2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  uVar4 = 0;
  if (param_1 < (this->P_Marker_Original).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  uVar5 = param_1 + 1;
  fVar6 = *(float *)((this->P_Marker_Original).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar4 = 0;
  if ((int)uVar5 < (this->P_Marker_Original).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  fVar6 = (param_2 - fVar6) /
          (*(float *)((this->P_Marker_Original).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) -
          fVar6);
  if (0.0 <= fVar6) {
    if ((__real_3f800000 < fVar6) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7355087135977767387>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                           ,0x1db,"Alpha <= 1.f"), bVar3)) goto code_r0x0001475bb793;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7355087135977767386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                       ,0x1da,"Alpha >= 0.f");
    if (bVar3) {
code_r0x0001475bb793:
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->P_Marker_Target).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  fVar1 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar4 = 0;
  if ((int)uVar5 < (this->P_Marker_Target).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  return (*(float *)((this->P_Marker_Target).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) -
         fVar1) * fVar6 + fVar1;
}

// Convert_P_Target_To_Original @ 1475bb860

float __thiscall
FTimeStretchCurveInstance::Convert_P_Target_To_Original
          (FTimeStretchCurveInstance *this,int param_1,float param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if ((this->bHasValidData == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasValidData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                         ,0x1e6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  uVar4 = 0;
  if (param_1 < (this->P_Marker_Target).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  uVar5 = param_1 + 1;
  fVar6 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar4 = 0;
  if ((int)uVar5 < (this->P_Marker_Target).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  fVar6 = (param_2 - fVar6) /
          (*(float *)((this->P_Marker_Target).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) -
          fVar6);
  if (0.0 <= fVar6) {
    if ((__real_3f800000 < fVar6) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7355087135977767407>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                           ,0x1ef,"Alpha <= 1.f"), bVar3)) goto code_r0x0001475bb9e3;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7355087135977767406>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                       ,0x1ee,"Alpha >= 0.f");
    if (bVar3) {
code_r0x0001475bb9e3:
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->P_Marker_Original).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  fVar1 = *(float *)((this->P_Marker_Original).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar4 = 0;
  if ((int)uVar5 < (this->P_Marker_Original).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar6 = (float)(*pcVar2)();
    return fVar6;
  }
  return (*(float *)((this->P_Marker_Original).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) -
         fVar1) * fVar6 + fVar1;
}

// InitializeFromPlayRate @ 1475e0e90

void __thiscall
FTimeStretchCurveInstance::InitializeFromPlayRate
          (FTimeStretchCurveInstance *this,float param_1,FTimeStretchCurve *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong local_c8;
  longlong local_c0;
  
  this->bHasValidData = false;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar24 = __real_322bcc77;
  iVar10 = (param_2->Markers).ArrayNum;
  if ((0 < iVar10) &&
     (fVar23 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff),
     __real_322bcc77 < fVar23)) {
    uVar16 = 0;
    uVar18 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar18 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar22 = *(float *)((param_2->Markers).AllocatorInstance.Data +
                       (longlong)(param_2->Markers).ArrayNum * 0x10 + -0x10);
    this->T_Original = fVar22;
    fVar23 = fVar22 / fVar23;
    this->T_Target = fVar23;
    uVar18 = (param_2->Markers).ArrayNum;
    uVar13 = uVar18 - 1;
    uVar11 = ~uVar13 >> 0x1f;
    if (fVar22 <= fVar23) {
      uVar17 = 0;
      if ((int)uVar13 < (int)uVar18) {
        uVar17 = uVar11;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar23 = *(float *)((param_2->Markers).AllocatorInstance.Data +
                         (longlong)(int)uVar13 * 0x10 + 8);
      if (this->T_Target <= fVar23) {
        if (((float)((uint)(this->T_Original - fVar23) & uVar8) <= fVar24) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FMath::IsNearlyEqual(T_Original, T_TargetMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                               ,0xec,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar22 = (this->T_Target - this->T_Original) / (fVar23 - this->T_Original);
        fVar23 = __real_3f800000;
      }
      else {
        if (((float)((uint)fVar23 & uVar8) <= fVar24) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FMath::IsNearlyZero(T_TargetMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                               ,0xe5,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar22 = __real_3f800000;
        fVar23 = this->T_Target / fVar23;
      }
      local_c8 = 8;
      local_c0 = 0x20;
    }
    else {
      uVar17 = 0;
      if ((int)uVar13 < (int)uVar18) {
        uVar17 = uVar11;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar23 = *(float *)((param_2->Markers).AllocatorInstance.Data +
                         (longlong)(int)uVar13 * 0x10 + 4);
      if (fVar23 < this->T_Target || fVar23 == this->T_Target) {
        if (((float)((uint)(this->T_Original - fVar23) & uVar8) <= fVar24) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FMath::IsNearlyEqual(T_Original, T_TargetMin)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                               ,0xd8,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar22 = (this->T_Original - this->T_Target) / (this->T_Original - fVar23);
        fVar23 = __real_3f800000;
      }
      else {
        if (((float)((uint)fVar23 & uVar8) <= fVar24) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FMath::IsNearlyZero(T_TargetMin)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                               ,0xd1,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar22 = __real_3f800000;
        fVar23 = this->T_Target / fVar23;
      }
      local_c8 = 4;
      local_c0 = 0x1c;
    }
    fVar6 = __real_3f800000;
    lVar15 = (longlong)(int)uVar13;
    pTVar20 = &this->P_Marker_Target;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar1 = &(this->P_Marker_Target).ArrayMax;
    piVar2 = &(this->P_Marker_Target).ArrayNum;
    *piVar2 = 0;
    if ((this->P_Marker_Target).ArrayMax < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar18,&pTVar20->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&pTVar20->AllocatorInstance,piVar2,piVar1);
    if (0 < lVar15) {
      lVar14 = 0;
      lVar19 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar16 < (param_2->Markers).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar12 = (param_2->Markers).AllocatorInstance.Data + lVar19;
        fVar4 = *(float *)(pFVar12 + local_c8);
        fVar5 = *(float *)pFVar12;
        uVar17 = 0;
        if ((int)uVar16 < *piVar2) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 0x10;
        *(float *)((pTVar20->AllocatorInstance).Data + lVar14 * 4) =
             (fVar22 * fVar4 + (fVar6 - fVar22) * fVar5) * fVar23;
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar15);
    }
    fVar4 = this->T_Target;
    uVar16 = 0;
    if ((int)(uVar18 - 1) < *piVar2) {
      uVar16 = uVar11;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(float *)((pTVar20->AllocatorInstance).Data + lVar15 * 4) = fVar4;
    fVar22 = ((fVar6 - fVar22) * param_2->Sum_dT_i_by_C_i[0] +
             fVar22 * *(float *)((longlong)param_2->Sum_dT_i_by_C_i + local_c0 + -0x18)) * fVar23 *
             fVar23;
    if (((fVar24 < (float)((uint)fVar22 & uVar8)) &&
        (fVar22 = (this->T_Original - fVar23 * this->T_Target) / fVar22, __real_bf800000 < fVar22))
       && (fVar24 <= (fVar22 + fVar6) * fVar23)) {
      iVar10 = _finite((double)fVar22);
      if (((iVar10 == 0) || (iVar10 = _isnan((double)fVar22), iVar10 != 0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::IsFinite(S) && !FMath::IsNaN(S)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                             ,0x133,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = _finite((double)fVar23);
      if (((iVar10 == 0) || (iVar10 = _isnan((double)fVar23), iVar10 != 0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::IsFinite(U) && !FMath::IsNaN(U)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                             ,0x134,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar20 = &this->P_Marker_Original;
      piVar1 = &(this->P_Marker_Original).ArrayMax;
      (this->P_Marker_Original).ArrayNum = 0;
      if ((this->P_Marker_Original).ArrayMax < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar18,&pTVar20->AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar18,&pTVar20->AllocatorInstance,&(this->P_Marker_Original).ArrayNum,piVar1);
      fVar24 = 0.0;
      if (0 < lVar15) {
        lVar14 = 0;
        lVar19 = 0;
        uVar18 = 0;
        do {
          uVar17 = ~uVar18 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar18 < (this->P_Marker_Original).ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((pTVar20->AllocatorInstance).Data + lVar14 * 4) = fVar24;
          uVar16 = 0;
          if ((int)uVar18 < (this->P_Marker_Target).ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = uVar18 + 1;
          fVar4 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data + lVar14 * 4);
          uVar16 = 0;
          if ((int)uVar21 < (this->P_Marker_Target).ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar5 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data + lVar14 * 4 + 4);
          uVar16 = 0;
          if ((int)uVar18 < (param_2->Markers).ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar14 = lVar14 + 1;
          lVar3 = lVar19 + 0xc;
          lVar19 = lVar19 + 0x10;
          fVar24 = fVar24 + (fVar22 * *(float *)((param_2->Markers).AllocatorInstance.Data + lVar3)
                            + fVar6) * (fVar5 - fVar4) * fVar23;
          uVar18 = uVar21;
        } while (lVar14 < lVar15);
      }
      pTVar20 = &this->P_Marker_Original;
      fVar24 = this->T_Original;
      uVar18 = 0;
      if ((int)uVar13 < (this->P_Marker_Original).ArrayNum) {
        uVar18 = uVar11;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = 0;
      *(float *)((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = fVar24;
      fVar24 = __real_38d1b717;
      iVar10 = (this->P_Marker_Original).ArrayNum;
      if (0 < iVar10 + -1) {
        uVar16 = 1;
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar18 < (this->P_Marker_Target).ArrayNum) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar23 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data + lVar15);
          uVar11 = 0;
          if ((int)uVar16 < (this->P_Marker_Target).ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar22 = *(float *)((this->P_Marker_Target).AllocatorInstance.Data + lVar15 + 4);
          uVar11 = 0;
          if ((int)uVar18 < (this->P_Marker_Original).ArrayNum) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar6 = *(float *)((pTVar20->AllocatorInstance).Data + lVar15);
          uVar11 = 0;
          if ((int)uVar16 < (this->P_Marker_Original).ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (((float)((uint)(fVar22 - fVar23) & uVar8) <= fVar24) ||
             ((float)((uint)(*(float *)((pTVar20->AllocatorInstance).Data + lVar15 + 4) - fVar6) &
                     uVar8) <= fVar24)) {
            uVar11 = 0;
            if ((int)uVar16 < (this->P_Marker_Target).ArrayNum) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar12 = (this->P_Marker_Target).AllocatorInstance.Data + (longlong)(int)uVar16 * 4;
            iVar10 = (this->P_Marker_Target).ArrayNum + ~uVar16;
            if (iVar10 != 0) {
              memmove(pFVar12,pFVar12 + 4,(longlong)iVar10 << 2);
            }
            piVar1 = &(this->P_Marker_Target).ArrayNum;
            *piVar1 = *piVar1 + -1;
            uVar11 = 0;
            if ((int)uVar16 < (this->P_Marker_Original).ArrayNum) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar12 = (pTVar20->AllocatorInstance).Data + (longlong)(int)uVar16 * 4;
            iVar10 = (this->P_Marker_Original).ArrayNum + ~uVar16;
            if (iVar10 != 0) {
              memmove(pFVar12,pFVar12 + 4,(longlong)iVar10 << 2);
            }
            piVar1 = &(this->P_Marker_Original).ArrayNum;
            *piVar1 = *piVar1 + -1;
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 - 1;
            lVar15 = lVar15 + -4;
          }
          iVar10 = (this->P_Marker_Original).ArrayNum;
          uVar18 = uVar18 + 1;
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar18 < iVar10 + -1);
      }
      if (2 < iVar10) {
        this->bHasValidData = true;
      }
    }
  }
  return;
}

// IsValidMarkerForPosition @ 1475e2cf0

bool __thiscall
FTimeStretchCurveInstance::IsValidMarkerForPosition
          (FTimeStretchCurveInstance *this,int param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this->bHasValidData == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasValidData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                       ,0x193,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = 0;
  if (param_1 < param_3->ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  fVar2 = *(float *)((param_3->AllocatorInstance).Data + (longlong)param_1 * 4);
  uVar7 = param_1 + 1;
  uVar6 = 0;
  if ((int)uVar7 < param_3->ArrayNum) {
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
  if ((param_2 < fVar2) ||
     (pFVar1 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4,
     *(float *)pFVar1 <= param_2 && param_2 != *(float *)pFVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// UpdateMarkerIndexForPosition @ 147602b70

void __thiscall
FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
          (FTimeStretchCurveInstance *this,int *param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((this->bHasValidData == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasValidData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                         ,0x17c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *param_1;
  if ((-1 < (int)uVar7) && ((int)uVar7 <= param_3->ArrayNum + -2)) {
    if ((this->bHasValidData == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bHasValidData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\TimeStretchCurve.cpp"
                           ,0x193,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = 0;
    if ((int)uVar7 < param_3->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar2 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
    uVar7 = uVar7 + 1;
    uVar6 = 0;
    if ((int)uVar7 < param_3->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((fVar2 <= param_2) &&
       (pFVar1 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4,
       param_2 < *(float *)pFVar1 || param_2 == *(float *)pFVar1)) {
      return;
    }
  }
  iVar5 = BinarySearchMarkerIndex(this,param_2,param_3);
  *param_1 = iVar5;
  return;
}

