// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// QuantizeUnitsToBestFit<float> @ 14a7a33e0

FNumericUnit<float> __cdecl
FUnitConversion::QuantizeUnitsToBestFit<float>(float param_1,EUnit param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  FNumericUnit<float> FVar9;
  int iVar10;
  FNumericUnit<float> in_RCX;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement in_R8B;
  longlong lVar13;
  float in_XMM1_Da;
  double dVar14;
  TOptional<TArray<UnitConversion::FQuantizationInfo,TSizedDefaultAllocator<32>_>_const_*>
  local_68 [5];
  
  uVar11 = (ulonglong)(byte)in_R8B;
  UnitConversion::GetQuantizationBounds(local_68,(EUnit)in_R8B);
  if (local_68[0].bIsSet == false) {
    *(float *)in_RCX = in_XMM1_Da;
  }
  else {
    if (((local_68[0].TypedValue)->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      FVar9 = (FNumericUnit<float>)(*pcVar2)();
      return FVar9;
    }
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar4 = __real_3ff0000000000000;
    dVar3 = (double)in_XMM1_Da;
    FVar1 = *((local_68[0].TypedValue)->AllocatorInstance).Data;
    uVar12 = (uint)(byte)in_R8B - (uint)(byte)FVar1;
    if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3ff0000000000000) {
      if ((dVar3 != 0.0) && (uVar12 = uVar12 - 1, -1 < (int)uVar12)) {
        lVar13 = (longlong)(int)uVar12 * 8;
        do {
          uVar8 = 0;
          if ((int)uVar12 < (local_68[0].TypedValue)->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            FVar9 = (FNumericUnit<float>)(*pcVar2)();
            return FVar9;
          }
          uVar8 = 0;
          if ((int)uVar12 < (local_68[0].TypedValue)->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          dVar3 = dVar3 * (double)*(float *)(((local_68[0].TypedValue)->AllocatorInstance).Data +
                                            lVar13 + 4);
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            FVar9 = (FNumericUnit<float>)(*pcVar2)();
            return FVar9;
          }
          in_R8B = ((local_68[0].TypedValue)->AllocatorInstance).Data[lVar13];
          if (dVar4 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,
                                       SUB84(dVar3,0) & uVar5)) break;
          lVar13 = lVar13 + -8;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
    }
    else {
      iVar10 = (local_68[0].TypedValue)->ArrayNum;
      if ((int)uVar12 < iVar10) {
        lVar13 = (uVar11 - (byte)FVar1) * 8;
        do {
          in_R8B = SUB81(uVar11,0);
          uVar8 = 0;
          if ((int)uVar12 < iVar10) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            FVar9 = (FNumericUnit<float>)(*pcVar2)();
            return FVar9;
          }
          if (*(float *)(((local_68[0].TypedValue)->AllocatorInstance).Data + lVar13 + 4) == 0.0)
          break;
          uVar8 = 0;
          if ((int)uVar12 < (local_68[0].TypedValue)->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            FVar9 = (FNumericUnit<float>)(*pcVar2)();
            return FVar9;
          }
          dVar14 = dVar3 / (double)*(float *)(((local_68[0].TypedValue)->AllocatorInstance).Data +
                                             lVar13 + 4);
          if ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar6,SUB84(dVar14,0) & uVar5) <
              dVar4) break;
          uVar12 = uVar12 + 1;
          uVar8 = 0;
          if ((int)uVar12 < (local_68[0].TypedValue)->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            FVar9 = (FNumericUnit<float>)(*pcVar2)();
            return FVar9;
          }
          lVar13 = lVar13 + 8;
          iVar10 = (local_68[0].TypedValue)->ArrayNum;
          in_R8B = ((local_68[0].TypedValue)->AllocatorInstance).Data[lVar13];
          uVar11 = (ulonglong)(byte)in_R8B;
          dVar3 = dVar14;
        } while ((int)uVar12 < iVar10);
      }
    }
    *(float *)in_RCX = (float)dVar3;
  }
  *(FScriptContainerElement *)((longlong)in_RCX + 4) = in_R8B;
  return in_RCX;
}

