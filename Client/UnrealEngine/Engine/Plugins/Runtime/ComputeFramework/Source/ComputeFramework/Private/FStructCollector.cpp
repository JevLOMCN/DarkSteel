// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// WalkMembers @ 1494db2f0

void __thiscall
`FShaderValueType::GetMemberStructTypes'::__l2::FStructCollector::WalkMembers
          (void *this,FShaderValueType *param_1,
          TArray<FShaderValueTypeHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [16];
  FName local_res20;
  
  pFVar10 = (param_1->StructElements).AllocatorInstance.Data;
  iVar1 = (param_1->StructElements).ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  pFVar9 = pFVar10 + 8;
  do {
    if ((param_1->StructElements).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar11) {
      return;
    }
    if (**(char **)pFVar9 == '\x04') {
      lVar2 = *(longlong *)(*(char **)pFVar9 + 4);
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
        lVar8 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar8 = *(longlong *)((longlong)this + 0x40);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)((longlong)this + 0x48) - 1U &
                                 (int)((ulonglong)lVar2 >> 0x20) + uVar6) * 4);
        if (iVar7 != -1) {
          do {
            if (*(longlong *)(*(longlong *)this + (longlong)iVar7 * 0x10) == lVar2)
            goto LAB_1494db469;
            iVar7 = *(int *)(*(longlong *)this + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      WalkMembers(this,*(FShaderValueType **)pFVar9,param_2);
      pFVar3 = (param_2->AllocatorInstance).Data;
      if ((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (longlong)param_2->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = *(longlong *)pFVar9;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (this,&local_res20,(bool *)(*(longlong *)pFVar9 + 4));
    }
LAB_1494db469:
    pFVar10 = pFVar10 + 0x10;
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

