// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// FDynamicGraph2<double> @ 14cc1abf0

FDynamicGraph2<double> * __thiscall
UE::Geometry::FDynamicGraph2<double>::FDynamicGraph2<double>(FDynamicGraph2<double> *this)

{
  TDynamicVectorN<double,2> *this_00;
  
  this->_padding_ = (longlong)&___7FDynamicGraph_Geometry_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock
            ((TDynamicVector<unsigned_short,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock
            ((TDynamicVector<unsigned_short,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock
            ((TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *)&this->_padding_);
  this->_padding_ = 0;
  this_00 = &this->vertices;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FDynamicGraph2_N_Geometry_UE__6B_;
  (this->cached_bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->cached_bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->cached_bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->cached_bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  this->cached_bounds_timestamp = -1;
  (this_00->Data).CurBlock = 0;
  (this_00->Data).CurBlockUsed = 0;
  (this->vertices).Data.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->vertices).Data.Blocks.ArrayNum = 0;
  (this->vertices).Data.Blocks.ArrayMax = 0;
  TDynamicVector<double,512>::AddAllocatedBlock(&this_00->Data);
  return this;
}

// AppendVertex @ 14cc34240

int __thiscall
UE::Geometry::FDynamicGraph2<double>::AppendVertex
          (FDynamicGraph2<double> *this,TVector2<double> *param_1)

{
  int *piVar1;
  uint uVar2;
  ElementVectorN local_18;
  
  uVar2 = FRefCountVector::Allocate((FRefCountVector *)&this->_padding_);
  if ((int)uVar2 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4)) {
    FSmallListSet::Clear((FSmallListSet *)&this->_padding_,uVar2);
  }
  FSmallListSet::AllocateAt((FSmallListSet *)&this->_padding_,uVar2);
  local_18.Data[0] = (param_1->field0_0x0)._s_0.X;
  local_18.Data[1] = (param_1->field0_0x0)._s_0.Y;
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  TDynamicVectorN<double,2>::InsertAt(&this->vertices,&local_18,uVar2);
  return uVar2;
}

// GetVertex @ 14cc5e400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
UE::Geometry::FDynamicGraph2<double>::GetVertex
          (FDynamicGraph2<double> *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  
  dVar1 = _UNK_1528d05f8;
  if (((-1 < param_1) &&
      (param_1 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4))) &&
     ((ushort)(*(short *)(*(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    pFVar2 = (this->vertices).Data.Blocks.AllocatorInstance.Data;
    dVar1 = *(double *)
             (*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
             (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         *(double *)
          (*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
          (ulonglong)(param_1 * 2 & 0x1ff) * 8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = ___xmm_00000000000000007fefffffffffffff;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// SetVertex @ 14cc75d80

void __thiscall
UE::Geometry::FDynamicGraph2<double>::SetVertex
          (FDynamicGraph2<double> *this,int param_1,TVector2<double> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  
  sVar4 = _dclass((param_2->field0_0x0)._s_0.X);
  if (sVar4 < 1) {
    sVar4 = _dclass((param_2->field0_0x0)._s_0.Y);
    if (sVar4 < 1) goto LAB_14cc75ddb;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("VectorUtil::IsFinite(VNewPos)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph2.h"
                     ,0x2e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14cc75ddb:
  if (((-1 < param_1) &&
      (param_1 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4))) &&
     ((ushort)(*(short *)(*(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    *(double *)
     (*(longlong *)
       ((this->vertices).Data.Blocks.AllocatorInstance.Data +
       (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 & 0x1ff) * 8) =
         (param_2->field0_0x0)._s_0.X;
    *(double *)
     (*(longlong *)
       ((this->vertices).Data.Blocks.AllocatorInstance.Data +
       (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 8) =
         (param_2->field0_0x0)._s_0.Y;
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

// append_new_split_vertex @ 14cc8a510

int __thiscall
UE::Geometry::FDynamicGraph2<double>::append_new_split_vertex
          (FDynamicGraph2<double> *this,int param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  TVector2<double> *pTVar5;
  TVector2<double> *pTVar6;
  TVector2<double>_u_0 local_48;
  TVector2<double> local_38 [3];
  
  pTVar5 = GetVertex(this,(TVector2<double> *)&local_48._s_0,param_1);
  pTVar6 = GetVertex(this,local_38,param_2);
  dVar3 = ((pTVar6->field0_0x0)._s_0.Y + (pTVar5->field0_0x0)._s_0.Y) * __real_3fe0000000000000;
  dVar2 = ((pTVar5->field0_0x0)._s_0.X + (pTVar6->field0_0x0)._s_0.X) * __real_3fe0000000000000;
  uVar4 = FRefCountVector::Allocate((FRefCountVector *)&this->_padding_);
  if ((int)uVar4 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4)) {
    FSmallListSet::Clear((FSmallListSet *)&this->_padding_,uVar4);
  }
  FSmallListSet::AllocateAt((FSmallListSet *)&this->_padding_,uVar4);
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  local_48._s_0.X = dVar2;
  local_48._s_0.Y = dVar3;
  TDynamicVectorN<double,2>::InsertAt(&this->vertices,(ElementVectorN *)&local_48._s_0,uVar4);
  return uVar4;
}

// subclass_validity_checks @ 14cc8e140

void __thiscall
UE::Geometry::FDynamicGraph2<double>::subclass_validity_checks
          (FDynamicGraph2<double> *this,TFunction<void___cdecl(bool)> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  short sVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_58 [48];
  
  uVar4 = __real_7fefffffffffffff;
  uVar8 = (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4);
  uVar10 = 0;
  if ((uVar8 != 0) && (uVar10 = 0, 0xfffd < (ushort)(**(short **)this->_padding_ - 1U))) {
    uVar9 = 1;
    uVar10 = 1;
    if (1 < (int)uVar8) {
      do {
        lVar1 = ((undefined8 *)this->_padding_)[uVar9 >> 9];
        if ((*(short *)(lVar1 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
           (uVar10 = uVar9, *(short *)(lVar1 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
        uVar9 = uVar9 + 1;
        uVar10 = uVar9;
      } while ((int)uVar9 < (int)uVar8);
    }
  }
  if (uVar10 != uVar8) {
LAB_14cc8e1f1:
    do {
      if ((((int)uVar10 < 0) ||
          ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= (int)uVar10))
         || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (this->_padding_ + (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U))) {
        uVar9 = 0;
        uVar6 = uVar4;
      }
      else {
        pFVar2 = (this->vertices).Data.Blocks.AllocatorInstance.Data;
        uVar9 = (uint)((ulonglong)
                       *(undefined8 *)
                        (*(longlong *)(pFVar2 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 8) >> 0x20);
        uVar6 = *(undefined8 *)
                 (*(longlong *)(pFVar2 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                 (ulonglong)(uVar10 * 2 & 0x1ff) * 8);
      }
      sVar5 = _dclass(uVar6);
      if ((0 < sVar5) || (local_58[0] = (uVar9 >> 0x14 & 0x7ff) != 0x7ff, !(bool)local_58[0])) {
        local_58[0] = false;
      }
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar7 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar7 = (longlong *)&param_1->field_0x10;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar6,local_58);
      uVar10 = uVar10 + 1;
      if ((int)uVar10 < (int)uVar8) {
        do {
          lVar1 = *(longlong *)(this->_padding_ + (ulonglong)(uVar10 >> 9) * 8);
          if ((*(short *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) goto LAB_14cc8e1f1;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
    } while (uVar10 != uVar8);
  }
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar7 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cc8e354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))();
  return;
}

