// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ConvertPairToFlatKnots @ 147a3a540

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::Spline::FKnot::ConvertPairToFlatKnots
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    uVar9 = 0;
    if (*(int *)(pFVar8 + 4) != 0) {
      do {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= pFVar8) && (pFVar8 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)
           ) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar9 = uVar9 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar8;
      } while (uVar9 < *(uint *)(pFVar8 + 4));
    }
    pFVar8 = pFVar8 + 8;
  }
  return __return_storage_ptr__;
}

