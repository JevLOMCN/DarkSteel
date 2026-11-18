// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_> @ 14c945f30

TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_> *
__thiscall
TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
           *this,TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  int *piVar8;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *pTVar9;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  ForAnyElementType *local_68;
  FScriptContainerElement *local_60;
  int *piStack_58;
  undefined8 local_50;
  FScriptContainerElement *local_48;
  int *piStack_40;
  int local_38;
  undefined4 uStack_34;
  
  piStack_58 = &(param_1->Array).ArrayNum;
  (this->Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Array).ArrayNum = 0;
  (this->Array).ArrayMax = 0;
  pFVar11 = (param_1->Array).AllocatorInstance.Data;
  local_38 = *piStack_58;
  local_50 = CONCAT44(uStack_34,local_38);
  pFVar1 = pFVar11 + (longlong)local_38 * 8;
  local_48 = pFVar11;
  piStack_40 = piStack_58;
  while( true ) {
    pFVar10 = (ForAnyElementType *)0x0;
    local_60 = pFVar11;
    if (*piStack_58 != (int)local_50) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) {
      return this;
    }
    puVar2 = *(undefined8 **)pFVar11;
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (ForAnyElementType *)0x0) {
      pFVar7->Data = (FScriptContainerElement *)0x0;
      iVar6 = *(int *)(puVar2 + 1);
      _Src = (void *)*puVar2;
      *(int *)&pFVar7[1].Data = iVar6;
      piVar8 = (int *)((longlong)&pFVar7[1].Data + 4);
      pFVar10 = pFVar7;
      if (iVar6 == 0) {
        *piVar8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar6,0,pFVar7,iVar6,piVar8);
        memcpy(pFVar7->Data,_Src,(longlong)iVar6 << 2);
      }
    }
    pFVar3 = (this->Array).AllocatorInstance.Data;
    local_68 = pFVar10;
    if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)(this->Array).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = (this->Array).ArrayNum;
    if (iVar6 == (this->Array).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,&(this->Array).ArrayMax);
    }
    pFVar11 = pFVar11 + 8;
    (this->Array).ArrayNum = iVar6 + 1;
    *(ForAnyElementType **)((this->Array).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_68;
  }
  pcVar4 = (code *)swi(3);
  pTVar9 = (TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            *)(*pcVar4)();
  return pTVar9;
}

