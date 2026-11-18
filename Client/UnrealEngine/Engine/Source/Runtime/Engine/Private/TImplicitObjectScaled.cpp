// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// CopyGeometry @ 1481dbf00

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::CopyGeometry
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this)

{
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *pTVar1;
  FImplicitObject *in_RDX;
  
  pTVar1 = CopyHelper(this);
  in_RDX->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0) {
    LOCK();
    *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 1481dbf30

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::CopyGeometryWithScale
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this_00;
  double *in_R8;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = CopyHelper(this);
  local_28 = (double)*(float *)&this_00->_padding_ * *in_R8;
  local_20 = (double)*(float *)((longlong)&this_00->_padding_ + 4) * in_R8[1];
  local_18 = (double)*(float *)&this_00->_padding_ * in_R8[2];
  SetScale(this_00,(TVector<double,3> *)&local_28);
  *(TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> **)param_1 = this_00;
  if (this_00 != (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyHelper @ 1481dbfc0

TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> * __cdecl
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::CopyHelper
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *param_1)

{
  longlong *plVar1;
  FTriangleMeshImplicitObject *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FTriangleMeshImplicitObject *this;
  uchar uVar5;
  byte bVar6;
  bool bVar7;
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *pTVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FTriangleMeshImplicitObject *local_res18;
  double local_48;
  double local_40;
  double local_38;
  
  FTriangleMeshImplicitObject::CopyGeometry((param_1->MObject).Reference);
  pTVar8 = ::operator_new(0x78);
  this = local_res18;
  if (pTVar8 == (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0) {
    pTVar8 = (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)0x0;
  }
  else {
    local_48 = (double)*(float *)&param_1->_padding_;
    lVar4 = param_1->_padding_;
    local_38 = (double)*(float *)&param_1->_padding_;
    local_res18 = (FTriangleMeshImplicitObject *)0x0;
    local_40 = (double)*(float *)((longlong)&param_1->_padding_ + 4);
    uVar5 = FImplicitObject::GetType((FImplicitObject *)this);
    FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)pTVar8,2,uVar5);
    pTVar8->_padding_ =
         (longlong)&___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___0A__Chaos__6B_;
    (pTVar8->MObject).Reference = this;
    if (this != (FTriangleMeshImplicitObject *)0x0) {
      LOCK();
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      UNLOCK();
    }
    uVar5 = FImplicitObject::GetType((FImplicitObject *)(pTVar8->MObject).Reference);
    if ((char)uVar5 < '\0') {
      local_res8[0] = 0;
      `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit'::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    bVar6 = FImplicitObject::GetType((FImplicitObject *)(pTVar8->MObject).Reference);
    if ((bVar6 & 0x40) != 0) {
      local_res10[0] = 0;
      `Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit'::__l2
      ::<lambda_2>::operator()(local_res10);
    }
    uVar5 = FImplicitObject::GetType((FImplicitObject *)(pTVar8->MObject).Reference);
    if ((uVar5 == '\x04') || (uVar5 == '\x05')) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x42e,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *)(*pcVar3)();
        return pTVar8;
      }
    }
    pFVar2 = (pTVar8->MObject).Reference;
    *(undefined1 *)((longlong)&pTVar8->_padding_ + 4) =
         *(undefined1 *)((longlong)&pFVar2->_padding_ + 4);
    *(undefined1 *)((longlong)&pTVar8->_padding_ + 5) =
         *(undefined1 *)((longlong)&pFVar2->_padding_ + 5);
    *(int *)&pTVar8->_padding_ = (int)lVar4;
    SetScale(pTVar8,(TVector<double,3> *)&local_48);
    if (this != (FTriangleMeshImplicitObject *)0x0) {
      LOCK();
      plVar1 = &this->_padding_;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
        (**(code **)this->_padding_)(this,1);
      }
    }
  }
  if (local_res18 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    plVar1 = &local_res18->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&local_res18->_padding_ + 4) == 0)) {
      (**(code **)local_res18->_padding_)(local_res18,1);
    }
  }
  return pTVar8;
}

// FindClosestFaceAndVertices @ 1481f0490

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::FindClosestFaceAndVertices
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindClosestIntersectionImp @ 1481f04a0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::FindClosestIntersectionImp
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  Pair<Chaos::TVector<double,3>,bool> *pPVar6;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*(float *)&this->_padding_ != 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351169>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x37f,"OuterMargin == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pPVar6 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
      return pPVar6;
    }
  }
  local_20 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_18 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_10 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_38 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_30 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_28 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)(this->MObject).Reference,__return_storage_ptr__,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,param_3);
  if (__return_storage_ptr__->Second != false) {
    fVar1 = *(float *)&this->_padding_;
    dVar3 = *(double *)&__return_storage_ptr__->First;
    fVar2 = *(float *)&this->_padding_;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x8 *
                 *(float *)((longlong)&this->_padding_ + 4));
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         (double)((float)*(double *)&(__return_storage_ptr__->First).field_0x10 * fVar1);
    *(double *)&__return_storage_ptr__->First = (double)((float)dVar3 * fVar2);
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 1481f0610

TVector<double,3> * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::FindGeometryOpposingNormal
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector<double,3> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  dVar7 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_3->field_0x8 * *(double *)&param_3->field_0x8 +
            *(double *)param_3 * *(double *)param_3 +
           *(double *)&param_3->field_0x10 * *(double *)&param_3->field_0x10) -
           __real_3ff0000000000000;
  uVar10 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
      (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351205>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x35b,
                       "FMath::IsNearlyEqual(OriginalNormal.SizeSquared(), FReal(1), FReal((1.e-4f)))"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  dVar13 = (double)*(float *)&this->_padding_ * *(double *)param_3;
  local_60 = (double)*(float *)&this->_padding_ * *(double *)param_1;
  local_70 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_50 = (double)*(float *)&this->_padding_ * *(double *)&param_1->field_0x10;
  local_58 = local_70 * *(double *)&param_1->field_0x8;
  local_70 = local_70 * *(double *)&param_3->field_0x8;
  dVar12 = (double)*(float *)&this->_padding_ * *(double *)&param_3->field_0x10;
  auVar8._0_8_ = local_70 * local_70;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar13 * dVar13 + auVar8._0_8_ + dVar12 * dVar12;
  auVar9 = sqrtpd(auVar8,auVar9);
  if (auVar9._0_8_ <= __real_3e45798ee0000000) {
    local_70 = 0.0;
    local_78 = 0.0;
  }
  else {
    local_78 = dVar7 / auVar9._0_8_;
    dVar7 = local_78 * dVar12;
    local_70 = local_78 * local_70;
    local_78 = local_78 * dVar13;
  }
  local_68 = dVar7;
  FTriangleMeshImplicitObject::FindGeometryOpposingNormal
            ((this->MObject).Reference,(TVector<double,3> *)&local_48,(TVector<double,3> *)&local_60
             ,param_2,(TVector<double,3> *)&local_78);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)*(float *)&this->_padding_ * local_40;
  dVar12 = __real_0010000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar1 * local_38;
  *(double *)__return_storage_ptr__ = (double)fVar2 * local_48;
  dVar12 = TVector<double,3>::SafeNormalize(__return_storage_ptr__,dVar12);
  if (dVar12 == 0.0) {
    uVar4 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 1481f0820

int __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::FindMostOpposingFace
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = (double)*(float *)&this->_padding_;
  local_20 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_18 = (double)*(float *)&this->_padding_;
  iVar1 = FTriangleMeshImplicitObject::FindMostOpposingFaceScaled
                    ((this->MObject).Reference,param_1,param_2,param_3,param_4,
                     (TVector<double,3> *)&local_28);
  return iVar1;
}

// GetInnerObject @ 1481faf00

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::GetInnerObject
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetMaterialIndex @ 1481fc530

ushort __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::GetMaterialIndex
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,uint param_1)

{
  ushort uVar1;
  
  uVar1 = FTriangleMeshImplicitObject::GetMaterialIndex((this->MObject).Reference,param_1);
  return uVar1;
}

// GetNestedType @ 1481fc8a0

uchar __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::GetNestedType
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this)

{
  uchar uVar1;
  
  uVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  return uVar1;
}

// GetRadius @ 1481fe130

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::GetRadius
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this)

{
  return 0.0;
}

// GetRadiusf @ 1481fe140

float __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::GetRadiusf
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this)

{
  return 0.0;
}

// GetTypeHash @ 1481ffae0

uint __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::GetTypeHash
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->_padding_,0xc,0);
  uVar2 = FTriangleMeshImplicitObject::GetTypeHash((this->MObject).Reference);
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

// Overlap @ 148209620

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::Overlap
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1,double param_2)

{
  float fVar1;
  bool bVar2;
  double local_28;
  double local_20;
  double local_18;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  local_28 = (double)((float)*(double *)param_1 * fVar1);
  local_20 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_18 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  bVar2 = FTriangleMeshImplicitObject::Overlap
                    ((this->MObject).Reference,(TVector<double,3> *)&local_28,
                     (double)fVar1 * param_2);
  return bVar2;
}

// PhiWithNormal @ 14820ab10

double __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::PhiWithNormal
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  FTriangleMeshImplicitObject *pFVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  pFVar3 = (this->MObject).Reference;
  fVar1 = *(float *)&this->_padding_;
  fVar2 = *(float *)&this->_padding_;
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  local_78 = *(double *)param_1 / (double)fVar2;
  local_68 = *(double *)&param_1->field_0x10 / (double)fVar1;
  local_70 = *(double *)&param_1->field_0x8 / dVar5;
  dVar4 = (double)(**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_78,&local_60);
  *(double *)param_2 = (double)fVar2 * local_60;
  *(double *)&param_2->field_0x8 = dVar5 * local_58;
  *(double *)&param_2->field_0x10 = (double)fVar1 * local_50;
  dVar5 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
  return dVar5 * dVar4;
}

// Raycast @ 14820c000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::Raycast
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar15 [16];
  float fVar16;
  double local_res8;
  float fStack_d4;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  auVar15._8_8_ = in_XMM3_Qb;
  auVar15._0_8_ = param_3;
  if ((param_3 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351456>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x260,"Length > 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar3 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x261,"FMath::IsNearlyEqual(Dir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (param_4 != 0.0) {
    auVar15 = ZEXT416((uint)__real_322bcc77);
    if (((__real_322bcc77 <
          (float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
        (__real_322bcc77 <
         (float)((uint)(*(float *)&this->_padding_ - *(float *)&this->_padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3369118521899351454>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                           ,0x262,
                           "Thickness == 0 || (FMath::IsNearlyEqual(MScale[0], MScale[1]) && FMath::IsNearlyEqual(MScale[0], MScale[2]))"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  local_b0 = (double)((float)*(double *)param_1 * *(float *)((longlong)&this->_padding_ + 4));
  local_a8 = (double)((float)*(double *)&param_1->field_0x8 * *(float *)&this->_padding_);
  local_a0 = (double)((float)*(double *)&param_1->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  local_c8 = (double)((float)*(double *)param_2 * *(float *)((longlong)&this->_padding_ + 4));
  local_c0 = (double)((float)*(double *)&param_2->field_0x8 * *(float *)&this->_padding_);
  local_b8 = (double)((float)*(double *)&param_2->field_0x10 *
                     *(float *)((longlong)&this->_padding_ + 4));
  auVar13._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + local_b8 * local_b8;
  auVar13._8_8_ = 0;
  auVar15 = sqrtpd(auVar15,auVar13);
  dVar12 = auVar15._0_8_;
  if (__real_0010000000000000 < dVar12) {
    dVar3 = dVar3 / dVar12;
    local_c8 = local_c8 * dVar3;
    local_c0 = local_c0 * dVar3;
    local_b8 = local_b8 * dVar3;
    bVar5 = FTriangleMeshImplicitObject::Raycast
                      ((this->MObject).Reference,(TVector<double,3> *)&local_b0,
                       (TVector<double,3> *)&local_c8,dVar12 * param_3,
                       (double)*(float *)((longlong)&this->_padding_ + 4) * param_4,&local_res8,
                       (TVector<double,3> *)&local_98,(TVector<double,3> *)&local_80,param_8);
    if (bVar5) {
      local_res8 = local_res8 * dVar3;
      if (local_res8 == 0.0) {
        uVar4 = *(undefined8 *)&param_1->field_0x8;
        *(undefined8 *)param_6 = *(undefined8 *)param_1;
        *(undefined8 *)&param_6->field_0x8 = uVar4;
        *(undefined8 *)&param_6->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        uVar7 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar8 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar9 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar10 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)param_7 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&param_7->field_0x4 = uVar7;
        *(uint *)&param_7->field_0x8 = uVar8;
        *(uint *)&param_7->field_0xc = uVar9;
        *(ulonglong *)&param_7->field_0x10 = CONCAT44(uVar14,uVar10);
        *param_5 = local_res8;
        return true;
      }
      if (local_res8 < param_3) {
        fVar16 = *(float *)((longlong)&this->_padding_ + 4);
        fVar1 = *(float *)&this->_padding_;
        *(double *)param_6 = (double)((float)local_98 * *(float *)&this->_padding_);
        *(double *)&param_6->field_0x8 = (double)((float)local_90 * fVar16);
        *(double *)&param_6->field_0x10 = (double)((float)local_88 * fVar1);
        fStack_d4 = (float)local_78 * *(float *)&this->_padding_;
        uVar11 = (float)local_80 * *(float *)((longlong)&this->_padding_ + 4);
        local_d0 = (float)local_70 * *(float *)((longlong)&this->_padding_ + 4);
        fVar16 = (float)uVar11 * (float)uVar11 + fStack_d4 * fStack_d4 + local_d0 * local_d0;
        if (fVar16 != __real_3f800000) {
          if (__real_00800000 <= fVar16) {
            fVar16 = __real_3f800000 / SQRT(fVar16);
            fStack_d4 = fStack_d4 * fVar16;
            local_d0 = local_d0 * fVar16;
            uVar11 = (float)uVar11 * fVar16;
          }
          else {
            fStack_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        *(double *)param_7 = (double)(float)uVar11;
        *(double *)&param_7->field_0x8 = (double)fStack_d4;
        *(double *)&param_7->field_0x10 = (double)local_d0;
        *param_5 = local_res8;
        return true;
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x267,"LengthScale > TNumericLimits<FReal>::Min()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Serialize @ 148215650

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::Serialize
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,FChaosArchive *param_1)

{
  byte bVar1;
  int iVar2;
  FChaosArchive *pFVar3;
  FArchive *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar3 = operator<<<Chaos::FTriangleMeshImplicitObject>(param_1,&this->MObject);
  pFVar4 = operator<<<3>((FArchive *)pFVar3,(TVector<float,3> *)&this->_padding_);
  operator<<<3>(pFVar4,(TVector<float,3> *)((longlong)&this->_padding_ + 4));
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,(TAABB<double,3> *)&this->_padding_);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar2 < 0xc) {
    bVar1 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
    *(byte *)&this->_padding_ = bVar1 | 0x80;
  }
  return;
}

// SetScale @ 148218950

void __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::SetScale
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          TVector<double,3> *param_1)

{
  FTriangleMeshImplicitObject *pFVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  fVar10 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar13 = *(double *)&param_1->field_0x8;
  dVar9 = *(double *)&param_1->field_0x10;
  fVar2 = (float)*(double *)param_1;
  if ((float)((uint)(float)*(double *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      __real_358637bd) {
    fVar2 = __real_358637bd;
  }
  *(float *)&this->_padding_ = fVar2;
  fVar3 = __real_3f800000;
  *(float *)((longlong)&this->_padding_ + 4) = __real_3f800000 / fVar2;
  fVar12 = (float)dVar13;
  if ((float)((uint)(float)dVar13 & uVar4) < fVar10) {
    fVar12 = fVar10;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar12;
  *(float *)&this->_padding_ = fVar3 / fVar12;
  if (fVar10 <= (float)((uint)(float)dVar9 & uVar4)) {
    fVar10 = (float)dVar9;
  }
  *(float *)&this->_padding_ = fVar10;
  *(float *)((longlong)&this->_padding_ + 4) = fVar3 / fVar10;
  pFVar1 = (this->MObject).Reference;
  *(float *)&this->_padding_ = fVar2 * *(float *)&pFVar1->_padding_ + *(float *)&this->_padding_;
  dVar13 = *(double *)&(pFVar1->MLocalBoundingBox).MMax.field_0x10;
  dVar15 = *(double *)&(pFVar1->MLocalBoundingBox).MMax;
  dVar14 = *(double *)&(pFVar1->MLocalBoundingBox).MMax.field_0x8;
  dVar7 = (double)fVar2 * *(double *)&(pFVar1->MLocalBoundingBox).MMin;
  dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4) *
           *(double *)&(pFVar1->MLocalBoundingBox).MMin.field_0x8;
  dVar9 = (double)*(float *)&this->_padding_ *
          *(double *)&(pFVar1->MLocalBoundingBox).MMin.field_0x10;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar9;
  dVar15 = (double)*(float *)&this->_padding_ * dVar15;
  dVar14 = (double)*(float *)((longlong)&this->_padding_ + 4) * dVar14;
  dVar7 = dVar15;
  if ((double)this->_padding_ <= dVar15) {
    dVar7 = (double)this->_padding_;
  }
  dVar13 = (double)*(float *)&this->_padding_ * dVar13;
  dVar8 = dVar14;
  if (dVar11 <= dVar14) {
    dVar8 = dVar11;
  }
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar8;
  dVar7 = dVar13;
  if (dVar9 <= dVar13) {
    dVar7 = dVar9;
  }
  this->_padding_ = (longlong)dVar7;
  dVar9 = (double)this->_padding_;
  uVar5 = SUB84(dVar9,0);
  uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (dVar9 <= dVar15) {
    uVar5 = SUB84(dVar15,0);
    uVar6 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  dVar9 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar14) {
    dVar9 = dVar14;
  }
  dVar7 = (double)this->_padding_;
  if ((double)this->_padding_ <= dVar13) {
    dVar7 = dVar13;
  }
  this->_padding_ = CONCAT44(uVar6,uVar5);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)dVar7;
  return;
}

// ToString @ 1482221b0

FString * __thiscall
Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::ToString
          (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0> *this,
          FString *__return_storage_ptr__)

{
  FString local_58 [5];
  
  ::FString::PrintfImpl(local_58,L"TriangleMesh");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 150527bc0

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899351000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899351000>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150528170

bool __thiscall
`Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit'::__l2::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3369118521899350999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3369118521899350999>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,0>::InitScaledImplicit(Chaos::TVector<double,3>_const&___ptr64,float)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

