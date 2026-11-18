// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// EnumeratePointsInBall @ 14339cbb0

void __thiscall
UE::Geometry::TPointHashGrid3<int,double>::EnumeratePointsInBall
          (TPointHashGrid3<int,double> *this,TVector<double> *param_1,double param_2,
          TFunctionRef<double___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int,double)> *param_4,
          TFunctionRef<bool___cdecl(int_const_&)> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined4 local_f8 [2];
  ulonglong local_f0;
  ulonglong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  double local_d0;
  longlong local_c8;
  longlong local_c0;
  TBaseKeyIterator<1> local_b8;
  TBaseKeyIterator<1> local_a0 [5];
  ulonglong uVar10;
  
  dVar13 = __real_41f0000000000000;
  if (*(int *)&(this->Hash).field_0x8 != *(int *)&(this->Hash).field_0x34) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar4 = FGenericPlatformMath::Fmod
                      (((param_1->field0_0x0)._s_0.Z -
                       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2) /
                       (this->Indexer).CellSize,__real_41f0000000000000);
    if (dVar4 < 0.0) {
      dVar4 = dVar4 + dVar13;
    }
    dVar1 = FGenericPlatformMath::Fmod((dVar1 - dVar14) / (this->Indexer).CellSize,dVar13);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + dVar13;
    }
    dVar2 = FGenericPlatformMath::Fmod((dVar2 - dVar3) / (this->Indexer).CellSize,dVar13);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar13;
    }
    uVar9 = (ulonglong)dVar2;
    uVar12 = (ulonglong)dVar1;
    uVar11 = (ulonglong)dVar4;
    dVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    dVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    local_f0 = uVar9;
    local_e8 = uVar12;
    dVar3 = FGenericPlatformMath::Fmod
                      ((UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2 +
                       (param_1->field0_0x0)._s_0.Z) / (this->Indexer).CellSize,dVar13);
    if (dVar3 < 0.0) {
      dVar3 = dVar3 + dVar13;
    }
    dVar2 = FGenericPlatformMath::Fmod((dVar4 + dVar2) / (this->Indexer).CellSize,dVar13);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar13;
    }
    dVar1 = FGenericPlatformMath::Fmod((dVar14 + dVar1) / (this->Indexer).CellSize,dVar13);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + dVar13;
    }
    lVar7 = (longlong)dVar3;
    lVar6 = (longlong)dVar2;
    local_c8 = lVar6;
    local_c0 = lVar7;
    if ((int)uVar11 <= (int)lVar7) {
      do {
        if ((int)local_e8 <= (int)lVar6) {
          do {
            uVar10 = uVar9;
            uVar9 = local_f0;
            lVar7 = local_c0;
            uVar8 = (uint)local_f0;
            while (local_f0 = uVar9, local_c0 = lVar7, (int)uVar8 <= (int)(longlong)dVar1) {
              local_e0 = (int)uVar10;
              local_dc = (int)uVar12;
              local_d8 = (int)uVar11;
              TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                        (local_a0,(TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                                   *)this,(FVector3i *)&local_e0);
              local_b8._16_8_ = ZEXT48((uint)local_a0[0].Index);
              local_b8.Set = local_a0[0].Set;
              uVar8 = local_a0[0].Index;
              while (uVar8 != 0xffffffff) {
                lVar6 = *(longlong *)&(local_b8.Set)->Elements + (longlong)(int)uVar8 * 0x18;
                cVar5 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,lVar6 + 0xc);
                if ((cVar5 == '\0') &&
                   (dVar13 = (double)(**(code **)param_3)
                                               (*(undefined8 *)&param_3->field_0x8,lVar6 + 0xc),
                   dVar13 <= param_2 * param_2)) {
                  local_f8[0] = *(undefined4 *)(lVar6 + 0xc);
                  local_d0 = dVar13;
                  cVar5 = (**(code **)param_4)
                                    (*(undefined8 *)&param_4->field_0x8,local_f8,&local_d0);
                  if (cVar5 == '\0') {
                    return;
                  }
                }
                TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::operator++(&local_b8);
                uVar8 = local_b8.Index;
              }
              uVar8 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar8;
              lVar6 = local_c8;
              uVar9 = local_f0;
              lVar7 = local_c0;
            }
            uVar8 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar8;
          } while ((int)uVar8 <= (int)lVar6);
        }
        uVar8 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        uVar12 = local_e8;
      } while ((int)uVar8 <= (int)lVar7);
    }
  }
  return;
}

// FindInRadiusHelper<0> @ 14355dd60

TTuple<int,double> * __thiscall
UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
          (TPointHashGrid3<int,double> *this,TTuple<int,double> *__return_storage_ptr__,
          TVector<double> *param_1,double param_2,TFunctionRef<double___cdecl(int_const_&)> *param_3
          ,TFunctionRef<bool___cdecl(int_const_&)> *param_4)

{
  TWrapAroundGridIndexer3<double> *this_00;
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FVector3i *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double dVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  int local_108;
  int local_104;
  double local_100;
  FVector3i_u_0 local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  FVector3i_u_0 local_a8;
  TPointHashGrid3<int,double> *local_98;
  int *local_90;
  double *local_88;
  TFunctionRef<double___cdecl(int_const_&)> *local_80;
  TFunctionRef<bool___cdecl(int_const_&)> *local_78;
  undefined1 local_70 [72];
  
  local_108 = this->InvalidValue;
  if (*(int *)&(this->Hash).field_0x8 == *(int *)&(this->Hash).field_0x34) {
    *(int *)__return_storage_ptr__ = local_108;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x7fefffffffffffff;
  }
  else {
    local_90 = &local_108;
    local_88 = &local_100;
    this_00 = &this->Indexer;
    local_100 = param_2 * param_2;
    local_80 = param_3;
    local_78 = param_4;
    local_98 = this;
    TWrapAroundGridIndexer3<double>::ToGrid(this_00,(FVector3i *)&local_f8._s_0,param_1);
    bVar5 = false;
    local_c8._8_4_ = local_f8._s_0.Z;
    TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
              ((TBaseKeyIterator<1> *)&local_e8._s_0,
               (TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                *)local_98,(FVector3i *)&local_c8);
    local_70._0_8_ = local_e8._s_0.X;
    local_70._8_8_ = local_e8._s_0.Y;
    local_70._16_8_ = local_e8._s_0.Z;
    if (local_e8._16_4_ != -1) {
      do {
        lVar1 = *(longlong *)
                 (TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_70._0_8_ + (longlong)(int)local_e8._16_4_ * 0x18;
        cVar6 = (**(code **)local_78)(*(undefined8 *)&local_78->field_0x8,lVar1 + 0xc);
        if ((cVar6 == '\0') &&
           (dVar12 = (double)(**(code **)local_80)(*(undefined8 *)&local_80->field_0x8,lVar1 + 0xc),
           dVar12 < *local_88)) {
          bVar5 = true;
          *local_90 = *(int *)(lVar1 + 0xc);
          *local_88 = dVar12;
        }
        TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)local_70);
        local_e8._16_4_ = local_70._16_4_;
      } while (local_70._16_4_ != -1);
      if (bVar5) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_100;
        auVar14 = sqrtpd(auVar14,auVar14);
        param_2 = auVar14._0_8_;
      }
    }
    dVar12 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    local_c8._s_0.X = dVar12 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    local_c8._s_0.Y = dVar2 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    local_e8._s_0.X = dVar12 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    local_e8._s_0.Y = dVar2 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    local_c8._s_0.Z = dVar3 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2;
    local_e8._s_0.Z = dVar3 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2;
    TWrapAroundGridIndexer3<double>::ToGrid
              (this_00,(FVector3i *)&local_a8._s_0,(TVector<double> *)&local_e8._s_0);
    pFVar8 = TWrapAroundGridIndexer3<double>::ToGrid
                       (this_00,(FVector3i *)&local_e8._s_0,(TVector<double> *)&local_c8._s_0);
    iVar4 = (pFVar8->field0_0x0)._s_0.Y;
    iVar11 = (pFVar8->field0_0x0)._s_0.X + 1;
    iVar7 = (pFVar8->field0_0x0)._s_0.Z + 1;
    uVar9 = local_a8._s_0.X;
    local_104 = iVar7;
    uVar13 = local_a8._s_0.Y;
    if (local_a8._s_0.Z != iVar7) {
      do {
        for (; uVar13 != iVar4 + 1; uVar13 = uVar13 + 1) {
          uVar10 = uVar9;
          if (uVar9 != iVar11) {
            do {
              local_c8._4_4_ = uVar13;
              local_c8._0_4_ = uVar9;
              if (((uVar9 != local_f8._s_0.X) || (uVar13 != local_f8._s_0.Y)) ||
                 (local_a8._s_0.Z != local_f8._s_0.Z)) {
                local_e8._s_0.X = local_c8._s_0.X;
                local_e8._8_4_ = local_a8._s_0.Z;
                `UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>'::__l2::<lambda_1>
                ::operator()(&local_98,(FVector3i *)&local_e8._s_0);
              }
              uVar9 = uVar9 + 1;
              uVar10 = local_a8._s_0.X;
            } while (uVar9 != iVar11);
          }
          iVar7 = local_104;
          uVar9 = uVar10;
        }
        local_a8._s_0.Z = local_a8._s_0.Z + 1;
        uVar13 = local_a8._s_0.Y;
      } while (local_a8._s_0.Z != iVar7);
    }
    if (local_108 == this->InvalidValue) {
      uVar9 = (undefined4)__real_7fefffffffffffff;
      uVar13 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    }
    else {
      uVar9 = SUB84(local_100,0);
      uVar13 = (undefined4)((ulonglong)local_100 >> 0x20);
    }
    *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar13,uVar9);
    *(int *)__return_storage_ptr__ = local_108;
  }
  return __return_storage_ptr__;
}

// TPointHashGrid3<int,double> @ 143566f80

TPointHashGrid3<int,double> * __thiscall
UE::Geometry::TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
          (TPointHashGrid3<int,double> *this,double param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TPointHashGrid3<int,double> *pTVar3;
  
  if (param_1 <= __real_3e45798ee2308c3a) {
    param_1 = __real_3e45798ee2308c3a;
  }
  *(undefined8 *)&(this->Hash).field_0x8 = 0;
  *(undefined8 *)&this->Hash = 0;
  *(undefined8 *)&(this->Hash).field_0x20 = 0;
  bVar2 = param_1 < __real_3e45798ee2308c3a;
  *(undefined4 *)&(this->Hash).field_0x28 = 0;
  *(undefined4 *)&(this->Hash).field_0x2c = 0x80;
  *(undefined4 *)&(this->Hash).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Hash).field_0x34 = 0;
  *(undefined8 *)&(this->Hash).field_0x40 = 0;
  *(undefined4 *)&(this->Hash).field_0x48 = 0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  (this->Indexer).CellSize = param_1;
  if (bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2954325157570674611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                       ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPointHashGrid3<int,double> *)(*pcVar1)();
      return pTVar3;
    }
    this->InvalidValue = param_2;
    return this;
  }
  this->InvalidValue = param_2;
  return this;
}

// operator() @ 143569d50

bool __thiscall
`UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>'::__l2::<lambda_1>::operator()
          (void *this,FVector3i *param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  TBaseKeyIterator<1> local_38;
  TBaseKeyIterator<1> local_20;
  
  bVar3 = false;
  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_20,
             *(TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
               **)this,(TRetainedRef<UE::Geometry::FVector3i_const_>)param_1);
  local_38._16_8_ = ZEXT48((uint)local_20.Index);
  local_38.Set = local_20.Set;
  while (local_20.Index != 0xffffffff) {
    lVar1 = *(longlong *)&(local_38.Set)->Elements + (longlong)local_20.Index * 0x18;
    cVar2 = (*(code *)**(undefined8 **)((longlong)this + 0x20))
                      ((*(undefined8 **)((longlong)this + 0x20))[1],lVar1 + 0xc);
    if ((cVar2 == '\0') &&
       (dVar4 = (double)(*(code *)**(undefined8 **)((longlong)this + 0x18))
                                  ((*(undefined8 **)((longlong)this + 0x18))[1],lVar1 + 0xc),
       dVar4 < **(double **)((longlong)this + 0x10))) {
      bVar3 = true;
      **(undefined4 **)((longlong)this + 8) = *(undefined4 *)(lVar1 + 0xc);
      **(double **)((longlong)this + 0x10) = dVar4;
    }
    TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::operator++(&local_38);
    local_20.Index = local_38.Index;
  }
  return bVar3;
}

// FindPointsInBall @ 143593790

int __thiscall
UE::Geometry::TPointHashGrid3<int,double>::FindPointsInBall
          (TPointHashGrid3<int,double> *this,TVector<double> *param_1,double param_2,
          TFunctionRef<double___cdecl(int_const_&)> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(int_const_&)> *param_5)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  uint local_f0;
  int local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  TBaseKeyIterator<1> local_c0;
  TBaseKeyIterator<1> local_a8 [5];
  
  dVar6 = __real_41f0000000000000;
  if (*(int *)&(this->Hash).field_0x8 == *(int *)&(this->Hash).field_0x34) {
    iVar13 = 0;
  }
  else {
    iVar13 = param_4->ArrayNum;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    dVar3 = (param_1->field0_0x0)._s_0.X;
    dVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar8 = FGenericPlatformMath::Fmod
                      (((param_1->field0_0x0)._s_0.Z -
                       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2) /
                       (this->Indexer).CellSize,__real_41f0000000000000);
    if (dVar8 < 0.0) {
      dVar8 = dVar8 + dVar6;
    }
    dVar2 = FGenericPlatformMath::Fmod((dVar2 - dVar21) / (this->Indexer).CellSize,dVar6);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar6;
    }
    dVar3 = FGenericPlatformMath::Fmod((dVar3 - dVar7) / (this->Indexer).CellSize,dVar6);
    if (dVar3 < 0.0) {
      dVar3 = dVar3 + dVar6;
    }
    uVar18 = (ulonglong)dVar8;
    dVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    dVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar7 = (param_1->field0_0x0)._s_0.X;
    dVar8 = (param_1->field0_0x0)._s_0.Y;
    dVar21 = FGenericPlatformMath::Fmod
                       ((UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2 +
                        (param_1->field0_0x0)._s_0.Z) / (this->Indexer).CellSize,dVar6);
    if (dVar21 < 0.0) {
      dVar21 = dVar21 + dVar6;
    }
    dVar8 = FGenericPlatformMath::Fmod((dVar9 + dVar8) / (this->Indexer).CellSize,dVar6);
    if (dVar8 < 0.0) {
      dVar8 = dVar8 + dVar6;
    }
    dVar7 = FGenericPlatformMath::Fmod((dVar10 + dVar7) / (this->Indexer).CellSize,dVar6);
    if (dVar7 < 0.0) {
      dVar7 = dVar7 + dVar6;
    }
    lVar16 = (longlong)dVar21;
    lVar15 = (longlong)dVar8;
    local_d0 = lVar15;
    local_c8 = lVar16;
    if ((int)uVar18 <= (int)lVar16) {
      do {
        local_e8 = (int)(longlong)dVar2;
        uVar20 = (longlong)dVar2;
        if (local_e8 <= (int)lVar15) {
          do {
            local_f0 = (uint)(longlong)dVar3;
            uVar17 = (longlong)dVar3;
            lVar16 = local_c8;
            while (local_c8 = lVar16, (int)local_f0 <= (int)(longlong)dVar7) {
              local_e0 = (int)uVar17;
              local_dc = (int)uVar20;
              local_d8 = (int)uVar18;
              TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                        (local_a8,(TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                                   *)this,(FVector3i *)&local_e0);
              local_c0._16_8_ = ZEXT48((uint)local_a8[0].Index);
              local_c0.Set = local_a8[0].Set;
              uVar19 = local_a8[0].Index;
              while (uVar19 != 0xffffffff) {
                pFVar1 = (FScriptContainerElement *)
                         (*(longlong *)&(local_c0.Set)->Elements + 0xc +
                         (longlong)(int)uVar19 * 0x18);
                cVar11 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,pFVar1);
                if ((cVar11 == '\0') &&
                   (dVar6 = (double)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pFVar1),
                   dVar6 < param_2 * param_2)) {
                  pFVar4 = (param_4->AllocatorInstance).Data;
                  if ((pFVar4 <= pFVar1) &&
                     ((pFVar1 < pFVar4 + (longlong)param_4->ArrayMax * 4 &&
                      (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar12)))) {
                    pcVar5 = (code *)swi(3);
                    iVar13 = (*pcVar5)();
                    return iVar13;
                  }
                  iVar14 = param_4->ArrayNum;
                  if (iVar14 == param_4->ArrayMax) {
                    iVar14 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar14 + 1;
                  *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 4) =
                       *(undefined4 *)pFVar1;
                }
                TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::operator++(&local_c0);
                uVar19 = local_c0.Index;
              }
              local_f0 = (int)uVar17 + 1;
              uVar17 = (ulonglong)local_f0;
              lVar15 = local_d0;
              lVar16 = local_c8;
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 <= (int)lVar15);
        }
        uVar19 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar19;
      } while ((int)uVar19 <= (int)lVar16);
    }
    iVar13 = param_4->ArrayNum - iVar13;
  }
  return iVar13;
}

