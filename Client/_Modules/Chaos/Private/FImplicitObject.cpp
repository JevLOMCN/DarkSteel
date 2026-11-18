// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 71

// AccumulateAllImplicitObjects @ 14374f6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FImplicitObject::AccumulateAllImplicitObjects
          (FImplicitObject *this,
          TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TRigidTransform<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  FImplicitObject **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FImplicitObject *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_78 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)&param_2->field_0x8;
  local_68 = *(undefined8 *)&param_2->field_0x10;
  uStack_60 = *(undefined8 *)&param_2->field_0x18;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_58 = *(undefined8 *)&param_2->field_0x20;
  uStack_50 = *(undefined8 *)&param_2->field_0x28;
  local_48 = *(undefined8 *)&param_2->field_0x30;
  uStack_40 = *(undefined8 *)&param_2->field_0x38;
  local_38 = *(undefined8 *)&param_2->field_0x40;
  uStack_30 = *(undefined8 *)&param_2->field_0x48;
  local_28 = *(undefined8 *)&param_2->field_0x50;
  uStack_20 = *(undefined8 *)&param_2->field_0x58;
  local_88 = this;
  if ((pFVar1 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar1 + (longlong)param_1->ArrayMax * 0x70)) {
    local_a0 = (longlong)param_1->ArrayNum;
    local_98 = 0x70;
    local_b8 = &local_88;
    local_b0 = pFVar1;
    local_a8 = (longlong)param_1->ArrayMax;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  lVar5 = (longlong)iVar4 * 0x70;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(FImplicitObject **)(pFVar1 + lVar5) = local_88;
  *(undefined8 *)(pFVar1 + lVar5 + 8) = uStack_80;
  *(undefined8 *)(pFVar1 + lVar5 + 0x10) = local_78;
  *(undefined8 *)(pFVar1 + lVar5 + 0x10 + 8) = uStack_70;
  *(undefined8 *)(pFVar1 + lVar5 + 0x20) = local_68;
  *(undefined8 *)(pFVar1 + lVar5 + 0x20 + 8) = uStack_60;
  *(undefined8 *)(pFVar1 + lVar5 + 0x30) = local_58;
  *(undefined8 *)(pFVar1 + lVar5 + 0x30 + 8) = uStack_50;
  *(undefined8 *)(pFVar1 + lVar5 + 0x40) = local_48;
  *(undefined8 *)(pFVar1 + lVar5 + 0x40 + 8) = uStack_40;
  *(undefined8 *)(pFVar1 + lVar5 + 0x50) = local_38;
  *(undefined8 *)(pFVar1 + lVar5 + 0x50 + 8) = uStack_30;
  *(undefined8 *)(pFVar1 + lVar5 + 0x60) = local_28;
  *(undefined8 *)(pFVar1 + lVar5 + 0x60 + 8) = uStack_20;
  return;
}

// AccumulateAllSerializableImplicitObjects @ 14374f830

void __thiscall
Chaos::FImplicitObject::AccumulateAllSerializableImplicitObjects
          (FImplicitObject *this,
          TArray<Chaos::Pair<Chaos::TSerializablePtr<Chaos::FImplicitObject>,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TRigidTransform<double,3> *param_2,
          TSerializablePtr<Chaos::FImplicitObject> param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0x182,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CalculateTransformedBounds @ 143759430

TAABB<double,3> * __thiscall
Chaos::FImplicitObject::CalculateTransformedBounds
          (FImplicitObject *this,TAABB<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TAABB<double,3> *pTVar3;
  undefined1 local_38 [48];
  
  if (this->bHasBoundingBox == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasBoundingBox()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAABB<double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = (TAABB<double,3> *)(**(code **)(this->_padding_ + 0x90))(this,local_38);
  TAABB<double,3>::TransformedAABB(pTVar3,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Copy @ 14375b8f0

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> __thiscall
Chaos::FImplicitObject::Copy(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> TVar3;
  FImplicitObject *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0xe3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)in_RDX;
}

// CopyWithScale @ 14375be20

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> __thiscall
Chaos::FImplicitObject::CopyWithScale(FImplicitObject *this,TVector<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0xe6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)TVar3.Ptr;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)
         (FImplicitObject *)param_1;
}

// CountLeafObjectsInHierarchyImpl @ 14375be70

int __thiscall Chaos::FImplicitObject::CountLeafObjectsInHierarchyImpl(FImplicitObject *this)

{
  return 1;
}

// CountObjectsInHierarchyImpl @ 14375be80

int __thiscall Chaos::FImplicitObject::CountObjectsInHierarchyImpl(FImplicitObject *this)

{
  return 1;
}

// DeepCopy @ 14375d2d0

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> __thiscall
Chaos::FImplicitObject::DeepCopy(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> TVar3;
  FImplicitObject *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0xe9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)in_RDX;
}

// DeepCopyGeometry @ 14375d320

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObject::DeepCopyGeometry(FImplicitObject *this)

{
  FImplicitObject *in_RDX;
  
  (**(code **)(this->_padding_ + 0x38))();
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// DeepCopyGeometryWithScale @ 14375d340

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObject::DeepCopyGeometryWithScale(FImplicitObject *this,TVector<double,3> *param_1)

{
  (**(code **)(this->_padding_ + 0x40))();
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// DeepCopyWithScale @ 14375d360

TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> __thiscall
Chaos::FImplicitObject::DeepCopyWithScale(FImplicitObject *this,TVector<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0xec,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FImplicitObject *)(*pcVar1)();
    return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)TVar3.Ptr;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>)
         (FImplicitObject *)param_1;
}

// Duplicate @ 14376ed00

FImplicitObject * __thiscall Chaos::FImplicitObject::Duplicate(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObject *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0xe0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImplicitObject *)(*pcVar1)();
    return pFVar3;
  }
  return (FImplicitObject *)0x0;
}

// FindClosestFaceAndVertices @ 14377b080

int __thiscall
Chaos::FImplicitObject::FindClosestFaceAndVertices
          (FImplicitObject *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  return -1;
}

// FindGeometryOpposingNormal @ 14377bad0

TVector<double,3> * __thiscall
Chaos::FImplicitObject::FindGeometryOpposingNormal
          (FImplicitObject *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)&param_3->field_0x8;
  uVar1 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 14377baf0

int __thiscall
Chaos::FImplicitObject::FindMostOpposingFace
          (FImplicitObject *this,TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,
          double param_4)

{
  return -1;
}

// FindMostOpposingFaceScaled @ 14377bb00

int __thiscall
Chaos::FImplicitObject::FindMostOpposingFaceScaled
          (FImplicitObject *this,TVector<double,3> *param_1,TVector<double,3> *param_2,int param_3,
          double param_4,TVector<double,3> *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_30 [16];
  double local_20;
  
  local_40 = *(double *)&param_5->field_0x8;
  dVar8 = *(double *)param_5;
  if ((local_40 <= dVar8) || (local_38 = *(double *)&param_5->field_0x10, local_38 <= dVar8)) {
    local_38 = *(double *)&param_5->field_0x10;
    uVar4 = SUB84(local_38,0);
    uVar5 = (undefined4)((ulonglong)local_38 >> 0x20);
    if (local_40 <= local_38) {
      uVar4 = SUB84(local_40,0);
      uVar5 = (undefined4)((ulonglong)local_40 >> 0x20);
    }
  }
  else {
    uVar4 = SUB84(dVar8,0);
    uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  local_40 = local_40 * *(double *)&param_2->field_0x8;
  dVar8 = dVar8 * *(double *)param_2;
  local_30 = divpd(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_5);
  local_20 = *(double *)&param_1->field_0x10 / local_38;
  local_38 = local_38 * *(double *)&param_2->field_0x10;
  auVar6._0_8_ = local_38 * local_38;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar8 * dVar8 + local_40 * local_40 + auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  if (__real_0010000000000000 < auVar7._0_8_) {
    local_48 = __real_3ff0000000000000 / auVar7._0_8_;
    local_38 = local_48 * local_38;
    local_40 = local_48 * local_40;
    local_48 = local_48 * dVar8;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5360839494373211614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0x222,"ScaledNormalLen > TNumericLimits<FReal>::Min()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    local_40 = 0.0;
    local_48 = 0.0;
    local_38 = __real_3ff0000000000000;
  }
  iVar3 = (**(code **)(this->_padding_ + 0xb8))
                    (this,local_30,&local_48,param_3,param_4 / (double)CONCAT44(uVar5,uVar4));
  return iVar3;
}

// GetMargin @ 143790f50

double __thiscall Chaos::FImplicitObject::GetMargin(FImplicitObject *this)

{
  return (double)this->Margin;
}

// GetMarginf @ 143791910

float __thiscall Chaos::FImplicitObject::GetMarginf(FImplicitObject *this)

{
  return this->Margin;
}

// GetMaterialIndex @ 143791a70

ushort __thiscall Chaos::FImplicitObject::GetMaterialIndex(FImplicitObject *this,uint param_1)

{
  return 0;
}

// GetNestedType @ 143791da0

uchar __thiscall Chaos::FImplicitObject::GetNestedType(FImplicitObject *this)

{
  return this->Type;
}

// GetRadiusf @ 143792c30

float __thiscall Chaos::FImplicitObject::GetRadiusf(FImplicitObject *this)

{
  return 0.0;
}

// GetTypeName @ 143793640

FName __thiscall Chaos::FImplicitObject::GetTypeName(FImplicitObject *this)

{
  FName in_RDX;
  
  GetType(this);
  GetTypeName((uchar)in_RDX.ComparisonIndex.Value);
  return in_RDX;
}

// IsOverlappingBoundsImpl @ 1437980e0

bool __thiscall
Chaos::FImplicitObject::IsOverlappingBoundsImpl(FImplicitObject *this,TAABB<double,3> *param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  if (this->bHasBoundingBox != false) {
    lVar3 = (**(code **)(this->_padding_ + 0x90))(this,local_38);
    lVar5 = 0;
    pdVar1 = (double *)(lVar3 + 0x18);
    pdVar4 = pdVar1;
    do {
      dVar2 = *(double *)((longlong)pdVar4 + ((longlong)param_1 - (longlong)pdVar1));
      if ((*pdVar4 <= dVar2 && dVar2 != *pdVar4) ||
         (*(double *)((longlong)pdVar4 + (0x18 - (longlong)pdVar1) + (longlong)param_1) < pdVar4[-3]
         )) {
        return false;
      }
      lVar5 = lVar5 + 1;
      pdVar4 = pdVar4 + 1;
    } while (lVar5 < 3);
  }
  return true;
}

// IsPerformanceWarning @ 143798360

bool __thiscall Chaos::FImplicitObject::IsPerformanceWarning(FImplicitObject *this)

{
  return false;
}

// Overlap @ 14379aee0

bool __thiscall
Chaos::FImplicitObject::Overlap(FImplicitObject *this,TVector<double,3> *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = SignedDistance(this,param_1);
  return dVar1 <= param_2;
}

// PerformanceWarningAndSimplifaction @ 14379b5f0

FString * __thiscall
Chaos::FImplicitObject::PerformanceWarningAndSimplifaction
          (FImplicitObject *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"ImplicitObject - No Performance String");
  return __return_storage_ptr__;
}

// PhiWithNormalScaled @ 14379ce00

double __thiscall
Chaos::FImplicitObject::PhiWithNormalScaled
          (FImplicitObject *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_30 [16];
  double local_20;
  
  local_30 = divpd(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_2);
  local_20 = *(double *)&param_1->field_0x10 / *(double *)&param_2->field_0x10;
  dVar3 = (double)(**(code **)(this->_padding_ + 0x80))(SUB84(local_20,0),local_30,&local_48);
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)&param_2->field_0x10;
  *(double *)param_3 = local_48 * *(double *)param_2;
  *(double *)&param_3->field_0x8 = local_40 * dVar1;
  *(double *)&param_3->field_0x10 = local_38 * dVar2;
  dVar1 = TVector<double,3>::SafeNormalize(param_3,__real_3f1a36e2e0000000);
  return dVar1 * dVar3;
}

// ToString @ 1437b2680

FString * __thiscall
Chaos::FImplicitObject::ToString(FImplicitObject *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"ImplicitObject bIsConvex:%d, bDoCollide:%d, bHasBoundingBox:%d");
  return __return_storage_ptr__;
}

// VisitLeafObjectsImpl @ 1437c1420

void __thiscall
Chaos::FImplicitObject::VisitLeafObjectsImpl
          (FImplicitObject *this,TRigidTransform<double,3> *param_1,int param_2,int *param_3,
          int *param_4,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_5)

{
  int *piVar1;
  int local_res8 [2];
  int local_res18 [2];
  FImplicitObject *local_res20;
  
  piVar1 = param_4;
  local_res18[0] = *param_4;
  param_4._0_4_ = *param_3;
  local_res8[0] = param_2;
  local_res20 = this;
  (**(code **)param_5)
            (*(undefined8 *)&param_5->field_0x8,&local_res20,param_1,local_res8,&param_4,local_res18
            );
  *param_3 = *param_3 + 1;
  *piVar1 = *piVar1 + 1;
  return;
}

// VisitObjectsImpl @ 1437c1490

bool __thiscall
Chaos::FImplicitObject::VisitObjectsImpl
          (FImplicitObject *this,TRigidTransform<double,3> *param_1,int param_2,int *param_3,
          int *param_4,
          TFunctionRef<bool___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  int local_res8 [2];
  int local_res18 [2];
  FImplicitObject *local_res20;
  
  piVar1 = param_4;
  local_res18[0] = *param_4;
  param_4._0_4_ = *param_3;
  local_res8[0] = param_2;
  local_res20 = this;
  uVar2 = (**(code **)param_5)
                    (*(undefined8 *)&param_5->field_0x8,&local_res20,param_1,local_res8,&param_4,
                     local_res18);
  *param_3 = *param_3 + 1;
  *piVar1 = *piVar1 + 1;
  return (bool)uVar2;
}

// VisitOverlappingLeafObjectsImpl @ 1437c1500

void __thiscall
Chaos::FImplicitObject::VisitOverlappingLeafObjectsImpl
          (FImplicitObject *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          int param_3,int *param_4,int *param_5,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_6)

{
  double *pdVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  int local_res8 [2];
  FImplicitObject *local_58;
  undefined1 local_50 [56];
  
  piVar3 = param_4;
  piVar4 = param_5;
  if (this->bHasBoundingBox != false) {
    lVar5 = (**(code **)(this->_padding_ + 0x90))(this,local_50);
    lVar7 = 0;
    pdVar1 = (double *)(lVar5 + 0x18);
    pdVar6 = pdVar1;
    do {
      dVar2 = *(double *)((longlong)pdVar6 + ((longlong)param_1 - (longlong)pdVar1));
      if ((*pdVar6 <= dVar2 && dVar2 != *pdVar6) ||
         (*(double *)((longlong)pdVar6 + (0x18 - (longlong)pdVar1) + (longlong)param_1) < pdVar6[-3]
         )) {
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 + 1;
        return;
      }
      lVar7 = lVar7 + 1;
      pdVar6 = pdVar6 + 1;
      piVar3 = param_4;
      piVar4 = param_5;
    } while (lVar7 < 3);
  }
  param_5._4_4_ = (undefined4)((ulonglong)piVar4 >> 0x20);
  param_4._4_4_ = (undefined4)((ulonglong)piVar3 >> 0x20);
  param_5._0_4_ = *piVar4;
  param_4._0_4_ = *piVar3;
  local_res8[0] = param_3;
  local_58 = this;
  (**(code **)param_6)
            (*(undefined8 *)&param_6->field_0x8,&local_58,param_2,local_res8,&param_4,&param_5);
  *piVar3 = *piVar3 + 1;
  *piVar4 = *piVar4 + 1;
  return;
}

// GetObjectChecked<Chaos::TBox<double,3>_> @ 1438729c0

TBox<double,3> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TBox<double,3> *pTVar3;
  
  if (this->Type != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBox<double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TBox<double,3> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_> @ 143872a10

TImplicitObjectInstanced<Chaos::TBox<double,3>_> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar3;
  
  if (this->Type != 'A') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectInstanced<Chaos::TBox<double,3>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectInstanced<Chaos::TBox<double,3>_> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_> @ 143872a60

TImplicitObjectInstanced<Chaos::TSphere<double,3>_> * __thiscall
Chaos::FImplicitObject::
GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar3;
  
  if (this->Type != '@') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_> @ 143872ab0

TImplicitObjectInstanced<Chaos::FCapsule> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar3;
  
  if (this->Type != 'C') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectInstanced<Chaos::FCapsule> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectInstanced<Chaos::FCapsule> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> @ 143872b00

TImplicitObjectInstanced<Chaos::FConvex> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar3;
  
  if (this->Type != 'H') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectInstanced<Chaos::FConvex> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectInstanced<Chaos::FConvex> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143872b50

TImplicitObjectScaled<Chaos::TBox<double,3>,1> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar3;
  
  if (this->Type != 0x81) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143872ba0

TImplicitObjectScaled<Chaos::TSphere<double,3>,1> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar3;
  
  if (this->Type != 0x80) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143872bf0

TImplicitObjectScaled<Chaos::FCapsule,1> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar3;
  
  if (this->Type != 0x83) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectScaled<Chaos::FCapsule,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectScaled<Chaos::FCapsule,1> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143872c40

TImplicitObjectScaled<Chaos::FConvex,1> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar3;
  
  if (this->Type != 0x88) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectScaled<Chaos::FConvex,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectScaled<Chaos::FConvex,1> *)this;
}

// GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_> @ 143872c90

TImplicitObjectTransformed<double,3,1> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
          (FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TImplicitObjectTransformed<double,3,1> *pTVar3;
  
  if (this->Type != '\x04') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TImplicitObjectTransformed<double,3,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TImplicitObjectTransformed<double,3,1> *)this;
}

// GetObjectChecked<Chaos::TSphere<double,3>_> @ 143872ce0

TSphere<double,3> * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TSphere<double,3> *pTVar3;
  
  if (this->Type != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSphere<double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSphere<double,3> *)this;
}

// GetObjectChecked<Chaos::FCapsule> @ 143872d30

FCapsule * __thiscall
Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  FCapsule *pFVar3;
  
  if (this->Type != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCapsule *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCapsule *)this;
}

// GetObjectChecked<Chaos::FConvex> @ 143872d80

FConvex * __thiscall Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  FConvex *pFVar3;
  
  if (this->Type != '\b') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConvex *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FConvex *)this;
}

// GetRadius @ 1438bc330

double __thiscall Chaos::FImplicitObject::GetRadius(FImplicitObject *this)

{
  return 0.0;
}

// Raycast @ 1438c8370

bool __thiscall
Chaos::FImplicitObject::Raycast
          (FImplicitObject *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  undefined8 uVar1;
  bool bVar2;
  TVector<double,3> *pTVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double local_68;
  double local_60;
  double local_58;
  TVector<double,3> local_50;
  Pair<Chaos::TVector<double,3>,bool> local_38;
  
  *param_8 = -1;
  local_68 = param_3 * *(double *)param_2 + *(double *)param_1;
  local_60 = param_3 * *(double *)&param_2->field_0x8 + *(double *)&param_1->field_0x8;
  local_58 = param_3 * *(double *)&param_2->field_0x10 + *(double *)&param_1->field_0x10;
  FindClosestIntersection(this,&local_38,param_1,(TVector<double,3> *)&local_68,param_4);
  if (local_38.Second == false) {
    bVar2 = false;
  }
  else {
    *(undefined8 *)param_6 = local_38.First._0_8_;
    *(undefined8 *)&param_6->field_0x8 = local_38.First._8_8_;
    *(undefined8 *)&param_6->field_0x10 = local_38.First._16_8_;
    pTVar3 = Normal(this,&local_50,&local_38.First);
    uVar1 = *(undefined8 *)&pTVar3->field_0x8;
    *(undefined8 *)param_7 = *(undefined8 *)pTVar3;
    *(undefined8 *)&param_7->field_0x8 = uVar1;
    dVar4 = 0.0;
    *(undefined8 *)&param_7->field_0x10 = *(undefined8 *)&pTVar3->field_0x10;
    if (0.0 < param_3) {
      dVar4 = *(double *)&param_6->field_0x8 - *(double *)&param_1->field_0x8;
      dVar7 = *(double *)&param_6->field_0x10 - *(double *)&param_1->field_0x10;
      auVar5._0_8_ = dVar4 * dVar4;
      auVar5._8_8_ = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (*(double *)param_6 - *(double *)param_1) *
                     (*(double *)param_6 - *(double *)param_1) + auVar5._0_8_ + dVar7 * dVar7;
      auVar6 = sqrtpd(auVar5,auVar6);
      dVar4 = auVar6._0_8_;
    }
    *param_5 = dVar4;
    bVar2 = true;
  }
  return bVar2;
}

// Serialize @ 1438d1ae0

void __thiscall Chaos::FImplicitObject::Serialize(FImplicitObject *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                     ,0x195,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// VisitLeafObjects @ 143a9d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FImplicitObject::VisitLeafObjects
          (FImplicitObject *this,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_1)

{
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_90;
  undefined4 local_88;
  undefined4 local_84 [3];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_98 = &local_88;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_88 = 0;
  local_84[0] = 0;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_90 = param_1;
  (**(code **)(this->_padding_ + 0x140))
            (UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_,local_78,
             0xffffffff,local_84);
  return;
}

// FImplicitObject @ 143b56750

FImplicitObject * __thiscall
Chaos::FImplicitObject::FImplicitObject(FImplicitObject *this,int param_1,uchar param_2)

{
  this->Type = param_2;
  this->_padding_ = (longlong)&___7FImplicitObject_Chaos__6B_;
  this->_padding_ = 0;
  this->Margin = 0.0;
  this->bIsConvex = (bool)((byte)param_1 & 1);
  this->bIsTracked = false;
  this->bDoCollide = (bool)(~(byte)((uint)param_1 >> 2) & 1);
  this->bHasBoundingBox = (bool)((byte)((uint)param_1 >> 1) & 1);
  this->CollisionType = param_2;
  return this;
}

// ~FImplicitObject @ 143b58030

void __thiscall Chaos::FImplicitObject::~FImplicitObject(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  FTrackedGeometryManager *this_00;
  
  this->_padding_ = (longlong)&___7FImplicitObject_Chaos__6B_;
  FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(this);
  if (this->bIsTracked != false) {
    this_00 = FTrackedGeometryManager::Get();
    FTrackedGeometryManager::RemoveGeometry(this_00,this);
  }
  this->_padding_ = (longlong)&___7FChaosRefCountedObject_Chaos__6B_;
  if (((int)this->_padding_ != 0) && ((int)this->_padding_ != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RefCountedObject.h"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// BoundingBox @ 143b5e8c0

TAABB<double,3> * __thiscall
Chaos::FImplicitObject::BoundingBox(FImplicitObject *this,TAABB<double,3> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  TAABB<double,3> *pTVar6;
  
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                     ,0x78,L"");
  uVar3 = Unbounded.MMin._16_8_;
  uVar2 = Unbounded.MMin._8_8_;
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TAABB<double,3> *)(*pcVar1)();
    return pTVar6;
  }
  *(undefined8 *)&__return_storage_ptr__->MMin = Unbounded.MMin._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar4 = Unbounded.MMax._8_8_;
  uVar2 = Unbounded.MMax._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar3;
  uVar3 = Unbounded.MMax._16_8_;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar4;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar3;
  return __return_storage_ptr__;
}

// CopyGeometry @ 143b609f0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObject::CopyGeometry(FImplicitObject *this)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<Chaos::FImplicitObject> TVar3;
  FImplicitObject *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                     ,0x54,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FImplicitObject *)(*pcVar1)();
    return (TRefCountPtr<Chaos::FImplicitObject>)TVar3.Reference;
  }
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143b60e10

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObject::CopyGeometryWithScale(FImplicitObject *this,TVector<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<Chaos::FImplicitObject> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                     ,0x5a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FImplicitObject *)(*pcVar1)();
    return (TRefCountPtr<Chaos::FImplicitObject>)TVar3.Reference;
  }
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// FindAllIntersectingObjects @ 143b638f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FImplicitObject::FindAllIntersectingObjects
          (FImplicitObject *this,
          TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TAABB<double,3> *param_2)

{
  double *pdVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  FImplicitObject **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FImplicitObject *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (this->bHasBoundingBox != false) {
    lVar7 = (**(code **)(this->_padding_ + 0x90))();
    lVar9 = 0;
    pdVar1 = (double *)(lVar7 + 0x18);
    pdVar8 = pdVar1;
    do {
      dVar2 = *(double *)((longlong)pdVar8 + ((longlong)param_2 - (longlong)pdVar1));
      if (*pdVar8 <= dVar2 && dVar2 != *pdVar8) {
        return;
      }
      if (*(double *)((longlong)param_2 + (0x18 - (longlong)pdVar1) + (longlong)pdVar8) < pdVar8[-3]
         ) {
        return;
      }
      lVar9 = lVar9 + 1;
      pdVar8 = pdVar8 + 1;
    } while (lVar9 < 3);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_68 = ___xmm_3ff00000000000000000000000000000;
  uStack_60 = _UNK_15061cbc8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_28 = ___xmm_00000000000000003ff0000000000000;
  uStack_20 = _UNK_150689518;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = this;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)param_1->ArrayMax * 0x70)) {
    local_d0 = (longlong)param_1->ArrayNum;
    local_c8 = 0x70;
    local_e8 = &local_88;
    local_e0 = pFVar3;
    local_d8 = (longlong)param_1->ArrayMax;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6 * 0x70;
  pFVar3 = (param_1->AllocatorInstance).Data;
  *(FImplicitObject **)(pFVar3 + lVar7) = local_88;
  *(undefined8 *)(pFVar3 + lVar7 + 8) = uStack_80;
  *(undefined8 *)(pFVar3 + lVar7 + 0x10) = local_78;
  *(undefined8 *)(pFVar3 + lVar7 + 0x10 + 8) = uStack_70;
  *(undefined8 *)(pFVar3 + lVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar3 + lVar7 + 0x20 + 8) = uStack_60;
  *(undefined8 *)(pFVar3 + lVar7 + 0x30) = local_58;
  *(undefined8 *)(pFVar3 + lVar7 + 0x30 + 8) = uStack_50;
  *(undefined8 *)(pFVar3 + lVar7 + 0x40) = local_48;
  *(undefined8 *)(pFVar3 + lVar7 + 0x40 + 8) = uStack_40;
  *(undefined8 *)(pFVar3 + lVar7 + 0x50) = local_38;
  *(undefined8 *)(pFVar3 + lVar7 + 0x50 + 8) = uStack_30;
  *(undefined8 *)(pFVar3 + lVar7 + 0x60) = local_28;
  *(undefined8 *)(pFVar3 + lVar7 + 0x60 + 8) = uStack_20;
  return;
}

// FindClosestIntersection @ 143b63d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FImplicitObject::FindClosestIntersection
          (FImplicitObject *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  
  dVar5 = (double)(**(code **)(this->_padding_ + 0x80))(this,param_1,&local_b8);
  if ((double)CONCAT44((uint)((ulonglong)(dVar5 - param_3) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar5 - param_3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2eb1c432d) {
    dVar8 = *(double *)&param_1->field_0x10;
    dVar1 = *(double *)&param_1->field_0x8;
    *(double *)&__return_storage_ptr__->First = *(double *)param_1 - local_b8 * dVar5;
    *(double *)&(__return_storage_ptr__->First).field_0x8 = dVar1 - local_b0 * dVar5;
    *(double *)&(__return_storage_ptr__->First).field_0x10 = dVar8 - local_a8 * dVar5;
    __return_storage_ptr__->Second = true;
  }
  else {
    local_a0 = *(double *)param_2;
    dStack_98 = *(double *)&param_2->field_0x8;
    local_90 = *(double *)&param_2->field_0x10;
    dVar1 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
    dVar3 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
    dVar4 = *(double *)param_2 - *(double *)param_1;
    dVar8 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1;
    if (__real_3e45798ee2308c3a <= dVar8) {
      dVar6 = (double)(**(code **)(this->_padding_ + 0x80))(this,param_2,&local_88);
      auVar7._0_8_ = (double)CONCAT44((uint)((ulonglong)(dVar6 - param_3) >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar6 - param_3,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar7._8_4_ = (uint)extraout_XMM0_Qb & (uint)_UNK_15061cc88;
      auVar7._12_4_ =
           (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & (uint)((ulonglong)_UNK_15061cc88 >> 0x20);
      if (auVar7._0_8_ <= __real_3f1a36e2eb1c432d) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = dVar8;
        auVar7 = sqrtpd(auVar7,auVar2);
        dVar8 = __real_3ff0000000000000 / auVar7._0_8_;
        dVar8 = dVar8 * dVar4 * local_88 + dVar8 * dVar3 * local_80 + dVar8 * dVar1 * local_78;
        if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2eb1c432d) {
          dVar8 = *(double *)&param_2->field_0x10;
          dVar1 = *(double *)&param_2->field_0x8;
          *(double *)&__return_storage_ptr__->First = *(double *)param_2 - local_b8 * dVar5;
          *(double *)&(__return_storage_ptr__->First).field_0x8 = dVar1 - local_b0 * dVar5;
          *(double *)&(__return_storage_ptr__->First).field_0x10 = dVar8 - local_a8 * dVar5;
          __return_storage_ptr__->Second = true;
          return __return_storage_ptr__;
        }
        dVar5 = __real_3f2a36e2eb1c432d;
        if ((dVar8 <= 0.0) && (dVar5 = 0.0, dVar8 < 0.0)) {
          dVar5 = __real_bf2a36e2eb1c432d;
        }
        local_a0 = dVar5 * local_88 + *(double *)param_2;
        dStack_98 = dVar5 * local_80 + *(double *)&param_2->field_0x8;
        local_90 = dVar5 * local_78 + *(double *)&param_2->field_0x10;
      }
      (**(code **)(this->_padding_ + 0x158))(this,__return_storage_ptr__,param_1,&local_a0,param_3);
    }
    else {
      *(undefined8 *)&__return_storage_ptr__->First = 0;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
      __return_storage_ptr__->Second = false;
    }
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 143b64bd0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FImplicitObject::FindClosestIntersectionImp
          (FImplicitObject *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar14;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  
  dVar2 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  auVar12._0_8_ = dVar2 * dVar2;
  auVar12._8_8_ = 0;
  dVar4 = *(double *)param_2 - *(double *)param_1;
  dVar7 = dVar4 * dVar4 + auVar12._0_8_ + dVar3 * dVar3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar7;
  auVar13 = sqrtpd(auVar12,auVar13);
  dVar15 = __real_3ff0000000000000 / SQRT(dVar7);
  dVar7 = (double)(**(code **)(this->_padding_ + 0x80))(this,param_2,&local_100);
  local_118 = *(double *)param_1;
  dStack_110 = *(double *)&param_1->field_0x8;
  local_108 = *(double *)&param_1->field_0x10;
  dVar8 = (double)(**(code **)(this->_padding_ + 0x80))(this,&local_118,&local_e8);
  dVar5 = __real_3f847ae147ae147b;
  uVar6 = SUB84(dVar8,0);
  uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar1 = param_3 + __real_3f1a36e2eb1c432d;
  do {
    if (dVar8 <= dVar1) {
      if ((double)CONCAT44(uVar14,uVar6) < dVar1) {
        dVar7 = param_3 - (double)CONCAT44(uVar14,uVar6);
        local_118 = local_118 + local_e8 * dVar7;
        dStack_110 = dStack_110 + local_e0 * dVar7;
        local_108 = local_108 + local_d8 * dVar7;
      }
      *(double *)&__return_storage_ptr__->First = local_118;
      *(double *)&(__return_storage_ptr__->First).field_0x8 = dStack_110;
      *(double *)&(__return_storage_ptr__->First).field_0x10 = local_108;
LAB_143b64f39:
      __return_storage_ptr__->Second = true;
      return __return_storage_ptr__;
    }
    dVar11 = (double)CONCAT44(uVar14,uVar6) - param_3;
    dVar9 = (double)ClosestIntersectionStepSizeMultiplier;
    dStack_110 = dVar11 * dVar2 * dVar15 * dVar9 + dStack_110;
    local_108 = dVar11 * dVar3 * dVar15 * dVar9 + local_108;
    dVar8 = dStack_110 - *(double *)&param_1->field_0x8;
    local_118 = dVar11 * dVar4 * dVar15 * dVar9 + local_118;
    dVar9 = local_108 - *(double *)&param_1->field_0x10;
    dVar10 = local_118 - *(double *)param_1;
    if (auVar13._0_8_ < SQRT(dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9)) {
LAB_143b64e76:
      if (dVar1 <= dVar7) {
        *(undefined8 *)&__return_storage_ptr__->First = 0;
        *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
        *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
        __return_storage_ptr__->Second = false;
        return __return_storage_ptr__;
      }
      dVar7 = param_3 - dVar7;
      dVar1 = *(double *)&param_2->field_0x10;
      dVar2 = *(double *)&param_2->field_0x8;
      *(double *)&__return_storage_ptr__->First = dVar7 * local_100 + *(double *)param_2;
      *(double *)&(__return_storage_ptr__->First).field_0x8 = local_f8 * dVar7 + dVar2;
      *(double *)&(__return_storage_ptr__->First).field_0x10 = local_f0 * dVar7 + dVar1;
      goto LAB_143b64f39;
    }
    if (dVar11 < dVar5) {
      local_118 = dVar4 * dVar15 * dVar5 + local_118;
      local_108 = dVar3 * dVar15 * dVar5 + local_108;
      dStack_110 = dVar2 * dVar15 * dVar5 + dStack_110;
      dVar9 = local_118 - *(double *)param_1;
      dVar11 = local_108 - *(double *)&param_1->field_0x10;
      dVar8 = dStack_110 - *(double *)&param_1->field_0x8;
      if (auVar13._0_8_ < SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar11 * dVar11)) goto LAB_143b64e76;
    }
    dVar8 = (double)(**(code **)(this->_padding_ + 0x80))(this,&local_118,&local_e8);
    if ((double)CONCAT44(uVar14,uVar6) <= dVar8) goto LAB_143b64e76;
    uVar6 = SUB84(dVar8,0);
    uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
  } while( true );
}

// FindDeepestIntersection @ 143b653c0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FImplicitObject::FindDeepestIntersection
          (FImplicitObject *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          FImplicitObject *param_1,TParticles<double,3> *param_2,PMatrix<double,3,3> *param_3,
          double param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  Pair<Chaos::TVector<double,3>,bool> *pPVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  undefined1 local_b0 [136];
  
  dVar9 = __real_3ff0000000000000;
  if (param_2 == (TParticles<double,3> *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->First = 0;
    *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
    __return_storage_ptr__->Second = false;
    return __return_storage_ptr__;
  }
  uVar14 = 0;
  lVar15 = (longlong)(int)param_2->_padding_;
  uVar18 = SUB84(local_b8,0);
  uVar19 = (undefined4)((ulonglong)local_b8 >> 0x20);
  uVar20 = (undefined4)local_c8;
  uVar21 = local_c8._4_4_;
  uVar22 = (undefined4)uStack_c0;
  uVar23 = uStack_c0._4_4_;
  dVar8 = param_4;
  if (0 < lVar15) {
    lVar16 = 0;
    lVar13 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < *(int *)&(param_2->MX).field_0x10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar5)();
        return pPVar12;
      }
      lVar4 = *(longlong *)&(param_2->MX).field_0x8;
      pdVar1 = (double *)(lVar4 + lVar13);
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      dVar17 = *(double *)(lVar4 + 0x10 + lVar13);
      local_c8 = *(double *)param_3 * dVar6 + *(double *)&param_3->field_0x20 * dVar7 +
                 dVar17 * *(double *)&param_3->field_0x40 + *(double *)&param_3->field_0x60 * dVar9;
      uStack_c0 = *(double *)&param_3->field_0x8 * dVar6 + *(double *)&param_3->field_0x28 * dVar7 +
                  dVar17 * *(double *)&param_3->field_0x48 + *(double *)&param_3->field_0x68 * dVar9
      ;
      local_b8 = *(double *)&param_3->field_0x30 * dVar7 + *(double *)&param_3->field_0x10 * dVar6 +
                 *(double *)&param_3->field_0x50 * dVar17 + *(double *)&param_3->field_0x70 * dVar9;
      dVar17 = (double)(**(code **)(this->_padding_ + 0x80))(this,&local_c8,local_b0);
      if (dVar17 < dVar8) {
        uVar11 = 0;
        if ((int)uVar14 < *(int *)&(param_2->MX).field_0x10) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pPVar12 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar5)();
          return pPVar12;
        }
        lVar4 = *(longlong *)&(param_2->MX).field_0x8;
        puVar2 = (undefined4 *)(lVar4 + lVar13);
        uVar20 = *puVar2;
        uVar21 = puVar2[1];
        uVar22 = puVar2[2];
        uVar23 = puVar2[3];
        uVar3 = *(undefined8 *)(lVar4 + 0x10 + lVar13);
        uVar18 = (undefined4)uVar3;
        uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
        dVar8 = dVar17;
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar16 < lVar15);
  }
  *(undefined4 *)&__return_storage_ptr__->First = uVar20;
  *(undefined4 *)&(__return_storage_ptr__->First).field_0x4 = uVar21;
  *(undefined4 *)&(__return_storage_ptr__->First).field_0x8 = uVar22;
  *(undefined4 *)&(__return_storage_ptr__->First).field_0xc = uVar23;
  __return_storage_ptr__->Second = dVar8 < param_4;
  *(ulonglong *)&(__return_storage_ptr__->First).field_0x10 = CONCAT44(uVar19,uVar18);
  return __return_storage_ptr__;
}

// FindDeepestIntersection @ 143b656c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::FImplicitObject::FindDeepestIntersection
          (FImplicitObject *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          FImplicitObject *param_1,FBVHParticles *param_2,PMatrix<double,3,3> *param_3,
          double param_4)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  TAABB<double,3> *this_00;
  Pair<Chaos::TVector<double,3>,bool> *pPVar10;
  TVector<double,3> *pTVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_2a8 [32];
  undefined1 local_278 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_270;
  undefined1 local_260 [16];
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  FScriptContainerElement *local_230;
  Pair<Chaos::TVector<double,3>,bool> *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  undefined1 local_208 [24];
  undefined1 local_1f0 [56];
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_2 == (FBVHParticles *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->First = 0;
    *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
    __return_storage_ptr__->Second = false;
    return __return_storage_ptr__;
  }
  local_228 = __return_storage_ptr__;
  if (this->bHasBoundingBox == false) {
    FindDeepestIntersection
              (this,__return_storage_ptr__,param_1,(TParticles<double,3> *)param_2,param_3,param_4);
    return __return_storage_ptr__;
  }
  this_00 = (TAABB<double,3> *)(**(code **)(this->_padding_ + 0x90))(this,local_1f0);
  uVar14 = (uint)*(undefined8 *)param_3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)*(undefined8 *)param_3 >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
        (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000) &&
      ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)*(undefined8 *)&param_3->field_0x8 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000))
     && ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x10 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&param_3->field_0x10 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000))
  {
    uVar14 = (uint)*(undefined8 *)&param_3->field_0x20 &
             (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar15 = (uint)((ulonglong)*(undefined8 *)&param_3->field_0x20 >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
          (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000) &&
        ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x28 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&param_3->field_0x28 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000))
       && ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x30 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&param_3->field_0x30 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000
          )) {
      uVar14 = (uint)*(undefined8 *)&param_3->field_0x40 &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar15 = (uint)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((((double)CONCAT44(uVar15,uVar14) < __real_3e45798ee0000000 ||
            (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee0000000) &&
          ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x48 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&param_3->field_0x48 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000
          )) && ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x50 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)*(undefined8 *)&param_3->field_0x50 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 __real_3e45798ee0000000)) {
        local_1b8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        local_1b8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
        local_1b8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        local_1b8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
        local_1b8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        local_1b8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
        local_1b8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        local_1b8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
        local_1b8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        local_1b8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
        local_1b8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        local_1b8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
        local_1b8.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
        local_1b8.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
        local_1b8.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
        local_1b8.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
        local_1b8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
        local_1b8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
        goto LAB_143b658cb;
      }
    }
  }
  FMath::MatrixInverse(&local_138,(TMatrix<double> *)param_3);
  local_1b8.M[0][0] = local_138.M[0][0];
  local_1b8.M[0][1] = local_138.M[0][1];
  local_1b8.M[0][2] = local_138.M[0][2];
  local_1b8.M[0][3] = local_138.M[0][3];
  local_1b8.M[1][0] = local_138.M[1][0];
  local_1b8.M[1][1] = local_138.M[1][1];
  local_1b8.M[1][2] = local_138.M[1][2];
  local_1b8.M[1][3] = local_138.M[1][3];
  local_1b8.M[2][0] = local_138.M[2][0];
  local_1b8.M[2][1] = local_138.M[2][1];
  local_1b8.M[2][2] = local_138.M[2][2];
  local_1b8.M[2][3] = local_138.M[2][3];
  local_1b8.M[3][0]._0_4_ = local_138.M[3][0]._0_4_;
  local_1b8.M[3][0]._4_4_ = local_138.M[3][0]._4_4_;
  local_1b8.M[3][1]._0_4_ = local_138.M[3][1]._0_4_;
  local_1b8.M[3][1]._4_4_ = local_138.M[3][1]._4_4_;
  local_1b8.M[3][2] = local_138.M[3][2];
  local_1b8.M[3][3] = local_138.M[3][3];
LAB_143b658cb:
  TAABB<double,3>::TransformedAABB(this_00,(TAABB<double,3> *)local_260,&local_1b8);
  dVar4 = (double)local_260._8_8_ - param_4;
  local_248 = local_248 + param_4;
  dStack_240 = dStack_240 + param_4;
  local_260._8_4_ = SUB84(dVar4,0);
  local_260._0_8_ = (double)local_260._0_8_ - param_4;
  local_260._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_250 = local_250 - param_4;
  local_238 = local_238 + param_4;
  FBVHParticles::FindAllIntersections(param_2,&local_270,(TAABB<double,3> *)local_260);
  dVar7 = __real_3ff0000000000000;
  uVar18 = SUB84(local_210,0);
  uVar19 = (undefined4)((ulonglong)local_210 >> 0x20);
  iVar12 = local_270.ArrayNum;
  local_230 = local_270.AllocatorInstance.Data + (longlong)iVar12 * 4;
  FVar13.Data = local_270.AllocatorInstance.Data;
  uVar20 = (undefined4)local_220;
  uVar21 = local_220._4_4_;
  uVar22 = (undefined4)uStack_218;
  uVar23 = uStack_218._4_4_;
  dVar4 = param_4;
  while( true ) {
    pFVar8 = local_230;
    if (local_270.ArrayNum != iVar12) {
      local_278[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    pPVar10 = local_228;
    if (FVar13.Data == pFVar8) {
      if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.AllocatorInstance.Data);
      }
      *(undefined4 *)&pPVar10->First = uVar20;
      *(undefined4 *)&(pPVar10->First).field_0x4 = uVar21;
      *(undefined4 *)&(pPVar10->First).field_0x8 = uVar22;
      *(undefined4 *)&(pPVar10->First).field_0xc = uVar23;
      *(ulonglong *)&(pPVar10->First).field_0x10 = CONCAT44(uVar19,uVar18);
      pPVar10->Second = dVar4 < param_4;
      return pPVar10;
    }
    uVar14 = *(uint *)FVar13.Data;
    uVar15 = 0;
    if ((int)uVar14 < (int)param_2->_padding_) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    pdVar1 = (double *)(param_2->_padding_ + (longlong)(int)uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar6 = pdVar1[1];
    dVar2 = *(double *)(param_2->_padding_ + 0x10 + (longlong)(int)uVar14 * 0x18);
    auVar16._8_4_ = SUB84(dVar2,0);
    auVar16._0_8_ = dVar2;
    auVar16._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar17._8_4_ = SUB84(dVar7,0);
    auVar17._0_8_ = dVar7;
    auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_220 = dVar6 * *(double *)&param_3->field_0x20 + dVar5 * *(double *)param_3 +
                dVar2 * *(double *)&param_3->field_0x40 + dVar7 * *(double *)&param_3->field_0x60;
    uStack_218 = dVar6 * *(double *)&param_3->field_0x28 + dVar5 * *(double *)&param_3->field_0x8 +
                 auVar16._8_8_ * *(double *)&param_3->field_0x48 +
                 auVar17._8_8_ * *(double *)&param_3->field_0x68;
    local_210 = *(double *)&param_3->field_0x30 * dVar6 + dVar5 * *(double *)&param_3->field_0x10 +
                *(double *)&param_3->field_0x50 * dVar2 + *(double *)&param_3->field_0x70 * dVar7;
    dVar2 = (double)(**(code **)(this->_padding_ + 0x80))(this,&local_220,local_208);
    if (dVar2 < dVar4) {
      pTVar11 = TParticles<double,3>::GetX((TParticles<double,3> *)param_2,uVar14);
      uVar20 = *(undefined4 *)pTVar11;
      uVar21 = *(undefined4 *)&pTVar11->field_0x4;
      uVar22 = *(undefined4 *)&pTVar11->field_0x8;
      uVar23 = *(undefined4 *)&pTVar11->field_0xc;
      uVar18 = (undefined4)*(undefined8 *)&pTVar11->field_0x10;
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)&pTVar11->field_0x10 >> 0x20);
      dVar4 = dVar2;
    }
    FVar13.Data = FVar13.Data + 4;
  }
  pcVar3 = (code *)swi(3);
  pPVar10 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar3)();
  return pPVar10;
}

// GetCollisionType @ 143b67650

uchar __thiscall Chaos::FImplicitObject::GetCollisionType(FImplicitObject *this)

{
  return this->CollisionType;
}

// GetType @ 143b68ad0

uchar __thiscall Chaos::FImplicitObject::GetType(FImplicitObject *this)

{
  return this->Type;
}

// GetTypeName @ 143b69510

FName __cdecl Chaos::FImplicitObject::GetTypeName(uchar param_1)

{
  FName FVar1;
  undefined7 in_register_00000009;
  FName FVar2;
  byte in_DL;
  int *piVar3;
  
  FVar2._1_7_ = in_register_00000009;
  FVar2.ComparisonIndex.Value._0_1_ = param_1;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&SphereName,L"Sphere");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&BoxName,L"Box");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar3 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&PlaneName,L"Plane");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar3 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&CapsuleName,L"Capsule");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar3 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&TransformedName,L"Transformed");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar3 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&UnionName,L"Union");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar3 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&LevelSetName,L"LevelSet");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar3 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&MLLevelSetName,L"MLLevelSet");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar3 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&UnknownName,L"Unknown");
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar3 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FName::FName(&ConvexName,L"Convex");
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar3 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FName::FName(&TaperedCylinderName,L"TaperedCylinder");
    _Init_thread_footer(&::_TSS10);
  }
  if ((*piVar3 < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
    ::FName::FName(&CylinderName,L"Cylinder");
    _Init_thread_footer(&::_TSS11);
  }
  if ((*piVar3 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
    ::FName::FName(&TriangleMeshName,L"TriangleMesh");
    _Init_thread_footer(&::_TSS12);
  }
  if ((*piVar3 < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
    ::FName::FName(&HeightFieldName,L"HeightField");
    _Init_thread_footer(&::_TSS13);
  }
  if ((*piVar3 < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
    ::FName::FName(&TaperedCapsuleName,L"TaperedCapsule");
    _Init_thread_footer(&::_TSS14);
  }
  if ((*piVar3 < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
    ::FName::FName(&UnionClusteredName,L"UnionClustered");
    _Init_thread_footer(&::_TSS15);
  }
  switch(in_DL & 0x1f) {
  case 0:
    FVar1 = SphereName;
    break;
  case 1:
    FVar1 = BoxName;
    break;
  case 2:
    FVar1 = PlaneName;
    break;
  case 3:
    FVar1 = CapsuleName;
    break;
  case 4:
    FVar1 = TransformedName;
    break;
  case 5:
    FVar1 = UnionName;
    break;
  case 6:
    FVar1 = LevelSetName;
    break;
  case 7:
    FVar1 = UnknownName;
    break;
  case 8:
    FVar1 = ConvexName;
    break;
  case 9:
    FVar1 = TaperedCylinderName;
    break;
  case 10:
    FVar1 = CylinderName;
    break;
  case 0xb:
    FVar1 = TriangleMeshName;
    break;
  case 0xc:
    FVar1 = HeightFieldName;
    break;
  default:
    FVar1.ComparisonIndex.Value = 0;
    FVar1.Number = 0;
    break;
  case 0xf:
    FVar1 = UnionClusteredName;
    break;
  case 0x10:
    FVar1 = TaperedCapsuleName;
    break;
  case 0x11:
    FVar1 = MLLevelSetName;
  }
  *(FName *)FVar2 = FVar1;
  return FVar2;
}

// IsUnderlyingMesh @ 143b6a4f0

bool __thiscall Chaos::FImplicitObject::IsUnderlyingMesh(FImplicitObject *this)

{
  byte bVar1;
  
  bVar1 = this->Type & 0x1f;
  if ((bVar1 != 0xb) && (bVar1 != 0xc)) {
    return false;
  }
  return true;
}

// IsUnderlyingUnion @ 143b6a510

bool __thiscall Chaos::FImplicitObject::IsUnderlyingUnion(FImplicitObject *this)

{
  if ((this->Type != '\x05') && (this->Type != '\x0f')) {
    return false;
  }
  return true;
}

// IsValidGeometry @ 143b6a530

bool __thiscall Chaos::FImplicitObject::IsValidGeometry(FImplicitObject *this)

{
  return true;
}

// Normal @ 143b6abb0

TVector<double,3> * __thiscall
Chaos::FImplicitObject::Normal
          (FImplicitObject *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  (**(code **)(this->_padding_ + 0x80))(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SerializationFactory @ 143b75b40

FImplicitObject * __cdecl
Chaos::FImplicitObject::SerializationFactory(FChaosArchive *param_1,FImplicitObject *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  FLevelSet *pFVar18;
  FImplicitObject *pFVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte local_res8 [8];
  
  if ((param_1->_padding_ & 1) == 0) {
    local_res8[0] = param_2->Type;
  }
  else {
    local_res8[0] = 0;
  }
  plVar1 = (longlong *)param_1->_padding_;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar17 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if ((iVar17 < 0xc) || (-1 < (char)local_res8[0])) {
    if ((local_res8[0] & 0x40) == 0) {
      switch(local_res8[0]) {
      case 0:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x30);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = true;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\0';
        pFVar19->CollisionType = '\0';
        return pFVar19;
      case 1:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x50);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
        pFVar19[1]._padding_ = 0x7fefffffffffffff;
        pFVar19[1]._padding_ = 0x7fefffffffffffff;
        pFVar19[1].Margin = -NAN;
        pFVar19[1].bIsConvex = true;
        pFVar19[1].bDoCollide = true;
        pFVar19[1].bHasBoundingBox = true;
        pFVar19[1].bIsTracked = true;
        pFVar19->bIsConvex = true;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\x01';
        pFVar19->CollisionType = '\x01';
        pFVar19[1].Type = 0xff;
        pFVar19[1].CollisionType = 0xff;
        pFVar19[1].Pad[0] = -1;
        pFVar19[1].Pad[1] = -1;
        pFVar19[1].Pad[2] = -1;
        pFVar19[1].Pad[3] = -1;
        pFVar19[1].Pad[4] = -0x11;
        pFVar19[1].Pad[5] = -1;
        pFVar19[2]._padding_ = -0x10000000000001;
        pFVar19[2]._padding_ = -0x10000000000001;
        return pFVar19;
      case 2:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x50);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = false;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\x02';
        pFVar19->CollisionType = '\x02';
        return pFVar19;
      case 3:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x40);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7FCapsule_Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = true;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\x03';
        pFVar19->CollisionType = '\x03';
        return pFVar19;
      case 4:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0xc0);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7__TImplicitObjectTransformed_N_02_00_Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\x04';
        pFVar19->CollisionType = '\x04';
        pFVar19[1]._padding_ = 0;
        fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
        dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        uVar20 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        uVar21 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        pFVar19[1].Margin = (float)SUB84(dVar8,0);
        pFVar19[1].bIsConvex = (bool)(char)((ulonglong)dVar8 >> 0x20);
        pFVar19[1].bDoCollide = (bool)(char)((ulonglong)dVar8 >> 0x28);
        pFVar19[1].bHasBoundingBox = (bool)(char)((ulonglong)dVar8 >> 0x30);
        pFVar19[1].bIsTracked = (bool)(char)((ulonglong)dVar8 >> 0x38);
        pFVar19[1].Type = (char)uVar20;
        pFVar19[1].CollisionType = (char)((uint)uVar20 >> 8);
        pFVar19[1].Pad[0] = (char)((uint)uVar20 >> 0x10);
        pFVar19[1].Pad[1] = (char)((uint)uVar20 >> 0x18);
        pFVar19[1].Pad[2] = (char)uVar21;
        pFVar19[1].Pad[3] = (char)((uint)uVar21 >> 8);
        pFVar19[1].Pad[4] = (char)((uint)uVar21 >> 0x10);
        pFVar19[1].Pad[5] = (char)((uint)uVar21 >> 0x18);
        auVar5._8_4_ = SUB84((double)fVar4,0);
        auVar5._0_8_ = (double)fVar3;
        auVar5._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
        pFVar19[2]._padding_ = (longlong)(double)fVar3;
        pFVar19[2]._padding_ = auVar5._8_8_;
        fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
        dVar8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        uVar20 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        uVar21 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        pFVar19[2].Margin = (float)SUB84(dVar8,0);
        pFVar19[2].bIsConvex = (bool)(char)((ulonglong)dVar8 >> 0x20);
        pFVar19[2].bDoCollide = (bool)(char)((ulonglong)dVar8 >> 0x28);
        pFVar19[2].bHasBoundingBox = (bool)(char)((ulonglong)dVar8 >> 0x30);
        pFVar19[2].bIsTracked = (bool)(char)((ulonglong)dVar8 >> 0x38);
        pFVar19[2].Type = (char)uVar20;
        pFVar19[2].CollisionType = (char)((uint)uVar20 >> 8);
        pFVar19[2].Pad[0] = (char)((uint)uVar20 >> 0x10);
        pFVar19[2].Pad[1] = (char)((uint)uVar20 >> 0x18);
        pFVar19[2].Pad[2] = (char)uVar21;
        pFVar19[2].Pad[3] = (char)((uint)uVar21 >> 8);
        pFVar19[2].Pad[4] = (char)((uint)uVar21 >> 0x10);
        pFVar19[2].Pad[5] = (char)((uint)uVar21 >> 0x18);
        auVar6._8_4_ = SUB84((double)fVar4,0);
        auVar6._0_8_ = (double)fVar3;
        auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
        pFVar19[3]._padding_ = (longlong)(double)fVar3;
        pFVar19[3]._padding_ = auVar6._8_8_;
        fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
        dVar8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        uVar20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar21 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        pFVar19[3].Margin = (float)SUB84(dVar8,0);
        pFVar19[3].bIsConvex = (bool)(char)((ulonglong)dVar8 >> 0x20);
        pFVar19[3].bDoCollide = (bool)(char)((ulonglong)dVar8 >> 0x28);
        pFVar19[3].bHasBoundingBox = (bool)(char)((ulonglong)dVar8 >> 0x30);
        pFVar19[3].bIsTracked = (bool)(char)((ulonglong)dVar8 >> 0x38);
        pFVar19[3].Type = (char)uVar20;
        pFVar19[3].CollisionType = (char)((uint)uVar20 >> 8);
        pFVar19[3].Pad[0] = (char)((uint)uVar20 >> 0x10);
        pFVar19[3].Pad[1] = (char)((uint)uVar20 >> 0x18);
        pFVar19[3].Pad[2] = (char)uVar21;
        pFVar19[3].Pad[3] = (char)((uint)uVar21 >> 8);
        pFVar19[3].Pad[4] = (char)((uint)uVar21 >> 0x10);
        pFVar19[3].Pad[5] = (char)((uint)uVar21 >> 0x18);
        auVar7._8_4_ = SUB84((double)fVar4,0);
        auVar7._0_8_ = (double)fVar3;
        auVar7._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
        pFVar19[4]._padding_ = (longlong)(double)fVar3;
        pFVar19[4]._padding_ = auVar7._8_8_;
        pFVar19[4].Margin = -NAN;
        pFVar19[4].bIsConvex = true;
        pFVar19[4].bDoCollide = true;
        pFVar19[4].bHasBoundingBox = true;
        pFVar19[4].bIsTracked = true;
        pFVar19[4].Type = 0xff;
        pFVar19[4].CollisionType = 0xff;
        pFVar19[4].Pad[0] = -1;
        pFVar19[4].Pad[1] = -1;
        pFVar19[4].Pad[2] = -1;
        pFVar19[4].Pad[3] = -1;
        pFVar19[4].Pad[4] = -0x11;
        pFVar19[4].Pad[5] = '\x7f';
        pFVar19[5]._padding_ = 0x7fefffffffffffff;
        pFVar19[5]._padding_ = -0x10000000000001;
        pFVar19[5].Margin = -NAN;
        pFVar19[5].bIsConvex = true;
        pFVar19[5].bDoCollide = true;
        pFVar19[5].bHasBoundingBox = true;
        pFVar19[5].bIsTracked = true;
        pFVar19[5].Type = 0xff;
        pFVar19[5].CollisionType = 0xff;
        pFVar19[5].Pad[0] = -1;
        pFVar19[5].Pad[1] = -1;
        pFVar19[5].Pad[2] = -1;
        pFVar19[5].Pad[3] = -1;
        pFVar19[5].Pad[4] = -0x11;
        pFVar19[5].Pad[5] = -1;
        return pFVar19;
      case 5:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x70);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19[1]._padding_ = 0;
        pFVar19[1]._padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7FImplicitObjectUnion_Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\x05';
        pFVar19->CollisionType = '\x05';
        pFVar19[1].Margin = 0.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = false;
        pFVar19[1].bHasBoundingBox = false;
        pFVar19[1].bIsTracked = false;
        pFVar19[1].Type = '\0';
        pFVar19[1].CollisionType = '\0';
        pFVar19[1].Pad[0] = '\0';
        pFVar19[1].Pad[1] = '\0';
        pFVar19[1].Pad[2] = '\0';
        pFVar19[1].Pad[3] = '\0';
        pFVar19[1].Pad[4] = '\0';
        pFVar19[1].Pad[5] = '\0';
        pFVar19[2]._padding_ = 0;
        pFVar19[2]._padding_ = 0;
        pFVar19[2].Margin = 0.0;
        pFVar19[2].bIsConvex = false;
        pFVar19[2].bDoCollide = false;
        pFVar19[2].bHasBoundingBox = false;
        pFVar19[2].bIsTracked = false;
        pFVar19[2].Type = '\0';
        pFVar19[2].CollisionType = '\0';
        pFVar19[2].Pad[0] = '\0';
        pFVar19[2].Pad[1] = '\0';
        pFVar19[2].Pad[2] = '\0';
        pFVar19[2].Pad[3] = '\0';
        pFVar19[2].Pad[4] = '\0';
        pFVar19[2].Pad[5] = '\0';
        pFVar19[3]._padding_ = 0;
        *(undefined4 *)&pFVar19[3]._padding_ = 0;
        *(undefined1 *)((longlong)&pFVar19[3]._padding_ + 4) = 0;
        return pFVar19;
      case 6:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar18 = ::operator_new(0x120);
        if (pFVar18 == (FLevelSet *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar18 = FLevelSet::FLevelSet(pFVar18);
        return (FImplicitObject *)pFVar18;
      default:
        iVar17 = 0x1d2;
        break;
      case 8:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0xb0);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
        pFVar19[3].Type = '\0';
        pFVar19[3].CollisionType = '\0';
        pFVar19[3].Pad[0] = '\0';
        pFVar19[3].Pad[1] = '\0';
        pFVar19[3].Pad[2] = '\0';
        pFVar19[3].Pad[3] = '\0';
        pFVar19[3].Pad[4] = -0x10;
        pFVar19[3].Pad[5] = '?';
        pFVar19[4]._padding_ = 0x3ff0000000000000;
        pFVar19[4]._padding_ = 0x3ff0000000000000;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = true;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\b';
        pFVar19->CollisionType = '\b';
        pFVar19[1]._padding_ = 0;
        pFVar19[1]._padding_ = 0;
        pFVar19[1].Margin = 0.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = false;
        pFVar19[1].bHasBoundingBox = false;
        pFVar19[1].bIsTracked = false;
        pFVar19[1].Type = '\0';
        pFVar19[1].CollisionType = '\0';
        pFVar19[1].Pad[0] = '\0';
        pFVar19[1].Pad[1] = '\0';
        pFVar19[1].Pad[2] = '\0';
        pFVar19[1].Pad[3] = '\0';
        pFVar19[1].Pad[4] = '\0';
        pFVar19[1].Pad[5] = '\0';
        *(undefined4 *)&pFVar19[2]._padding_ = 0x7f7fffff;
        *(undefined4 *)((longlong)&pFVar19[2]._padding_ + 4) = 0x7f7fffff;
        *(undefined4 *)&pFVar19[2]._padding_ = 0x7f7fffff;
        *(undefined4 *)((longlong)&pFVar19[2]._padding_ + 4) = 0xff7fffff;
        pFVar19[2].Margin = -3.4028235e+38;
        pFVar19[2].bIsConvex = true;
        pFVar19[2].bDoCollide = true;
        pFVar19[2].bHasBoundingBox = true;
        pFVar19[2].bIsTracked = true;
        pFVar19[2].Type = '\0';
        pFVar19[2].CollisionType = '\0';
        pFVar19[2].Pad[0] = '\0';
        pFVar19[2].Pad[1] = '\0';
        pFVar19[2].Pad[2] = '\0';
        pFVar19[2].Pad[3] = '\0';
        pFVar19[2].Pad[4] = '\0';
        pFVar19[2].Pad[5] = '\0';
        *(undefined1 *)&pFVar19[3]._padding_ = 0;
        pFVar19[3]._padding_ = 0;
        pFVar19[3].Margin = 0.0;
        dVar8 = UE::Math::TQuat<double>::Identity.Y;
        pFVar19[3].bIsConvex = false;
        pFVar19[3].bDoCollide = false;
        pFVar19[3].bHasBoundingBox = false;
        pFVar19[3].bIsTracked = false;
        *(double *)&pFVar19[4].Margin = UE::Math::TQuat<double>::Identity.X;
        *(double *)&pFVar19[4].Type = dVar8;
        dVar8 = UE::Math::TQuat<double>::Identity.W;
        pFVar19[5]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
        pFVar19[5]._padding_ = (longlong)dVar8;
        return pFVar19;
      case 9:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x90);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->_padding_ = (longlong)&___7FTaperedCylinder_Chaos__6B_;
        pFVar19[3]._padding_ = 0x7fefffffffffffff;
        pFVar19[3]._padding_ = 0x7fefffffffffffff;
        pFVar19[3].Margin = -NAN;
        pFVar19[3].bIsConvex = true;
        pFVar19[3].bDoCollide = true;
        pFVar19[3].bHasBoundingBox = true;
        pFVar19[3].bIsTracked = true;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\t';
        pFVar19->CollisionType = '\t';
        pFVar19[3].Type = 0xff;
        pFVar19[3].CollisionType = 0xff;
        pFVar19[3].Pad[0] = -1;
        pFVar19[3].Pad[1] = -1;
        pFVar19[3].Pad[2] = -1;
        pFVar19[3].Pad[3] = -1;
        pFVar19[3].Pad[4] = -0x11;
        pFVar19[3].Pad[5] = -1;
        pFVar19[4]._padding_ = -0x10000000000001;
        pFVar19[4]._padding_ = -0x10000000000001;
        pFVar19->bIsConvex = true;
        return pFVar19;
      case 10:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x100);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->_padding_ = (longlong)&___7FCylinder_Chaos__6B_;
        pFVar19[1]._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
        *(undefined ***)&pFVar19[3].Margin = &___7__TPlane_N_02_Chaos__6B_;
        pFVar19[6].Margin = -NAN;
        pFVar19[6].bIsConvex = true;
        pFVar19[6].bDoCollide = true;
        pFVar19[6].bHasBoundingBox = true;
        pFVar19[6].bIsTracked = true;
        pFVar19[6].Type = 0xff;
        pFVar19[6].CollisionType = 0xff;
        pFVar19[6].Pad[0] = -1;
        pFVar19[6].Pad[1] = -1;
        pFVar19[6].Pad[2] = -1;
        pFVar19[6].Pad[3] = -1;
        pFVar19[6].Pad[4] = -0x11;
        pFVar19[6].Pad[5] = '\x7f';
        pFVar19[7]._padding_ = 0x7fefffffffffffff;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\n';
        pFVar19->CollisionType = '\n';
        pFVar19[1]._padding_ = 0;
        pFVar19[1].Margin = 0.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = true;
        pFVar19[1].bHasBoundingBox = false;
        pFVar19[1].bIsTracked = false;
        pFVar19[1].Type = '\x02';
        pFVar19[1].CollisionType = '\x02';
        pFVar19[3].Type = '\0';
        pFVar19[3].CollisionType = '\0';
        pFVar19[3].Pad[0] = '\0';
        pFVar19[3].Pad[1] = '\0';
        pFVar19[3].Pad[2] = '\0';
        pFVar19[3].Pad[3] = '\0';
        pFVar19[3].Pad[4] = '\0';
        pFVar19[3].Pad[5] = '\0';
        *(undefined4 *)&pFVar19[4]._padding_ = 0;
        *(undefined4 *)((longlong)&pFVar19[4]._padding_ + 4) = 0x100;
        *(undefined2 *)&pFVar19[4]._padding_ = 0x202;
        pFVar19[7]._padding_ = -0x10000000000001;
        pFVar19[7].Margin = -NAN;
        pFVar19[7].bIsConvex = true;
        pFVar19[7].bDoCollide = true;
        pFVar19[7].bHasBoundingBox = true;
        pFVar19[7].bIsTracked = true;
        pFVar19[7].Type = 0xff;
        pFVar19[7].CollisionType = 0xff;
        pFVar19[7].Pad[0] = -1;
        pFVar19[7].Pad[1] = -1;
        pFVar19[7].Pad[2] = -1;
        pFVar19[7].Pad[3] = -1;
        pFVar19[7].Pad[4] = -0x11;
        pFVar19[7].Pad[5] = -1;
        return pFVar19;
      case 0xb:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x100);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\v';
        pFVar19->CollisionType = '\v';
        pFVar19->_padding_ = (longlong)&___7FTriangleMeshImplicitObject_Chaos__6B_;
        pFVar19[1]._padding_ = (longlong)&___7__TParticles_M_02_Chaos__6B_;
        pFVar19[2]._padding_ =
             (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
        pFVar19[1]._padding_ = 0;
        pFVar19[1].Margin = 0.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = false;
        pFVar19[1].bHasBoundingBox = false;
        pFVar19[1].bIsTracked = false;
        pFVar19[1].Type = '\0';
        pFVar19[1].CollisionType = '\0';
        pFVar19[1].Pad[0] = '\0';
        pFVar19[1].Pad[1] = '\0';
        pFVar19[2]._padding_ = 0;
        pFVar19[2].Margin = 0.0;
        pFVar19[2].bIsConvex = false;
        pFVar19[2].bDoCollide = false;
        pFVar19[2].bHasBoundingBox = false;
        pFVar19[2].bIsTracked = false;
        pFVar19[2].Type = '\0';
        TArrayCollection::AddArray
                  ((TArrayCollection *)(pFVar19 + 1),(TArrayCollectionArrayBase *)(pFVar19 + 2));
        pFVar19[2].Pad[2] = '\0';
        pFVar19[2].Pad[3] = '\0';
        pFVar19[2].Pad[4] = '\0';
        pFVar19[2].Pad[5] = '\0';
        pFVar19[4]._padding_ = 0x7fefffffffffffff;
        pFVar19[4].Margin = -NAN;
        pFVar19[4].bIsConvex = true;
        pFVar19[4].bDoCollide = true;
        pFVar19[4].bHasBoundingBox = true;
        pFVar19[4].bIsTracked = true;
        pFVar19[4].Type = 0xff;
        pFVar19[4].CollisionType = 0xff;
        pFVar19[4].Pad[0] = -1;
        pFVar19[4].Pad[1] = -1;
        pFVar19[4].Pad[2] = -1;
        pFVar19[4].Pad[3] = -1;
        pFVar19[4].Pad[4] = -0x11;
        pFVar19[4].Pad[5] = '\x7f';
        pFVar19[5]._padding_ = -0x10000000000001;
        pFVar19[5]._padding_ = -0x10000000000001;
        pFVar19[5].Margin = -NAN;
        pFVar19[5].bIsConvex = true;
        pFVar19[5].bDoCollide = true;
        pFVar19[5].bHasBoundingBox = true;
        pFVar19[5].bIsTracked = true;
        pFVar19[3]._padding_ = 0;
        pFVar19[3]._padding_ = 0;
        pFVar19[3].Margin = 0.0;
        pFVar19[3].bIsConvex = false;
        pFVar19[3].bDoCollide = false;
        pFVar19[3].bHasBoundingBox = false;
        pFVar19[3].bIsTracked = false;
        pFVar19[3].Type = '\0';
        pFVar19[3].CollisionType = '\0';
        pFVar19[3].Pad[0] = '\0';
        pFVar19[3].Pad[1] = '\0';
        pFVar19[3].Pad[2] = '\0';
        pFVar19[3].Pad[3] = '\0';
        pFVar19[3].Pad[4] = '\0';
        pFVar19[3].Pad[5] = '\0';
        pFVar19[5].Type = '\0';
        pFVar19[5].CollisionType = '\0';
        pFVar19[5].Pad[0] = '\0';
        pFVar19[5].Pad[1] = '\0';
        pFVar19[5].Pad[2] = '\0';
        pFVar19[5].Pad[3] = '\0';
        pFVar19[5].Pad[4] = '\0';
        pFVar19[5].Pad[5] = '\0';
        pFVar19[6]._padding_ = 0;
        pFVar19[6]._padding_ = 0;
        pFVar19[6].Margin = 0.0;
        pFVar19[6].bIsConvex = false;
        pFVar19[6].bDoCollide = false;
        pFVar19[6].bHasBoundingBox = false;
        pFVar19[6].bIsTracked = false;
        pFVar19[7]._padding_ = 0;
        pFVar19[7]._padding_ = 0;
        pFVar19[7].Margin = 0.0;
        pFVar19[7].bIsConvex = false;
        pFVar19[7].bDoCollide = false;
        pFVar19[7].bHasBoundingBox = false;
        pFVar19[7].bIsTracked = false;
        pFVar19[7].Type = '\0';
        pFVar19[7].CollisionType = '\0';
        pFVar19[7].Pad[0] = '\0';
        pFVar19[7].Pad[1] = '\0';
        pFVar19[7].Pad[2] = '\0';
        pFVar19[7].Pad[3] = '\0';
        pFVar19[7].Pad[4] = '\0';
        pFVar19[7].Pad[5] = '\0';
        return pFVar19;
      case 0xc:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x170);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->_padding_ = (longlong)&___7FHeightField_Chaos__6B_;
        pFVar19[8]._padding_ = 0x7fefffffffffffff;
        pFVar19[8].Margin = -NAN;
        pFVar19[8].bIsConvex = true;
        pFVar19[8].bDoCollide = true;
        pFVar19[8].bHasBoundingBox = true;
        pFVar19[8].bIsTracked = true;
        pFVar19[8].Type = 0xff;
        pFVar19[8].CollisionType = 0xff;
        pFVar19[8].Pad[0] = -1;
        pFVar19[8].Pad[1] = -1;
        pFVar19[8].Pad[2] = -1;
        pFVar19[8].Pad[3] = -1;
        pFVar19[8].Pad[4] = -0x11;
        pFVar19[8].Pad[5] = '\x7f';
        pFVar19[9].Type = 0xff;
        pFVar19[9].CollisionType = 0xff;
        pFVar19[9].Pad[0] = -1;
        pFVar19[9].Pad[1] = -1;
        pFVar19[9].Pad[2] = -1;
        pFVar19[9].Pad[3] = -1;
        pFVar19[9].Pad[4] = -0x11;
        pFVar19[9].Pad[5] = '\x7f';
        pFVar19[10]._padding_ = 0x7fefffffffffffff;
        pFVar19[10]._padding_ = 0x7fefffffffffffff;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\f';
        pFVar19->CollisionType = '\f';
        pFVar19[1]._padding_ = 0;
        pFVar19[1]._padding_ = 0;
        pFVar19[1].Margin = 0.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = false;
        pFVar19[1].bHasBoundingBox = false;
        pFVar19[1].bIsTracked = false;
        pFVar19[1].Type = '\0';
        pFVar19[1].CollisionType = '\0';
        pFVar19[1].Pad[0] = '\0';
        pFVar19[1].Pad[1] = '\0';
        pFVar19[1].Pad[2] = '\0';
        pFVar19[1].Pad[3] = '\0';
        pFVar19[1].Pad[4] = '\0';
        pFVar19[1].Pad[5] = '\0';
        pFVar19[2]._padding_ = 0;
        pFVar19[2]._padding_ = 0;
        pFVar19[7]._padding_ = 0;
        pFVar19[7].Margin = 0.0;
        pFVar19[7].bIsConvex = false;
        pFVar19[7].bDoCollide = false;
        pFVar19[7].bHasBoundingBox = false;
        pFVar19[7].bIsTracked = false;
        pFVar19[7].Type = '\0';
        pFVar19[7].CollisionType = '\0';
        pFVar19[7].Pad[0] = '\0';
        pFVar19[7].Pad[1] = '\0';
        pFVar19[7].Pad[2] = '\0';
        pFVar19[7].Pad[3] = '\0';
        pFVar19[7].Pad[4] = '\0';
        pFVar19[7].Pad[5] = '\0';
        pFVar19[8]._padding_ = 0;
        pFVar19[9]._padding_ = -0x10000000000001;
        pFVar19[9]._padding_ = -0x10000000000001;
        pFVar19[9].Margin = -NAN;
        pFVar19[9].bIsConvex = true;
        pFVar19[9].bDoCollide = true;
        pFVar19[9].bHasBoundingBox = true;
        pFVar19[9].bIsTracked = true;
        pFVar19[10].Margin = -NAN;
        pFVar19[10].bIsConvex = true;
        pFVar19[10].bDoCollide = true;
        pFVar19[10].bHasBoundingBox = true;
        pFVar19[10].bIsTracked = true;
        pFVar19[10].Type = 0xff;
        pFVar19[10].CollisionType = 0xff;
        pFVar19[10].Pad[0] = -1;
        pFVar19[10].Pad[1] = -1;
        pFVar19[10].Pad[2] = -1;
        pFVar19[10].Pad[3] = -1;
        pFVar19[10].Pad[4] = -0x11;
        pFVar19[10].Pad[5] = -1;
        pFVar19[0xb]._padding_ = -0x10000000000001;
        return pFVar19;
      case 0xd:
        if ((((param_1->_padding_ & 1) == 0) ||
            (iVar17 = FArchiveState::CustomVer
                                ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID
                                ), 0xb < iVar17)) &&
           (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6785665667568763340>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                                ,0x1cc,
                                "Ar.IsLoading() && (Ar.CustomVer(FExternalPhysicsCustomObjectVersion::GUID) < FExternalPhysicsCustomObjectVersion::ScaledGeometryIsConcrete)"
                               ), bVar16)) {
          pcVar2 = (code *)swi(3);
          pFVar19 = (FImplicitObject *)(*pcVar2)();
          return pFVar19;
        }
        pFVar19 = ::operator_new(0x78);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = 0x87;
        pFVar19->CollisionType = 0x87;
        *(undefined4 *)&pFVar19[1]._padding_ = 0x3f800000;
        *(undefined4 *)((longlong)&pFVar19[1]._padding_ + 4) = 0x3f800000;
        *(undefined4 *)&pFVar19[1]._padding_ = 0x3f800000;
        *(undefined4 *)((longlong)&pFVar19[1]._padding_ + 4) = 0x3f800000;
        pFVar19[1].Margin = 1.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = false;
        pFVar19[1].bHasBoundingBox = true;
        pFVar19[1].bIsTracked = true;
        pFVar19[1].Type = '\0';
        pFVar19[1].CollisionType = '\0';
        pFVar19[1].Pad[0] = '\0';
        pFVar19[1].Pad[1] = '\0';
        pFVar19[2]._padding_ = 0x7fefffffffffffff;
        pFVar19[2]._padding_ = 0x7fefffffffffffff;
        pFVar19[2].Margin = -NAN;
        pFVar19[2].bIsConvex = true;
        pFVar19[2].bDoCollide = true;
        pFVar19[2].bHasBoundingBox = true;
        pFVar19[2].bIsTracked = true;
        pFVar19[2].Type = 0xff;
        pFVar19[2].CollisionType = 0xff;
        pFVar19[2].Pad[0] = -1;
        pFVar19[2].Pad[1] = -1;
        pFVar19[2].Pad[2] = -1;
        pFVar19[2].Pad[3] = -1;
        pFVar19[2].Pad[4] = -0x11;
        pFVar19[2].Pad[5] = -1;
        pFVar19[3]._padding_ = -0x10000000000001;
        pFVar19[3]._padding_ = -0x10000000000001;
        pFVar19->_padding_ =
             (longlong)&___7__TImplicitObjectScaled_VFImplicitObject_Chaos___00_Chaos__6B_;
        pFVar19[3].Margin = 0.0;
        pFVar19[3].bIsConvex = false;
        pFVar19[3].bDoCollide = false;
        pFVar19[3].bHasBoundingBox = false;
        pFVar19[3].bIsTracked = false;
        return pFVar19;
      case 0xf:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0xd0);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Type = '\x0f';
        pFVar19->CollisionType = '\x05';
        pFVar19[1]._padding_ = 0;
        pFVar19[1]._padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19[1].Margin = 0.0;
        pFVar19[1].bIsConvex = false;
        pFVar19[1].bDoCollide = false;
        pFVar19[1].bHasBoundingBox = false;
        pFVar19[1].bIsTracked = false;
        pFVar19[1].Type = '\0';
        pFVar19[1].CollisionType = '\0';
        pFVar19[1].Pad[0] = '\0';
        pFVar19[1].Pad[1] = '\0';
        pFVar19[1].Pad[2] = '\0';
        pFVar19[1].Pad[3] = '\0';
        pFVar19[1].Pad[4] = '\0';
        pFVar19[1].Pad[5] = '\0';
        pFVar19[2]._padding_ = 0;
        pFVar19[2]._padding_ = 0;
        pFVar19[2].Margin = 0.0;
        pFVar19[2].bIsConvex = false;
        pFVar19[2].bDoCollide = false;
        pFVar19[2].bHasBoundingBox = false;
        pFVar19[2].bIsTracked = false;
        pFVar19[2].Type = '\0';
        pFVar19[2].CollisionType = '\0';
        pFVar19[2].Pad[0] = '\0';
        pFVar19[2].Pad[1] = '\0';
        pFVar19[2].Pad[2] = '\0';
        pFVar19[2].Pad[3] = '\0';
        pFVar19[2].Pad[4] = '\0';
        pFVar19[2].Pad[5] = '\0';
        pFVar19[3]._padding_ = 0;
        *(undefined4 *)&pFVar19[3]._padding_ = 0;
        *(undefined1 *)((longlong)&pFVar19[3]._padding_ + 4) = 0;
        pFVar19->_padding_ = (longlong)&___7FImplicitObjectUnionClustered_Chaos__6B_;
        pFVar19[3].Margin = 0.0;
        pFVar19[3].bIsConvex = false;
        pFVar19[3].bDoCollide = false;
        pFVar19[3].bHasBoundingBox = false;
        pFVar19[3].bIsTracked = false;
        pFVar19[3].Type = '\0';
        pFVar19[3].CollisionType = '\0';
        pFVar19[3].Pad[0] = '\0';
        pFVar19[3].Pad[1] = '\0';
        pFVar19[3].Pad[2] = '\0';
        pFVar19[3].Pad[3] = '\0';
        pFVar19[3].Pad[4] = '\0';
        pFVar19[3].Pad[5] = '\0';
        pFVar19[4]._padding_ = 0;
        pFVar19[4]._padding_ = 0;
        pFVar19[5]._padding_ = 0;
        *(undefined4 *)&pFVar19[5]._padding_ = 0;
        *(undefined4 *)((longlong)&pFVar19[5]._padding_ + 4) = 0x80;
        pFVar19[5].Margin = -NAN;
        pFVar19[5].bIsConvex = false;
        pFVar19[5].bDoCollide = false;
        pFVar19[5].bHasBoundingBox = false;
        pFVar19[5].bIsTracked = false;
        pFVar19[6]._padding_ = 0;
        *(undefined4 *)&pFVar19[6]._padding_ = 0;
        return pFVar19;
      case 0x10:
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x88);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->Margin = 0.0;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = '\x10';
        pFVar19->CollisionType = '\x10';
        pFVar19->_padding_ = (longlong)&___7FTaperedCapsule_Chaos__6B_;
        uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._1_1_;
        uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._2_1_;
        uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._3_1_;
        uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._4_1_;
        uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._5_1_;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._6_1_;
        uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._7_1_;
        pFVar19[1].Type = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_1_;
        pFVar19[1].CollisionType = uVar9;
        pFVar19[1].Pad[0] = uVar10;
        pFVar19[1].Pad[1] = uVar11;
        pFVar19[1].Pad[2] = uVar12;
        pFVar19[1].Pad[3] = uVar13;
        pFVar19[1].Pad[4] = uVar14;
        pFVar19[1].Pad[5] = uVar15;
        *(float *)&pFVar19[2]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        *(undefined1 *)&pFVar19[2].Margin = 0;
        pFVar19[2].Type = 0xff;
        pFVar19[2].CollisionType = 0xff;
        pFVar19[2].Pad[0] = -1;
        pFVar19[2].Pad[1] = -1;
        pFVar19[2].Pad[2] = -1;
        pFVar19[2].Pad[3] = -1;
        pFVar19[2].Pad[4] = -0x11;
        pFVar19[2].Pad[5] = '\x7f';
        pFVar19[3]._padding_ = 0x7fefffffffffffff;
        pFVar19[3]._padding_ = 0x7fefffffffffffff;
        pFVar19[3].Margin = -NAN;
        pFVar19[3].bIsConvex = true;
        pFVar19[3].bDoCollide = true;
        pFVar19[3].bHasBoundingBox = true;
        pFVar19[3].bIsTracked = true;
        pFVar19[3].Type = 0xff;
        pFVar19[3].CollisionType = 0xff;
        pFVar19[3].Pad[0] = -1;
        pFVar19[3].Pad[1] = -1;
        pFVar19[3].Pad[2] = -1;
        pFVar19[3].Pad[3] = -1;
        pFVar19[3].Pad[4] = -0x11;
        pFVar19[3].Pad[5] = -1;
        pFVar19[4]._padding_ = -0x10000000000001;
        pFVar19->bIsConvex = true;
        return pFVar19;
      }
    }
    else {
      if ((local_res8[0] & 0x1f) == 8) {
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x30);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)&___7__TImplicitObjectInstanced_VFConvex_Chaos___Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = 'H';
        pFVar19->CollisionType = 'H';
        pFVar19[1]._padding_ = 0;
        *(undefined4 *)&pFVar19[1]._padding_ = 0;
        return pFVar19;
      }
      if ((local_res8[0] & 0x1f) == 0xb) {
        if ((param_1->_padding_ & 1) == 0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19 = ::operator_new(0x30);
        if (pFVar19 == (FImplicitObject *)0x0) {
          return (FImplicitObject *)0x0;
        }
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ =
             (longlong)
             &___7__TImplicitObjectInstanced_VFTriangleMeshImplicitObject_Chaos___Chaos__6B_;
        pFVar19->Margin = 0.0;
        pFVar19->bIsConvex = false;
        pFVar19->bDoCollide = true;
        pFVar19->bHasBoundingBox = true;
        pFVar19->bIsTracked = false;
        pFVar19->Type = 'K';
        pFVar19->CollisionType = 'K';
        pFVar19[1]._padding_ = 0;
        *(undefined4 *)&pFVar19[1]._padding_ = 0;
        return pFVar19;
      }
      iVar17 = 0x1b6;
    }
  }
  else {
    if ((local_res8[0] & 0x1f) == 8) {
      if ((param_1->_padding_ & 1) == 0) {
        return (FImplicitObject *)0x0;
      }
      pFVar19 = ::operator_new(0x78);
      if (pFVar19 == (FImplicitObject *)0x0) {
        return (FImplicitObject *)0x0;
      }
      pFVar19->_padding_ = 0;
      pFVar19->Margin = 0.0;
      pFVar19->bIsConvex = false;
      pFVar19->bDoCollide = true;
      pFVar19->bHasBoundingBox = true;
      pFVar19->bIsTracked = false;
      pFVar19->Type = 0x88;
      pFVar19->CollisionType = 0x88;
      *(undefined4 *)&pFVar19[1]._padding_ = 0x3f800000;
      *(undefined4 *)((longlong)&pFVar19[1]._padding_ + 4) = 0x3f800000;
      *(undefined4 *)&pFVar19[1]._padding_ = 0x3f800000;
      *(undefined4 *)((longlong)&pFVar19[1]._padding_ + 4) = 0x3f800000;
      pFVar19[1].Margin = 1.0;
      pFVar19[1].bIsConvex = false;
      pFVar19[1].bDoCollide = false;
      pFVar19[1].bHasBoundingBox = true;
      pFVar19[1].bIsTracked = true;
      pFVar19[1].Type = '\0';
      pFVar19[1].CollisionType = '\0';
      pFVar19[1].Pad[0] = '\0';
      pFVar19[1].Pad[1] = '\0';
      pFVar19[2]._padding_ = 0x7fefffffffffffff;
      pFVar19[2]._padding_ = 0x7fefffffffffffff;
      pFVar19[2].Margin = -NAN;
      pFVar19[2].bIsConvex = true;
      pFVar19[2].bDoCollide = true;
      pFVar19[2].bHasBoundingBox = true;
      pFVar19[2].bIsTracked = true;
      pFVar19[2].Type = 0xff;
      pFVar19[2].CollisionType = 0xff;
      pFVar19[2].Pad[0] = -1;
      pFVar19[2].Pad[1] = -1;
      pFVar19[2].Pad[2] = -1;
      pFVar19[2].Pad[3] = -1;
      pFVar19[2].Pad[4] = -0x11;
      pFVar19[2].Pad[5] = -1;
      pFVar19[3]._padding_ = -0x10000000000001;
      pFVar19[3]._padding_ = -0x10000000000001;
      pFVar19->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFConvex_Chaos___00_Chaos__6B_;
      pFVar19[3].Margin = 0.0;
      pFVar19[3].bIsConvex = false;
      pFVar19[3].bDoCollide = false;
      pFVar19[3].bHasBoundingBox = false;
      pFVar19[3].bIsTracked = false;
      return pFVar19;
    }
    if ((local_res8[0] & 0x1f) == 0xb) {
      if ((param_1->_padding_ & 1) == 0) {
        return (FImplicitObject *)0x0;
      }
      pFVar19 = ::operator_new(0x78);
      if (pFVar19 == (FImplicitObject *)0x0) {
        return (FImplicitObject *)0x0;
      }
      pFVar19->_padding_ = 0;
      pFVar19->Margin = 0.0;
      pFVar19->bIsConvex = false;
      pFVar19->bDoCollide = true;
      pFVar19->bHasBoundingBox = true;
      pFVar19->bIsTracked = false;
      pFVar19->Type = 0x8b;
      pFVar19->CollisionType = 0x8b;
      *(undefined4 *)&pFVar19[1]._padding_ = 0x3f800000;
      *(undefined4 *)((longlong)&pFVar19[1]._padding_ + 4) = 0x3f800000;
      *(undefined4 *)&pFVar19[1]._padding_ = 0x3f800000;
      *(undefined4 *)((longlong)&pFVar19[1]._padding_ + 4) = 0x3f800000;
      pFVar19[1].Margin = 1.0;
      pFVar19[1].bIsConvex = false;
      pFVar19[1].bDoCollide = false;
      pFVar19[1].bHasBoundingBox = true;
      pFVar19[1].bIsTracked = true;
      pFVar19[1].Type = '\0';
      pFVar19[1].CollisionType = '\0';
      pFVar19[1].Pad[0] = '\0';
      pFVar19[1].Pad[1] = '\0';
      pFVar19[2]._padding_ = 0x7fefffffffffffff;
      pFVar19[2]._padding_ = 0x7fefffffffffffff;
      pFVar19[2].Margin = -NAN;
      pFVar19[2].bIsConvex = true;
      pFVar19[2].bDoCollide = true;
      pFVar19[2].bHasBoundingBox = true;
      pFVar19[2].bIsTracked = true;
      pFVar19[2].Type = 0xff;
      pFVar19[2].CollisionType = 0xff;
      pFVar19[2].Pad[0] = -1;
      pFVar19[2].Pad[1] = -1;
      pFVar19[2].Pad[2] = -1;
      pFVar19[2].Pad[3] = -1;
      pFVar19[2].Pad[4] = -0x11;
      pFVar19[2].Pad[5] = -1;
      pFVar19[3]._padding_ = -0x10000000000001;
      pFVar19[3]._padding_ = -0x10000000000001;
      pFVar19->_padding_ =
           (longlong)&___7__TImplicitObjectScaled_VFTriangleMeshImplicitObject_Chaos___00_Chaos__6B_
      ;
      pFVar19[3].Margin = 0.0;
      pFVar19[3].bIsConvex = false;
      pFVar19[3].bDoCollide = false;
      pFVar19[3].bHasBoundingBox = false;
      pFVar19[3].bIsTracked = false;
      return pFVar19;
    }
    iVar17 = 0x1a8;
  }
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("false",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                      ,iVar17,L"");
  if (!bVar16) {
    return (FImplicitObject *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar19 = (FImplicitObject *)(*pcVar2)();
  return pFVar19;
}

// Serialize @ 143b76f80

void __thiscall Chaos::FImplicitObject::Serialize(FImplicitObject *this,FChaosArchive *param_1)

{
  uchar *puVar1;
  int iVar2;
  FArchive *pFVar3;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (4 < iVar2) {
    pFVar3 = ::operator<<((FArchive *)param_1,&this->bIsConvex);
    ::operator<<(pFVar3,&this->bDoCollide);
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (iVar2 < 0xb) {
    this->bDoCollide = true;
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x1d < iVar2) {
    puVar1 = *(uchar **)param_1->_padding_;
    if (puVar1 + 1 <= (uchar *)((undefined8 *)param_1->_padding_)[1]) {
      this->CollisionType = *puVar1;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000143b778b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->CollisionType,1);
    return;
  }
  this->CollisionType = this->Type;
  return;
}

// SerializeImp @ 143b777d0

void __thiscall Chaos::FImplicitObject::SerializeImp(FImplicitObject *this,FArchive *param_1)

{
  uchar *puVar1;
  int iVar2;
  FArchive *pFVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FDestructionObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (4 < iVar2) {
    pFVar3 = ::operator<<(param_1,&this->bIsConvex);
    ::operator<<(pFVar3,&this->bDoCollide);
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FDestructionObjectVersion::GUID);
  if (iVar2 < 0xb) {
    this->bDoCollide = true;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x1d < iVar2) {
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      this->CollisionType = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000143b778b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->CollisionType,1);
    return;
  }
  this->CollisionType = this->Type;
  return;
}

// SerializeLegacyHelper @ 143b778e0

FArchive * __cdecl
Chaos::FImplicitObject::SerializeLegacyHelper
          (FArchive *param_1,
          TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  uchar uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  uchar *puVar6;
  code *pcVar7;
  FLevelSet *pFVar8;
  FLevelSet *pFVar9;
  FArchive *pFVar10;
  FImplicitObject *pFVar11;
  uchar *puVar12;
  bool bVar13;
  char local_res8 [8];
  uint local_res10 [2];
  
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = param_2->Ptr != (FImplicitObject *)0x0;
  puVar1 = &param_1->field_0x28;
  pFVar9 = (FLevelSet *)0x0;
  piVar2 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = (uint)(param_2->Ptr != (FImplicitObject *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      bVar13 = local_res10[0] != 0;
    }
  }
  else {
    bVar13 = *(int *)*puVar4 != 0;
    *puVar4 = (ulonglong)piVar2;
  }
  if (!bVar13) {
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    puVar12 = &param_2->Ptr->Type;
    uVar3 = *puVar12;
    if ((uVar3 == '\0') || (((uVar3 - 1 & 0xfa) == 0 && (uVar3 != '\x05')))) {
      puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
      if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar12,1);
      }
      else {
        *puVar12 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
    }
    else {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                          ,0x149,L"");
      if (bVar13) {
code_r0x000143b77b55:
        pcVar7 = (code *)swi(3);
        pFVar10 = (FArchive *)(*pcVar7)();
        return pFVar10;
      }
    }
    goto LAB_143b77b8a;
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((char *)plVar5[1] < (char *)*plVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar5;
    *plVar5 = *plVar5 + 1;
  }
  if (local_res8[0] == '\0') {
    pFVar8 = ::operator_new(0x30);
    if (pFVar8 != (FLevelSet *)0x0) {
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
      *(undefined4 *)&pFVar8->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0x10101;
      *(undefined2 *)&pFVar8->_padding_ = 0;
      pFVar9 = pFVar8;
    }
LAB_143b77afb:
    pFVar11 = param_2->Ptr;
    param_2->Ptr = (FImplicitObject *)pFVar9;
  }
  else {
    if (local_res8[0] == '\x01') {
      pFVar8 = ::operator_new(0x50);
      if (pFVar8 != (FLevelSet *)0x0) {
        pFVar8->_padding_ = 0;
        pFVar8->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
        *(undefined8 *)&pFVar8->MGrid = 0x7fefffffffffffff;
        *(undefined8 *)&(pFVar8->MGrid).field_0x8 = 0x7fefffffffffffff;
        *(undefined8 *)&(pFVar8->MGrid).field_0x10 = 0x7fefffffffffffff;
        *(undefined8 *)&(pFVar8->MGrid).field_0x18 = 0xffefffffffffffff;
        *(undefined8 *)&(pFVar8->MGrid).field_0x20 = 0xffefffffffffffff;
        *(undefined8 *)&(pFVar8->MGrid).field_0x28 = 0xffefffffffffffff;
        *(undefined4 *)&pFVar8->_padding_ = 0;
        *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0x10101;
        *(undefined2 *)&pFVar8->_padding_ = 0x101;
        pFVar9 = pFVar8;
      }
      goto LAB_143b77afb;
    }
    if (local_res8[0] == '\x02') {
      pFVar8 = ::operator_new(0x50);
      if (pFVar8 != (FLevelSet *)0x0) {
        pFVar8->_padding_ = 0;
        pFVar8->_padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
        *(undefined4 *)&pFVar8->_padding_ = 0;
        *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 0x100;
        *(undefined2 *)&pFVar8->_padding_ = 0x202;
        pFVar9 = pFVar8;
      }
      goto LAB_143b77afb;
    }
    if (local_res8[0] != '\x06') {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                          ,0x13e,L"");
      if (bVar13) goto code_r0x000143b77b55;
      goto LAB_143b77b8a;
    }
    pFVar8 = ::operator_new(0x120);
    if (pFVar8 != (FLevelSet *)0x0) {
      pFVar9 = FLevelSet::FLevelSet(pFVar8);
    }
    pFVar11 = param_2->Ptr;
    param_2->Ptr = (FImplicitObject *)pFVar9;
  }
  if (pFVar11 != (FImplicitObject *)0x0) {
    (**(code **)pFVar11->_padding_)(pFVar11,1);
  }
LAB_143b77b8a:
  (**(code **)(param_2->Ptr->_padding_ + 0x108))(param_2->Ptr,param_1);
  return param_1;
}

// SignedDistance @ 143b796b0

double __thiscall
Chaos::FImplicitObject::SignedDistance(FImplicitObject *this,TVector<double,3> *param_1)

{
  double dVar1;
  undefined1 local_28 [40];
  
  dVar1 = (double)(**(code **)(this->_padding_ + 0x80))(this,param_1,local_28);
  return dVar1;
}

// Track @ 143b7c920

void __thiscall
Chaos::FImplicitObject::Track
          (FImplicitObject *this,TSerializablePtr<Chaos::FImplicitObject> param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTrackedGeometryManager *this_00;
  
  if (param_1.Ptr == this) {
    if (this->bIsTracked == false) {
      this->bIsTracked = true;
      this_00 = FTrackedGeometryManager::Get();
      FTrackedGeometryManager::AddGeometry(this_00,param_1,param_2);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6785665667568762935>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObject.cpp"
                       ,0x37,"This.Get() == this");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

