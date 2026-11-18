// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// ComputeSampleNearest @ 14ca81e60

float __thiscall
UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleNearest
          (TSpatialPhotoSet<float,float> *this,int *param_1,TVector2<double> *param_2,float *param_3
          )

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = *param_1;
  uVar5 = 0;
  if ((int)uVar7 < (this->Photos).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
  }
  pFVar1 = (this->Photos).AllocatorInstance.Data;
  if (*(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
  }
  lVar2 = *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x10);
  dVar11 = (double)*(int *)(lVar2 + 0x50);
  dVar9 = (param_2->field0_0x0)._s_0.Y / (double)*(int *)(lVar2 + 0x54);
  dVar10 = (param_2->field0_0x0)._s_0.X / dVar11;
  if ((((dVar10 < 0.0) || (__real_3ff0000000000000 < dVar10)) || (dVar9 < 0.0)) ||
     (__real_3ff0000000000000 < dVar9)) {
    fVar8 = *param_3;
  }
  else {
    if (__real_3ff0000000000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000;
    }
    if (__real_3ff0000000000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000;
    }
    lVar6 = (longlong)(int)(dVar9 * (double)*(int *)(lVar2 + 0x54)) *
            (longlong)*(int *)(lVar2 + 0x50) + (longlong)(int)(dVar10 * dVar11);
    uVar7 = 0;
    if (lVar6 < *(longlong *)(lVar2 + 0x60)) {
      uVar7 = (uint)((ulonglong)lVar6 >> 0x3f) ^ 1;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar8 = (float)(*pcVar3)();
        return fVar8;
      }
    }
    fVar8 = *(float *)(*(longlong *)(lVar2 + 0x58) + lVar6 * 4);
  }
  return fVar8;
}

// ComputeSampleNearest @ 14ca82000

TVector<float> * __thiscall
UE::Geometry::TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleNearest
          (TSpatialPhotoSet<UE::Math::TVector<float>,float> *this,
          TVector<float> *__return_storage_ptr__,int *param_1,TVector2<double> *param_2,
          TVector<float> *param_3)

{
  uint uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar1 = *param_1;
  uVar7 = 0;
  if ((int)uVar1 < (this->Photos).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector<float> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar3 = (this->Photos).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x10) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector<float> *)(*pcVar5)();
    return pTVar8;
  }
  lVar4 = *(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x10);
  dVar11 = (double)*(int *)(lVar4 + 0x50);
  dVar9 = (param_2->field0_0x0)._s_0.Y / (double)*(int *)(lVar4 + 0x54);
  dVar10 = (param_2->field0_0x0)._s_0.X / dVar11;
  if ((((0.0 <= dVar10) && (dVar10 <= __real_3ff0000000000000)) && (0.0 <= dVar9)) &&
     (dVar9 <= __real_3ff0000000000000)) {
    if (__real_3ff0000000000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000;
    }
    if (__real_3ff0000000000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000;
    }
    param_3 = TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                        ((TDenseGrid2<UE::Math::TVector<float>_> *)(lVar4 + 0x58),
                         (longlong)(int)(dVar9 * (double)*(int *)(lVar4 + 0x54)) *
                         (longlong)*(int *)(lVar4 + 0x50) + (longlong)(int)(dVar10 * dVar11));
  }
  fVar2 = (param_3->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Add @ 14cb72a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TSpatialPhotoSet<float,float>::Add
          (TSpatialPhotoSet<float,float> *this,TSpatialPhoto<float> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTStack_10 = ::operator_new(0x90);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTStack_10 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pTStack_10 = _UNK_150651568;
  }
  else {
    pTStack_10->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_10->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TSpatialPhoto_M_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    dVar4 = (param_1->Frame).Origin.field0_0x0._s_0.Y;
    pTStack_10[1]._padding_ = (longlong)(param_1->Frame).Origin.field0_0x0._s_0.X;
    *(double *)&pTStack_10[1].SharedReferenceCount = dVar4;
    dVar4 = (param_1->Frame).Rotation.field0_0x0._s_0.X;
    pTStack_10[2]._padding_ = (longlong)(param_1->Frame).Origin.field0_0x0._s_0.Z;
    *(double *)&pTStack_10[2].SharedReferenceCount = dVar4;
    dVar4 = (param_1->Frame).Rotation.field0_0x0._s_0.Z;
    pTStack_10[3]._padding_ = (longlong)(param_1->Frame).Rotation.field0_0x0._s_0.Y;
    *(double *)&pTStack_10[3].SharedReferenceCount = dVar4;
    pTStack_10[4]._padding_ = (longlong)(param_1->Frame).Rotation.field0_0x0._s_0.W;
    *(double *)&pTStack_10[4].SharedReferenceCount = param_1->NearPlaneDist;
    pTStack_10[5]._padding_ = (longlong)param_1->HorzFOVDegrees;
    iVar7 = (param_1->Dimensions).Height;
    pTStack_10[5].SharedReferenceCount = (atomic<int>)(param_1->Dimensions).Width;
    pTStack_10[5].WeakReferenceCount = (atomic<int>)iVar7;
    pTStack_10[6]._padding_ = (longlong)(param_1->Image).Dimensions;
    pTStack_10[6].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_10[6].WeakReferenceCount = (atomic<int>)0x0;
    *(FScriptContainerElement **)&pTStack_10[6].SharedReferenceCount =
         (param_1->Image).Image.Buffer.AllocatorInstance.Data;
    (param_1->Image).Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTStack_10[7]._padding_ = (param_1->Image).Image.Buffer.ArrayNum;
    uVar5 = *(undefined4 *)((longlong)&(param_1->Image).Image.Buffer.ArrayMax + 4);
    pTStack_10[7].SharedReferenceCount =
         (atomic<int>)*(undefined4 *)&(param_1->Image).Image.Buffer.ArrayMax;
    pTStack_10[7].WeakReferenceCount = (atomic<int>)uVar5;
    (param_1->Image).Image.Buffer.ArrayNum = 0;
    (param_1->Image).Image.Buffer.ArrayMax = 0;
    pTStack_10[8]._padding_ = (param_1->Image).Image.DimensionX;
    uVar5 = *(undefined4 *)((longlong)&(param_1->Image).Image.DimensionY + 4);
    pTStack_10[8].SharedReferenceCount =
         (atomic<int>)*(undefined4 *)&(param_1->Image).Image.DimensionY;
    pTStack_10[8].WeakReferenceCount = (atomic<int>)uVar5;
    if (pTStack_10 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTStack_10;
    local_18 = pTStack_10 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pFVar2 = (this->Photos).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->Photos).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = (this->Photos).ArrayNum;
  piVar1 = &(this->Photos).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Photos).ArrayNum = iVar7 + 1;
  pFVar2 = (this->Photos).AllocatorInstance.Data;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar7 * 0x10) = local_18;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar7 * 0x10 + 8) = pTStack_10;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// Add @ 14cb72c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TSpatialPhotoSet<UE::Math::TVector<float>,float>::Add
          (TSpatialPhotoSet<UE::Math::TVector<float>,float> *this,
          TSpatialPhoto<UE::Math::TVector<float>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTStack_10 = ::operator_new(0x90);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTStack_10 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pTStack_10 = _UNK_150651568;
  }
  else {
    pTStack_10->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_10->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TSpatialPhoto_U__TVector_M_Math_UE___Geometry_UE___00_SharedPointerInternals__6B_
    ;
    dVar4 = (param_1->Frame).Origin.field0_0x0._s_0.Y;
    pTStack_10[1]._padding_ = (longlong)(param_1->Frame).Origin.field0_0x0._s_0.X;
    *(double *)&pTStack_10[1].SharedReferenceCount = dVar4;
    dVar4 = (param_1->Frame).Rotation.field0_0x0._s_0.X;
    pTStack_10[2]._padding_ = (longlong)(param_1->Frame).Origin.field0_0x0._s_0.Z;
    *(double *)&pTStack_10[2].SharedReferenceCount = dVar4;
    dVar4 = (param_1->Frame).Rotation.field0_0x0._s_0.Z;
    pTStack_10[3]._padding_ = (longlong)(param_1->Frame).Rotation.field0_0x0._s_0.Y;
    *(double *)&pTStack_10[3].SharedReferenceCount = dVar4;
    pTStack_10[4]._padding_ = (longlong)(param_1->Frame).Rotation.field0_0x0._s_0.W;
    *(double *)&pTStack_10[4].SharedReferenceCount = param_1->NearPlaneDist;
    pTStack_10[5]._padding_ = (longlong)param_1->HorzFOVDegrees;
    iVar7 = (param_1->Dimensions).Height;
    pTStack_10[5].SharedReferenceCount = (atomic<int>)(param_1->Dimensions).Width;
    pTStack_10[5].WeakReferenceCount = (atomic<int>)iVar7;
    pTStack_10[6]._padding_ = (longlong)(param_1->Image).Dimensions;
    pTStack_10[6].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_10[6].WeakReferenceCount = (atomic<int>)0x0;
    *(FScriptContainerElement **)&pTStack_10[6].SharedReferenceCount =
         (param_1->Image).Image.Buffer.AllocatorInstance.Data;
    (param_1->Image).Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTStack_10[7]._padding_ = (param_1->Image).Image.Buffer.ArrayNum;
    uVar5 = *(undefined4 *)((longlong)&(param_1->Image).Image.Buffer.ArrayMax + 4);
    pTStack_10[7].SharedReferenceCount =
         (atomic<int>)*(undefined4 *)&(param_1->Image).Image.Buffer.ArrayMax;
    pTStack_10[7].WeakReferenceCount = (atomic<int>)uVar5;
    (param_1->Image).Image.Buffer.ArrayNum = 0;
    (param_1->Image).Image.Buffer.ArrayMax = 0;
    pTStack_10[8]._padding_ = (param_1->Image).Image.DimensionX;
    uVar5 = *(undefined4 *)((longlong)&(param_1->Image).Image.DimensionY + 4);
    pTStack_10[8].SharedReferenceCount =
         (atomic<int>)*(undefined4 *)&(param_1->Image).Image.DimensionY;
    pTStack_10[8].WeakReferenceCount = (atomic<int>)uVar5;
    if (pTStack_10 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTStack_10;
    local_18 = pTStack_10 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pFVar2 = (this->Photos).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->Photos).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = (this->Photos).ArrayNum;
  piVar1 = &(this->Photos).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Photos).ArrayNum = iVar7 + 1;
  pFVar2 = (this->Photos).AllocatorInstance.Data;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar7 * 0x10) = local_18;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar7 * 0x10 + 8) = pTStack_10;
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// ComputeSample @ 14cb7bd40

float __thiscall
UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSample
          (TSpatialPhotoSet<float,float> *this,TVector<double> *param_1,TVector<double> *param_2,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3,float *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float *pfVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_38;
  TVector2<double> local_28 [2];
  
  pfVar3 = param_4;
  local_38._0_8_ = *(undefined8 *)param_3;
  local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
  fVar7 = *param_4;
  bVar4 = ComputeSampleLocation(this,param_1,param_2,&local_38,(int *)&param_4,local_28);
  if (!bVar4) {
    return fVar7;
  }
  lVar6 = (longlong)(int)(uint)param_4;
  uVar5 = 0;
  if ((int)(uint)param_4 < (this->Photos).ArrayNum) {
    uVar5 = ~(uint)param_4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  pFVar1 = (this->Photos).AllocatorInstance.Data;
  if (*(longlong *)(pFVar1 + lVar6 * 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  fVar7 = TImageBuilder<float>::BilinearSample<float,0>
                    ((TImageBuilder<float> *)(*(longlong *)(pFVar1 + lVar6 * 0x10) + 0x50),local_28,
                     pfVar3);
  return fVar7;
}

// ComputeSample @ 14cb7be60

TVector<float> * __thiscall
UE::Geometry::TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSample
          (TSpatialPhotoSet<UE::Math::TVector<float>,float> *this,
          TVector<float> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3,TVector<float> *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TVector<float> local_38;
  TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_28;
  TVector2<double> local_18;
  
  pTVar5 = param_4;
  fVar1 = (param_4->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  local_28._0_8_ = *(undefined8 *)param_3;
  local_28._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar3 = ComputeSampleLocation(this,param_1,param_2,&local_28,(int *)&param_4,&local_18);
  if (bVar3) {
    lVar6 = (longlong)(int)(uint)param_4;
    uVar4 = 0;
    if ((int)(uint)param_4 < (this->Photos).ArrayNum) {
      uVar4 = ~(uint)param_4 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<float> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar7 = (this->Photos).AllocatorInstance.Data + lVar6 * 0x10;
    if (*(longlong *)pFVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<float> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pTVar5 = TImageBuilder<UE::Math::TVector<float>_>::BilinearSample<float,0>
                       ((TImageBuilder<UE::Math::TVector<float>_> *)(*(longlong *)pFVar7 + 0x50),
                        &local_38,&local_18,pTVar5);
    fVar1 = (pTVar5->field0_0x0)._s_0.Z;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar5->field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  }
  return __return_storage_ptr__;
}

// ComputeSampleLocation @ 14cb7c300

bool __thiscall
UE::Geometry::TSpatialPhotoSet<float,float>::ComputeSampleLocation
          (TSpatialPhotoSet<float,float> *this,TVector<double> *param_1,TVector<double> *param_2,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3,int *param_4,TVector2<double> *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  FScriptContainerElement *pFVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  int *piVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_120 [16];
  double local_e0;
  
  piVar15 = param_4;
  uVar21 = 0;
  *param_4 = -1;
  (param_5->field0_0x0)._s_0.X = 0.0;
  (param_5->field0_0x0)._s_0.Y = 0.0;
  piVar14 = __real_3ff0000000000000;
  lVar19 = (longlong)(this->Photos).ArrayNum;
  param_4 = __real_3ff0000000000000;
  if (0 < lVar19) {
    lVar20 = 0;
    uVar38 = (undefined4)__real_bfb999999999999a;
    uVar39 = (undefined4)((ulonglong)__real_bfb999999999999a >> 0x20);
    uVar40 = (undefined4)__real_3f81df46a2529d39;
    uVar41 = (undefined4)((ulonglong)__real_3f81df46a2529d39 >> 0x20);
    piVar13 = __real_3ff0000000000000;
    do {
      uVar36 = 0;
      if ((int)uVar21 < (this->Photos).ArrayNum) {
        uVar36 = ~uVar21 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      pFVar3 = (this->Photos).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar3 + lVar20) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      pauVar4 = *(undefined1 (**) [16])(pFVar3 + lVar20);
      if ((*(int *)(pauVar4[4] + 8) != *(int *)(pauVar4[4] + 0xc)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Photo.Dimensions.IsSquare()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\SpatialPhotoSet.h"
                              ,0xa5,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      dVar35 = *(double *)(pauVar4[2] + 8);
      dVar33 = *(double *)pauVar4[2];
      dVar32 = dVar35 + dVar35;
      dVar29 = dVar33 + dVar33;
      dVar35 = (double)piVar14 - (dVar32 * dVar35 + dVar29 * dVar33);
      dVar34 = dVar32 * *(double *)pauVar4[3] + dVar29 * *(double *)(pauVar4[1] + 8);
      dVar33 = dVar32 * *(double *)(pauVar4[1] + 8) - dVar29 * *(double *)pauVar4[3];
      piVar8 = (int *)(dVar34 * (param_2->field0_0x0)._s_0.Y + dVar35 * (param_2->field0_0x0)._s_0.X
                      + dVar33 * (param_2->field0_0x0)._s_0.Z);
      if (((double)piVar8 < (double)CONCAT44(uVar39,uVar38) ||
           (double)piVar8 == (double)CONCAT44(uVar39,uVar38)) && ((double)piVar8 <= (double)piVar13)
         ) {
        dVar29 = *(double *)(pauVar4[3] + 8);
        dVar28 = *(double *)(*pauVar4 + 8);
        local_e0 = *(double *)pauVar4[3];
        auVar1 = pauVar4[1];
        auVar2 = pauVar4[2];
        dVar22 = dVar29 * dVar35 + *(double *)*pauVar4;
        dVar34 = dVar29 * dVar34 + dVar28;
        dVar32 = auVar1._0_8_;
        dVar33 = dVar29 * dVar33 + dVar32;
        local_120 = auVar2;
        local_170 = tan(*(double *)pauVar4[4] * (double)CONCAT44(uVar41,uVar40));
        local_170 = local_170 * dVar29;
        dVar29 = (param_1->field0_0x0)._s_0.Z - dVar32;
        auVar24 = *pauVar4;
        dVar30 = (param_1->field0_0x0)._s_0.X - auVar24._0_8_;
        auVar11._4_8_ = dVar28;
        auVar11._0_4_ = auVar24._4_4_;
        auVar27._0_8_ = auVar11._0_8_ << 0x20;
        auVar27._8_4_ = auVar24._8_4_;
        auVar27._12_4_ = auVar24._12_4_;
        local_148 = auVar27._8_8_;
        uStack_140 = auVar24._8_8_;
        dVar35 = (param_1->field0_0x0)._s_0.Y - local_148;
        auVar23._0_8_ = dVar35 * dVar35;
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar30 * dVar30 + auVar23._0_8_ + dVar29 * dVar29;
        auVar24 = sqrtpd(auVar23,auVar24);
        if (auVar24._0_8_ <= 0.0) {
          dVar30 = 0.0;
          dVar35 = 0.0;
          dVar28 = 0.0;
        }
        else {
          dVar28 = (double)piVar14 / auVar24._0_8_;
          dVar30 = dVar28 * dVar30;
          dVar35 = dVar28 * dVar35;
          dVar28 = dVar28 * dVar29;
        }
        local_150 = auVar2._0_8_;
        dVar26 = local_150 + local_150;
        auVar12._4_8_ = auVar24._8_8_;
        auVar12._0_4_ = auVar2._4_4_;
        auVar25._0_8_ = auVar12._0_8_ << 0x20;
        auVar25._8_4_ = auVar2._8_4_;
        auVar25._12_4_ = auVar2._12_4_;
        local_168 = auVar25._8_8_;
        dVar6 = local_168 + local_168;
        dVar9 = auVar1._8_8_;
        local_138._8_4_ = auVar1._8_4_;
        local_138._0_8_ = dVar9;
        local_138._12_4_ = auVar1._12_4_;
        local_158 = dVar26 * local_e0;
        local_150 = dVar26 * local_150;
        local_168 = dVar6 * local_168;
        dVar10 = dVar6 * dVar9 - local_158;
        dVar29 = (double)piVar14 - (local_168 + local_150);
        local_160 = dVar6 * local_e0;
        dVar7 = local_160 + dVar26 * dVar9;
        dVar31 = dVar35 * dVar7 + dVar30 * dVar29 + dVar28 * dVar10;
        local_178 = dVar32;
        local_128 = dVar32;
        if ((double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) {
LAB_14cb7c903:
          uVar40 = (undefined4)__real_3f81df46a2529d39;
          uVar41 = (undefined4)((ulonglong)__real_3f81df46a2529d39 >> 0x20);
        }
        else {
          dVar31 = ((dVar22 * dVar29 + dVar34 * dVar7 + dVar33 * dVar10) -
                   (dVar29 * *(double *)*pauVar4 + dVar7 * local_148 + dVar10 * dVar32)) / dVar31;
          if (dVar31 < 0.0) goto LAB_14cb7c903;
          local_190 = dVar30 * dVar31 + *(double *)*pauVar4;
          local_188 = dVar35 * dVar31 + local_148;
          local_180 = dVar28 * dVar31 + dVar32;
          cVar18 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_1,&local_190);
          if (cVar18 == '\0') goto LAB_14cb7c903;
          dVar22 = local_190 - dVar22;
          dVar34 = local_188 - dVar34;
          dVar33 = local_180 - dVar33;
          dVar35 = ((double)local_138._0_8_ + (double)local_138._0_8_) * local_e0;
          dVar32 = ((double)local_138._0_8_ + (double)local_138._0_8_) * (double)local_138._0_8_;
          dVar29 = (((double)piVar14 - (dVar32 + local_168)) * dVar34 +
                    (dVar26 * dVar9 - local_160) * dVar22 +
                   (dVar6 * (double)local_120._0_8_ + dVar35) * dVar33) *
                   ((double)piVar14 / local_170);
          dVar35 = ((dVar6 * (double)local_120._0_8_ - dVar35) * dVar34 +
                    (dVar6 * dVar9 + local_158) * dVar22 +
                   ((double)piVar14 - (dVar32 + local_150)) * dVar33) *
                   ((double)piVar14 / local_170);
          uVar36 = SUB84(dVar35,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar37 = (uint)((ulonglong)dVar35 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          if ((double)piVar14 <=
              (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
          goto LAB_14cb7c903;
          uVar40 = (undefined4)__real_3f81df46a2529d39;
          uVar41 = (undefined4)((ulonglong)__real_3f81df46a2529d39 >> 0x20);
          if ((double)CONCAT44(uVar37 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               uVar36 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
              (double)piVar14) {
            dVar35 = ((double)CONCAT44(uVar37,uVar36) + (double)piVar14) * __real_3fe0000000000000;
            (param_5->field0_0x0)._s_0.X =
                 (dVar29 + (double)piVar14) * __real_3fe0000000000000 *
                 (double)*(int *)(pauVar4[4] + 8);
            (param_5->field0_0x0)._s_0.Y = dVar35 * (double)*(int *)(pauVar4[4] + 0xc);
            *piVar15 = uVar21;
            param_4 = piVar8;
          }
        }
        uVar38 = (undefined4)__real_bfb999999999999a;
        uVar39 = (undefined4)((ulonglong)__real_bfb999999999999a >> 0x20);
        piVar13 = param_4;
      }
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x10;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return *piVar15 != -1;
}

// ComputeSampleLocation @ 14cb7c9c0

bool __thiscall
UE::Geometry::TSpatialPhotoSet<UE::Math::TVector<float>,float>::ComputeSampleLocation
          (TSpatialPhotoSet<UE::Math::TVector<float>,float> *this,TVector<double> *param_1,
          TVector<double> *param_2,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
          *param_3,int *param_4,TVector2<double> *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  FScriptContainerElement *pFVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  int *piVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_120 [16];
  double local_e0;
  
  piVar15 = param_4;
  uVar21 = 0;
  *param_4 = -1;
  (param_5->field0_0x0)._s_0.X = 0.0;
  (param_5->field0_0x0)._s_0.Y = 0.0;
  piVar14 = __real_3ff0000000000000;
  lVar19 = (longlong)(this->Photos).ArrayNum;
  param_4 = __real_3ff0000000000000;
  if (0 < lVar19) {
    lVar20 = 0;
    uVar38 = (undefined4)__real_bfb999999999999a;
    uVar39 = (undefined4)((ulonglong)__real_bfb999999999999a >> 0x20);
    uVar40 = (undefined4)__real_3f81df46a2529d39;
    uVar41 = (undefined4)((ulonglong)__real_3f81df46a2529d39 >> 0x20);
    piVar13 = __real_3ff0000000000000;
    do {
      uVar36 = 0;
      if ((int)uVar21 < (this->Photos).ArrayNum) {
        uVar36 = ~uVar21 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      pFVar3 = (this->Photos).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar3 + lVar20) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      pauVar4 = *(undefined1 (**) [16])(pFVar3 + lVar20);
      if ((*(int *)(pauVar4[4] + 8) != *(int *)(pauVar4[4] + 0xc)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Photo.Dimensions.IsSquare()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\SpatialPhotoSet.h"
                              ,0xa5,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        uVar17 = (*pcVar5)();
        return (bool)uVar17;
      }
      dVar35 = *(double *)(pauVar4[2] + 8);
      dVar33 = *(double *)pauVar4[2];
      dVar32 = dVar35 + dVar35;
      dVar29 = dVar33 + dVar33;
      dVar35 = (double)piVar14 - (dVar32 * dVar35 + dVar29 * dVar33);
      dVar34 = dVar32 * *(double *)pauVar4[3] + dVar29 * *(double *)(pauVar4[1] + 8);
      dVar33 = dVar32 * *(double *)(pauVar4[1] + 8) - dVar29 * *(double *)pauVar4[3];
      piVar8 = (int *)(dVar34 * (param_2->field0_0x0)._s_0.Y + dVar35 * (param_2->field0_0x0)._s_0.X
                      + dVar33 * (param_2->field0_0x0)._s_0.Z);
      if (((double)piVar8 < (double)CONCAT44(uVar39,uVar38) ||
           (double)piVar8 == (double)CONCAT44(uVar39,uVar38)) && ((double)piVar8 <= (double)piVar13)
         ) {
        dVar29 = *(double *)(pauVar4[3] + 8);
        dVar28 = *(double *)(*pauVar4 + 8);
        local_e0 = *(double *)pauVar4[3];
        auVar1 = pauVar4[1];
        auVar2 = pauVar4[2];
        dVar22 = dVar29 * dVar35 + *(double *)*pauVar4;
        dVar34 = dVar29 * dVar34 + dVar28;
        dVar32 = auVar1._0_8_;
        dVar33 = dVar29 * dVar33 + dVar32;
        local_120 = auVar2;
        local_170 = tan(*(double *)pauVar4[4] * (double)CONCAT44(uVar41,uVar40));
        local_170 = local_170 * dVar29;
        dVar29 = (param_1->field0_0x0)._s_0.Z - dVar32;
        auVar24 = *pauVar4;
        dVar30 = (param_1->field0_0x0)._s_0.X - auVar24._0_8_;
        auVar11._4_8_ = dVar28;
        auVar11._0_4_ = auVar24._4_4_;
        auVar27._0_8_ = auVar11._0_8_ << 0x20;
        auVar27._8_4_ = auVar24._8_4_;
        auVar27._12_4_ = auVar24._12_4_;
        local_148 = auVar27._8_8_;
        uStack_140 = auVar24._8_8_;
        dVar35 = (param_1->field0_0x0)._s_0.Y - local_148;
        auVar23._0_8_ = dVar35 * dVar35;
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar30 * dVar30 + auVar23._0_8_ + dVar29 * dVar29;
        auVar24 = sqrtpd(auVar23,auVar24);
        if (auVar24._0_8_ <= 0.0) {
          dVar30 = 0.0;
          dVar35 = 0.0;
          dVar28 = 0.0;
        }
        else {
          dVar28 = (double)piVar14 / auVar24._0_8_;
          dVar30 = dVar28 * dVar30;
          dVar35 = dVar28 * dVar35;
          dVar28 = dVar28 * dVar29;
        }
        local_150 = auVar2._0_8_;
        dVar26 = local_150 + local_150;
        auVar12._4_8_ = auVar24._8_8_;
        auVar12._0_4_ = auVar2._4_4_;
        auVar25._0_8_ = auVar12._0_8_ << 0x20;
        auVar25._8_4_ = auVar2._8_4_;
        auVar25._12_4_ = auVar2._12_4_;
        local_168 = auVar25._8_8_;
        dVar6 = local_168 + local_168;
        dVar9 = auVar1._8_8_;
        local_138._8_4_ = auVar1._8_4_;
        local_138._0_8_ = dVar9;
        local_138._12_4_ = auVar1._12_4_;
        local_158 = dVar26 * local_e0;
        local_150 = dVar26 * local_150;
        local_168 = dVar6 * local_168;
        dVar10 = dVar6 * dVar9 - local_158;
        dVar29 = (double)piVar14 - (local_168 + local_150);
        local_160 = dVar6 * local_e0;
        dVar7 = local_160 + dVar26 * dVar9;
        dVar31 = dVar35 * dVar7 + dVar30 * dVar29 + dVar28 * dVar10;
        local_178 = dVar32;
        local_128 = dVar32;
        if ((double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) {
LAB_14cb7cfc3:
          uVar40 = (undefined4)__real_3f81df46a2529d39;
          uVar41 = (undefined4)((ulonglong)__real_3f81df46a2529d39 >> 0x20);
        }
        else {
          dVar31 = ((dVar22 * dVar29 + dVar34 * dVar7 + dVar33 * dVar10) -
                   (dVar29 * *(double *)*pauVar4 + dVar7 * local_148 + dVar10 * dVar32)) / dVar31;
          if (dVar31 < 0.0) goto LAB_14cb7cfc3;
          local_190 = dVar30 * dVar31 + *(double *)*pauVar4;
          local_188 = dVar35 * dVar31 + local_148;
          local_180 = dVar28 * dVar31 + dVar32;
          cVar18 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_1,&local_190);
          if (cVar18 == '\0') goto LAB_14cb7cfc3;
          dVar22 = local_190 - dVar22;
          dVar34 = local_188 - dVar34;
          dVar33 = local_180 - dVar33;
          dVar35 = ((double)local_138._0_8_ + (double)local_138._0_8_) * local_e0;
          dVar32 = ((double)local_138._0_8_ + (double)local_138._0_8_) * (double)local_138._0_8_;
          dVar29 = (((double)piVar14 - (dVar32 + local_168)) * dVar34 +
                    (dVar26 * dVar9 - local_160) * dVar22 +
                   (dVar6 * (double)local_120._0_8_ + dVar35) * dVar33) *
                   ((double)piVar14 / local_170);
          dVar35 = ((dVar6 * (double)local_120._0_8_ - dVar35) * dVar34 +
                    (dVar6 * dVar9 + local_158) * dVar22 +
                   ((double)piVar14 - (dVar32 + local_150)) * dVar33) *
                   ((double)piVar14 / local_170);
          uVar36 = SUB84(dVar35,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar37 = (uint)((ulonglong)dVar35 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          if ((double)piVar14 <=
              (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
          goto LAB_14cb7cfc3;
          uVar40 = (undefined4)__real_3f81df46a2529d39;
          uVar41 = (undefined4)((ulonglong)__real_3f81df46a2529d39 >> 0x20);
          if ((double)CONCAT44(uVar37 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               uVar36 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
              (double)piVar14) {
            dVar35 = ((double)CONCAT44(uVar37,uVar36) + (double)piVar14) * __real_3fe0000000000000;
            (param_5->field0_0x0)._s_0.X =
                 (dVar29 + (double)piVar14) * __real_3fe0000000000000 *
                 (double)*(int *)(pauVar4[4] + 8);
            (param_5->field0_0x0)._s_0.Y = dVar35 * (double)*(int *)(pauVar4[4] + 0xc);
            *piVar15 = uVar21;
            param_4 = piVar8;
          }
        }
        uVar38 = (undefined4)__real_bfb999999999999a;
        uVar39 = (undefined4)((ulonglong)__real_bfb999999999999a >> 0x20);
        piVar13 = param_4;
      }
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x10;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return *piVar15 != -1;
}

// Empty @ 14cb88510

void __thiscall
UE::Geometry::TSpatialPhotoSet<float,float>::Empty(TSpatialPhotoSet<float,float> *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *)
             (this->Photos).AllocatorInstance.Data,(this->Photos).ArrayNum);
  piVar1 = &(this->Photos).ArrayMax;
  (this->Photos).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Empty @ 14cb88560

void __thiscall
UE::Geometry::TSpatialPhotoSet<UE::Math::TVector<float>,float>::Empty
          (TSpatialPhotoSet<UE::Math::TVector<float>,float> *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->Photos).AllocatorInstance.Data,(this->Photos).ArrayNum);
  piVar1 = &(this->Photos).ArrayMax;
  (this->Photos).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Get @ 14cb941f0

TSpatialPhoto<float> * __thiscall
UE::Geometry::TSpatialPhotoSet<float,float>::Get(TSpatialPhotoSet<float,float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSpatialPhoto<float> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  uVar3 = 0;
  if (param_1 < (this->Photos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSpatialPhoto<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pFVar5 = (this->Photos).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(longlong *)pFVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSpatialPhoto<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TSpatialPhoto<float> **)pFVar5;
}

