// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 23

// AddUniqueImpl<FGeometryCollectionItemIndex_const_&> @ 146349c50

int __thiscall
TArray<FGeometryCollectionItemIndex,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FGeometryCollectionItemIndex_const_&>
          (TArray<FGeometryCollectionItemIndex,TSizedDefaultAllocator<32>_> *this,
          FGeometryCollectionItemIndex *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(int *)&pFVar5->field_0x0 == param_1->ItemIndex) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(int *)(pFVar1 + (longlong)iVar4 * 4) = param_1->ItemIndex;
  return iVar4;
}

// AddUniqueImpl<FGeometryCollectionItemIndex> @ 146349d50

int __thiscall
TArray<FGeometryCollectionItemIndex,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FGeometryCollectionItemIndex>
          (TArray<FGeometryCollectionItemIndex,TSizedDefaultAllocator<32>_> *this,
          FGeometryCollectionItemIndex *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(int *)&pFVar5->field_0x0 == param_1->ItemIndex) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(int *)(pFVar1 + (longlong)iVar4 * 4) = param_1->ItemIndex;
  return iVar4;
}

// Append<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> @ 146349f60

void __thiscall
TArray<UMaterial_*,TSizedDefaultAllocator<32>_>::
Append<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
          (TArray<UMaterial_*,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == (TArray<UMaterial_*,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<UMaterial_*,TObjectPtr<UMaterialInterface>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (TObjectPtr<UMaterialInterface> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 14635f370

TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *this,
          TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return this;
}

// Empty @ 146370ab0

void __thiscall
TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Remove @ 146389920

int __thiscall
TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *this,
          UMaterialInterface **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UMaterialInterface **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UMaterialInterface **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 146389a90

int __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMaterialInterface> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UMaterialInterface **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UMaterialInterface **)(pFVar1 + lVar6 * 8) != (param_1->field0_0x0).DebugPtr
                     )) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// SetNumZeroed @ 14638e310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<UMaterialInterface_*_const_&> @ 14639b7c0

int __thiscall
TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UMaterialInterface_*_const_&>
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *this,
          UMaterialInterface **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UMaterialInterface **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UMaterialInterface **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FGeometryCollectionAutoInstanceMesh_const_&> @ 14639b8c0

int __thiscall
TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FGeometryCollectionAutoInstanceMesh_const_&>
          (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *this,
          FGeometryCollectionAutoInstanceMesh *param_1)

{
  FGeometryCollectionAutoInstanceMesh *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FGeometryCollectionAutoInstanceMesh *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FGeometryCollectionAutoInstanceMesh::FGeometryCollectionAutoInstanceMesh
              ((FGeometryCollectionAutoInstanceMesh *)
               ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x30),param_1);
  }
  return iVar4;
}

// operator= @ 1463a5e80

TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *this,
          TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
    }
  }
  return this;
}

// operator= @ 1463a5f20

TArray<FRenderTransform,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *this,
          TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// AddDefaulted @ 1463a9260

int __thiscall
TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
::AddDefaulted(TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1)

{
  ForElementType<FGeometryCollectionTransformBuffer> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FGeometryCollectionTransformBuffer>_>
                    (0x38,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
    this = (TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  DefaultConstructItems<FGeometryCollectionTransformBuffer,int>
            ((void *)((longlong)iVar2 * 0x38 + (longlong)this),param_1);
  return iVar2;
}

// Empty @ 1463b0b20

void __thiscall
TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1463b0b70

void __thiscall
TArray<FPackedHierarchyNode_Old,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackedHierarchyNode_Old,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1300,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1463b0bc0

void __thiscall
TArray<FPageStreamingState_Old,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPageStreamingState_Old,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 1463b1b60

int __thiscall
TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>::Find
          (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *this,
          FGeometryCollectionAutoInstanceMesh *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UStaticMesh *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x30) {
    pUVar3 = (param_1->Mesh).field0_0x0.DebugPtr;
    pFVar5 = pFVar2;
    do {
      if (((*(UStaticMesh **)pFVar5 == pUVar3) &&
          (*(int *)(pFVar5 + 0x10) == (param_1->Materials).ArrayNum)) &&
         (bVar4 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                            (*(TObjectPtr<UMaterialInterface> **)(pFVar5 + 8),
                             (TObjectPtr<UMaterialInterface> *)
                             (param_1->Materials).AllocatorInstance.Data,*(int *)(pFVar5 + 0x10)),
         bVar4)) {
        return (int)(((longlong)pFVar5 - (longlong)pFVar2) / 0x30);
      }
      pFVar5 = pFVar5 + 0x30;
    } while (pFVar5 != pFVar2 + (longlong)iVar1 * 0x30);
  }
  return -1;
}

// Init @ 1463b9200

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          TTransform<double> *param_1,int param_2)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pTVar2 = (TTransform<double> *)(this->AllocatorInstance).Data;
      if ((pTVar2 <= param_1) && (param_1 < pTVar2 + *piVar1)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = this->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1060,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar7 + 1;
      dVar5 = (param_1->Rotation).XY.m128d_f64[1];
      pFVar3 = (this->AllocatorInstance).Data;
      lVar8 = (longlong)iVar7 * 0x60;
      *(double *)(pFVar3 + lVar8) = (param_1->Rotation).XY.m128d_f64[0];
      *(double *)(pFVar3 + lVar8 + 8) = dVar5;
      dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
      *(double *)(pFVar3 + lVar8 + 0x10) = (param_1->Rotation).ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar8 + 0x10 + 8) = dVar5;
      dVar5 = (param_1->Translation).XY.m128d_f64[1];
      *(double *)(pFVar3 + lVar8 + 0x20) = (param_1->Translation).XY.m128d_f64[0];
      *(double *)(pFVar3 + lVar8 + 0x20 + 8) = dVar5;
      dVar5 = (param_1->Translation).ZW.m128d_f64[1];
      *(double *)(pFVar3 + lVar8 + 0x30) = (param_1->Translation).ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar8 + 0x30 + 8) = dVar5;
      dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
      *(double *)(pFVar3 + lVar8 + 0x40) = (param_1->Scale3D).XY.m128d_f64[0];
      *(double *)(pFVar3 + lVar8 + 0x40 + 8) = dVar5;
      dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
      *(double *)(pFVar3 + lVar8 + 0x50) = (param_1->Scale3D).ZW.m128d_f64[0];
      *(double *)(pFVar3 + lVar8 + 0x50 + 8) = dVar5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// Insert @ 1463bc900

int __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          TTransform<double> *param_1,int param_2)

{
  TTransform<double> *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TTransform<double> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  lVar7 = (longlong)param_2 * 0x60;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x60,pFVar6,(longlong)(iVar5 - param_2) * 0x60);
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  pFVar6 = (this->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar7) = (param_1->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar6 + lVar7 + 8) = dVar3;
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar6 + lVar7 + 0x10) = (param_1->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar6 + lVar7 + 0x10 + 8) = dVar3;
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  *(double *)(pFVar6 + lVar7 + 0x20) = (param_1->Translation).XY.m128d_f64[0];
  *(double *)(pFVar6 + lVar7 + 0x20 + 8) = dVar3;
  dVar3 = (param_1->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar6 + lVar7 + 0x30) = (param_1->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar6 + lVar7 + 0x30 + 8) = dVar3;
  dVar3 = (param_1->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar6 + lVar7 + 0x40) = (param_1->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar6 + lVar7 + 0x40 + 8) = dVar3;
  dVar3 = (param_1->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar6 + lVar7 + 0x50) = (param_1->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar6 + lVar7 + 0x50 + 8) = dVar3;
  return param_2;
}

// RemoveAtImpl @ 1463c2690

void __thiscall
TArray<FSharedSimulationSizeSpecificData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSharedSimulationSizeSpecificData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FSharedSimulationSizeSpecificData *_Dst;
  int iVar1;
  
  _Dst = (FSharedSimulationSizeSpecificData *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FSharedSimulationSizeSpecificData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1463c2710

void __thiscall
TArray<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1463c2790

void __thiscall
TArray<TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNumUninitialized @ 1463c9340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNaniteGeometryCollectionSceneProxy::FGeometryNaniteData,TSizedDefaultAllocator<32>_>::
SetNumUninitialized(TArray<FNaniteGeometryCollectionSceneProxy::FGeometryNaniteData,TSizedDefaultAllocator<32>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x40,(longlong)iVar4 << 6);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

