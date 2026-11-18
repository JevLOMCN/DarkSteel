// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 1

// UpdateSelection @ 14dab5d60

void __thiscall
FDataflowSelectionState::UpdateSelection(FDataflowSelectionState *this,UDataflowComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  int *piVar8;
  uint uVar9;
  ForAnyElementType _Str1;
  longlong lVar10;
  TManagedArrayBase<int> *pTVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  longlong local_5c8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_5c0;
  int local_5b0 [4];
  TManagedArrayBase<int> *local_5a0;
  TManagedArray<FString> *local_598;
  FString local_590;
  uint local_580;
  FString local_578;
  FRenderingFacade local_568;
  
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade
            (&local_568,&param_1->RenderCollection);
  bVar2 = GeometryCollection::Facades::FRenderingFacade::IsValid(&local_568);
  if (bVar2) {
    if ((local_568.Collection == (FManagedArrayCollection *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\Facades\\CollectionRenderingFacade.h"
                           ,0xbb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((TManagedArrayBase<int> *)local_568.GeometrySelectionAttribute.AttributeArray ==
          (TManagedArrayBase<int> *)0x0) ||
        (local_568.GeometrySelectionAttribute.Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_568.GeometrySelectionAttribute.AttributeArray)->field_0x8 = 1;
    local_5a0 = (TManagedArrayBase<int> *)local_568.GeometrySelectionAttribute.AttributeArray;
    if ((local_568.Collection == (FManagedArrayCollection *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\Facades\\CollectionRenderingFacade.h"
                           ,0x7b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((TManagedArrayBase<int> *)local_568.VertexSelectionAttribute.AttributeArray ==
          (TManagedArrayBase<int> *)0x0) ||
        (local_568.VertexSelectionAttribute.Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_568.VertexSelectionAttribute.AttributeArray)->field_0x8 = 1;
    if (this->Mode == DSS_Dataflow_Object) {
      if ((this->Nodes).ArrayNum != 0) {
        if ((local_568.GeometryNameAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0)
           && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar13 = 0;
        local_598 = local_568.GeometryNameAttribute.ConstAttributeArray;
        local_5c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c0.ArrayNum = 0;
        local_5c0.ArrayMax = 0;
        local_res10[0] = false;
        TArray<bool,TSizedDefaultAllocator<32>_>::Init
                  (&local_5c0,local_res10,(this->Nodes).ArrayNum);
        iVar3 = (**(code **)(*(longlong *)
                              &(local_568.GeometrySelectionAttribute.AttributeArray)->field_0x0 +
                            0x60))(local_568.GeometrySelectionAttribute.AttributeArray);
        uVar4 = 0;
        if (0 < iVar3) {
          local_5c8 = 0;
          pTVar11 = (TManagedArrayBase<int> *)local_568.GeometrySelectionAttribute.AttributeArray;
          do {
            uVar16 = ~uVar13 >> 0x1f;
            uVar9 = 0;
            if ((int)uVar13 <
                *(int *)&(local_568.GeometryNameAttribute.ConstAttributeArray)->field_0x18) {
              uVar9 = uVar16;
            }
            if ((uVar9 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar7 = ::FString::FString(&local_578,
                                        (FString *)
                                        ((longlong)(int)uVar13 * 0x10 +
                                        *(longlong *)&local_598->field_0x10));
            ::FString::FString(&local_590,pFVar7);
            pFVar15 = (pFVar7->Data).AllocatorInstance.Data;
            local_580 = uVar13;
            if (pFVar15 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar15);
            }
            uVar9 = uVar4;
            if ((int)uVar13 < (pTVar11->Array).ArrayNum) {
              uVar9 = uVar16;
            }
            if ((uVar9 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = local_590.Data.ArrayNum;
            _Str1.Data = local_590.Data.AllocatorInstance.Data;
            *(undefined4 *)((pTVar11->Array).AllocatorInstance.Data + local_5c8) = 0;
            pFVar12 = (this->Nodes).AllocatorInstance.Data;
            pFVar15 = pFVar12 + (longlong)(this->Nodes).ArrayNum * 0x18;
            for (; pFVar12 != pFVar15; pFVar12 = pFVar12 + 0x18) {
              if (iVar3 == *(int *)(pFVar12 + 8)) {
                if (1 < iVar3) {
                  iVar5 = wcscmp((wchar_t *)_Str1.Data,*(wchar_t **)pFVar12);
                  bVar2 = iVar5 == 0;
                  goto LAB_14dab6076;
                }
LAB_14dab6214:
                pTVar11 = local_5a0;
                lVar10 = (longlong)pFVar12 - (longlong)(this->Nodes).AllocatorInstance.Data;
                lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
                uVar9 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
                if (uVar9 != 0xffffffff) {
                  uVar6 = uVar4;
                  if ((int)uVar13 < (local_5a0->Array).ArrayNum) {
                    uVar6 = uVar16;
                  }
                  if ((uVar6 == 0) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  *(undefined4 *)((pTVar11->Array).AllocatorInstance.Data + local_5c8) = 1;
                  uVar16 = 0;
                  if ((int)uVar9 < local_5c0.ArrayNum) {
                    uVar16 = ~uVar9 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  local_5c0.AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1;
                  _Str1.Data = local_590.Data.AllocatorInstance.Data;
                }
                break;
              }
              bVar2 = *(int *)(pFVar12 + 8) + iVar3 == 1;
LAB_14dab6076:
              if (bVar2) goto LAB_14dab6214;
              pTVar11 = local_5a0;
            }
            if (_Str1.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(_Str1.Data);
            }
            local_5c8 = local_5c8 + 4;
            uVar13 = uVar13 + 1;
            iVar3 = (**(code **)(pTVar11->_padding_ + 0x60))(pTVar11);
            local_568.GeometryNameAttribute.ConstAttributeArray = local_598;
          } while ((int)uVar13 < iVar3);
        }
        uVar13 = local_5c0.ArrayNum - 1;
        if (-1 < (int)uVar13) {
          lVar10 = (longlong)(int)uVar13;
          lVar14 = lVar10 * 0x18;
          do {
            uVar16 = ~uVar13 >> 0x1f;
            uVar9 = uVar4;
            if ((int)uVar13 < local_5c0.ArrayNum) {
              uVar9 = uVar16;
            }
            if ((uVar9 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (local_5c0.AllocatorInstance.Data[lVar10] == (FScriptContainerElement)0x0) {
              uVar9 = uVar4;
              if ((int)uVar13 < (this->Nodes).ArrayNum) {
                uVar9 = uVar16;
              }
              if ((uVar9 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pFVar15 = (this->Nodes).AllocatorInstance.Data + lVar14;
              if (*(void **)pFVar15 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar15);
              }
              iVar3 = (this->Nodes).ArrayNum + ~uVar13;
              if (iVar3 != 0) {
                memmove(pFVar15,pFVar15 + 0x18,(longlong)iVar3 * 0x18);
              }
              piVar8 = &(this->Nodes).ArrayNum;
              *piVar8 = *piVar8 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,&(this->Nodes).AllocatorInstance,(this->Nodes).ArrayNum,
                         &(this->Nodes).ArrayMax);
            }
            lVar10 = lVar10 + -1;
            lVar14 = lVar14 + -0x18;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        if (local_5c0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_5c0.AllocatorInstance.Data);
        return;
      }
      piVar8 = local_res20;
      local_res20[0] = 0;
    }
    else {
      if (this->Mode == DSS_Dataflow_Vertex) {
        local_5b0[0] = 0;
        TManagedArrayBase<int>::Fill
                  ((TManagedArrayBase<int> *)local_568.VertexSelectionAttribute.AttributeArray,
                   local_5b0);
        iVar5 = (**(code **)(*(longlong *)
                              &(local_568.VertexSelectionAttribute.AttributeArray)->field_0x0 + 0x60
                            ))(local_568.VertexSelectionAttribute.AttributeArray);
        pFVar12 = (this->Vertices).AllocatorInstance.Data;
        iVar3 = (this->Vertices).ArrayNum;
        pFVar15 = pFVar12 + (longlong)iVar3 * 4;
        do {
          if ((this->Vertices).ArrayNum != iVar3) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar12 == pFVar15) {
            return;
          }
          uVar4 = *(uint *)pFVar12;
          if ((int)uVar4 < iVar5) {
            uVar13 = 0;
            if ((int)uVar4 <
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                &(local_568.VertexSelectionAttribute.AttributeArray)->field_0x10)->ArrayNum) {
              uVar13 = ~uVar4 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(undefined4 *)
             ((((TArray<int,TSizedDefaultAllocator<32>_> *)
               &(local_568.VertexSelectionAttribute.AttributeArray)->field_0x10)->AllocatorInstance)
              .Data + (longlong)(int)uVar4 * 4) = 1;
          }
          pFVar12 = pFVar12 + 4;
        } while( true );
      }
      local_5b0[1] = 0;
      TManagedArrayBase<int>::Fill
                ((TManagedArrayBase<int> *)local_568.VertexSelectionAttribute.AttributeArray,
                 local_5b0 + 1);
      piVar8 = local_5b0 + 2;
      local_5b0[2] = 0;
    }
    TManagedArrayBase<int>::Fill
              ((TManagedArrayBase<int> *)local_568.GeometrySelectionAttribute.AttributeArray,piVar8)
    ;
  }
  return;
}

