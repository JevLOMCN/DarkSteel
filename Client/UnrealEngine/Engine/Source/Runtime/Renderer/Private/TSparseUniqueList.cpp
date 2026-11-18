// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Add @ 144d520d0

void __thiscall
TSparseUniqueList<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Add
          (TSparseUniqueList<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,int param_1)

{
  schar *psVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  FNoopStruct local_res8;
  int local_res10 [6];
  ulonglong uVar8;
  
  psVar1 = (this->Set).Table.CurrentData.Distances;
  uVar7 = (this->Set).Table.NumSlotsMinusOne & param_1;
  uVar8 = (ulonglong)uVar7;
  cVar6 = '\0';
  if ((psVar1 != (schar *)0x0) && (-1 < psVar1[uVar8])) {
    do {
      if (param_1 == (this->Set).Table.CurrentData.Keys[uVar8]) {
        return;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      cVar6 = cVar6 + '\x01';
    } while (cVar6 <= psVar1[uVar8]);
  }
  local_res10[0] = param_1;
  Experimental::TSherwoodHashTable_Private::
  TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::Add
            (&(this->Set).Table,cVar6,(FData *)&this->Set,uVar7,param_1,param_1,local_res8);
  piVar2 = (this->Array).AllocatorInstance.Data;
  if (((piVar2 <= local_res10) && (local_res10 < piVar2 + (this->Array).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Array).ArrayNum;
  piVar2 = &(this->Array).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)this,piVar2);
  }
  (this->Array).ArrayNum = iVar5 + 1;
  (this->Array).AllocatorInstance.Data[iVar5] = local_res10[0];
  return;
}

