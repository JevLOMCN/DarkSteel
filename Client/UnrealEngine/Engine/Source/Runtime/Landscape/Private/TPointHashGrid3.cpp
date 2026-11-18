// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// FindInRadiusHelper<1> @ 145f727e0

TTuple<UE::Math::TVector<double>,double> * __thiscall
UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindInRadiusHelper<1>
          (TPointHashGrid3<UE::Math::TVector<double>,double> *this,
          TTuple<UE::Math::TVector<double>,double> *__return_storage_ptr__,TVector<double> *param_1,
          double param_2,TFunctionRef<double___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  FVector3i *pFVar10;
  longlong lVar11;
  double dVar12;
  double local_120;
  FVector3i_u_0 local_118;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  FVector3i_u_0 local_98;
  TPointHashGrid3<UE::Math::TVector<double>,double> *local_88;
  double *local_80;
  double *local_78;
  TFunctionRef<double___cdecl(UE::Math::TVector<double>_const_&)> *local_70;
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *local_68;
  
  if (*(int *)&(this->Hash).field_0x8 == *(int *)&(this->Hash).field_0x34) {
    dVar1 = (this->InvalidValue).field0_0x0._s_0.Y;
    dVar12 = (this->InvalidValue).field0_0x0._s_0.Z;
    *(double *)__return_storage_ptr__ = (this->InvalidValue).field0_0x0._s_0.X;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar1;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar12;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0x7fefffffffffffff;
  }
  else {
    local_b8 = (this->InvalidValue).field0_0x0._s_0.Z;
    local_80 = &local_c8;
    local_120 = param_2 * param_2;
    local_78 = &local_120;
    local_70 = param_3;
    local_c8 = (this->InvalidValue).field0_0x0._s_0.X;
    dStack_c0 = (this->InvalidValue).field0_0x0._s_0.Y;
    local_68 = param_4;
    local_88 = this;
    TWrapAroundGridIndexer3<double>::ToGrid(&this->Indexer,(FVector3i *)&local_118._s_0,param_1);
    local_e8._8_4_ = local_118._s_0.Z;
    TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
              ((TBaseKeyIterator<1> *)&local_108._s_0,
               (TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
                *)local_88,(FVector3i *)&local_e8);
    local_b0._0_8_ = local_108._s_0.X;
    local_b0._16_8_ = local_108._s_0.Z;
    while (local_108._16_4_ != -1) {
      lVar11 = (longlong)(int)local_108._16_4_ * 0x30 +
               *(longlong *)
                &((TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
                   *)local_b0._0_8_)->Elements;
      cVar8 = (**(code **)local_68)(*(undefined8 *)&local_68->field_0x8,lVar11 + 0x10);
      if ((cVar8 == '\0') &&
         (dVar12 = (double)(**(code **)local_70)(*(undefined8 *)&local_70->field_0x8,lVar11 + 0x10),
         dVar12 < *local_78)) {
        dVar1 = *(double *)(lVar11 + 0x18);
        *local_80 = *(double *)(lVar11 + 0x10);
        local_80[1] = dVar1;
        local_80[2] = *(double *)(lVar11 + 0x20);
        *local_78 = dVar12;
        *(double *)__return_storage_ptr__ = local_c8;
        *(double *)&__return_storage_ptr__->field_0x8 = dStack_c0;
        *(double *)&__return_storage_ptr__->field_0x10 = local_b8;
        *(double *)&__return_storage_ptr__->field_0x18 = local_120;
        return __return_storage_ptr__;
      }
      TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)local_b0);
      local_108._16_4_ = local_b0._16_4_;
    }
    dVar12 = (param_1->field0_0x0)._s_0.X;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    local_e8._s_0.X = dVar12 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    local_108._s_0.X = dVar12 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2 + dVar1;
    local_108._s_0.Y = dVar1 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2 + dVar2;
    local_108._s_0.Z = dVar2 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2;
    TWrapAroundGridIndexer3<double>::ToGrid
              (&this->Indexer,(FVector3i *)&local_98._s_0,(TVector<double> *)&local_108._s_0);
    pFVar10 = TWrapAroundGridIndexer3<double>::ToGrid
                        (&this->Indexer,(FVector3i *)&local_108._s_0,
                         (TVector<double> *)&local_e8._s_0);
    iVar3 = (pFVar10->field0_0x0)._s_0.X;
    iVar4 = (pFVar10->field0_0x0)._s_0.Y;
    iVar5 = (pFVar10->field0_0x0)._s_0.Z;
    for (; iVar7 = local_98._s_0.Y, local_98._s_0.Z != iVar5 + 1;
        local_98._s_0.Z = local_98._s_0.Z + 1) {
      for (; uVar6 = local_98._s_0.X, iVar7 != iVar4 + 1; iVar7 = iVar7 + 1) {
        for (; uVar6 != iVar3 + 1; uVar6 = uVar6 + 1) {
          local_e8._4_4_ = iVar7;
          local_e8._0_4_ = uVar6;
          if (((uVar6 != local_118._s_0.X) || (iVar7 != local_118._s_0.Y)) ||
             (local_98._s_0.Z != local_118._s_0.Z)) {
            local_108._s_0.X = local_e8._s_0.X;
            local_108._12_4_ = (undefined4)((ulonglong)local_108._s_0.Y >> 0x20);
            local_108._8_4_ = local_98._s_0.Z;
            bVar9 = `UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::
                    FindInRadiusHelper<1>'::__l2::<lambda_1>::operator()
                              (&local_88,(FVector3i *)&local_108._s_0);
            if (bVar9) goto LAB_145f72a98;
          }
        }
      }
    }
LAB_145f72a98:
    if (((local_c8 == (this->InvalidValue).field0_0x0._s_0.X) &&
        (dStack_c0 == (this->InvalidValue).field0_0x0._s_0.Y)) &&
       (local_b8 == (this->InvalidValue).field0_0x0._s_0.Z)) {
      local_120 = __real_7fefffffffffffff;
    }
    *(double *)__return_storage_ptr__ = local_c8;
    *(double *)&__return_storage_ptr__->field_0x8 = dStack_c0;
    *(double *)&__return_storage_ptr__->field_0x10 = local_b8;
    *(double *)&__return_storage_ptr__->field_0x18 = local_120;
  }
  return __return_storage_ptr__;
}

// operator() @ 145f7ea10

bool __thiscall
`UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindInRadiusHelper<1>'::__l2::
<lambda_1>::operator()(void *this,FVector3i *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  TBaseKeyIterator<1> local_38;
  TBaseKeyIterator<1> local_20;
  
  TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_20,
             *(TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
               **)this,(TRetainedRef<UE::Geometry::FVector3i_const_>)param_1);
  local_38._16_8_ = ZEXT48((uint)local_20.Index);
  local_38.Set = local_20.Set;
  while( true ) {
    if (local_20.Index == 0xffffffff) {
      return false;
    }
    lVar4 = (longlong)local_20.Index * 0x30 + *(longlong *)&(local_38.Set)->Elements;
    cVar3 = (*(code *)**(undefined8 **)((longlong)this + 0x20))
                      ((*(undefined8 **)((longlong)this + 0x20))[1],lVar4 + 0x10);
    if ((cVar3 == '\0') &&
       (dVar5 = (double)(*(code *)**(undefined8 **)((longlong)this + 0x18))
                                  ((*(undefined8 **)((longlong)this + 0x18))[1],lVar4 + 0x10),
       dVar5 < **(double **)((longlong)this + 0x10))) break;
    TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::operator++(&local_38);
    local_20.Index = local_38.Index;
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  *puVar1 = *(undefined8 *)(lVar4 + 0x10);
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined8 *)(lVar4 + 0x20);
  **(double **)((longlong)this + 0x10) = dVar5;
  return true;
}

