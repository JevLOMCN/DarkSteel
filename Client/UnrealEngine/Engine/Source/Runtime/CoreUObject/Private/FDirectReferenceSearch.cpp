// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// MergeGraph @ 1421d4010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::FDirectReferenceSearch::MergeGraph
          (FDirectReferenceSearch *this,
          TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  longlong local_60;
  int iStack_58;
  undefined4 uStack_54;
  longlong local_50;
  int iStack_48;
  undefined4 uStack_44;
  
  plVar13 = *(longlong **)&this->field_0x8;
  local_res20 = *(uint *)&this->field_0x10;
  uVar8 = (ulonglong)(int)local_res20;
  plVar11 = plVar13 + 0xf;
  plVar10 = plVar13 + uVar8 * 0x11;
  while( true ) {
    if (*(int *)&this->field_0x10 != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (plVar13 == plVar10) break;
    if ((*plVar13 != 0) && (0 < (int)plVar11[-0xd] - *(int *)((longlong)plVar11 + -0x3c))) {
      iVar7 = *(int *)(*plVar13 + 0xc);
      if ((iVar7 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar7)) {
        Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar11 + -0xe),&local_70
                );
      lVar3 = plVar11[-3];
      TArray<int,TSizedDefaultAllocator<64>_>::Append<int,TSizedDefaultAllocator<32>_>
                ((TArray<int,TSizedDefaultAllocator<64>_> *)(plVar11 + -4),&local_70);
      local_60 = lVar3 * 4;
      iStack_58 = local_70.ArrayNum;
      if (iStack_58 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar12 = iVar7 - (int)plVar11[1];
      uVar9 = 0;
      if ((int)uVar12 < (int)*plVar11) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
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
      plVar1 = (longlong *)(plVar11[-1] + (longlong)(int)uVar12 * 0x10);
      *plVar1 = local_60;
      plVar1[1] = CONCAT44(uStack_54,iStack_58);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar11 + -0xe));
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
    iVar7 = (int)*plVar11;
    uVar9 = 0;
    lVar3 = plVar11[-4];
    if (0 < iVar7) {
      lVar14 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar9 < iVar7) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if (uVar12 == 0) {
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
        uVar12 = (int)plVar11[1] + uVar9;
        iStack_48 = *(int *)(plVar11[-1] + 8 + lVar14);
        local_50 = lVar3 + (*(longlong *)(plVar11[-1] + lVar14) >> 2) * 4;
        if (iStack_48 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar6 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
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
        uVar9 = uVar9 + 1;
        lVar14 = lVar14 + 0x10;
        pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10;
        *(longlong *)pFVar2 = local_50;
        *(longlong *)(pFVar2 + 8) = CONCAT44(uStack_44,iStack_48);
        iVar7 = (int)*plVar11;
      } while ((int)uVar9 < iVar7);
    }
    plVar13 = plVar13 + 0x11;
    plVar11 = plVar11 + 0x11;
    uVar8 = (ulonglong)local_res20;
  }
  return;
}

