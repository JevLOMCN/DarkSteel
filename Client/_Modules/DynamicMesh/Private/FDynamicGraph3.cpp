// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// GetVertex @ 14c8f99b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Geometry::FDynamicGraph3<double>::GetVertex
          (FDynamicGraph3<double> *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  double dVar3;
  double local_28;
  double dStack_20;
  
  if (((param_1 < 0) ||
      ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    local_28 = ___xmm_00000000000000007fefffffffffffff;
    dStack_20 = _UNK_1528d05f8;
    dVar3 = 0.0;
  }
  else {
    pFVar1 = (this->Vertices).Data.Blocks.AllocatorInstance.Data;
    uVar2 = param_1 * 3;
    local_28 = *(double *)
                (*(longlong *)(pFVar1 + (ulonglong)(uVar2 >> 9) * 8) +
                (ulonglong)(uVar2 & 0x1ff) * 8);
    dStack_20 = *(double *)
                 (*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                 (ulonglong)(uVar2 + 1 & 0x1ff) * 8);
    dVar3 = *(double *)
             (*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
             (ulonglong)(uVar2 + 2 & 0x1ff) * 8);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  return __return_storage_ptr__;
}

// append_new_split_vertex @ 14c926c80

int __thiscall
UE::Geometry::FDynamicGraph3<double>::append_new_split_vertex
          (FDynamicGraph3<double> *this,int param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  TVector<double>_u_0 local_68;
  TVector<double> local_50 [3];
  
  pTVar6 = GetVertex(this,(TVector<double> *)&local_68._s_0,param_1);
  pTVar7 = GetVertex(this,local_50,param_2);
  dVar3 = ((pTVar7->field0_0x0)._s_0.Y + (pTVar6->field0_0x0)._s_0.Y) * __real_3fe0000000000000;
  dVar4 = ((pTVar7->field0_0x0)._s_0.Z + (pTVar6->field0_0x0)._s_0.Z) * __real_3fe0000000000000;
  dVar2 = ((pTVar6->field0_0x0)._s_0.X + (pTVar7->field0_0x0)._s_0.X) * __real_3fe0000000000000;
  uVar5 = FRefCountVector::Allocate((FRefCountVector *)&this->_padding_);
  if ((int)uVar5 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4)) {
    FSmallListSet::Clear((FSmallListSet *)&this->_padding_,uVar5);
  }
  FSmallListSet::AllocateAt((FSmallListSet *)&this->_padding_,uVar5);
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  local_68._s_0.X = dVar2;
  local_68._s_0.Y = dVar3;
  local_68._s_0.Z = dVar4;
  TDynamicVectorN<double,3>::InsertAt(&this->Vertices,(ElementVectorN *)&local_68._s_0,uVar5);
  return uVar5;
}

// subclass_validity_checks @ 14c934df0

void __thiscall
UE::Geometry::FDynamicGraph3<double>::subclass_validity_checks
          (FDynamicGraph3<double> *this,TFunction<void___cdecl(bool)> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  short sVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_68 [64];
  
  uVar5 = __real_7fefffffffffffff;
  uVar9 = (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4);
  uVar11 = 0;
  if ((uVar9 != 0) && (uVar11 = 0, 0xfffd < (ushort)(**(short **)this->_padding_ - 1U))) {
    uVar10 = 1;
    uVar11 = 1;
    if (1 < (int)uVar9) {
      do {
        lVar1 = ((undefined8 *)this->_padding_)[uVar10 >> 9];
        if ((*(short *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
           (uVar11 = uVar10, *(short *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar10;
      } while ((int)uVar10 < (int)uVar9);
    }
  }
  if (uVar11 != uVar9) {
LAB_14c934ea8:
    do {
      if ((((int)uVar11 < 0) ||
          ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= (int)uVar11))
         || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (this->_padding_ + (ulonglong)(uVar11 >> 9) * 8) +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U))) {
        uVar12 = 0;
        uVar10 = 0;
        uVar7 = uVar5;
      }
      else {
        pFVar2 = (this->Vertices).Data.Blocks.AllocatorInstance.Data;
        uVar4 = uVar11 * 3;
        uVar12 = (uint)((ulonglong)
                        *(undefined8 *)
                         (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                         (ulonglong)(uVar4 + 2 & 0x1ff) * 8) >> 0x20);
        uVar10 = (uint)((ulonglong)
                        *(undefined8 *)
                         (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                         (ulonglong)(uVar4 + 1 & 0x1ff) * 8) >> 0x20);
        uVar7 = *(undefined8 *)
                 (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                 (ulonglong)(uVar4 & 0x1ff) * 8);
      }
      sVar6 = _dclass(uVar7);
      if (((0 < sVar6) || ((uVar10 >> 0x14 & 0x7ff) == 0x7ff)) ||
         (local_68[0] = (uVar12 >> 0x14 & 0x7ff) != 0x7ff, !(bool)local_68[0])) {
        local_68[0] = false;
      }
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar8 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_1->field_0x10;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar3)(uVar7,local_68);
      uVar11 = uVar11 + 1;
      if ((int)uVar11 < (int)uVar9) {
        do {
          lVar1 = *(longlong *)(this->_padding_ + (ulonglong)(uVar11 >> 9) * 8);
          if ((*(short *)(lVar1 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar1 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) goto LAB_14c934ea8;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
      }
    } while (uVar11 != uVar9);
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

