// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// FTerrainRuleHelper @ 14ace9e30

FTerrainRuleHelper * __thiscall
`UPaperTerrainComponent::OnSplineEdited'::__l10::FTerrainRuleHelper::FTerrainRuleHelper
          (void *this,FPaperTerrainMaterialRule *param_1)

{
  int iVar1;
  UPaperSprite *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TBox2<double> *pTVar6;
  FTerrainRuleHelper *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  float local_d8 [2];
  longlong local_d0;
  TBox2<double> local_c8;
  TBox2<double> local_a0;
  TBox2<double> local_78;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  pFVar9 = (param_1->Body).AllocatorInstance.Data;
  iVar1 = (param_1->Body).ArrayNum;
  pFVar8 = pFVar9 + (longlong)iVar1 * 8;
  local_res10 = pFVar8;
  do {
    if ((param_1->Body).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPaperSprite>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
      pFVar8 = local_res10;
    }
    if (pFVar9 == pFVar8) {
      pUVar2 = (param_1->StartCap).field0_0x0.DebugPtr;
      if (pUVar2 != (UPaperSprite *)0x0) {
        pTVar6 = GetSpriteRenderDataBounds2D(&local_a0,&pUVar2->BakedRenderData);
        fVar10 = (float)((pTVar6->Max).field0_0x0._s_0.X - (pTVar6->Min).field0_0x0._s_0.X);
        if (0.0 < fVar10) {
          *(float *)this = fVar10;
        }
      }
      pUVar2 = (param_1->EndCap).field0_0x0.DebugPtr;
      if (pUVar2 != (UPaperSprite *)0x0) {
        pTVar6 = GetSpriteRenderDataBounds2D(&local_78,&pUVar2->BakedRenderData);
        fVar10 = (float)((pTVar6->Max).field0_0x0._s_0.X - (pTVar6->Min).field0_0x0._s_0.X);
        if (0.0 < fVar10) {
          *(float *)((longlong)this + 4) = fVar10;
        }
      }
      return this;
    }
    local_d0 = *(longlong *)pFVar9;
    if (local_d0 != 0) {
      pTVar6 = GetSpriteRenderDataBounds2D
                         (&local_c8,
                          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
                          (local_d0 + 0xa8));
      local_d8[0] = (float)((pTVar6->Max).field0_0x0._s_0.X - (pTVar6->Min).field0_0x0._s_0.X);
      pFVar8 = local_res10;
      if (0.0 < local_d8[0]) {
        if (((*(longlong **)((longlong)this + 8) <= &local_d0) &&
            (&local_d0 < *(longlong **)((longlong)this + 8) + *(int *)((longlong)this + 0x14))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FTerrainRuleHelper *)(*pcVar3)();
          return pFVar7;
        }
        iVar5 = *(int *)((longlong)this + 0x10);
        if (iVar5 == *(int *)((longlong)this + 0x14)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)((longlong)this + 8),
                             (int *)((longlong)this + 0x14));
        }
        *(int *)((longlong)this + 0x10) = iVar5 + 1;
        *(longlong *)(*(longlong *)((longlong)this + 8) + (longlong)iVar5 * 8) = local_d0;
        if (((*(float **)((longlong)this + 0x18) <= local_d8) &&
            (local_d8 < *(float **)((longlong)this + 0x18) + *(int *)((longlong)this + 0x24))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FTerrainRuleHelper *)(*pcVar3)();
          return pFVar7;
        }
        iVar5 = *(int *)((longlong)this + 0x20);
        if (iVar5 == *(int *)((longlong)this + 0x24)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)((longlong)this + 0x18),
                             (int *)((longlong)this + 0x24));
        }
        *(int *)((longlong)this + 0x20) = iVar5 + 1;
        *(float *)(*(longlong *)((longlong)this + 0x18) + (longlong)iVar5 * 4) = local_d8[0];
        pFVar8 = local_res10;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

