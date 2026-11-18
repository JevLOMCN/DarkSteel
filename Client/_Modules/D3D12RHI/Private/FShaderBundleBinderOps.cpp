// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// AddResourceTransition @ 145a9b940

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FShaderBundleBinderOps::AddResourceTransition
          (FShaderBundleBinderOps *this,FD3D12ShaderResourceView *param_1)

{
  int *piVar1;
  schar *psVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  FD3D12ShaderResourceView *local_res10;
  FNoopStruct local_res18;
  ulonglong uVar10;
  
  local_res10 = param_1;
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(byte *)(param_1->_padding_ + 0xab) & 1) != 0) {
    cVar8 = '\0';
    uVar6 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    psVar2 = (this->TransitionViewSet).Table.CurrentData.Distances;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar9 = (this->TransitionViewSet).Table.NumSlotsMinusOne & uVar6;
    uVar10 = (ulonglong)uVar9;
    if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar10])) {
      do {
        if (local_res10 ==
            (FD3D12ShaderResourceView *)(this->TransitionViewSet).Table.CurrentData.Keys[uVar10]) {
          return;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        cVar8 = cVar8 + '\x01';
      } while (cVar8 <= psVar2[uVar10]);
    }
    Experimental::TSherwoodHashTable_Private::
    TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
    ::Add((TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
           *)this,cVar8,(FData *)this,uVar9,(FD3D12View *)local_res10,uVar6,local_res18);
    pFVar3 = (this->TransitionSRVs).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar3 + (longlong)(this->TransitionSRVs).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->TransitionSRVs).ArrayNum;
    piVar1 = &(this->TransitionSRVs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->TransitionSRVs).AllocatorInstance,piVar1);
    }
    (this->TransitionSRVs).ArrayNum = iVar7 + 1;
    *(FD3D12ShaderResourceView **)
     ((this->TransitionSRVs).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_res10;
  }
  return;
}

// AddResourceTransition @ 145a9bad0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FShaderBundleBinderOps::AddResourceTransition
          (FShaderBundleBinderOps *this,FD3D12UnorderedAccessView *param_1)

{
  int *piVar1;
  schar *psVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  FD3D12UnorderedAccessView *local_res10;
  FNoopStruct local_res18;
  ulonglong uVar10;
  
  local_res10 = param_1;
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(byte *)(param_1->_padding_ + 0xab) & 1) != 0) {
    cVar8 = '\0';
    uVar6 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    psVar2 = (this->TransitionViewSet).Table.CurrentData.Distances;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar9 = (this->TransitionViewSet).Table.NumSlotsMinusOne & uVar6;
    uVar10 = (ulonglong)uVar9;
    if ((psVar2 != (schar *)0x0) && (-1 < psVar2[uVar10])) {
      do {
        if (local_res10 ==
            (FD3D12UnorderedAccessView *)(this->TransitionViewSet).Table.CurrentData.Keys[uVar10]) {
          return;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        cVar8 = cVar8 + '\x01';
      } while (cVar8 <= psVar2[uVar10]);
    }
    Experimental::TSherwoodHashTable_Private::
    TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
    ::Add((TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
           *)this,cVar8,(FData *)this,uVar9,(FD3D12View *)local_res10,uVar6,local_res18);
    pFVar3 = (this->TransitionUAVs).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar3 + (longlong)(this->TransitionUAVs).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->TransitionUAVs).ArrayNum;
    piVar1 = &(this->TransitionUAVs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->TransitionUAVs).AllocatorInstance,piVar1);
    }
    (this->TransitionUAVs).ArrayNum = iVar7 + 1;
    *(FD3D12UnorderedAccessView **)
     ((this->TransitionUAVs).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_res10;
  }
  return;
}

