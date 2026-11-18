// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// FOrderedPoints @ 14caca0f0

FOrderedPoints * __thiscall
UCurveControlPointsMechanic::FOrderedPoints::FOrderedPoints
          (FOrderedPoints *this,FOrderedPoints *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>::
  TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>
            (&this->Vertices,&param_1->Vertices);
  pTVar1 = &this->Sequence;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Sequence).ArrayMax;
  iVar3 = (param_1->Sequence).ArrayNum;
  _Src = (param_1->Sequence).AllocatorInstance.Data;
  (this->Sequence).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  *(undefined8 *)&this->PointIDToSequencePosition = 0;
  *(undefined8 *)&(this->PointIDToSequencePosition).field_0x8 = 0;
  *(undefined8 *)&(this->PointIDToSequencePosition).field_0x20 = 0;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x28 = 0;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x34 = 0;
  *(undefined8 *)&(this->PointIDToSequencePosition).field_0x40 = 0;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x48 = 0;
  return this;
}

// FOrderedPoints @ 14caca1c0

FOrderedPoints * __thiscall
UCurveControlPointsMechanic::FOrderedPoints::FOrderedPoints
          (FOrderedPoints *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  *(undefined8 *)&this->Vertices = 0;
  *(undefined8 *)&(this->Vertices).field_0x8 = 0;
  *(undefined8 *)&(this->Vertices).field_0x20 = 0;
  *(undefined4 *)&(this->Vertices).field_0x28 = 0;
  *(undefined4 *)&(this->Vertices).field_0x2c = 0x80;
  *(undefined4 *)&(this->Vertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Vertices).field_0x34 = 0;
  (this->Sequence).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).ArrayNum = 0;
  (this->Sequence).ArrayMax = 0;
  *(undefined8 *)&this->PointIDToSequencePosition = 0;
  *(undefined8 *)&(this->PointIDToSequencePosition).field_0x8 = 0;
  *(undefined8 *)&(this->PointIDToSequencePosition).field_0x20 = 0;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x28 = 0;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x34 = 0;
  *(undefined8 *)&(this->PointIDToSequencePosition).field_0x40 = 0;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x48 = 0;
  ReInitialize(this,param_1);
  return this;
}

// AppendPoint @ 14caea0a0

int __thiscall
UCurveControlPointsMechanic::FOrderedPoints::AppendPoint
          (FOrderedPoints *this,TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res8 [2];
  TPairInitializer<int_const_&,int_&&> local_res18;
  int local_28 [2];
  int *local_20;
  int *local_18;
  
  local_28[0] = TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>::Add
                          (&this->Vertices,param_1);
  pFVar2 = (this->Sequence).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Sequence).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->Sequence).ArrayNum;
  piVar1 = &(this->Sequence).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Sequence).AllocatorInstance,piVar1);
  }
  (this->Sequence).ArrayNum = iVar5 + 1;
  *(int *)((this->Sequence).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_28[0];
  local_res8[0] = (this->Sequence).ArrayNum + -1;
  local_20 = local_28;
  local_18 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->PointIDToSequencePosition,&local_res18,(bool *)&local_20);
  return local_28[0];
}

// Empty @ 14cb045c0

void __thiscall UCurveControlPointsMechanic::FOrderedPoints::Empty(FOrderedPoints *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  
  puVar1 = &(this->Vertices).field_0xc;
  *(undefined4 *)&(this->Vertices).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Vertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Vertices).field_0x34 = 0;
  iVar3 = *(int *)&(this->Vertices).field_0x2c;
  *(undefined4 *)&(this->Vertices).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Vertices).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Vertices).field_0x10,0);
  }
  piVar2 = &(this->Sequence).ArrayMax;
  (this->Sequence).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Sequence).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->PointIDToSequencePosition;
  bVar4 = 1 < *(int *)&(this->PointIDToSequencePosition).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->PointIDToSequencePosition).field_0xc;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x34 = 0;
  iVar3 = *(int *)&(this->PointIDToSequencePosition).field_0x2c;
  *(undefined4 *)&(this->PointIDToSequencePosition).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PointIDToSequencePosition).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PointIDToSequencePosition).field_0x10
               ,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->PointIDToSequencePosition).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  return;
}

// First @ 14cb0a4c0

int __thiscall UCurveControlPointsMechanic::FOrderedPoints::First(FOrderedPoints *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (0 < (this->Sequence).ArrayNum) {
    return *(int *)(this->Sequence).AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return *(int *)(this->Sequence).AllocatorInstance.Data;
}

// GetPointCoordinates @ 14cb11a70

TVector<double> * __thiscall
UCurveControlPointsMechanic::FOrderedPoints::GetPointCoordinates
          (FOrderedPoints *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  undefined1 *puVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Vertices).field_0x28)) {
    puVar7 = *(undefined1 **)&(this->Vertices).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Vertices).field_0x10;
    }
    if ((*(uint *)(puVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14cb11adb;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidPoint(PointID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                     ,0x87,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TVector<double> *)(*pcVar3)();
    return pTVar6;
  }
LAB_14cb11adb:
  pdVar1 = (double *)(*(longlong *)&this->Vertices + (longlong)param_1 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)&this->Vertices + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetPointCoordinatesAt @ 14cb11b10

TVector<double> * __thiscall
UCurveControlPointsMechanic::FOrderedPoints::GetPointCoordinatesAt
          (FOrderedPoints *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (param_1 < (this->Sequence).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  lVar8 = (longlong)*(int *)((this->Sequence).AllocatorInstance.Data + (longlong)param_1 * 4);
  pdVar1 = (double *)(*(longlong *)&this->Vertices + lVar8 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)&this->Vertices + 0x10 + lVar8 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetPointIDAt @ 14cb11bb0

int __thiscall
UCurveControlPointsMechanic::FOrderedPoints::GetPointIDAt(FOrderedPoints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Sequence).ArrayNum) {
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
  return *(int *)((this->Sequence).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// InsertPointAt @ 14cb20f10

int __thiscall
UCurveControlPointsMechanic::FOrderedPoints::InsertPointAt
          (FOrderedPoints *this,int param_1,TVector<double> *param_2,int *param_3)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int local_res8 [2];
  int local_res10 [6];
  int *local_58;
  int *local_50;
  FSparseArrayAllocationInfo local_48;
  
  uVar10 = (ulonglong)param_1;
  local_res10[0] = param_1;
  if (param_1 < (this->Sequence).ArrayNum) {
    lVar11 = uVar10 << 2;
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->Sequence).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)&this->PointIDToSequencePosition,
                           *(int *)((this->Sequence).AllocatorInstance.Data + lVar11));
      uVar10 = (ulonglong)(uVar9 + 1);
      lVar11 = lVar11 + 4;
      *piVar7 = *piVar7 + 1;
    } while ((int)(uVar9 + 1) < (this->Sequence).ArrayNum);
  }
  if (param_3 == (int *)0x0) {
    local_res8[0] =
         TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>::Add
                   (&this->Vertices,param_2);
  }
  else {
    pFVar8 = TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                       ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)this,&local_48,
                        *param_3);
    pdVar1 = pFVar8->Pointer;
    if (pdVar1 != (double *)0x0) {
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      *pdVar1 = (param_2->field0_0x0)._s_0.X;
      pdVar1[1] = dVar3;
      pdVar1[2] = (param_2->field0_0x0)._s_0.Z;
    }
    local_res8[0] = *param_3;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Insert(&this->Sequence,local_res8,local_res10[0]);
  local_58 = local_res8;
  local_50 = local_res10;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->PointIDToSequencePosition,
             (TPairInitializer<int_const_&,int_const_&> *)(local_res10 + 4),(bool *)&local_58);
  return local_res8[0];
}

// Last @ 14cb233d0

int __thiscall UCurveControlPointsMechanic::FOrderedPoints::Last(FOrderedPoints *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (this->Sequence).ArrayNum;
  uVar5 = iVar4 - 1;
  uVar3 = 0;
  if ((int)uVar5 < iVar4) {
    uVar3 = ~uVar5 >> 0x1f;
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
  return *(int *)((this->Sequence).AllocatorInstance.Data +
                 (longlong)(this->Sequence).ArrayNum * 4 + -4);
}

// ReInitialize @ 14cb2b3a0

void __thiscall
UCurveControlPointsMechanic::FOrderedPoints::ReInitialize
          (FOrderedPoints *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_res8 [4];
  int local_68 [2];
  FSparseArrayAllocationInfo local_60;
  int *local_50;
  uint *local_48;
  
  Empty(this);
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)this,param_1->ArrayNum);
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->Sequence).ArrayMax;
  if ((this->Sequence).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&(this->Sequence).AllocatorInstance,(this->Sequence).ArrayNum,piVar1);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->PointIDToSequencePosition,param_1->ArrayNum);
  iVar11 = param_1->ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar11) {
    do {
      uVar3 = local_res8[0];
      uVar9 = 0;
      if ((int)local_res8[0] < iVar11) {
        uVar9 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)&(this->Vertices).field_0x34;
      pFVar2 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x18;
      if (iVar11 == 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Vertices).field_0x8,
                            (int *)&(this->Vertices).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Vertices).field_0x10,false);
      }
      else {
        iVar10 = *(int *)&(this->Vertices).field_0x30;
        iVar11 = iVar11 + -1;
        lVar5 = *(longlong *)&this->Vertices;
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x18);
        *(int *)&(this->Vertices).field_0x30 = iVar4;
        *(int *)&(this->Vertices).field_0x34 = iVar11;
        if (iVar11 != 0) {
          *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x18) = 0xffffffff;
        }
      }
      TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)this,&local_60,iVar10);
      if (local_60.Pointer != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)(pFVar2 + 8);
        *(undefined8 *)local_60.Pointer = *(undefined8 *)pFVar2;
        *(undefined8 *)((longlong)local_60.Pointer + 8) = uVar7;
        *(undefined8 *)((longlong)local_60.Pointer + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
      }
      pFVar2 = (this->Sequence).AllocatorInstance.Data;
      local_68[0] = local_60.Index;
      if (((pFVar2 <= (FScriptContainerElement *)local_68) &&
          ((FScriptContainerElement *)local_68 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->Sequence).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->Sequence).AllocatorInstance,piVar1);
        (this->Sequence).ArrayNum = iVar11;
      }
      (this->Sequence).ArrayNum = iVar11 + 1;
      *(int *)((this->Sequence).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_68[0];
      local_50 = local_68;
      local_48 = local_res8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->PointIDToSequencePosition,
                 (TPairInitializer<int_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_50);
      iVar11 = param_1->ArrayNum;
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar11);
  }
  return;
}

// RemovePointAt @ 14cb2ea70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UCurveControlPointsMechanic::FOrderedPoints::RemovePointAt(FOrderedPoints *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  
  piVar1 = &(this->Sequence).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SequencePosition >= 0 && SequencePosition < Sequence.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CurveControlPointsMechanic.cpp"
                         ,0x55b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar12 = param_1 + 1;
  if ((int)uVar12 < *piVar1) {
    lVar13 = (longlong)(int)uVar12 * 4;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->Sequence).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)&this->PointIDToSequencePosition,
                           *(int *)((this->Sequence).AllocatorInstance.Data + lVar13));
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
      *piVar9 = *piVar9 + -1;
    } while ((int)uVar12 < *piVar1);
  }
  uVar12 = 0;
  if (param_1 < (this->Sequence).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  puVar11 = &(this->Vertices).field_0x10;
  lVar13 = *(longlong *)&this->Vertices;
  iVar6 = *(int *)((this->Sequence).AllocatorInstance.Data + (longlong)param_1 * 4);
  bVar4 = (byte)iVar6 & 0x1f;
  uVar12 = 1 << bVar4 | 1U >> 0x20 - bVar4;
  if (((iVar6 < 0) || (*(int *)&(this->Vertices).field_0x28 <= iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  puVar14 = *(undefined1 **)&(this->Vertices).field_0x20;
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = puVar11;
  }
  if (((*(uint *)(puVar14 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) & uVar12)
       == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (*(int *)&(this->Vertices).field_0x34 != 0) {
    *(int *)(lVar13 + (longlong)*(int *)&(this->Vertices).field_0x30 * 0x18) = iVar6;
  }
  puVar2 = (undefined4 *)(lVar13 + (longlong)iVar6 * 0x18);
  uVar8 = 0xffffffff;
  *puVar2 = 0xffffffff;
  if (0 < *(int *)&(this->Vertices).field_0x34) {
    uVar8 = *(undefined4 *)&(this->Vertices).field_0x30;
  }
  puVar2[1] = uVar8;
  puVar14 = &(this->Vertices).field_0x34;
  *(int *)puVar14 = *(int *)puVar14 + 1;
  *(int *)&(this->Vertices).field_0x30 = iVar6;
  if (((iVar6 < 0) || (*(int *)&(this->Vertices).field_0x28 <= iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  puVar14 = *(undefined1 **)&(this->Vertices).field_0x20;
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = puVar11;
  }
  *(uint *)(puVar14 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) =
       *(uint *)(puVar14 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) & ~uVar12;
  TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(&this->Sequence,param_1,Default);
  if (*(int *)&(this->PointIDToSequencePosition).field_0x8 !=
      *(int *)&(this->PointIDToSequencePosition).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PointIDToSequencePosition).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PointIDToSequencePosition).field_0x38;
    }
    iVar10 = *(int *)(puVar11 +
                     ((longlong)*(int *)&(this->PointIDToSequencePosition).field_0x48 - 1U &
                     (longlong)iVar6) * 4);
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->PointIDToSequencePosition + (longlong)iVar10 * 0x10) ==
            iVar6) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          RemoveByIndex((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)&this->PointIDToSequencePosition,iVar10);
          return iVar6;
        }
        iVar10 = *(int *)(*(longlong *)&this->PointIDToSequencePosition + 8 +
                         (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  return iVar6;
}

