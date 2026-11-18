// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// GetUsedMaterials @ 1496a93e0

void __thiscall
ViewAdjustedStaticMeshGizmoComponentLocals::FViewAdjustedStaticMeshSceneProxyDesc::GetUsedMaterials
          (FViewAdjustedStaticMeshSceneProxyDesc *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong local_18 [2];
  
  FStaticMeshSceneProxyDesc::GetUsedMaterials((FStaticMeshSceneProxyDesc *)this,param_1,false);
  lVar1 = *(longlong *)&this->field_0x8;
  if (lVar1 != 0) {
    pUVar6 = UViewAdjustedStaticMeshGizmoComponent::StaticClass();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar5 * 8)
         == &pUVar6->_padding_)) && (local_18[0] = *(longlong *)(lVar1 + 0x668), local_18[0] != 0))
    {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
    }
  }
  return;
}

