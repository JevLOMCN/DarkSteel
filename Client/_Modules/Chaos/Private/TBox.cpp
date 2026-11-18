// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 87

// SerializeAsAABBs<int> @ 14372a730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::TBox<double,3>::SerializeAsAABBs<int>
          (FArchive *param_1,
          TMap<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
          *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar5 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar5 < 0x19) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar10 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    TSetPrivateFriend::
    Serialize<TTuple<int,Chaos::TBox<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TBox<double,3>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<int,Chaos::TBox<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TBox<double,3>,0>,FDefaultSetAllocator>
                        *)local_98);
    uVar9 = local_70;
    uStack_f4 = 1;
    local_e0 = 0;
    uStack_e4 = uVar10;
    if (local_70 != 0) {
      puVar11 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar11 = local_78;
      }
      uVar12 = *puVar11;
      local_e0 = 0;
      uVar10 = 0;
      while (uVar12 == 0) {
        lVar7 = (longlong)(int)uVar10;
        local_e0 = local_e0 + 0x20;
        uVar10 = uVar10 + 1;
        uStack_e4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_14372a861;
        uVar12 = (puVar11 + 1)[lVar7];
      }
      uStack_f4 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_d0 = (int)lVar7;
      uStack_e4 = local_d0 + -1 + local_e0;
      if ((int)local_70 < (int)uStack_e4) {
        uStack_e4 = local_70;
      }
    }
LAB_14372a861:
    local_100 = (longlong *)local_98;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar12 = local_70 & 0xffffffe0;
    iStack_d8 = local_98._8_4_ - local_64;
    uStack_e8 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_e4;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uStack_f4,uVar10);
    iVar5 = (int)local_70 >> 5;
    TStack_c0._28_4_ = uStack_e4;
    TStack_c0.BaseBitIndex = local_e0;
    uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
    bVar6 = (byte)local_70;
    uStack_f8 = uVar10;
    uStack_dc = uStack_e4;
    local_c8 = local_100;
    TStack_c0.Array = local_f0;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != local_70) {
      puVar11 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar11 = local_78;
      }
      uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar5];
      while (uVar10 == 0) {
        lVar7 = (longlong)iVar5;
        uVar12 = uVar12 + 0x20;
        iVar5 = iVar5 + 1;
        uVar9 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
        goto LAB_14372a96c;
        uVar10 = (puVar11 + 1)[lVar7];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar12;
      if ((int)local_70 < (int)uVar9) {
        uVar9 = local_70;
      }
    }
LAB_14372a96c:
    while( true ) {
      plVar3 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<TTuple<int,Chaos::TBox<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_c0.CurrentBitIndex == uVar9) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) break;
      piVar8 = (int *)((longlong)TStack_c0.CurrentBitIndex * 0x60 + *plVar3);
      TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
      ::Emplace<int_const_&,Chaos::TAABB<double,3>_const_&>
                ((TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
                  *)param_2,piVar8,(TAABB<double,3> *)(piVar8 + 10));
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,Chaos::TBox<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,Chaos::TBox<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar5 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (uint *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  else {
    TSetPrivateFriend::
    Serialize<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<int,Chaos::TAABB<double,3>_>,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>,FDefaultSetAllocator>
                        *)param_2);
  }
  return;
}

// TBox<double,3> @ 14373aa80

TBox<double,3> * __thiscall
Chaos::TBox<double,3>::TBox<double,3>(TBox<double,3> *this,TBox<double,3> *param_1)

{
  undefined8 uVar1;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x01');
  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  uVar1 = *(undefined8 *)&(param_1->AABB).MMin.field_0x8;
  *(undefined8 *)&(this->AABB).MMin = *(undefined8 *)&(param_1->AABB).MMin;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = *(undefined8 *)&(param_1->AABB).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->AABB).MMax.field_0x8;
  *(undefined8 *)&(this->AABB).MMax = *(undefined8 *)&(param_1->AABB).MMax;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = *(undefined8 *)&(param_1->AABB).MMax.field_0x10;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// TBox<double,3> @ 14373aaf0

TBox<double,3> * __thiscall
Chaos::TBox<double,3>::TBox<double,3>(TBox<double,3> *this,TBox<double,3> *param_1)

{
  undefined8 uVar1;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x01');
  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  uVar1 = *(undefined8 *)&(param_1->AABB).MMin.field_0x8;
  *(undefined8 *)&(this->AABB).MMin = *(undefined8 *)&(param_1->AABB).MMin;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = *(undefined8 *)&(param_1->AABB).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->AABB).MMax.field_0x8;
  *(undefined8 *)&(this->AABB).MMax = *(undefined8 *)&(param_1->AABB).MMax;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = *(undefined8 *)&(param_1->AABB).MMax.field_0x10;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// TBox<double,3> @ 14373ab60

TBox<double,3> * __thiscall
Chaos::TBox<double,3>::TBox<double,3>
          (TBox<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  undefined8 uVar1;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x01');
  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->AABB).MMin = *(undefined8 *)param_1;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->AABB).MMax = *(undefined8 *)param_2;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = *(undefined8 *)&param_2->field_0x10;
  return this;
}

// TBox<double,3> @ 14373abd0

TBox<double,3> * __thiscall
Chaos::TBox<double,3>::TBox<double,3>
          (TBox<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x01');
  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  *(undefined8 *)&(this->AABB).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->AABB).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = 0xffefffffffffffff;
  dVar5 = *(double *)&param_1->field_0x10;
  dVar6 = *(double *)&param_2->field_0x10;
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->AABB).MMin = *(undefined8 *)param_1;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMax = uVar2;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = uVar3;
  *(double *)&(this->AABB).MMax.field_0x10 = dVar6;
  *(double *)&(this->AABB).MMin.field_0x10 = dVar5;
  dVar6 = dVar6 - dVar5;
  dVar5 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
  dVar4 = *(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin;
  if (((dVar5 <= dVar4) || (dVar6 <= dVar4)) && (dVar4 = dVar6, dVar5 <= dVar6)) {
    dVar4 = dVar5;
  }
  dVar5 = dVar4 * __real_3fe0000000000000;
  if (param_3 <= dVar4 * __real_3fe0000000000000) {
    dVar5 = param_3;
  }
  *(float *)&this->_padding_ = (float)dVar5;
  return this;
}

// TBox<double,3> @ 14373acc0

TBox<double,3> * __thiscall Chaos::TBox<double,3>::TBox<double,3>(TBox<double,3> *this)

{
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x01');
  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  *(undefined8 *)&(this->AABB).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->AABB).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = 0xffefffffffffffff;
  return this;
}

// ~TBox<float,3> @ 14373dfa0

void __thiscall Chaos::TBox<float,3>::~TBox<float,3>(TBox<float,3> *this)

{
  this->_padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// ~TBox<double,3> @ 14373dfc0

void __thiscall Chaos::TBox<double,3>::~TBox<double,3>(TBox<double,3> *this)

{
  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// operator= @ 143741630

TBox<double,3> * __thiscall
Chaos::TBox<double,3>::operator=(TBox<double,3> *this,TBox<double,3> *param_1)

{
  undefined8 uVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  uVar1 = *(undefined8 *)&(param_1->AABB).MMin.field_0x8;
  *(undefined8 *)&(this->AABB).MMin = *(undefined8 *)&(param_1->AABB).MMin;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = *(undefined8 *)&(param_1->AABB).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->AABB).MMax.field_0x8;
  *(undefined8 *)&(this->AABB).MMax = *(undefined8 *)&(param_1->AABB).MMax;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = *(undefined8 *)&(param_1->AABB).MMax.field_0x10;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// operator= @ 143741680

TBox<double,3> * __thiscall
Chaos::TBox<double,3>::operator=(TBox<double,3> *this,TBox<double,3> *param_1)

{
  undefined8 uVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  uVar1 = *(undefined8 *)&(param_1->AABB).MMin.field_0x8;
  *(undefined8 *)&(this->AABB).MMin = *(undefined8 *)&(param_1->AABB).MMin;
  *(undefined8 *)&(this->AABB).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMin.field_0x10 = *(undefined8 *)&(param_1->AABB).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->AABB).MMax.field_0x8;
  *(undefined8 *)&(this->AABB).MMax = *(undefined8 *)&(param_1->AABB).MMax;
  *(undefined8 *)&(this->AABB).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->AABB).MMax.field_0x10 = *(undefined8 *)&(param_1->AABB).MMax.field_0x10;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// BoundingBox @ 1437559d0

TAABB<double,3> * __thiscall
Chaos::TBox<float,3>::BoundingBox(TBox<float,3> *this,TAABB<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  
  fVar1 = *(float *)&(this->AABB).MMin.field_0x8;
  fVar2 = *(float *)&(this->AABB).MMin;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 =
       (double)*(float *)&(this->AABB).MMin.field_0x4;
  *(double *)&__return_storage_ptr__->MMin = (double)fVar2;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar1;
  uVar3 = *(undefined8 *)&(this->AABB).MMax.field_0x4;
  dVar5 = (double)(float)((ulonglong)uVar3 >> 0x20);
  *(double *)&__return_storage_ptr__->MMax = (double)*(float *)&(this->AABB).MMax;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (double)(float)uVar3;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->MMax).field_0x8 = auVar4;
  return __return_storage_ptr__;
}

// BoundingBox @ 143755a20

TAABB<double,3> * __thiscall
Chaos::TBox<double,3>::BoundingBox(TBox<double,3> *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->AABB).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->AABB).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->AABB).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->AABB).MMax;
  uVar3 = *(undefined8 *)&(this->AABB).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->AABB).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// Center @ 143759890

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::Center(TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&(this->AABB).MMin.field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * __real_3fe0000000000000 +
       *(double *)&(this->AABB).MMin;
  dVar2 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar3 = *(double *)&(this->AABB).MMin.field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar2 - dVar3) * dVar4 + *(double *)&(this->AABB).MMin.field_0x10;
  return __return_storage_ptr__;
}

// ClampedMargin @ 1437598f0

double __thiscall Chaos::TBox<double,3>::ClampedMargin(TBox<double,3> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
  dVar1 = *(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin;
  dVar2 = *(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10;
  if (((dVar3 <= dVar1) || (dVar2 <= dVar1)) && (dVar1 = dVar2, dVar3 <= dVar2)) {
    dVar1 = dVar3;
  }
  dVar2 = dVar1 * __real_3fe0000000000000;
  if (param_1 <= dVar1 * __real_3fe0000000000000) {
    dVar2 = param_1;
  }
  return dVar2;
}

// ComputeLocalSamplePoints @ 143759ea0

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TBox<double,3>::ComputeLocalSamplePoints
          (TBox<double,3> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar12;
  double dVar13;
  double dVar14;
  
  dVar10 = __real_3fe0000000000000;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  dVar2 = *(double *)&(this->AABB).MMin.field_0x10;
  dVar3 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar8 = *(double *)&(this->AABB).MMin;
  dVar6 = *(double *)&(this->AABB).MMin.field_0x8;
  dVar9 = *(double *)&(this->AABB).MMax;
  dVar7 = *(double *)&(this->AABB).MMax.field_0x8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  dVar14 = (dVar3 - dVar2) * dVar10 + dVar2;
  __return_storage_ptr__->ArrayMax = 0;
  dVar2 = dVar2 - dVar14;
  dVar3 = dVar3 - dVar14;
  dVar14 = (dVar9 - dVar8) * dVar10 + dVar8;
  dVar13 = (dVar7 - dVar6) * dVar10 + dVar6;
  dVar8 = dVar8 - dVar14;
  dVar9 = dVar9 - dVar14;
  dVar6 = dVar6 - dVar13;
  dVar7 = dVar7 - dVar13;
  dVar14 = (dVar3 - dVar2) * dVar10 + dVar2;
  dVar13 = (dVar9 - dVar8) * dVar10 + dVar8;
  dVar10 = (dVar7 - dVar6) * dVar10 + dVar6;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x1a,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  if (*piVar1 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)pFVar4 = dVar8;
  *(double *)(pFVar4 + 8) = dVar6;
  *(double *)(pFVar4 + 0x10) = dVar2;
  if (*piVar1 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x18) = dVar13;
  *(double *)(pFVar4 + 0x20) = dVar6;
  *(double *)(pFVar4 + 0x28) = dVar2;
  if (*piVar1 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x30) = dVar9;
  *(double *)(pFVar4 + 0x38) = dVar6;
  *(double *)(pFVar4 + 0x40) = dVar2;
  if (*piVar1 < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x48) = dVar8;
  *(double *)(pFVar4 + 0x50) = dVar10;
  *(double *)(pFVar4 + 0x58) = dVar2;
  if (*piVar1 < 5) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x60) = dVar13;
  *(double *)(pFVar4 + 0x68) = dVar10;
  *(double *)(pFVar4 + 0x70) = dVar2;
  if (*piVar1 < 6) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x78) = dVar9;
  *(double *)(pFVar4 + 0x80) = dVar10;
  *(double *)(pFVar4 + 0x88) = dVar2;
  if (*piVar1 < 7) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x90) = dVar8;
  *(double *)(pFVar4 + 0x98) = dVar7;
  *(double *)(pFVar4 + 0xa0) = dVar2;
  if (*piVar1 < 8) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xa8) = dVar13;
  *(double *)(pFVar4 + 0xb0) = dVar7;
  *(double *)(pFVar4 + 0xb8) = dVar2;
  if (*piVar1 < 9) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xc0) = dVar9;
  *(double *)(pFVar4 + 200) = dVar7;
  *(double *)(pFVar4 + 0xd0) = dVar2;
  if (*piVar1 < 10) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xd8) = dVar8;
  *(double *)(pFVar4 + 0xe0) = dVar6;
  *(double *)(pFVar4 + 0xe8) = dVar14;
  if (*piVar1 < 0xb) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xf0) = dVar13;
  *(double *)(pFVar4 + 0xf8) = dVar6;
  *(double *)(pFVar4 + 0x100) = dVar14;
  if (*piVar1 < 0xc) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x108) = dVar9;
  *(double *)(pFVar4 + 0x110) = dVar6;
  *(double *)(pFVar4 + 0x118) = dVar14;
  if (*piVar1 < 0xd) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x120) = dVar8;
  *(double *)(pFVar4 + 0x128) = dVar10;
  *(double *)(pFVar4 + 0x130) = dVar14;
  if (*piVar1 < 0xe) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x138) = dVar9;
  *(double *)(pFVar4 + 0x140) = dVar10;
  *(double *)(pFVar4 + 0x148) = dVar14;
  if (*piVar1 < 0xf) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x150) = dVar8;
  *(double *)(pFVar4 + 0x158) = dVar7;
  *(double *)(pFVar4 + 0x160) = dVar14;
  if (*piVar1 < 0x10) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x168) = dVar13;
  *(double *)(pFVar4 + 0x170) = dVar7;
  *(double *)(pFVar4 + 0x178) = dVar14;
  if (*piVar1 < 0x11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x180) = dVar9;
  *(double *)(pFVar4 + 0x188) = dVar7;
  *(double *)(pFVar4 + 400) = dVar14;
  if (*piVar1 < 0x12) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x198) = dVar8;
  *(double *)(pFVar4 + 0x1a0) = dVar6;
  *(double *)(pFVar4 + 0x1a8) = dVar3;
  if (*piVar1 < 0x13) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1b0) = dVar13;
  *(double *)(pFVar4 + 0x1b8) = dVar6;
  *(double *)(pFVar4 + 0x1c0) = dVar3;
  if (*piVar1 < 0x14) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1c8) = dVar9;
  *(double *)(pFVar4 + 0x1d0) = dVar6;
  *(double *)(pFVar4 + 0x1d8) = dVar3;
  if (*piVar1 < 0x15) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1e0) = dVar8;
  *(double *)(pFVar4 + 0x1e8) = dVar10;
  *(double *)(pFVar4 + 0x1f0) = dVar3;
  if (*piVar1 < 0x16) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1f8) = dVar13;
  *(double *)(pFVar4 + 0x200) = dVar10;
  *(double *)(pFVar4 + 0x208) = dVar3;
  if (*piVar1 < 0x17) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x210) = dVar9;
  *(double *)(pFVar4 + 0x218) = dVar10;
  *(double *)(pFVar4 + 0x220) = dVar3;
  if (*piVar1 < 0x18) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x228) = dVar8;
  *(double *)(pFVar4 + 0x230) = dVar7;
  *(double *)(pFVar4 + 0x238) = dVar3;
  if (*piVar1 < 0x19) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x240) = dVar13;
  *(double *)(pFVar4 + 0x248) = dVar7;
  *(double *)(pFVar4 + 0x250) = dVar3;
  if (*piVar1 < 0x1a) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 600) = dVar9;
  *(double *)(pFVar4 + 0x260) = dVar7;
  *(double *)(pFVar4 + 0x268) = dVar3;
  return __return_storage_ptr__;
}

// ComputeSamplePoints @ 14375a910

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TBox<double,3>::ComputeSamplePoints
          (TBox<double,3> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar14;
  
  dVar7 = __real_3fe0000000000000;
  dVar2 = *(double *)&(this->AABB).MMin.field_0x10;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  dVar3 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar9 = *(double *)&(this->AABB).MMax;
  dVar10 = *(double *)&(this->AABB).MMax.field_0x8;
  dVar11 = *(double *)&(this->AABB).MMin;
  dVar12 = *(double *)&(this->AABB).MMin.field_0x8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  dVar6 = (dVar3 - dVar2) * dVar7 + dVar2;
  dVar8 = (dVar9 - dVar11) * dVar7 + dVar11;
  dVar7 = (dVar10 - dVar12) * dVar7 + dVar12;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x1a,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  if (*piVar1 < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)pFVar4 = dVar11;
  *(double *)(pFVar4 + 8) = dVar12;
  *(double *)(pFVar4 + 0x10) = dVar2;
  if (*piVar1 < 2) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x18) = dVar8;
  *(double *)(pFVar4 + 0x20) = dVar12;
  *(double *)(pFVar4 + 0x28) = dVar2;
  if (*piVar1 < 3) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x30) = dVar9;
  *(double *)(pFVar4 + 0x38) = dVar12;
  *(double *)(pFVar4 + 0x40) = dVar2;
  if (*piVar1 < 4) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x48) = dVar11;
  *(double *)(pFVar4 + 0x50) = dVar7;
  *(double *)(pFVar4 + 0x58) = dVar2;
  if (*piVar1 < 5) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x60) = dVar8;
  *(double *)(pFVar4 + 0x68) = dVar7;
  *(double *)(pFVar4 + 0x70) = dVar2;
  if (*piVar1 < 6) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x78) = dVar9;
  *(double *)(pFVar4 + 0x80) = dVar7;
  *(double *)(pFVar4 + 0x88) = dVar2;
  if (*piVar1 < 7) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x90) = dVar11;
  *(double *)(pFVar4 + 0x98) = dVar10;
  *(double *)(pFVar4 + 0xa0) = dVar2;
  if (*piVar1 < 8) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xa8) = dVar8;
  *(double *)(pFVar4 + 0xb0) = dVar10;
  *(double *)(pFVar4 + 0xb8) = dVar2;
  if (*piVar1 < 9) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xc0) = dVar9;
  *(double *)(pFVar4 + 200) = dVar10;
  *(double *)(pFVar4 + 0xd0) = dVar2;
  if (*piVar1 < 10) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xd8) = dVar11;
  *(double *)(pFVar4 + 0xe0) = dVar12;
  *(double *)(pFVar4 + 0xe8) = dVar6;
  if (*piVar1 < 0xb) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0xf0) = dVar8;
  *(double *)(pFVar4 + 0xf8) = dVar12;
  *(double *)(pFVar4 + 0x100) = dVar6;
  if (*piVar1 < 0xc) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x108) = dVar9;
  *(double *)(pFVar4 + 0x110) = dVar12;
  *(double *)(pFVar4 + 0x118) = dVar6;
  if (*piVar1 < 0xd) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x120) = dVar11;
  *(double *)(pFVar4 + 0x128) = dVar7;
  *(double *)(pFVar4 + 0x130) = dVar6;
  if (*piVar1 < 0xe) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x138) = dVar9;
  *(double *)(pFVar4 + 0x140) = dVar7;
  *(double *)(pFVar4 + 0x148) = dVar6;
  if (*piVar1 < 0xf) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x150) = dVar11;
  *(double *)(pFVar4 + 0x158) = dVar10;
  *(double *)(pFVar4 + 0x160) = dVar6;
  if (*piVar1 < 0x10) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x168) = dVar8;
  *(double *)(pFVar4 + 0x170) = dVar10;
  *(double *)(pFVar4 + 0x178) = dVar6;
  if (*piVar1 < 0x11) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x180) = dVar9;
  *(double *)(pFVar4 + 0x188) = dVar10;
  *(double *)(pFVar4 + 400) = dVar6;
  if (*piVar1 < 0x12) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x198) = dVar11;
  *(double *)(pFVar4 + 0x1a0) = dVar12;
  *(double *)(pFVar4 + 0x1a8) = dVar3;
  if (*piVar1 < 0x13) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1b0) = dVar8;
  *(double *)(pFVar4 + 0x1b8) = dVar12;
  *(double *)(pFVar4 + 0x1c0) = dVar3;
  if (*piVar1 < 0x14) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1c8) = dVar9;
  *(double *)(pFVar4 + 0x1d0) = dVar12;
  *(double *)(pFVar4 + 0x1d8) = dVar3;
  if (*piVar1 < 0x15) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1e0) = dVar11;
  *(double *)(pFVar4 + 0x1e8) = dVar7;
  *(double *)(pFVar4 + 0x1f0) = dVar3;
  if (*piVar1 < 0x16) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x1f8) = dVar8;
  *(double *)(pFVar4 + 0x200) = dVar7;
  *(double *)(pFVar4 + 0x208) = dVar3;
  if (*piVar1 < 0x17) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x210) = dVar9;
  *(double *)(pFVar4 + 0x218) = dVar7;
  *(double *)(pFVar4 + 0x220) = dVar3;
  if (*piVar1 < 0x18) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x228) = dVar11;
  *(double *)(pFVar4 + 0x230) = dVar10;
  *(double *)(pFVar4 + 0x238) = dVar3;
  if (*piVar1 < 0x19) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 0x240) = dVar8;
  *(double *)(pFVar4 + 0x248) = dVar10;
  *(double *)(pFVar4 + 0x250) = dVar3;
  if (*piVar1 < 0x1a) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar4 + 600) = dVar9;
  *(double *)(pFVar4 + 0x260) = dVar10;
  *(double *)(pFVar4 + 0x268) = dVar3;
  return __return_storage_ptr__;
}

// Contains @ 14375b3d0

bool __thiscall Chaos::TBox<double,3>::Contains(TBox<double,3> *this,TVector<double,3> *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double local_38 [7];
  
  lVar4 = 0;
  local_38[3] = (double)*(undefined8 *)&(this->AABB).MMax;
  local_38[4] = (double)*(undefined8 *)&(this->AABB).MMax.field_0x8;
  lVar3 = -(longlong)param_1;
  local_38[5] = (double)*(undefined8 *)&(this->AABB).MMax.field_0x10;
  while ((dVar2 = *(double *)param_1,
         *(double *)((longlong)param_1 + (longlong)local_38 + lVar3) <= dVar2 &&
         (pdVar1 = (double *)((longlong)param_1 + (longlong)local_38 + lVar3 + 0x18),
         dVar2 < *pdVar1 || dVar2 == *pdVar1))) {
    lVar4 = lVar4 + 1;
    param_1 = (TVector<double,3> *)&param_1->field_0x8;
    if (2 < lVar4) {
      return true;
    }
  }
  return false;
}

// Contains @ 14375b450

bool __thiscall
Chaos::TBox<double,3>::Contains(TBox<double,3> *this,TVector<double,3> *param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  double local_38 [7];
  
  lVar2 = 0;
  local_38[3] = (double)*(undefined8 *)&(this->AABB).MMax;
  local_38[4] = (double)*(undefined8 *)&(this->AABB).MMax.field_0x8;
  lVar1 = -(longlong)param_1;
  local_38[5] = (double)*(undefined8 *)&(this->AABB).MMax.field_0x10;
  while ((*(double *)((longlong)param_1 + (longlong)local_38 + lVar1) - param_2 <=
          *(double *)param_1 &&
         (*(double *)param_1 <=
          param_2 + *(double *)((longlong)param_1 + (longlong)local_38 + lVar1 + 0x18)))) {
    lVar2 = lVar2 + 1;
    param_1 = (TVector<double,3> *)&param_1->field_0x8;
    if (2 < lVar2) {
      return true;
    }
  }
  return false;
}

// CopyGeometry @ 14375b940

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TBox<float,3>::CopyGeometry(TBox<float,3> *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  FImplicitObject *this_00;
  FImplicitObject *in_RDX;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (FImplicitObject *)0x0) {
    FImplicitObject::FImplicitObject(this_00,3,'\x01');
    in_RDX->_padding_ = (longlong)this_00;
    this_00->_padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
    this_00[1]._padding_ = *(longlong *)&(this->AABB).MMin;
    *(undefined4 *)&this_00[1]._padding_ = *(undefined4 *)&(this->AABB).MMin.field_0x8;
    *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = *(undefined8 *)&(this->AABB).MMax;
    uVar1 = (this->AABB).MMax.field_0x9;
    uVar2 = (this->AABB).MMax.field_0xa;
    uVar3 = (this->AABB).MMax.field_0xb;
    this_00[1].bIsConvex = (bool)(this->AABB).MMax.field_0x8;
    this_00[1].bDoCollide = (bool)uVar1;
    this_00[1].bHasBoundingBox = (bool)uVar2;
    this_00[1].bIsTracked = (bool)uVar3;
    this_00->Margin = *(float *)&this->_padding_;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 14375b9f0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TBox<double,3>::CopyGeometry(TBox<double,3> *this)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  FImplicitObject *this_00;
  FImplicitObject *in_RDX;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (FImplicitObject *)0x0) {
    FImplicitObject::FImplicitObject(this_00,3,'\x01');
    in_RDX->_padding_ = (longlong)this_00;
    this_00->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
    lVar1 = *(longlong *)&(this->AABB).MMin.field_0x8;
    this_00[1]._padding_ = *(longlong *)&(this->AABB).MMin;
    this_00[1]._padding_ = lVar1;
    uVar2 = (this->AABB).MMin.field_0x14;
    uVar3 = (this->AABB).MMin.field_0x15;
    uVar4 = (this->AABB).MMin.field_0x16;
    uVar5 = (this->AABB).MMin.field_0x17;
    this_00[1].Margin = (float)*(undefined4 *)&(this->AABB).MMin.field_0x10;
    this_00[1].bIsConvex = (bool)uVar2;
    this_00[1].bDoCollide = (bool)uVar3;
    this_00[1].bHasBoundingBox = (bool)uVar4;
    this_00[1].bIsTracked = (bool)uVar5;
    uVar2 = (this->AABB).MMax.field_0x1;
    uVar3 = (this->AABB).MMax.field_0x2;
    uVar4 = (this->AABB).MMax.field_0x3;
    uVar5 = (this->AABB).MMax.field_0x4;
    uVar6 = (this->AABB).MMax.field_0x5;
    uVar7 = (this->AABB).MMax.field_0x6;
    uVar8 = (this->AABB).MMax.field_0x7;
    lVar1 = *(longlong *)&(this->AABB).MMax.field_0x8;
    this_00[1].Type = (this->AABB).MMax.field_0x0;
    this_00[1].CollisionType = uVar2;
    this_00[1].Pad[0] = uVar3;
    this_00[1].Pad[1] = uVar4;
    this_00[1].Pad[2] = uVar5;
    this_00[1].Pad[3] = uVar6;
    this_00[1].Pad[4] = uVar7;
    this_00[1].Pad[5] = uVar8;
    this_00[2]._padding_ = lVar1;
    this_00[2]._padding_ = *(longlong *)&(this->AABB).MMax.field_0x10;
    this_00->Margin = *(float *)&this->_padding_;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 14375baa0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TBox<float,3>::CopyGeometryWithScale(TBox<float,3> *this,TVector<double,3> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double *pdVar4;
  FImplicitObject *this_00;
  undefined1 in_R8B;
  undefined7 in_register_00000081;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pdVar4 = (double *)CONCAT71(in_register_00000081,in_R8B);
  this_00 = ::operator_new(0x38);
  if (this_00 == (FImplicitObject *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    dVar7 = pdVar4[1];
    dVar3 = *pdVar4;
    if (((dVar7 <= dVar3) || (dVar9 = pdVar4[2], dVar6 = dVar3, dVar9 <= dVar3)) &&
       (dVar9 = pdVar4[2], dVar6 = dVar9, dVar7 <= dVar9)) {
      dVar6 = dVar7;
    }
    fVar5 = *(float *)&(this->AABB).MMax.field_0x4;
    fVar10 = *(float *)&(this->AABB).MMax;
    fVar11 = (float)dVar9 * *(float *)&(this->AABB).MMax.field_0x8;
    fVar12 = (float)dVar9 * *(float *)&(this->AABB).MMin.field_0x8;
    fVar1 = *(float *)&(this->AABB).MMin.field_0x4;
    fVar2 = *(float *)&(this->AABB).MMin;
    dVar6 = (double)*(float *)&this->_padding_ * dVar6;
    FImplicitObject::FImplicitObject(this_00,3,'\x01');
    this_00->_padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
    fVar8 = fVar11 - fVar12;
    this_00[1]._padding_ = CONCAT44((float)dVar7 * fVar1,(float)dVar3 * fVar2);
    *(float *)&this_00[1]._padding_ = fVar12;
    *(ulonglong *)((longlong)&this_00[1]._padding_ + 4) =
         CONCAT44((float)dVar7 * fVar5,(float)dVar3 * fVar10);
    *(float *)&this_00[1].bIsConvex = fVar11;
    fVar10 = this_00[1].Margin - *(float *)((longlong)&this_00[1]._padding_ + 4);
    fVar5 = *(float *)((longlong)&this_00[1]._padding_ + 4) - *(float *)&this_00[1]._padding_;
    if (((fVar10 <= fVar5) || (fVar8 <= fVar5)) && (fVar5 = fVar8, fVar10 <= fVar8)) {
      fVar5 = fVar10;
    }
    fVar5 = fVar5 * __real_3f000000;
    *(FImplicitObject **)param_1 = this_00;
    dVar7 = (double)fVar5;
    if (dVar6 <= (double)fVar5) {
      dVar7 = dVar6;
    }
    this_00->Margin = (float)dVar7;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 14375bc60

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TBox<double,3>::CopyGeometryWithScale(TBox<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  FImplicitObject *this_00;
  undefined1 in_R8B;
  undefined7 in_register_00000081;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pdVar2 = (double *)CONCAT71(in_register_00000081,in_R8B);
  this_00 = ::operator_new(0x50);
  if (this_00 == (FImplicitObject *)0x0) {
    *(undefined8 *)param_1 = 0;
    return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
  }
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  if (dVar10 < dVar11) {
    dVar1 = pdVar2[2];
    uVar12 = SUB84(dVar1,0);
    uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar9 = dVar10;
    if (dVar10 < dVar1) goto LAB_14375bcfe;
  }
  dVar9 = pdVar2[2];
  uVar12 = SUB84(dVar9,0);
  uVar13 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar11 <= dVar9) {
    dVar9 = dVar11;
  }
LAB_14375bcfe:
  dVar1 = *(double *)&(this->AABB).MMax;
  dVar3 = dVar11 * *(double *)&(this->AABB).MMax.field_0x8;
  dVar8 = (double)CONCAT44(uVar13,uVar12) * *(double *)&(this->AABB).MMax.field_0x10;
  dVar5 = (double)CONCAT44(uVar13,uVar12) * *(double *)&(this->AABB).MMin.field_0x10;
  dVar11 = dVar11 * *(double *)&(this->AABB).MMin.field_0x8;
  dVar7 = dVar10 * *(double *)&(this->AABB).MMin;
  dVar9 = (double)*(float *)&this->_padding_ * dVar9;
  FImplicitObject::FImplicitObject(this_00,3,'\x01');
  this_00->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
  auVar6._8_4_ = SUB84(dVar11,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  this_00[1]._padding_ = (longlong)dVar7;
  this_00[1]._padding_ = auVar6._8_8_;
  *(double *)&this_00[1].Margin = dVar5;
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar10 * dVar1;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&this_00[1].Type = auVar4;
  this_00[2]._padding_ = (longlong)dVar8;
  dVar8 = dVar8 - dVar5;
  dVar11 = (double)this_00[2]._padding_ - (double)this_00[1]._padding_;
  dVar10 = *(double *)&this_00[1].Type - (double)this_00[1]._padding_;
  if (((dVar11 <= dVar10) || (dVar8 <= dVar10)) && (dVar10 = dVar8, dVar11 <= dVar8)) {
    dVar10 = dVar11;
  }
  dVar10 = dVar10 * __real_3fe0000000000000;
  *(FImplicitObject **)param_1 = this_00;
  if (dVar9 <= dVar10) {
    dVar10 = dVar9;
  }
  this_00->Margin = (float)dVar10;
  LOCK();
  *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
  UNLOCK();
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// Extents @ 14376f510

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::Extents(TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)&(this->AABB).MMax.field_0x8;
  dVar2 = *(double *)&(this->AABB).MMin.field_0x8;
  *(double *)__return_storage_ptr__ = *(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin;
  dVar3 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar4 = *(double *)&(this->AABB).MMin.field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar1 - dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3 - dVar4;
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 14377b3c0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TBox<float,3>::FindClosestIntersectionImp
          (TBox<float,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  TAABB<float,3>::FindClosestIntersectionImp
            (&this->AABB,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 14377b3f0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TBox<double,3>::FindClosestIntersectionImp
          (TBox<double,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  TAABB<double,3>::FindClosestIntersectionImp
            (&this->AABB,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// FindClosestPoint @ 14377b790

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::FindClosestPoint
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2)

{
  TAABB<double,3>::FindClosestPoint(&this->AABB,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 14377b7c0

TVector<double,3> * __thiscall
Chaos::TBox<float,3>::FindGeometryOpposingNormal
          (TBox<float,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          int param_2,TVector<double,3> *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float local_38 [14];
  
  lVar1 = 0;
  local_38[3] = (float)*(double *)param_1;
  local_38[2] = (float)*(double *)&param_3->field_0x10;
  local_38[6] = (float)*(double *)param_3;
  local_38[7] = (float)*(double *)&param_3->field_0x8;
  local_38[4] = (float)*(double *)&param_1->field_0x8;
  local_38[1] = (float)*(double *)&param_3->field_0x8;
  local_38[0] = (float)*(double *)param_3;
  local_38[5] = (float)*(double *)&param_1->field_0x10;
  local_38[8] = local_38[2];
  fVar3 = __real_7f7fffff;
  do {
    fVar2 = *(float *)((longlong)local_38 + lVar1 + 0x18);
    if (fVar2 <= __real_38d1b717) {
      if ((fVar2 < __real_b8d1b717) &&
         (fVar2 = (float)(*(uint *)((longlong)local_38 + lVar1 + 0xc) ^
                         __xmm_80000000800000008000000080000000), fVar2 < fVar3)) {
        local_38[0] = 0.0;
        local_38[1] = 0.0;
        local_38[2] = 0.0;
        *(undefined4 *)((longlong)local_38 + lVar1) = 0xbf800000;
        fVar3 = fVar2;
      }
    }
    else {
      fVar2 = *(float *)((longlong)local_38 + lVar1 + 0xc);
      if (fVar2 < fVar3) {
        local_38[0] = 0.0;
        local_38[1] = 0.0;
        local_38[2] = 0.0;
        *(undefined4 *)((longlong)local_38 + lVar1) = 0x3f800000;
        fVar3 = fVar2;
      }
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 < 0xc);
  *(double *)__return_storage_ptr__ = (double)local_38[0];
  *(double *)&__return_storage_ptr__->field_0x8 = (double)local_38[1];
  *(double *)&__return_storage_ptr__->field_0x10 = (double)local_38[2];
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 14377b900

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::FindGeometryOpposingNormal
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1
          ,int param_2,TVector<double,3> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  
  dVar11 = __real_7fefffffffffffff;
  dVar5 = __real_bf1a36e2e0000000;
  dVar4 = __real_3f1a36e2e0000000;
  uVar3 = __xmm_80000000000000008000000000000000;
  lVar7 = -(longlong)param_1;
  lVar6 = 3;
  uVar2 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  lVar8 = (longlong)param_3 - (longlong)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  do {
    dVar1 = *(double *)((longlong)param_1 + lVar8);
    if (dVar1 <= dVar4) {
      if (dVar1 < dVar5) {
        uVar9 = SUB84(*(double *)param_1,0) ^ (uint)uVar3;
        uVar10 = (uint)((ulonglong)*(double *)param_1 >> 0x20) ^ (uint)((ulonglong)uVar3 >> 0x20);
        if ((double)CONCAT44(uVar10,uVar9) < dVar11) {
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          dVar11 = (double)CONCAT44(uVar10,uVar9);
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          *(undefined8 *)((longlong)__return_storage_ptr__ + lVar7 + (longlong)param_1) =
               0xbff0000000000000;
        }
      }
    }
    else {
      dVar1 = *(double *)param_1;
      if (dVar1 < dVar11) {
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        *(undefined8 *)((longlong)__return_storage_ptr__ + lVar7 + (longlong)param_1) =
             0x3ff0000000000000;
        dVar11 = dVar1;
      }
    }
    param_1 = (TVector<double,3> *)&param_1->field_0x8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return __return_storage_ptr__;
}

// FindVertexPlanes @ 14377bc60

int __thiscall
Chaos::TBox<double,3>::FindVertexPlanes(TBox<double,3> *this,int param_1,int *param_2,int param_3)

{
  int local_res20 [2];
  TConvexHalfEdgeStructureData<short> *local_28;
  int *local_20;
  int local_18;
  int *local_10;
  
  local_res20[0] = 0;
  if (0 < param_3) {
    local_10 = local_res20;
    local_28 = &SStructureData;
    local_20 = param_2;
    local_18 = param_3;
    TConvexHalfEdgeStructureData<short>::
    VisitVertexHalfEdges<_Chaos::TConvexHalfEdgeStructureData<short>::FindVertexPlanes_::__l5::<lambda_1>_>
              (&SStructureData,param_1,(<lambda_1> *)&local_28);
    return local_res20[0];
  }
  return 0;
}

// GetArea @ 14378f230

double __thiscall Chaos::TBox<double,3>::GetArea(TBox<double,3> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10;
  dVar1 = *(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin;
  dVar3 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
  return (dVar2 + dVar3) * (dVar1 + dVar1) + (dVar3 + dVar3) * dVar2;
}

// GetCenter @ 14378f300

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::GetCenter(TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&(this->AABB).MMin.field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * __real_3fe0000000000000 +
       *(double *)&(this->AABB).MMin;
  dVar2 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar3 = *(double *)&(this->AABB).MMin.field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar2 - dVar3) * dVar4 + *(double *)&(this->AABB).MMin.field_0x10;
  return __return_storage_ptr__;
}

// GetCenterOfMass @ 14378f580

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::GetCenterOfMass
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&(this->AABB).MMin.field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * __real_3fe0000000000000 +
       *(double *)&(this->AABB).MMin;
  dVar2 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar3 = *(double *)&(this->AABB).MMin.field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar2 - dVar3) * dVar4 + *(double *)&(this->AABB).MMin.field_0x10;
  return __return_storage_ptr__;
}

// GetClosestEdge @ 14378f600

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::GetClosestEdge
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  double dVar1;
  short sVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TVector<double,3> *pTVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  double local_90;
  
  iVar14 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  dVar1 = __real_47efffffe0000000;
  if (param_1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Box.h"
                       ,0xff,L"");
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pTVar10 = (TVector<double,3> *)(*pcVar3)();
    return pTVar10;
  }
  iVar7 = NumPlaneVertices(this,param_1);
  if (0 < iVar7) {
    iVar8 = GetPlaneVertex(this,param_1,iVar7 + -1);
    GetVertex(this,(TVector<double,3> *)&local_d0._s_0,iVar8);
    dVar5 = __real_3fe0000000000000;
    dVar4 = __real_3ff0000000000000;
    do {
      uVar9 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge(&SStructureData,param_1,iVar14);
      uVar12 = 0;
      if ((int)uVar9 < SStructureData.HalfEdges.ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar3)();
        return pTVar10;
      }
      sVar2 = *(short *)(SStructureData.HalfEdges.AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 6 + 2);
      lVar13 = (longlong)sVar2;
      uVar12 = 0;
      if (sVar2 < SVertices.ArrayNum) {
        uVar12 = (uint)~(int)sVar2 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar3)();
        return pTVar10;
      }
      dVar17 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
      dVar16 = *(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10;
      local_e8._s_0.Y =
           (dVar17 + dVar17 * *(double *)(SVertices.AllocatorInstance.Data + lVar13 * 0x18 + 8)) *
           dVar5 + *(double *)&(this->AABB).MMin.field_0x8;
      local_e8._s_0.X =
           (*(double *)(SVertices.AllocatorInstance.Data + lVar13 * 0x18) + dVar4) *
           (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * dVar5 +
           *(double *)&(this->AABB).MMin;
      local_e8._s_0.Z =
           (dVar16 * *(double *)(SVertices.AllocatorInstance.Data + lVar13 * 0x18 + 0x10) + dVar16)
           * dVar5 + *(double *)&(this->AABB).MMin.field_0x10;
      pTVar11 = FMath::ClosestPointOnLine<double>
                          (&local_b8,(TVector<double> *)&local_d0._s_0,
                           (TVector<double> *)&local_e8._s_0,(TVector<double> *)param_2);
      local_90 = (pTVar11->field0_0x0)._s_0.Z;
      dVar17 = local_90 - *(double *)&param_2->field_0x10;
      dVar15 = (pTVar11->field0_0x0)._s_0.X - *(double *)param_2;
      dVar16 = (pTVar11->field0_0x0)._s_0.Y - *(double *)&param_2->field_0x8;
      dVar16 = dVar15 * dVar15 + dVar16 * dVar16 + dVar17 * dVar17;
      if (dVar16 < dVar1) {
        dVar17 = (pTVar11->field0_0x0)._s_0.Y;
        dVar1 = (pTVar11->field0_0x0)._s_0.Z;
        *(double *)__return_storage_ptr__ = (pTVar11->field0_0x0)._s_0.X;
        *(double *)&__return_storage_ptr__->field_0x8 = dVar17;
        *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
        *(double *)param_3 = local_d0._s_0.X;
        *(double *)&param_3->field_0x8 = local_d0._s_0.Y;
        *(double *)&param_3->field_0x10 = local_d0._s_0.Z;
        *(double *)param_4 = local_e8._s_0.X;
        *(double *)&param_4->field_0x8 = local_e8._s_0.Y;
        *(double *)&param_4->field_0x10 = local_e8._s_0.Z;
        dVar1 = dVar16;
      }
      iVar14 = iVar14 + 1;
      local_d0._s_0.X = local_e8._s_0.X;
      local_d0._s_0.Y = local_e8._s_0.Y;
      local_d0._s_0.Z = local_e8._s_0.Z;
    } while (iVar14 < iVar7);
  }
  return __return_storage_ptr__;
}

// GetClosestEdgePosition @ 14378f980

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::GetClosestEdgePosition
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1,
          TVector<double,3> *param_2)

{
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  GetClosestEdge(this,__return_storage_ptr__,param_1,param_2,&local_20,&local_38);
  return __return_storage_ptr__;
}

// GetClosestEdgeVertices @ 14378f9c0

bool __thiscall
Chaos::TBox<double,3>::GetClosestEdgeVertices
          (TBox<double,3> *this,int param_1,TVector<double,3> *param_2,int *param_3,int *param_4)

{
  short sVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  double local_90;
  
  dVar3 = __real_47efffffe0000000;
  if (param_1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Box.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  else {
    iVar8 = NumPlaneVertices(this,param_1);
    if (0 < iVar8) {
      iVar9 = GetPlaneVertex(this,param_1,iVar8 + -1);
      GetVertex(this,(TVector<double,3> *)&local_d0._s_0,iVar9);
      dVar5 = __real_3fe0000000000000;
      dVar4 = __real_3ff0000000000000;
      iVar14 = 0;
      while( true ) {
        uVar10 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge
                           (&SStructureData,param_1,iVar14);
        uVar12 = 0;
        if ((int)uVar10 < SStructureData.HalfEdges.ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        sVar1 = *(short *)(SStructureData.HalfEdges.AllocatorInstance.Data +
                          (longlong)(int)uVar10 * 6 + 2);
        lVar13 = (longlong)sVar1;
        uVar12 = 0;
        if (sVar1 < SVertices.ArrayNum) {
          uVar12 = (uint)~(int)sVar1 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) break;
        dVar16 = *(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10
        ;
        dVar17 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
        local_e8._s_0.Z =
             (dVar16 * *(double *)(SVertices.AllocatorInstance.Data + lVar13 * 0x18 + 0x10) + dVar16
             ) * dVar5 + *(double *)&(this->AABB).MMin.field_0x10;
        local_e8._s_0.X =
             (*(double *)(SVertices.AllocatorInstance.Data + lVar13 * 0x18) + dVar4) *
             (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * dVar5 +
             *(double *)&(this->AABB).MMin;
        local_e8._s_0.Y =
             (dVar17 * *(double *)(SVertices.AllocatorInstance.Data + lVar13 * 0x18 + 8) + dVar17) *
             dVar5 + *(double *)&(this->AABB).MMin.field_0x8;
        pTVar11 = FMath::ClosestPointOnLine<double>
                            (&local_b8,(TVector<double> *)&local_d0._s_0,
                             (TVector<double> *)&local_e8._s_0,(TVector<double> *)param_2);
        local_90 = (pTVar11->field0_0x0)._s_0.Z;
        dVar15 = (pTVar11->field0_0x0)._s_0.X - *(double *)param_2;
        dVar16 = (pTVar11->field0_0x0)._s_0.Y - *(double *)&param_2->field_0x8;
        dVar17 = local_90 - *(double *)&param_2->field_0x10;
        dVar16 = dVar15 * dVar15 + dVar16 * dVar16 + dVar17 * dVar17;
        if (dVar16 < dVar3) {
          *param_3 = iVar9;
          *param_4 = (int)sVar1;
          dVar3 = dVar16;
        }
        local_d0._s_0.X = local_e8._s_0.X;
        local_d0._s_0.Y = local_e8._s_0.Y;
        iVar14 = iVar14 + 1;
        local_d0._s_0.Z = local_e8._s_0.Z;
        iVar9 = (int)sVar1;
        if (iVar8 <= iVar14) {
          return true;
        }
      }
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  return false;
}

// GetEdgePlane @ 14378ffd0

int __thiscall Chaos::TBox<double,3>::GetEdgePlane(TBox<double,3> *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TConvexHalfEdgeStructureData<short>::GetEdgePlane(&SStructureData,param_1,param_2);
  return iVar1;
}

// GetEdgeVertex @ 1437900d0

int __thiscall Chaos::TBox<double,3>::GetEdgeVertex(TBox<double,3> *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TConvexHalfEdgeStructureData<short>::GetEdgeVertex(&SStructureData,param_1,param_2);
  return iVar1;
}

// GetInertiaTensor @ 143790b50

PMatrix<double,3,3> * __thiscall
Chaos::TBox<double,3>::GetInertiaTensor
          (TBox<double,3> *this,PMatrix<double,3,3> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10;
  dVar2 = param_1 * __real_3fb5555555555555;
  dVar4 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
  dVar1 = *(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin;
  dVar3 = dVar3 * dVar3;
  dVar4 = dVar4 * dVar4;
  dVar1 = dVar1 * dVar1;
  *(double *)__return_storage_ptr__ = (dVar3 + dVar4) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = (dVar3 + dVar1) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(double *)&__return_storage_ptr__->field_0x50 = (dVar4 + dVar1) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// GetInertiaTensor @ 143790c00

PMatrix<double,3,3> * __cdecl
Chaos::TBox<double,3>::GetInertiaTensor
          (PMatrix<double,3,3> *__return_storage_ptr__,double param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_1 * __real_3fb5555555555555;
  dVar1 = *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10;
  dVar2 = *(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8;
  dVar3 = *(double *)param_2 * *(double *)param_2;
  *(double *)__return_storage_ptr__ = (dVar1 + dVar2) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = (dVar1 + dVar3) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(double *)&__return_storage_ptr__->field_0x50 = (dVar2 + dVar3) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// GetMostOpposingPlane @ 143791b80

int __thiscall
Chaos::TBox<double,3>::GetMostOpposingPlane(TBox<double,3> *this,TVector<double,3> *param_1)

{
  int iVar1;
  uint uVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar3;
  
  dVar5 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)param_1 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar6 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x10 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x10 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((dVar6 < dVar5) && (dVar4 < dVar5)) {
    iVar1 = 3;
    if (0.0 <= *(double *)param_1) {
      iVar1 = 0;
    }
    return iVar1;
  }
  uVar3 = (uint)(dVar6 <= dVar4);
  uVar2 = uVar3 + 1;
  uVar3 = uVar3 + 4;
  if (0.0 <= *(double *)(&param_1->field_0x0 + (ulonglong)uVar2 * 8)) {
    uVar3 = uVar2;
  }
  return uVar3;
}

// GetMostOpposingPlaneScaled @ 143791bf0

int __thiscall
Chaos::TBox<double,3>::GetMostOpposingPlaneScaled
          (TBox<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  int iVar1;
  uint uVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar3;
  
  dVar5 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)param_1 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar6 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x10 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x10 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((dVar6 < dVar5) && (dVar4 < dVar5)) {
    iVar1 = 3;
    if (0.0 <= *(double *)param_1) {
      iVar1 = 0;
    }
    return iVar1;
  }
  uVar3 = (uint)(dVar6 <= dVar4);
  uVar2 = uVar3 + 1;
  uVar3 = uVar3 + 4;
  if (0.0 <= *(double *)(&param_1->field_0x0 + (ulonglong)uVar2 * 8)) {
    uVar3 = uVar2;
  }
  return uVar3;
}

// GetPlane @ 1437922f0

TCorePlane<double,3> * __thiscall
Chaos::TBox<double,3>::GetPlane
          (TBox<double,3> *this,TCorePlane<double,3> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  TCorePlane<double,3> *pTVar11;
  longlong lVar12;
  double dVar13;
  
  lVar12 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < SNormals.ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TCorePlane<double,3> *)(*pcVar5)();
      return pTVar11;
    }
  }
  FVar8.Data = SNormals.AllocatorInstance.Data;
  dVar6 = (*(double *)(SNormals.AllocatorInstance.Data + lVar12 * 0x18 + 0x10) +
          __real_3ff0000000000000) *
          (*(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10) *
          __real_3fe0000000000000;
  dVar13 = (*(double *)(SNormals.AllocatorInstance.Data + lVar12 * 0x18 + 8) +
           __real_3ff0000000000000) *
           (*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
           __real_3fe0000000000000;
  dVar2 = *(double *)&(this->AABB).MMin.field_0x10;
  dVar3 = *(double *)&(this->AABB).MMin.field_0x8;
  *(double *)&__return_storage_ptr__->MX =
       (*(double *)(SNormals.AllocatorInstance.Data + lVar12 * 0x18) + __real_3ff0000000000000) *
       (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * __real_3fe0000000000000 +
       *(double *)&(this->AABB).MMin;
  *(double *)&(__return_storage_ptr__->MX).field_0x8 = dVar13 + dVar3;
  *(double *)&(__return_storage_ptr__->MX).field_0x10 = dVar6 + dVar2;
  pFVar1 = FVar8.Data + lVar12 * 0x18;
  uVar7 = *(undefined8 *)(pFVar1 + 8);
  uVar4 = *(undefined8 *)(FVar8.Data + lVar12 * 0x18 + 0x10);
  *(undefined8 *)&__return_storage_ptr__->MNormal = *(undefined8 *)pFVar1;
  *(undefined8 *)&(__return_storage_ptr__->MNormal).field_0x8 = uVar7;
  *(undefined8 *)&(__return_storage_ptr__->MNormal).field_0x10 = uVar4;
  return __return_storage_ptr__;
}

// GetPlaneNX @ 143792790

void __thiscall
Chaos::TBox<double,3>::GetPlaneNX
          (TBox<double,3> *this,int param_1,TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  
  lVar10 = (longlong)param_1;
  uVar9 = 0;
  if (param_1 < SNormals.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar7.Data = SNormals.AllocatorInstance.Data;
  uVar6 = *(undefined8 *)(SNormals.AllocatorInstance.Data + lVar10 * 0x18 + 8);
  *(undefined8 *)param_2 = *(undefined8 *)(SNormals.AllocatorInstance.Data + lVar10 * 0x18);
  *(undefined8 *)&param_2->field_0x8 = uVar6;
  *(undefined8 *)&param_2->field_0x10 = *(undefined8 *)(FVar7.Data + lVar10 * 0x18 + 0x10);
  dVar1 = *(double *)&(this->AABB).MMin.field_0x10;
  dVar12 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar2 = *(double *)&(this->AABB).MMin.field_0x8;
  dVar11 = *(double *)&(this->AABB).MMax.field_0x8;
  uVar9 = 0;
  if (param_1 < SNormals.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  dVar3 = *(double *)&(this->AABB).MMin;
  dVar4 = *(double *)&(this->AABB).MMax;
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar11 = ((*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
            *(double *)(SNormals.AllocatorInstance.Data + lVar10 * 0x18 + 8) + (dVar11 - dVar2)) *
           __real_3fe0000000000000;
  dVar12 = ((*(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10) *
            *(double *)(SNormals.AllocatorInstance.Data + lVar10 * 0x18 + 0x10) + (dVar12 - dVar1))
           * __real_3fe0000000000000;
  *(double *)param_3 =
       ((*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) *
        *(double *)(SNormals.AllocatorInstance.Data + lVar10 * 0x18) + (dVar4 - dVar3)) *
       __real_3fe0000000000000 + dVar3;
  *(double *)&param_3->field_0x8 = dVar11 + dVar2;
  *(double *)&param_3->field_0x10 = dVar12 + dVar1;
  return;
}

// GetPlaneVertex @ 143792980

int __thiscall Chaos::TBox<double,3>::GetPlaneVertex(TBox<double,3> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge(&SStructureData,param_1,param_2);
  uVar5 = 0;
  if ((int)uVar3 < SStructureData.HalfEdges.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (int)*(short *)(SStructureData.HalfEdges.AllocatorInstance.Data +
                        (longlong)(int)uVar3 * 6 + 2);
}

// GetRadius @ 143792a00

double __thiscall Chaos::TBox<float,3>::GetRadius(TBox<float,3> *this)

{
  return 0.0;
}

// GetRadius @ 143792a10

double __thiscall Chaos::TBox<double,3>::GetRadius(TBox<double,3> *this)

{
  return 0.0;
}

// GetRotationOfMass @ 143792ca0

TRotation<double,3> * __cdecl
Chaos::TBox<double,3>::GetRotationOfMass(TRotation<double,3> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0x3ff0000000000000;
  return __return_storage_ptr__;
}

// GetTypeHash @ 143793020

uint __thiscall Chaos::TBox<float,3>::GetTypeHash(TBox<float,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&(this->AABB).MMax,0xc,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(&this->AABB,0xc,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 1437930e0

uint __thiscall Chaos::TBox<double,3>::GetTypeHash(TBox<double,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&(this->AABB).MMax,0x18,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(&this->AABB,0x18,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetVertex @ 143793690

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::GetVertex
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  TVector<double,3> *pTVar10;
  longlong lVar11;
  double dVar12;
  
  lVar11 = (longlong)param_1;
  uVar9 = 0;
  if (param_1 < SVertices.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar4)();
      return pTVar10;
    }
  }
  FVar7.Data = SVertices.AllocatorInstance.Data;
  dVar6 = __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000;
  dVar1 = *(double *)&(this->AABB).MMax.field_0x10;
  dVar2 = *(double *)&(this->AABB).MMin.field_0x10;
  dVar12 = (*(double *)(SVertices.AllocatorInstance.Data + lVar11 * 0x18 + 8) +
           __real_3ff0000000000000) *
           (*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
           __real_3fe0000000000000;
  *(double *)__return_storage_ptr__ =
       (*(double *)(SVertices.AllocatorInstance.Data + lVar11 * 0x18) + __real_3ff0000000000000) *
       (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) * __real_3fe0000000000000 +
       *(double *)&(this->AABB).MMin;
  dVar3 = *(double *)(FVar7.Data + lVar11 * 0x18 + 0x10);
  *(double *)&__return_storage_ptr__->field_0x8 = dVar12 + *(double *)&(this->AABB).MMin.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar3 + dVar5) * (dVar1 - dVar2) * dVar6 + *(double *)&(this->AABB).MMin.field_0x10;
  return __return_storage_ptr__;
}

// GetVertexPlanes3 @ 143793830

int __thiscall
Chaos::TBox<double,3>::GetVertexPlanes3
          (TBox<double,3> *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < SStructureData.VertexPlanes.ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = SStructureData.VertexPlanes.AllocatorInstance.Data + (longlong)param_1 * 8;
  *param_2 = (int)*(short *)pFVar1;
  *param_3 = (int)*(short *)(pFVar1 + 2);
  *param_4 = (int)*(short *)(pFVar1 + 4);
  return (int)*(short *)(pFVar1 + 6);
}

// GetVolume @ 1437938d0

double __thiscall Chaos::TBox<double,3>::GetVolume(TBox<double,3> *this)

{
  return (*(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8) *
         (*(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin) *
         (*(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10);
}

// GetWindingOrder @ 143793910

double __thiscall Chaos::TBox<double,3>::GetWindingOrder(TBox<double,3> *this)

{
  return __real_3ff0000000000000;
}

// LargestAxis @ 143798440

int __thiscall Chaos::TBox<double,3>::LargestAxis(TBox<double,3> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)&(this->AABB).MMax.field_0x8 - *(double *)&(this->AABB).MMin.field_0x8;
  dVar2 = *(double *)&(this->AABB).MMax - *(double *)&(this->AABB).MMin;
  dVar1 = *(double *)&(this->AABB).MMax.field_0x10 - *(double *)&(this->AABB).MMin.field_0x10;
  if ((dVar3 < dVar2) && (dVar1 < dVar2)) {
    return 0;
  }
  return (dVar3 <= dVar1) + 1;
}

// Max @ 143798fa0

TVector<double,3> * __thiscall Chaos::TBox<double,3>::Max(TBox<double,3> *this)

{
  return &(this->AABB).MMax;
}

// Min @ 14379a670

TVector<double,3> * __thiscall Chaos::TBox<double,3>::Min(TBox<double,3> *this)

{
  return &(this->AABB).MMin;
}

// NumEdges @ 14379abd0

int __thiscall Chaos::TBox<double,3>::NumEdges(TBox<double,3> *this)

{
  return SStructureData.Edges.ArrayNum;
}

// NumPlaneVertices @ 14379abe0

int __thiscall Chaos::TBox<double,3>::NumPlaneVertices(TBox<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < SStructureData.Planes.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (int)*(short *)(SStructureData.Planes.AllocatorInstance.Data + (longlong)param_1 * 4 + 2);
}

// NumPlanes @ 14379ac50

int __thiscall Chaos::TBox<double,3>::NumPlanes(TBox<double,3> *this)

{
  return SNormals.ArrayNum;
}

// NumVertices @ 14379ac60

int __thiscall Chaos::TBox<double,3>::NumVertices(TBox<double,3> *this)

{
  return SVertices.ArrayNum;
}

// PhiWithNormal @ 14379b620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TBox<float,3>::PhiWithNormal
          (TBox<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double local_188 [6];
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140 [4];
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  
  fVar1 = *(float *)&(this->AABB).MMin;
  fVar2 = *(float *)&(this->AABB).MMin.field_0x4;
  fVar3 = *(float *)&(this->AABB).MMin.field_0x8;
  dVar12 = *(double *)&param_1->field_0x10;
  dVar4 = *(double *)&param_1->field_0x8;
  dVar5 = *(double *)param_1;
  dVar15 = (double)*(float *)&(this->AABB).MMax;
  local_188[0] = (double)(fVar1 - (float)dVar5);
  local_140[0] = dVar5 - dVar15;
  dVar7 = (double)*(float *)&(this->AABB).MMax.field_0x8;
  local_188[1] = (double)(fVar2 - (float)dVar4);
  dVar6 = (double)*(float *)&(this->AABB).MMax.field_0x4;
  local_188[2] = (double)(fVar3 - (float)dVar12);
  local_140[2] = dVar12 - dVar7;
  local_140[1] = dVar4 - dVar6;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((((dVar15 < dVar5) || (dVar6 < dVar4)) || (dVar7 < dVar12)) ||
     (((dVar5 < (double)fVar1 || (dVar4 < (double)fVar2)) || (dVar12 < (double)fVar3)))) {
    lVar11 = 0;
    do {
      dVar12 = *(double *)((longlong)local_140 + lVar11);
      if (dVar12 <= 0.0) {
        dVar12 = *(double *)((longlong)local_188 + lVar11);
        if (dVar12 <= 0.0) {
          dVar12 = 0.0;
        }
        else {
          dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar14,
                                    SUB84(dVar12,0) ^ uVar13);
        }
      }
      *(double *)(&param_2->field_0x0 + lVar11) = dVar12;
      lVar11 = lVar11 + 8;
    } while (lVar11 < 0x18);
    dVar12 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
    if (__real_3f1a36e2e0000000 <= dVar12) {
      return dVar12;
    }
    if (*(double *)param_2 <= 0.0) {
      if (*(double *)param_2 < 0.0) {
        *(undefined8 *)param_2 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)param_2 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x8 <= 0.0) {
      if (*(double *)&param_2->field_0x8 < 0.0) {
        *(undefined8 *)&param_2->field_0x8 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x8 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x10 <= 0.0) {
      if (*(double *)&param_2->field_0x10 < 0.0) {
        *(undefined8 *)&param_2->field_0x10 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x10 = 0x3ff0000000000000;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)param_2,__real_3e45798ee0000000);
    return dVar12;
  }
  if (local_140[2] <= local_188[2]) {
    local_140[2] = local_188[2];
  }
  if (local_140[1] <= local_188[1]) {
    local_140[1] = local_188[1];
  }
  if (local_140[0] <= local_188[0]) {
    local_140[0] = local_188[0];
  }
  if (local_140[0] <= local_140[1]) {
    if (local_140[2] < local_140[1]) {
      uVar8 = 1;
      goto LAB_14379b7a4;
    }
  }
  else if (local_140[2] < local_140[0]) {
    uVar8 = 0;
    local_140[1] = local_140[0];
    goto LAB_14379b7a4;
  }
  uVar8 = 2;
  local_140[1] = local_140[2];
LAB_14379b7a4:
  if (local_140[uVar8] <= local_188[uVar8]) {
    if (uVar8 == 0) {
      pdVar9 = &local_e0;
      local_e0 = ___xmm_00000000000000003ff0000000000000;
      uStack_d8 = _UNK_150689518;
      local_d0 = 0;
    }
    else {
      if (uVar8 == 1) {
        local_158 = ___xmm_3ff00000000000000000000000000000;
        uStack_150 = _UNK_15061cbc8;
        local_148 = 0;
      }
      else {
        local_158 = 0.0;
        uStack_150 = 0;
        local_148 = __real_3ff0000000000000;
      }
      pdVar9 = &local_158;
    }
    pdVar10 = local_140 + 3;
    local_120 = CONCAT44(*(uint *)((longlong)pdVar9 + 0xc) ^ uVar14,*(uint *)(pdVar9 + 1) ^ uVar13);
    local_140[3] = (double)CONCAT44(*(uint *)((longlong)pdVar9 + 4) ^ uVar14,
                                    *(uint *)pdVar9 ^ uVar13);
    local_118 = CONCAT44((uint)((ulonglong)pdVar9[2] >> 0x20) ^ uVar14,SUB84(pdVar9[2],0) ^ uVar13);
  }
  else {
    if (uVar8 == 0) {
      pdVar9 = &local_110;
      local_110 = ___xmm_00000000000000003ff0000000000000;
      uStack_108 = _UNK_150689518;
      local_100 = 0;
    }
    else {
      if (uVar8 == 1) {
        local_188[3] = ___xmm_3ff00000000000000000000000000000;
        local_188[4] = (double)_UNK_15061cbc8;
        local_188[5] = (double)0;
      }
      else {
        local_188[3] = 0.0;
        local_188[4] = 0.0;
        local_188[5] = (double)__real_3ff0000000000000;
      }
      pdVar9 = local_188 + 3;
    }
    pdVar10 = &local_f8;
    local_f8 = *pdVar9;
    dStack_f0 = pdVar9[1];
    local_e8 = pdVar9[2];
  }
  dVar4 = pdVar10[1];
  dVar12 = pdVar10[2];
  *(double *)param_2 = *pdVar10;
  *(double *)&param_2->field_0x8 = dVar4;
  *(double *)&param_2->field_0x10 = dVar12;
  return local_140[1];
}

// PhiWithNormal @ 14379b9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TBox<double,3>::PhiWithNormal
          (TBox<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  double *pdVar6;
  longlong lVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118 [7];
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  local_d8 = *(double *)&(this->AABB).MMin.field_0x10;
  dVar8 = *(double *)&param_1->field_0x10;
  local_118[5] = *(double *)&(this->AABB).MMin.field_0x10 - dVar8;
  dVar1 = *(double *)&param_1->field_0x8;
  local_118[4] = *(double *)&(this->AABB).MMin.field_0x8 - dVar1;
  dVar2 = *(double *)param_1;
  local_118[0] = dVar2 - *(double *)&(this->AABB).MMax;
  local_118[2] = dVar8 - *(double *)&(this->AABB).MMax.field_0x10;
  local_118[1] = dVar1 - *(double *)&(this->AABB).MMax.field_0x8;
  local_118[3] = *(double *)&(this->AABB).MMin - dVar2;
  local_c0 = *(double *)&(this->AABB).MMax.field_0x10;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((((*(double *)&(this->AABB).MMax < dVar2) || (*(double *)&(this->AABB).MMax.field_0x8 < dVar1)
       ) || (local_c0 < dVar8)) ||
     (((dVar2 < *(double *)&(this->AABB).MMin || (dVar1 < *(double *)&(this->AABB).MMin.field_0x8))
      || (dVar8 < local_d8)))) {
    lVar7 = 0;
    do {
      dVar8 = *(double *)((longlong)local_118 + lVar7);
      if (dVar8 <= 0.0) {
        dVar8 = *(double *)((longlong)local_118 + lVar7 + 0x18);
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        else {
          dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,SUB84(dVar8,0) ^ uVar9)
          ;
        }
      }
      *(double *)(&param_2->field_0x0 + lVar7) = dVar8;
      lVar7 = lVar7 + 8;
    } while (lVar7 < 0x18);
    dVar8 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
    if (__real_3f1a36e2e0000000 <= dVar8) {
      return dVar8;
    }
    if (*(double *)param_2 <= 0.0) {
      if (*(double *)param_2 < 0.0) {
        *(undefined8 *)param_2 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)param_2 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x8 <= 0.0) {
      if (*(double *)&param_2->field_0x8 < 0.0) {
        *(undefined8 *)&param_2->field_0x8 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x8 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x10 <= 0.0) {
      if (*(double *)&param_2->field_0x10 < 0.0) {
        *(undefined8 *)&param_2->field_0x10 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x10 = 0x3ff0000000000000;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)param_2,__real_3e45798ee0000000);
    return dVar8;
  }
  if (local_118[4] <= local_118[1]) {
    local_118[4] = local_118[1];
  }
  if (local_118[0] <= local_118[3]) {
    local_118[0] = local_118[3];
  }
  if (local_118[5] <= local_118[2]) {
    local_118[5] = local_118[2];
  }
  if (local_118[0] <= local_118[4]) {
    if (local_118[5] < local_118[4]) {
      uVar3 = 1;
      goto LAB_14379bb1d;
    }
  }
  else if (local_118[5] < local_118[0]) {
    uVar3 = 0;
    local_118[4] = local_118[0];
    goto LAB_14379bb1d;
  }
  uVar3 = 2;
  local_118[4] = local_118[5];
LAB_14379bb1d:
  if (local_118[uVar3] <= local_118[(ulonglong)uVar3 + 3]) {
    if (uVar3 == 0) {
      puVar5 = (uint *)&local_d0;
      local_d0 = ___xmm_00000000000000003ff0000000000000;
      uStack_c8 = _UNK_150689518;
      local_c0 = 0.0;
    }
    else {
      if (uVar3 == 1) {
        local_130 = ___xmm_3ff00000000000000000000000000000;
        uStack_128 = _UNK_15061cbc8;
        local_120 = 0;
      }
      else {
        local_130 = 0;
        uStack_128 = 0;
        local_120 = __real_3ff0000000000000;
      }
      puVar5 = (uint *)&local_130;
    }
    pdVar6 = &local_b8;
    local_b0 = CONCAT44(puVar5[3] ^ uVar10,puVar5[2] ^ uVar9);
    local_b8 = (double)CONCAT44(puVar5[1] ^ uVar10,*puVar5 ^ uVar9);
    local_a8 = CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20) ^ uVar10,
                        (uint)*(undefined8 *)(puVar5 + 4) ^ uVar9);
  }
  else {
    if (uVar3 == 0) {
      puVar4 = &local_a0;
      local_a0 = ___xmm_00000000000000003ff0000000000000;
      uStack_98 = _UNK_150689518;
      local_90 = 0;
    }
    else {
      if (uVar3 == 1) {
        local_148 = ___xmm_3ff00000000000000000000000000000;
        uStack_140 = _UNK_15061cbc8;
        local_138 = 0;
      }
      else {
        local_148 = 0;
        uStack_140 = 0;
        local_138 = __real_3ff0000000000000;
      }
      puVar4 = &local_148;
    }
    pdVar6 = local_118 + 6;
    local_118[6] = (double)*puVar4;
    uStack_e0 = puVar4[1];
    local_d8 = (double)puVar4[2];
  }
  dVar1 = pdVar6[1];
  dVar8 = pdVar6[2];
  *(double *)param_2 = *pdVar6;
  *(double *)&param_2->field_0x8 = dVar1;
  *(double *)&param_2->field_0x10 = dVar8;
  return local_118[4];
}

// PhiWithNormalScaled @ 14379c660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TBox<float,3>::PhiWithNormalScaled
          (TBox<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  longlong lVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double local_188 [6];
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140 [4];
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  
  fVar15 = (float)((double)*(float *)&(this->AABB).MMin * *(double *)param_2);
  dVar9 = *(double *)&param_1->field_0x10;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  fVar13 = (float)((double)*(float *)&(this->AABB).MMin.field_0x8 * *(double *)&param_2->field_0x10)
  ;
  fVar14 = (float)((double)*(float *)&(this->AABB).MMin.field_0x4 * *(double *)&param_2->field_0x8);
  dVar4 = (double)(float)((double)*(float *)&(this->AABB).MMax.field_0x8 *
                         *(double *)&param_2->field_0x10);
  local_140[2] = dVar9 - dVar4;
  dVar3 = (double)(float)((double)*(float *)&(this->AABB).MMax.field_0x4 *
                         *(double *)&param_2->field_0x8);
  local_140[1] = dVar2 - dVar3;
  dVar12 = (double)(float)((double)*(float *)&(this->AABB).MMax * *(double *)param_2);
  local_188[0] = (double)(fVar15 - (float)dVar1);
  local_140[0] = dVar1 - dVar12;
  local_188[1] = (double)(fVar14 - (float)dVar2);
  local_188[2] = (double)(fVar13 - (float)dVar9);
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((((dVar12 < dVar1) || (dVar3 < dVar2)) || (dVar4 < dVar9)) ||
     (((dVar1 < (double)fVar15 || (dVar2 < (double)fVar14)) || (dVar9 < (double)fVar13)))) {
    lVar8 = 0;
    do {
      dVar9 = *(double *)((longlong)local_140 + lVar8);
      if (dVar9 <= 0.0) {
        dVar9 = *(double *)((longlong)local_188 + lVar8);
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        else {
          dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar11,SUB84(dVar9,0) ^ uVar10
                                  );
        }
      }
      *(double *)(&param_3->field_0x0 + lVar8) = dVar9;
      lVar8 = lVar8 + 8;
    } while (lVar8 < 0x18);
    dVar9 = TVector<double,3>::SafeNormalize(param_3,__real_3f1a36e2e0000000);
    if (__real_3f1a36e2e0000000 <= dVar9) {
      return dVar9;
    }
    if (*(double *)param_3 <= 0.0) {
      if (*(double *)param_3 < 0.0) {
        *(undefined8 *)param_3 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)param_3 = 0x3ff0000000000000;
    }
    if (*(double *)&param_3->field_0x8 <= 0.0) {
      if (*(double *)&param_3->field_0x8 < 0.0) {
        *(undefined8 *)&param_3->field_0x8 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_3->field_0x8 = 0x3ff0000000000000;
    }
    if (*(double *)&param_3->field_0x10 <= 0.0) {
      if (*(double *)&param_3->field_0x10 < 0.0) {
        *(undefined8 *)&param_3->field_0x10 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_3->field_0x10 = 0x3ff0000000000000;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)param_3,__real_3e45798ee0000000);
    return dVar9;
  }
  if (local_140[2] <= local_188[2]) {
    local_140[2] = local_188[2];
  }
  if (local_188[1] <= local_140[1]) {
    local_188[1] = local_140[1];
  }
  if (local_140[0] <= local_188[0]) {
    local_140[0] = local_188[0];
  }
  if (local_140[0] <= local_188[1]) {
    if (local_140[2] < local_188[1]) {
      uVar5 = 1;
      goto LAB_14379c82e;
    }
  }
  else if (local_140[2] < local_140[0]) {
    uVar5 = 0;
    local_188[1] = local_140[0];
    goto LAB_14379c82e;
  }
  uVar5 = 2;
  local_188[1] = local_140[2];
LAB_14379c82e:
  if (local_140[uVar5] <= local_188[uVar5]) {
    if (uVar5 == 0) {
      pdVar6 = &local_e0;
      local_e0 = ___xmm_00000000000000003ff0000000000000;
      uStack_d8 = _UNK_150689518;
      local_d0 = 0;
    }
    else {
      if (uVar5 == 1) {
        local_158 = ___xmm_3ff00000000000000000000000000000;
        uStack_150 = _UNK_15061cbc8;
        local_148 = 0;
      }
      else {
        local_158 = 0.0;
        uStack_150 = 0;
        local_148 = __real_3ff0000000000000;
      }
      pdVar6 = &local_158;
    }
    pdVar7 = local_140 + 3;
    local_120 = CONCAT44(*(uint *)((longlong)pdVar6 + 0xc) ^ uVar11,*(uint *)(pdVar6 + 1) ^ uVar10);
    local_140[3] = (double)CONCAT44(*(uint *)((longlong)pdVar6 + 4) ^ uVar11,
                                    *(uint *)pdVar6 ^ uVar10);
    local_118 = CONCAT44((uint)((ulonglong)pdVar6[2] >> 0x20) ^ uVar11,SUB84(pdVar6[2],0) ^ uVar10);
  }
  else {
    if (uVar5 == 0) {
      pdVar6 = &local_110;
      local_110 = ___xmm_00000000000000003ff0000000000000;
      uStack_108 = _UNK_150689518;
      local_100 = 0;
    }
    else {
      if (uVar5 == 1) {
        local_188[3] = ___xmm_3ff00000000000000000000000000000;
        local_188[4] = (double)_UNK_15061cbc8;
        local_188[5] = (double)0;
      }
      else {
        local_188[3] = 0.0;
        local_188[4] = 0.0;
        local_188[5] = (double)__real_3ff0000000000000;
      }
      pdVar6 = local_188 + 3;
    }
    pdVar7 = &local_f8;
    local_f8 = *pdVar6;
    dStack_f0 = pdVar6[1];
    local_e8 = pdVar6[2];
  }
  dVar1 = pdVar7[1];
  dVar9 = pdVar7[2];
  *(double *)param_3 = *pdVar7;
  *(double *)&param_3->field_0x8 = dVar1;
  *(double *)&param_3->field_0x10 = dVar9;
  return local_188[1];
}

// PhiWithNormalScaled @ 14379ca60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TBox<double,3>::PhiWithNormalScaled
          (TBox<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  double local_148 [7];
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  
  dVar13 = *(double *)&param_1->field_0x10;
  dVar1 = *(double *)&param_1->field_0x8;
  dVar12 = *(double *)param_2 * *(double *)&(this->AABB).MMax;
  dVar5 = *(double *)param_2 * *(double *)&(this->AABB).MMin;
  dVar4 = *(double *)&param_2->field_0x8 * *(double *)&(this->AABB).MMin.field_0x8;
  dVar6 = *(double *)&param_2->field_0x8 * *(double *)&(this->AABB).MMax.field_0x8;
  dVar3 = *(double *)&param_2->field_0x10 * *(double *)&(this->AABB).MMin.field_0x10;
  dVar7 = *(double *)&param_2->field_0x10 * *(double *)&(this->AABB).MMax.field_0x10;
  local_148[4] = dVar4 - dVar1;
  dVar2 = *(double *)param_1;
  local_148[5] = dVar3 - dVar13;
  local_148[3] = dVar5 - dVar2;
  local_148[2] = dVar13 - dVar7;
  local_148[1] = dVar1 - dVar6;
  local_148[0] = dVar2 - dVar12;
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((((dVar12 < dVar2) || (dVar6 < dVar1)) || (dVar7 < dVar13)) ||
     (((dVar2 < dVar5 || (dVar1 < dVar4)) || (dVar13 < dVar3)))) {
    lVar11 = 0;
    do {
      dVar13 = *(double *)((longlong)local_148 + lVar11);
      if (dVar13 <= 0.0) {
        dVar13 = *(double *)((longlong)local_148 + lVar11 + 0x18);
        if (dVar13 <= 0.0) {
          dVar13 = 0.0;
        }
        else {
          dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar15,
                                    SUB84(dVar13,0) ^ uVar14);
        }
      }
      *(double *)(&param_3->field_0x0 + lVar11) = dVar13;
      lVar11 = lVar11 + 8;
    } while (lVar11 < 0x18);
    dVar13 = TVector<double,3>::SafeNormalize(param_3,__real_3f1a36e2e0000000);
    if (__real_3f1a36e2e0000000 <= dVar13) {
      return dVar13;
    }
    if (*(double *)param_3 <= 0.0) {
      if (*(double *)param_3 < 0.0) {
        *(undefined8 *)param_3 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)param_3 = 0x3ff0000000000000;
    }
    if (*(double *)&param_3->field_0x8 <= 0.0) {
      if (*(double *)&param_3->field_0x8 < 0.0) {
        *(undefined8 *)&param_3->field_0x8 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_3->field_0x8 = 0x3ff0000000000000;
    }
    if (*(double *)&param_3->field_0x10 <= 0.0) {
      if (*(double *)&param_3->field_0x10 < 0.0) {
        *(undefined8 *)&param_3->field_0x10 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_3->field_0x10 = 0x3ff0000000000000;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)param_3,__real_3e45798ee0000000);
    return dVar13;
  }
  if (local_148[4] <= local_148[1]) {
    local_148[4] = local_148[1];
  }
  if (local_148[0] <= local_148[3]) {
    local_148[0] = local_148[3];
  }
  if (local_148[5] <= local_148[2]) {
    local_148[5] = local_148[2];
  }
  if (local_148[0] <= local_148[4]) {
    if (local_148[5] < local_148[4]) {
      uVar8 = 1;
      goto LAB_14379cbc6;
    }
  }
  else if (local_148[5] < local_148[0]) {
    uVar8 = 0;
    local_148[4] = local_148[0];
    goto LAB_14379cbc6;
  }
  uVar8 = 2;
  local_148[4] = local_148[5];
LAB_14379cbc6:
  if (local_148[uVar8] <= local_148[(ulonglong)uVar8 + 3]) {
    if (uVar8 == 0) {
      pdVar9 = &local_d0;
      local_d0 = ___xmm_00000000000000003ff0000000000000;
      uStack_c8 = _UNK_150689518;
      local_c0 = 0;
    }
    else {
      if (uVar8 == 1) {
        local_160 = ___xmm_3ff00000000000000000000000000000;
        uStack_158 = _UNK_15061cbc8;
        local_150 = 0;
      }
      else {
        local_160 = 0.0;
        uStack_158 = 0;
        local_150 = __real_3ff0000000000000;
      }
      pdVar9 = &local_160;
    }
    pdVar10 = local_148 + 6;
    local_110 = CONCAT44(*(uint *)((longlong)pdVar9 + 0xc) ^ uVar15,*(uint *)(pdVar9 + 1) ^ uVar14);
    local_148[6] = (double)CONCAT44(*(uint *)((longlong)pdVar9 + 4) ^ uVar15,
                                    *(uint *)pdVar9 ^ uVar14);
    local_108 = CONCAT44((uint)((ulonglong)pdVar9[2] >> 0x20) ^ uVar15,SUB84(pdVar9[2],0) ^ uVar14);
  }
  else {
    if (uVar8 == 0) {
      pdVar9 = &local_100;
      local_100 = ___xmm_00000000000000003ff0000000000000;
      uStack_f8 = _UNK_150689518;
      local_f0 = 0;
    }
    else {
      if (uVar8 == 1) {
        local_178 = ___xmm_3ff00000000000000000000000000000;
        uStack_170 = _UNK_15061cbc8;
        local_168 = 0;
      }
      else {
        local_178 = 0.0;
        uStack_170 = 0;
        local_168 = __real_3ff0000000000000;
      }
      pdVar9 = &local_178;
    }
    pdVar10 = &local_e8;
    local_e8 = *pdVar9;
    dStack_e0 = pdVar9[1];
    local_d8 = pdVar9[2];
  }
  dVar1 = pdVar10[1];
  dVar13 = pdVar10[2];
  *(double *)param_3 = *pdVar10;
  *(double *)&param_3->field_0x8 = dVar1;
  *(double *)&param_3->field_0x10 = dVar13;
  return local_148[4];
}

// Raycast @ 1437a0420

bool __thiscall
Chaos::TBox<float,3>::Raycast
          (TBox<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8)

{
  bool bVar1;
  
  bVar1 = TAABB<float,3>::Raycast
                    (&this->AABB,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return bVar1;
}

// Raycast @ 1437a0480

bool __thiscall
Chaos::TBox<double,3>::Raycast
          (TBox<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3
          ,double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8)

{
  bool bVar1;
  
  bVar1 = TAABB<double,3>::Raycast
                    (&this->AABB,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return bVar1;
}

// RaycastFast @ 1437a07e0

bool __cdecl
Chaos::TBox<double,3>::RaycastFast
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5,bool *param_6,double param_7,
          double param_8,double *param_9,TVector<double,3> *param_10)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  double local_68 [13];
  
  uVar5 = SUB84(__real_7fefffffffffffff,0);
  uVar7 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_68[3] = *(double *)param_1 - *(double *)param_3;
  local_68[5] = *(double *)&param_1->field_0x10 - *(double *)&param_3->field_0x10;
  local_68[4] = *(double *)&param_1->field_0x8 - *(double *)&param_3->field_0x8;
  local_68[0] = *(double *)param_2 - *(double *)param_3;
  local_68[1] = *(double *)&param_2->field_0x8 - *(double *)&param_3->field_0x8;
  local_68[2] = *(double *)&param_2->field_0x10 - *(double *)&param_3->field_0x10;
  lVar2 = 0;
  dVar8 = 0.0;
  do {
    if (param_6[lVar2] == false) {
      dVar3 = local_68[lVar2 + 3] * *(double *)(&param_5->field_0x0 + lVar2 * 8);
      dVar6 = *(double *)(&param_5->field_0x0 + lVar2 * 8) * local_68[lVar2];
      dVar4 = dVar3;
      if (dVar6 < dVar3) {
        dVar4 = dVar6;
        dVar6 = dVar3;
      }
    }
    else {
      if (0.0 < local_68[lVar2 + 3]) {
        return false;
      }
      if (local_68[lVar2] <= 0.0 && local_68[lVar2] != 0.0) {
        return false;
      }
      dVar4 = 0.0;
      dVar6 = __real_7fefffffffffffff;
    }
    if (dVar4 <= dVar8) {
      dVar4 = dVar8;
    }
    if ((double)CONCAT44(uVar7,uVar5) <= dVar6) {
      dVar6 = (double)CONCAT44(uVar7,uVar5);
    }
    uVar5 = SUB84(dVar6,0);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (dVar6 < dVar4) {
      return false;
    }
    lVar2 = lVar2 + 1;
    dVar8 = dVar4;
    if (2 < lVar2) {
      if ((dVar4 <= param_7) && (0.0 <= dVar6)) {
        *param_9 = dVar4;
        dVar8 = *(double *)&param_4->field_0x8;
        dVar6 = *(double *)&param_4->field_0x10;
        dVar3 = *(double *)&param_3->field_0x8;
        dVar1 = *(double *)&param_3->field_0x10;
        *(double *)param_10 = dVar4 * *(double *)param_4 + *(double *)param_3;
        *(double *)&param_10->field_0x8 = dVar4 * dVar8 + dVar3;
        *(double *)&param_10->field_0x10 = dVar4 * dVar6 + dVar1;
        return true;
      }
      return false;
    }
  } while( true );
}

// Serialize @ 1437aa330

void __thiscall Chaos::TBox<float,3>::Serialize(TBox<float,3> *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  FArchive *pFVar3;
  uint local_res8 [2];
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  pFVar3 = operator<<<3>(param_1,&(this->AABB).MMin);
  operator<<<3>(pFVar3,&(this->AABB).MMax);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar2) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = (uint)this->_padding_;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(uint *)&this->_padding_ = local_res8[0];
  }
  return;
}

// Serialize @ 1437aa400

void __thiscall Chaos::TBox<float,3>::Serialize(TBox<float,3> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  FArchive *pFVar3;
  uint local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = operator<<<3>((FArchive *)param_1,&(this->AABB).MMin);
  operator<<<3>(pFVar3,&(this->AABB).MMax);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar2) {
    plVar1 = (longlong *)param_1->_padding_;
    local_res8[0] = (uint)this->_padding_;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(uint *)&this->_padding_ = local_res8[0];
  }
  return;
}

// Serialize @ 1437aa4e0

void __thiscall Chaos::TBox<double,3>::Serialize(TBox<double,3> *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  FArchive *pFVar3;
  uint local_res8 [2];
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  pFVar3 = SerializeReal<double,3>(param_1,&(this->AABB).MMin);
  SerializeReal<double,3>(pFVar3,&(this->AABB).MMax);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar2) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = (uint)this->_padding_;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(uint *)&this->_padding_ = local_res8[0];
  }
  return;
}

// Serialize @ 1437aa5b0

void __thiscall Chaos::TBox<double,3>::Serialize(TBox<double,3> *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  FArchive *pFVar3;
  uint local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = SerializeReal<double,3>((FArchive *)param_1,&(this->AABB).MMin);
  SerializeReal<double,3>(pFVar3,&(this->AABB).MMax);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar2) {
    plVar1 = (longlong *)param_1->_padding_;
    local_res8[0] = (uint)this->_padding_;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(uint *)&this->_padding_ = local_res8[0];
  }
  return;
}

// SerializeAsAABB @ 1437ac430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Chaos::TBox<float,3>::SerializeAsAABB(FArchive *param_1,TAABB<float,3> *param_2)

{
  int iVar1;
  FArchive *pFVar2;
  undefined1 auStack_78 [32];
  TBox<float,3> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar1 < 0x19) {
    FImplicitObject::FImplicitObject((FImplicitObject *)&local_58,3,'\x01');
    local_58._padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
    local_58.AABB.MMax._4_4_ = 0xff7fffff;
    local_58.AABB.MMin._0_8_ = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    local_58.AABB.MMin._8_4_ = SUB84(_UNK_150a9e6b8,0);
    local_58.AABB.MMax._0_4_ = SUB84((ulonglong)_UNK_150a9e6b8 >> 0x20,0);
    local_58.AABB.MMax._8_4_ = 0xff7fffff;
    Serialize(&local_58,param_1);
    *(undefined8 *)&param_2->MMin = local_58.AABB.MMin._0_8_;
    *(undefined4 *)&(param_2->MMin).field_0x8 = local_58.AABB.MMin._8_4_;
    *(ulonglong *)&param_2->MMax = CONCAT44(local_58.AABB.MMax._4_4_,local_58.AABB.MMax._0_4_);
    *(undefined4 *)&(param_2->MMax).field_0x8 = local_58.AABB.MMax._8_4_;
    local_58._padding_ = (longlong)&___7__TBox_M_02_Chaos__6B_;
    FImplicitObject::~FImplicitObject((FImplicitObject *)&local_58);
  }
  else {
    pFVar2 = operator<<<3>(param_1,&param_2->MMin);
    operator<<<3>(pFVar2,&param_2->MMax);
  }
  return;
}

// SerializeAsAABB @ 1437ac540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Chaos::TBox<double,3>::SerializeAsAABB(FArchive *param_1,TAABB<double,3> *param_2)

{
  int iVar1;
  FArchive *pFVar2;
  undefined1 auStack_98 [32];
  TBox<double,3> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar1 < 0x19) {
    FImplicitObject::FImplicitObject((FImplicitObject *)&local_78,3,'\x01');
    local_78.AABB.MMin._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_78.AABB.MMin._8_8_ = _UNK_150a9e648;
    local_78.AABB.MMax._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
    local_78.AABB.MMax._16_8_ = _UNK_1508ffb58;
    local_78._padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
    local_78.AABB.MMin._16_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_78.AABB.MMax._0_8_ = _UNK_150a9e6d8;
    Serialize(&local_78,param_1);
    *(undefined8 *)&param_2->MMin = local_78.AABB.MMin._0_8_;
    *(undefined8 *)&(param_2->MMin).field_0x8 = local_78.AABB.MMin._8_8_;
    local_78._padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
    *(undefined8 *)&(param_2->MMin).field_0x10 = local_78.AABB.MMin._16_8_;
    *(undefined8 *)&param_2->MMax = local_78.AABB.MMax._0_8_;
    *(undefined8 *)&(param_2->MMax).field_0x8 = local_78.AABB.MMax._8_8_;
    *(undefined8 *)&(param_2->MMax).field_0x10 = local_78.AABB.MMax._16_8_;
    FImplicitObject::~FImplicitObject((FImplicitObject *)&local_78);
  }
  else {
    pFVar2 = SerializeReal<double,3>(param_1,&param_2->MMin);
    SerializeReal<double,3>(pFVar2,&param_2->MMax);
  }
  return;
}

// SerializeImp @ 1437ac660

void __thiscall Chaos::TBox<double,3>::SerializeImp(TBox<double,3> *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  FArchive *pFVar3;
  uint local_res8 [2];
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  pFVar3 = SerializeReal<double,3>(param_1,&(this->AABB).MMin);
  SerializeReal<double,3>(pFVar3,&(this->AABB).MMax);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar2) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = (uint)this->_padding_;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(uint *)&this->_padding_ = local_res8[0];
  }
  return;
}

// StaticType @ 1437b15a0

uchar __cdecl Chaos::TBox<double,3>::StaticType(void)

{
  return '\x01';
}

// Support @ 1437b16a0

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::Support
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2,int *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dStack_60;
  double local_58;
  
  if (0.0 <= *(double *)param_1) {
    uVar1 = *(undefined8 *)&(this->AABB).MMax;
    uVar10 = (undefined4)uVar1;
    uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar1 = *(undefined8 *)&(this->AABB).MMin;
    uVar10 = (undefined4)uVar1;
    uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  iVar5 = 0;
  if (0.0 < *(double *)&param_1->field_0x8 || *(double *)&param_1->field_0x8 == 0.0) {
    dVar8 = *(double *)&(this->AABB).MMax.field_0x8;
    iVar6 = 2;
  }
  else {
    dVar8 = *(double *)&(this->AABB).MMin.field_0x8;
    iVar6 = 0;
  }
  if (0.0 < *(double *)&param_1->field_0x10 || *(double *)&param_1->field_0x10 == 0.0) {
    dVar2 = *(double *)&(this->AABB).MMax.field_0x10;
    iVar5 = 4;
  }
  else {
    dVar2 = *(double *)&(this->AABB).MMin.field_0x10;
  }
  *param_3 = iVar6 + (uint)(0.0 <= *(double *)param_1) + iVar5;
  if (param_2 != 0.0) {
    dVar9 = *(double *)param_1;
    auVar7._0_8_ = *(double *)&param_1->field_0x8 * *(double *)&param_1->field_0x8;
    auVar7._8_8_ = 0;
    dVar4 = dVar9 * dVar9 + auVar7._0_8_ +
            *(double *)&param_1->field_0x10 * *(double *)&param_1->field_0x10;
    if (__real_0010000000000000 < dVar4) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar4;
      auVar7 = sqrtpd(auVar7,auVar3);
      local_58 = __real_3ff0000000000000 / auVar7._0_8_;
      uVar1 = local_58 * dVar9;
      dStack_60 = local_58 * *(double *)&param_1->field_0x8;
      local_58 = local_58 * *(double *)&param_1->field_0x10;
      dVar9 = dStack_60 * dStack_60 + (double)uVar1 * (double)uVar1 + local_58 * local_58;
      if (dVar9 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar9) {
          dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
          dStack_60 = dStack_60 * dVar9;
          local_58 = local_58 * dVar9;
          uVar1 = (double)uVar1 * dVar9;
        }
        else {
          dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)__return_storage_ptr__ = (double)uVar1 * param_2 + (double)CONCAT44(uVar11,uVar10);
      *(double *)&__return_storage_ptr__->field_0x8 = dStack_60 * param_2 + dVar8;
      *(double *)&__return_storage_ptr__->field_0x10 = local_58 * param_2 + dVar2;
      return __return_storage_ptr__;
    }
  }
  *(ulonglong *)__return_storage_ptr__ = CONCAT44(uVar11,uVar10);
  *(double *)&__return_storage_ptr__->field_0x8 = dVar8;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar2;
  return __return_storage_ptr__;
}

// SupportCore @ 1437b1880

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::SupportCore
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2,double *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = 0;
  bVar1 = 0.0 < *(double *)param_1 || *(double *)param_1 == 0.0;
  if (bVar1) {
    dVar4 = *(double *)&(this->AABB).MMax - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->AABB).MMin;
  }
  *(double *)__return_storage_ptr__ = dVar4;
  if (0.0 < *(double *)&param_1->field_0x8 || *(double *)&param_1->field_0x8 == 0.0) {
    iVar3 = 2;
    dVar4 = *(double *)&(this->AABB).MMax.field_0x8 - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->AABB).MMin.field_0x8;
    iVar3 = iVar2;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
  if (0.0 < *(double *)&param_1->field_0x10 || *(double *)&param_1->field_0x10 == 0.0) {
    iVar2 = 4;
    dVar4 = *(double *)&(this->AABB).MMax.field_0x10 - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->AABB).MMin.field_0x10;
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar4;
  *param_4 = iVar3 + iVar2 + (uint)bVar1;
  if (param_3 != (double *)0x0) {
    *param_3 = param_2 * __real_3fe76cf5d0b09954;
  }
  return __return_storage_ptr__;
}

// SupportCoreScaled @ 1437b1930

TVector<double,3> * __thiscall
Chaos::TBox<double,3>::SupportCoreScaled
          (TBox<double,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2,TVector<double,3> *param_3,double *param_4,int *param_5)

{
  bool bVar1;
  TVector<double,3> *pTVar2;
  longlong lVar3;
  double dVar4;
  uint local_38 [4];
  undefined1 local_28 [16];
  double local_18;
  
  lVar3 = 0;
  dVar4 = *(double *)&param_1->field_0x8 * *(double *)&param_3->field_0x8;
  local_28._8_4_ = SUB84(dVar4,0);
  local_28._0_8_ = *(double *)param_1 * *(double *)param_3;
  local_28._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_18 = *(double *)&param_1->field_0x10 * *(double *)&param_3->field_0x10;
  pTVar2 = param_3;
  do {
    bVar1 = 0.0 < *(double *)(local_28 + -(longlong)param_3 + (longlong)&pTVar2->field_0x0) ||
            *(double *)(local_28 + -(longlong)param_3 + (longlong)&pTVar2->field_0x0) == 0.0;
    if (bVar1) {
      dVar4 = *(double *)((longlong)this + (longlong)pTVar2 + (0x38 - (longlong)param_3)) *
              *(double *)pTVar2 - param_2;
    }
    else {
      dVar4 = *(double *)((longlong)this + (longlong)pTVar2 + (0x20 - (longlong)param_3)) *
              *(double *)pTVar2 + param_2;
    }
    *(double *)(((longlong)__return_storage_ptr__ - (longlong)param_3) + (longlong)pTVar2) = dVar4;
    pTVar2 = (TVector<double,3> *)&pTVar2->field_0x8;
    local_38[lVar3] = (uint)bVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 < 3);
  *param_5 = local_38[0] + (local_38[1] + local_38[2] * 2) * 2;
  if (param_4 != (double *)0x0) {
    *param_4 = param_2 * __real_3fe76cf5d0b09954;
  }
  return __return_storage_ptr__;
}

// SupportCoreSimd @ 1437b1a10

__m128 * __thiscall
Chaos::TBox<double,3>::SupportCoreSimd
          (TBox<double,3> *this,__m128 *__return_storage_ptr__,__m128 *param_1,double param_2)

{
  __m128 _Var1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 <= param_1->m128_f32[0]) {
    dVar2 = *(double *)&(this->AABB).MMax - param_2;
  }
  else {
    dVar2 = param_2 + *(double *)&(this->AABB).MMin;
  }
  if (0.0 <= param_1->m128_f32[1]) {
    dVar3 = *(double *)&(this->AABB).MMax.field_0x8 - param_2;
  }
  else {
    dVar3 = param_2 + *(double *)&(this->AABB).MMin.field_0x8;
  }
  if (0.0 <= param_1->m128_f32[2]) {
    dVar4 = *(double *)&(this->AABB).MMax.field_0x10 - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->AABB).MMin.field_0x10;
  }
  _Var1.m128_f32[1] = (float)dVar3;
  _Var1.m128_f32[0] = (float)dVar2;
  _Var1.m128_f32[2] = (float)dVar4;
  _Var1.m128_f32[3] = 0.0;
  *__return_storage_ptr__ = _Var1;
  return __return_storage_ptr__;
}

// ToString @ 1437b23e0

FString * __thiscall
Chaos::TBox<float,3>::ToString(TBox<float,3> *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Box: Min: [%s], Max: [%s], Margin: %f");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 1437b2500

FString * __thiscall
Chaos::TBox<double,3>::ToString(TBox<double,3> *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Box: Min: [%s], Max: [%s], Margin: %f");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TransformBy @ 143a950a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
UE::Math::TBox<double>::TransformBy
          (TBox<double> *this,TBox<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  double dVar19;
  double dVar20;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined7 uStack_57;
  
  if (this->IsValid == '\0') {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
    return __return_storage_ptr__;
  }
  dVar3 = (this->Min).field0_0x0._s_0.X;
  dVar4 = (this->Min).field0_0x0._s_0.Y;
  dVar1 = (this->Min).field0_0x0._s_0.Z;
  dVar2 = (this->Max).field0_0x0._s_0.Z;
  dVar5 = (this->Max).field0_0x0._s_0.X;
  dVar7 = (this->Max).field0_0x0._s_0.Y;
  dVar8 = (dVar2 - dVar1) * ___xmm_3fe00000000000003fe0000000000000;
  dVar20 = (dVar2 + dVar1) * ___xmm_3fe00000000000003fe0000000000000;
  dVar19 = (dVar5 - dVar3) * ___xmm_3fe00000000000003fe0000000000000;
  dVar18 = (dVar7 - dVar4) * _UNK_150689678;
  dVar6 = (dVar5 + dVar3) * ___xmm_3fe00000000000003fe0000000000000;
  dVar7 = (dVar7 + dVar4) * _UNK_150689678;
  auVar12._8_4_ = SUB84(dVar6,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar1 = dVar8 * param_1->M[2][0];
  dVar2 = dVar8 * param_1->M[2][1];
  dVar8 = dVar8 * param_1->M[2][2];
  dVar4 = dVar7 * param_1->M[1][0] + dVar6 * param_1->M[0][0] + dVar20 * param_1->M[2][0] +
          param_1->M[3][0];
  dVar5 = dVar7 * param_1->M[1][1] + auVar12._8_8_ * param_1->M[0][1] + dVar20 * param_1->M[2][1] +
          param_1->M[3][1];
  auVar13._8_4_ = SUB84(dVar19,0);
  auVar13._0_8_ = dVar19;
  auVar13._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar11 = dVar19 * param_1->M[0][0];
  dVar17 = auVar13._8_8_ * param_1->M[0][1];
  dVar9 = dVar18 * param_1->M[1][2];
  dVar3 = dVar18 * param_1->M[1][0];
  dVar18 = dVar18 * param_1->M[1][1];
  dVar19 = dVar19 * param_1->M[0][2];
  dVar6 = dVar7 * param_1->M[1][2] + dVar6 * param_1->M[0][2] + dVar20 * param_1->M[2][2] +
          param_1->M[3][2];
  auVar14._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar14._8_4_ = SUB84(dVar17,0) & _UNK_15061cc88;
  auVar14._12_4_ = (uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c;
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          auVar14._0_8_ +
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar2 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar18,0) & _UNK_15061cc88) + auVar14._8_8_ +
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar2,0) & _UNK_15061cc88);
  auVar15._8_4_ = SUB84(dVar5,0);
  auVar15._0_8_ = dVar4;
  auVar15._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar18 = auVar15._8_8_ - dVar2;
  dVar3 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar4 - dVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar18;
  dVar1 = dVar1 + dVar4;
  local_70 = SUB84(dVar1,0);
  uStack_6c = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar10._4_8_ = dVar18;
  auVar10._0_4_ = uStack_74;
  auVar16._0_8_ = auVar10._0_8_ << 0x20;
  auVar16._8_4_ = local_70;
  auVar16._12_4_ = uStack_6c;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = auVar16._8_8_;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar3 + dVar6;
  __return_storage_ptr__->IsValid = 1;
  __return_storage_ptr__->Pad[0] = (char)uStack_57;
  __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_57 >> 8);
  __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_57 >> 0x10);
  __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_57 >> 0x18);
  __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_57 >> 0x20);
  __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_57 >> 0x28);
  __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_57 >> 0x30);
  return __return_storage_ptr__;
}

// TransformBy @ 143a95290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
UE::Math::TBox<double>::TransformBy
          (TBox<double> *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = TTransform<double>::ToMatrixWithScale(param_1,&local_98);
  TransformBy(this,__return_storage_ptr__,pTVar1);
  return __return_storage_ptr__;
}

// SerializeAsAABBs<float> @ 143ae6e30

void __cdecl
Chaos::TBox<double,3>::SerializeAsAABBs<float>
          (FArchive *param_1,TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  TBox<double,3> *pTVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res8 [8];
  TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<Chaos::TBox<double,3>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> local_c8 [3];
  double local_90;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar15 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar15 < 0x19) {
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<Chaos::TBox<double,3>,TSizedDefaultAllocator<32>_>
              (param_1,&local_d8);
    if (local_d8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_d8._8_8_ & 0xffffffff);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    iVar15 = local_d8.ArrayNum;
    if (param_2->ArrayMax < local_d8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,local_d8.ArrayNum,&param_2->AllocatorInstance,0,piVar1);
      iVar15 = local_d8.ArrayNum;
    }
    pFVar20 = local_d8.AllocatorInstance.Data + 0x30;
    pFVar22 = local_d8.AllocatorInstance.Data + (longlong)iVar15 * 0x50;
    iVar16 = iVar15;
    while( true ) {
      if (iVar16 != iVar15) {
        `TCheckedPointerIterator<Chaos::TBox<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        iVar16 = local_d8.ArrayNum;
      }
      if (pFVar20 + -0x30 == pFVar22) break;
      dVar3 = *(double *)(pFVar20 + -0x10);
      dVar4 = *(double *)(pFVar20 + -8);
      dVar5 = *(double *)pFVar20;
      dVar6 = *(double *)(pFVar20 + 8);
      dVar7 = *(double *)(pFVar20 + 0x10);
      dVar8 = *(double *)(pFVar20 + 0x18);
      iVar16 = param_2->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar16 + 1;
      pFVar20 = pFVar20 + 0x50;
      pFVar12 = (param_2->AllocatorInstance).Data;
      lVar17 = (longlong)iVar16;
      *(float *)(pFVar12 + lVar17 * 0x18) = (float)dVar3;
      *(float *)(pFVar12 + lVar17 * 0x18 + 4) = (float)dVar4;
      *(float *)(pFVar12 + lVar17 * 0x18 + 8) = (float)dVar5;
      *(ulonglong *)(pFVar12 + lVar17 * 0x18 + 0xc) = CONCAT44((float)dVar7,(float)dVar6);
      *(float *)(pFVar12 + lVar17 * 0x18 + 0x14) = (float)dVar8;
      iVar16 = local_d8.ArrayNum;
    }
    DestructItems<Chaos::TBox<double,3>,int>
              ((TBox<double,3> *)local_d8.AllocatorInstance.Data,iVar16);
    FVar19.Data = local_d8.AllocatorInstance.Data;
  }
  else if ((param_1->field_0x28 & 1) == 0) {
    uVar11 = param_2->ArrayNum;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    iVar15 = 0;
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar11,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
      iVar15 = local_e8.ArrayNum;
    }
    iVar16 = param_2->ArrayNum;
    pFVar22 = (param_2->AllocatorInstance).Data;
    pFVar20 = pFVar22 + (longlong)iVar16 * 0x18;
    while( true ) {
      if (param_2->ArrayNum != iVar16) {
        `TCheckedPointerIterator<Chaos::TAABB<float,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        iVar15 = local_e8.ArrayNum;
      }
      if (pFVar22 == pFVar20) break;
      fVar2 = *(float *)pFVar22;
      uVar9 = *(undefined8 *)(pFVar22 + 0xc);
      dVar3 = (double)(float)((ulonglong)uVar9 >> 0x20);
      uVar10 = *(undefined8 *)(pFVar22 + 4);
      dVar4 = (double)(float)((ulonglong)uVar10 >> 0x20);
      local_90 = (double)*(float *)(pFVar22 + 0x14);
      if (iVar15 == local_e8.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      lVar17 = (longlong)iVar15;
      iVar15 = iVar15 + 1;
      local_e8.ArrayNum = iVar15;
      pFVar22 = pFVar22 + 0x18;
      *(double *)(local_e8.AllocatorInstance.Data + lVar17 * 0x30) = (double)fVar2;
      auVar14._8_4_ = SUB84(dVar4,0);
      auVar14._0_8_ = (double)(float)uVar10;
      auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(local_e8.AllocatorInstance.Data + lVar17 * 0x30 + 8) = auVar14;
      auVar13._8_4_ = SUB84(dVar3,0);
      auVar13._0_8_ = (double)(float)uVar9;
      auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(local_e8.AllocatorInstance.Data + lVar17 * 0x30 + 0x18) = auVar13;
      *(double *)(local_e8.AllocatorInstance.Data + lVar17 * 0x30 + 0x28) = local_90;
    }
    TArrayPrivateFriend::Serialize<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_>
              (param_1,&local_e8);
    FVar19.Data = local_e8.AllocatorInstance.Data;
  }
  else {
    local_c8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8[0].ArrayNum = 0;
    local_c8[0].ArrayMax = 0;
    TArrayPrivateFriend::Serialize<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_>
              (param_1,local_c8);
    TArray<Chaos::TAABB<float,3>,TSizedDefaultAllocator<32>_>::Reset(param_2,local_c8[0].ArrayNum);
    iVar15 = local_c8[0].ArrayNum;
    uVar18 = (ulonglong)local_c8[0].ArrayNum;
    pFVar20 = local_c8[0].AllocatorInstance.Data + 0x10;
    pTVar21 = (TBox<double,3> *)(local_c8[0].AllocatorInstance.Data + uVar18 * 0x30);
    while( true ) {
      if ((int)uVar18 != iVar15) {
        `TCheckedPointerIterator<Chaos::TAABB<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      FVar19.Data = local_c8[0].AllocatorInstance.Data;
      if ((TBox<double,3> *)(pFVar20 + -0x10) == pTVar21) break;
      dVar3 = (double)((TBox<double,3> *)(pFVar20 + -0x10))->_padding_;
      iVar16 = param_2->ArrayNum;
      dVar4 = *(double *)(pFVar20 + -8);
      dVar5 = *(double *)pFVar20;
      dVar6 = *(double *)(pFVar20 + 8);
      dVar7 = *(double *)(pFVar20 + 0x10);
      dVar8 = *(double *)(pFVar20 + 0x18);
      if (iVar16 == param_2->ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar16 + 1;
      pFVar20 = pFVar20 + 0x30;
      pFVar22 = (param_2->AllocatorInstance).Data;
      lVar17 = (longlong)iVar16;
      *(float *)(pFVar22 + lVar17 * 0x18) = (float)dVar3;
      *(float *)(pFVar22 + lVar17 * 0x18 + 4) = (float)dVar4;
      *(float *)(pFVar22 + lVar17 * 0x18 + 8) = (float)dVar5;
      *(ulonglong *)(pFVar22 + lVar17 * 0x18 + 0xc) = CONCAT44((float)dVar7,(float)dVar6);
      *(float *)(pFVar22 + lVar17 * 0x18 + 0x14) = (float)dVar8;
      uVar18 = local_c8[0]._8_8_ & 0xffffffff;
    }
  }
  if ((TBox<double,3> *)FVar19.Data != (TBox<double,3> *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  return;
}

// SerializeAsAABBs<double> @ 143ae7230

void __cdecl
Chaos::TBox<double,3>::SerializeAsAABBs<double>
          (FArchive *param_1,TArray<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  TBox<double,3> *pTVar10;
  undefined8 local_res8;
  TArray<Chaos::TBox<double,3>,TSizedDefaultAllocator<32>_> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar5 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x18 < iVar5) {
    TArrayPrivateFriend::Serialize<Chaos::TAABB<double,3>,TSizedDefaultAllocator<32>_>
              (param_1,param_2);
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<Chaos::TBox<double,3>,TSizedDefaultAllocator<32>_>
            (param_1,&local_48);
  uVar8 = local_48._8_8_ & 0xffffffff;
  if (-1 < local_48.ArrayNum) {
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < local_48.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_48.ArrayNum,&param_2->AllocatorInstance,0,piVar1);
      uVar8 = local_48._8_8_ & 0xffffffff;
    }
    iVar5 = (int)uVar8;
    pFVar9 = local_48.AllocatorInstance.Data + 0x20;
    pTVar10 = (TBox<double,3> *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x50);
    while( true ) {
      iVar6 = (int)uVar8;
      if ((int)uVar8 != iVar5) {
        `TCheckedPointerIterator<Chaos::TBox<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
        iVar6 = local_48.ArrayNum;
      }
      if ((TBox<double,3> *)(pFVar9 + -0x20) == pTVar10) break;
      local_38 = *(undefined4 *)pFVar9;
      uStack_34 = *(undefined4 *)(pFVar9 + 4);
      uStack_30 = *(undefined4 *)(pFVar9 + 8);
      uStack_2c = *(undefined4 *)(pFVar9 + 0xc);
      iVar6 = param_2->ArrayNum;
      local_28 = *(undefined4 *)(pFVar9 + 0x18);
      uStack_24 = *(undefined4 *)(pFVar9 + 0x1c);
      uStack_20 = *(undefined4 *)(pFVar9 + 0x20);
      uStack_1c = *(undefined4 *)(pFVar9 + 0x24);
      local_res8 = *(undefined8 *)(pFVar9 + 0x10);
      uVar3 = *(undefined8 *)(pFVar9 + 0x28);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_2->AllocatorInstance,piVar1);
      }
      lVar7 = (longlong)iVar6;
      param_2->ArrayNum = iVar6 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar9 + 0x50;
      pFVar2 = pFVar4 + lVar7 * 0x30;
      *(undefined4 *)pFVar2 = local_38;
      *(undefined4 *)(pFVar2 + 4) = uStack_34;
      *(undefined4 *)(pFVar2 + 8) = uStack_30;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_2c;
      pFVar2 = pFVar4 + lVar7 * 0x30 + 0x18;
      *(undefined4 *)pFVar2 = local_28;
      *(undefined4 *)(pFVar2 + 4) = uStack_24;
      *(undefined4 *)(pFVar2 + 8) = uStack_20;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_1c;
      *(undefined8 *)(pFVar4 + lVar7 * 0x30 + 0x10) = local_res8;
      *(undefined8 *)(pFVar4 + lVar7 * 0x30 + 0x28) = uVar3;
      uVar8 = local_48._8_8_ & 0xffffffff;
    }
    DestructItems<Chaos::TBox<double,3>,int>
              ((TBox<double,3> *)local_48.AllocatorInstance.Data,iVar6);
    if ((TBox<double,3> *)local_48.AllocatorInstance.Data != (TBox<double,3> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar8);
}

// GetVertices @ 143feb410

void __thiscall
UE::Math::TBox<double>::GetVertices(TBox<double> *this,TVector<double> (*param_1) [8])

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Min).field0_0x0._s_0.Y;
  dVar1 = (this->Min).field0_0x0._s_0.Z;
  (*param_1)[0].field0_0x0._s_0.X = (this->Min).field0_0x0._s_0.X;
  (*param_1)[0].field0_0x0._s_0.Y = dVar2;
  (*param_1)[0].field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->Min).field0_0x0._s_0.Y;
  dVar2 = (this->Max).field0_0x0._s_0.Z;
  (*param_1)[1].field0_0x0._s_0.X = (this->Min).field0_0x0._s_0.X;
  (*param_1)[1].field0_0x0._s_0.Y = dVar1;
  (*param_1)[1].field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Z;
  (*param_1)[2].field0_0x0._s_0.X = (this->Min).field0_0x0._s_0.X;
  (*param_1)[2].field0_0x0._s_0.Y = dVar1;
  (*param_1)[2].field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Min).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Z;
  (*param_1)[3].field0_0x0._s_0.X = (this->Max).field0_0x0._s_0.X;
  (*param_1)[3].field0_0x0._s_0.Y = dVar1;
  (*param_1)[3].field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Min).field0_0x0._s_0.Z;
  (*param_1)[4].field0_0x0._s_0.X = (this->Max).field0_0x0._s_0.X;
  (*param_1)[4].field0_0x0._s_0.Y = dVar1;
  (*param_1)[4].field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Min).field0_0x0._s_0.Y;
  dVar2 = (this->Max).field0_0x0._s_0.Z;
  (*param_1)[5].field0_0x0._s_0.X = (this->Max).field0_0x0._s_0.X;
  (*param_1)[5].field0_0x0._s_0.Y = dVar1;
  (*param_1)[5].field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Max).field0_0x0._s_0.Y;
  dVar2 = (this->Max).field0_0x0._s_0.Z;
  (*param_1)[6].field0_0x0._s_0.X = (this->Min).field0_0x0._s_0.X;
  (*param_1)[6].field0_0x0._s_0.Y = dVar1;
  (*param_1)[6].field0_0x0._s_0.Z = dVar2;
  dVar2 = (this->Max).field0_0x0._s_0.Y;
  dVar1 = (this->Max).field0_0x0._s_0.Z;
  (*param_1)[7].field0_0x0._s_0.X = (this->Max).field0_0x0._s_0.X;
  (*param_1)[7].field0_0x0._s_0.Y = dVar2;
  (*param_1)[7].field0_0x0._s_0.Z = dVar1;
  return;
}

// InverseTransformBy @ 143fef3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
UE::Math::TBox<double>::InverseTransformBy
          (TBox<double> *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  double dVar11;
  undefined1 auVar12 [8];
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar41;
  undefined4 uVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 auStack_1f0 [8];
  double local_1e8;
  double dStack_1e0;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)local_208;
  if (this->IsValid == '\0') {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    pdVar16 = &local_178;
    bVar14 = 0;
    local_160 = (this->Min).field0_0x0._s_0.X;
    local_158 = (this->Min).field0_0x0._s_0.Y;
    local_150 = (this->Max).field0_0x0._s_0.Z;
    local_140 = (this->Max).field0_0x0._s_0.Y;
    local_178 = (this->Min).field0_0x0._s_0.X;
    dStack_170 = (this->Min).field0_0x0._s_0.Y;
    local_130 = (this->Max).field0_0x0._s_0.X;
    local_118 = local_130;
    local_100 = local_130;
    local_d0 = (this->Max).field0_0x0._s_0.X;
    dStack_c8 = (this->Max).field0_0x0._s_0.Y;
    dStack_1e0 = 0.0;
    local_168 = (this->Min).field0_0x0._s_0.Z;
    local_138 = (this->Min).field0_0x0._s_0.Z;
    local_1e8 = 0.0;
    local_120 = local_138;
    local_108 = local_138;
    uVar15 = 0;
    dVar1 = 0.0;
    local_c0 = (this->Max).field0_0x0._s_0.Z;
    local_1f8 = 0.0;
    auStack_1f0 = (undefined1  [8])0x0;
    dVar2 = 0.0;
    local_148 = local_160;
    local_128 = local_158;
    local_110 = local_140;
    local_f8 = local_158;
    local_f0 = local_150;
    local_e8 = local_160;
    local_e0 = local_140;
    local_d8 = local_150;
    dVar11 = local_1e8;
    auVar12 = auStack_1f0;
    do {
      dVar21 = pdVar16[2] - (param_1->Translation).ZW.m128d_f64[0];
      dVar29 = (param_1->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar6 = (param_1->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar38 = (param_1->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar41 = (param_1->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar30._8_4_ = SUB84(dVar41,0);
      auVar30._0_8_ = dVar38;
      uVar42 = (undefined4)((ulonglong)dVar41 >> 0x20);
      auVar30._12_4_ = uVar42;
      auVar35._8_4_ = SUB84(dVar41,0);
      auVar35._0_8_ = dVar38;
      auVar35._12_4_ = uVar42;
      dVar7 = *pdVar16 - (param_1->Translation).XY.m128d_f64[0];
      dVar8 = pdVar16[1] - (param_1->Translation).XY.m128d_f64[1];
      uVar42 = SUB84(dVar8,0);
      uVar45 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar27._8_4_ = SUB84(dVar6,0);
      auVar27._0_8_ = dVar29;
      auVar27._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar36 = blendpd(auVar35,auVar27,2);
      auVar46._8_4_ = uVar42;
      auVar46._0_8_ = dVar7;
      auVar46._12_4_ = uVar45;
      auVar22._8_4_ = uVar42;
      auVar22._0_8_ = dVar7;
      auVar22._12_4_ = uVar45;
      auVar26._8_4_ = uVar42;
      auVar26._0_8_ = dVar7;
      auVar26._12_4_ = uVar45;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar21;
      auVar27 = blendpd(auVar26,auVar25,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar38 - dVar7 * auVar30._8_8_;
      auVar47._8_8_ = dVar21 * dVar41 - auVar22._8_8_ * dVar29;
      auVar28._0_8_ = auVar27._0_8_ * dVar29 - dVar21 * auVar36._0_8_;
      auVar28._8_8_ = auVar27._8_8_ * dVar6 - auVar36._8_8_ * 0.0;
      dVar3 = auVar47._8_8_ + auVar47._8_8_;
      dVar4 = auVar28._0_8_ + auVar28._0_8_;
      uVar42 = SUB84(dVar4,0);
      uVar45 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar27 = blendpd(auVar47,auVar28,2);
      auVar43._8_4_ = uVar42;
      auVar43._0_8_ = dVar3;
      auVar43._12_4_ = uVar45;
      auVar23._8_4_ = uVar42;
      auVar23._0_8_ = dVar3;
      auVar23._12_4_ = uVar45;
      auVar9._4_8_ = dVar29;
      auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar31._0_8_ = auVar9._0_8_ << 0x20;
      auVar31._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar31._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar48._0_8_ = auVar27._0_8_ + auVar27._0_8_;
      auVar48._8_8_ = auVar27._8_8_ + auVar27._8_8_;
      auVar39._8_4_ = uVar42;
      auVar39._0_8_ = dVar3;
      auVar39._12_4_ = uVar45;
      auVar44._0_8_ = auVar43._8_8_ * dVar38 - dVar3 * auVar30._8_8_;
      auVar44._8_8_ = auVar48._0_8_ * dVar41 - auVar23._8_8_ * dVar29;
      auVar24._8_4_ = SUB84(auVar48._8_8_,0);
      auVar24._0_8_ = auVar48._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar27 = blendpd(auVar39,auVar48,2);
      lVar17 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) &
                                  _UNK_15061cc8c,
                                  *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar40._0_8_ = auVar27._0_8_ * dVar29 - auVar48._0_8_ * auVar36._0_8_;
      auVar40._8_8_ = auVar27._8_8_ * dVar6 - auVar24._8_8_ * auVar36._8_8_;
      auVar27 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
      auVar32._8_8_ = auVar31._8_8_;
      auVar32._0_8_ = auVar27._0_8_;
      auVar37._0_8_ =
           (double)CONCAT44(auVar27._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar27._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
      lVar18 = -(ulonglong)(auVar37._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2])
      ;
      lVar20 = -(ulonglong)(auVar37._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3])
      ;
      auVar36._8_4_ = SUB84(auVar44._8_8_,0);
      auVar36._0_8_ = auVar44._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
      auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      auVar33._0_4_ = ~(uint)lVar18 & auVar25._0_4_;
      auVar33._4_4_ = ~(uint)((ulonglong)lVar18 >> 0x20) & auVar25._4_4_;
      auVar33._8_4_ = ~(uint)lVar20 & auVar25._8_4_;
      auVar33._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar25._12_4_;
      auVar25 = blendpd(auVar44,auVar40,2);
      dVar3 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar27._4_4_,
                               ~(uint)lVar17 & auVar27._0_4_) *
              (dVar3 * dVar6 + dVar7 + auVar36._8_8_);
      dVar4 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar27._12_4_,
                               ~(uint)lVar19 & auVar27._8_4_) *
              (dVar4 * dVar6 + dVar8 + auVar40._0_8_);
      uVar42 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar29 = SUB168(auVar33 | ZEXT816(0),0) * (auVar48._0_8_ * dVar6 + dVar21 + auVar25._0_8_);
      if (bVar14 == 0) {
        bVar14 = 1;
        unique0x100001b0 = SUB84(dVar4,0);
        auStack_1f0 = (undefined1  [8])dVar3;
        unique0x100001b4 = uVar42;
        dVar1 = dVar4;
        dVar2 = dVar3;
        local_1f8 = dVar29;
        dStack_1e0 = dVar29;
      }
      else {
        if ((double)auVar12 <= dVar3) {
          auVar12 = (undefined1  [8])dVar3;
        }
        if (dVar29 <= local_1f8) {
          local_1f8 = dVar29;
        }
        auVar10._4_8_ =
             SUB168(auVar33 | ZEXT816(0),8) * (auVar48._8_8_ * dVar6 + 0.0 + auVar25._8_8_);
        auVar10._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
        auVar34._0_8_ = auVar10._0_8_ << 0x20;
        auVar34._8_4_ = SUB84(dVar4,0);
        auVar34._12_4_ = uVar42;
        if (dVar3 <= dVar2) {
          dVar2 = dVar3;
        }
        if (auVar34._8_8_ <= dVar1) {
          dVar1 = dVar4;
        }
        if (dVar11 <= auVar34._8_8_) {
          dVar11 = dVar4;
        }
        dVar4 = dVar11;
        if (dStack_1e0 <= dVar29) {
          dStack_1e0 = dVar29;
        }
        local_1e8 = dVar4;
        auStack_1f0 = auVar12;
        dVar3 = (double)auVar12;
      }
      uVar15 = uVar15 + 1;
      pdVar16 = pdVar16 + 3;
      dVar11 = dVar4;
      auVar12 = (undefined1  [8])dVar3;
    } while (uVar15 < 8);
    auVar5._8_4_ = SUB84(dVar1,0);
    auVar5._0_8_ = dVar2;
    auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar5;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_1f8;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)auStack_1f0;
    uVar13 = (ulonglong)bVar14;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_1e8;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_1e0;
    __return_storage_ptr__->IsValid = (char)uVar13;
    __return_storage_ptr__->Pad[0] = (char)(uVar13 >> 8);
    __return_storage_ptr__->Pad[1] = (char)(uVar13 >> 0x10);
    __return_storage_ptr__->Pad[2] = (char)(uVar13 >> 0x18);
    __return_storage_ptr__->Pad[3] = (char)(uVar13 >> 0x20);
    __return_storage_ptr__->Pad[4] = (char)(uVar13 >> 0x28);
    __return_storage_ptr__->Pad[5] = (char)(uVar13 >> 0x30);
    __return_storage_ptr__->Pad[6] = (char)(uVar13 >> 0x38);
  }
  return __return_storage_ptr__;
}

