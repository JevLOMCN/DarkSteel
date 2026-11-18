// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Serialize @ 14a28e7f0

/* WARNING: Removing unreachable block (ram,0x00014a28e8d7) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FControlRigTestDataFrame::RestoreVariables'::__l2::FControlRigTestDataFrame_ErrorPipe::Serialize
          (void *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  ::FString::PrintfImpl(&local_18,L"Error convert to string: %s");
  if (((pFVar1->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar1->Data + (longlong)*(int *)((longlong)this + 0x1c) * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)((longlong)this + 0x18);
  if (iVar4 == *(int *)((longlong)this + 0x1c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)((longlong)this + 0x1c));
  }
  *(int *)((longlong)this + 0x18) = iVar4 + 1;
  pFVar5 = pFVar1->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

