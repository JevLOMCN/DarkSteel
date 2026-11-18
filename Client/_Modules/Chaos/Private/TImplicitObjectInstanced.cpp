// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 37

// AsInstancedChecked @ 14389e740

TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> * __cdecl
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::AsInstancedChecked
          (FImplicitObject *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *pTVar4;
  
  uVar2 = FImplicitObject::GetType(param_1);
  if (uVar2 != 'K') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StaticType() == Obj.GetType()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *)param_1;
}

// BoundingBox @ 143959470

TAABB<double,3> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::BoundingBox
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TAABB<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  FConvex *pFVar5;
  undefined1 auVar6 [16];
  double dVar7;
  
  pFVar5 = (this->MObject).Reference;
  fVar1 = *(float *)&(pFVar5->LocalBoundingBox).MMin.field_0x4;
  fVar2 = *(float *)&(pFVar5->LocalBoundingBox).MMin.field_0x8;
  fVar3 = *(float *)&(pFVar5->LocalBoundingBox).MMax;
  uVar4 = *(undefined8 *)&(pFVar5->LocalBoundingBox).MMax.field_0x4;
  *(double *)&__return_storage_ptr__->MMin = (double)*(float *)&(pFVar5->LocalBoundingBox).MMin;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = (double)fVar1;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = (double)fVar2;
  dVar7 = (double)(float)((ulonglong)uVar4 >> 0x20);
  *(double *)&__return_storage_ptr__->MMax = (double)fVar3;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)(float)uVar4;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->MMax).field_0x8 = auVar6;
  return __return_storage_ptr__;
}

// BoundingBox @ 1439c64a0

TAABB<double,3> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>::BoundingBox
          (TImplicitObjectInstanced<Chaos::TBox<double,3>_> *this,
          TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TBox<double,3> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pTVar2 = (this->MObject).Reference;
  uVar3 = *(undefined8 *)&(pTVar2->AABB).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(pTVar2->AABB).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(pTVar2->AABB).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(pTVar2->AABB).MMax;
  uVar4 = *(undefined8 *)&(pTVar2->AABB).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(pTVar2->AABB).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar4;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetRadiusf @ 1439d38e0

float __thiscall
Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>::GetRadiusf
          (TImplicitObjectInstanced<Chaos::TBox<double,3>_> *this)

{
  return 0.0;
}

// GetRadiusf @ 1439d38f0

float __thiscall
Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>::GetRadiusf
          (TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *this)

{
  return *(float *)&((this->MObject).Reference)->_padding_;
}

// GetRadiusf @ 1439d3900

float __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FCapsule>::GetRadiusf
          (TImplicitObjectInstanced<Chaos::FCapsule> *this)

{
  return *(float *)&((this->MObject).Reference)->_padding_;
}

// GetRadiusf @ 1439d3910

float __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::GetRadiusf
          (TImplicitObjectInstanced<Chaos::FConvex> *this)

{
  return 0.0;
}

// BoundingBox @ 143b5e840

TAABB<double,3> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::BoundingBox
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  FTriangleMeshImplicitObject *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pFVar2 = (this->MObject).Reference;
  uVar3 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMax;
  uVar4 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(pFVar2->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar4;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// CopyGeometry @ 143b60790

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::CopyGeometry
          (TImplicitObjectInstanced<Chaos::FConvex> *this)

{
  FConvex *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  TRefCountPtr<Chaos::FImplicitObject> TVar6;
  FImplicitObject *in_RDX;
  byte bVar7;
  
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    in_RDX->_padding_ = 0;
  }
  else {
    lVar3 = ((this->MObject).Reference)->_padding_;
    puVar5[1] = 0;
    bVar7 = (byte)lVar3 | 0x40;
    *(byte *)(puVar5 + 3) = bVar7;
    *(byte *)((longlong)puVar5 + 0x19) = bVar7;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x10100;
    *(undefined4 *)(puVar5 + 4) = 0;
    *puVar5 = &___7__TImplicitObjectInstanced_VFConvex_Chaos___Chaos__6B_;
    puVar5[5] = 0;
    pFVar1 = (this->MObject).Reference;
    puVar5[5] = pFVar1;
    if (pFVar1 != (FConvex *)0x0) {
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
      UNLOCK();
    }
    if ((*(byte *)(puVar5[5] + 0x18) & 0x40) != 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351985>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x4f,"IsInstanced(MObject->GetType()) == false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        TVar6.Reference = (FImplicitObject *)(*pcVar2)();
        return (TRefCountPtr<Chaos::FImplicitObject>)TVar6.Reference;
      }
    }
    lVar3 = puVar5[5];
    in_RDX->_padding_ = (longlong)puVar5;
    *(undefined1 *)((longlong)puVar5 + 0x14) = *(undefined1 *)(lVar3 + 0x14);
    *(undefined1 *)((longlong)puVar5 + 0x15) = *(undefined1 *)(lVar3 + 0x15);
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar3 + 0x10);
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometry @ 143b60890

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::CopyGeometry
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  TRefCountPtr<Chaos::FImplicitObject> TVar6;
  FImplicitObject *in_RDX;
  byte bVar7;
  
  puVar5 = ::operator_new(0x30);
  if (puVar5 == (undefined8 *)0x0) {
    in_RDX->_padding_ = 0;
  }
  else {
    lVar3 = ((this->MObject).Reference)->_padding_;
    puVar5[1] = 0;
    bVar7 = (byte)lVar3 | 0x40;
    *(byte *)(puVar5 + 3) = bVar7;
    *(byte *)((longlong)puVar5 + 0x19) = bVar7;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x10100;
    *(undefined4 *)(puVar5 + 4) = 0;
    *puVar5 = &___7__TImplicitObjectInstanced_VFTriangleMeshImplicitObject_Chaos___Chaos__6B_;
    puVar5[5] = 0;
    pFVar1 = (this->MObject).Reference;
    puVar5[5] = pFVar1;
    if (pFVar1 != (FTriangleMeshImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
      UNLOCK();
    }
    if ((*(byte *)(puVar5[5] + 0x18) & 0x40) != 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3369118521899351985>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                         ,0x4f,"IsInstanced(MObject->GetType()) == false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        TVar6.Reference = (FImplicitObject *)(*pcVar2)();
        return (TRefCountPtr<Chaos::FImplicitObject>)TVar6.Reference;
      }
    }
    lVar3 = puVar5[5];
    in_RDX->_padding_ = (longlong)puVar5;
    *(undefined1 *)((longlong)puVar5 + 0x14) = *(undefined1 *)(lVar3 + 0x14);
    *(undefined1 *)((longlong)puVar5 + 0x15) = *(undefined1 *)(lVar3 + 0x15);
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar3 + 0x10);
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143b60bd0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::CopyGeometryWithScale
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar1;
  TVector<double,3> *in_R8;
  FConvex *local_res10;
  
  pTVar1 = ::operator_new(0x78);
  if (pTVar1 == (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_res10 = (this->MObject).Reference;
    if (local_res10 != (FConvex *)0x0) {
      LOCK();
      *(int *)&local_res10->_padding_ = (int)local_res10->_padding_ + 1;
      UNLOCK();
    }
    pTVar1 = TImplicitObjectScaled<Chaos::FConvex,1>::TImplicitObjectScaled<Chaos::FConvex,1>
                       (pTVar1,(FConvex *)&local_res10,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FConvex,1> **)param_1 = pTVar1;
    if (pTVar1 != (TImplicitObjectScaled<Chaos::FConvex,1> *)0x0) {
      LOCK();
      *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
      UNLOCK();
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CopyGeometryWithScale @ 143b60c60

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::CopyGeometryWithScale
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TVector<double,3> *param_1)

{
  TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *pTVar1;
  TVector<double,3> *in_R8;
  FTriangleMeshImplicitObject *local_res10;
  
  pTVar1 = ::operator_new(0x78);
  if (pTVar1 == (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_res10 = (this->MObject).Reference;
    if (local_res10 != (FTriangleMeshImplicitObject *)0x0) {
      LOCK();
      *(int *)&local_res10->_padding_ = (int)local_res10->_padding_ + 1;
      UNLOCK();
    }
    pTVar1 = TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>::
             TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1>
                       (pTVar1,(FTriangleMeshImplicitObject *)&local_res10,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> **)param_1 = pTVar1;
    if (pTVar1 != (TImplicitObjectScaled<Chaos::FTriangleMeshImplicitObject,1> *)0x0) {
      LOCK();
      *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + 1;
      UNLOCK();
      return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// FindGeometryOpposingNormal @ 143b65b80

TVector<double,3> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::FindGeometryOpposingNormal
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  FConvex::FindGeometryOpposingNormal
            ((this->MObject).Reference,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 143b65bb0

TVector<double,3> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::FindGeometryOpposingNormal
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,int param_2,
          TVector<double,3> *param_3)

{
  FTriangleMeshImplicitObject::FindGeometryOpposingNormal
            ((this->MObject).Reference,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 143b66000

int __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::FindMostOpposingFace
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  
  iVar1 = FConvex::FindMostOpposingFace((this->MObject).Reference,param_1,param_2,param_3,param_4);
  return iVar1;
}

// FindMostOpposingFace @ 143b66010

int __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::FindMostOpposingFace
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,double param_4)

{
  int iVar1;
  
  iVar1 = FTriangleMeshImplicitObject::FindMostOpposingFace
                    ((this->MObject).Reference,param_1,param_2,param_3,param_4);
  return iVar1;
}

// GetInnerObject @ 143b678c0

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::GetInnerObject
          (TImplicitObjectInstanced<Chaos::FConvex> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetInnerObject @ 143b678e0

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::GetInnerObject
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)(this->MObject).Reference;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

// GetMaterialIndex @ 143b67dd0

ushort __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::GetMaterialIndex
          (TImplicitObjectInstanced<Chaos::FConvex> *this,uint param_1)

{
  return 0;
}

// GetMaterialIndex @ 143b67de0

ushort __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::GetMaterialIndex
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,uint param_1)

{
  ushort uVar1;
  
  uVar1 = FTriangleMeshImplicitObject::GetMaterialIndex((this->MObject).Reference,param_1);
  return uVar1;
}

// GetNestedType @ 143b680a0

uchar __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::GetNestedType
          (TImplicitObjectInstanced<Chaos::FConvex> *this)

{
  return (uchar)((this->MObject).Reference)->_padding_;
}

// GetNestedType @ 143b680b0

uchar __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::GetNestedType
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this)

{
  return (uchar)((this->MObject).Reference)->_padding_;
}

// GetRadius @ 143b686f0

double __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::GetRadius
          (TImplicitObjectInstanced<Chaos::FConvex> *this)

{
  return 0.0;
}

// GetRadius @ 143b68700

double __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::GetRadius
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this)

{
  return 0.0;
}

// GetRadiusf @ 143b68780

float __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::GetRadiusf
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this)

{
  return 0.0;
}

// GetTypeHash @ 143b68ae0

uint __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::GetTypeHash
          (TImplicitObjectInstanced<Chaos::FConvex> *this)

{
  uint uVar1;
  
  uVar1 = FConvex::GetTypeHash((this->MObject).Reference);
  return uVar1;
}

// GetTypeHash @ 143b68af0

uint __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::GetTypeHash
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this)

{
  uint uVar1;
  
  uVar1 = FTriangleMeshImplicitObject::GetTypeHash((this->MObject).Reference);
  return uVar1;
}

// Overlap @ 143b6abe0

bool __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::Overlap
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TVector<double,3> *param_1,double param_2)

{
  FConvex *pFVar1;
  double dVar2;
  undefined1 local_38 [56];
  
  pFVar1 = (this->MObject).Reference;
  dVar2 = (double)(**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,param_1,local_38);
  return dVar2 <= param_2;
}

// Overlap @ 143b6ac20

bool __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::Overlap
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TVector<double,3> *param_1,double param_2)

{
  bool bVar1;
  
  bVar1 = FTriangleMeshImplicitObject::Overlap((this->MObject).Reference,param_1,param_2);
  return bVar1;
}

// PhiWithNormal @ 143b6b860

double __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::PhiWithNormal
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  double dVar1;
  
  dVar1 = FConvex::PhiWithNormalInternal((this->MObject).Reference,param_1,param_2);
  return dVar1;
}

// PhiWithNormal @ 143b6b870

double __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::PhiWithNormal
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  
  dVar1 = FTriangleMeshImplicitObject::PhiWithNormal((this->MObject).Reference,param_1,param_2);
  return dVar1;
}

// Raycast @ 143b71a90

bool __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::Raycast
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  bool bVar1;
  
  bVar1 = FConvex::Raycast((this->MObject).Reference,param_1,param_2,param_3,param_4,param_5,param_6
                           ,param_7,param_8);
  return bVar1;
}

// Raycast @ 143b71aa0

bool __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::Raycast
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  bool bVar1;
  
  bVar1 = FTriangleMeshImplicitObject::Raycast
                    ((this->MObject).Reference,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return bVar1;
}

// Serialize @ 143b767c0

void __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::Serialize
          (TImplicitObjectInstanced<Chaos::FConvex> *this,FChaosArchive *param_1)

{
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  operator<<<Chaos::FConvex>(param_1,&this->MObject);
  return;
}

// Serialize @ 143b76810

void __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::Serialize
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,FChaosArchive *param_1
          )

{
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  operator<<<Chaos::FTriangleMeshImplicitObject>(param_1,&this->MObject);
  return;
}

// ToString @ 143b7c620

FString * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::ToString
          (TImplicitObjectInstanced<Chaos::FConvex> *this,FString *__return_storage_ptr__)

{
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"Convex: Verts: %d, Edges %d, Planes: %d, Margin %f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Instanced %s, Margin %f");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 143b7c6e0

FString * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::ToString
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          FString *__return_storage_ptr__)

{
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"TriangleMesh");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Instanced %s, Margin %f");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

