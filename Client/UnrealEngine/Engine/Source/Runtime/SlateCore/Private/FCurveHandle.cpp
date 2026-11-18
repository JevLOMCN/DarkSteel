// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FCurveHandle @ 14242cab0

FCurveHandle * __thiscall
FCurveHandle::FCurveHandle(FCurveHandle *this,FCurveSequence *param_1,int param_2)

{
  this->OwnerSequence = param_1;
  this->CurveIndex = param_2;
  return this;
}

// ApplyEasing @ 1424337d0

float __cdecl FCurveHandle::ApplyEasing(float param_1,ECurveEaseFunction param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  switch(param_2) {
  case Linear:
    return param_1;
  case QuadIn:
    return param_1 * param_1;
  case QuadOut:
    return (__real_40000000 - param_1) * param_1;
  case QuadInOut:
    break;
  case CubicIn:
    return param_1 * param_1 * param_1;
  case CubicOut:
    fVar3 = param_1 - __real_3f800000;
    return fVar3 * fVar3 * fVar3 + __real_3f800000;
  case CubicInOut:
    fVar3 = param_1 + param_1;
    if (__real_3f800000 <= fVar3) {
      fVar3 = fVar3 - __real_40000000;
      return fVar3 * fVar3 * fVar3 * __real_3f000000 + __real_3f800000;
    }
    return fVar3 * param_1 * fVar3;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Animation\\CurveHandle.cpp"
                       ,0x6f,L"Unrecognized curve easing function type [%i] for FCurveHandle");
    if (!bVar2) {
      return 0.0;
    }
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  if (__real_3f000000 <= param_1) {
    fVar3 = ((param_1 - __real_3f000000) + param_1) - __real_3f000000;
    return ((fVar3 - __real_40000000) * fVar3 - __real_3f800000) * __real_bf000000;
  }
  return (param_1 + param_1) * param_1;
}

// GetLerp @ 14243efa0

float __thiscall FCurveHandle::GetLerp(FCurveHandle *this)

{
  uint uVar1;
  FCurveSequence *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  if (this->OwnerSequence == (FCurveSequence *)0x0) {
    return 0.0;
  }
  fVar8 = FCurveSequence::GetSequenceTime(this->OwnerSequence);
  uVar1 = this->CurveIndex;
  lVar7 = (longlong)(int)uVar1;
  pFVar2 = this->OwnerSequence;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->Curves).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar8 = (float)(*pcVar4)();
    return fVar8;
  }
  pFVar3 = (pFVar2->Curves).AllocatorInstance.Data;
  fVar8 = (fVar8 - *(float *)(pFVar3 + lVar7 * 0xc + 4)) / *(float *)(pFVar3 + lVar7 * 0xc);
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  switch(pFVar3[lVar7 * 0xc + 8]) {
  case (FScriptContainerElement)0x0:
    return fVar8;
  case (FScriptContainerElement)0x1:
    return fVar8 * fVar8;
  case (FScriptContainerElement)0x2:
    return (__real_40000000 - fVar8) * fVar8;
  case (FScriptContainerElement)0x3:
    break;
  case (FScriptContainerElement)0x4:
    return fVar8 * fVar8 * fVar8;
  case (FScriptContainerElement)0x5:
    fVar8 = fVar8 - __real_3f800000;
    return fVar8 * fVar8 * fVar8 + __real_3f800000;
  case (FScriptContainerElement)0x6:
    fVar9 = fVar8 + fVar8;
    if (__real_3f800000 <= fVar9) {
      fVar9 = fVar9 - __real_40000000;
      return fVar9 * fVar9 * fVar9 * __real_3f000000 + __real_3f800000;
    }
    return fVar9 * fVar8 * fVar9;
  default:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Animation\\CurveHandle.cpp"
                       ,0x6f,L"Unrecognized curve easing function type [%i] for FCurveHandle");
    if (!bVar5) {
      return 0.0;
    }
    pcVar4 = (code *)swi(3);
    fVar8 = (float)(*pcVar4)();
    return fVar8;
  }
  if (__real_3f000000 <= fVar8) {
    fVar8 = ((fVar8 - __real_3f000000) + fVar8) - __real_3f000000;
    return ((fVar8 - __real_40000000) * fVar8 - __real_3f800000) * __real_bf000000;
  }
  return (fVar8 + fVar8) * fVar8;
}

