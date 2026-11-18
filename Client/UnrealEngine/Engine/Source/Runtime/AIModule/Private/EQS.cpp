// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// RemoveDuplicatesSorted @ 146f66490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::AI::EQS::Internal::RemoveDuplicatesSorted(TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  FIdentityFunctor local_res8 [8];
  
  if (1 < param_1->ArrayNum) {
    AlgoImpl::
    IntroSortInternal<AActor_*,int,FIdentityFunctor,TDereferenceWrapper<AActor_*,TLess<void>_>_>
              ((AActor **)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8[0],
               (TLess<void> *)local_res8);
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar10 = 1;
    iVar5 = param_1->ArrayNum;
    lVar8 = *(longlong *)(param_1->AllocatorInstance).Data;
    if (1 < iVar5) {
      lVar9 = 8;
      do {
        uVar3 = 0;
        if ((int)uVar10 < iVar5) {
          uVar3 = ~uVar10 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = param_1->ArrayNum;
        if (*(longlong *)((param_1->AllocatorInstance).Data + lVar9) == lVar8) {
          uVar7 = 1;
          lVar6 = lVar9;
          uVar3 = uVar10;
          while (uVar3 = uVar3 + 1, (int)uVar3 < iVar5) {
            lVar6 = lVar6 + 8;
            uVar4 = 0;
            if ((int)uVar3 < param_1->ArrayNum) {
              uVar4 = ~uVar3 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(longlong *)((param_1->AllocatorInstance).Data + lVar6) != lVar8) break;
            uVar7 = uVar7 + 1;
          }
          uVar3 = 0;
          if ((int)(uVar7 + uVar10) <= param_1->ArrayNum) {
            uVar3 = ~(uVar7 | uVar10) >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (uVar7 != 0) {
            _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 8;
            iVar5 = (param_1->ArrayNum - uVar7) - uVar10;
            if (iVar5 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar5 << 3);
            }
            param_1->ArrayNum = param_1->ArrayNum - uVar7;
          }
        }
        else {
          uVar3 = 0;
          if ((int)uVar10 < iVar5) {
            uVar3 = ~uVar10 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar10 = uVar10 + 1;
          lVar8 = *(longlong *)((param_1->AllocatorInstance).Data + lVar9);
          lVar9 = lVar9 + 8;
        }
        iVar5 = param_1->ArrayNum;
      } while ((int)uVar10 < iVar5);
    }
  }
  return;
}

