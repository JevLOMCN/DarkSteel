// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// AddBlendable @ 14bc2cac0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FPostProcessSettings::AddBlendable
          (FPostProcessSettings *this,TScriptInterface<IBlendableInterface> *param_1,float param_2)

{
  int *piVar1;
  FWeightedBlendables *pFVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float local_48 [2];
  UObject *local_40;
  
  pUVar3 = *(UObject **)param_1;
  if (pUVar3 != (UObject *)0x0) {
    pFVar2 = &this->WeightedBlendables;
    lVar12 = (longlong)(this->WeightedBlendables).Array.ArrayNum;
    uVar11 = 0;
    if (0 < lVar12) {
      lVar10 = 0;
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->WeightedBlendables).Array.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar4 = *(UObject **)((pFVar2->Array).AllocatorInstance.Data + lVar13 + 8);
        if ((pUVar4 != (UObject *)0x0) && (pUVar4 == pUVar3)) {
          uVar8 = 0;
          if ((int)uVar11 < (this->WeightedBlendables).Array.ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(float *)((pFVar2->Array).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10) =
               param_2;
          return;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar10 < lVar12);
    }
    local_48[0] = param_2;
    local_40 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pFVar5 = (pFVar2->Array).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar5 + (longlong)(this->WeightedBlendables).Array.ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->WeightedBlendables).Array.ArrayNum;
    piVar1 = &(this->WeightedBlendables).Array.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)pFVar2,piVar1);
      (this->WeightedBlendables).Array.ArrayNum = iVar9;
    }
    (this->WeightedBlendables).Array.ArrayNum = iVar9 + 1;
    pFVar5 = (pFVar2->Array).AllocatorInstance.Data;
    *(float *)(pFVar5 + (longlong)iVar9 * 0x10) = local_48[0];
    *(UObject **)(pFVar5 + (longlong)iVar9 * 0x10 + 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
  }
  return;
}

// RemoveBlendable @ 14bc5a060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FPostProcessSettings::RemoveBlendable
          (FPostProcessSettings *this,TScriptInterface<IBlendableInterface> *param_1)

{
  int *piVar1;
  FWeightedBlendables *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  
  lVar3 = *(longlong *)param_1;
  if (lVar3 != 0) {
    uVar9 = 0;
    iVar12 = (this->WeightedBlendables).Array.ArrayNum;
    if (0 < iVar12) {
      lVar10 = 0;
      pFVar2 = &this->WeightedBlendables;
      do {
        uVar11 = ~uVar9 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar9 < (this->WeightedBlendables).Array.ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)((pFVar2->Array).AllocatorInstance.Data + lVar10 + 8);
        if ((lVar4 != 0) && (lVar4 == lVar3)) {
          uVar7 = 0;
          if ((int)uVar9 < (this->WeightedBlendables).Array.ArrayNum) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          _Dst = (pFVar2->Array).AllocatorInstance.Data + lVar10;
          iVar8 = (this->WeightedBlendables).Array.ArrayNum + ~uVar9;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + 0x10,(longlong)iVar8 << 4);
          }
          piVar1 = &(this->WeightedBlendables).Array.ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)pFVar2,(this->WeightedBlendables).Array.ArrayNum,
                     &(this->WeightedBlendables).Array.ArrayMax);
          uVar9 = uVar9 - 1;
          lVar10 = lVar10 + -0x10;
          iVar12 = iVar12 + -1;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < iVar12);
    }
  }
  return;
}

