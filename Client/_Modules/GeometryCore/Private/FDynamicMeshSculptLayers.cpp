// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 15

// CheckValidity @ 143483590

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::CheckValidity
          (FDynamicMeshSculptLayers *this,FDynamicMeshAttributeSet *param_1,bool param_2,
          EValidityCheckFailMode param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar3 = (this->Layers).Array.ArrayNum;
  pFVar7 = (this->Layers).Array.AllocatorInstance.Data;
  bVar8 = (this->LayerWeights).ArrayNum == iVar3;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  do {
    if ((this->Layers).Array.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar1) {
      if (bVar8) {
        bVar8 = true;
      }
      else {
        if (param_3 == Check) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                             ,0xe7,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar5 = (*pcVar4)();
            return (bool)uVar5;
          }
        }
        else if (param_3 != Ensure) {
          return false;
        }
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2519995735064183017>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                           ,0xe9,"false");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
        bVar8 = false;
      }
      return bVar8;
    }
    plVar6 = (longlong *)param_1->_padding_;
    plVar2 = plVar6 + (int)param_1->_padding_;
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      if (*plVar6 == *(longlong *)pFVar7) {
        if (bVar8) {
          bVar8 = true;
          goto LAB_143483647;
        }
        break;
      }
    }
    bVar8 = false;
LAB_143483647:
    if ((param_1->ParentMesh == *(FDynamicMesh3 **)(*(longlong *)pFVar7 + 0x10)) && (bVar8)) {
      pFVar7 = pFVar7 + 8;
      bVar8 = true;
    }
    else {
      bVar8 = false;
      pFVar7 = pFVar7 + 8;
    }
  } while( true );
}

// CompactCopy @ 14348c6b0

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::CompactCopy
          (FDynamicMeshSculptLayers *this,FDynamicMeshAttributeSet *param_1,FCompactMaps *param_2,
          FDynamicMeshSculptLayers *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  int *piStack_60;
  undefined8 local_58;
  FScriptContainerElement *local_50;
  int *piStack_48;
  int local_40;
  undefined4 uStack_3c;
  
  Discard(this,param_1);
  pFVar8 = (param_3->Layers).Array.AllocatorInstance.Data;
  piStack_60 = &(param_3->Layers).Array.ArrayNum;
  local_40 = *piStack_60;
  pFVar2 = pFVar8 + (longlong)local_40 * 8;
  local_58 = CONCAT44(uStack_3c,local_40);
  local_50 = pFVar8;
  piStack_48 = piStack_60;
  while( true ) {
    local_68 = pFVar8;
    if (*piStack_60 != (int)local_58) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar2) break;
    uVar7 = (**(code **)(**(longlong **)pFVar8 + 0x18))
                      (*(longlong **)pFVar8,param_2,param_1->ParentMesh);
    pFVar3 = (this->Layers).Array.AllocatorInstance.Data;
    local_78 = uVar7;
    if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->Layers).Array.ArrayMax * 8)
       ) {
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
    iVar6 = (this->Layers).Array.ArrayNum;
    if (iVar6 == (this->Layers).Array.ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,&(this->Layers).Array.ArrayMax);
      (this->Layers).Array.ArrayNum = iVar6;
    }
    (this->Layers).Array.ArrayNum = iVar6 + 1;
    *(undefined8 *)((this->Layers).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_78;
    local_70 = uVar7;
    if (((undefined8 *)param_1->_padding_ <= &local_70) &&
       (&local_70 < (undefined8 *)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
    {
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
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    pFVar8 = pFVar8 + 8;
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 *)(param_1->_padding_ + (longlong)iVar6 * 8) = local_70;
  }
  TArray<double,TSizedDefaultAllocator<32>_>::operator=(&this->LayerWeights,&param_3->LayerWeights);
  this->ActiveLayer = param_3->ActiveLayer;
  return;
}

// Copy @ 14349a650

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::Copy
          (FDynamicMeshSculptLayers *this,FDynamicMeshAttributeSet *param_1,
          FDynamicMeshSculptLayers *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int *piStack_50;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  int *piStack_38;
  int local_30;
  undefined4 uStack_2c;
  
  Discard(this,param_1);
  pFVar8 = (param_2->Layers).Array.AllocatorInstance.Data;
  piStack_50 = &(param_2->Layers).Array.ArrayNum;
  local_30 = *piStack_50;
  pFVar2 = pFVar8 + (longlong)local_30 * 8;
  local_48 = CONCAT44(uStack_2c,local_30);
  local_40 = pFVar8;
  piStack_38 = piStack_50;
  while( true ) {
    local_58 = pFVar8;
    if (*piStack_50 != (int)local_48) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar2) break;
    uVar7 = (**(code **)(**(longlong **)pFVar8 + 8))(*(longlong **)pFVar8,param_1->ParentMesh);
    pFVar3 = (this->Layers).Array.AllocatorInstance.Data;
    local_68 = uVar7;
    if ((pFVar3 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)(this->Layers).Array.ArrayMax * 8)
       ) {
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
    iVar6 = (this->Layers).Array.ArrayNum;
    if (iVar6 == (this->Layers).Array.ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,&(this->Layers).Array.ArrayMax);
      (this->Layers).Array.ArrayNum = iVar6;
    }
    (this->Layers).Array.ArrayNum = iVar6 + 1;
    *(undefined8 *)((this->Layers).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_68;
    local_60 = uVar7;
    if (((undefined8 *)param_1->_padding_ <= &local_60) &&
       (&local_60 < (undefined8 *)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
    {
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
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    pFVar8 = pFVar8 + 8;
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 *)(param_1->_padding_ + (longlong)iVar6 * 8) = local_60;
  }
  TArray<double,TSizedDefaultAllocator<32>_>::operator=(&this->LayerWeights,&param_2->LayerWeights);
  this->ActiveLayer = param_2->ActiveLayer;
  return;
}

// CopyThroughMapping @ 14349c320

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::CopyThroughMapping
          (FDynamicMeshSculptLayers *this,FDynamicMeshSculptLayers *param_1,
          FMeshIndexMappings *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (param_1->Layers).Array.ArrayNum;
  uVar6 = 0;
  if ((this->Layers).Array.ArrayNum < iVar7) {
    iVar7 = (this->Layers).Array.ArrayNum;
  }
  if (0 < iVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Layers).Array.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->Layers).Array.AllocatorInstance.Data + lVar5 * 8);
      pcVar2 = *(code **)(*plVar1 + 0x30);
      uVar4 = 0;
      if ((int)uVar6 < (param_1->Layers).Array.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(plVar1,*(undefined8 *)((param_1->Layers).Array.AllocatorInstance.Data + lVar5 * 8),
                param_2);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar7);
  }
  return;
}

// Discard @ 1434b1020

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::Discard
          (FDynamicMeshSculptLayers *this,FDynamicMeshAttributeSet *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  longlong local_88;
  FScriptContainerElement *local_80;
  int *piStack_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  int *piStack_60;
  int local_58;
  undefined4 uStack_54;
  
  if ((param_1 == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                         ,0x8b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = (this->Layers).Array.AllocatorInstance.Data;
  piStack_78 = &(this->Layers).Array.ArrayNum;
  local_58 = *piStack_78;
  pFVar7 = pFVar12 + (longlong)local_58 * 8;
  local_70 = CONCAT44(uStack_54,local_58);
  local_res20 = pFVar7;
  local_68 = pFVar12;
  piStack_60 = piStack_78;
  do {
    local_80 = pFVar12;
    if (*piStack_78 != (int)local_70) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pFVar12 == pFVar7) {
      pFVar7 = (this->Layers).Array.AllocatorInstance.Data;
      for (iVar10 = (this->Layers).Array.ArrayNum; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar2 = *(undefined8 **)pFVar7;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        pFVar7 = pFVar7 + 8;
      }
      iVar10 = (this->Layers).Array.ArrayMax;
      (this->Layers).Array.ArrayNum = 0;
      if (iVar10 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,&(this->Layers).Array.ArrayMax);
      }
      (this->LayerWeights).ArrayNum = 0;
      if ((this->LayerWeights).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->LayerWeights).AllocatorInstance,0,&(this->LayerWeights).ArrayMax);
      }
      this->ActiveLayer = -1;
      return;
    }
    local_88 = *(longlong *)pFVar12;
    if ((((longlong *)param_1->_padding_ <= &local_88) &&
        (&local_88 < (longlong *)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (int)param_1->_padding_;
    if (iVar10 != 0) {
      plVar1 = (longlong *)param_1->_padding_;
      iVar11 = 0;
      lVar6 = 0;
      bVar4 = *plVar1 != local_88;
      lVar5 = local_88;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar6 = lVar6 + 1;
          iVar9 = iVar9 + 1;
          if (iVar10 <= lVar6) break;
        } while (bVar4 == (plVar1[lVar6] != lVar5));
        if (bVar4 != false) {
          if (iVar11 != iVar8) {
            memmove(plVar1 + iVar11,plVar1 + iVar8,(longlong)(iVar9 - iVar8) << 3);
            lVar5 = local_88;
          }
          iVar11 = iVar11 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar6 < iVar10);
      *(int *)&param_1->_padding_ = iVar11;
      pFVar7 = local_res20;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// DiscardSculptLayer @ 1434b1300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::DiscardSculptLayer
          (FDynamicMeshSculptLayers *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  
  if ((-1 < param_1) && (param_1 < (this->Layers).Array.ArrayNum)) {
    UpdateLayersFromMesh(this);
    if ((this->Layers).Array.ArrayNum <= param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x101,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    puVar2 = *(undefined8 **)((this->Layers).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    TArray<void_*,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<void_*,TSizedDefaultAllocator<32>_> *)this,param_1,Default);
    uVar6 = 0;
    if (param_1 < (this->LayerWeights).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar7 = (this->LayerWeights).ArrayNum + ~param_1;
    _Dst = (this->LayerWeights).AllocatorInstance.Data + (longlong)param_1 * 8;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->LayerWeights).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->LayerWeights).AllocatorInstance,(this->LayerWeights).ArrayNum,
               &(this->LayerWeights).ArrayMax);
    UpdateMeshFromLayers(this);
    ValidateActiveLayer(this);
    return true;
  }
  return false;
}

// Enable @ 1434b2130

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::Enable
          (FDynamicMeshSculptLayers *this,FDynamicMeshAttributeSet *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this_00;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *local_88;
  undefined8 local_80 [3];
  undefined8 local_68;
  
  if ((param_1 == (FDynamicMeshAttributeSet *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                         ,0x6b,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar3 = (this->Layers).Array.ArrayNum;
  uVar13 = 1;
  if (1 < param_2) {
    uVar13 = param_2;
  }
  if (iVar3 < (int)uVar13) {
    pFVar4 = param_1->ParentMesh;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &(this->Layers).Array.ArrayMax;
    if (*piVar1 < (int)uVar13) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,(ForAnyElementType *)this,iVar3,piVar1);
    }
    piVar15 = &(this->Layers).Array.ArrayNum;
    piVar1 = &(this->LayerWeights).ArrayMax;
    if ((this->LayerWeights).ArrayMax < (int)uVar13) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&(this->LayerWeights).AllocatorInstance,(this->LayerWeights).ArrayNum,
                 piVar1);
    }
    uVar8 = __real_3ff0000000000000;
    iVar10 = (this->Layers).Array.ArrayNum;
    while (iVar10 < (int)uVar13) {
      this_00 = ::operator_new(0x30);
      if (this_00 == (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
        this_00 = (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0;
      }
      else {
        this_00->Parent = pFVar4;
        (this_00->AttribValues).CurBlock = 0;
        this_00->_padding_ =
             (longlong)
             &___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        this_00->_padding_ = 0;
        (this_00->AttribValues).CurBlockUsed = 0;
        (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->AttribValues).Blocks.ArrayNum = 0;
        (this_00->AttribValues).Blocks.ArrayMax = 0;
        TDynamicVector<double,512>::AddAllocatedBlock(&this_00->AttribValues);
        TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Initialize(this_00,0.0);
      }
      pFVar5 = (this->Layers).Array.AllocatorInstance.Data;
      local_88 = this_00;
      if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar5 + (longlong)(this->Layers).Array.ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = *piVar15;
      if (iVar10 == (this->Layers).Array.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,&(this->Layers).Array.ArrayMax);
        *piVar15 = iVar10;
      }
      *piVar15 = iVar10 + 1;
      *(TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> **)
       ((this->Layers).Array.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_88;
      TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
                ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)param_1,
                 (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00);
      pFVar5 = (this->LayerWeights).AllocatorInstance.Data;
      local_80[0] = uVar8;
      if (((pFVar5 <= (FScriptContainerElement *)local_80) &&
          ((FScriptContainerElement *)local_80 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->LayerWeights).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->LayerWeights).AllocatorInstance,piVar1);
        (this->LayerWeights).ArrayNum = iVar10;
      }
      (this->LayerWeights).ArrayNum = iVar10 + 1;
      *(undefined8 *)((this->LayerWeights).AllocatorInstance.Data + (longlong)iVar10 * 8) =
           local_80[0];
      iVar10 = *piVar15;
    }
    if (iVar3 == 0) {
      this->ActiveLayer = 0;
      uVar14 = (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed +
               (pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200;
      uVar13 = 0;
      if ((uVar14 != 0) &&
         (pFVar5 = (pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
         0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
        uVar12 = 1;
        uVar13 = 1;
        if (1 < (int)uVar14) {
          do {
            lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar12 >> 9) * 8);
            if ((*(short *)(lVar6 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
               (uVar13 = uVar12, *(short *)(lVar6 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
            uVar12 = uVar12 + 1;
            uVar13 = uVar12;
          } while ((int)uVar12 < (int)uVar14);
        }
      }
joined_r0x0001434b2497:
      if (uVar13 != uVar14) {
        while( true ) {
          if (((this->Layers).Array.ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar11 = uVar13 & 0x1ff;
          lVar6 = *(longlong *)
                   ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8)
          ;
          uVar12 = uVar13 * 3;
          uVar13 = uVar13 + 1;
          puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar11 * 0x18);
          uVar8 = puVar2[1];
          local_68 = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar11 * 0x18);
          lVar6 = *(longlong *)(this->Layers).Array.AllocatorInstance.Data;
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x20) + (ulonglong)(uVar12 >> 9) * 8) +
           (ulonglong)(uVar12 & 0x1ff) * 8) = *puVar2;
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x20) + (ulonglong)(uVar12 + 1 >> 9) * 8) +
           (ulonglong)(uVar12 + 1 & 0x1ff) * 8) = uVar8;
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x20) + (ulonglong)(uVar12 + 2 >> 9) * 8) +
           (ulonglong)(uVar12 + 2 & 0x1ff) * 8) = local_68;
          if ((int)uVar14 <= (int)uVar13) break;
          while( true ) {
            lVar6 = *(longlong *)
                     ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar13 >> 9) * 8);
            if ((*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
            uVar13 = uVar13 + 1;
            if ((int)uVar14 <= (int)uVar13) goto joined_r0x0001434b2497;
          }
        }
        goto joined_r0x0001434b2497;
      }
    }
  }
  return;
}

// EnableMatching @ 1434b2a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::EnableMatching
          (FDynamicMeshSculptLayers *this,FDynamicMeshAttributeSet *param_1,
          FDynamicMeshSculptLayers *param_2,bool param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  int *piVar10;
  uint uVar11;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *local_68;
  int *local_60;
  FDynamicMesh3 *local_58;
  
  if ((param_3) || ((param_4 && ((param_2->Layers).Array.ArrayNum == 0)))) {
    Discard(this,param_1);
  }
  uVar6 = (param_2->Layers).Array.ArrayNum;
  piVar10 = &(param_2->Layers).Array.ArrayNum;
  local_60 = piVar10;
  if (uVar6 != 0) {
    local_58 = param_1->ParentMesh;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->Layers).Array.ArrayMax;
    if (*piVar1 < (int)uVar6) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar6,(ForAnyElementType *)this,(this->Layers).Array.ArrayNum,piVar1);
    }
    uVar6 = *piVar10;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar10 = &(this->LayerWeights).ArrayMax;
    if (*piVar10 < (int)uVar6) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar6,&(this->LayerWeights).AllocatorInstance,(this->LayerWeights).ArrayNum,
                 piVar10);
      local_60 = &(param_2->Layers).Array.ArrayNum;
    }
    piVar10 = &(this->Layers).Array.ArrayMax;
    uVar6 = (param_2->Layers).Array.ArrayNum;
    iVar8 = (this->Layers).Array.ArrayNum;
    if (iVar8 < (int)uVar6) {
      do {
        this_00 = ::operator_new(0x30);
        pTVar9 = (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0;
        if (this_00 != (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
          this_00->_padding_ = 0;
          this_00->_padding_ =
               (longlong)
               &___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
          this_00->Parent = local_58;
          (this_00->AttribValues).CurBlock = 0;
          (this_00->AttribValues).CurBlockUsed = 0;
          (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->AttribValues).Blocks.ArrayNum = 0;
          (this_00->AttribValues).Blocks.ArrayMax = 0;
          TDynamicVector<double,512>::AddAllocatedBlock(&this_00->AttribValues);
          TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Initialize(this_00,0.0);
          pTVar9 = this_00;
        }
        pFVar2 = (this->Layers).Array.AllocatorInstance.Data;
        local_68 = pTVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)*piVar10 * 8)) &&
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
        uVar6 = (this->Layers).Array.ArrayNum;
        if (uVar6 == *piVar10) {
          uVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar10);
          (this->Layers).Array.ArrayNum = uVar6;
        }
        pFVar2 = (this->Layers).Array.AllocatorInstance.Data;
        (this->Layers).Array.ArrayNum = uVar6 + 1;
        *(TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> **)
         (pFVar2 + (longlong)(int)uVar6 * 8) = local_68;
        TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::RegisterExternalAttribute
                  ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)param_1,
                   (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar9);
        uVar7 = 0;
        if ((int)uVar6 < (param_2->LayerWeights).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->LayerWeights).AllocatorInstance.Data;
        pFVar2 = (param_2->LayerWeights).AllocatorInstance.Data + (longlong)(int)uVar6 * 8;
        if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)(this->LayerWeights).ArrayMax * 8))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->LayerWeights).ArrayNum;
        if (iVar8 == (this->LayerWeights).ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->LayerWeights).AllocatorInstance,
                             &(this->LayerWeights).ArrayMax);
          (this->LayerWeights).ArrayNum = iVar8;
        }
        (this->LayerWeights).ArrayNum = iVar8 + 1;
        *(undefined8 *)((this->LayerWeights).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar2;
        iVar8 = (this->Layers).Array.ArrayNum;
        uVar6 = *local_60;
      } while (iVar8 < (int)uVar6);
    }
    if ((param_4) && ((int)uVar6 < iVar8)) {
      uVar11 = iVar8 - uVar6;
      TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->Layers,uVar6,uVar11,Default);
      uVar7 = 0;
      if (iVar8 <= (this->LayerWeights).ArrayNum) {
        uVar7 = ~(uVar6 | uVar11) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        pFVar2 = (this->LayerWeights).AllocatorInstance.Data + (longlong)(int)uVar6 * 8;
        iVar8 = ((this->LayerWeights).ArrayNum - uVar6) - uVar11;
        if (iVar8 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 8,(longlong)iVar8 << 3);
        }
        piVar10 = &(this->LayerWeights).ArrayNum;
        *piVar10 = *piVar10 - uVar11;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->LayerWeights).AllocatorInstance,(this->LayerWeights).ArrayNum,
                   &(this->LayerWeights).ArrayMax);
      }
    }
  }
  ValidateActiveLayer(this);
  return;
}

// MergeSculptLayers @ 1434f9db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::MergeSculptLayers
          (FDynamicMeshSculptLayers *this,int param_1,int param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  uint local_res8;
  
  dVar12 = __real_3ff0000000000000;
  uVar27 = (ulonglong)param_1;
  if ((((param_1 < 0) || (iVar16 = (this->Layers).Array.ArrayNum, iVar16 <= param_1)) ||
      (param_2 < 0)) || ((iVar16 <= param_2 || (param_2 <= param_1)))) {
LAB_1434f9ea5:
    bVar13 = false;
  }
  else {
    dVar29 = __real_3ff0000000000000;
    if (param_3) {
      uVar20 = 0;
      if (param_1 < (this->LayerWeights).ArrayNum) {
        uVar20 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      dVar29 = *(double *)((this->LayerWeights).AllocatorInstance.Data + uVar27 * 8);
      if (dVar29 == 0.0) goto LAB_1434f9ea5;
    }
    dVar29 = dVar12 / dVar29;
    UpdateLayersFromMesh(this);
    uVar19 = (uint)~param_1 >> 0x1f;
    uVar20 = 0;
    if (param_1 < (this->Layers).Array.ArrayNum) {
      uVar20 = uVar19;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    uVar22 = 0;
    local_res8 = 0;
    lVar6 = *(longlong *)
             (*(longlong *)((this->Layers).Array.AllocatorInstance.Data + uVar27 * 8) + 0x10);
    iVar16 = *(int *)(lVar6 + 0x24);
    iVar24 = *(int *)(lVar6 + 0x20) * 0x200 + iVar16;
    if ((iVar24 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x28) - 1U))) {
      uVar22 = 1;
      local_res8 = 1;
      if (1 < iVar24) {
        do {
          uVar17 = (ulonglong)((uint)uVar22 & 0x1ff);
          lVar28 = (*(undefined8 **)(lVar6 + 0x28))[uVar22 >> 9];
          if ((*(short *)(lVar28 + uVar17 * 2) != 0) && (*(short *)(lVar28 + uVar17 * 2) != -1))
          break;
          uVar20 = (uint)uVar22 + 1;
          uVar22 = (ulonglong)uVar20;
        } while ((int)uVar20 < iVar24);
        local_res8 = (uint)uVar22;
      }
    }
    iVar5 = *(int *)(lVar6 + 0x20);
    iVar21 = (int)uVar22;
    uVar17 = uVar27;
    while (iVar21 != iVar5 * 0x200 + iVar16) {
      while( true ) {
        uVar23 = param_1 + 1;
        dVar9 = 0.0;
        dVar10 = 0.0;
        dVar11 = 0.0;
        iVar21 = (int)uVar17;
        uVar20 = (uint)uVar22;
        dVar2 = 0.0;
        dVar3 = 0.0;
        dVar4 = 0.0;
        if ((int)uVar23 <= param_2) {
          uVar15 = (uint)uVar22 * 3;
          lVar28 = uVar27 * 8;
          do {
            lVar28 = lVar28 + 8;
            uVar20 = 0;
            if ((int)uVar23 < (this->Layers).Array.ArrayNum) {
              uVar20 = ~uVar23 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            lVar7 = *(longlong *)
                     (*(longlong *)((this->Layers).Array.AllocatorInstance.Data + lVar28) + 0x20);
            dVar2 = *(double *)
                     (*(longlong *)(lVar7 + (ulonglong)(uVar15 >> 9) * 8) +
                     (ulonglong)(uVar15 & 0x1ff) * 8);
            dVar3 = *(double *)
                     (*(longlong *)((ulonglong)(uVar15 + 1 >> 9) * 8 + lVar7) +
                     (ulonglong)(uVar15 + 1 & 0x1ff) * 8);
            dVar4 = *(double *)
                     ((ulonglong)(uVar15 + 2 & 0x1ff) * 8 +
                     *(longlong *)((ulonglong)(uVar15 + 2 >> 9) * 8 + lVar7));
            dVar30 = dVar12;
            if (param_3) {
              uVar20 = 0;
              if ((int)uVar23 < (this->LayerWeights).ArrayNum) {
                uVar20 = ~uVar23 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              dVar30 = *(double *)((this->LayerWeights).AllocatorInstance.Data + lVar28);
            }
            uVar23 = uVar23 + 1;
            dVar9 = dVar9 + dVar2 * dVar30;
            dVar10 = dVar10 + dVar3 * dVar30;
            dVar11 = dVar11 + dVar4 * dVar30;
            iVar21 = param_1;
            uVar20 = local_res8;
            dVar2 = dVar9;
            dVar3 = dVar10;
            dVar4 = dVar11;
          } while ((int)uVar23 <= param_2);
        }
        uVar23 = 0;
        if (iVar21 < (this->Layers).Array.ArrayNum) {
          uVar23 = uVar19;
        }
        if ((uVar23 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        uVar23 = uVar20 * 3;
        uVar17 = (ulonglong)(uVar23 + 2 & 0x1ff);
        uVar26 = (ulonglong)(uVar23 + 2 >> 9);
        uVar18 = (ulonglong)(uVar23 + 1 & 0x1ff);
        uVar25 = (ulonglong)(uVar23 + 1 >> 9);
        lVar28 = *(longlong *)
                  (*(longlong *)((this->Layers).Array.AllocatorInstance.Data + uVar27 * 8) + 0x20);
        dVar9 = *(double *)
                 (*(longlong *)(lVar28 + (ulonglong)(uVar23 >> 9) * 8) +
                 (ulonglong)(uVar23 & 0x1ff) * 8);
        dVar10 = *(double *)(*(longlong *)(lVar28 + uVar25 * 8) + uVar18 * 8);
        dVar11 = *(double *)(*(longlong *)(lVar28 + uVar26 * 8) + uVar17 * 8);
        uVar15 = 0;
        if (param_1 < (this->Layers).Array.ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        local_res8 = uVar20 + 1;
        uVar22 = (ulonglong)local_res8;
        lVar28 = *(longlong *)((this->Layers).Array.AllocatorInstance.Data + uVar27 * 8);
        *(double *)
         (*(longlong *)(*(longlong *)(lVar28 + 0x20) + (ulonglong)(uVar23 >> 9) * 8) +
         (ulonglong)(uVar23 & 0x1ff) * 8) = dVar2 * dVar29 + dVar9;
        *(double *)(*(longlong *)(*(longlong *)(lVar28 + 0x20) + uVar25 * 8) + uVar18 * 8) =
             dVar3 * dVar29 + dVar10;
        *(double *)(*(longlong *)(*(longlong *)(lVar28 + 0x20) + uVar26 * 8) + uVar17 * 8) =
             dVar4 * dVar29 + dVar11;
        if (iVar24 <= (int)local_res8) break;
        while( true ) {
          uVar18 = (ulonglong)((uint)uVar22 & 0x1ff);
          lVar28 = *(longlong *)(*(longlong *)(lVar6 + 0x28) + (uVar22 >> 9) * 8);
          if ((*(short *)(lVar28 + uVar18 * 2) != 0) &&
             (uVar17 = (ulonglong)(uint)param_1, *(short *)(lVar28 + uVar18 * 2) != -1)) break;
          local_res8 = (uint)uVar22 + 1;
          uVar22 = (ulonglong)local_res8;
          if (iVar24 <= (int)local_res8) goto LAB_1434fa3a7;
        }
      }
LAB_1434fa3a7:
      uVar17 = (ulonglong)(uint)param_1;
      iVar21 = (int)uVar22;
    }
    uVar19 = param_1 + 1;
    uVar23 = param_2 - param_1;
    TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
    ::RemoveAt(&this->Layers,uVar19,uVar23,Default);
    uVar20 = 0;
    if ((int)(uVar23 + uVar19) <= (this->LayerWeights).ArrayNum) {
      uVar20 = ~(uVar23 | uVar19) >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    if (uVar23 != 0) {
      _Dst = (this->LayerWeights).AllocatorInstance.Data + (longlong)(int)uVar19 * 8;
      iVar16 = ((this->LayerWeights).ArrayNum - uVar19) - uVar23;
      if (iVar16 != 0) {
        memmove(_Dst,_Dst + ((longlong)param_2 - (longlong)param_1) * 8,(longlong)iVar16 << 3);
      }
      piVar1 = &(this->LayerWeights).ArrayNum;
      *piVar1 = *piVar1 - uVar23;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->LayerWeights).AllocatorInstance,(this->LayerWeights).ArrayNum,
                 &(this->LayerWeights).ArrayMax);
    }
    if (!param_3) {
      UpdateMeshFromLayers(this);
    }
    ValidateActiveLayer(this);
    bVar13 = true;
  }
  return bVar13;
}

// MoveLayer @ 1434fb480

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::MoveLayer
          (FDynamicMeshSculptLayers *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar10 = (ulonglong)param_1;
  if ((((param_1 < 0) || (iVar7 = (this->Layers).Array.ArrayNum, iVar7 <= param_1)) || (param_2 < 0)
      ) || ((iVar7 <= param_2 || (param_1 == param_2)))) {
    return false;
  }
  UpdateLayersFromMesh(this);
  iVar7 = -1;
  if (param_1 < param_2) {
    iVar7 = 1;
  }
  if (uVar10 != (longlong)param_2) {
    lVar12 = uVar10 * 8;
    lVar8 = (longlong)iVar7;
    uVar11 = uVar10;
    do {
      if ((((longlong)uVar10 < 0) || ((longlong)(lVar8 + uVar10) < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar1 = (this->Layers).Array.ArrayNum;
      iVar9 = (int)uVar11;
      if (((iVar1 <= iVar9) || (iVar1 <= iVar9 + iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (uVar10 != lVar8 + uVar10) {
        pFVar2 = (this->Layers).Array.AllocatorInstance.Data;
        uVar3 = *(undefined8 *)(pFVar2 + lVar12);
        *(undefined8 *)(pFVar2 + uVar10 * 8) = *(undefined8 *)(pFVar2 + uVar10 * 8 + lVar8 * 8);
        *(undefined8 *)(pFVar2 + uVar10 * 8 + lVar8 * 8) = uVar3;
      }
      if ((((longlong)uVar10 < 0) || ((longlong)(lVar8 + uVar10) < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar1 = (this->LayerWeights).ArrayNum;
      if (((iVar1 <= iVar9) || (iVar1 <= iVar9 + iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0xce7,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (uVar10 != lVar8 + uVar10) {
        pFVar2 = (this->LayerWeights).AllocatorInstance.Data;
        uVar3 = *(undefined8 *)(pFVar2 + uVar10 * 8);
        *(undefined8 *)(pFVar2 + uVar10 * 8) = *(undefined8 *)(pFVar2 + uVar10 * 8 + lVar8 * 8);
        *(undefined8 *)(pFVar2 + uVar10 * 8 + lVar8 * 8) = uVar3;
      }
      uVar11 = (ulonglong)(uint)(iVar9 + iVar7);
      lVar12 = lVar12 + lVar8 * 8;
      uVar10 = uVar10 + lVar8;
    } while (uVar10 != (longlong)param_2);
  }
  UpdateMeshFromLayers(this);
  ValidateActiveLayer(this);
  return true;
}

// SetActiveLayer @ 14352b4c0

int __thiscall
UE::Geometry::FDynamicMeshSculptLayers::SetActiveLayer(FDynamicMeshSculptLayers *this,int param_1)

{
  UpdateLayersFromMesh(this);
  this->ActiveLayer = param_1;
  ValidateActiveLayer(this);
  return this->ActiveLayer;
}

// UpdateLayerWeights @ 143556520

void __thiscall
UE::Geometry::FDynamicMeshSculptLayers::UpdateLayerWeights
          (FDynamicMeshSculptLayers *this,TArrayView<double_const_,int> *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  UpdateLayersFromMesh(this);
  iVar2 = (this->LayerWeights).ArrayNum;
  uVar8 = 0;
  iVar3 = param_1->ArrayNum;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  if (0 < iVar2) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar3) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar1 = param_1->DataPtr[lVar7];
      uVar6 = 0;
      if ((int)uVar8 < (this->LayerWeights).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(double *)((this->LayerWeights).AllocatorInstance.Data + lVar7 * 8) = dVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
  UpdateMeshFromLayers(this);
  ValidateActiveLayer(this);
  return;
}

// UpdateLayersFromMesh @ 143556670

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::UpdateLayersFromMesh(FDynamicMeshSculptLayers *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  
  iVar23 = (this->Layers).Array.ArrayNum;
  if (iVar23 != 0) {
    iVar25 = (this->LayerWeights).ArrayNum;
    if (iVar23 == iVar25) {
      uVar22 = this->ActiveLayer;
      if ((-1 < (int)uVar22) && ((int)uVar22 < iVar23)) {
        uVar17 = 0;
        if ((int)uVar22 < iVar25) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          uVar16 = (*pcVar11)();
          return (bool)uVar16;
        }
        dVar2 = *(double *)((this->LayerWeights).AllocatorInstance.Data + (longlong)(int)uVar22 * 8)
        ;
        if (dVar2 == 0.0) {
          return false;
        }
        if (((this->Layers).Array.ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          uVar16 = (*pcVar11)();
          return (bool)uVar16;
        }
        lVar9 = *(longlong *)(*(longlong *)(this->Layers).Array.AllocatorInstance.Data + 0x10);
        if ((lVar9 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mesh",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                                ,0x100,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          uVar16 = (*pcVar11)();
          return (bool)uVar16;
        }
        iVar23 = *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24);
        uVar22 = 0;
        if (((iVar23 != 0) &&
            (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x28) - 1U))) &&
           (uVar22 = 1, 1 < iVar23)) {
          do {
            lVar27 = (*(undefined8 **)(lVar9 + 0x28))[uVar22 >> 9];
            if ((*(short *)(lVar27 + (ulonglong)(uVar22 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar27 + (ulonglong)(uVar22 & 0x1ff) * 2) != -1)) break;
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < iVar23);
        }
        uVar17 = *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24);
        if (uVar22 != uVar17) {
          dVar2 = __real_3ff0000000000000 / dVar2;
LAB_1435568a0:
          do {
            iVar25 = (this->Layers).Array.ArrayNum;
            uVar24 = 0;
            dVar12 = 0.0;
            dVar13 = 0.0;
            dVar14 = 0.0;
            dVar3 = 0.0;
            dVar4 = 0.0;
            dVar5 = 0.0;
            if (0 < iVar25) {
              uVar19 = uVar22 * 3;
              lVar27 = 0;
              do {
                uVar18 = 0;
                if ((int)uVar24 < iVar25) {
                  uVar18 = ~uVar24 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar11 = (code *)swi(3);
                  uVar16 = (*pcVar11)();
                  return (bool)uVar16;
                }
                lVar10 = *(longlong *)
                          (*(longlong *)((this->Layers).Array.AllocatorInstance.Data + lVar27) +
                          0x20);
                dVar3 = *(double *)
                         (*(longlong *)(lVar10 + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 8);
                dVar4 = *(double *)
                         (*(longlong *)(lVar10 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 8);
                dVar5 = *(double *)
                         (*(longlong *)(lVar10 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                         (ulonglong)(uVar19 + 2 & 0x1ff) * 8);
                uVar18 = 0;
                if ((int)uVar24 < (this->LayerWeights).ArrayNum) {
                  uVar18 = ~uVar24 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar11 = (code *)swi(3);
                  uVar16 = (*pcVar11)();
                  return (bool)uVar16;
                }
                uVar24 = uVar24 + 1;
                iVar25 = (this->Layers).Array.ArrayNum;
                dVar6 = *(double *)((this->LayerWeights).AllocatorInstance.Data + lVar27);
                lVar27 = lVar27 + 8;
                dVar12 = dVar12 + dVar3 * dVar6;
                dVar13 = dVar13 + dVar4 * dVar6;
                dVar14 = dVar14 + dVar5 * dVar6;
                dVar3 = dVar12;
                dVar4 = dVar13;
                dVar5 = dVar14;
              } while ((int)uVar24 < iVar25);
            }
            uVar24 = this->ActiveLayer;
            lVar27 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar22 >> 9) * 8);
            pdVar1 = (double *)(lVar27 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
            dVar13 = *pdVar1;
            dVar14 = pdVar1[1];
            dVar12 = *(double *)(lVar27 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
            uVar19 = 0;
            if ((int)uVar24 < iVar25) {
              uVar19 = ~uVar24 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
            uVar18 = uVar22 * 3;
            uVar19 = this->ActiveLayer;
            lVar27 = *(longlong *)
                      (*(longlong *)
                        ((this->Layers).Array.AllocatorInstance.Data + (longlong)(int)uVar24 * 8) +
                      0x20);
            dVar6 = *(double *)
                     (*(longlong *)(lVar27 + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 8);
            uVar20 = (ulonglong)(uVar18 + 1 >> 9);
            uVar28 = (ulonglong)(uVar18 + 1 & 0x1ff);
            dVar7 = *(double *)(*(longlong *)(lVar27 + uVar20 * 8) + uVar28 * 8);
            uVar26 = (ulonglong)(uVar18 + 2 & 0x1ff);
            uVar21 = (ulonglong)(uVar18 + 2 >> 9);
            dVar8 = *(double *)(*(longlong *)(lVar27 + uVar21 * 8) + uVar26 * 8);
            uVar24 = 0;
            if ((int)uVar19 < (this->Layers).Array.ArrayNum) {
              uVar24 = ~uVar19 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              uVar16 = (*pcVar11)();
              return (bool)uVar16;
            }
            uVar22 = uVar22 + 1;
            lVar27 = *(longlong *)
                      ((this->Layers).Array.AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
            *(double *)
             (*(longlong *)(*(longlong *)(lVar27 + 0x20) + (ulonglong)(uVar18 >> 9) * 8) +
             (ulonglong)(uVar18 & 0x1ff) * 8) = dVar6 + (dVar13 - dVar3) * dVar2;
            *(double *)(*(longlong *)(*(longlong *)(lVar27 + 0x20) + uVar20 * 8) + uVar28 * 8) =
                 dVar7 + (dVar14 - dVar4) * dVar2;
            *(double *)(*(longlong *)(*(longlong *)(lVar27 + 0x20) + uVar21 * 8) + uVar26 * 8) =
                 dVar8 + (dVar12 - dVar5) * dVar2;
            if ((int)uVar22 < iVar23) {
              do {
                lVar27 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar22 >> 9) * 8);
                if ((*(short *)(lVar27 + (ulonglong)(uVar22 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar27 + (ulonglong)(uVar22 & 0x1ff) * 2) != -1)) goto LAB_1435568a0;
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < iVar23);
            }
          } while (uVar22 != uVar17);
        }
        return true;
      }
    }
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2519995735064183028>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                        ,0xf4,"HasValidLayers()");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      uVar16 = (*pcVar11)();
      return (bool)uVar16;
    }
  }
  return false;
}

// UpdateMeshFromLayers @ 143556ce0

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::UpdateMeshFromLayers(FDynamicMeshSculptLayers *this)

{
  atomic<unsigned_char> *this_00;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  uint uVar14;
  bool bVar15;
  undefined1 uVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint local_res8;
  double local_c8;
  
  iVar19 = (this->Layers).Array.ArrayNum;
  if (iVar19 != 0) {
    if (iVar19 == (this->LayerWeights).ArrayNum) {
      if ((iVar19 < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        uVar16 = (*pcVar11)();
        return (bool)uVar16;
      }
      lVar9 = *(longlong *)(*(longlong *)(this->Layers).Array.AllocatorInstance.Data + 0x10);
      if ((lVar9 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mesh",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                              ,0x11d,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        uVar16 = (*pcVar11)();
        return (bool)uVar16;
      }
      uVar22 = *(int *)(lVar9 + 0x24) + *(int *)(lVar9 + 0x20) * 0x200;
      local_res8 = 0;
      if ((uVar22 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x28) - 1U))) {
        uVar20 = 1;
        local_res8 = 1;
        if (1 < (int)uVar22) {
          do {
            lVar21 = (*(undefined8 **)(lVar9 + 0x28))[uVar20 >> 9];
            if ((*(short *)(lVar21 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
               (local_res8 = uVar20, *(short *)(lVar21 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1))
            break;
            uVar20 = uVar20 + 1;
            local_res8 = uVar20;
          } while ((int)uVar20 < (int)uVar22);
        }
      }
joined_r0x000143556e51:
      do {
        if (local_res8 == uVar22) {
          return true;
        }
        while( true ) {
          iVar19 = (this->Layers).Array.ArrayNum;
          uVar20 = 0;
          local_c8 = 0.0;
          dVar13 = 0.0;
          if (iVar19 < 1) {
            dVar4 = 0.0;
            dVar3 = 0.0;
          }
          else {
            dVar3 = 0.0;
            uVar14 = local_res8 * 3;
            dVar4 = 0.0;
            lVar21 = 0;
            do {
              uVar18 = 0;
              if ((int)uVar20 < iVar19) {
                uVar18 = ~uVar20 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar11 = (code *)swi(3);
                uVar16 = (*pcVar11)();
                return (bool)uVar16;
              }
              lVar10 = *(longlong *)
                        (*(longlong *)((this->Layers).Array.AllocatorInstance.Data + lVar21) + 0x20)
              ;
              dVar5 = *(double *)
                       (*(longlong *)(lVar10 + (ulonglong)(uVar14 >> 9) * 8) +
                       (ulonglong)(uVar14 & 0x1ff) * 8);
              dVar6 = *(double *)
                       (*(longlong *)(lVar10 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 8);
              dVar7 = *(double *)
                       ((ulonglong)(uVar14 + 2 & 0x1ff) * 8 +
                       *(longlong *)(lVar10 + (ulonglong)(uVar14 + 2 >> 9) * 8));
              uVar18 = 0;
              if ((int)uVar20 < (this->LayerWeights).ArrayNum) {
                uVar18 = ~uVar20 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar11 = (code *)swi(3);
                uVar16 = (*pcVar11)();
                return (bool)uVar16;
              }
              uVar20 = uVar20 + 1;
              iVar19 = (this->Layers).Array.ArrayNum;
              dVar8 = *(double *)((this->LayerWeights).AllocatorInstance.Data + lVar21);
              lVar21 = lVar21 + 8;
              dVar13 = dVar13 + dVar8 * dVar7;
              dVar4 = dVar4 + dVar8 * dVar5;
              dVar3 = dVar3 + dVar8 * dVar6;
              local_c8 = dVar13;
            } while ((int)uVar20 < iVar19);
          }
          sVar17 = _dclass(dVar4);
          if (((sVar17 < 1) && (sVar17 = _dclass(dVar3), sVar17 < 1)) &&
             (sVar17 = _dclass(local_c8), sVar17 < 1)) {
            lVar21 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(local_res8 >> 9) * 8);
            auVar12._8_4_ = SUB84(dVar3,0);
            auVar12._0_8_ = dVar4;
            auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            *(undefined1 (*) [16])(lVar21 + (ulonglong)(local_res8 & 0x1ff) * 0x18) = auVar12;
            *(double *)(lVar21 + 0x10 + (ulonglong)(local_res8 & 0x1ff) * 0x18) = local_c8;
            if (*(char *)(lVar9 + 0x21c) != '\0') {
              this_00 = (atomic<unsigned_char> *)(lVar9 + 0x21d);
              LOCK();
              FVar1.State = *this_00;
              if (FVar1.State == (atomic<unsigned_char>)0x0) {
                *this_00 = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (FVar1.State != (atomic<unsigned_char>)0x0) {
                FMutex::LockSlow((FMutex *)this_00);
              }
              *(int *)(lVar9 + 0x220) = *(int *)(lVar9 + 0x220) + 1;
              LOCK();
              aVar2 = *this_00;
              *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
              UNLOCK();
              if (((byte)aVar2 & 2) != 0) {
                FMutex::WakeWaitingThread((FMutex *)this_00);
              }
            }
          }
          local_res8 = local_res8 + 1;
          if ((int)uVar22 <= (int)local_res8) break;
          while( true ) {
            lVar21 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(local_res8 >> 9) * 8);
            if ((*(short *)(lVar21 + (ulonglong)(local_res8 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar21 + (ulonglong)(local_res8 & 0x1ff) * 2) != -1)) break;
            local_res8 = local_res8 + 1;
            if ((int)uVar22 <= (int)local_res8) goto joined_r0x000143556e51;
          }
        }
      } while( true );
    }
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2519995735064183063>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                        ,0x117,"Layers.Num() == LayerWeights.Num()");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      uVar16 = (*pcVar11)();
      return (bool)uVar16;
    }
  }
  return false;
}

// ValidateActiveLayer @ 1435571e0

bool __thiscall
UE::Geometry::FDynamicMeshSculptLayers::ValidateActiveLayer(FDynamicMeshSculptLayers *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = (this->Layers).Array.ArrayNum;
  if (iVar1 != 0) {
    iVar2 = (this->LayerWeights).ArrayNum;
    if (iVar1 == iVar2) {
      uVar7 = iVar2 - 1U;
      if (this->ActiveLayer < (int)(iVar2 - 1U)) {
        uVar7 = this->ActiveLayer;
      }
      uVar6 = 0;
      if (0 < (int)uVar7) {
        uVar6 = uVar7;
      }
      this->ActiveLayer = uVar6;
      uVar7 = 0;
      if ((int)uVar6 < iVar2) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(double *)((this->LayerWeights).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) != 0.0
         ) {
        return true;
      }
      uVar7 = this->ActiveLayer + 1;
      if ((int)uVar7 < (this->LayerWeights).ArrayNum) {
        lVar8 = (longlong)(int)uVar7 * 8;
        do {
          uVar6 = 0;
          if ((int)uVar7 < (this->LayerWeights).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(double *)((this->LayerWeights).AllocatorInstance.Data + lVar8) != 0.0)
          goto LAB_1435573c9;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar7 < (this->LayerWeights).ArrayNum);
      }
      uVar7 = this->ActiveLayer - 1;
      if (-1 < (int)uVar7) {
        lVar8 = (longlong)(int)uVar7 * 8;
        do {
          uVar6 = 0;
          if ((int)uVar7 < (this->LayerWeights).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(double *)((this->LayerWeights).AllocatorInstance.Data + lVar8) != 0.0) {
LAB_1435573c9:
            this->ActiveLayer = uVar7;
            return true;
          }
          lVar8 = lVar8 + -8;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      return false;
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2519995735064183088>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshSculptLayers.cpp"
                       ,0x130,"Layers.Num() == LayerWeights.Num()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  this->ActiveLayer = -1;
  return false;
}

