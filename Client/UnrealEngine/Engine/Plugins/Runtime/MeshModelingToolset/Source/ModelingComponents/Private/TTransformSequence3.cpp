// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// Append @ 14ca787e0

void __thiscall
UE::Geometry::TTransformSequence3<double>::Append
          (TTransformSequence3<double> *this,TTransformSRT3<double> *param_1)

{
  int *piVar1;
  double *pdVar2;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar8;
  longlong lVar9;
  
  FVar3 = (this->Transforms).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= param_1) {
    FVar8 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
    if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      FVar8 = FVar3;
    }
    if ((param_1 < (TTransformSRT3<double> *)
                   ((longlong)(this->Transforms).ArrayMax * 0x50 + (longlong)FVar8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Transforms).ArrayNum;
  piVar1 = &(this->Transforms).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                      (0x850,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)this,piVar1);
  }
  lVar9 = (longlong)iVar7;
  (this->Transforms).ArrayNum = iVar7 + 1;
  FVar3 = (this->Transforms).AllocatorInstance.SecondaryData;
  dVar5 = (param_1->Rotation).field0_0x0._s_0.Y;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar3;
  }
  pdVar2 = (double *)((longlong)this + lVar9 * 0x50);
  *pdVar2 = (param_1->Rotation).field0_0x0._s_0.X;
  pdVar2[1] = dVar5;
  dVar5 = (param_1->Rotation).field0_0x0._s_0.W;
  *(double *)((uchar *)((longlong)this + 0x10) + lVar9 * 0x50) =
       (param_1->Rotation).field0_0x0._s_0.Z;
  *(double *)((uchar *)((longlong)this + 0x10) + lVar9 * 0x50 + 8) = dVar5;
  dVar5 = (param_1->Translation).field0_0x0._s_0.Y;
  *(double *)((uchar *)((longlong)this + 0x20) + lVar9 * 0x50) =
       (param_1->Translation).field0_0x0._s_0.X;
  *(double *)((uchar *)((longlong)this + 0x20) + lVar9 * 0x50 + 8) = dVar5;
  dVar5 = (param_1->Scale3D).field0_0x0._s_0.X;
  *(double *)((uchar *)((longlong)this + 0x30) + lVar9 * 0x50) =
       (param_1->Translation).field0_0x0._s_0.Z;
  *(double *)((uchar *)((longlong)this + 0x30) + lVar9 * 0x50 + 8) = dVar5;
  dVar5 = (param_1->Scale3D).field0_0x0._s_0.Z;
  *(double *)((uchar *)((longlong)this + 0x40) + lVar9 * 0x50) =
       (param_1->Scale3D).field0_0x0._s_0.Y;
  *(double *)((uchar *)((longlong)this + 0x40) + lVar9 * 0x50 + 8) = dVar5;
  return;
}

// AppendInverse @ 14ca78900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TTransformSequence3<double>::AppendInverse
          (TTransformSequence3<double> *this,TTransformSRT3<double> *param_1,double param_2)

{
  undefined8 uVar1;
  double dVar2;
  TTransformSRT3<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  TQuaternion<double>_u_0 local_128;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  TQuaternion<double>_u_0 local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  TTransformSRT3<double> local_88;
  
  local_98 = (param_1->Scale3D).field0_0x0._s_0.Y;
  local_a0 = (param_1->Scale3D).field0_0x0._s_0.X;
  uVar4 = SUB84(local_a0 - local_98,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)(local_a0 - local_98) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((param_2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != param_2) ||
      (dVar6 = (param_1->Scale3D).field0_0x0._s_0.Z, dVar2 = local_a0 - dVar6,
      uVar4 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      param_2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != param_2)) ||
     (dVar6 = local_98 - dVar6,
     uVar4 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     param_2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != param_2)) {
    uVar1 = *(undefined8 *)&(param_1->Rotation).field0_0x0;
    uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((double)CONCAT44(uVar5,uVar4) < param_2 || (double)CONCAT44(uVar5,uVar4) == param_2) &&
       (uVar1 = *(undefined8 *)((longlong)&(param_1->Rotation).field0_0x0 + 8),
       dVar6 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
       dVar6 <= param_2)) {
      uVar1 = *(undefined8 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x10);
      uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar5,uVar4) < param_2 || (double)CONCAT44(uVar5,uVar4) == param_2) {
        dVar2 = (param_1->Rotation).field0_0x0._s_0.W - __real_3ff0000000000000;
        uVar4 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar5 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar5,uVar4) < param_2 || (double)CONCAT44(uVar5,uVar4) == param_2)
        goto LAB_14ca789d5;
        if (param_2 < dVar6) goto LAB_14ca789f2;
      }
      uVar1 = *(undefined8 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x10);
      uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((double)CONCAT44(uVar5,uVar4) < param_2 || (double)CONCAT44(uVar5,uVar4) == param_2) &&
         (dVar6 = (param_1->Rotation).field0_0x0._s_0.W + __real_3ff0000000000000,
         uVar4 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar5,uVar4) < param_2 || (double)CONCAT44(uVar5,uVar4) == param_2))
      goto LAB_14ca789d5;
    }
LAB_14ca789f2:
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_90 = 0.0;
    local_d8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_d8._s_0.W = _UNK_15061cbc8;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_2 < (double)CONCAT44((uint)((ulonglong)local_a0 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_a0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
       ) {
      local_a0 = __real_3ff0000000000000 / local_a0;
    }
    else {
      local_a0 = 0.0;
    }
    uVar4 = SUB84(local_98,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)local_98 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (param_2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != param_2) {
      local_98 = __real_3ff0000000000000 / local_98;
    }
    else {
      local_98 = 0.0;
    }
    dVar6 = *(double *)((longlong)&(param_1->Scale3D).field0_0x0 + 0x10);
    uVar4 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (param_2 <= (double)CONCAT44(uVar5,uVar4) && (double)CONCAT44(uVar5,uVar4) != param_2) {
      local_90 = __real_3ff0000000000000 / dVar6;
    }
    local_128._s_0.X = (param_1->Rotation).field0_0x0._s_0.X;
    local_128._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
    local_128._s_0.Z = (param_1->Rotation).field0_0x0._s_0.Z;
    local_128._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
    local_108 = (param_1->Translation).field0_0x0._s_0.X;
    dStack_100 = (param_1->Translation).field0_0x0._s_0.Y;
    local_f8 = (param_1->Translation).field0_0x0._s_0.Z;
    dStack_e0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dStack_f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    pTVar3 = TTransformSRT3<double>::InverseUnsafe
                       ((TTransformSRT3<double> *)&local_128._s_0,&local_88,__real_3e45798ee2308c3a)
    ;
    local_128._s_0.X = (pTVar3->Rotation).field0_0x0._s_0.X;
    local_128._s_0.Y = (pTVar3->Rotation).field0_0x0._s_0.Y;
    local_128._s_0.Z = (pTVar3->Rotation).field0_0x0._s_0.Z;
    local_128._s_0.W = (pTVar3->Rotation).field0_0x0._s_0.W;
    local_108 = (pTVar3->Translation).field0_0x0._s_0.X;
    dStack_100 = (pTVar3->Translation).field0_0x0._s_0.Y;
    local_f8 = (pTVar3->Translation).field0_0x0._s_0.Z;
    dStack_f0 = (pTVar3->Scale3D).field0_0x0._s_0.X;
    local_e8 = (pTVar3->Scale3D).field0_0x0._s_0.Y;
    dStack_e0 = (pTVar3->Scale3D).field0_0x0._s_0.Z;
    Append(this,(TTransformSRT3<double> *)&local_128._s_0);
    Append(this,(TTransformSRT3<double> *)&local_d8._s_0);
  }
  else {
LAB_14ca789d5:
    pTVar3 = TTransformSRT3<double>::InverseUnsafe
                       (param_1,(TTransformSRT3<double> *)&local_d8._s_0,param_2);
    Append(this,pTVar3);
  }
  return;
}

// TTransformSequence3<double> @ 14cac8ab0

TTransformSequence3<double> * __thiscall
UE::Geometry::TTransformSequence3<double>::TTransformSequence3<double>
          (TTransformSequence3<double> *this,TTransformSequence3<double> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar3;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> _Dst;
  
  (this->Transforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
  FVar3 = (param_1->Transforms).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Transforms).ArrayNum;
  (this->Transforms).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    param_1 = (TTransformSequence3<double> *)FVar3;
  }
  piVar1 = &(this->Transforms).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
    return this;
  }
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
            (0x50,8,iVar2,0,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)this,iVar2,
             piVar1);
  FVar3 = (this->Transforms).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_1,(longlong)iVar2 * 0x50);
  return this;
}

// operator= @ 14cad30f0

TTransformSequence3<double> * __thiscall
UE::Geometry::TTransformSequence3<double>::operator=
          (TTransformSequence3<double> *this,TTransformSequence3<double> *param_1)

{
  int iVar1;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar2;
  int *piVar3;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->Transforms).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Transforms).ArrayMax;
    iVar1 = (param_1->Transforms).ArrayNum;
    if (FVar2 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      param_1 = (TTransformSequence3<double> *)FVar2;
    }
    (this->Transforms).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 2;
      return this;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
              (0x50,8,iVar1,*piVar3,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)this,
               iVar1,piVar3);
    FVar2 = (this->Transforms).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
    if (FVar2 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 * 0x50);
    }
  }
  return this;
}

// Append @ 14cae97e0

void __thiscall
UE::Geometry::TTransformSequence3<double>::Append
          (TTransformSequence3<double> *this,TTransform<double> *param_1)

{
  int *piVar1;
  double *pdVar2;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar7;
  longlong lVar8;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_88 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_1->Rotation).XY.m128d_f64[1];
  local_78 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_1->Rotation).ZW.m128d_f64[1];
  local_58 = (param_1->Translation).ZW.m128d_f64[0];
  local_68 = (param_1->Translation).XY.m128d_f64[0];
  dStack_60 = (param_1->Translation).XY.m128d_f64[1];
  dStack_40 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_50 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_48 = (param_1->Scale3D).XY.m128d_f64[1];
  FVar3 = (this->Transforms).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    FVar7 = FVar3;
  }
  local_38 = local_68;
  dStack_30 = dStack_60;
  local_28 = local_58;
  local_20 = dStack_50;
  dStack_18 = dStack_48;
  local_10 = dStack_40;
  if ((ulonglong)FVar7 <= &local_88) {
    FVar7 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
    if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      FVar7 = FVar3;
    }
    if ((&local_88 < (double *)((longlong)(this->Transforms).ArrayMax * 0x50 + (longlong)FVar7)) &&
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
  }
  iVar6 = (this->Transforms).ArrayNum;
  piVar1 = &(this->Transforms).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                      (0x850,(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)this,piVar1);
  }
  lVar8 = (longlong)iVar6;
  (this->Transforms).ArrayNum = iVar6 + 1;
  FVar3 = (this->Transforms).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar3;
  }
  pdVar2 = (double *)((longlong)this + lVar8 * 0x50);
  *pdVar2 = local_88;
  pdVar2[1] = dStack_80;
  *(double *)((uchar *)((longlong)this + 0x10) + lVar8 * 0x50) = local_78;
  *(double *)((uchar *)((longlong)this + 0x10) + lVar8 * 0x50 + 8) = dStack_70;
  *(double *)((uchar *)((longlong)this + 0x20) + lVar8 * 0x50) = local_68;
  *(double *)((uchar *)((longlong)this + 0x20) + lVar8 * 0x50 + 8) = dStack_60;
  *(double *)((uchar *)((longlong)this + 0x30) + lVar8 * 0x50) = local_58;
  *(double *)((uchar *)((longlong)this + 0x30) + lVar8 * 0x50 + 8) = dStack_50;
  *(double *)((uchar *)((longlong)this + 0x40) + lVar8 * 0x50) = dStack_48;
  *(double *)((uchar *)((longlong)this + 0x40) + lVar8 * 0x50 + 8) = dStack_40;
  return;
}

// GetAccumulatedScale @ 14cb0d230

TVector<double> * __thiscall
UE::Geometry::TTransformSequence3<double>::GetAccumulatedScale
          (TTransformSequence3<double> *this,TVector<double> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar5;
  undefined8 uVar6;
  uchar *puVar7;
  undefined1 local_res8 [8];
  
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  piVar1 = &(this->Transforms).ArrayNum;
  iVar4 = *piVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  FVar5 = (this->Transforms).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar5;
  }
  puVar7 = (uchar *)((longlong)this + 0x48);
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar7 + -0x48) ==
        (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
        ((longlong)iVar4 * 0x50 + (longlong)this)) break;
    dVar2 = *(double *)(puVar7 + -8);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         *(double *)(puVar7 + -0x10) * (__return_storage_ptr__->field0_0x0)._s_0.X;
    dVar3 = *(double *)puVar7;
    puVar7 = puVar7 + 0x50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar2 * (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (__return_storage_ptr__->field0_0x0)._s_0.Z * dVar3;
  }
  return __return_storage_ptr__;
}

// HasNonUniformScale @ 14cb1a8b0

bool __thiscall
UE::Geometry::TTransformSequence3<double>::HasNonUniformScale
          (TTransformSequence3<double> *this,double param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  double dVar7;
  undefined1 local_res8 [8];
  
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  FVar3 = (this->Transforms).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Transforms).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar3;
  }
  puVar6 = (uchar *)((longlong)this + 0x38);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar6 + -0x38) ==
        (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
        ((longlong)iVar2 * 0x50 + (longlong)this)) break;
    dVar7 = *(double *)puVar6 - *(double *)(puVar6 + 8);
    if (((param_1 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar5,SUB84(dVar7,0) & uVar4
                                    )) ||
        (dVar7 = *(double *)puVar6 - *(double *)(puVar6 + 0x10),
        param_1 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar5,SUB84(dVar7,0) & uVar4))
        ) || (dVar7 = *(double *)(puVar6 + 8) - *(double *)(puVar6 + 0x10),
             param_1 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar5,
                                        SUB84(dVar7,0) & uVar4))) {
      return true;
    }
    puVar6 = puVar6 + 0x50;
  }
  return false;
}

// InverseTransformPosition @ 14cb21aa0

TVector<double> * __thiscall
UE::Geometry::TTransformSequence3<double>::InverseTransformPosition
          (TTransformSequence3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar7;
  code *pcVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  TVector<double> *pTVar13;
  TQuaternion<double> *this_00;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0 [5];
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar14;
  
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3e45798ee2308c3a;
  dVar6 = __real_3ff0000000000000;
  uVar15 = (this->Transforms).ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 * 0x50;
    do {
      uVar17 = 0;
      if ((int)uVar15 < (this->Transforms).ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar8)();
        return pTVar13;
      }
      FVar7 = (this->Transforms).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)this;
      if (FVar7 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
        FVar14 = FVar7;
      }
      this_00 = (TQuaternion<double> *)((longlong)FVar14 + lVar16);
      dVar1 = *(double *)((longlong)&this_00[1].field0_0x0 + 0x18);
      uVar17 = SUB84(dVar1,0) & uVar10;
      uVar18 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
      if (dVar9 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar9) {
        dVar1 = dVar6 / dVar1;
      }
      else {
        dVar1 = 0.0;
      }
      dVar2 = *(double *)&this_00[2].field0_0x0;
      uVar17 = SUB84(dVar2,0) & uVar10;
      uVar18 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11;
      if (dVar9 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar9) {
        dVar2 = dVar6 / dVar2;
      }
      else {
        dVar2 = 0.0;
      }
      dVar3 = *(double *)((longlong)&this_00[2].field0_0x0 + 8);
      uVar17 = SUB84(dVar3,0) & uVar10;
      uVar18 = (uint)((ulonglong)dVar3 >> 0x20) & uVar11;
      if (dVar9 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar9) {
        dVar3 = dVar6 / dVar3;
      }
      else {
        dVar3 = 0.0;
      }
      local_b8._s_0.X = (param_1->field0_0x0)._s_0.X - this_00[1].field0_0x0._s_0.X;
      local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y - this_00[1].field0_0x0._s_0.Y;
      local_b8._s_0.Z = (param_1->field0_0x0)._s_0.Z - this_00[1].field0_0x0._s_0.Z;
      pTVar13 = TQuaternion<double>::InverseMultiply
                          (this_00,local_a0,(TVector<double> *)&local_b8._s_0);
      lVar16 = lVar16 + -0x50;
      uVar15 = uVar15 - 1;
      dVar4 = (pTVar13->field0_0x0)._s_0.Y;
      dVar5 = (pTVar13->field0_0x0)._s_0.Z;
      (param_1->field0_0x0)._s_0.X = dVar1 * (pTVar13->field0_0x0)._s_0.X;
      (param_1->field0_0x0)._s_0.Y = dVar2 * dVar4;
      (param_1->field0_0x0)._s_0.Z = dVar3 * dVar5;
    } while (-1 < (int)uVar15);
  }
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  return __return_storage_ptr__;
}

// TransformNormal @ 14cb41850

TVector<double> * __thiscall
UE::Geometry::TTransformSequence3<double>::TransformNormal
          (TTransformSequence3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar4;
  double dVar5;
  uchar *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [3];
  
  dVar5 = __real_bff0000000000000;
  dVar2 = __real_3ff0000000000000;
  piVar1 = &(this->Transforms).ArrayNum;
  iVar3 = *piVar1;
  FVar4 = (this->Transforms).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar4;
  }
  puVar6 = (uchar *)((longlong)this + 0x38);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar6 + -0x38) ==
        (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
        ((longlong)iVar3 * 0x50 + (longlong)this)) break;
    dVar11 = *(double *)(puVar6 + 0x10);
    dVar10 = *(double *)(puVar6 + 8) * *(double *)puVar6;
    dVar9 = dVar2;
    if (dVar11 * dVar10 < 0.0) {
      dVar9 = dVar5;
    }
    dVar12 = *(double *)(puVar6 + 8) * dVar11 * dVar9 * (param_1->field0_0x0)._s_0.X;
    dVar13 = dVar9 * (param_1->field0_0x0)._s_0.Y * dVar11 * *(double *)puVar6;
    dVar11 = dVar10 * dVar9 * (param_1->field0_0x0)._s_0.Z;
    auVar7._0_8_ = dVar13 * dVar13;
    auVar7._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar12 * dVar12 + auVar7._0_8_ + dVar11 * dVar11;
    auVar8 = sqrtpd(auVar7,auVar8);
    if (auVar8._0_8_ <= 0.0) {
      local_88._s_0.Z = 0.0;
      local_88._s_0.X = 0.0;
      local_88._s_0.Y = 0.0;
    }
    else {
      dVar9 = dVar2 / auVar8._0_8_;
      local_88._s_0.X = dVar9 * dVar12;
      local_88._s_0.Y = dVar9 * dVar13;
      local_88._s_0.Z = dVar9 * dVar11;
    }
    operator*<double>((TVector<double> *)&local_70[0]._s_0,(TQuaternion<double> *)(puVar6 + -0x38),
                      (TVector<double> *)&local_88._s_0);
    puVar6 = puVar6 + 0x50;
    (param_1->field0_0x0)._s_0.X = (double)local_70[0]._0_8_;
    (param_1->field0_0x0)._s_0.Y = (double)local_70[0]._8_8_;
    (param_1->field0_0x0)._s_0.Z = (double)local_70[0]._16_8_;
  }
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// TransformPosition @ 14cb41a20

TVector<double> * __thiscall
UE::Geometry::TTransformSequence3<double>::TransformPosition
          (TTransformSequence3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar7;
  TVector<double> *pTVar8;
  uchar *puVar9;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_48;
  TVector<double> local_30;
  
  piVar1 = &(this->Transforms).ArrayNum;
  FVar7 = (this->Transforms).AllocatorInstance.SecondaryData;
  iVar6 = *piVar1;
  if (FVar7 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar7;
  }
  puVar9 = (uchar *)((longlong)this + 0x40);
  while( true ) {
    if (*piVar1 != iVar6) {
      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar9 + -0x40) ==
        (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
        ((longlong)iVar6 * 0x50 + (longlong)this)) break;
    local_48._s_0.X = *(double *)(puVar9 + -8) * (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = *(double *)puVar9 * (param_1->field0_0x0)._s_0.Y;
    local_48._s_0.Z = *(double *)(puVar9 + 8) * (param_1->field0_0x0)._s_0.Z;
    pTVar8 = operator*<double>(&local_30,(TQuaternion<double> *)(puVar9 + -0x40),
                               (TVector<double> *)&local_48._s_0);
    dVar2 = *(double *)(puVar9 + -0x18);
    dVar3 = (pTVar8->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = *(double *)(puVar9 + -0x20) + (pTVar8->field0_0x0)._s_0.X;
    dVar4 = *(double *)(puVar9 + -0x10);
    puVar9 = puVar9 + 0x50;
    dVar5 = (pTVar8->field0_0x0)._s_0.Z;
    (param_1->field0_0x0)._s_0.Y = dVar2 + dVar3;
    (param_1->field0_0x0)._s_0.Z = dVar4 + dVar5;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// WillInvert @ 14cb4a6e0

bool __thiscall
UE::Geometry::TTransformSequence3<double>::WillInvert(TTransformSequence3<double> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  int *piVar3;
  double dVar4;
  int iVar5;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar6;
  double dVar7;
  uchar *puVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (this->Transforms).AllocatorInstance.SecondaryData;
  piVar3 = &(this->Transforms).ArrayNum;
  iVar5 = *piVar3;
  if (FVar6 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
    this = (TTransformSequence3<double> *)FVar6;
  }
  puVar8 = (uchar *)((longlong)this + 0x38);
  dVar7 = __real_3ff0000000000000;
  while( true ) {
    if (*piVar3 != iVar5) {
      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar8 + -0x38) ==
        (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
        ((longlong)iVar5 * 0x50 + (longlong)this)) break;
    puVar1 = puVar8 + 8;
    dVar4 = *(double *)puVar8;
    puVar2 = puVar8 + 0x10;
    puVar8 = puVar8 + 0x50;
    dVar7 = dVar7 * *(double *)puVar1 * dVar4 * *(double *)puVar2;
  }
  return dVar7 < 0.0;
}

