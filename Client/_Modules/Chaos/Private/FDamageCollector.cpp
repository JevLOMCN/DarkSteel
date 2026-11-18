// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Reset @ 14412b860

void __thiscall FDamageCollector::Reset(FDamageCollector *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &(this->DamageData).ArrayMax;
  piVar2 = &(this->DamageData).ArrayNum;
  *piVar2 = 0;
  if ((this->DamageData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  iVar6 = *piVar2;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,param_1 - iVar6,(ForAnyElementType *)this,piVar2,piVar1);
    DefaultConstructItems<FDamageCollector::FDamageData,int>
              ((this->DamageData).AllocatorInstance.Data + (longlong)iVar5 * 0xc,param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar7 = iVar6 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        _Dst = (this->DamageData).AllocatorInstance.Data + (longlong)param_1 * 0xc;
        iVar6 = (*piVar2 - uVar7) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0xc,(longlong)iVar6 * 0xc);
        }
        *piVar2 = *piVar2 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)this,*piVar2,piVar1);
      }
    }
  }
  return;
}

// SampleDamage @ 14412bae0

void __thiscall
FDamageCollector::SampleDamage(FDamageCollector *this,int param_1,float param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  longlong lVar5;
  float fVar6;
  
  if ((-1 < param_1) && (lVar5 = (longlong)param_1, param_1 < (this->DamageData).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->DamageData).AllocatorInstance.Data;
    FVar4 = pFVar1[lVar5 * 0xc + 8];
    fVar6 = *(float *)(pFVar1 + lVar5 * 0xc + 4);
    if (*(float *)(pFVar1 + lVar5 * 0xc + 4) <= param_2) {
      fVar6 = param_2;
    }
    *(float *)(pFVar1 + lVar5 * 0xc) = param_3;
    *(float *)(pFVar1 + lVar5 * 0xc + 4) = fVar6;
    if ((FVar4 != (FScriptContainerElement)0x0) || (param_3 < param_2)) {
      FVar4 = (FScriptContainerElement)0x1;
    }
    else {
      FVar4 = (FScriptContainerElement)0x0;
    }
    pFVar1[lVar5 * 0xc + 8] = FVar4;
  }
  return;
}

