// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 13

// FWidgetReflectorNodeBase @ 142e0b7e0

/* WARNING: Type propagation algorithm not settling */

FWidgetReflectorNodeBase * __thiscall
FWidgetReflectorNodeBase::FWidgetReflectorNodeBase
          (FWidgetReflectorNodeBase *this,FArrangedWidget *param_1)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  uVar2 = *(undefined8 *)&(param_1->Geometry).Scale;
  (this->WidgetGeometry).Size = (param_1->Geometry).Size;
  *(undefined8 *)&(this->WidgetGeometry).Scale = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->WidgetGeometry).AbsolutePosition.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->WidgetGeometry).Position.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  *(undefined8 *)((this->WidgetGeometry).AccumulatedRenderTransform.M.M[0] + 1) =
       *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  *(undefined8 *)((this->WidgetGeometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar2;
  *(undefined8 *)((longlong)&(this->WidgetGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
       = *(undefined8 *)
          ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  (this->ParentNode).Object = (FWidgetReflectorNodeBase *)0x0;
  (this->ParentNode).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HitTestInfo).IsHitTestVisible = false;
  (this->HitTestInfo).AreChildrenHitTestVisible = false;
  (this->Tint).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  TVar1 = ((param_1->Widget).Object)->VisibilityAttribute;
  (this->HitTestInfo).AreChildrenHitTestVisible = (bool)((byte)TVar1 >> 4 & 1);
  (this->HitTestInfo).IsHitTestVisible = (bool)((byte)TVar1 >> 3 & 1);
  return this;
}

// FWidgetReflectorNodeBase @ 142e0b860

FWidgetReflectorNodeBase * __thiscall
FWidgetReflectorNodeBase::FWidgetReflectorNodeBase(FWidgetReflectorNodeBase *this)

{
  FLinearColor FVar1;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  FGeometry::FGeometry(&this->WidgetGeometry);
  (this->HitTestInfo).IsHitTestVisible = false;
  (this->HitTestInfo).AreChildrenHitTestVisible = false;
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  (this->ParentNode).Object = (FWidgetReflectorNodeBase *)0x0;
  (this->ParentNode).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar1 = FLinearColor::White;
  (this->HitTestInfo).AreChildrenHitTestVisible = false;
  (this->Tint).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// ~FWidgetReflectorNodeBase @ 142e14940

void __thiscall FWidgetReflectorNodeBase::~FWidgetReflectorNodeBase(FWidgetReflectorNodeBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  pTVar3 = (this->ParentNode).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)(this->ChildNodes).AllocatorInstance.Data,
             (this->ChildNodes).ArrayNum);
  pFVar4 = (this->ChildNodes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// AddChildNode @ 142e2a8a0

void __cdecl
FWidgetReflectorNodeBase::AddChildNode
          (TSharedRef<FWidgetReflectorNodeBase,1> *param_1,
          TSharedRef<FWidgetReflectorNodeBase,1> *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FWidgetReflectorNodeBase *pFVar4;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  
  pFVar4 = param_1->Object;
  pTVar5 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pFVar4->ChildNodes).AllocatorInstance.Data;
  if ((pTVar5 <= param_2) && (param_2 < pTVar5 + (pFVar4->ChildNodes).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (pFVar4->ChildNodes).ArrayNum;
  piVar1 = &(pFVar4->ChildNodes).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(pFVar4->ChildNodes).AllocatorInstance,piVar1);
  }
  (pFVar4->ChildNodes).ArrayNum = iVar10 + 1;
  pFVar11 = (pFVar4->ChildNodes).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
  *(FWidgetReflectorNodeBase **)pFVar11 = param_2->Object;
  pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = param_2->Object;
  (pFVar4->ParentNode).Object = param_1->Object;
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (pFVar4->ParentNode).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (pFVar4->ParentNode).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (pFVar4->ParentNode).WeakReferenceCount.ReferenceController = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetAccumulatedLayoutTransform @ 142e97910

FSlateLayoutTransform * __thiscall
FWidgetReflectorNodeBase::GetAccumulatedLayoutTransform
          (FWidgetReflectorNodeBase *this,FSlateLayoutTransform *__return_storage_ptr__)

{
  __return_storage_ptr__->Scale = (this->WidgetGeometry).Scale;
  (__return_storage_ptr__->Translation).field0_0x0 =
       (this->WidgetGeometry).AbsolutePosition.field0_0x0;
  return __return_storage_ptr__;
}

// GetAccumulatedRenderTransform @ 142e97930

TTransform2<float> * __thiscall
FWidgetReflectorNodeBase::GetAccumulatedRenderTransform(FWidgetReflectorNodeBase *this)

{
  return &(this->WidgetGeometry).AccumulatedRenderTransform;
}

// GetChildNodes @ 142e9a380

TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
FWidgetReflectorNodeBase::GetChildNodes(FWidgetReflectorNodeBase *this)

{
  return &this->ChildNodes;
}

// GetGeometry @ 142e9e8d0

FGeometry * __thiscall FWidgetReflectorNodeBase::GetGeometry(FWidgetReflectorNodeBase *this)

{
  return &this->WidgetGeometry;
}

// GetHitTestInfo @ 142e9f140

FWidgetHitTestInfo * __thiscall
FWidgetReflectorNodeBase::GetHitTestInfo(FWidgetReflectorNodeBase *this)

{
  return &this->HitTestInfo;
}

// GetLocalSize @ 142ea0430

TVector2<float> __thiscall FWidgetReflectorNodeBase::GetLocalSize(FWidgetReflectorNodeBase *this)

{
  TVector2<float>_u_0 in_RDX;
  
  *(FDeprecateSlateVector2D *)in_RDX = (this->WidgetGeometry).Size;
  return (TVector2<float>)in_RDX;
}

// GetParentNode @ 142ea4880

TSharedPtr<FWidgetReflectorNodeBase,1> * __thiscall
FWidgetReflectorNodeBase::GetParentNode
          (FWidgetReflectorNodeBase *this,
          TSharedPtr<FWidgetReflectorNodeBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FWidgetReflectorNodeBase *)0x0;
  pTVar1 = (this->ParentNode).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->ParentNode).Object;
  }
  return __return_storage_ptr__;
}

// GetTint @ 142ea8840

FLinearColor * __thiscall FWidgetReflectorNodeBase::GetTint(FWidgetReflectorNodeBase *this)

{
  return &this->Tint;
}

// SetTint @ 142f05b60

void __thiscall
FWidgetReflectorNodeBase::SetTint(FWidgetReflectorNodeBase *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Tint).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Tint).field0_0x0 + 8) = uVar1;
  return;
}

