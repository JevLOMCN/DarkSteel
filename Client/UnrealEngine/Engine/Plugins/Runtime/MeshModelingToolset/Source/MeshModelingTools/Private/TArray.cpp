// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// operator= @ 14cc234a0

TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *this,
          TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// RemoveAtImpl @ 14cc700c0

void __thiscall
TArray<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// TArray<double,TSizedDefaultAllocator<32>_><double_const_,int> @ 14cc96ac0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
TArray<double,TSizedDefaultAllocator<32>_>::
TArray<double,TSizedDefaultAllocator<32>_><double_const_,int>
          (TArray<double,TSizedDefaultAllocator<32>_> *this,TArrayView<double_const_,int> *param_1)

{
  int iVar1;
  double *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// Insert @ 14cd072d0

int __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
          TVector2<double> *param_1,int param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 0x10;
  memmove(pFVar5 + 0x10,pFVar5,(longlong)(iVar4 - param_2) << 4);
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  pFVar5 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x10;
  *(double *)pFVar5 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar5 + 8) = dVar2;
  return param_2;
}

// Remove @ 14cd1b230

int __thiscall
TArray<enum_EMeshLODIdentifier,TSizedDefaultAllocator<32>_>::Remove
          (void *this,EMeshLODIdentifier *param_1)

{
  EMeshLODIdentifier *pEVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((*(EMeshLODIdentifier **)this <= param_1) &&
     (param_1 < *(EMeshLODIdentifier **)this + *(int *)((longlong)this + 0xc))) {
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
  iVar4 = *(int *)((longlong)this + 8);
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pEVar1 = *(EMeshLODIdentifier **)this;
  iVar9 = 0;
  bVar3 = *pEVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (pEVar1[lVar6] != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pEVar1 + iVar9,pEVar1 + iVar7,(longlong)(iVar8 - iVar7) << 2);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      *(int *)((longlong)this + 8) = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAtImpl @ 14cd1b3a0

void __thiscall
TArray<UMeshAttributePaintTool::FAttributeData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UMeshAttributePaintTool::FAttributeData,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FAttributeData *_Dst;
  
  _Dst = (FAttributeData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<UMeshAttributePaintTool::FAttributeData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14cd1b420

void __thiscall
TArray<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14cd1b4a0

void __thiscall
TArray<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14cd7b4a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UUVLayoutOperatorFactory>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TObjectPtr<UUVLayoutOperatorFactory>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

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
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
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
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14cd7b5e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

