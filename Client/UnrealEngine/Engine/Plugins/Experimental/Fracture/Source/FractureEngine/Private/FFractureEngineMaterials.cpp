// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 2

// SetMaterial @ 14e81f120

void __cdecl
FFractureEngineMaterials::SetMaterial
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          ETargetFaces param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  TManagedArray<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  undefined1 local_6b8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_6b0;
  TManagedArray<int> *local_6a0;
  TManagedArray<int> *local_698;
  TManagedArray<int> *local_690;
  TManagedArray<bool> *local_688;
  FScriptContainerElement *local_680;
  FCollectionMeshFacade local_678;
  FCollectionTransformSelectionFacade local_2a8;
  
  GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade(&local_678,param_1);
  bVar7 = GeometryCollection::Facades::FCollectionMeshFacade::IsValid(&local_678);
  if (bVar7) {
    if (local_678.TransformToGeometryIndexAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0
       ) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_678.FaceStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_6a0 = local_678.FaceStartAttribute.ConstAttributeArray;
    if (local_678.FaceCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_698 = local_678.FaceCountAttribute.ConstAttributeArray;
    if (local_678.InternalAttribute.ConstAttributeArray == (TManagedArray<bool> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_688 = local_678.InternalAttribute.ConstAttributeArray;
    if ((local_678.MaterialIDAttribute.AttributeArray == (TManagedArray<int> *)0x0) ||
       (local_678.MaterialIDAttribute.Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (local_678.MaterialIDAttribute.AttributeArray)->field_0x8 = 1;
    local_690 = local_678.MaterialIDAttribute.AttributeArray;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2a8,param_1);
    local_6b0.ArrayNum = param_2->ArrayNum;
    lVar10 = (longlong)local_6b0.ArrayNum;
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_6b0.ArrayNum == 0) {
      local_6b0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_6b0.ArrayNum,0,&local_6b0.AllocatorInstance,local_6b0.ArrayNum,
                 &local_6b0.ArrayMax);
      memcpy(local_6b0.AllocatorInstance.Data,pFVar3,lVar10 << 2);
    }
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
              (&local_2a8,&local_6b0);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
              (&local_2a8,&local_6b0,true);
    iVar5 = local_6b0.ArrayNum;
    local_680 = local_6b0.AllocatorInstance.Data + (longlong)local_6b0.ArrayNum * 4;
    FVar11.Data = local_6b0.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_680;
      if (local_6b0.ArrayNum != iVar5) {
        local_6b8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_6b8);
      }
      if (FVar11.Data == pFVar3) break;
      uVar1 = *(uint *)FVar11.Data;
      lVar10 = (longlong)(int)uVar1;
      uVar12 = ~uVar1 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar1 <
          *(int *)&(local_678.TransformToGeometryIndexAttribute.ConstAttributeArray)->field_0x18) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (-1 < *(int *)(*(longlong *)
                         &(local_678.TransformToGeometryIndexAttribute.ConstAttributeArray)->
                          field_0x10 + lVar10 * 4)) {
        uVar8 = 0;
        if ((int)uVar1 <
            *(int *)&(local_678.TransformToGeometryIndexAttribute.ConstAttributeArray)->field_0x18)
        {
          uVar8 = uVar12;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar8 = *(uint *)(*(longlong *)
                           &(local_678.TransformToGeometryIndexAttribute.ConstAttributeArray)->
                            field_0x10 + lVar10 * 4);
        uVar9 = 0;
        if ((int)uVar8 < *(int *)&local_6a0->field_0x18) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar2 = *(int *)(*(longlong *)&local_6a0->field_0x10 + (longlong)(int)uVar8 * 4);
        uVar8 = 0;
        if ((int)uVar1 <
            *(int *)&(local_678.TransformToGeometryIndexAttribute.ConstAttributeArray)->field_0x18)
        {
          uVar8 = uVar12;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar6 = local_698;
        uVar1 = *(uint *)(*(longlong *)
                           &(local_678.TransformToGeometryIndexAttribute.ConstAttributeArray)->
                            field_0x10 + lVar10 * 4);
        uVar8 = 0;
        if ((int)uVar1 < *(int *)&local_698->field_0x18) {
          uVar8 = ~uVar1 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        UE::FractureEngineMaterialHelpers::SetMaterialOnFaceRange
                  (local_688,local_690,iVar2,
                   *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4) + iVar2,
                   param_3,param_4);
      }
      FVar11.Data = FVar11.Data + 4;
    }
    if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b0.AllocatorInstance.Data);
    }
  }
  return;
}

// SetMaterialOnGeometryAfter @ 14e81f700

void __cdecl
FFractureEngineMaterials::SetMaterialOnGeometryAfter
          (FManagedArrayCollection *param_1,int param_2,ETargetFaces param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FCollectionMeshFacade local_408;
  
  uVar7 = (ulonglong)param_2;
  GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade(&local_408,param_1);
  bVar3 = GeometryCollection::Facades::FCollectionMeshFacade::IsValid(&local_408);
  if (bVar3) {
    if ((local_408.TransformToGeometryIndexAttribute.ConstAttributeArray ==
         (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_408.FaceStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_408.FaceCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_408.InternalAttribute.ConstAttributeArray == (TManagedArray<bool> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((local_408.MaterialIDAttribute.AttributeArray == (TManagedArray<int> *)0x0) ||
        (local_408.MaterialIDAttribute.Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (local_408.MaterialIDAttribute.AttributeArray)->field_0x8 = 1;
    iVar4 = (**(code **)(*(longlong *)local_408.FaceStartAttribute.ConstAttributeArray + 0x60))
                      (local_408.FaceStartAttribute.ConstAttributeArray);
    uVar8 = uVar7;
    for (; (longlong)uVar7 < (longlong)iVar4; uVar7 = uVar7 + 1) {
      uVar6 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(local_408.FaceStartAttribute.ConstAttributeArray)->field_0x18) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)&(local_408.FaceStartAttribute.ConstAttributeArray)->field_0x10
                      + uVar7 * 4);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&(local_408.FaceCountAttribute.ConstAttributeArray)->field_0x18) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::FractureEngineMaterialHelpers::SetMaterialOnFaceRange
                (local_408.InternalAttribute.ConstAttributeArray,
                 local_408.MaterialIDAttribute.AttributeArray,iVar1,
                 *(int *)(*(longlong *)
                           &(local_408.FaceCountAttribute.ConstAttributeArray)->field_0x10 +
                         uVar7 * 4) + iVar1,param_3,param_4);
      uVar8 = (ulonglong)(uVar6 + 1);
    }
  }
  return;
}

