// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 20

// operator() @ 14337c140

double * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::operator()
          (TDynamicVectorN<double,2> *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + param_1 * 2;
  return (double *)
         (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 8);
}

// operator() @ 14337c170

double * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::operator()
          (TDynamicVectorN<double,2> *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + param_1 * 2;
  return (double *)
         (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 8);
}

// Add @ 14337cc20

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::Add
          (TDynamicVectorN<double,2> *this,ElementVectorN *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (this->Data).CurBlockUsed;
  if (uVar2 == 0x200) {
    if ((this->Data).CurBlock == (this->Data).Blocks.ArrayNum - 1U) {
      TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
    }
    (this->Data).CurBlock = (this->Data).CurBlock + 1;
    uVar2 = 0;
    (this->Data).CurBlockUsed = 0;
  }
  *(double *)
   (*(longlong *)
     ((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)(this->Data).CurBlock * 8) +
   (longlong)(int)uVar2 * 8) = param_1->Data[0];
  puVar1 = &(this->Data).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
  uVar2 = (this->Data).CurBlockUsed;
  if (uVar2 == 0x200) {
    if ((this->Data).CurBlock == (this->Data).Blocks.ArrayNum - 1U) {
      TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
    }
    (this->Data).CurBlock = (this->Data).CurBlock + 1;
    uVar2 = 0;
    (this->Data).CurBlockUsed = 0;
  }
  puVar1 = &(this->Data).CurBlockUsed;
  *(double *)
   (*(longlong *)
     ((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)(this->Data).CurBlock * 8) +
   (longlong)(int)uVar2 * 8) = param_1->Data[1];
  *puVar1 = *puVar1 + 1;
  return;
}

// AsIndex2 @ 1433890a0

FIndex2i __thiscall
UE::Geometry::TDynamicVectorN<double,2>::AsIndex2(TDynamicVectorN<double,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FIndex2i_u_0 FVar3;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  pFVar1 = (this->Data).Blocks.AllocatorInstance.Data;
  lVar2 = *(longlong *)(pFVar1 + (ulonglong)((in_R8D & 0x7fffffff) >> 8) * 8);
  *(int *)CONCAT44(in_register_00000014,param_1) =
       (int)*(double *)
             (*(longlong *)(pFVar1 + (ulonglong)((in_R8D & 0x7fffffff) >> 8) * 8) +
             (ulonglong)(in_R8D * 2 & 0x1ff) * 8);
  FVar3._s_0.B = in_register_00000014;
  FVar3._s_0.A = param_1;
  *(int *)(CONCAT44(in_register_00000014,param_1) + 4) =
       (int)*(double *)(lVar2 + (ulonglong)(in_R8D * 2 + 1 & 0x1ff) * 8);
  return (FIndex2i)FVar3;
}

// AsIndex3 @ 1433890f0

FIndex3i * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::AsIndex3
          (TDynamicVectorN<double,2> *this,FIndex3i *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FIndex3i *pFVar7;
  
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("N >= 3",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\DynamicVector.h"
                     ,0x222,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIndex3i *)(*pcVar4)();
    return pFVar7;
  }
  pFVar1 = (this->Data).Blocks.AllocatorInstance.Data;
  uVar5 = param_1 * 2;
  lVar2 = *(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (int)*(double *)
             (*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
             (ulonglong)(uVar5 & 0x1ff) * 8);
  lVar3 = *(longlong *)(pFVar1 + (ulonglong)(uVar5 + 2 >> 9) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (int)*(double *)(lVar2 + (ulonglong)(uVar5 + 1 & 0x1ff) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.C =
       (int)*(double *)(lVar3 + (ulonglong)(uVar5 + 2 & 0x1ff) * 8);
  return __return_storage_ptr__;
}

// AsIndex4 @ 1433891b0

FIndex4i * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::AsIndex4
          (TDynamicVectorN<double,2> *this,FIndex4i *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FIndex4i *pFVar7;
  
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("N >= 4",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\DynamicVector.h"
                     ,0x22a,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIndex4i *)(*pcVar4)();
    return pFVar7;
  }
  pFVar1 = (this->Data).Blocks.AllocatorInstance.Data;
  uVar5 = param_1 * 2;
  lVar2 = *(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (int)*(double *)
             (*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
             (ulonglong)(uVar5 & 0x1ff) * 8);
  lVar3 = *(longlong *)(pFVar1 + (ulonglong)(uVar5 + 2 >> 9) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (int)*(double *)(lVar2 + (ulonglong)(uVar5 + 1 & 0x1ff) * 8);
  lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar5 + 3 >> 9) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.C =
       (int)*(double *)(lVar3 + (ulonglong)(uVar5 + 2 & 0x1ff) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.D =
       (int)*(double *)(lVar2 + (ulonglong)(uVar5 + 3 & 0x1ff) * 8);
  return __return_storage_ptr__;
}

// AsVector2 @ 143389290

TVector2<double> * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::AsVector2
          (TDynamicVectorN<double,2> *this,TVector2<double> *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Data).Blocks.AllocatorInstance.Data;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
        (ulonglong)(param_1 * 2 & 0x1ff) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
        (ulonglong)(param_1 * 2 + 1 & 0x1ff) * 8);
  return __return_storage_ptr__;
}

// AsVector3 @ 1433892e0

TVector<double> * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::AsVector3
          (TDynamicVectorN<double,2> *this,TVector<double> *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("N >= 3",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\DynamicVector.h"
                     ,0x213,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar2)();
    return pTVar5;
  }
  pFVar1 = (this->Data).Blocks.AllocatorInstance.Data;
  uVar3 = param_1 * 2;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
        (ulonglong)(uVar3 & 0x1ff) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
        (ulonglong)(uVar3 + 1 & 0x1ff) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
        (ulonglong)(uVar3 + 2 & 0x1ff) * 8);
  return __return_storage_ptr__;
}

// Clear @ 14338da40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::TDynamicVectorN<double,2>::Clear(TDynamicVectorN<double,2> *this)

{
  TDynamicVector<double,512>::TruncateBlocks(&this->Data,1,No);
  (this->Data).CurBlock = 0;
  (this->Data).CurBlockUsed = 0;
  if ((this->Data).Blocks.ArrayNum == 0) {
    TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
    return;
  }
  return;
}

// Fill @ 14339d1f0

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::Fill(TDynamicVectorN<double,2> *this,double *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = (this->Data).Blocks.ArrayNum;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 0;
      if (uVar4 < uVar1 - 1) {
        uVar6 = 0x200;
LAB_14339d134:
        lVar7 = (longlong)(int)uVar4;
        iVar3 = 2;
        do {
          lVar2 = (longlong)(int)uVar5;
          uVar5 = uVar5 + 4;
          *(double *)
           (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + lVar7 * 8) + lVar2 * 8) =
               *param_1;
          *(double *)
           (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + lVar7 * 8) + -8 +
           (longlong)iVar3 * 8) = *param_1;
          *(double *)
           (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + lVar7 * 8) +
           (longlong)iVar3 * 8) = *param_1;
          lVar2 = (longlong)iVar3;
          iVar3 = iVar3 + 4;
          *(double *)
           (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + lVar7 * 8) + 8 + lVar2 * 8) =
               *param_1;
        } while (uVar5 < uVar6 - 3);
        for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
LAB_14339d1a0:
          *(double *)
           (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
           (longlong)(int)uVar5 * 8) = *param_1;
        }
      }
      else {
        uVar6 = ((this->Data).CurBlock - (uVar1 - 1)) * 0x200 + (this->Data).CurBlockUsed;
        if (3 < uVar6) goto LAB_14339d134;
        if (uVar6 != 0) goto LAB_14339d1a0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

// GetBlockSize @ 1433a28e0

int __thiscall
UE::Geometry::TDynamicVectorN<double,2>::GetBlockSize(TDynamicVectorN<double,2> *this)

{
  return 0x200;
}

// GetByteCount @ 1433a2d30

ulong64 __thiscall
UE::Geometry::TDynamicVectorN<double,2>::GetByteCount(TDynamicVectorN<double,2> *this)

{
  return (longlong)((this->Data).Blocks.ArrayNum << 9) << 3;
}

// GetLength @ 1433a8c20

ulong64 __thiscall
UE::Geometry::TDynamicVectorN<double,2>::GetLength(TDynamicVectorN<double,2> *this)

{
  return (ulonglong)((this->Data).CurBlock * 0x200 + (this->Data).CurBlockUsed >> 1);
}

// InsertAt @ 1433ba030

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::InsertAt
          (TDynamicVectorN<double,2> *this,ElementVectorN *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_2 * 2;
  uVar3 = uVar2 + 1;
  uVar5 = (this->Data).CurBlock;
  uVar4 = (this->Data).CurBlockUsed;
  uVar6 = uVar5 * 0x200 + uVar4;
  if (uVar3 == uVar6) {
    if (uVar4 == 0x200) {
      if (uVar5 == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar4 = 0;
      uVar5 = (this->Data).CurBlock;
      (this->Data).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar3 <= uVar6) {
      *(double *)
       (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar2 + 1 & 0x1ff) * 8) = param_1->Data[1];
      goto LAB_1433ba116;
    }
    TDynamicVector<double,512>::Resize(&this->Data,uVar3);
    uVar4 = (this->Data).CurBlockUsed;
    if (uVar4 == 0x200) {
      if ((this->Data).CurBlock == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar4 = 0;
      (this->Data).CurBlockUsed = 0;
    }
    uVar5 = (this->Data).CurBlock;
  }
  *(double *)
   (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
   (longlong)(int)uVar4 * 8) = param_1->Data[1];
  puVar1 = &(this->Data).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
LAB_1433ba116:
  uVar3 = (this->Data).CurBlock;
  puVar1 = &(this->Data).CurBlockUsed;
  uVar4 = (this->Data).CurBlockUsed;
  uVar5 = uVar3 * 0x200 + uVar4;
  if (uVar2 == uVar5) {
    if (uVar4 == 0x200) {
      if (uVar3 == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar4 = 0;
      uVar3 = (this->Data).CurBlock;
      (this->Data).CurBlockUsed = 0;
    }
    *(double *)
     (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)uVar4 * 8) = param_1->Data[0];
    *puVar1 = (this->Data).CurBlockUsed + 1;
  }
  else if (uVar5 < uVar2) {
    TDynamicVector<double,512>::Resize(&this->Data,uVar2);
    uVar3 = *puVar1;
    if (uVar3 == 0x200) {
      if ((this->Data).CurBlock == (this->Data).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
      }
      (this->Data).CurBlock = (this->Data).CurBlock + 1;
      uVar3 = 0;
      *puVar1 = 0;
    }
    *(double *)
     (*(longlong *)
       ((this->Data).Blocks.AllocatorInstance.Data + (longlong)(int)(this->Data).CurBlock * 8) +
     (longlong)(int)uVar3 * 8) = param_1->Data[0];
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(double *)
     (*(longlong *)
       ((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)((param_2 & 0x7fffffff) >> 8) * 8) +
     (ulonglong)(uVar2 & 0x1ff) * 8) = param_1->Data[0];
  }
  return;
}

// IsEmpty @ 1433bc240

bool __thiscall UE::Geometry::TDynamicVectorN<double,2>::IsEmpty(TDynamicVectorN<double,2> *this)

{
  if (((this->Data).CurBlock == 0) && ((this->Data).CurBlockUsed == 0)) {
    return true;
  }
  return false;
}

// PopBack @ 1433c0f10

void __thiscall UE::Geometry::TDynamicVectorN<double,2>::PopBack(TDynamicVectorN<double,2> *this)

{
  longlong lVar1;
  
  lVar1 = 2;
  do {
    PopBack(this);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// Resize @ 1433c6de0

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::Resize(TDynamicVectorN<double,2> *this,uint param_1)

{
  TDynamicVector<double,512>::Resize(&this->Data,param_1 * 2);
  return;
}

// Resize @ 1433c6df0

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::Resize
          (TDynamicVectorN<double,2> *this,uint param_1,double *param_2)

{
  TDynamicVector<double,512>::Resize(&this->Data,param_1 * 2,param_2);
  return;
}

// SetVector2 @ 1433ce990

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::SetVector2
          (TDynamicVectorN<double,2> *this,uint param_1,TVector2<double> *param_2)

{
  *(double *)
   (*(longlong *)
     ((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
   (ulonglong)(param_1 * 2 & 0x1ff) * 8) = (param_2->field0_0x0)._s_0.X;
  *(double *)
   (*(longlong *)
     ((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
   (ulonglong)(param_1 * 2 + 1 & 0x1ff) * 8) = (param_2->field0_0x0)._s_0.Y;
  return;
}

// SetVector3 @ 1433ce9e0

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::SetVector3
          (TDynamicVectorN<double,2> *this,uint param_1,TVector<double> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("N >= 3",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\DynamicVector.h"
                     ,0x204,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = param_1 * 2;
  *(double *)
   (*(longlong *)
     ((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
   (ulonglong)(uVar2 & 0x1ff) * 8) = (param_2->field0_0x0)._s_0.X;
  *(double *)
   (*(longlong *)
     ((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)((param_1 & 0x7fffffff) >> 8) * 8) +
   (ulonglong)(uVar2 + 1 & 0x1ff) * 8) = (param_2->field0_0x0)._s_0.Y;
  *(double *)
   (*(longlong *)((this->Data).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 2 >> 9) * 8) +
   (ulonglong)(uVar2 + 2 & 0x1ff) * 8) = (param_2->field0_0x0)._s_0.Z;
  return;
}

