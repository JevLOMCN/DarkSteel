// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 167

// GetTriVertices<UE::Math::TVector<double>_> @ 14334cbd0

void __thiscall
UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
          (FDynamicMesh3 *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar2 = *(uint *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  lVar3 = lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc;
  uVar6 = (ulonglong)(uVar2 & 0x1ff);
  lVar4 = *(longlong *)
           ((this->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + uVar6 * 0x18);
  dVar5 = pdVar1[1];
  (param_2->field0_0x0)._s_0.X = *pdVar1;
  (param_2->field0_0x0)._s_0.Y = dVar5;
  (param_2->field0_0x0)._s_0.Z = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
  uVar2 = *(uint *)(lVar3 + 4);
  uVar6 = (ulonglong)(uVar2 & 0x1ff);
  lVar4 = *(longlong *)
           ((this->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + uVar6 * 0x18);
  dVar5 = pdVar1[1];
  (param_3->field0_0x0)._s_0.X = *pdVar1;
  (param_3->field0_0x0)._s_0.Y = dVar5;
  (param_3->field0_0x0)._s_0.Z = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
  uVar2 = *(uint *)(lVar3 + 8);
  uVar6 = (ulonglong)(uVar2 & 0x1ff);
  lVar3 = *(longlong *)
           ((this->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  dVar5 = pdVar1[1];
  (param_4->field0_0x0)._s_0.X = *pdVar1;
  (param_4->field0_0x0)._s_0.Y = dVar5;
  (param_4->field0_0x0)._s_0.Z = *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  return;
}

// operator() @ 143371460

FIndex2i __thiscall
`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint in_R8D;
  int iVar12;
  int iVar13;
  int iVar14;
  
  FVar8._s_0.B = in_register_00000014;
  FVar8._s_0.A = param_1;
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)((longlong)this + 8);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(in_R8D >> 9) * 8);
  uVar4 = *(undefined8 *)(lVar3 + (ulonglong)(in_R8D & 0x1ff) * 0x10);
  uVar5 = *(ulonglong *)(lVar3 + 8 + (ulonglong)(in_R8D & 0x1ff) * 0x10);
  iVar13 = (int)((ulonglong)uVar4 >> 0x20);
  uVar10 = uVar5 >> 0x20;
  iVar12 = (int)uVar4;
  uVar11 = 0xffffffff;
  iVar14 = iVar13;
  if ((iVar12 != iVar1) && (iVar14 = -1, iVar13 == iVar1)) {
    iVar14 = iVar12;
  }
  uVar9 = (uint)(uVar5 >> 0x20);
  if (uVar9 != 0xffffffff) {
    uVar7 = (ulonglong)(uVar9 & 0x1ff);
    lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (uVar5 >> 0x29) * 8);
    lVar3 = lVar6 + uVar7 * 0xc;
    iVar12 = *(int *)(lVar6 + uVar7 * 0xc);
    if ((((iVar12 == iVar1) && (*(int *)(lVar3 + 4) == iVar14)) ||
        ((*(int *)(lVar3 + 4) == iVar1 && (*(int *)(lVar3 + 8) == iVar14)))) ||
       ((*(int *)(lVar3 + 8) == iVar1 && (iVar12 == iVar14)))) goto LAB_143371517;
  }
  uVar10 = 0xffffffff;
LAB_143371517:
  uVar7 = (ulonglong)((uint)uVar5 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + ((uVar5 & 0xffffffff) >> 9) * 8);
  lVar2 = lVar3 + uVar7 * 0xc;
  iVar12 = *(int *)(lVar3 + uVar7 * 0xc);
  if ((((iVar12 == iVar1) && (*(int *)(lVar2 + 4) == iVar14)) ||
      ((*(int *)(lVar2 + 4) == iVar1 && (*(int *)(lVar2 + 8) == iVar14)))) ||
     ((*(int *)(lVar2 + 8) == iVar1 && (iVar12 == iVar14)))) {
    uVar11 = (undefined4)uVar10;
    uVar10 = uVar5;
  }
  *(int *)FVar8 = (int)uVar10;
  *(undefined4 *)((longlong)FVar8 + 4) = uVar11;
  return (FIndex2i)FVar8;
}

// AppendVertex @ 1433869c0

int __thiscall
UE::Geometry::FDynamicMesh3::AppendVertex(FDynamicMesh3 *this,TVector<double> *param_1)

{
  int iVar1;
  TVector<double>_u_0 local_48;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  TVector2<float>_u_0 local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_10 = 0;
  local_e = 0;
  iVar1 = AppendVertex(this,(FVertexInfo *)&local_48._s_0);
  return iVar1;
}

// GetChangeStamp @ 1433a2df0

ulong64 __thiscall UE::Geometry::FDynamicMesh3::GetChangeStamp(FDynamicMesh3 *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 1;
  uVar3 = 1;
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar5 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(pFVar1);
    }
    uVar3 = (this->ChangeStampShape).Value;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar5 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(pFVar1);
    }
    uVar4 = (this->ChangeStampTopology).Value;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return (ulonglong)(uVar4 + uVar3);
}

// GetTriangleGroup @ 1433b2b50

int __thiscall UE::Geometry::FDynamicMesh3::GetTriangleGroup(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  
  if ((this->TriangleGroups).bIsSet == false) {
    return -1;
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      return *(int *)(*(longlong *)
                       ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar1) +
                     (ulonglong)(param_1 & 0x1ff) * 4);
    }
  }
  return 0;
}

// GetVtxEdgeCount @ 1433b3f20

int __thiscall UE::Geometry::FDynamicMesh3::GetVtxEdgeCount(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar2 = *(uint *)(*(longlong *)
                         ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar1) +
                       (ulonglong)(param_1 & 0x1ff) * 4);
      if (uVar2 == 0xffffffff) {
        return 0;
      }
      return *(int *)(*(longlong *)
                       ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4);
    }
  }
  return -1;
}

// VerticesItr @ 1433e1680

MappedEnumerable<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::FDynamicMesh3::VerticesItr
          (FDynamicMesh3 *this,MappedEnumerable<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  FFunctionStorage *pFVar1;
  undefined ***pppuVar2;
  undefined **local_58;
  FDynamicMesh3 *local_50;
  undefined ***local_40;
  code *local_38 [2];
  FFunctionStorage local_28;
  
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
  local_40 = (undefined ***)0x0;
  local_28.HeapAllocation = (FFunctionStorage *)0x0;
  local_50 = this;
  Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_58,&local_28);
  *(undefined8 *)&__return_storage_ptr__->MapFunc = 0;
  (__return_storage_ptr__->enumerable).Vector = &this->VertexRefCounts;
  *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x28 = 0;
  TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
            (&__return_storage_ptr__->MapFunc,
             (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_38);
  if (local_38[0] != (code *)0x0) {
    pFVar1 = &local_28;
    if (local_28.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar1 = local_28.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar1->InlineAllocation + 0x10))();
  }
  pppuVar2 = &local_58;
  if (local_40 != (undefined ***)0x0) {
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[2])();
  return __return_storage_ptr__;
}

// operator()<UE::Math::TVector<float>_> @ 143433350

void __thiscall
`UE::Geometry::FDynamicMesh3::AppendWithOffsets'::__l2::<lambda_1>::
operator()<UE::Math::TVector<float>_>
          (void *this,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_1,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_2,
          int param_3,TVector<float> *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (param_1->bIsSet != false) {
    if (param_2->bIsSet == false) {
      uVar7 = (param_1->TypedValue).CurBlock;
      uVar9 = (param_1->TypedValue).CurBlockUsed;
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Resize
                (&param_1->TypedValue,param_3);
      for (uVar9 = uVar7 * 0x200 + uVar9; uVar9 < (uint)param_3; uVar9 = uVar9 + 1) {
        lVar3 = *(longlong *)
                 ((param_1->TypedValue).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8)
        ;
        *(undefined8 *)(lVar3 + (ulonglong)(uVar9 & 0x1ff) * 0xc) =
             *(undefined8 *)&param_4->field0_0x0;
        *(float *)(lVar3 + (ulonglong)(uVar9 & 0x1ff) * 0xc + 8) = (param_4->field0_0x0)._s_0.Z;
      }
    }
    else {
      iVar8 = (param_1->TypedValue).CurBlock * 0x200 + (param_1->TypedValue).CurBlockUsed;
      uVar7 = (param_2->TypedValue).CurBlock * 0x200 + (param_2->TypedValue).CurBlockUsed;
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Resize
                (&param_1->TypedValue,uVar7 + iVar8);
      uVar9 = 0;
      if (uVar7 != 0) {
        do {
          uVar5 = uVar9 & 0x1ff;
          lVar3 = *(longlong *)
                   ((param_2->TypedValue).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar9 >> 9) * 8);
          uVar1 = uVar9 + iVar8;
          uVar2 = *(undefined4 *)(lVar3 + (ulonglong)uVar5 * 0xc + 8);
          uVar9 = uVar9 + 1;
          uVar6 = (ulonglong)(uVar1 & 0x1ff);
          lVar4 = *(longlong *)
                   ((param_1->TypedValue).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar1 >> 9) * 8);
          *(undefined8 *)(lVar4 + uVar6 * 0xc) = *(undefined8 *)(lVar3 + (ulonglong)uVar5 * 0xc);
          *(undefined4 *)(lVar4 + 8 + uVar6 * 0xc) = uVar2;
        } while (uVar9 < uVar7);
      }
    }
  }
  return;
}

// GetAllVertexGroups<TArray<int,TSizedDefaultAllocator<32>_>_> @ 1434381c0

bool __thiscall
UE::Geometry::FDynamicMesh3::GetAllVertexGroups<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDynamicMesh3 *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 uVar4;
  int local_res8 [2];
  int local_res20 [2];
  uint uStack_4c;
  BaseValueIterator local_48;
  
  if ((this->TriangleGroups).bIsSet == false) {
    return false;
  }
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_48,&this->VertexEdgeLists,param_1,false);
  while ((((local_48.ListSet != &this->VertexEdgeLists || (local_48.ListIndex != param_1)) ||
          (local_48.iCur != -1)) || (local_48.cur_ptr != -1))) {
    uVar2 = *(ulonglong *)
             (*(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data +
               ((local_48._32_8_ & 0xffffffff) >> 9) * 8) +
              (ulonglong)(local_48.cur_value & 0x1ff) * 0x10 + 8);
    if ((this->TriangleGroups).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_res8[0] =
         *(int *)(*(longlong *)
                   ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                   ((uVar2 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar2 & 0x1ff) * 4);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,local_res8);
    uStack_4c = (uint)(uVar2 >> 0x20);
    if (uStack_4c != 0xffffffff) {
      if ((this->TriangleGroups).bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      local_res20[0] =
           *(int *)(*(longlong *)
                     ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uStack_4c >> 9) * 8) + (ulonglong)(uStack_4c & 0x1ff) * 4);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,local_res20);
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  }
  return true;
}

// GetAllVertexGroups<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 143438360

bool __thiscall
UE::Geometry::FDynamicMesh3::
GetAllVertexGroups<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (FDynamicMesh3 *this,int param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 uVar4;
  int local_res8 [2];
  int local_res20 [2];
  uint uStack_4c;
  BaseValueIterator local_48;
  
  if ((this->TriangleGroups).bIsSet == false) {
    return false;
  }
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_48,&this->VertexEdgeLists,param_1,false);
  while ((((local_48.ListSet != &this->VertexEdgeLists || (local_48.ListIndex != param_1)) ||
          (local_48.iCur != -1)) || (local_48.cur_ptr != -1))) {
    uVar2 = *(ulonglong *)
             (*(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data +
               ((local_48._32_8_ & 0xffffffff) >> 9) * 8) +
              (ulonglong)(local_48.cur_value & 0x1ff) * 0x10 + 8);
    if ((this->TriangleGroups).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_res8[0] =
         *(int *)(*(longlong *)
                   ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                   ((uVar2 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar2 & 0x1ff) * 4);
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int_const_&>
              (param_2,local_res8);
    uStack_4c = (uint)(uVar2 >> 0x20);
    if (uStack_4c != 0xffffffff) {
      if ((this->TriangleGroups).bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      local_res20[0] =
           *(int *)(*(longlong *)
                     ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uStack_4c >> 9) * 8) + (ulonglong)(uStack_4c & 0x1ff) * 4);
      TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<int_const_&>(param_2,local_res20);
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  }
  return true;
}

// GetAllVtxBoundaryEdges<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143438500

int __thiscall
UE::Geometry::FDynamicMesh3::GetAllVtxBoundaryEdges<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDynamicMesh3 *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint local_38 [2];
  BaseValueIterator local_30;
  
  if (((param_1 < 0) ||
      ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_30,&this->VertexEdgeLists,param_1,false);
    while (((local_30.ListSet != &this->VertexEdgeLists || (local_30.ListIndex != param_1)) ||
           ((local_30.iCur != -1 || (local_30.cur_ptr != -1))))) {
      local_38[0] = local_30.cur_value;
      if (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data +
                    ((local_30._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                  (ulonglong)(local_38[0] & 0x1ff) * 0x10) == -1) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        iVar4 = iVar4 + 1;
        param_2->ArrayNum = iVar5 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_38[0];
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_30);
    }
  }
  return iVar4;
}

// GetAllVtxBoundaryEdges<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 1434386b0

int __thiscall
UE::Geometry::FDynamicMesh3::
GetAllVtxBoundaryEdges<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (FDynamicMesh3 *this,int param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint local_38 [2];
  BaseValueIterator local_30;
  
  if (((param_1 < 0) ||
      ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_30,&this->VertexEdgeLists,param_1,false);
    while (((local_30.ListSet != &this->VertexEdgeLists || (local_30.ListIndex != param_1)) ||
           ((local_30.iCur != -1 || (local_30.cur_ptr != -1))))) {
      local_38[0] = local_30.cur_value;
      if (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data +
                    ((local_30._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                  (ulonglong)(local_38[0] & 0x1ff) * 0x10) == -1) {
        FVar1 = (param_2->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<int>)param_2;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar6 = FVar1;
        }
        if ((ulonglong)FVar6 <= local_38) {
          FVar6 = (ForElementType<int>)param_2;
          if (FVar1 != (ForElementType<int>)0x0) {
            FVar6 = FVar1;
          }
          if ((local_38 < (uint *)((longlong)FVar6 + (longlong)param_2->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FVar1 = (param_2->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<int>)param_2;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar6 = FVar1;
        }
        iVar4 = iVar4 + 1;
        *(uint *)((longlong)FVar6 + (longlong)iVar5 * 4) = local_38[0];
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_30);
    }
  }
  return iVar4;
}

// GetVtxContiguousTriangles<TArray<int,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_> @ 143439260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::
GetVtxContiguousTriangles<TArray<int,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FDynamicMesh3 *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  EMeshResult EVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<int> FVar13;
  ulonglong uVar14;
  longlong lVar15;
  void *_Dst;
  ulonglong uVar16;
  uint uVar17;
  FSmallListSet *pFVar18;
  ulonglong uVar19;
  undefined1 auStackY_188 [32];
  FScriptContainerElement local_138;
  char local_137;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  int local_120;
  uint local_11c;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_118;
  int local_110;
  FDynamicMesh3 *local_108;
  TArray<int,TSizedDefaultAllocator<32>_> *local_100;
  FSmallListSet *local_f8;
  BaseValueIterator local_f0;
  BaseValueIterator local_c8;
  BaseValueIterator local_a0;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar1 = &param_2->ArrayMax;
  uVar19 = 0;
  EVar8 = Ok;
  local_118 = param_4;
  param_2->ArrayNum = 0;
  local_108 = this;
  local_100 = param_3;
  if (param_2->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar15 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar15) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      pFVar18 = &this->VertexEdgeLists;
      uVar3 = *(uint *)(*(longlong *)
                         ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar15)
                       + (ulonglong)(param_1 & 0x1ff) * 4);
      if ((uVar3 == 0xffffffff) ||
         (local_110 = *(int *)(*(longlong *)
                                ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4),
         local_110 == 0)) {
        return Ok;
      }
      local_78.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 8;
      local_f8 = pFVar18;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_f0,pFVar18,param_1,false);
      while ((((local_f0.ListSet != pFVar18 || (local_f0.ListIndex != param_1)) ||
              (local_f0.iCur != -1)) || (local_f0.cur_ptr != -1))) {
        local_12c = local_f0.cur_value;
        if (*(int *)(*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data +
                      ((local_f0._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                    (ulonglong)(local_12c & 0x1ff) * 0x10) == -1) {
          FVar13 = (ForElementType<int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar13 = local_78.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar13 <= &local_12c) {
            FVar13 = (ForElementType<int>)&local_78;
            if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar13 = local_78.AllocatorInstance.SecondaryData;
            }
            if ((&local_12c < (uint *)((longlong)FVar13 + (longlong)local_78.ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              EVar8 = (*pcVar6)();
              return EVar8;
            }
          }
          if (local_78.ArrayNum == local_78.ArrayMax) {
            local_78.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_78.AllocatorInstance,&local_78.ArrayMax);
          }
          lVar15 = (longlong)local_78.ArrayNum;
          FVar13 = (ForElementType<int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar13 = local_78.AllocatorInstance.SecondaryData;
          }
          local_78.ArrayNum = local_78.ArrayNum + 1;
          *(uint *)((longlong)FVar13 + lVar15 * 4) = local_12c;
        }
        FSmallListSet::BaseValueIterator::GotoNext(&local_f0);
      }
      local_137 = local_78.ArrayNum != 0;
      if ((local_78.ArrayNum == 0) &&
         (((FSmallListSet::BaseValueIterator::BaseValueIterator(&local_a0,pFVar18,param_1,false),
           local_a0.ListSet != pFVar18 || (local_a0.ListIndex != param_1)) ||
          ((local_a0.iCur != -1 || (local_a0.cur_ptr != -1)))))) {
        local_128 = local_a0.cur_value;
        FVar13 = (ForElementType<int>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar13 = local_78.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar13 <= &local_128) {
          FVar13 = (ForElementType<int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar13 = local_78.AllocatorInstance.SecondaryData;
          }
          if ((&local_128 < (int *)((longlong)FVar13 + (longlong)local_78.ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
        }
        iVar9 = local_78.ArrayNum;
        if (local_78.ArrayNum == local_78.ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&local_78.AllocatorInstance,&local_78.ArrayMax);
        }
        local_78.ArrayNum = iVar9 + 1;
        FVar13 = (ForElementType<int>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar13 = local_78.AllocatorInstance.SecondaryData;
        }
        *(int *)((longlong)FVar13 + (longlong)iVar9 * 4) = local_128;
      }
      local_130 = 0;
      uVar14 = uVar19;
      do {
        bVar7 = false;
        if (local_78.ArrayNum == 0) {
          if (local_110 <= (int)uVar14) {
            if (param_3->ArrayNum != local_118->ArrayNum) {
              bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<3760718074987151647>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Queries.cpp"
                                 ,0x11f,"SpanLengths.Num() == IsLoop.Num()");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                EVar8 = (*pcVar6)();
                return EVar8;
              }
              EVar8 = Failed_InvalidNeighbourhood;
            }
            if (local_78.AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
              return EVar8;
            }
            FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
            return EVar8;
          }
          local_137 = '\0';
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_c8,pFVar18,param_1,false);
          while ((((local_c8.ListSet != pFVar18 || (local_c8.ListIndex != param_1)) ||
                  (local_c8.iCur != -1)) || (local_c8.cur_ptr != -1))) {
            local_124 = local_c8.cur_value;
            pFVar12 = (param_2->AllocatorInstance).Data;
            pFVar4 = pFVar12 + (longlong)param_2->ArrayNum * 4;
            while( true ) {
              if (pFVar12 == pFVar4) {
                FVar13 = (ForElementType<int>)&local_78;
                if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar13 = local_78.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar13 <= &local_124) {
                  FVar13 = (ForElementType<int>)&local_78;
                  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                    FVar13 = local_78.AllocatorInstance.SecondaryData;
                  }
                  if ((&local_124 < (uint *)((longlong)FVar13 + (longlong)local_78.ArrayMax * 4)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    EVar8 = (*pcVar6)();
                    return EVar8;
                  }
                }
                iVar9 = local_78.ArrayNum;
                if (local_78.ArrayNum == local_78.ArrayMax) {
                  iVar9 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                    (0x404,&local_78.AllocatorInstance,&local_78.ArrayMax);
                }
                local_78.ArrayNum = iVar9 + 1;
                FVar13 = (ForElementType<int>)&local_78;
                if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar13 = local_78.AllocatorInstance.SecondaryData;
                }
                *(uint *)((longlong)FVar13 + (longlong)iVar9 * 4) = local_124;
                goto LAB_14343977f;
              }
              if (*(int *)pFVar12 ==
                  *(int *)(*(longlong *)
                            ((this->Edges).Blocks.AllocatorInstance.Data +
                            ((local_c8._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                          (ulonglong)(local_124 & 0x1ff) * 0x10)) break;
              pFVar12 = pFVar12 + 4;
            }
            FSmallListSet::BaseValueIterator::GotoNext(&local_c8);
          }
LAB_14343977f:
          bVar7 = local_78.ArrayNum == 0;
        }
        if ((bVar7 || local_78.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        lVar15 = (longlong)(local_78.ArrayNum + -1) * 4;
        FVar13 = (ForElementType<int>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar13 = local_78.AllocatorInstance.SecondaryData;
        }
        uVar3 = *(uint *)((longlong)FVar13 + lVar15);
        _Dst = (void *)(lVar15 + (longlong)FVar13);
        iVar9 = (local_78.ArrayNum - (local_78.ArrayNum + -1)) + -1;
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar9 << 2);
        }
        local_78.ArrayNum = local_78.ArrayNum + -1;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,&local_78.AllocatorInstance,local_78.ArrayNum,&local_78.ArrayMax);
        local_130 = local_130 + 1;
        iVar9 = param_2->ArrayNum;
        local_138 = (FScriptContainerElement)(local_137 == '\0');
        local_134 = *(uint *)(*(longlong *)
                               ((this->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar3 >> 9) * 8) + 8 + (ulonglong)(uVar3 & 0x1ff) * 0x10)
        ;
        pFVar4 = (local_118->AllocatorInstance).Data;
        if (((pFVar4 <= &local_138) && (&local_138 < pFVar4 + local_118->ArrayMax)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        iVar10 = local_118->ArrayNum;
        if (iVar10 == local_118->ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&local_118->AllocatorInstance,&local_118->ArrayMax);
        }
        local_118->ArrayNum = iVar10 + 1;
        (local_118->AllocatorInstance).Data[iVar10] = local_138;
        uVar17 = uVar3;
        uVar11 = local_134;
        do {
          local_134 = uVar11;
          pFVar4 = (param_2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_134) &&
              ((FScriptContainerElement *)&local_134 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar10 + 1;
          *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_134;
          lVar15 = (ulonglong)(local_134 >> 9) * 8;
          lVar2 = (ulonglong)(local_134 & 0x1ff) * 0xc;
          lVar5 = *(longlong *)((local_108->Triangles).Blocks.AllocatorInstance.Data + lVar15);
          lVar15 = *(longlong *)((local_108->TriangleEdges).Blocks.AllocatorInstance.Data + lVar15)
                   + lVar2;
          if (*(int *)(lVar5 + lVar2) == param_1) {
            uVar14 = uVar19;
            uVar16 = 8;
          }
          else if (*(int *)(lVar5 + 4 + lVar2) == param_1) {
            uVar14 = 4;
            uVar16 = uVar19;
          }
          else {
            uVar16 = 4;
            uVar14 = 8;
            if (*(int *)(lVar5 + 8 + lVar2) != param_1) {
              uVar14 = 0xfffffffffffffffc;
            }
          }
          uVar11 = *(uint *)(uVar14 + lVar15);
          bVar7 = uVar11 == uVar17;
          uVar17 = uVar11;
          if (bVar7) {
            uVar17 = *(uint *)(uVar16 + lVar15);
          }
          local_11c = uVar17;
          if (uVar17 == uVar3) goto LAB_143439a9f;
          local_130 = local_130 + 1;
          lVar15 = *(longlong *)
                    ((local_108->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8
                    );
          uVar11 = *(uint *)(lVar15 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0x10);
          if (uVar11 == local_134) {
            uVar11 = *(uint *)(lVar15 + 0xc + (ulonglong)(uVar17 & 0x1ff) * 0x10);
          }
        } while (uVar11 != 0xffffffff);
        if (0 < local_78.ArrayNum) {
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
                    (&local_78,(int *)&local_11c,Default);
        }
LAB_143439a9f:
        param_3 = local_100;
        local_120 = param_2->ArrayNum - iVar9;
        pFVar4 = (local_100->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 < pFVar4 + (longlong)local_100->ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar9 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_120;
        uVar14 = (ulonglong)local_130;
        pFVar18 = local_f8;
        this = local_108;
      } while( true );
    }
  }
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3760718074987151543>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Queries.cpp"
                     ,0xb7,"IsVertex(VertexID)");
  if (!bVar7) {
    return Failed_NotAVertex;
  }
  pcVar6 = (code *)swi(3);
  EVar8 = (*pcVar6)();
  return EVar8;
}

// GetVtxContiguousTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TArray<bool,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 143439c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::
GetVtxContiguousTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TArray<bool,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (FDynamicMesh3 *this,int param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_3,
          TArray<bool,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<bool> FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  EMeshResult EVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ForElementType<int> FVar12;
  ForElementType<int> FVar13;
  ForElementType<bool> FVar14;
  longlong lVar15;
  void *_Dst;
  ForElementType<bool> FVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  FSmallListSet *pFVar20;
  bool bVar21;
  undefined1 auStackY_178 [32];
  undefined1 local_128;
  char local_127;
  uint local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  int local_114;
  int local_110;
  uint local_10c;
  int local_108;
  int local_104;
  FDynamicMesh3 *local_100;
  ForElementType<bool> local_f8;
  ForElementType<int> local_f0;
  BaseValueIterator local_e8;
  BaseValueIterator local_c0;
  BaseValueIterator local_98;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  piVar1 = &param_2->ArrayMax;
  local_f8 = (ForElementType<bool>)param_4;
  iVar18 = 0;
  param_2->ArrayNum = 0;
  local_108 = param_1;
  local_100 = this;
  local_f0 = (ForElementType<int>)param_3;
  if (param_2->ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
              (1,1,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar15 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar15) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      pFVar20 = &this->VertexEdgeLists;
      uVar3 = *(uint *)(*(longlong *)
                         ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar15)
                       + (ulonglong)(param_1 & 0x1ff) * 4);
      if ((uVar3 == 0xffffffff) ||
         (local_104 = *(int *)(*(longlong *)
                                ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4),
         local_104 == 0)) {
        return Ok;
      }
      local_70.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 8;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_e8,pFVar20,param_1,false);
      while ((((local_e8.ListSet != pFVar20 || (local_e8.ListIndex != param_1)) ||
              (local_e8.iCur != -1)) || (local_e8.cur_ptr != -1))) {
        local_120 = local_e8.cur_value;
        if (*(int *)(*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data +
                      ((local_e8._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                    (ulonglong)(local_120 & 0x1ff) * 0x10) == -1) {
          FVar13 = (ForElementType<int>)&local_70;
          if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar13 = local_70.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar13 <= &local_120) {
            FVar13 = (ForElementType<int>)&local_70;
            if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar13 = local_70.AllocatorInstance.SecondaryData;
            }
            if ((&local_120 < (uint *)((longlong)FVar13 + (longlong)local_70.ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              EVar8 = (*pcVar5)();
              return EVar8;
            }
          }
          if (local_70.ArrayNum == local_70.ArrayMax) {
            local_70.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          lVar15 = (longlong)local_70.ArrayNum;
          FVar13 = (ForElementType<int>)&local_70;
          if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar13 = local_70.AllocatorInstance.SecondaryData;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          *(uint *)((longlong)FVar13 + lVar15 * 4) = local_120;
        }
        FSmallListSet::BaseValueIterator::GotoNext(&local_e8);
      }
      local_127 = local_70.ArrayNum != 0;
      bVar7 = local_70.ArrayNum < 0;
      bVar21 = local_70.ArrayNum == 0;
      if (!bVar21) goto LAB_14343a133;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_98,pFVar20,param_1,false);
      if (((local_98.ListSet == pFVar20) && (local_98.ListIndex == param_1)) &&
         ((local_98.iCur == -1 && (iVar18 = 0, local_98.cur_ptr == -1)))) goto LAB_143439fc3;
      local_11c = local_98.cur_value;
      FVar13 = (ForElementType<int>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar13 <= &local_11c) {
        FVar13 = (ForElementType<int>)&local_70;
        if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar13 = local_70.AllocatorInstance.SecondaryData;
        }
        if ((&local_11c < (int *)((longlong)FVar13 + (longlong)local_70.ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          EVar8 = (*pcVar5)();
          return EVar8;
        }
      }
      iVar9 = local_70.ArrayNum;
      if (local_70.ArrayNum == local_70.ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      local_70.ArrayNum = iVar9 + 1;
      FVar13 = (ForElementType<int>)&local_70;
      iVar10 = local_11c;
      iVar18 = 0;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      do {
        *(int *)((longlong)FVar13 + (longlong)iVar9 * 4) = iVar10;
LAB_143439fc3:
        bVar7 = local_70.ArrayNum < 0;
        bVar21 = false;
        if (local_70.ArrayNum == 0) {
          if (local_104 <= iVar18) {
            if (*(int *)((longlong)param_3 + 0x28) == *(int *)((longlong)local_f8 + 0x10)) {
              EVar8 = Ok;
            }
            else {
              bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<3760718074987151647>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Queries.cpp"
                                 ,0x11f,"SpanLengths.Num() == IsLoop.Num()");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                EVar8 = (*pcVar5)();
                return EVar8;
              }
              EVar8 = Failed_InvalidNeighbourhood;
            }
            if (local_70.AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
              return EVar8;
            }
            FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
            return EVar8;
          }
          local_127 = '\0';
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_c0,pFVar20,param_1,false);
          while ((((local_c0.ListSet != pFVar20 || (local_c0.ListIndex != param_1)) ||
                  (local_c0.iCur != -1)) || (local_c0.cur_ptr != -1))) {
            local_118 = local_c0.cur_value;
            FVar13 = (param_2->AllocatorInstance).SecondaryData;
            FVar12 = (ForElementType<int>)param_2;
            if (FVar13 != (ForElementType<int>)0x0) {
              FVar12 = FVar13;
            }
            FVar13 = (ForElementType<int>)((longlong)FVar12 + (longlong)param_2->ArrayNum * 4);
            while( true ) {
              if (FVar12 == FVar13) {
                FVar13 = (ForElementType<int>)&local_70;
                if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar13 = local_70.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar13 <= &local_118) {
                  FVar13 = (ForElementType<int>)&local_70;
                  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                    FVar13 = local_70.AllocatorInstance.SecondaryData;
                  }
                  if ((&local_118 < (uint *)((longlong)FVar13 + (longlong)local_70.ArrayMax * 4)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    EVar8 = (*pcVar5)();
                    return EVar8;
                  }
                }
                iVar9 = local_70.ArrayNum;
                if (local_70.ArrayNum == local_70.ArrayMax) {
                  iVar9 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                    (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
                }
                local_70.ArrayNum = iVar9 + 1;
                FVar13 = (ForElementType<int>)&local_70;
                if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar13 = local_70.AllocatorInstance.SecondaryData;
                }
                *(uint *)((longlong)FVar13 + (longlong)iVar9 * 4) = local_118;
                goto LAB_14343a12c;
              }
              if (*(int *)FVar12 ==
                  *(int *)(*(longlong *)
                            ((this->Edges).Blocks.AllocatorInstance.Data +
                            ((local_c0._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                          (ulonglong)(local_118 & 0x1ff) * 0x10)) break;
              FVar12 = (ForElementType<int>)((longlong)FVar12 + 4);
            }
            FSmallListSet::BaseValueIterator::GotoNext(&local_c0);
          }
LAB_14343a12c:
          bVar7 = local_70.ArrayNum < 0;
          bVar21 = local_70.ArrayNum == 0;
        }
LAB_14343a133:
        if ((bVar21 || bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          EVar8 = (*pcVar5)();
          return EVar8;
        }
        lVar15 = (longlong)(local_70.ArrayNum + -1) * 4;
        FVar13 = (ForElementType<int>)&local_70;
        if (local_70.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar13 = local_70.AllocatorInstance.SecondaryData;
        }
        uVar3 = *(uint *)((longlong)FVar13 + lVar15);
        _Dst = (void *)(lVar15 + (longlong)FVar13);
        iVar9 = (local_70.ArrayNum - (local_70.ArrayNum + -1)) + -1;
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar9 << 2);
        }
        local_70.ArrayNum = local_70.ArrayNum + -1;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,&local_70.AllocatorInstance,local_70.ArrayNum,&local_70.ArrayMax);
        FVar16 = local_f8;
        local_110 = iVar18 + 1;
        iVar18 = param_2->ArrayNum;
        local_128 = local_127 == '\0';
        FVar4 = *(ForElementType<bool> *)((longlong)local_f8 + 8);
        local_124 = *(uint *)(*(longlong *)
                               ((this->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar3 >> 9) * 8) + 8 + (ulonglong)(uVar3 & 0x1ff) * 0x10)
        ;
        FVar14 = local_f8;
        if (FVar4 != (ForElementType<bool>)0x0) {
          FVar14 = FVar4;
        }
        if ((ulonglong)FVar14 <= &local_128) {
          FVar14 = local_f8;
          if (FVar4 != (ForElementType<bool>)0x0) {
            FVar14 = FVar4;
          }
          if ((&local_128 <
               (undefined1 *)((longlong)FVar14 + (longlong)*(int *)((longlong)local_f8 + 0x14))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            EVar8 = (*pcVar5)();
            return EVar8;
          }
        }
        iVar9 = *(int *)((longlong)FVar16 + 0x10);
        if (iVar9 == *(int *)((longlong)FVar16 + 0x14)) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                            (0x101,(ForElementType<bool> *)FVar16,(int *)((longlong)FVar16 + 0x14));
        }
        *(int *)((longlong)FVar16 + 0x10) = iVar9 + 1;
        if (*(ForElementType<bool> *)((longlong)FVar16 + 8) != (ForElementType<bool>)0x0) {
          FVar16 = *(ForElementType<bool> *)((longlong)FVar16 + 8);
        }
        *(undefined1 *)((longlong)iVar9 + (longlong)FVar16) = local_128;
        uVar19 = uVar3;
        uVar11 = local_124;
        do {
          local_124 = uVar11;
          FVar13 = (param_2->AllocatorInstance).SecondaryData;
          FVar12 = (ForElementType<int>)param_2;
          if (FVar13 != (ForElementType<int>)0x0) {
            FVar12 = FVar13;
          }
          if ((ulonglong)FVar12 <= &local_124) {
            FVar12 = (ForElementType<int>)param_2;
            if (FVar13 != (ForElementType<int>)0x0) {
              FVar12 = FVar13;
            }
            if ((&local_124 < (uint *)((longlong)FVar12 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              EVar8 = (*pcVar5)();
              return EVar8;
            }
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,&param_2->AllocatorInstance,piVar1);
          }
          uVar6 = local_124;
          param_2->ArrayNum = iVar9 + 1;
          FVar13 = (param_2->AllocatorInstance).SecondaryData;
          FVar12 = (ForElementType<int>)param_2;
          if (FVar13 != (ForElementType<int>)0x0) {
            FVar12 = FVar13;
          }
          *(uint *)((longlong)FVar12 + (longlong)iVar9 * 4) = local_124;
          lVar15 = (ulonglong)(local_124 >> 9) * 8;
          lVar2 = (ulonglong)(local_124 & 0x1ff) * 0xc;
          lVar17 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar15) +
                   lVar2;
          iVar9 = IndexUtil::FindTriIndex<int,UE::Geometry::FIndex3i>
                            (local_108,
                             (FIndex3i *)
                             (lVar2 + *(longlong *)
                                       ((local_100->Triangles).Blocks.AllocatorInstance.Data +
                                       lVar15)));
          this = local_100;
          uVar11 = *(uint *)(lVar17 + (longlong)iVar9 * 4);
          bVar7 = uVar11 == uVar19;
          uVar19 = uVar11;
          if (bVar7) {
            iVar9 = iVar9 + 2;
            uVar19 = *(uint *)(lVar17 + (longlong)
                                        (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                                                 (int)(((longlong)iVar9 / 3 +
                                                        ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                                                      0x1f)) * -3) * 4);
          }
          local_10c = uVar19;
          if (uVar19 == uVar3) goto LAB_14343a49a;
          local_110 = local_110 + 1;
          lVar15 = *(longlong *)
                    ((local_100->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8
                    );
          uVar11 = *(uint *)(lVar15 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0x10);
          if (uVar11 == uVar6) {
            uVar11 = *(uint *)(lVar15 + 0xc + (ulonglong)(uVar19 & 0x1ff) * 0x10);
          }
        } while (uVar11 != 0xffffffff);
        if (0 < local_70.ArrayNum) {
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
                    (&local_70,(int *)&local_10c,Default);
        }
LAB_14343a49a:
        param_3 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)local_f0;
        local_114 = param_2->ArrayNum - iVar18;
        FVar13 = *(ForElementType<int> *)((longlong)local_f0 + 0x20);
        FVar12 = local_f0;
        if (FVar13 != (ForElementType<int>)0x0) {
          FVar12 = FVar13;
        }
        if ((ulonglong)FVar12 <= &local_114) {
          FVar12 = local_f0;
          if (FVar13 != (ForElementType<int>)0x0) {
            FVar12 = FVar13;
          }
          if ((&local_114 <
               (int *)((longlong)FVar12 + (longlong)*(int *)((longlong)local_f0 + 0x2c) * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            EVar8 = (*pcVar5)();
            return EVar8;
          }
        }
        iVar9 = *(int *)((longlong)param_3 + 0x28);
        if (iVar9 == *(int *)((longlong)param_3 + 0x2c)) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&param_3->AllocatorInstance,(int *)((longlong)param_3 + 0x2c));
        }
        pFVar20 = &this->VertexEdgeLists;
        *(int *)((longlong)param_3 + 0x28) = iVar9 + 1;
        FVar13 = (ForElementType<int>)param_3;
        iVar10 = local_114;
        param_1 = local_108;
        iVar18 = local_110;
        if (*(ForElementType<int> *)((longlong)param_3 + 0x20) != (ForElementType<int>)0x0) {
          FVar13 = *(ForElementType<int> *)((longlong)param_3 + 0x20);
        }
      } while( true );
    }
  }
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3760718074987151543>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Queries.cpp"
                     ,0xb7,"IsVertex(VertexID)");
  if (!bVar7) {
    return Failed_NotAVertex;
  }
  pcVar5 = (code *)swi(3);
  EVar8 = (*pcVar5)();
  return EVar8;
}

// GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14343a640

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDynamicMesh3 *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  uint uVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_res10;
  <lambda_1> local_28;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar2 = *(uint *)(*(longlong *)
                         ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar1) +
                       (ulonglong)(param_1 & 0x1ff) * 4);
      local_res10.AllocatorInstance.Data._0_4_ = param_1;
      local_28.__this = this;
      if ((uVar2 != 0xffffffff) &&
         (0x14 < *(int *)(*(longlong *)
                           ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4))) {
        local_28.vID = (int *)&local_res10;
        local_28.TrianglesOut = param_2;
        FSmallListSet::
        Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>_::__l8::<lambda_1>_>
                  (&this->VertexEdgeLists,param_1,&local_28);
        return Ok;
      }
      local_28.vID = (int *)param_2;
      FSmallListSet::
      Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>_::__l10::<lambda_2>_>
                (&this->VertexEdgeLists,param_1,(<lambda_2> *)&local_28);
      return Ok;
    }
  }
  return Failed_NotAVertex;
}

// GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 14343a740

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::
GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (FDynamicMesh3 *this,int param_1,
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong lVar1;
  uint uVar2;
  int local_res10 [6];
  <lambda_1> local_28;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar2 = *(uint *)(*(longlong *)
                         ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar1) +
                       (ulonglong)(param_1 & 0x1ff) * 4);
      local_res10[0] = param_1;
      local_28.__this = this;
      if ((uVar2 != 0xffffffff) &&
         (0x14 < *(int *)(*(longlong *)
                           ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4))) {
        local_28.vID = local_res10;
        local_28.TrianglesOut = param_2;
        FSmallListSet::
        Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_::__l8::<lambda_1>_>
                  (&this->VertexEdgeLists,param_1,&local_28);
        return Ok;
      }
      local_28.vID = (int *)param_2;
      FSmallListSet::
      Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_::__l10::<lambda_2>_>
                (&this->VertexEdgeLists,param_1,(<lambda_2> *)&local_28);
      return Ok;
    }
  }
  return Failed_NotAVertex;
}

// SerializeInternal<1> @ 14344ab90

void __thiscall
UE::Geometry::FDynamicMesh3::SerializeInternal<1>
          (FDynamicMesh3 *this,FArchive *param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong *puVar5;
  code *pcVar6;
  bool bVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<721570491596275996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Serialization.cpp"
                         ,0x11c,"Ar.IsLoading()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Serialize<0,0>(&this->Vertices,param_1);
  FRefCountVector::Serialize(&this->VertexRefCounts,param_1,false,false);
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::Serialize
            (&this->VertexNormals,param_1);
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::Serialize
            (&this->VertexColors,param_1);
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::Serialize
            (&this->VertexUVs,param_1);
  FSmallListSet::Serialize(&this->VertexEdgeLists,param_1,false,false);
  TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<0,0>(&this->Triangles,param_1);
  FRefCountVector::Serialize(&this->TriangleRefCounts,param_1,false,false);
  TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<0,0>(&this->TriangleEdges,param_1);
  TOptional<UE::Geometry::TDynamicVector<int,512>_>::Serialize(&this->TriangleGroups,param_1);
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->GroupIDCounter);
    }
  }
  else {
    this->GroupIDCounter = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<0,0>(&this->Edges,param_1);
  FRefCountVector::Serialize(&this->EdgeRefCounts,param_1,false,false);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    bVar7 = false;
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res8[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14344ad96;
  }
  else {
    uVar2 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  bVar7 = uVar2 != 0;
LAB_14344ad96:
  if (bVar7) {
    EnableAttributes(this);
    FDynamicMeshAttributeSet::Serialize((this->AttributeSet).Ptr,param_1,(FCompactMaps *)0x0,false);
  }
  return;
}

// SerializeInternal<2> @ 14344add0

void __thiscall
UE::Geometry::FDynamicMesh3::SerializeInternal<2>
          (FDynamicMesh3 *this,FArchive *param_1,void *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  FRefCountVector *this_00;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint uVar6;
  <lambda_2> local_res8;
  <lambda_1> local_res10;
  
  FDynamicMesh3Serialization_Local::SerializeUniqueVertexData
            (param_1,&this->Vertices,&this->VertexNormals,&this->VertexColors,&this->VertexUVs,
             param_2);
  FDynamicMesh3Serialization_Local::SerializeUniqueTriangleData
            (param_1,&this->Triangles,&this->TriangleGroups,&this->GroupIDCounter,param_2);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  this_00 = &this->TriangleRefCounts;
  puVar1 = &param_1->field_0x28;
  uVar6 = (this->TriangleRefCounts).FreeIndices.CurBlockUsed +
          (this->TriangleRefCounts).FreeIndices.CurBlock * 0x200;
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    uVar5 = (ulonglong)local_res8.__this >> 0x20;
    local_res8.__this = local_res8.__this & 0xffffffff00000000;
    if ((*puVar1 & 1) == 0) {
      local_res8.__this = (FDynamicMesh3 *)CONCAT44((int)uVar5,(uint)(uVar6 != 0));
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8);
    if (1 < (uint)local_res8.__this) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = (uint)local_res8.__this;
    if ((*puVar1 & 1) != 0) goto LAB_14344aec3;
  }
  else {
    uVar3 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14344aec3:
    uVar6 = uVar3;
  }
  if (uVar6 == 0) {
    if ((*puVar1 & 1) == 0) goto LAB_14344af22;
    FDynamicMesh3Serialization_Local::ResetDenseTriangleRefCounts
              ((ulonglong)((this->Triangles).CurBlock * 0x200 + (this->Triangles).CurBlockUsed),
               this_00);
  }
  else {
    FRefCountVector::Serialize
              (this_00,param_1,*(bool *)((longlong)param_2 + 1),*(bool *)((longlong)param_2 + 2));
  }
  if ((*puVar1 & 1) != 0) {
    FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts
              ((ulonglong)((this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed),
               &this->Triangles,this_00,&this->VertexRefCounts);
  }
LAB_14344af22:
  if (*(char *)param_2 == '\0') {
    if ((*puVar1 & 1) != 0) {
      local_res8.__this = this;
      local_res10.__this = this;
      FDynamicMesh3Serialization_Local::
      RecomputeEdgeData<_UE::Geometry::FDynamicMesh3::SerializeInternal<2>_::__l21::<lambda_1>,_UE::Geometry::FDynamicMesh3::SerializeInternal<2>_::__l21::<lambda_2>_>
                (&this->Vertices,&this->Triangles,this_00,&this->Edges,&this->EdgeRefCounts,
                 &this->TriangleEdges,&this->VertexEdgeLists,&local_res10,&local_res8);
    }
  }
  else {
    if (*(char *)((longlong)param_2 + 2) == '\0') {
      TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,0>(&this->Edges,param_1);
    }
    else {
      TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,1>(&this->Edges,param_1);
    }
    FRefCountVector::Serialize
              (&this->EdgeRefCounts,param_1,*(bool *)((longlong)param_2 + 1),
               *(bool *)((longlong)param_2 + 2));
    if (*(char *)((longlong)param_2 + 2) == '\0') {
      TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>(&this->TriangleEdges,param_1);
    }
    else {
      TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>(&this->TriangleEdges,param_1);
    }
    FSmallListSet::Serialize
              (&this->VertexEdgeLists,param_1,*(bool *)((longlong)param_2 + 1),
               *(bool *)((longlong)param_2 + 2));
  }
  FDynamicMesh3Serialization_Local::SerializeAttributeSet(param_1,this,(FCompactMaps *)0x0,param_2);
  return;
}

// SerializeInternal<65538> @ 14344b030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMesh3::SerializeInternal<65538>
          (FDynamicMesh3 *this,FArchive *param_1,void *param_2)

{
  FRefCountVector *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  short sVar6;
  undefined4 uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  FCompactMaps *pFVar23;
  uint uVar24;
  FCompactMaps *pFVar25;
  FCompactMaps *pFVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  char cVar32;
  uint local_198 [2];
  ulonglong local_190;
  FCompactMaps local_188;
  TDynamicVector<UE::Math::TVector2<float>,512> local_168;
  char local_150;
  uint *local_148;
  TDynamicVector<UE::Math::TVector2<float>,512> local_140;
  char local_128;
  TDynamicVector<int,512> local_120;
  char local_108;
  ulonglong local_100;
  FCompactMaps *local_f8;
  TDynamicVector<UE::Math::TVector<double>,512> local_f0;
  TDynamicVector<UE::Geometry::FIndex3i,512> local_d8;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> local_c0;
  <lambda_2> local_a0;
  <lambda_1> local_98;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> local_90;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> local_70;
  IndexIterator local_50;
  
  pFVar23 = (FCompactMaps *)0x0;
  local_188.VertMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.VertMap.ArrayNum = 0;
  local_188.VertMap.ArrayMax = 0;
  local_188.TriMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.TriMap.ArrayNum = 0;
  local_188.TriMap.ArrayMax = 0;
  uVar22 = 0;
  uVar17 = 0;
  if (((param_1->field_0x28 & 1) == 0) &&
     ((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
      (this->VertexRefCounts).FreeIndices.CurBlockUsed != 0)) {
    uVar24 = (this->VertexRefCounts).UsedCount;
    local_f0.CurBlock = 0;
    local_f0.CurBlockUsed = 0;
    local_f0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Blocks.ArrayNum = 0;
    local_f0.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_f0);
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_f0,uVar24);
    FDynamicMesh3Serialization_Local::CreateOptionalVector<UE::Math::TVector<float>_>
              (&local_70,&this->VertexNormals,(longlong)(int)uVar24);
    FDynamicMesh3Serialization_Local::CreateOptionalVector<UE::Math::TVector<float>_>
              (&local_90,&this->VertexColors,(longlong)(int)uVar24);
    local_128 = '\0';
    if ((this->VertexUVs).bIsSet != false) {
      local_140.CurBlock = 0;
      local_140.CurBlockUsed = 0;
      local_140.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Blocks.ArrayNum = 0;
      local_140.Blocks.ArrayMax = 0;
      TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_140);
      local_128 = '\x01';
      TDynamicVector<UE::Math::TVector2<float>,512>::Resize(&local_140,uVar24);
    }
    local_150 = local_128;
    if (local_128 != '\0') {
      local_168.CurBlock = local_140.CurBlock;
      local_168.CurBlockUsed = local_140.CurBlockUsed;
      local_168.Blocks.AllocatorInstance.Data = local_140.Blocks.AllocatorInstance.Data;
      local_168.Blocks.ArrayNum = local_140.Blocks.ArrayNum;
      local_168.Blocks.ArrayMax = local_140.Blocks.ArrayMax;
      local_140.Blocks.ArrayNum = 0;
      local_140.Blocks.ArrayMax = 0;
      local_140.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.CurBlock = 0;
      local_140.CurBlockUsed = 0;
      TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_140);
      if ((local_128 != '\0') &&
         (TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_140,0),
         local_140.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_140.Blocks.AllocatorInstance.Data);
      }
    }
    iVar18 = (this->Vertices).CurBlockUsed + (this->Vertices).CurBlock * 0x200;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_188.VertMap,iVar18,Default);
    pFVar25 = pFVar23;
    pFVar26 = pFVar23;
    if (0 < iVar18) {
      do {
        uVar19 = (uint)pFVar26;
        uVar24 = uVar22;
        if ((int)uVar19 < local_188.VertMap.ArrayNum) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(undefined4 *)(local_188.VertMap.AllocatorInstance.Data + (longlong)pFVar25 * 4) =
             0xffffffff;
        pFVar25 = (FCompactMaps *)((longlong)&(pFVar25->VertMap).AllocatorInstance.Data + 1);
        pFVar26 = (FCompactMaps *)(ulonglong)(uVar19 + 1);
      } while ((longlong)pFVar25 < (longlong)iVar18);
    }
    local_f8 = (FCompactMaps *)0x0;
    iVar18 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed;
    pFVar25 = pFVar23;
    if (((iVar18 != 0) &&
        (pFVar8 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        pFVar25 = (FCompactMaps *)0x0, 0xfffd < (ushort)(**(short **)pFVar8 - 1U))) &&
       (pFVar25 = (FCompactMaps *)&DAT_00000001, 1 < iVar18)) {
      do {
        sVar6 = *(short *)(*(longlong *)(pFVar8 + ((ulonglong)pFVar25 >> 9) * 8) +
                          (ulonglong)((uint)pFVar25 & 0x1ff) * 2);
        if ((sVar6 != 0) && (sVar6 != -1)) break;
        uVar24 = (uint)pFVar25 + 1;
        pFVar25 = (FCompactMaps *)(ulonglong)uVar24;
      } while ((int)uVar24 < iVar18);
    }
    FRefCountVector::IndexIterator::IndexIterator(&local_50,&this->VertexRefCounts,iVar18,iVar18);
    pFVar26 = pFVar23;
    if ((int)pFVar25 != local_50._8_4_) {
      do {
        uVar24 = (uint)pFVar25;
        uVar28 = (ulonglong)(uVar24 & 0x1ff);
        puVar21 = (uint *)((ulonglong)pFVar25 >> 9);
        lVar9 = *(longlong *)
                 ((this->Vertices).Blocks.AllocatorInstance.Data + (longlong)puVar21 * 8);
        puVar2 = (undefined8 *)(lVar9 + uVar28 * 0x18);
        uVar13 = puVar2[1];
        uVar5 = *(undefined8 *)(lVar9 + 0x10 + uVar28 * 0x18);
        uVar30 = (ulonglong)((uint)pFVar26 & 0x1ff);
        local_100 = ((ulonglong)pFVar26 & 0xffffffff) >> 9;
        lVar9 = *(longlong *)(local_f0.Blocks.AllocatorInstance.Data + local_100 * 8);
        puVar3 = (undefined8 *)(lVar9 + uVar30 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar13;
        *(undefined8 *)(lVar9 + 0x10 + uVar30 * 0x18) = uVar5;
        local_148 = puVar21;
        if (local_70.bIsSet != false) {
          if (((this->VertexNormals).bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar9 = *(longlong *)
                   ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                   (longlong)puVar21 * 8);
          local_190 = *(ulonglong *)(lVar9 + uVar28 * 0xc);
          uVar7 = *(undefined4 *)(lVar9 + 8 + uVar28 * 0xc);
          if ((local_70.bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar9 = *(longlong *)(local_70.TypedValue.Blocks.AllocatorInstance.Data + local_100 * 8);
          *(ulonglong *)(lVar9 + uVar30 * 0xc) = local_190;
          *(undefined4 *)(lVar9 + 8 + uVar30 * 0xc) = uVar7;
        }
        if (local_90.bIsSet != false) {
          if (((this->VertexColors).bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar9 = *(longlong *)
                   ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                   (longlong)local_148 * 8);
          local_190 = *(ulonglong *)(lVar9 + uVar28 * 0xc);
          uVar7 = *(undefined4 *)(lVar9 + 8 + uVar28 * 0xc);
          if ((local_90.bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar9 = *(longlong *)(local_90.TypedValue.Blocks.AllocatorInstance.Data + local_100 * 8);
          *(ulonglong *)(lVar9 + uVar30 * 0xc) = local_190;
          *(undefined4 *)(lVar9 + 8 + uVar30 * 0xc) = uVar7;
        }
        if (local_150 != '\0') {
          if (((this->VertexUVs).bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar5 = *(undefined8 *)
                   (*(longlong *)
                     ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                     (longlong)local_148 * 8) + uVar28 * 8);
          if ((local_150 == '\0') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(undefined8 *)
           (*(longlong *)(local_168.Blocks.AllocatorInstance.Data + local_100 * 8) + uVar30 * 8) =
               uVar5;
        }
        uVar19 = uVar17;
        if ((int)uVar24 < local_188.VertMap.ArrayNum) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar25 = (FCompactMaps *)(ulonglong)(uVar24 + 1);
        *(int *)(local_188.VertMap.AllocatorInstance.Data + (longlong)(int)uVar24 * 4) =
             (int)local_f8;
        local_f8 = (FCompactMaps *)((longlong)&(local_f8->VertMap).AllocatorInstance.Data + 1);
        if ((int)(uVar24 + 1) < iVar18) {
          pFVar8 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          do {
            lVar9 = ((ulonglong)pFVar25 >> 9) * 8;
            lVar4 = (ulonglong)((uint)pFVar25 & 0x1ff) * 2;
            if ((*(short *)(lVar4 + *(longlong *)(pFVar8 + lVar9)) != 0) &&
               (*(short *)(lVar4 + *(longlong *)(pFVar8 + lVar9)) != -1)) break;
            uVar24 = (uint)pFVar25 + 1;
            pFVar25 = (FCompactMaps *)(ulonglong)uVar24;
          } while ((int)uVar24 < iVar18);
        }
        pFVar26 = local_f8;
      } while ((int)pFVar25 != local_50._8_4_);
    }
    if (*(char *)((longlong)param_2 + 2) == '\0') {
      TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>(&local_f0,param_1);
    }
    else {
      TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>(&local_f0,param_1);
    }
    FDynamicMesh3Serialization_Local::SerializeOptionalVector<UE::Math::TVector<float>_>
              (param_1,&local_70,param_2);
    FDynamicMesh3Serialization_Local::SerializeOptionalVector<UE::Math::TVector<float>_>
              (param_1,&local_90,param_2);
    cVar32 = local_150;
    puVar10 = *(ulonglong **)&param_1->field_0x8;
    puVar21 = (uint *)*puVar10 + 1;
    if ((uint *)puVar10[1] < puVar21) {
      local_198[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_198[0] = (uint)(local_150 != '\0');
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_198,4);
      if (1 < local_198[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      bVar15 = param_1->field_0x28;
      uVar24 = local_198[0];
      if ((bVar15 & 1) != 0) goto LAB_14344b65d;
    }
    else {
      uVar24 = *(uint *)*puVar10;
      *puVar10 = (ulonglong)puVar21;
      bVar15 = param_1->field_0x28;
LAB_14344b65d:
      cVar32 = uVar24 != 0;
    }
    if (cVar32 != '\0') {
      if ((bVar15 & 1) == 0) {
        if ((local_150 == '\0') &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        if ((local_150 != '\0') &&
           (TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_168,0),
           local_168.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_168.Blocks.AllocatorInstance.Data);
        }
        local_168.CurBlock = 0;
        local_168.CurBlockUsed = 0;
        local_168.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Blocks.ArrayNum = 0;
        local_168.Blocks.ArrayMax = 0;
        TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_168);
        local_150 = '\x01';
      }
      if (*(char *)((longlong)param_2 + 2) == '\0') {
        TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>(&local_168,param_1);
      }
      else {
        TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>(&local_168,param_1);
      }
    }
    if ((local_150 != '\0') &&
       (TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_168,0),
       local_168.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_168.Blocks.AllocatorInstance.Data);
    }
    if ((local_90.bIsSet != false) &&
       (TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_90.TypedValue,0),
       local_90.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_90.TypedValue.Blocks.AllocatorInstance.Data);
    }
    if ((local_70.bIsSet != false) &&
       (TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_70.TypedValue,0),
       local_70.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.TypedValue.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_f0,0);
    if (local_f0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Blocks.AllocatorInstance.Data);
    }
  }
  else {
    FDynamicMesh3Serialization_Local::SerializeUniqueVertexData
              (param_1,&this->Vertices,&this->VertexNormals,&this->VertexColors,&this->VertexUVs,
               param_2);
  }
  pFVar1 = &this->TriangleRefCounts;
  if (((param_1->field_0x28 & 1) != 0) ||
     (((this->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (this->TriangleRefCounts).FreeIndices.CurBlockUsed == 0 &&
      ((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (this->VertexRefCounts).FreeIndices.CurBlockUsed == 0)))) {
    FDynamicMesh3Serialization_Local::SerializeUniqueTriangleData
              (param_1,&this->Triangles,&this->TriangleGroups,&this->GroupIDCounter,param_2);
    goto LAB_14344bd07;
  }
  uVar24 = (this->TriangleRefCounts).UsedCount;
  local_d8.CurBlock = 0;
  local_d8.CurBlockUsed = 0;
  local_d8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Blocks.ArrayNum = 0;
  local_d8.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(&local_d8);
  TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(&local_d8,uVar24);
  local_108 = '\0';
  if ((this->TriangleGroups).bIsSet != false) {
    local_120.CurBlock = 0;
    local_120.CurBlockUsed = 0;
    local_120.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Blocks.ArrayNum = 0;
    local_120.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_120);
    local_108 = '\x01';
    TDynamicVector<int,512>::Resize(&local_120,uVar24);
  }
  local_c0.bIsSet = (bool)local_108;
  if (local_108 != '\0') {
    local_c0.TypedValue.CurBlock = local_120.CurBlock;
    local_c0.TypedValue.CurBlockUsed = local_120.CurBlockUsed;
    local_c0.TypedValue.Blocks.AllocatorInstance.Data = local_120.Blocks.AllocatorInstance.Data;
    local_c0.TypedValue.Blocks.ArrayNum = local_120.Blocks.ArrayNum;
    local_c0.TypedValue.Blocks.ArrayMax = local_120.Blocks.ArrayMax;
    local_120.Blocks.ArrayNum = 0;
    local_120.Blocks.ArrayMax = 0;
    local_120.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.CurBlock = 0;
    local_120.CurBlockUsed = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_120);
    if ((local_108 != '\0') &&
       (TDynamicVector<int,512>::Empty(&local_120,0),
       local_120.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_120.Blocks.AllocatorInstance.Data);
    }
  }
  iVar18 = (this->Triangles).CurBlockUsed + (this->Triangles).CurBlock * 0x200;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_188.TriMap,iVar18,Default);
  pFVar25 = pFVar23;
  pFVar26 = pFVar23;
  if (0 < iVar18) {
    do {
      uVar19 = (uint)pFVar26;
      uVar24 = uVar17;
      if ((int)uVar19 < local_188.TriMap.ArrayNum) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined4 *)(local_188.TriMap.AllocatorInstance.Data + (longlong)pFVar25 * 4) = 0xffffffff;
      pFVar25 = (FCompactMaps *)((longlong)&(pFVar25->VertMap).AllocatorInstance.Data + 1);
      pFVar26 = (FCompactMaps *)(ulonglong)(uVar19 + 1);
    } while ((longlong)pFVar25 < (longlong)iVar18);
  }
  bVar14 = local_188.VertMap.ArrayNum == 0;
  local_190 = 0;
  uVar24 = (pFVar1->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  pFVar25 = pFVar23;
  if ((uVar24 == 0) ||
     (pFVar8 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar25 = (FCompactMaps *)0x0, (ushort)(**(short **)pFVar8 - 1U) < 0xfffe)) {
LAB_14344b983:
    uVar19 = (uint)pFVar25;
  }
  else {
    pFVar25 = (FCompactMaps *)&DAT_00000001;
    uVar19 = 1;
    if (1 < (int)uVar24) {
      do {
        sVar6 = *(short *)(*(longlong *)(pFVar8 + ((ulonglong)pFVar25 >> 9) * 8) +
                          (ulonglong)((uint)pFVar25 & 0x1ff) * 2);
        if ((sVar6 != 0) && (sVar6 != -1)) break;
        uVar19 = (uint)pFVar25 + 1;
        pFVar25 = (FCompactMaps *)(ulonglong)uVar19;
      } while ((int)uVar19 < (int)uVar24);
      goto LAB_14344b983;
    }
  }
  if (uVar19 != uVar24) {
    while( true ) {
      lVar9 = ((local_190 & 0xffffffff) >> 9) * 8;
      uVar19 = (uint)pFVar25;
      lVar4 = (ulonglong)((uint)local_190 & 0x1ff) * 0xc;
      lVar27 = (ulonglong)(uVar19 & 0x1ff) * 0xc;
      lVar11 = *(longlong *)
                ((this->Triangles).Blocks.AllocatorInstance.Data + ((ulonglong)pFVar25 >> 9) * 8);
      if (bVar14) {
        lVar9 = *(longlong *)(local_d8.Blocks.AllocatorInstance.Data + lVar9);
        uVar7 = *(undefined4 *)(lVar27 + 8 + lVar11);
        *(undefined8 *)(lVar9 + lVar4) = *(undefined8 *)(lVar27 + lVar11);
        *(undefined4 *)(lVar9 + 8 + lVar4) = uVar7;
      }
      else {
        local_148 = (uint *)(lVar11 + lVar27);
        puVar31 = (undefined4 *)
                  (*(longlong *)(local_d8.Blocks.AllocatorInstance.Data + lVar9) + lVar4);
        uVar29 = *local_148;
        uVar20 = uVar22;
        if ((int)uVar29 < local_188.VertMap.ArrayNum) {
          uVar20 = ~uVar29 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *puVar31 = *(undefined4 *)
                    (local_188.VertMap.AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
        uVar29 = local_148[1];
        uVar20 = uVar22;
        if ((int)uVar29 < local_188.VertMap.ArrayNum) {
          uVar20 = ~uVar29 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar31[1] = *(undefined4 *)
                      (local_188.VertMap.AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
        uVar29 = local_148[2];
        uVar20 = uVar17;
        if ((int)uVar29 < local_188.VertMap.ArrayNum) {
          uVar20 = ~uVar29 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar31[2] = *(undefined4 *)
                      (local_188.VertMap.AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
      }
      uVar28 = local_190;
      uVar29 = (uint)local_190;
      if (local_c0.bIsSet != false) {
        if (((this->TriangleGroups).bIsSet == false) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar7 = *(undefined4 *)
                 (*(longlong *)
                   ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar25 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
        if ((local_c0.bIsSet == false) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(undefined4 *)
         (*(longlong *)
           (local_c0.TypedValue.Blocks.AllocatorInstance.Data + ((uVar28 & 0xffffffff) >> 9) * 8) +
         (ulonglong)(uVar29 & 0x1ff) * 4) = uVar7;
      }
      uVar20 = uVar17;
      if ((int)uVar19 < local_188.TriMap.ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar20 = uVar19 + 1;
      pFVar25 = (FCompactMaps *)(ulonglong)uVar20;
      *(uint *)(local_188.TriMap.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) = uVar29;
      local_190 = uVar28 + 1;
      if ((int)uVar20 < (int)uVar24) {
        do {
          lVar4 = (ulonglong)((uint)pFVar25 & 0x1ff) * 2;
          lVar9 = *(longlong *)
                   ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar25 >> 9) * 8);
          if ((*(short *)(lVar4 + lVar9) != 0) && (*(short *)(lVar4 + lVar9) != -1))
          goto LAB_14344bc70;
          uVar20 = (uint)pFVar25 + 1;
          pFVar25 = (FCompactMaps *)(ulonglong)uVar20;
        } while ((int)uVar20 < (int)uVar24);
      }
      if (uVar20 == uVar24) break;
LAB_14344bc70:
    }
  }
  FDynamicMesh3Serialization_Local::SerializeUniqueTriangleData
            (param_1,&local_d8,&local_c0,&this->GroupIDCounter,param_2);
  if ((local_c0.bIsSet != false) &&
     (TDynamicVector<int,512>::Empty(&local_c0.TypedValue,0),
     local_c0.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c0.TypedValue.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(&local_d8,0);
  if (local_d8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Blocks.AllocatorInstance.Data);
  }
LAB_14344bd07:
  if ((param_1->field_0x28 & 1) != 0) {
    FDynamicMesh3Serialization_Local::ResetDenseTriangleRefCounts
              ((ulonglong)((this->Triangles).CurBlock * 0x200 + (this->Triangles).CurBlockUsed),
               pFVar1);
    FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts
              ((ulonglong)((this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed),
               &this->Triangles,pFVar1,&this->VertexRefCounts);
    local_a0.__this = this;
    local_98.__this = this;
    FDynamicMesh3Serialization_Local::
    RecomputeEdgeData<_UE::Geometry::FDynamicMesh3::SerializeInternal<65538>_::__l41::<lambda_1>,_UE::Geometry::FDynamicMesh3::SerializeInternal<65538>_::__l41::<lambda_2>_>
              (&this->Vertices,&this->Triangles,pFVar1,&this->Edges,&this->EdgeRefCounts,
               &this->TriangleEdges,&this->VertexEdgeLists,&local_98,&local_a0);
  }
  if ((local_188.VertMap.ArrayNum != 0) || (local_188.TriMap.ArrayNum != 0)) {
    pFVar23 = &local_188;
  }
  FDynamicMesh3Serialization_Local::SerializeAttributeSet(param_1,this,pFVar23,param_2);
  if (local_188.TriMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.TriMap.AllocatorInstance.Data);
  }
  if (local_188.VertMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.VertMap.AllocatorInstance.Data);
  }
  return;
}

// FDynamicMesh3 @ 1434512c0

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::FDynamicMesh3(FDynamicMesh3 *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *pTVar1;
  TDynamicVector<int,512> *pTVar2;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this_01;
  FSmallListSet *this_02;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar3;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> *this_03;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_04;
  FMutex *pFVar4;
  FMutex *this_05;
  FMutex *this_06;
  atomic<unsigned_char> aVar5;
  FDynamicMeshAttributeSet *this_07;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  this_00 = &param_1->Vertices;
  (this->Vertices).CurBlock = (param_1->Vertices).CurBlock;
  uVar6 = (param_1->Vertices).CurBlockUsed;
  (this->Vertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).CurBlockUsed = uVar6;
  (this->Vertices).Blocks.AllocatorInstance.Data = (param_1->Vertices).Blocks.AllocatorInstance.Data
  ;
  (param_1->Vertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).Blocks.ArrayNum = (param_1->Vertices).Blocks.ArrayNum;
  (this->Vertices).Blocks.ArrayMax = (param_1->Vertices).Blocks.ArrayMax;
  (param_1->Vertices).Blocks.ArrayNum = 0;
  (param_1->Vertices).Blocks.ArrayMax = 0;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  FRefCountVector::FRefCountVector(&this->VertexRefCounts,&param_1->VertexRefCounts);
  (this->VertexNormals).bIsSet = false;
  pTVar1 = &param_1->VertexNormals;
  bVar8 = (param_1->VertexNormals).bIsSet;
  (this->VertexNormals).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->VertexNormals).TypedValue.CurBlock = (pTVar1->TypedValue).CurBlock;
    uVar6 = (param_1->VertexNormals).TypedValue.CurBlockUsed;
    (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VertexNormals).TypedValue.CurBlockUsed = uVar6;
    (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data =
         (param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    (param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->VertexNormals).TypedValue.Blocks.ArrayNum =
         (param_1->VertexNormals).TypedValue.Blocks.ArrayNum;
    (this->VertexNormals).TypedValue.Blocks.ArrayMax =
         (param_1->VertexNormals).TypedValue.Blocks.ArrayMax;
    (param_1->VertexNormals).TypedValue.Blocks.ArrayNum = 0;
    (param_1->VertexNormals).TypedValue.Blocks.ArrayMax = 0;
    (pTVar1->TypedValue).CurBlock = 0;
    (pTVar1->TypedValue).CurBlockUsed = 0;
    TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&pTVar1->TypedValue);
  }
  (this->VertexColors).bIsSet = false;
  pTVar1 = &param_1->VertexColors;
  bVar8 = (param_1->VertexColors).bIsSet;
  (this->VertexColors).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->VertexColors).TypedValue.CurBlock = (pTVar1->TypedValue).CurBlock;
    uVar6 = (param_1->VertexColors).TypedValue.CurBlockUsed;
    (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VertexColors).TypedValue.CurBlockUsed = uVar6;
    (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data =
         (param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    (param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->VertexColors).TypedValue.Blocks.ArrayNum =
         (param_1->VertexColors).TypedValue.Blocks.ArrayNum;
    (this->VertexColors).TypedValue.Blocks.ArrayMax =
         (param_1->VertexColors).TypedValue.Blocks.ArrayMax;
    (param_1->VertexColors).TypedValue.Blocks.ArrayNum = 0;
    (param_1->VertexColors).TypedValue.Blocks.ArrayMax = 0;
    (pTVar1->TypedValue).CurBlock = 0;
    (pTVar1->TypedValue).CurBlockUsed = 0;
    TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&pTVar1->TypedValue);
  }
  (this->VertexUVs).bIsSet = false;
  this_01 = &param_1->VertexUVs;
  bVar8 = (param_1->VertexUVs).bIsSet;
  (this->VertexUVs).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->VertexUVs).TypedValue.CurBlock = (this_01->TypedValue).CurBlock;
    uVar6 = (param_1->VertexUVs).TypedValue.CurBlockUsed;
    (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VertexUVs).TypedValue.CurBlockUsed = uVar6;
    (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data =
         (param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    (param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VertexUVs).TypedValue.Blocks.ArrayNum = (param_1->VertexUVs).TypedValue.Blocks.ArrayNum;
    (this->VertexUVs).TypedValue.Blocks.ArrayMax = (param_1->VertexUVs).TypedValue.Blocks.ArrayMax;
    (param_1->VertexUVs).TypedValue.Blocks.ArrayNum = 0;
    (param_1->VertexUVs).TypedValue.Blocks.ArrayMax = 0;
    (this_01->TypedValue).CurBlock = 0;
    (this_01->TypedValue).CurBlockUsed = 0;
    TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&this_01->TypedValue);
  }
  this_02 = &param_1->VertexEdgeLists;
  (this->VertexEdgeLists).ListHeads.CurBlock = (this_02->ListHeads).CurBlock;
  uVar6 = (param_1->VertexEdgeLists).ListHeads.CurBlockUsed;
  (this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).ListHeads.CurBlockUsed = uVar6;
  (this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data =
       (param_1->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data;
  (param_1->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).ListHeads.Blocks.ArrayNum =
       (param_1->VertexEdgeLists).ListHeads.Blocks.ArrayNum;
  (this->VertexEdgeLists).ListHeads.Blocks.ArrayMax =
       (param_1->VertexEdgeLists).ListHeads.Blocks.ArrayMax;
  (param_1->VertexEdgeLists).ListHeads.Blocks.ArrayNum = 0;
  (param_1->VertexEdgeLists).ListHeads.Blocks.ArrayMax = 0;
  (this_02->ListHeads).CurBlock = 0;
  (this_02->ListHeads).CurBlockUsed = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&this_02->ListHeads);
  pTVar2 = &(param_1->VertexEdgeLists).ListBlocks;
  (this->VertexEdgeLists).ListBlocks.CurBlock = (param_1->VertexEdgeLists).ListBlocks.CurBlock;
  uVar6 = (param_1->VertexEdgeLists).ListBlocks.CurBlockUsed;
  (this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).ListBlocks.CurBlockUsed = uVar6;
  (this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data =
       (param_1->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data;
  (param_1->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).ListBlocks.Blocks.ArrayNum =
       (param_1->VertexEdgeLists).ListBlocks.Blocks.ArrayNum;
  (this->VertexEdgeLists).ListBlocks.Blocks.ArrayMax =
       (param_1->VertexEdgeLists).ListBlocks.Blocks.ArrayMax;
  (param_1->VertexEdgeLists).ListBlocks.Blocks.ArrayNum = 0;
  (param_1->VertexEdgeLists).ListBlocks.Blocks.ArrayMax = 0;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  pTVar2 = &(param_1->VertexEdgeLists).FreeBlocks;
  (this->VertexEdgeLists).FreeBlocks.CurBlock = (param_1->VertexEdgeLists).FreeBlocks.CurBlock;
  uVar6 = (param_1->VertexEdgeLists).FreeBlocks.CurBlockUsed;
  (this->VertexEdgeLists).FreeBlocks.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).FreeBlocks.CurBlockUsed = uVar6;
  (this->VertexEdgeLists).FreeBlocks.Blocks.AllocatorInstance.Data =
       (param_1->VertexEdgeLists).FreeBlocks.Blocks.AllocatorInstance.Data;
  (param_1->VertexEdgeLists).FreeBlocks.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).FreeBlocks.Blocks.ArrayNum =
       (param_1->VertexEdgeLists).FreeBlocks.Blocks.ArrayNum;
  (this->VertexEdgeLists).FreeBlocks.Blocks.ArrayMax =
       (param_1->VertexEdgeLists).FreeBlocks.Blocks.ArrayMax;
  (param_1->VertexEdgeLists).FreeBlocks.Blocks.ArrayNum = 0;
  (param_1->VertexEdgeLists).FreeBlocks.Blocks.ArrayMax = 0;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  pTVar2 = &(param_1->VertexEdgeLists).LinkedListElements;
  (this->VertexEdgeLists).AllocatedCount = (param_1->VertexEdgeLists).AllocatedCount;
  (this->VertexEdgeLists).LinkedListElements.CurBlock = pTVar2->CurBlock;
  uVar6 = (param_1->VertexEdgeLists).LinkedListElements.CurBlockUsed;
  (this->VertexEdgeLists).LinkedListElements.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).LinkedListElements.CurBlockUsed = uVar6;
  (this->VertexEdgeLists).LinkedListElements.Blocks.AllocatorInstance.Data =
       (param_1->VertexEdgeLists).LinkedListElements.Blocks.AllocatorInstance.Data;
  (param_1->VertexEdgeLists).LinkedListElements.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexEdgeLists).LinkedListElements.Blocks.ArrayNum =
       (param_1->VertexEdgeLists).LinkedListElements.Blocks.ArrayNum;
  (this->VertexEdgeLists).LinkedListElements.Blocks.ArrayMax =
       (param_1->VertexEdgeLists).LinkedListElements.Blocks.ArrayMax;
  (param_1->VertexEdgeLists).LinkedListElements.Blocks.ArrayNum = 0;
  (param_1->VertexEdgeLists).LinkedListElements.Blocks.ArrayMax = 0;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  pTVar3 = &param_1->Triangles;
  (this->VertexEdgeLists).FreeHeadIndex = (param_1->VertexEdgeLists).FreeHeadIndex;
  (this->Triangles).CurBlock = pTVar3->CurBlock;
  uVar6 = (param_1->Triangles).CurBlockUsed;
  (this->Triangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).CurBlockUsed = uVar6;
  (this->Triangles).Blocks.AllocatorInstance.Data =
       (param_1->Triangles).Blocks.AllocatorInstance.Data;
  (param_1->Triangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).Blocks.ArrayNum = (param_1->Triangles).Blocks.ArrayNum;
  (this->Triangles).Blocks.ArrayMax = (param_1->Triangles).Blocks.ArrayMax;
  (param_1->Triangles).Blocks.ArrayNum = 0;
  (param_1->Triangles).Blocks.ArrayMax = 0;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar3);
  FRefCountVector::FRefCountVector(&this->TriangleRefCounts,&param_1->TriangleRefCounts);
  pTVar3 = &param_1->TriangleEdges;
  (this->TriangleEdges).CurBlock = pTVar3->CurBlock;
  uVar6 = (param_1->TriangleEdges).CurBlockUsed;
  (this->TriangleEdges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleEdges).CurBlockUsed = uVar6;
  (this->TriangleEdges).Blocks.AllocatorInstance.Data =
       (param_1->TriangleEdges).Blocks.AllocatorInstance.Data;
  (param_1->TriangleEdges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleEdges).Blocks.ArrayNum = (param_1->TriangleEdges).Blocks.ArrayNum;
  (this->TriangleEdges).Blocks.ArrayMax = (param_1->TriangleEdges).Blocks.ArrayMax;
  (param_1->TriangleEdges).Blocks.ArrayNum = 0;
  (param_1->TriangleEdges).Blocks.ArrayMax = 0;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar3);
  (this->TriangleGroups).bIsSet = false;
  this_03 = &param_1->TriangleGroups;
  bVar8 = (param_1->TriangleGroups).bIsSet;
  (this->TriangleGroups).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->TriangleGroups).TypedValue.CurBlock = (this_03->TypedValue).CurBlock;
    uVar6 = (param_1->TriangleGroups).TypedValue.CurBlockUsed;
    (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (this->TriangleGroups).TypedValue.CurBlockUsed = uVar6;
    (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data =
         (param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
    (param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->TriangleGroups).TypedValue.Blocks.ArrayNum =
         (param_1->TriangleGroups).TypedValue.Blocks.ArrayNum;
    (this->TriangleGroups).TypedValue.Blocks.ArrayMax =
         (param_1->TriangleGroups).TypedValue.Blocks.ArrayMax;
    (param_1->TriangleGroups).TypedValue.Blocks.ArrayNum = 0;
    (param_1->TriangleGroups).TypedValue.Blocks.ArrayMax = 0;
    (this_03->TypedValue).CurBlock = 0;
    (this_03->TypedValue).CurBlockUsed = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&this_03->TypedValue);
  }
  this_04 = &param_1->Edges;
  this->GroupIDCounter = param_1->GroupIDCounter;
  (this->Edges).CurBlock = this_04->CurBlock;
  uVar6 = (param_1->Edges).CurBlockUsed;
  (this->Edges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).CurBlockUsed = uVar6;
  (this->Edges).Blocks.AllocatorInstance.Data = (param_1->Edges).Blocks.AllocatorInstance.Data;
  (param_1->Edges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Blocks.ArrayNum = (param_1->Edges).Blocks.ArrayNum;
  (this->Edges).Blocks.ArrayMax = (param_1->Edges).Blocks.ArrayMax;
  (param_1->Edges).Blocks.ArrayNum = 0;
  (param_1->Edges).Blocks.ArrayMax = 0;
  this_04->CurBlock = 0;
  this_04->CurBlockUsed = 0;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_04);
  FRefCountVector::FRefCountVector(&this->EdgeRefCounts,&param_1->EdgeRefCounts);
  pFVar4 = &(this->ChangeStampShape).Mutex;
  (this->AttributeSet).Ptr = (param_1->AttributeSet).Ptr;
  (param_1->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
  this_05 = &(this->ChangeStampTopology).Mutex;
  this->bEnableShapeChangeStamp = false;
  uVar6 = 1;
  this->ShapeChangeStamp = (atomic<unsigned_int>)0x0;
  this->TopologyChangeStamp = (atomic<unsigned_int>)0x0;
  (this->ChangeStampShape).bIsEnabled = false;
  pFVar4->State = (atomic<unsigned_char>)0x0;
  (this->ChangeStampShape).Value = 1;
  (this->ChangeStampTopology).bIsEnabled = true;
  this_05->State = (atomic<unsigned_char>)0x0;
  uVar7 = 1;
  (this->ChangeStampTopology).Value = 1;
  if ((param_1->ChangeStampShape).bIsEnabled != false) {
    this_06 = &(param_1->ChangeStampShape).Mutex;
    LOCK();
    bVar8 = this_06->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      this_06->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(this_06);
    }
    uVar6 = (param_1->ChangeStampShape).Value;
    LOCK();
    aVar5 = this_06->State;
    this_06->State = (atomic<unsigned_char>)((char)this_06->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(this_06);
    }
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    LOCK();
    bVar8 = pFVar4->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      pFVar4->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(pFVar4);
    }
    (this->ChangeStampShape).Value = uVar6;
    LOCK();
    aVar5 = pFVar4->State;
    pFVar4->State = (atomic<unsigned_char>)((char)pFVar4->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar4);
    }
  }
  if ((param_1->ChangeStampTopology).bIsEnabled != false) {
    pFVar4 = &(param_1->ChangeStampTopology).Mutex;
    LOCK();
    bVar8 = pFVar4->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      pFVar4->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(pFVar4);
    }
    uVar7 = (param_1->ChangeStampTopology).Value;
    LOCK();
    aVar5 = pFVar4->State;
    pFVar4->State = (atomic<unsigned_char>)((char)pFVar4->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar4);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    LOCK();
    bVar8 = this_05->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      this_05->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(this_05);
    }
    (this->ChangeStampTopology).Value = uVar7;
    LOCK();
    aVar5 = this_05->State;
    this_05->State = (atomic<unsigned_char>)((char)this_05->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(this_05);
    }
  }
  this_07 = (this->AttributeSet).Ptr;
  if (this_07 != (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMeshAttributeSet::Reparent(this_07,this);
  }
  return this;
}

// FDynamicMesh3 @ 143451870

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::FDynamicMesh3(FDynamicMesh3 *this,FDynamicMesh3 *param_1)

{
  FMutex *pFVar1;
  FMutex *this_00;
  FMutex *this_01;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  TDynamicVector<UE::Math::TVector<double>,512>::TDynamicVector<UE::Math::TVector<double>,512>
            (&this->Vertices,&param_1->Vertices);
  TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
            (&(this->VertexRefCounts).RefCounts,&(param_1->VertexRefCounts).RefCounts);
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->VertexRefCounts).FreeIndices,&(param_1->VertexRefCounts).FreeIndices);
  (this->VertexRefCounts).UsedCount = (param_1->VertexRefCounts).UsedCount;
  (this->VertexNormals).bIsSet = false;
  bVar5 = (param_1->VertexNormals).bIsSet;
  (this->VertexNormals).bIsSet = bVar5;
  if (bVar5 != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::TDynamicVector<UE::Math::TVector<float>,512>
              (&(this->VertexNormals).TypedValue,&(param_1->VertexNormals).TypedValue);
  }
  (this->VertexColors).bIsSet = false;
  bVar5 = (param_1->VertexColors).bIsSet;
  (this->VertexColors).bIsSet = bVar5;
  if (bVar5 != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::TDynamicVector<UE::Math::TVector<float>,512>
              (&(this->VertexColors).TypedValue,&(param_1->VertexColors).TypedValue);
  }
  (this->VertexUVs).bIsSet = false;
  bVar5 = (param_1->VertexUVs).bIsSet;
  (this->VertexUVs).bIsSet = bVar5;
  if (bVar5 != false) {
    TDynamicVector<UE::Math::TVector2<float>,512>::TDynamicVector<UE::Math::TVector2<float>,512>
              (&(this->VertexUVs).TypedValue,&(param_1->VertexUVs).TypedValue);
  }
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->VertexEdgeLists).ListHeads,&(param_1->VertexEdgeLists).ListHeads);
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->VertexEdgeLists).ListBlocks,&(param_1->VertexEdgeLists).ListBlocks);
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->VertexEdgeLists).FreeBlocks,&(param_1->VertexEdgeLists).FreeBlocks);
  (this->VertexEdgeLists).AllocatedCount = (param_1->VertexEdgeLists).AllocatedCount;
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->VertexEdgeLists).LinkedListElements,
             &(param_1->VertexEdgeLists).LinkedListElements);
  (this->VertexEdgeLists).FreeHeadIndex = (param_1->VertexEdgeLists).FreeHeadIndex;
  TDynamicVector<UE::Geometry::FIndex3i,512>::TDynamicVector<UE::Geometry::FIndex3i,512>
            (&this->Triangles,&param_1->Triangles);
  TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
            (&(this->TriangleRefCounts).RefCounts,&(param_1->TriangleRefCounts).RefCounts);
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->TriangleRefCounts).FreeIndices,&(param_1->TriangleRefCounts).FreeIndices);
  (this->TriangleRefCounts).UsedCount = (param_1->TriangleRefCounts).UsedCount;
  TDynamicVector<UE::Geometry::FIndex3i,512>::TDynamicVector<UE::Geometry::FIndex3i,512>
            (&this->TriangleEdges,&param_1->TriangleEdges);
  (this->TriangleGroups).bIsSet = false;
  bVar5 = (param_1->TriangleGroups).bIsSet;
  (this->TriangleGroups).bIsSet = bVar5;
  if (bVar5 != false) {
    TDynamicVector<int,512>::TDynamicVector<int,512>
              (&(this->TriangleGroups).TypedValue,&(param_1->TriangleGroups).TypedValue);
  }
  this->GroupIDCounter = param_1->GroupIDCounter;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>(&this->Edges,&param_1->Edges);
  TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
            (&(this->EdgeRefCounts).RefCounts,&(param_1->EdgeRefCounts).RefCounts);
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&(this->EdgeRefCounts).FreeIndices,&(param_1->EdgeRefCounts).FreeIndices);
  pFVar1 = &(this->ChangeStampShape).Mutex;
  (this->EdgeRefCounts).UsedCount = (param_1->EdgeRefCounts).UsedCount;
  this_00 = &(this->ChangeStampTopology).Mutex;
  (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
  uVar3 = 1;
  this->bEnableShapeChangeStamp = false;
  this->ShapeChangeStamp = (atomic<unsigned_int>)0x0;
  this->TopologyChangeStamp = (atomic<unsigned_int>)0x0;
  (this->ChangeStampShape).bIsEnabled = false;
  pFVar1->State = (atomic<unsigned_char>)0x0;
  this_00->State = (atomic<unsigned_char>)0x0;
  (this->ChangeStampShape).Value = 1;
  (this->ChangeStampTopology).bIsEnabled = true;
  uVar4 = 1;
  (this->ChangeStampTopology).Value = 1;
  if ((param_1->ChangeStampShape).bIsEnabled != false) {
    this_01 = &(param_1->ChangeStampShape).Mutex;
    LOCK();
    bVar5 = this_01->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_01->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(this_01);
    }
    uVar3 = (param_1->ChangeStampShape).Value;
    LOCK();
    aVar2 = this_01->State;
    this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_01);
    }
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    LOCK();
    bVar5 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(pFVar1);
    }
    (this->ChangeStampShape).Value = uVar3;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((param_1->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(param_1->ChangeStampTopology).Mutex;
    LOCK();
    bVar5 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(pFVar1);
    }
    uVar4 = (param_1->ChangeStampTopology).Value;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(this_00);
    }
    (this->ChangeStampTopology).Value = uVar4;
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    EnableAttributes(this);
    FDynamicMeshAttributeSet::Copy((this->AttributeSet).Ptr,(param_1->AttributeSet).Ptr);
  }
  return this;
}

// FDynamicMesh3 @ 143451bc0

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::FDynamicMesh3(FDynamicMesh3 *this,FMeshShapeGenerator *param_1)

{
  TDynamicVector<int,512> *pTVar1;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar2;
  FRefCountVector *pFVar3;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *this_01;
  
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  this_01 = &this->Vertices;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->Vertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).Blocks.ArrayNum = 0;
  (this->Vertices).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
  (this->VertexRefCounts).FreeIndices.CurBlock = 0;
  (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->VertexRefCounts).UsedCount = 0;
  (this->VertexRefCounts).RefCounts.CurBlock = 0;
  (this->VertexRefCounts).RefCounts.CurBlockUsed = 0;
  (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&(this->VertexRefCounts).RefCounts);
  pTVar1 = &(this->VertexRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->VertexRefCounts).UsedCount = 0;
  (this->VertexNormals).bIsSet = false;
  (this->VertexColors).bIsSet = false;
  (this->VertexUVs).bIsSet = false;
  FSmallListSet::FSmallListSet(&this->VertexEdgeLists);
  pTVar2 = &this->Triangles;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->Triangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).Blocks.ArrayNum = 0;
  (this->Triangles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar2);
  pFVar3 = &this->TriangleRefCounts;
  (pFVar3->RefCounts).CurBlock = 0;
  (pFVar3->RefCounts).CurBlockUsed = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar3->RefCounts);
  pTVar1 = &(this->TriangleRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar2 = &this->TriangleEdges;
  (this->TriangleRefCounts).UsedCount = 0;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->TriangleEdges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleEdges).Blocks.ArrayNum = 0;
  (this->TriangleEdges).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar2);
  this_00 = &this->Edges;
  (this->TriangleGroups).bIsSet = false;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->Edges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Blocks.ArrayNum = 0;
  (this->Edges).Blocks.ArrayMax = 0;
  this->GroupIDCounter = 0;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_00);
  pFVar3 = &this->EdgeRefCounts;
  (pFVar3->RefCounts).CurBlock = 0;
  (pFVar3->RefCounts).CurBlockUsed = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar3->RefCounts);
  pTVar1 = &(this->EdgeRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->EdgeRefCounts).UsedCount = 0;
  (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
  this->bEnableShapeChangeStamp = false;
  this->ShapeChangeStamp = (atomic<unsigned_int>)0x0;
  this->TopologyChangeStamp = (atomic<unsigned_int>)0x0;
  (this->ChangeStampShape).bIsEnabled = false;
  (this->ChangeStampShape).Mutex = (atomic<unsigned_char>)0x0;
  (this->ChangeStampShape).Value = 1;
  (this->ChangeStampTopology).bIsEnabled = true;
  (this->ChangeStampTopology).Mutex = (atomic<unsigned_char>)0x0;
  (this->ChangeStampTopology).Value = 1;
  Copy(this,param_1);
  return this;
}

// FDynamicMesh3 @ 143451d70

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::FDynamicMesh3(FDynamicMesh3 *this,EMeshComponents param_1)

{
  FDynamicMesh3(this,(bool)(param_1 & VertexNormals),(bool)(param_1 >> 1 & 1),
                (bool)(param_1 >> 2 & 1),(bool)(param_1 >> 3 & 1));
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  return this;
}

// FDynamicMesh3 @ 143451dc0

FDynamicMesh3 * __thiscall UE::Geometry::FDynamicMesh3::FDynamicMesh3(FDynamicMesh3 *this)

{
  FDynamicMesh3(this,false,false,false,false);
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  return this;
}

// FDynamicMesh3 @ 143451e00

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::FDynamicMesh3
          (FDynamicMesh3 *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  TDynamicVector<int,512> *pTVar1;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *pTVar2;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar3;
  FRefCountVector *pFVar4;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_00;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this_01;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> *this_02;
  FScriptContainerElement *pFVar5;
  TDynamicVector<UE::Math::TVector<double>,512> *this_03;
  TDynamicVector<UE::Math::TVector<float>,512> local_78;
  TDynamicVector<UE::Math::TVector<float>,512> local_60;
  TDynamicVector<UE::Math::TVector2<float>,512> local_48;
  TDynamicVector<int,512> local_30;
  
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  this_03 = &this->Vertices;
  this_03->CurBlock = 0;
  this_03->CurBlockUsed = 0;
  (this->Vertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).Blocks.ArrayNum = 0;
  (this->Vertices).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_03);
  (this->VertexRefCounts).FreeIndices.CurBlock = 0;
  (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->VertexRefCounts).UsedCount = 0;
  (this->VertexRefCounts).RefCounts.CurBlock = 0;
  (this->VertexRefCounts).RefCounts.CurBlockUsed = 0;
  (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&(this->VertexRefCounts).RefCounts);
  pTVar1 = &(this->VertexRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->VertexRefCounts).UsedCount = 0;
  (this->VertexNormals).bIsSet = false;
  (this->VertexColors).bIsSet = false;
  (this->VertexUVs).bIsSet = false;
  FSmallListSet::FSmallListSet(&this->VertexEdgeLists);
  pTVar3 = &this->Triangles;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->Triangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).Blocks.ArrayNum = 0;
  (this->Triangles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar3);
  pFVar4 = &this->TriangleRefCounts;
  (pFVar4->RefCounts).CurBlock = 0;
  (pFVar4->RefCounts).CurBlockUsed = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar4->RefCounts);
  pTVar1 = &(this->TriangleRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar3 = &this->TriangleEdges;
  (this->TriangleRefCounts).UsedCount = 0;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->TriangleEdges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleEdges).Blocks.ArrayNum = 0;
  (this->TriangleEdges).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar3);
  this_00 = &this->Edges;
  (this->TriangleGroups).bIsSet = false;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->Edges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Blocks.ArrayNum = 0;
  (this->Edges).Blocks.ArrayMax = 0;
  this->GroupIDCounter = 0;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_00);
  pFVar4 = &this->EdgeRefCounts;
  (pFVar4->RefCounts).CurBlock = 0;
  (pFVar4->RefCounts).CurBlockUsed = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar4->RefCounts);
  pTVar1 = &(this->EdgeRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->EdgeRefCounts).UsedCount = 0;
  (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
  this->bEnableShapeChangeStamp = false;
  this->ShapeChangeStamp = (atomic<unsigned_int>)0x0;
  this->TopologyChangeStamp = (atomic<unsigned_int>)0x0;
  (this->ChangeStampShape).bIsEnabled = false;
  (this->ChangeStampShape).Mutex = (atomic<unsigned_char>)0x0;
  (this->ChangeStampShape).Value = 1;
  (this->ChangeStampTopology).bIsEnabled = true;
  (this->ChangeStampTopology).Mutex = (atomic<unsigned_char>)0x0;
  (this->ChangeStampTopology).Value = 1;
  if (param_1) {
    local_78.CurBlock = 0;
    local_78.CurBlockUsed = 0;
    local_78.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Blocks.ArrayNum = 0;
    local_78.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_78);
    pTVar2 = &this->VertexNormals;
    if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *)&local_78 !=
        pTVar2) {
      if ((this->VertexNormals).bIsSet != false) {
        TDynamicVector<UE::Math::TVector<float>,512>::Empty(&pTVar2->TypedValue,0);
        pFVar5 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
      }
      (pTVar2->TypedValue).CurBlock = local_78.CurBlock;
      (this->VertexNormals).TypedValue.CurBlockUsed = local_78.CurBlockUsed;
      (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data =
           local_78.Blocks.AllocatorInstance.Data;
      (this->VertexNormals).TypedValue.Blocks.ArrayNum = local_78.Blocks.ArrayNum;
      (this->VertexNormals).TypedValue.Blocks.ArrayMax = local_78.Blocks.ArrayMax;
      local_78.Blocks.ArrayNum = 0;
      local_78.Blocks.ArrayMax = 0;
      local_78.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CurBlock = 0;
      local_78.CurBlockUsed = 0;
      TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_78);
      (this->VertexNormals).bIsSet = true;
    }
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_78,0);
    if (local_78.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Blocks.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    local_60.CurBlock = 0;
    local_60.CurBlockUsed = 0;
    local_60.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Blocks.ArrayNum = 0;
    local_60.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_60);
    pTVar2 = &this->VertexColors;
    if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *)&local_60 !=
        pTVar2) {
      if ((this->VertexColors).bIsSet != false) {
        TDynamicVector<UE::Math::TVector<float>,512>::Empty(&pTVar2->TypedValue,0);
        pFVar5 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
      }
      (pTVar2->TypedValue).CurBlock = local_60.CurBlock;
      (this->VertexColors).TypedValue.CurBlockUsed = local_60.CurBlockUsed;
      (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data =
           local_60.Blocks.AllocatorInstance.Data;
      (this->VertexColors).TypedValue.Blocks.ArrayNum = local_60.Blocks.ArrayNum;
      (this->VertexColors).TypedValue.Blocks.ArrayMax = local_60.Blocks.ArrayMax;
      local_60.Blocks.ArrayNum = 0;
      local_60.Blocks.ArrayMax = 0;
      local_60.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.CurBlock = 0;
      local_60.CurBlockUsed = 0;
      TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_60);
      (this->VertexColors).bIsSet = true;
    }
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_60,0);
    if (local_60.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Blocks.AllocatorInstance.Data);
    }
  }
  if (param_3) {
    local_48.CurBlock = 0;
    local_48.CurBlockUsed = 0;
    local_48.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Blocks.ArrayNum = 0;
    local_48.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_48);
    this_01 = &this->VertexUVs;
    if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *)&local_48 !=
        this_01) {
      if ((this->VertexUVs).bIsSet != false) {
        TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this_01->TypedValue,0);
        pFVar5 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
      }
      (this_01->TypedValue).CurBlock = local_48.CurBlock;
      (this->VertexUVs).TypedValue.CurBlockUsed = local_48.CurBlockUsed;
      (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data =
           local_48.Blocks.AllocatorInstance.Data;
      (this->VertexUVs).TypedValue.Blocks.ArrayNum = local_48.Blocks.ArrayNum;
      (this->VertexUVs).TypedValue.Blocks.ArrayMax = local_48.Blocks.ArrayMax;
      local_48.Blocks.ArrayNum = 0;
      local_48.Blocks.ArrayMax = 0;
      local_48.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.CurBlock = 0;
      local_48.CurBlockUsed = 0;
      TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_48);
      (this->VertexUVs).bIsSet = true;
    }
    TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_48,0);
    if (local_48.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Blocks.AllocatorInstance.Data);
    }
  }
  if (param_4) {
    local_30.CurBlock = 0;
    local_30.CurBlockUsed = 0;
    local_30.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Blocks.ArrayNum = 0;
    local_30.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_30);
    this_02 = &this->TriangleGroups;
    if ((TOptional<UE::Geometry::TDynamicVector<int,512>_> *)&local_30 != this_02) {
      if ((this->TriangleGroups).bIsSet != false) {
        TDynamicVector<int,512>::Empty(&this_02->TypedValue,0);
        pFVar5 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
      }
      (this_02->TypedValue).CurBlock = local_30.CurBlock;
      (this->TriangleGroups).TypedValue.CurBlockUsed = local_30.CurBlockUsed;
      (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data =
           local_30.Blocks.AllocatorInstance.Data;
      (this->TriangleGroups).TypedValue.Blocks.ArrayNum = local_30.Blocks.ArrayNum;
      (this->TriangleGroups).TypedValue.Blocks.ArrayMax = local_30.Blocks.ArrayMax;
      local_30.Blocks.ArrayNum = 0;
      local_30.Blocks.ArrayMax = 0;
      local_30.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.CurBlock = 0;
      local_30.CurBlockUsed = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&local_30);
      (this->TriangleGroups).bIsSet = true;
    }
    TDynamicVector<int,512>::Empty(&local_30,0);
    if (local_30.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Blocks.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FDynamicMesh3 @ 1434546d0

void __thiscall UE::Geometry::FDynamicMesh3::~FDynamicMesh3(FDynamicMesh3 *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FDynamicMesh3_Geometry_UE__6B_;
  pFVar1 = (this->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)pFVar1->_padding_)();
  }
  TDynamicVector<int,512>::Empty(&(this->EdgeRefCounts).FreeIndices,0);
  pFVar2 = (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->EdgeRefCounts).RefCounts,0);
  pFVar2 = (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty(&this->Edges,0);
  pFVar2 = (this->Edges).Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((this->TriangleGroups).bIsSet != false) {
    TDynamicVector<int,512>::Empty(&(this->TriangleGroups).TypedValue,0);
    pFVar2 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(&this->TriangleEdges,0);
  pFVar2 = (this->TriangleEdges).Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<int,512>::Empty(&(this->TriangleRefCounts).FreeIndices,0);
  pFVar2 = (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->TriangleRefCounts).RefCounts,0);
  pFVar2 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(&this->Triangles,0);
  pFVar2 = (this->Triangles).Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSmallListSet::~FSmallListSet(&this->VertexEdgeLists);
  if ((this->VertexUVs).bIsSet != false) {
    TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&(this->VertexUVs).TypedValue,0);
    pFVar2 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  if ((this->VertexColors).bIsSet != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexColors).TypedValue,0);
    pFVar2 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  if ((this->VertexNormals).bIsSet != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexNormals).TypedValue,0);
    pFVar2 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  TDynamicVector<int,512>::Empty(&(this->VertexRefCounts).FreeIndices,0);
  pFVar2 = (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->VertexRefCounts).RefCounts,0);
  pFVar2 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->Vertices,0);
  pFVar2 = (this->Vertices).Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 143455be0

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::operator=(FDynamicMesh3 *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *this_01;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this_02;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this_03;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> *this_04;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> *this_05;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_06;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_07;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  *pTVar3;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  *pTVar4;
  FMutex *pFVar5;
  atomic<unsigned_char> aVar6;
  FScriptContainerElement *pFVar7;
  FDynamicMeshAttributeSet *pFVar8;
  uint uVar9;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar10;
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar11;
  bool bVar12;
  
  if (this == param_1) {
    return this;
  }
  this_00 = &param_1->Vertices;
  this_01 = &this->Vertices;
  if (this_01 != this_00) {
    TDynamicVector<UE::Math::TVector<double>,512>::Empty(this_01,0);
    pTVar1 = &(param_1->Vertices).Blocks;
    this_01->CurBlock = this_00->CurBlock;
    (this->Vertices).CurBlockUsed = (param_1->Vertices).CurBlockUsed;
    pTVar10 = &(this->Vertices).Blocks;
    if (pTVar10 != pTVar1) {
      pFVar7 = (pTVar10->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar10->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Vertices).Blocks.ArrayNum = (param_1->Vertices).Blocks.ArrayNum;
      (this->Vertices).Blocks.ArrayMax = (param_1->Vertices).Blocks.ArrayMax;
      (param_1->Vertices).Blocks.ArrayNum = 0;
      (param_1->Vertices).Blocks.ArrayMax = 0;
    }
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  }
  FRefCountVector::operator=(&this->VertexRefCounts,&param_1->VertexRefCounts);
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
            (&this->VertexNormals,&param_1->VertexNormals);
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
            (&this->VertexColors,&param_1->VertexColors);
  this_02 = &param_1->VertexUVs;
  this_03 = &this->VertexUVs;
  if (this_02 != this_03) {
    if ((param_1->VertexUVs).bIsSet == false) {
      if ((this->VertexUVs).bIsSet != false) {
        TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this_03->TypedValue,0);
        pFVar7 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (this->VertexUVs).bIsSet = false;
      }
    }
    else {
      if ((this->VertexUVs).bIsSet != false) {
        TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this_03->TypedValue,0);
        pFVar7 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
      }
      (this_03->TypedValue).CurBlock = (this_02->TypedValue).CurBlock;
      uVar9 = (param_1->VertexUVs).TypedValue.CurBlockUsed;
      (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->VertexUVs).TypedValue.CurBlockUsed = uVar9;
      (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data =
           (param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
      (param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (this->VertexUVs).TypedValue.Blocks.ArrayNum = (param_1->VertexUVs).TypedValue.Blocks.ArrayNum
      ;
      (this->VertexUVs).TypedValue.Blocks.ArrayMax = (param_1->VertexUVs).TypedValue.Blocks.ArrayMax
      ;
      (param_1->VertexUVs).TypedValue.Blocks.ArrayNum = 0;
      (param_1->VertexUVs).TypedValue.Blocks.ArrayMax = 0;
      (this_02->TypedValue).CurBlock = 0;
      (this_02->TypedValue).CurBlockUsed = 0;
      TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&this_02->TypedValue);
      (this->VertexUVs).bIsSet = true;
    }
  }
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).ListHeads,&(param_1->VertexEdgeLists).ListHeads);
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).ListBlocks,&(param_1->VertexEdgeLists).ListBlocks);
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).FreeBlocks,&(param_1->VertexEdgeLists).FreeBlocks);
  (this->VertexEdgeLists).AllocatedCount = (param_1->VertexEdgeLists).AllocatedCount;
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).LinkedListElements,
             &(param_1->VertexEdgeLists).LinkedListElements);
  (this->VertexEdgeLists).FreeHeadIndex = (param_1->VertexEdgeLists).FreeHeadIndex;
  TDynamicVector<UE::Geometry::FIndex3i,512>::operator=(&this->Triangles,&param_1->Triangles);
  FRefCountVector::operator=(&this->TriangleRefCounts,&param_1->TriangleRefCounts);
  TDynamicVector<UE::Geometry::FIndex3i,512>::operator=
            (&this->TriangleEdges,&param_1->TriangleEdges);
  this_04 = &param_1->TriangleGroups;
  this_05 = &this->TriangleGroups;
  if (this_04 != this_05) {
    if ((param_1->TriangleGroups).bIsSet == false) {
      if ((this->TriangleGroups).bIsSet != false) {
        TDynamicVector<int,512>::Empty(&this_05->TypedValue,0);
        pFVar7 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (this->TriangleGroups).bIsSet = false;
      }
    }
    else {
      if ((this->TriangleGroups).bIsSet != false) {
        TDynamicVector<int,512>::Empty(&this_05->TypedValue,0);
        pFVar7 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
      }
      (this_05->TypedValue).CurBlock = (this_04->TypedValue).CurBlock;
      uVar9 = (param_1->TriangleGroups).TypedValue.CurBlockUsed;
      (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this->TriangleGroups).TypedValue.CurBlockUsed = uVar9;
      (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data =
           (param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
      (param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this->TriangleGroups).TypedValue.Blocks.ArrayNum =
           (param_1->TriangleGroups).TypedValue.Blocks.ArrayNum;
      (this->TriangleGroups).TypedValue.Blocks.ArrayMax =
           (param_1->TriangleGroups).TypedValue.Blocks.ArrayMax;
      (param_1->TriangleGroups).TypedValue.Blocks.ArrayNum = 0;
      (param_1->TriangleGroups).TypedValue.Blocks.ArrayMax = 0;
      (this_04->TypedValue).CurBlock = 0;
      (this_04->TypedValue).CurBlockUsed = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&this_04->TypedValue);
      (this->TriangleGroups).bIsSet = true;
    }
  }
  this_06 = &param_1->Edges;
  this_07 = &this->Edges;
  this->GroupIDCounter = param_1->GroupIDCounter;
  if (this_07 != this_06) {
    TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty(this_07,0);
    pTVar2 = &(param_1->Edges).Blocks;
    this_07->CurBlock = this_06->CurBlock;
    (this->Edges).CurBlockUsed = (param_1->Edges).CurBlockUsed;
    pTVar11 = &(this->Edges).Blocks;
    if (pTVar11 != pTVar2) {
      pFVar7 = (pTVar11->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar11->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Edges).Blocks.ArrayNum = (param_1->Edges).Blocks.ArrayNum;
      (this->Edges).Blocks.ArrayMax = (param_1->Edges).Blocks.ArrayMax;
      (param_1->Edges).Blocks.ArrayNum = 0;
      (param_1->Edges).Blocks.ArrayMax = 0;
    }
    this_06->CurBlock = 0;
    this_06->CurBlockUsed = 0;
    TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_06);
  }
  FRefCountVector::operator=(&this->EdgeRefCounts,&param_1->EdgeRefCounts);
  pTVar3 = &param_1->AttributeSet;
  pTVar4 = &this->AttributeSet;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Ptr;
    pTVar4->Ptr = pTVar3->Ptr;
    pTVar3->Ptr = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  if (pTVar4->Ptr != (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMeshAttributeSet::Reparent(pTVar4->Ptr,this);
  }
  uVar9 = FChangeStamp::GetValue(&param_1->ChangeStampShape);
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar5 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar12 = pFVar5->State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      pFVar5->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      FMutex::LockSlow(pFVar5);
    }
    (this->ChangeStampShape).Value = uVar9;
    LOCK();
    aVar6 = pFVar5->State;
    pFVar5->State = (atomic<unsigned_char>)((char)pFVar5->State + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar5);
    }
  }
  uVar9 = FChangeStamp::GetValue(&param_1->ChangeStampTopology);
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar5 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar12 = pFVar5->State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      pFVar5->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      FMutex::LockSlow(pFVar5);
    }
    (this->ChangeStampTopology).Value = uVar9;
    LOCK();
    aVar6 = pFVar5->State;
    pFVar5->State = (atomic<unsigned_char>)((char)pFVar5->State + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar5);
    }
  }
  return this;
}

// operator= @ 143455ff0

FDynamicMesh3 * __thiscall
UE::Geometry::FDynamicMesh3::operator=(FDynamicMesh3 *this,FDynamicMesh3 *param_1)

{
  Copy(this,param_1,true,true,true,true);
  return this;
}

// operator() @ 14345b330

bool __thiscall
`UE::Geometry::FDynamicMesh3::IsSameAs_Helper'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  
  dVar1 = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x10);
  uVar4 = (ulonglong)(param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) +
           (ulonglong)((uint)param_2 >> 9) * 8);
  uVar5 = (ulonglong)(param_1 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar6 = *(double *)(lVar3 + uVar5 * 0x18) - *(double *)(lVar2 + uVar4 * 0x18);
  if ((((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar1) &&
      (dVar6 = *(double *)(lVar3 + 8 + uVar5 * 0x18) - *(double *)(lVar2 + 8 + uVar4 * 0x18),
      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar1)) &&
     (dVar6 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18) - *(double *)(lVar2 + 0x10 + uVar4 * 0x18),
     (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar1)) {
    return true;
  }
  return false;
}

// operator() @ 14345b3d0

void __thiscall
`UE::Geometry::FDynamicMesh3::MergeEdges'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  float fStackX_c;
  float local_res20;
  float fStackX_24;
  float local_d8;
  float fStack_d4;
  float local_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_a8;
  TVector<double>_u_0 local_90;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  uVar11 = (ulonglong)(param_2 & 0x1ff);
  dVar2 = *(double *)((longlong)this + 8);
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  pFVar3 = ((*(FDynamicMesh3 **)this)->Vertices).Blocks.AllocatorInstance.Data;
  dVar14 = __real_3ff0000000000000 - dVar2;
  uVar12 = (ulonglong)((uint)param_2 >> 9);
  uVar10 = (ulonglong)((uint)param_1 >> 9);
  lVar4 = *(longlong *)(pFVar3 + uVar12 * 8);
  pdVar1 = (double *)(lVar4 + uVar11 * 0x18);
  local_60 = *pdVar1;
  dStack_58 = pdVar1[1];
  local_50 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
  lVar4 = *(longlong *)(pFVar3 + uVar10 * 8);
  pdVar1 = (double *)(lVar4 + uVar8 * 0x18);
  local_78 = *pdVar1;
  dStack_70 = pdVar1[1];
  local_68 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
  local_90._s_0.X = local_78 * dVar14 + local_60 * dVar2;
  local_90._s_0.Y = dStack_70 * dVar14 + dStack_58 * dVar2;
  local_90._s_0.Z = local_68 * dVar14 + local_50 * dVar2;
  UE::Geometry::FDynamicMesh3::SetVertex
            (*(FDynamicMesh3 **)this,param_1,(TVector<double> *)&local_90._s_0,true);
  fVar18 = __real_3f800000;
  if (*(char *)(*(longlong *)this + 0xb0) != '\0') {
    lVar4 = *(longlong *)(*(longlong *)this + 0xa0);
    fVar15 = (float)*(double *)((longlong)this + 8);
    uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + uVar12 * 8) + uVar11 * 8);
    lVar4 = *(longlong *)(lVar4 + uVar10 * 8);
    local_res20 = (float)uVar5;
    uVar6 = *(undefined8 *)(lVar4 + uVar8 * 8);
    local_res8 = (float)uVar6;
    fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
    fStackX_24 = (float)((ulonglong)uVar5 >> 0x20);
    *(ulonglong *)(lVar4 + uVar8 * 8) =
         CONCAT44(fStackX_c * (__real_3f800000 - fVar15) + fStackX_24 * fVar15,
                  local_res8 * (__real_3f800000 - fVar15) + local_res20 * fVar15);
  }
  lVar4 = *(longlong *)this;
  if (*(char *)(lVar4 + 0x70) != '\0') {
    fVar13 = (float)*(double *)((longlong)this + 8);
    lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + uVar12 * 8);
    uVar5 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
    fVar15 = fVar18 - fVar13;
    lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + uVar10 * 8);
    local_c4 = (float)uVar5;
    fStack_c0 = (float)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(undefined8 *)(lVar7 + uVar8 * 0xc);
    fVar16 = local_c4 * fVar13 + (float)uVar5 * fVar15;
    fStack_a8 = (float)((ulonglong)uVar5 >> 0x20);
    fVar17 = fStack_c0 * fVar13 + fStack_a8 * fVar15;
    fVar13 = *(float *)(lVar9 + 8 + uVar11 * 0xc) * fVar13 +
             *(float *)(lVar7 + 8 + uVar8 * 0xc) * fVar15;
    fVar15 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13);
    if (fVar15 <= 0.0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar13 = 0.0;
    }
    else {
      fVar15 = fVar18 / fVar15;
      fVar16 = fVar16 * fVar15;
      fVar17 = fVar17 * fVar15;
      fVar13 = fVar13 * fVar15;
    }
    lVar4 = *(longlong *)(uVar10 * 8 + *(longlong *)(lVar4 + 0x60));
    *(ulonglong *)(uVar8 * 0xc + lVar4) = CONCAT44(fVar17,fVar16);
    *(float *)(uVar8 * 0xc + 8 + lVar4) = fVar13;
  }
  lVar4 = *(longlong *)this;
  if (*(char *)(lVar4 + 0x90) != '\0') {
    fVar16 = (float)*(double *)((longlong)this + 8);
    lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x80) + uVar12 * 8);
    uVar5 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
    fVar15 = *(float *)(lVar9 + 8 + uVar11 * 0xc);
    fVar18 = fVar18 - fVar16;
    local_d8 = (float)uVar5;
    lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x80) + uVar10 * 8);
    uVar6 = *(undefined8 *)(lVar9 + uVar8 * 0xc);
    fVar13 = *(float *)(lVar9 + 8 + uVar8 * 0xc);
    lVar9 = uVar8 * 0xc;
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x80) + uVar10 * 8);
    *(float *)(lVar4 + lVar9) = local_d8 * fVar16 + (float)uVar6 * fVar18;
    fStack_b4 = (float)((ulonglong)uVar6 >> 0x20);
    fStack_d4 = (float)((ulonglong)uVar5 >> 0x20);
    *(float *)(lVar4 + 4 + lVar9) = fStack_d4 * fVar16 + fStack_b4 * fVar18;
    *(float *)(lVar4 + 8 + lVar9) = fVar15 * fVar16 + fVar13 * fVar18;
  }
  return;
}

// operator() @ 143460ab0

void __thiscall
`UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l8::
<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uStack_10;
  uint uStack_c;
  
  piVar1 = (int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8)
                  + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uStack_10 = piVar1[2];
  uStack_c = piVar1[3];
  iVar9 = **(int **)((longlong)this + 8);
  iVar7 = *piVar1;
  if (*piVar1 == iVar9) {
    iVar7 = piVar1[1];
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)(uStack_10 >> 9) * 8);
  lVar2 = lVar4 + (ulonglong)(uStack_10 & 0x1ff) * 0xc;
  iVar3 = *(int *)(lVar4 + (ulonglong)(uStack_10 & 0x1ff) * 0xc);
  if ((((iVar3 == iVar9) && (*(int *)(lVar2 + 4) == iVar7)) ||
      ((*(int *)(lVar2 + 4) == iVar9 && (*(int *)(lVar2 + 8) == iVar7)))) ||
     ((*(int *)(lVar2 + 8) == iVar9 && (iVar3 == iVar7)))) {
    pFVar5 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar5->Data <= (FScriptContainerElement *)&uStack_10) &&
       ((FScriptContainerElement *)&uStack_10 <
        pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar9 + 1;
    *(uint *)(pFVar5->Data + (longlong)iVar9 * 4) = uStack_10;
  }
  if (uStack_c != 0xffffffff) {
    iVar9 = **(int **)((longlong)this + 8);
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)(uStack_c >> 9) * 8)
    ;
    lVar2 = lVar4 + (ulonglong)(uStack_c & 0x1ff) * 0xc;
    iVar3 = *(int *)(lVar4 + (ulonglong)(uStack_c & 0x1ff) * 0xc);
    if ((((iVar3 == iVar9) && (*(int *)(lVar2 + 4) == iVar7)) ||
        ((*(int *)(lVar2 + 4) == iVar9 && (*(int *)(lVar2 + 8) == iVar7)))) ||
       ((*(int *)(lVar2 + 8) == iVar9 && (iVar3 == iVar7)))) {
      pFVar5 = *(ForAnyElementType **)((longlong)this + 0x10);
      if ((pFVar5->Data <= (FScriptContainerElement *)&uStack_c) &&
         ((FScriptContainerElement *)&uStack_c <
          pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar9 + 1;
      *(uint *)(pFVar5->Data + (longlong)iVar9 * 4) = uStack_c;
    }
  }
  return;
}

// operator() @ 143460d10

void __thiscall
`UE::Geometry::FDynamicMesh3::
GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l8::
<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  ForElementType<int> FVar11;
  uint uStack_10;
  uint uStack_c;
  
  piVar1 = (int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8)
                  + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uStack_10 = piVar1[2];
  uStack_c = piVar1[3];
  iVar8 = **(int **)((longlong)this + 8);
  iVar6 = *piVar1;
  if (*piVar1 == iVar8) {
    iVar6 = piVar1[1];
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)(uStack_10 >> 9) * 8);
  lVar2 = lVar4 + (ulonglong)(uStack_10 & 0x1ff) * 0xc;
  iVar3 = *(int *)(lVar4 + (ulonglong)(uStack_10 & 0x1ff) * 0xc);
  if ((((iVar3 == iVar8) && (*(int *)(lVar2 + 4) == iVar6)) ||
      ((*(int *)(lVar2 + 4) == iVar8 && (*(int *)(lVar2 + 8) == iVar6)))) ||
     ((*(int *)(lVar2 + 8) == iVar8 && (iVar3 == iVar6)))) {
    FVar11 = *(ForElementType<int> *)((longlong)this + 0x10);
    FVar10 = *(ForElementType<int> *)((longlong)FVar11 + 0x20);
    FVar9 = FVar10;
    if (FVar10 == (ForElementType<int>)0x0) {
      FVar9 = FVar11;
    }
    if ((ulonglong)FVar9 <= &uStack_10) {
      if (FVar10 == (ForElementType<int>)0x0) {
        FVar10 = FVar11;
      }
      if ((&uStack_10 < (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar11 + 0x2c) * 4)
          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)((longlong)FVar11 + 0x28);
    if (iVar8 == *(int *)((longlong)FVar11 + 0x2c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)FVar11,(int *)((longlong)FVar11 + 0x2c));
    }
    *(int *)((longlong)FVar11 + 0x28) = iVar8 + 1;
    if (*(ForElementType<int> *)((longlong)FVar11 + 0x20) != (ForElementType<int>)0x0) {
      FVar11 = *(ForElementType<int> *)((longlong)FVar11 + 0x20);
    }
    *(uint *)((longlong)FVar11 + (longlong)iVar8 * 4) = uStack_10;
  }
  if (uStack_c != 0xffffffff) {
    iVar8 = **(int **)((longlong)this + 8);
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)(uStack_c >> 9) * 8)
    ;
    lVar2 = lVar4 + (ulonglong)(uStack_c & 0x1ff) * 0xc;
    iVar3 = *(int *)(lVar4 + (ulonglong)(uStack_c & 0x1ff) * 0xc);
    if ((((iVar3 == iVar8) && (*(int *)(lVar2 + 4) == iVar6)) ||
        ((*(int *)(lVar2 + 4) == iVar8 && (*(int *)(lVar2 + 8) == iVar6)))) ||
       ((*(int *)(lVar2 + 8) == iVar8 && (iVar3 == iVar6)))) {
      FVar11 = *(ForElementType<int> *)((longlong)this + 0x10);
      FVar10 = *(ForElementType<int> *)((longlong)FVar11 + 0x20);
      FVar9 = FVar10;
      if (FVar10 == (ForElementType<int>)0x0) {
        FVar9 = FVar11;
      }
      if ((ulonglong)FVar9 <= &uStack_c) {
        if (FVar10 == (ForElementType<int>)0x0) {
          FVar10 = FVar11;
        }
        if ((&uStack_c <
             (uint *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar11 + 0x2c) * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)((longlong)FVar11 + 0x28);
      if (iVar8 == *(int *)((longlong)FVar11 + 0x2c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar11,(int *)((longlong)FVar11 + 0x2c));
      }
      *(int *)((longlong)FVar11 + 0x28) = iVar8 + 1;
      if (*(ForElementType<int> *)((longlong)FVar11 + 0x20) != (ForElementType<int>)0x0) {
        FVar11 = *(ForElementType<int> *)((longlong)FVar11 + 0x20);
      }
      *(uint *)((longlong)FVar11 + (longlong)iVar8 * 4) = uStack_c;
    }
  }
  return;
}

// operator() @ 143461400

void __thiscall
`UE::Geometry::FDynamicMesh3::GetBounds'::__l14::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  lVar3 = *(longlong *)this;
  lVar9 = 10000;
  uVar10 = (undefined4)__real_ffefffffffffffff;
  uVar13 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  uVar17 = (undefined4)__real_7fefffffffffffff;
  uVar20 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar7 = param_1 * 10000;
  uVar11 = uVar10;
  uVar14 = uVar13;
  uVar18 = uVar17;
  uVar21 = uVar20;
  uVar22 = uVar17;
  uVar23 = uVar20;
  uVar24 = uVar10;
  uVar25 = uVar13;
  uVar8 = uVar7;
  do {
    uVar12 = uVar11;
    uVar16 = uVar14;
    uVar19 = uVar18;
    uVar15 = uVar21;
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)))
    {
      uVar6 = (ulonglong)(uVar8 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 9) * 8) +
                             uVar6 * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
        dVar1 = *(double *)(lVar4 + uVar6 * 0x18);
        uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar2 = *(double *)(lVar4 + 8 + uVar6 * 0x18);
        if (dVar2 <= (double)CONCAT44(uVar20,uVar17)) {
          uVar17 = SUB84(dVar2,0);
          uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        dVar2 = *(double *)(lVar4 + 8 + uVar6 * 0x18);
        if ((double)CONCAT44(uVar13,uVar10) <= dVar2) {
          uVar10 = SUB84(dVar2,0);
          uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        uVar12 = SUB84(dVar1,0);
        uVar16 = uVar15;
        if (dVar1 <= (double)CONCAT44(uVar14,uVar11)) {
          uVar12 = uVar11;
          uVar16 = uVar14;
        }
        uVar19 = SUB84(dVar1,0);
        if ((double)CONCAT44(uVar21,uVar18) <= dVar1) {
          uVar19 = uVar18;
          uVar15 = uVar21;
        }
        dVar1 = *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
        uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
        if (dVar1 <= (double)CONCAT44(uVar23,uVar22)) {
          uVar22 = SUB84(dVar1,0);
          uVar23 = uVar11;
        }
        if ((double)CONCAT44(uVar25,uVar24) <= dVar1 && dVar1 != (double)CONCAT44(uVar25,uVar24)) {
          uVar24 = SUB84(dVar1,0);
          uVar25 = uVar11;
        }
      }
    }
    uVar7 = uVar7 + 1;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + -1;
    uVar11 = uVar12;
    uVar14 = uVar16;
    uVar18 = uVar19;
    uVar21 = uVar15;
  } while (lVar9 != 0);
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 8));
  pdVar5 = *(double **)((longlong)this + 0x10);
  dVar1 = *pdVar5;
  if (dVar1 <= (double)CONCAT44(uVar15,uVar19)) {
    uVar19 = SUB84(dVar1,0);
    uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar5[1];
  if (dVar1 <= (double)CONCAT44(uVar20,uVar17)) {
    uVar17 = SUB84(dVar1,0);
    uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar5[2];
  if (dVar1 <= (double)CONCAT44(uVar23,uVar22)) {
    uVar22 = SUB84(dVar1,0);
    uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar5[3];
  if ((double)CONCAT44(uVar16,uVar12) <= dVar1) {
    uVar12 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar5[4];
  if ((double)CONCAT44(uVar13,uVar10) <= dVar1) {
    uVar10 = SUB84(dVar1,0);
    uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = pdVar5[5];
  if ((double)CONCAT44(uVar25,uVar24) <= dVar1) {
    uVar24 = SUB84(dVar1,0);
    uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *pdVar5 = (double)CONCAT44(uVar15,uVar19);
  pdVar5[1] = (double)CONCAT44(uVar20,uVar17);
  pdVar5[2] = (double)CONCAT44(uVar23,uVar22);
  pdVar5[3] = (double)CONCAT44(uVar16,uVar12);
  pdVar5[4] = (double)CONCAT44(uVar13,uVar10);
  pdVar5[5] = (double)CONCAT44(uVar25,uVar24);
                    /* WARNING: Could not recover jumptable at 0x00014346158c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 8));
  return;
}

// AddEdgeInternal @ 1434659c0

int __thiscall
UE::Geometry::FDynamicMesh3::AddEdgeInternal
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  iVar2 = param_1;
  if (param_1 <= param_2) {
    iVar2 = param_2;
    param_2 = param_1;
  }
  uVar3 = FRefCountVector::Allocate(&this->EdgeRefCounts);
  this_00 = &this->Edges;
  uVar5 = this_00->CurBlock;
  uVar7 = (this->Edges).CurBlockUsed;
  uVar4 = uVar5 * 0x200 + uVar7;
  if (uVar3 == uVar4) {
    if (uVar7 == 0x200) {
      if (uVar5 == (this->Edges).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar5 = this_00->CurBlock;
      uVar7 = 0;
      (this->Edges).CurBlockUsed = 0;
    }
    piVar6 = (int *)(*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
                    (longlong)(int)uVar7 * 0x10);
    *piVar6 = param_2;
    piVar6[1] = iVar2;
    piVar6[2] = param_3;
    piVar6[3] = param_4;
    puVar1 = &(this->Edges).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar4 < uVar3) {
    TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Resize(this_00,uVar3);
    uVar5 = (this->Edges).CurBlockUsed;
    if (uVar5 == 0x200) {
      if (this_00->CurBlock == (this->Edges).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar5 = 0;
      (this->Edges).CurBlockUsed = 0;
    }
    piVar6 = (int *)(*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data +
                      (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar5 * 0x10);
    *piVar6 = param_2;
    piVar6[1] = iVar2;
    piVar6[2] = param_3;
    piVar6[3] = param_4;
    puVar1 = &(this->Edges).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    piVar6 = (int *)(*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 0x10);
    *piVar6 = param_2;
    piVar6[1] = iVar2;
    piVar6[2] = param_3;
    piVar6[3] = param_4;
  }
  FSmallListSet::Insert(&this->VertexEdgeLists,param_2,uVar3);
  FSmallListSet::Insert(&this->VertexEdgeLists,iVar2,uVar3);
  return uVar3;
}

// AddTriangleEdge @ 143466240

void __thiscall
UE::Geometry::FDynamicMesh3::AddTriangleEdge
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_00;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = &this->TriangleEdges;
  uVar2 = this_00->CurBlock;
  uVar5 = (this->TriangleEdges).CurBlockUsed;
  uVar6 = uVar2 * 0x200 + uVar5;
  if (param_1 == uVar6) {
    if (uVar5 == 0x200) {
      if (uVar2 == (this->TriangleEdges).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar2 = this_00->CurBlock;
      uVar5 = 0;
      (this->TriangleEdges).CurBlockUsed = 0;
    }
  }
  else {
    if ((uint)param_1 <= uVar6) goto LAB_143466303;
    TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(this_00,param_1);
    uVar5 = (this->TriangleEdges).CurBlockUsed;
    if (uVar5 == 0x200) {
      if (this_00->CurBlock == (this->TriangleEdges).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar5 = 0;
      (this->TriangleEdges).CurBlockUsed = 0;
    }
    uVar2 = this_00->CurBlock;
  }
  lVar3 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  *(undefined8 *)(lVar3 + (longlong)(int)uVar5 * 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar5 * 0xc) = 0xffffffff;
  puVar1 = &(this->TriangleEdges).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
LAB_143466303:
  lVar3 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc;
  if (param_5 == -1) {
    iVar4 = AddEdgeInternal(this,param_2,param_3,param_1,-1);
    *(int *)(lVar3 + (longlong)param_4 * 4) = iVar4;
  }
  else {
    *(int *)(*(longlong *)
              ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_5 >> 9) * 8) +
             0xc + (ulonglong)(param_5 & 0x1ff) * 0x10) = param_1;
    *(int *)(lVar3 + (longlong)param_4 * 4) = param_5;
  }
  return;
}

// AddTriangleInternal @ 1434663a0

int __thiscall
UE::Geometry::FDynamicMesh3::AddTriangleInternal
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  uint uVar1;
  FIndex3i_u_0 local_18;
  
  uVar1 = FRefCountVector::Allocate(&this->TriangleRefCounts);
  local_18._s_0.A = param_1;
  local_18._s_0.B = param_2;
  local_18._s_0.C = param_3;
  TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
            (&this->Triangles,(FIndex3i *)&local_18._s_0,uVar1);
  local_18._s_0.A = param_4;
  local_18._s_0.B = param_5;
  local_18._s_0.C = param_6;
  TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt
            (&this->TriangleEdges,(FIndex3i *)&local_18._s_0,uVar1);
  return uVar1;
}

// AppendTriangle @ 14346eea0

int __thiscall
UE::Geometry::FDynamicMesh3::AppendTriangle(FDynamicMesh3 *this,FIndex3i *param_1,int param_2)

{
  short *psVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FDynamicMeshAttributeSet *pFVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TDynamicVector<int,512> *this_00;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  bool local_res8 [8];
  bool local_res10 [8];
  int local_res18 [2];
  bool local_res20 [8];
  uint local_78;
  int local_74;
  int local_70;
  <lambda_1> local_68;
  
  local_78 = (param_1->field0_0x0)._s_0.A;
  if ((((-1 < (int)local_78) &&
       (iVar12 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed, (int)local_78 < iVar12)) &&
      (pFVar4 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      (ushort)(*(short *)(*(longlong *)(pFVar4 + (ulonglong)(local_78 >> 9) * 8) +
                         (ulonglong)(local_78 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     ((((uVar7 = (param_1->field0_0x0)._s_0.B, -1 < (int)uVar7 && ((int)uVar7 < iVar12)) &&
       (((ushort)(*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                            (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe &&
        ((uVar9 = (param_1->field0_0x0)._s_0.C, -1 < (int)uVar9 && ((int)uVar9 < iVar12)))))) &&
      (((ushort)(*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar9 >> 9) * 8) +
                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe &&
       (((local_78 != uVar7 && (local_78 != uVar9)) && (uVar7 != uVar9)))))))) {
    uVar9 = uVar7;
    if ((int)local_78 < (int)uVar7) {
      uVar9 = local_78;
      local_78 = uVar7;
    }
    local_68.vMax = (int *)&local_78;
    local_68.bIsBoundary = local_res8;
    local_res18[0] = param_2;
    local_68.__this = this;
    uVar7 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdgeInternal_::__l2::<lambda_1>_>
                      (&this->VertexEdgeLists,uVar9,&local_68,-1);
    iVar12 = (param_1->field0_0x0)._s_0.C;
    local_74 = (param_1->field0_0x0)._s_0.B;
    iVar10 = iVar12;
    if (local_74 < iVar12) {
      iVar10 = local_74;
      local_74 = iVar12;
    }
    local_68.vMax = &local_74;
    local_68.bIsBoundary = local_res10;
    local_68.__this = this;
    iVar8 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdgeInternal_::__l2::<lambda_1>_>
                      (&this->VertexEdgeLists,iVar10,&local_68,-1);
    local_74 = (param_1->field0_0x0)._s_0.C;
    iVar12 = (param_1->field0_0x0)._s_0.A;
    iVar10 = iVar12;
    if (local_74 < iVar12) {
      iVar10 = local_74;
      local_74 = iVar12;
    }
    local_68.vMax = &local_74;
    local_68.bIsBoundary = local_res20;
    local_70 = iVar8;
    local_68.__this = this;
    iVar12 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdgeInternal_::__l2::<lambda_1>_>
                       (&this->VertexEdgeLists,iVar10,&local_68,-1);
    if (((uVar7 == 0xffffffff) || (local_res8[0] != false)) &&
       (((iVar8 == -1 || (local_res10[0] != false)) && ((iVar12 == -1 || (local_res20[0] != false)))
        ))) {
      if (((uVar7 != 0xffffffff) && (iVar8 != -1)) && (iVar12 != -1)) {
        uVar9 = *(uint *)(*(longlong *)
                           ((this->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar7 >> 9) * 8) + 8 + (ulonglong)(uVar7 & 0x1ff) * 0x10);
        uVar11 = (ulonglong)(uVar9 & 0x1ff);
        lVar5 = *(longlong *)
                 ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
        iVar10 = (param_1->field0_0x0)._s_0.C;
        if (((*(int *)(lVar5 + uVar11 * 0xc) == iVar10) ||
            (*(int *)(lVar5 + 4 + uVar11 * 0xc) == iVar10)) ||
           (*(int *)(lVar5 + 8 + uVar11 * 0xc) == iVar10)) {
          return -3;
        }
      }
      bVar2 = (this->TriangleGroups).bIsSet;
      uVar9 = FRefCountVector::Allocate(&this->TriangleRefCounts);
      TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt(&this->Triangles,param_1,uVar9);
      if (bVar2 != false) {
        this_00 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator->
                            (&this->TriangleGroups);
        TDynamicVector<int,512>::InsertAt(this_00,local_res18,uVar9);
        iVar10 = local_res18[0] + 1;
        if (local_res18[0] + 1 < this->GroupIDCounter) {
          iVar10 = this->GroupIDCounter;
        }
        this->GroupIDCounter = iVar10;
      }
      uVar3 = (param_1->field0_0x0)._s_0.A;
      psVar1 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      uVar3 = (param_1->field0_0x0)._s_0.B;
      psVar1 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      uVar3 = (param_1->field0_0x0)._s_0.C;
      psVar1 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      AddTriangleEdge(this,uVar9,(param_1->field0_0x0)._s_0.A,(param_1->field0_0x0)._s_0.B,0,uVar7);
      AddTriangleEdge(this,uVar9,(param_1->field0_0x0)._s_0.B,(param_1->field0_0x0)._s_0.C,1,
                      local_70);
      AddTriangleEdge(this,uVar9,(param_1->field0_0x0)._s_0.C,(param_1->field0_0x0)._s_0.A,2,iVar12)
      ;
      pFVar6 = (this->AttributeSet).Ptr;
      if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
        (**(code **)(pFVar6->_padding_ + 8))(pFVar6,uVar9,0);
      }
      UpdateChangeStamps(this,true,true);
    }
    else {
      uVar9 = 0xfffffffe;
    }
    return uVar9;
  }
  return -1;
}

// AppendVertex @ 14346f280

int __thiscall UE::Geometry::FDynamicMesh3::AppendVertex(FDynamicMesh3 *this,FVertexInfo *param_1)

{
  FMutex *pFVar1;
  uint *puVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  longlong lVar5;
  FDynamicMeshAttributeSet *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  TVector2<float>_u_0 local_res8;
  
  uVar7 = FRefCountVector::Allocate(&this->VertexRefCounts);
  TDynamicVector<UE::Math::TVector<double>,512>::InsertAt(&this->Vertices,&param_1->Position,uVar7);
  if ((this->VertexNormals).bIsSet != false) {
    local_res8 = (TVector2<float>_u_0)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
    uVar10 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    if (param_1->bHaveN != false) {
      local_res8 = *(TVector2<float>_u_0 *)&(param_1->Normal).field0_0x0;
      uVar10 = (param_1->Normal).field0_0x0._s_0.Z;
    }
    uVar4 = (this->VertexNormals).TypedValue.CurBlock;
    uVar9 = (this->VertexNormals).TypedValue.CurBlockUsed;
    uVar8 = uVar4 * 0x200 + uVar9;
    if (uVar7 == uVar8) {
      if (uVar9 == 0x200) {
        if (uVar4 == (this->VertexNormals).TypedValue.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                    (&(this->VertexNormals).TypedValue);
        }
        (this->VertexNormals).TypedValue.CurBlock = (this->VertexNormals).TypedValue.CurBlock + 1;
        uVar9 = 0;
        uVar4 = (this->VertexNormals).TypedValue.CurBlock;
        (this->VertexNormals).TypedValue.CurBlockUsed = 0;
      }
    }
    else {
      if (uVar7 <= uVar8) {
        lVar5 = *(longlong *)
                 ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar7 >> 9) * 8);
        *(TVector2<float>_u_0 *)(lVar5 + (ulonglong)(uVar7 & 0x1ff) * 0xc) = local_res8;
        *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc) = uVar10;
        goto LAB_14346f3ad;
      }
      TDynamicVector<UE::Math::TVector<float>,512>::Resize(&(this->VertexNormals).TypedValue,uVar7);
      uVar9 = (this->VertexNormals).TypedValue.CurBlockUsed;
      if (uVar9 == 0x200) {
        if ((this->VertexNormals).TypedValue.CurBlock ==
            (this->VertexNormals).TypedValue.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                    (&(this->VertexNormals).TypedValue);
        }
        (this->VertexNormals).TypedValue.CurBlock = (this->VertexNormals).TypedValue.CurBlock + 1;
        uVar9 = 0;
        (this->VertexNormals).TypedValue.CurBlockUsed = 0;
      }
      uVar4 = (this->VertexNormals).TypedValue.CurBlock;
    }
    lVar5 = *(longlong *)
             ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
             (longlong)(int)uVar4 * 8);
    *(TVector2<float>_u_0 *)(lVar5 + (longlong)(int)uVar9 * 0xc) = local_res8;
    *(undefined4 *)(lVar5 + 8 + (longlong)(int)uVar9 * 0xc) = uVar10;
    puVar2 = &(this->VertexNormals).TypedValue.CurBlockUsed;
    *puVar2 = *puVar2 + 1;
  }
LAB_14346f3ad:
  if ((this->VertexColors).bIsSet != false) {
    local_res8 = (TVector2<float>_u_0)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    uVar10 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    if (param_1->bHaveC != false) {
      local_res8 = *(TVector2<float>_u_0 *)&(param_1->Color).field0_0x0;
      uVar10 = (param_1->Color).field0_0x0._s_0.Z;
    }
    uVar4 = (this->VertexColors).TypedValue.CurBlock;
    uVar9 = (this->VertexColors).TypedValue.CurBlockUsed;
    uVar8 = uVar4 * 0x200 + uVar9;
    if (uVar7 == uVar8) {
      if (uVar9 == 0x200) {
        if (uVar4 == (this->VertexColors).TypedValue.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                    (&(this->VertexColors).TypedValue);
        }
        (this->VertexColors).TypedValue.CurBlock = (this->VertexColors).TypedValue.CurBlock + 1;
        uVar9 = 0;
        uVar4 = (this->VertexColors).TypedValue.CurBlock;
        (this->VertexColors).TypedValue.CurBlockUsed = 0;
      }
    }
    else {
      if (uVar7 <= uVar8) {
        lVar5 = *(longlong *)
                 ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar7 >> 9) * 8);
        *(TVector2<float>_u_0 *)(lVar5 + (ulonglong)(uVar7 & 0x1ff) * 0xc) = local_res8;
        *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc) = uVar10;
        goto LAB_14346f4b2;
      }
      TDynamicVector<UE::Math::TVector<float>,512>::Resize(&(this->VertexColors).TypedValue,uVar7);
      uVar9 = (this->VertexColors).TypedValue.CurBlockUsed;
      if (uVar9 == 0x200) {
        if ((this->VertexColors).TypedValue.CurBlock ==
            (this->VertexColors).TypedValue.Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                    (&(this->VertexColors).TypedValue);
        }
        (this->VertexColors).TypedValue.CurBlock = (this->VertexColors).TypedValue.CurBlock + 1;
        (this->VertexColors).TypedValue.CurBlockUsed = 0;
        uVar9 = 0;
      }
      uVar4 = (this->VertexColors).TypedValue.CurBlock;
    }
    lVar5 = *(longlong *)
             ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
             (longlong)(int)uVar4 * 8);
    *(TVector2<float>_u_0 *)(lVar5 + (longlong)(int)uVar9 * 0xc) = local_res8;
    *(undefined4 *)(lVar5 + 8 + (longlong)(int)uVar9 * 0xc) = uVar10;
    puVar2 = &(this->VertexColors).TypedValue.CurBlockUsed;
    *puVar2 = *puVar2 + 1;
  }
LAB_14346f4b2:
  if ((this->VertexUVs).bIsSet != false) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    if (param_1->bHaveUV != false) {
      local_res8 = (param_1->UV).field0_0x0;
    }
    TDynamicVector<UE::Math::TVector2<float>,512>::InsertAt
              (&(this->VertexUVs).TypedValue,(TVector2<float> *)&local_res8._s_0,uVar7);
  }
  if ((int)uVar7 <
      (int)((this->VertexEdgeLists).ListHeads.CurBlock * 0x200 +
           (this->VertexEdgeLists).ListHeads.CurBlockUsed)) {
    FSmallListSet::Clear(&this->VertexEdgeLists,uVar7);
  }
  FSmallListSet::AllocateAt(&this->VertexEdgeLists,uVar7);
  pFVar6 = (this->AttributeSet).Ptr;
  if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,uVar7,0);
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar11 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar11) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar11) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar11 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar11) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar11) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return uVar7;
}

// AppendVertex @ 14346f5d0

int __thiscall
UE::Geometry::FDynamicMesh3::AppendVertex(FDynamicMesh3 *this,FDynamicMesh3 *param_1,int param_2)

{
  FMutex *pFVar1;
  uint *puVar2;
  TVector<float> *pTVar3;
  atomic<unsigned_char> aVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  FDynamicMeshAttributeSet *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  TVector2<float>_u_0 *pTVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  TVector2<float>_u_0 local_res8;
  
  uVar11 = FRefCountVector::Allocate(&this->VertexRefCounts);
  uVar18 = (ulonglong)((uint)param_2 >> 9);
  uVar19 = (ulonglong)(param_2 & 0x1ff);
  TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
            (&this->Vertices,
             (TVector<double> *)
             (*(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + uVar18 * 8) +
             uVar19 * 0x18),uVar11);
  if ((this->VertexNormals).bIsSet != false) {
    if ((param_1->VertexNormals).bIsSet == false) {
      uVar6 = (this->VertexNormals).TypedValue.CurBlock;
      uVar15 = (this->VertexNormals).TypedValue.CurBlockUsed;
      uVar16 = uVar6 * 0x200 + uVar15;
      if (uVar11 == uVar16) {
        if (uVar15 == 0x200) {
          if (uVar6 == (this->VertexNormals).TypedValue.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                      (&(this->VertexNormals).TypedValue);
          }
          (this->VertexNormals).TypedValue.CurBlock = (this->VertexNormals).TypedValue.CurBlock + 1;
          uVar15 = 0;
          uVar6 = (this->VertexNormals).TypedValue.CurBlock;
          (this->VertexNormals).TypedValue.CurBlockUsed = 0;
        }
      }
      else {
        if (uVar11 <= uVar16) {
          lVar7 = *(longlong *)
                   ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar11 >> 9) * 8);
          *(undefined4 *)(lVar7 + (ulonglong)(uVar11 & 0x1ff) * 0xc) = 0;
          *(undefined8 *)(lVar7 + 4 + (ulonglong)(uVar11 & 0x1ff) * 0xc) = 0x3f800000;
          goto LAB_14346f745;
        }
        TDynamicVector<UE::Math::TVector<float>,512>::Resize
                  (&(this->VertexNormals).TypedValue,uVar11);
        uVar15 = (this->VertexNormals).TypedValue.CurBlockUsed;
        if (uVar15 == 0x200) {
          if ((this->VertexNormals).TypedValue.CurBlock ==
              (this->VertexNormals).TypedValue.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                      (&(this->VertexNormals).TypedValue);
          }
          (this->VertexNormals).TypedValue.CurBlock = (this->VertexNormals).TypedValue.CurBlock + 1;
          uVar15 = 0;
          (this->VertexNormals).TypedValue.CurBlockUsed = 0;
        }
        uVar6 = (this->VertexNormals).TypedValue.CurBlock;
      }
      lVar7 = *(longlong *)
               ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
               (longlong)(int)uVar6 * 8);
      *(undefined4 *)(lVar7 + (longlong)(int)uVar15 * 0xc) = 0;
      *(undefined8 *)(lVar7 + 4 + (longlong)(int)uVar15 * 0xc) = 0x3f800000;
      puVar2 = &(this->VertexNormals).TypedValue.CurBlockUsed;
      *puVar2 = *puVar2 + 1;
    }
    else {
      if (((this->VertexNormals).bIsSet == false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        iVar12 = (*pcVar9)();
        return iVar12;
      }
      TDynamicVector<UE::Math::TVector<float>,512>::InsertAt
                (&(this->VertexNormals).TypedValue,
                 (TVector<float> *)
                 (*(longlong *)
                   ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data + uVar18 * 8)
                 + uVar19 * 0xc),uVar11);
    }
  }
LAB_14346f745:
  if ((this->VertexColors).bIsSet != false) {
    if ((param_1->VertexColors).bIsSet == false) {
      uVar6 = (this->VertexColors).TypedValue.CurBlock;
      uVar15 = (this->VertexColors).TypedValue.CurBlockUsed;
      uVar16 = uVar6 * 0x200 + uVar15;
      if (uVar11 == uVar16) {
        if (uVar15 == 0x200) {
          if (uVar6 == (this->VertexColors).TypedValue.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                      (&(this->VertexColors).TypedValue);
          }
          (this->VertexColors).TypedValue.CurBlock = (this->VertexColors).TypedValue.CurBlock + 1;
          uVar15 = 0;
          uVar6 = (this->VertexColors).TypedValue.CurBlock;
          (this->VertexColors).TypedValue.CurBlockUsed = 0;
        }
      }
      else {
        if (uVar11 <= uVar16) {
          uVar14 = (ulonglong)(uVar11 & 0x1ff);
          lVar7 = *(longlong *)
                   ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar11 >> 9) * 8);
          *(undefined4 *)(lVar7 + uVar14 * 0xc) = 0x3f800000;
          *(undefined4 *)(lVar7 + 4 + uVar14 * 0xc) = 0x3f800000;
          *(undefined4 *)(lVar7 + 8 + uVar14 * 0xc) = 0x3f800000;
          goto LAB_14346f8f9;
        }
        TDynamicVector<UE::Math::TVector<float>,512>::Resize
                  (&(this->VertexColors).TypedValue,uVar11);
        uVar15 = (this->VertexColors).TypedValue.CurBlockUsed;
        if (uVar15 == 0x200) {
          if ((this->VertexColors).TypedValue.CurBlock ==
              (this->VertexColors).TypedValue.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                      (&(this->VertexColors).TypedValue);
          }
          (this->VertexColors).TypedValue.CurBlock = (this->VertexColors).TypedValue.CurBlock + 1;
          (this->VertexColors).TypedValue.CurBlockUsed = 0;
          uVar15 = 0;
        }
        uVar6 = (this->VertexColors).TypedValue.CurBlock;
      }
      lVar13 = (longlong)(int)uVar15;
      lVar7 = *(longlong *)
               ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
               (longlong)(int)uVar6 * 8);
      *(undefined4 *)(lVar7 + lVar13 * 0xc) = 0x3f800000;
      *(undefined4 *)(lVar7 + 4 + lVar13 * 0xc) = 0x3f800000;
      *(undefined4 *)(lVar7 + 8 + lVar13 * 0xc) = 0x3f800000;
      puVar2 = &(this->VertexColors).TypedValue.CurBlockUsed;
      *puVar2 = *puVar2 + 1;
    }
    else {
      if (((this->VertexColors).bIsSet == false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        iVar12 = (*pcVar9)();
        return iVar12;
      }
      uVar15 = (this->VertexColors).TypedValue.CurBlock * 0x200 +
               (this->VertexColors).TypedValue.CurBlockUsed;
      pTVar3 = (TVector<float> *)
               (*(longlong *)
                 ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data + uVar18 * 8) +
               uVar19 * 0xc);
      if (uVar11 == uVar15) {
        TDynamicVector<UE::Math::TVector<float>,512>::Add(&(this->VertexColors).TypedValue,pTVar3);
      }
      else if (uVar15 < uVar11) {
        TDynamicVector<UE::Math::TVector<float>,512>::Resize
                  (&(this->VertexColors).TypedValue,uVar11);
        TDynamicVector<UE::Math::TVector<float>,512>::Add(&(this->VertexColors).TypedValue,pTVar3);
      }
      else {
        fVar5 = (pTVar3->field0_0x0)._s_0.Z;
        lVar7 = *(longlong *)
                 ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar11 >> 9) * 8);
        *(undefined8 *)(lVar7 + (ulonglong)(uVar11 & 0x1ff) * 0xc) =
             *(undefined8 *)&pTVar3->field0_0x0;
        *(float *)(lVar7 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) = fVar5;
      }
    }
  }
LAB_14346f8f9:
  if ((this->VertexUVs).bIsSet != false) {
    if ((param_1->VertexUVs).bIsSet == false) {
      local_res8 = (TVector2<float>_u_0)0x0;
      pTVar17 = &local_res8;
    }
    else {
      if (((this->VertexUVs).bIsSet == false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        iVar12 = (*pcVar9)();
        return iVar12;
      }
      pTVar17 = (TVector2<float>_u_0 *)
                (*(longlong *)
                  ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + uVar18 * 8) +
                uVar19 * 8);
    }
    TDynamicVector<UE::Math::TVector2<float>,512>::InsertAt
              (&(this->VertexUVs).TypedValue,(TVector2<float> *)&pTVar17->_s_0,uVar11);
  }
  if ((int)uVar11 <
      (int)((this->VertexEdgeLists).ListHeads.CurBlock * 0x200 +
           (this->VertexEdgeLists).ListHeads.CurBlockUsed)) {
    FSmallListSet::Clear(&this->VertexEdgeLists,uVar11);
  }
  FSmallListSet::AllocateAt(&this->VertexEdgeLists,uVar11);
  pFVar8 = (this->AttributeSet).Ptr;
  if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,uVar11,0);
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar10 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar10) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar10) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar4 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar10 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar10) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar10) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar4 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return uVar11;
}

// AppendWithOffsets @ 14346fa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMesh3::AppendWithOffsets
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,FAppendInfo *param_2)

{
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this_00;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_01;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_02;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_03;
  FMutex *pFVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  atomic<unsigned_char> aVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  longlong lVar9;
  FDynamicMeshAttributeSet *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  TVector2<float> TVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  FAppendInfo *pFVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  ulonglong uVar30;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  longlong local_90;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78;
  FAppendInfo local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar23 = 0;
  local_68.VertexOffset = 0;
  local_68.TriangleOffset = 0;
  local_68.EdgeOffset = 0;
  local_68.GroupOffset = 0;
  local_68.NumTriangle = 0;
  local_68.NumEdge = 0;
  pFVar24 = &local_68;
  if (param_2 != (FAppendInfo *)0x0) {
    pFVar24 = param_2;
  }
  local_68.NormalOverlayOffsets[0] = 0;
  local_68.NormalOverlayOffsets[1] = 0;
  local_68.NormalOverlayOffsets[2] = 0;
  local_68.NumVertex = 0;
  pFVar24->VertexOffset =
       (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
       (this->VertexRefCounts).RefCounts.CurBlockUsed;
  pFVar24->TriangleOffset =
       (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
       (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  pFVar24->EdgeOffset =
       (this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
       (this->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar28 = 0;
  uVar26 = uVar28;
  if ((this->TriangleGroups).bIsSet != false) {
    uVar26 = this->GroupIDCounter;
  }
  pFVar24->GroupOffset = uVar26;
  pFVar24->NumVertex =
       (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
       (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  pFVar24->NumTriangle =
       (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  pFVar24->NumEdge =
       (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
       (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  pFVar8 = (this->AttributeSet).Ptr;
  if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
    iVar15 = (**(code **)(pFVar8->_padding_ + 0xb8))();
    if (3 < iVar15) {
      iVar15 = 3;
    }
    lVar19 = (longlong)iVar15;
    local_90 = lVar19;
    if (0 < iVar15) {
      piVar29 = pFVar24->NormalOverlayOffsets;
      uVar20 = uVar23;
      uVar30 = uVar23;
      do {
        pFVar8 = (this->AttributeSet).Ptr;
        iVar15 = (int)uVar20;
        uVar18 = uVar23;
        if ((iVar15 < (pFVar8->NormalLayers).Array.ArrayNum) && (-1 < iVar15)) {
          if ((iVar15 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             lVar19 = local_90, bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar18 = *(ulonglong *)((pFVar8->NormalLayers).Array.AllocatorInstance.Data + uVar30 * 8);
        }
        uVar20 = (ulonglong)(iVar15 + 1);
        uVar30 = uVar30 + 1;
        *piVar29 = *(int *)(uVar18 + 8) * 0x200 + *(int *)(uVar18 + 0xc);
        piVar29 = piVar29 + 1;
      } while ((longlong)uVar30 < lVar19);
    }
  }
  iVar15 = (this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed;
  uVar22 = (param_1->Vertices).CurBlock * 0x200 + (param_1->Vertices).CurBlockUsed;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&this->Vertices,uVar22 + iVar15);
  uVar26 = uVar28;
  if (uVar22 != 0) {
    do {
      lVar19 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar26 >> 9) * 8);
      puVar3 = (undefined8 *)(lVar19 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
      uVar12 = puVar3[1];
      uVar6 = *(undefined8 *)(lVar19 + 0x10 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
      uVar17 = uVar26 + iVar15;
      uVar26 = uVar26 + 1;
      uVar20 = (ulonglong)(uVar17 & 0x1ff);
      lVar19 = *(longlong *)
                ((this->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
      puVar4 = (undefined8 *)(lVar19 + uVar20 * 0x18);
      *puVar4 = *puVar3;
      puVar4[1] = uVar12;
      *(undefined8 *)(lVar19 + 0x10 + uVar20 * 0x18) = uVar6;
    } while (uVar26 < uVar22);
  }
  local_88._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_88._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  `UE::Geometry::FDynamicMesh3::AppendWithOffsets'::__l2::<lambda_1>::
  operator()<UE::Math::TVector<float>_>
            (local_98,&this->VertexNormals,&param_1->VertexNormals,
             (this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed,
             (TVector<float> *)&local_88._s_0);
  local_78._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_78._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  `UE::Geometry::FDynamicMesh3::AppendWithOffsets'::__l2::<lambda_1>::
  operator()<UE::Math::TVector<float>_>
            (local_98,&this->VertexColors,&param_1->VertexColors,
             (this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed,
             (TVector<float> *)&local_78._s_0);
  TVar13 = UE::Math::TVector2<float>::ZeroVector;
  this_00 = &this->VertexUVs;
  uVar26 = (this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed;
  if ((this->VertexUVs).bIsSet != false) {
    if ((param_1->VertexUVs).bIsSet == false) {
      uVar22 = (this_00->TypedValue).CurBlock;
      uVar17 = (this->VertexUVs).TypedValue.CurBlockUsed;
      TDynamicVector<UE::Math::TVector2<float>,512>::Resize(&this_00->TypedValue,uVar26);
      for (uVar17 = uVar17 + uVar22 * 0x200; uVar17 < uVar26; uVar17 = uVar17 + 1) {
        ((TVector2<float>_u_0 *)
        (*(longlong *)
          ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8
          ) + (ulonglong)(uVar17 & 0x1ff) * 8))->_s_0 = (TVector2<float>_u_0_s_0)TVar13.field0_0x0;
      }
    }
    else {
      iVar15 = (this_00->TypedValue).CurBlock * 0x200 + (this->VertexUVs).TypedValue.CurBlockUsed;
      uVar22 = (param_1->VertexUVs).TypedValue.CurBlock * 0x200 +
               (param_1->VertexUVs).TypedValue.CurBlockUsed;
      TDynamicVector<UE::Math::TVector2<float>,512>::Resize(&this_00->TypedValue,uVar22 + iVar15);
      uVar26 = uVar28;
      if (uVar22 != 0) {
        do {
          uVar17 = uVar26 + iVar15;
          uVar27 = uVar26 + 1;
          *(undefined8 *)
           (*(longlong *)
             ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 8) =
               *(undefined8 *)
                (*(longlong *)
                  ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 8);
          uVar26 = uVar27;
        } while (uVar27 < uVar22);
      }
    }
  }
  FRefCountVector::Append(&this->VertexRefCounts,&param_1->VertexRefCounts);
  FSmallListSet::AppendWithElementOffset
            (&this->VertexEdgeLists,&param_1->VertexEdgeLists,pFVar24->EdgeOffset);
  this_01 = &this->Triangles;
  iVar15 = this_01->CurBlock * 0x200 + (this->Triangles).CurBlockUsed;
  uVar22 = (param_1->Triangles).CurBlock * 0x200 + (param_1->Triangles).CurBlockUsed;
  TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(this_01,iVar15 + uVar22);
  uVar26 = uVar28;
  if (uVar22 != 0) {
    do {
      uVar27 = uVar26 & 0x1ff;
      lVar19 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar26 >> 9) * 8);
      uVar17 = uVar26 + iVar15;
      uVar7 = *(undefined4 *)(lVar19 + (ulonglong)uVar27 * 0xc + 8);
      uVar26 = uVar26 + 1;
      uVar20 = (ulonglong)(uVar17 & 0x1ff);
      lVar9 = *(longlong *)
               ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
      *(undefined8 *)(lVar9 + uVar20 * 0xc) = *(undefined8 *)(lVar19 + (ulonglong)uVar27 * 0xc);
      *(undefined4 *)(lVar9 + 8 + uVar20 * 0xc) = uVar7;
    } while (uVar26 < uVar22);
  }
  uVar26 = this_01->CurBlock;
  uVar17 = (this->Triangles).CurBlockUsed;
  uVar22 = pFVar24->TriangleOffset;
  uVar27 = uVar22;
  for (; (int)uVar22 < (int)(uVar26 * 0x200 + uVar17); uVar22 = uVar22 + 1) {
    lVar19 = (ulonglong)(uVar22 >> 9) * 8;
    uVar16 = uVar27 & 0x1ff;
    uVar27 = uVar27 + 1;
    lVar9 = (ulonglong)uVar16 * 0xc;
    piVar29 = (int *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar19) +
                     lVar9);
    *piVar29 = *piVar29 + pFVar24->VertexOffset;
    piVar29 = (int *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar19) + 4 +
                     lVar9);
    *piVar29 = *piVar29 + pFVar24->VertexOffset;
    piVar29 = (int *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar19) + 8 +
                     lVar9);
    *piVar29 = *piVar29 + pFVar24->VertexOffset;
  }
  this_02 = &this->TriangleEdges;
  if ((ulonglong)(this_02->CurBlock * 0x200 + (this->TriangleEdges).CurBlockUsed) !=
      (longlong)pFVar24->TriangleOffset) {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3119874908218195667>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3.cpp"
                        ,0x12d,"TriangleEdges.Num() == UseAppendInfo->TriangleOffset");
    if (bVar14) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(this_02,pFVar24->TriangleOffset);
  }
  iVar15 = this_02->CurBlock * 0x200 + (this->TriangleEdges).CurBlockUsed;
  uVar26 = (param_1->TriangleEdges).CurBlock * 0x200 + (param_1->TriangleEdges).CurBlockUsed;
  TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(this_02,uVar26 + iVar15);
  if (uVar26 != 0) {
    do {
      uVar17 = uVar28 & 0x1ff;
      lVar19 = *(longlong *)
                ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar28 >> 9) * 8);
      uVar22 = uVar28 + iVar15;
      uVar7 = *(undefined4 *)(lVar19 + (ulonglong)uVar17 * 0xc + 8);
      uVar28 = uVar28 + 1;
      uVar20 = (ulonglong)(uVar22 & 0x1ff);
      lVar9 = *(longlong *)
               ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
      *(undefined8 *)(lVar9 + uVar20 * 0xc) = *(undefined8 *)(lVar19 + (ulonglong)uVar17 * 0xc);
      *(undefined4 *)(lVar9 + 8 + uVar20 * 0xc) = uVar7;
    } while (uVar28 < uVar26);
  }
  uVar26 = this_01->CurBlock;
  uVar22 = (this->Triangles).CurBlockUsed;
  uVar28 = pFVar24->TriangleOffset;
  uVar17 = uVar28;
  for (; (int)uVar28 < (int)(uVar26 * 0x200 + uVar22); uVar28 = uVar28 + 1) {
    lVar19 = (ulonglong)(uVar28 >> 9) * 8;
    uVar27 = uVar17 & 0x1ff;
    uVar17 = uVar17 + 1;
    lVar9 = (ulonglong)uVar27 * 0xc;
    piVar29 = (int *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar19) +
                     lVar9);
    *piVar29 = *piVar29 + pFVar24->EdgeOffset;
    piVar29 = (int *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar19) +
                      4 + lVar9);
    *piVar29 = *piVar29 + pFVar24->EdgeOffset;
    piVar29 = (int *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar19) +
                      8 + lVar9);
    *piVar29 = *piVar29 + pFVar24->EdgeOffset;
  }
  FRefCountVector::Append(&this->TriangleRefCounts,&param_1->TriangleRefCounts);
  if ((this->TriangleGroups).bIsSet != false) {
    this->GroupIDCounter = this->GroupIDCounter + param_1->GroupIDCounter;
    if ((param_1->TriangleGroups).bIsSet == false) {
      uVar26 = (this->TriangleGroups).TypedValue.CurBlock;
      uVar28 = (this->TriangleGroups).TypedValue.CurBlockUsed;
      uVar22 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this->TriangleRefCounts).RefCounts.CurBlockUsed;
      TDynamicVector<int,512>::Resize(&(this->TriangleGroups).TypedValue,uVar22);
      for (uVar28 = uVar28 + uVar26 * 0x200; uVar28 < uVar22; uVar28 = uVar28 + 1) {
        *(undefined4 *)
         (*(longlong *)
           ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
           (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 4) = 0;
      }
    }
    else {
      TDynamicVector<int,512>::Add<512>
                (&(this->TriangleGroups).TypedValue,&(param_1->TriangleGroups).TypedValue);
      uVar26 = this_01->CurBlock;
      uVar22 = (this->Triangles).CurBlockUsed;
      uVar28 = pFVar24->TriangleOffset;
      uVar17 = uVar28;
      for (; (int)uVar28 < (int)(uVar26 * 0x200 + uVar22); uVar28 = uVar28 + 1) {
        iVar15 = pFVar24->GroupOffset;
        if (((this->TriangleGroups).bIsSet == false) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar27 = uVar17 & 0x1ff;
        uVar17 = uVar17 + 1;
        piVar29 = (int *)(*(longlong *)
                           ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)uVar27 * 4);
        *piVar29 = *piVar29 + iVar15;
      }
    }
  }
  this_03 = &this->Edges;
  iVar15 = this_03->CurBlock * 0x200 + (this->Edges).CurBlockUsed;
  uVar26 = (param_1->Edges).CurBlock * 0x200 + (param_1->Edges).CurBlockUsed;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Resize(this_03,uVar26 + iVar15);
  if (uVar26 != 0) {
    do {
      uVar22 = (uint)uVar23;
      uVar20 = uVar23 >> 9;
      uVar28 = iVar15 + uVar22;
      uVar23 = (ulonglong)(uVar22 + 1);
      puVar3 = (undefined8 *)
               (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + uVar20 * 8) +
               (ulonglong)(uVar22 & 0x1ff) * 0x10);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar28 >> 9) * 8) +
               (ulonglong)(uVar28 & 0x1ff) * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
    } while (uVar22 + 1 < uVar26);
  }
  uVar26 = this_03->CurBlock;
  uVar22 = (this->Edges).CurBlockUsed;
  for (uVar28 = pFVar24->EdgeOffset; (int)uVar28 < (int)(uVar26 * 0x200 + uVar22);
      uVar28 = uVar28 + 1) {
    lVar25 = (ulonglong)(uVar28 & 0x1ff) * 0x10;
    lVar21 = (ulonglong)(uVar28 & 0x1ff) * 0x10;
    lVar19 = (ulonglong)(uVar28 >> 9) * 8;
    piVar29 = (int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar19) + 8 +
                     lVar25);
    *piVar29 = *piVar29 + pFVar24->TriangleOffset;
    lVar9 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar19);
    iVar15 = *(int *)(lVar25 + 0xc + lVar9);
    if (iVar15 != -1) {
      *(int *)(lVar9 + 0xc + lVar21) = iVar15 + pFVar24->TriangleOffset;
    }
    piVar29 = (int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar19) + lVar25);
    *piVar29 = *piVar29 + pFVar24->VertexOffset;
    piVar29 = (int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar19) + 4 +
                     lVar21);
    *piVar29 = *piVar29 + pFVar24->VertexOffset;
  }
  FRefCountVector::Append(&this->EdgeRefCounts,&param_1->EdgeRefCounts);
  pFVar8 = (this->AttributeSet).Ptr;
  if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = (param_1->AttributeSet).Ptr;
    if (pFVar10 == (FDynamicMeshAttributeSet *)0x0) {
      FDynamicMeshAttributeSet::AppendDefaulted(pFVar8,pFVar24);
    }
    else {
      FDynamicMeshAttributeSet::Append(pFVar8,pFVar10,pFVar24);
    }
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar14 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar14) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar14) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar5 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar14 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar14) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar14) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar5 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return;
}

// BeginUnsafeTrianglesInsert @ 1434754b0

void __thiscall UE::Geometry::FDynamicMesh3::BeginUnsafeTrianglesInsert(FDynamicMesh3 *this)

{
  return;
}

// BeginUnsafeVerticesInsert @ 1434754c0

void __thiscall UE::Geometry::FDynamicMesh3::BeginUnsafeVerticesInsert(FDynamicMesh3 *this)

{
  return;
}

// CalculateWindingNumber @ 143476050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::FDynamicMesh3::CalculateWindingNumber(FDynamicMesh3 *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  dVar3 = 0.0;
  uVar6 = (this->TriangleRefCounts).RefCounts.CurBlockUsed +
          (this->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar5 = 0;
  if ((uVar6 != 0) &&
     (pFVar1 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar5 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar6) {
      do {
        lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8);
        if ((*(short *)(lVar2 + (ulonglong)(uVar4 & 0x1ff) * 2) != 0) &&
           (uVar5 = uVar4, *(short *)(lVar2 + (ulonglong)(uVar4 & 0x1ff) * 2) != -1)) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while ((int)uVar4 < (int)uVar6);
    }
  }
joined_r0x0001434760e8:
  do {
    if (uVar5 == uVar6) {
      return dVar3 * ___real_3fb45f306dc9c883;
    }
    while( true ) {
      dVar7 = GetTriSolidAngle(this,uVar5,param_1);
      uVar5 = uVar5 + 1;
      dVar3 = dVar3 + dVar7;
      if ((int)uVar6 <= (int)uVar5) break;
      pFVar1 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar1 + (ulonglong)(uVar5 >> 9) * 8) +
                       (ulonglong)(uVar5 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar1 + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 2) != -1)) break;
        uVar5 = uVar5 + 1;
        if ((int)uVar6 <= (int)uVar5) goto joined_r0x0001434760e8;
      }
    }
  } while( true );
}

// CanCollapseEdge @ 143477a90

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CanCollapseEdge
          (FDynamicMesh3 *this,int param_1,int param_2,FCollapseEdgeOptions *param_3)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0xe0))();
  return EVar1;
}

// CanCollapseEdge @ 143477ac0

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CanCollapseEdge
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0xe0))();
  return EVar1;
}

// CanCollapseEdgeInternal @ 143477b00

/* WARNING: Type propagation algorithm not settling */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CanCollapseEdgeInternal
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FCollapseEdgeOptions *param_4,
          FEdgeCollapseInfo *param_5)

{
  FSmallListSet *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  FIndex2i_u_0 FVar4;
  FIndex2i_u_0 FVar5;
  FIndex2i_u_0 FVar6;
  FIndex2i_u_0 FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int local_res8;
  bool local_res10;
  uint local_d8;
  uint local_d4;
  uint local_cc;
  FIndex3i_u_0 local_b8;
  FIndex3i_u_0 local_a8;
  BaseValueIterator local_98;
  BaseValueIterator local_70;
  
  if ((((param_1 < 0) ||
       (iVar20 = (this->VertexRefCounts).RefCounts.CurBlockUsed +
                 (this->VertexRefCounts).RefCounts.CurBlock * 0x200, iVar20 <= param_1)) ||
      (pFVar1 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) ||
     (((param_2 < 0 || (iVar20 <= param_2)) ||
      ((0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_2 >> 9) * 8) +
                                    (ulonglong)(param_2 & 0x1ff) * 2) - 1U) ||
       (uVar9 = FindEdge(this,param_2,param_1), uVar9 == 0xffffffff)))))) {
    return Failed_NotAnEdge;
  }
  uVar21 = *(ulonglong *)
            (*(longlong *)
              ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) + 8 +
            (ulonglong)(uVar9 & 0x1ff) * 0x10);
  uVar15 = (uint)uVar21;
  if (uVar15 == 0xffffffff) {
    return Failed_BrokenTopology;
  }
  pFVar1 = (this->Triangles).Blocks.AllocatorInstance.Data;
  lVar2 = *(longlong *)(pFVar1 + ((uVar21 & 0xffffffff) >> 9) * 8);
  local_b8._0_8_ = *(undefined8 *)(lVar2 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
  local_b8._s_0.C = *(int *)(lVar2 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
  iVar20 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                     (param_2,param_1,(FIndex3i *)&local_b8._s_0);
  uVar12 = 0xffffffff;
  local_res8 = -1;
  local_b8._0_8_ = uVar21 >> 0x20;
  local_res10 = false;
  uVar11 = (uint)(uVar21 >> 0x20);
  if (uVar11 == 0xffffffff) {
    local_res10 = true;
  }
  else {
    uVar13 = (ulonglong)(uVar11 & 0x1ff);
    lVar2 = *(longlong *)(pFVar1 + (uVar21 >> 0x29) * 8);
    local_a8._0_8_ = *(undefined8 *)(lVar2 + uVar13 * 0xc);
    local_a8._s_0.C = *(int *)(lVar2 + 8 + uVar13 * 0xc);
    local_res8 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                           (param_2,param_1,(FIndex3i *)&local_a8._s_0);
    if (iVar20 == local_res8) {
      return Failed_FoundDuplicateTriangle;
    }
  }
  this_00 = &this->VertexEdgeLists;
  iVar10 = FSmallListSet::GetCount(this_00,param_2);
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_cc = 0xffffffff;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_70,this_00,param_2,false);
  while (((local_70.ListSet != this_00 || (local_70.ListIndex != param_2)) ||
         ((local_70.iCur != -1 || (local_70.cur_ptr != -1))))) {
    uVar11 = local_70.cur_value;
    uVar21 = (local_70._32_8_ & 0xffffffff) >> 9;
    uVar3 = *(undefined8 *)
             (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar21 * 8) +
             (ulonglong)(uVar11 & 0x1ff) * 0x10);
    iVar17 = (int)((ulonglong)uVar3 >> 0x20);
    iVar18 = (int)uVar3;
    iVar16 = iVar17;
    if ((iVar18 != param_2) && (iVar16 = -1, iVar17 == param_2)) {
      iVar16 = iVar18;
    }
    if (iVar16 == iVar20) {
      FSmallListSet::BaseValueIterator::GotoNext(&local_70);
      local_d8 = uVar11;
    }
    else if (iVar16 == local_res8) {
      FSmallListSet::BaseValueIterator::GotoNext(&local_70);
      local_d4 = uVar11;
    }
    else {
      if (iVar16 != param_1) {
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_98,this_00,param_1,false);
        while( true ) {
          if ((((local_98.ListSet == this_00) && (local_98.ListIndex == param_1)) &&
              (local_98.iCur == -1)) && (local_98.cur_ptr == -1)) goto LAB_143477eb7;
          pFVar1 = (this->Edges).Blocks.AllocatorInstance.Data;
          uVar13 = (ulonglong)(local_98.cur_value & 0x1ff);
          uVar19 = (local_98._32_8_ & 0xffffffff) >> 9;
          uVar3 = *(undefined8 *)(*(longlong *)(pFVar1 + uVar19 * 8) + uVar13 * 0x10);
          iVar18 = (int)((ulonglong)uVar3 >> 0x20);
          iVar14 = (int)uVar3;
          iVar17 = iVar18;
          if ((iVar14 != param_1) && (iVar17 = -1, iVar18 == param_1)) {
            iVar17 = iVar14;
          }
          if (iVar17 == iVar16) break;
          FSmallListSet::BaseValueIterator::GotoNext(&local_98);
        }
        if (param_4->bAllowHoleCollapse == false) {
          return Failed_InvalidNeighbourhood;
        }
        if (*(int *)(*(longlong *)(pFVar1 + uVar19 * 8) + 0xc + uVar13 * 0x10) != -1) {
          return Failed_InvalidNeighbourhood;
        }
        if (*(int *)(*(longlong *)(pFVar1 + uVar21 * 8) + 0xc + (ulonglong)(uVar11 & 0x1ff) * 0x10)
            != -1) {
          return Failed_InvalidNeighbourhood;
        }
      }
LAB_143477eb7:
      FSmallListSet::BaseValueIterator::GotoNext(&local_70);
    }
  }
  if (((param_4->bAllowTetrahedronCollapse == false) && (iVar10 == 3)) && (local_res10 == false)) {
    uVar11 = FindEdge(this,local_res8,iVar20);
    if (uVar11 != 0xffffffff) {
      uVar3 = *(undefined8 *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) + 8 +
               (ulonglong)(uVar11 & 0x1ff) * 0x10);
      iVar10 = (int)((ulonglong)uVar3 >> 0x20);
      if (iVar10 != -1) {
        iVar16 = (int)uVar3;
        bVar8 = TriangleHasVertex(this,iVar16,param_2);
        if (((bVar8) && (bVar8 = TriangleHasVertex(this,iVar10,param_1), bVar8)) ||
           ((bVar8 = TriangleHasVertex(this,iVar16,param_1), bVar8 &&
            (bVar8 = TriangleHasVertex(this,iVar10,param_2), bVar8)))) {
          return Failed_CollapseTetrahedron;
        }
      }
    }
  }
  else if (((local_res10 == true) &&
           (pFVar1 = (this->Edges).Blocks.AllocatorInstance.Data,
           *(int *)(*(longlong *)(pFVar1 + (ulonglong)(local_d8 >> 9) * 8) + 0xc +
                   (ulonglong)(local_d8 & 0x1ff) * 0x10) == -1)) &&
          (uVar12 = FindEdgeFromTri(this,param_1,iVar20,uVar15),
          *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar12 >> 9) * 8) + 0xc +
                  (ulonglong)(uVar12 & 0x1ff) * 0x10) == -1)) {
    return Failed_CollapseTriangle;
  }
  if (param_4->bAllowCollapsingInternalEdgeWithBoundaryVertices == false) {
    if (((local_res10 == false) && (bVar8 = IsBoundaryVertex(this,param_2), bVar8)) &&
       (bVar8 = IsBoundaryVertex(this,param_1), bVar8)) {
      return Failed_InvalidNeighbourhood;
    }
    if (param_4->bAllowCollapsingInternalEdgeWithBoundaryVertices == false) goto LAB_14347813b;
  }
  if ((((local_res10 == false) &&
       (pFVar1 = (this->Edges).Blocks.AllocatorInstance.Data,
       *(int *)(*(longlong *)(pFVar1 + (ulonglong)(local_d8 >> 9) * 8) + 0xc +
               (ulonglong)(local_d8 & 0x1ff) * 0x10) == -1)) &&
      (*(int *)(*(longlong *)(pFVar1 + (ulonglong)(local_d4 >> 9) * 8) + 0xc +
               (ulonglong)(local_d4 & 0x1ff) * 0x10) == -1)) &&
     (uVar12 = FindEdgeFromTri(this,param_1,iVar20,uVar15),
     *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar12 >> 9) * 8) + 0xc +
             (ulonglong)(uVar12 & 0x1ff) * 0x10) == -1)) {
    local_cc = FindEdgeFromTri(this,param_1,local_res8,local_b8._s_0.A);
    if (*(int *)(*(longlong *)(pFVar1 + (ulonglong)(local_cc >> 9) * 8) + 0xc +
                (ulonglong)(local_cc & 0x1ff) * 0x10) == -1) {
      return Failed_CollapseQuad;
    }
  }
LAB_14347813b:
  if (param_5 != (FEdgeCollapseInfo *)0x0) {
    FVar4._s_0.B = local_res8;
    FVar4._s_0.A = iVar20;
    (param_5->OpposingVerts).field0_0x0 = FVar4;
    param_5->bIsBoundary = local_res10;
    param_5->CollapsedEdge = uVar9;
    FVar5._s_0.B = (int)local_b8._0_8_;
    FVar5._s_0.A = uVar15;
    (param_5->RemovedTris).field0_0x0 = FVar5;
    FVar6._s_0.B = local_d4;
    FVar6._s_0.A = local_d8;
    (param_5->RemovedEdges).field0_0x0 = FVar6;
    FVar7._s_0.B = local_cc;
    FVar7._s_0.A = uVar12;
    (param_5->KeptEdges).field0_0x0 = FVar7;
    param_5->CollapseT = param_3;
    param_5->KeptVertex = param_1;
    param_5->RemovedVertex = param_2;
  }
  return Ok;
}

// CanCollapseEdgeInternal @ 143478210

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CanCollapseEdgeInternal
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FEdgeCollapseInfo *param_4)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0xe0))();
  return EVar1;
}

// CheckValidity @ 14347fc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014347fe41) */
/* WARNING: Removing unreachable block (ram,0x000143481696) */
/* WARNING: Removing unreachable block (ram,0x0001434816aa) */
/* WARNING: Removing unreachable block (ram,0x0001434816ae) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMesh3::CheckValidity
          (FDynamicMesh3 *this,FValidityOptions param_1,EValidityCheckFailMode param_2)

{
  FRefCountVector *pFVar1;
  double *pdVar2;
  ForElementType<int> FVar3;
  char *pcVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  double dVar7;
  double dVar8;
  ForAnyElementType FVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FSmallListSet *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uchar auVar20 [4];
  uchar auVar21 [4];
  uchar auVar22 [4];
  uchar auVar23 [4];
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  bool bVar32;
  undefined1 uVar33;
  short sVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  TDynamicVector<int,512> *pTVar43;
  undefined8 uVar44;
  longlong *plVar45;
  undefined ***pppuVar46;
  int iVar47;
  undefined1 *puVar48;
  int iVar49;
  code *pcVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ForElementType<int> FVar53;
  int iVar54;
  longlong lVar55;
  FSmallListSet *pFVar56;
  ulonglong uVar57;
  longlong lVar58;
  uint uVar59;
  bool bStackX_11;
  undefined1 auStackY_698 [32];
  undefined1 local_648 [8];
  undefined1 local_640 [8];
  undefined1 local_638 [8];
  undefined1 local_630 [8];
  undefined1 local_628;
  byte local_627;
  char local_620 [8];
  char local_618 [8];
  undefined8 local_610;
  undefined8 local_608;
  undefined1 local_600 [8];
  undefined1 local_5f8 [8];
  undefined1 local_5f0 [8];
  undefined1 local_5e8 [8];
  undefined1 local_5e0 [8];
  undefined1 local_5d8 [8];
  undefined1 local_5d0 [8];
  undefined1 local_5c8 [8];
  byte local_5c0 [8];
  undefined1 local_5b8 [8];
  undefined1 local_5b0 [8];
  undefined1 local_5a8 [8];
  undefined1 local_5a0 [8];
  undefined1 local_598 [8];
  undefined1 local_590 [8];
  undefined1 local_588 [8];
  undefined1 local_580 [8];
  undefined1 local_578 [8];
  undefined1 local_570 [8];
  undefined1 local_568 [8];
  undefined1 local_560 [8];
  undefined1 local_558 [8];
  undefined1 local_550 [8];
  undefined1 local_548 [8];
  undefined1 local_540 [8];
  undefined1 local_538 [8];
  undefined1 local_530 [8];
  undefined1 local_528 [8];
  undefined1 local_520 [8];
  undefined1 local_518 [8];
  undefined1 local_510 [8];
  undefined1 local_508 [8];
  undefined1 local_500 [8];
  undefined1 local_4f8 [8];
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [8];
  undefined1 local_4e0 [8];
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  undefined1 local_4c8 [8];
  undefined1 local_4c0 [8];
  undefined1 local_4b8 [8];
  ForAnyElementType local_4b0;
  uint local_4a8;
  int local_4a4;
  undefined8 local_4a0;
  uint local_498;
  ulonglong local_490;
  TArray<int,TSizedDefaultAllocator<32>_> local_488;
  uint local_478;
  uint local_474;
  ulonglong local_470;
  IndexIterator local_468;
  int local_458 [2];
  EValidityCheckFailMode local_450;
  ulonglong local_448;
  code *local_440;
  undefined8 local_438;
  undefined8 local_430;
  FDynamicMesh3 *local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_410;
  int local_408;
  BaseIterator local_400;
  BaseIterator local_3f0;
  BaseIterator local_3e0;
  code *local_3c8;
  undefined8 uStack_3c0;
  FFunctionStorage local_3b8;
  undefined1 local_398 [24];
  int local_380;
  int local_37c;
  ulonglong local_378;
  <lambda_1> local_370;
  uint local_360;
  undefined4 uStack_35c;
  FDynamicMesh3 *pFStack_358;
  <lambda_1> local_350;
  IndexIterator local_340;
  IndexIterator local_330;
  IndexIterator local_320;
  BaseValueIterator local_310;
  code *local_2e8;
  undefined **local_2d8;
  undefined8 local_2d0;
  FDynamicMesh3 *pFStack_2c8;
  undefined ***local_2c0;
  BaseValueIterator local_2b8;
  IndexIterator local_290;
  code *local_278 [2];
  code *local_268 [3];
  undefined8 local_250;
  code *local_248 [2];
  code *local_238 [3];
  undefined8 local_220;
  code *local_218;
  undefined8 uStack_210;
  undefined **local_208;
  undefined1 *puStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined ***pppuStack_1f0;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_1e8;
  FSmallListSet *local_1b8;
  uint local_1b0;
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  uchar auStack_190 [4];
  uchar auStack_18c [4];
  uchar local_188 [4];
  uchar auStack_184 [4];
  longlong *plStack_180;
  code *local_178;
  undefined8 uStack_170;
  undefined **local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  code *local_148;
  undefined8 uStack_140;
  undefined **local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined1 local_118 [64];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.ArrayNum = 0;
  local_488.ArrayMax = 0;
  local_450 = param_2;
  local_428 = this;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_488,
             (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar42 = uStack_210;
  local_628 = 1;
  local_208 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  pppuStack_1f0 = (undefined ***)0x0;
  local_218 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,void,bool>
              ::Call;
  if (param_2 == Check) {
    local_218 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,void,bool>
                ::Call;
    uStack_210 = uStack_170;
    local_1f8 = local_158;
    uStack_1f4 = uStack_154;
    pppuStack_1f0 = (undefined ***)0x0;
    local_208 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`5'::<lambda_2>,0,0>
                 ::_vftable_;
    puStack_200 = &local_628;
    local_178 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,void,bool>
                ::Call;
    uStack_170 = uVar42;
    local_168 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    puStack_160 = &local_628;
    uStack_150 = 0;
    pppuVar46 = &local_168;
  }
  else {
    puStack_200 = &local_628;
    if (param_2 != Ensure) goto LAB_14347fe4b;
    local_218 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,void,bool>
                ::Call;
    uStack_210 = uStack_140;
    local_1f8 = local_128;
    uStack_1f4 = uStack_124;
    pppuStack_1f0 = (undefined ***)0x0;
    local_208 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`9'::<lambda_3>,0,0>
                 ::_vftable_;
    puStack_200 = &local_628;
    local_148 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,void,bool>
                ::Call;
    uStack_140 = uVar42;
    local_138 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    puStack_130 = &local_628;
    uStack_120 = 0;
    pppuVar46 = &local_138;
  }
  pppuStack_1f0 = (undefined ***)0x0;
  (*(code *)(*pppuVar46)[2])();
LAB_14347fe4b:
  if (((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (this->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
     ((longlong)(this->VertexRefCounts).UsedCount !=
      (ulonglong)((this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed))) {
    local_620[0] = '\0';
  }
  else {
    local_620[0] = '\x01';
  }
  Core::Private::Function::CheckCallable(local_218);
  pcVar50 = local_218;
  pppuVar46 = &local_208;
  if (pppuStack_1f0 != (undefined ***)0x0) {
    pppuVar46 = pppuStack_1f0;
  }
  puVar41 = (undefined8 *)(*(code *)(*pppuVar46)[1])();
  if (pcVar50 ==
      Core::Private::Function::
      TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,void,bool>::
      Call) {
    pcVar4 = (char *)*puVar41;
    if ((*pcVar4 == '\0') || (local_620[0] == '\0')) {
      *pcVar4 = '\0';
    }
    else {
      *pcVar4 = '\x01';
    }
  }
  else {
    (*pcVar50)(puVar41,local_620);
  }
  if (((this->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (this->TriangleRefCounts).FreeIndices.CurBlockUsed == 0) &&
     ((longlong)(this->TriangleRefCounts).UsedCount !=
      (ulonglong)((this->Triangles).CurBlock * 0x200 + (this->Triangles).CurBlockUsed))) {
    local_618[0] = '\0';
  }
  else {
    local_618[0] = '\x01';
  }
  Core::Private::Function::CheckCallable(local_218);
  pcVar50 = local_218;
  pppuVar46 = &local_208;
  if (pppuStack_1f0 != (undefined ***)0x0) {
    pppuVar46 = pppuStack_1f0;
  }
  puVar41 = (undefined8 *)(*(code *)(*pppuVar46)[1])();
  if (pcVar50 ==
      Core::Private::Function::
      TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,void,bool>::
      Call) {
    pcVar4 = (char *)*puVar41;
    if ((*pcVar4 == '\0') || (local_618[0] == '\0')) {
      *pcVar4 = '\0';
    }
    else {
      *pcVar4 = '\x01';
    }
  }
  else {
    (*pcVar50)(puVar41,local_618);
  }
  local_4c0[0] = (this->TriangleEdges).CurBlock * 0x200 + (this->TriangleEdges).CurBlockUsed ==
                 (this->Triangles).CurBlock * 0x200 + (this->Triangles).CurBlockUsed;
  Core::Private::Function::CheckCallable(local_218);
  pcVar50 = local_218;
  pppuVar46 = &local_208;
  if (pppuStack_1f0 != (undefined ***)0x0) {
    pppuVar46 = pppuStack_1f0;
  }
  uVar42 = (*(code *)(*pppuVar46)[1])();
  (*pcVar50)(uVar42,local_4c0);
  pFVar1 = &this->TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_400,pFVar1,0,
             (pFVar1->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed
            );
  iVar54 = (pFVar1->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_330,pFVar1,iVar54,iVar54);
  local_448._0_4_ = local_400.Index;
  local_448._4_4_ = local_400.LastIndex;
  if (local_400.Index != local_330._8_4_) {
    do {
      uVar52 = local_400._8_8_;
      uVar39 = local_400.Index;
      local_448 = local_400._8_8_;
      local_4b8[0] = FRefCountVector::IsValid(&this->TriangleRefCounts,uVar39);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_4b8);
      uVar51 = (ulonglong)(uVar39 & 0x1ff);
      uVar57 = (uVar52 & 0xffffffff) >> 9;
      sVar34 = *(short *)(*(longlong *)
                           ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           uVar57 * 8) + uVar51 * 2);
      if (sVar34 == -1) {
        sVar34 = 0;
      }
      local_600[0] = sVar34 == 1;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_600);
      lVar55 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar57 * 8);
      local_4a0 = *(undefined8 *)(lVar55 + uVar51 * 0xc);
      uVar37 = *(uint *)(lVar55 + 8 + uVar51 * 0xc);
      uVar40 = (uint)local_4a0;
      lVar55 = (longlong)(int)(uint)local_4a0;
      local_498 = uVar37;
      local_648[0] = FRefCountVector::IsValid(&this->VertexRefCounts,(uint)local_4a0);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_648);
      uVar36 = 0;
      if ((int)uVar40 < local_488.ArrayNum) {
        uVar36 = ~uVar40 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar50 = (code *)swi(3);
        uVar33 = (*pcVar50)();
        return (bool)uVar33;
      }
      uVar36 = local_4a0._4_4_;
      lVar58 = (longlong)(int)local_4a0._4_4_;
      *(int *)(local_488.AllocatorInstance.Data + lVar55 * 4) =
           *(int *)(local_488.AllocatorInstance.Data + lVar55 * 4) + 1;
      local_648[0] = FRefCountVector::IsValid(&this->VertexRefCounts,local_4a0._4_4_);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_648);
      uVar35 = 0;
      if ((int)uVar36 < local_488.ArrayNum) {
        uVar35 = ~uVar36 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar50 = (code *)swi(3);
        uVar33 = (*pcVar50)();
        return (bool)uVar33;
      }
      *(int *)(local_488.AllocatorInstance.Data + lVar58 * 4) =
           *(int *)(local_488.AllocatorInstance.Data + lVar58 * 4) + 1;
      local_648[0] = FRefCountVector::IsValid(&this->VertexRefCounts,uVar37);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_648);
      uVar35 = 0;
      if ((int)uVar37 < local_488.ArrayNum) {
        uVar35 = ~uVar37 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar50 = (code *)swi(3);
        uVar33 = (*pcVar50)();
        return (bool)uVar33;
      }
      *(int *)(local_488.AllocatorInstance.Data + (longlong)(int)uVar37 * 4) =
           *(int *)(local_488.AllocatorInstance.Data + (longlong)(int)uVar37 * 4) + 1;
      iVar54 = FindEdge(this,uVar40,uVar36);
      local_610 = CONCAT44(extraout_var,iVar54);
      local_640[0] = iVar54 != -1;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_640);
      uVar42 = *(undefined8 *)
                (*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data + ((local_610 & 0xffffffff) >> 9) * 8
                  ) + 8 + (ulonglong)((uint)local_610 & 0x1ff) * 0x10);
      if (((uint)uVar42 == uVar39) || ((uint)((ulonglong)uVar42 >> 0x20) == uVar39)) {
        local_638[0] = 1;
      }
      else {
        local_638[0] = 0;
      }
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_638);
      iVar54 = FindEdgeFromTri(this,uVar40,uVar36,uVar39);
      local_630[0] = (uint)local_610 == iVar54;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_630);
      iVar54 = FindEdge(this,uVar36,uVar37);
      local_490 = CONCAT44(extraout_var_00,iVar54);
      local_640[0] = iVar54 != -1;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_640);
      uVar42 = *(undefined8 *)
                (*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data + ((local_490 & 0xffffffff) >> 9) * 8
                  ) + 8 + (ulonglong)((uint)local_490 & 0x1ff) * 0x10);
      if (((uint)uVar42 == uVar39) || ((uint)((ulonglong)uVar42 >> 0x20) == uVar39)) {
        local_638[0] = 1;
      }
      else {
        local_638[0] = 0;
      }
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_638);
      iVar54 = FindEdgeFromTri(this,uVar36,uVar37,uVar39);
      local_630[0] = (int)local_490 == iVar54;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_630);
      uVar36 = FindEdge(this,uVar37,uVar40);
      local_640[0] = uVar36 != 0xffffffff;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_640);
      uVar42 = *(undefined8 *)
                (*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar36 >> 9) * 8) + 8 +
                (ulonglong)(uVar36 & 0x1ff) * 0x10);
      if (((uint)uVar42 == uVar39) || ((uint)((ulonglong)uVar42 >> 0x20) == uVar39)) {
        local_638[0] = 1;
      }
      else {
        local_638[0] = 0;
      }
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_638);
      uVar37 = FindEdgeFromTri(this,uVar37,uVar40,uVar39);
      local_630[0] = uVar36 == uVar37;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_630);
      if ((((uint)local_610 == (uint)local_490) || ((uint)local_610 == uVar36)) ||
         ((uint)local_490 == uVar36)) {
        local_5f8[0] = 0;
      }
      else {
        local_5f8[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_5f8);
      uVar57 = (ulonglong)(uVar39 & 0x1ff);
      local_440 = (code *)((uVar52 & 0xffffffff) >> 9);
      local_610 = CONCAT44(local_610._4_4_,1);
      uVar51 = uVar57 * 3;
      local_470 = uVar51;
      lVar55 = *(longlong *)
                ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (longlong)local_440 * 8);
      local_418 = *(undefined4 *)(lVar55 + 8 + uVar57 * 0xc);
      local_490 = 0;
      local_420 = *(undefined8 *)(lVar55 + uVar57 * 0xc);
      do {
        uVar37 = *(uint *)((longlong)&local_420 + local_490);
        if ((((int)uVar37 < 0) ||
            ((int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar37)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                           Data + (ulonglong)(uVar37 >> 9) * 8) +
                                        (ulonglong)(uVar37 & 0x1ff) * 2) - 1U))) {
          local_5f0[0] = 0;
        }
        else {
          local_5f0[0] = 1;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_5f0);
        pFVar5 = (this->Edges).Blocks.AllocatorInstance.Data;
        uVar42 = *(undefined8 *)
                  (*(longlong *)(pFVar5 + (ulonglong)(uVar37 >> 9) * 8) + 8 +
                  (ulonglong)(uVar37 & 0x1ff) * 0x10);
        uVar35 = (uint)((ulonglong)uVar42 >> 0x20);
        uVar36 = (uint)uVar42;
        uVar59 = (uint)uVar52;
        uVar40 = uVar35;
        if (((uVar36 == uVar39) || (uVar40 = uVar36, uVar35 == uVar59)) && (uVar40 != 0xffffffff)) {
          uVar52 = (ulonglong)(uVar40 & 0x1ff);
          lVar55 = *(longlong *)
                    ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar40 >> 9) * 8);
          uVar36 = *(uint *)(lVar55 + uVar52 * 0xc);
          uVar42 = *(undefined8 *)
                    (*(longlong *)(pFVar5 + (ulonglong)(uVar36 >> 9) * 8) + 8 +
                    (ulonglong)(uVar36 & 0x1ff) * 0x10);
          if ((((uint)uVar42 == uVar39) || ((uint)((ulonglong)uVar42 >> 0x20) == uVar59)) ||
             ((uVar36 = *(uint *)(lVar55 + 4 + uVar52 * 0xc),
              uVar42 = *(undefined8 *)
                        (*(longlong *)(pFVar5 + (ulonglong)(uVar36 >> 9) * 8) + 8 +
                        (ulonglong)(uVar36 & 0x1ff) * 0x10), (uint)uVar42 == uVar39 ||
              ((uint)((ulonglong)uVar42 >> 0x20) == uVar59)))) {
LAB_143480866:
            local_5e8[0] = 1;
          }
          else {
            bVar32 = EdgeHasTriangle(this,*(int *)(lVar55 + 8 + uVar52 * 0xc),uVar59);
            local_5e8[0] = 0;
            if (bVar32) goto LAB_143480866;
          }
          Core::Private::Function::CheckCallable(local_218);
          pcVar50 = local_218;
          pppuVar46 = &local_208;
          if (pppuStack_1f0 != (undefined ***)0x0) {
            pppuVar46 = pppuStack_1f0;
          }
          uVar42 = (*(code *)(*pppuVar46)[1])();
          (*pcVar50)(uVar42,local_5e8);
          iVar54 = *(int *)((longlong)&local_4a0 + local_490);
          iVar49 = *(int *)((longlong)&local_4a0 +
                           (longlong)
                           (int)((uint)local_610 +
                                ((int)(uint)local_610 / 3 + ((int)(uint)local_610 >> 0x1f) +
                                (int)(((longlong)(int)(uint)local_610 / 3 +
                                       ((longlong)(int)(uint)local_610 >> 0x3f) & 0xffffffffU) >>
                                     0x1f)) * -3) * 4);
          uVar42 = *(undefined8 *)
                    (*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar37 >> 9) * 8) +
                    (ulonglong)(uVar37 & 0x1ff) * 0x10);
          iVar47 = (int)uVar42;
          iVar38 = (int)((ulonglong)uVar42 >> 0x20);
          if (iVar54 == iVar47) {
            local_5e0[0] = iVar49 == iVar38;
          }
          else if ((iVar54 == iVar38) && (iVar49 == iVar47)) {
            local_5e0[0] = true;
          }
          else {
            local_5e0[0] = false;
          }
          Core::Private::Function::CheckCallable(local_218);
          pcVar50 = local_218;
          pppuVar46 = &local_208;
          if (pppuStack_1f0 != (undefined ***)0x0) {
            pppuVar46 = pppuStack_1f0;
          }
          uVar42 = (*(code *)(*pppuVar46)[1])();
          (*pcVar50)(uVar42,local_5e0);
          bStackX_11 = param_1.bAllowAdjacentFacesReverseOrientation;
          uVar51 = local_470;
          uVar52 = local_448;
          if (bStackX_11 == false) {
            lVar55 = *(longlong *)
                      ((this->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar40 >> 9) * 8);
            local_410 = *(undefined8 *)(lVar55 + (ulonglong)(uVar40 & 0x1ff) * 0xc);
            local_408 = *(int *)(lVar55 + 8 + (ulonglong)(uVar40 & 0x1ff) * 0xc);
            iVar38 = (int)((ulonglong)local_410 >> 0x20);
            if (((int)local_410 == iVar49) && (iVar38 == iVar54)) {
              iVar49 = 0;
            }
            else if ((iVar38 == iVar49) && (local_408 == iVar54)) {
              iVar49 = 1;
            }
            else if ((local_408 != iVar49) || (iVar49 = 2, (int)local_410 != iVar54)) {
              iVar49 = -1;
            }
            local_5d8[0] = iVar49 != -1;
            Core::Private::Function::CheckCallable(local_218);
            pcVar50 = local_218;
            pppuVar46 = &local_208;
            if (pppuStack_1f0 != (undefined ***)0x0) {
              pppuVar46 = pppuStack_1f0;
            }
            uVar42 = (*(code *)(*pppuVar46)[1])();
            (*pcVar50)(uVar42,local_5d8);
            uVar51 = local_470;
            uVar52 = local_448;
          }
        }
        else {
          bVar32 = IsTriangle(this,uVar59);
          if ((bVar32) &&
             (((lVar55 = *(longlong *)
                          ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
                          (longlong)local_440 * 8), uVar37 = *(uint *)(lVar55 + uVar51 * 4),
               *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar37 >> 9) * 8) + 0xc +
                       (ulonglong)(uVar37 & 0x1ff) * 0x10) == -1 ||
               (uVar37 = *(uint *)(lVar55 + 4 + uVar51 * 4),
               *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar37 >> 9) * 8) + 0xc +
                       (ulonglong)(uVar37 & 0x1ff) * 0x10) == -1)) ||
              (uVar37 = *(uint *)(lVar55 + 8 + uVar51 * 4),
              *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar37 >> 9) * 8) + 0xc +
                      (ulonglong)(uVar37 & 0x1ff) * 0x10) == -1)))) {
            local_5d0[0] = 1;
          }
          else {
            local_5d0[0] = 0;
          }
          Core::Private::Function::CheckCallable(local_218);
          pcVar50 = local_218;
          pppuVar46 = &local_208;
          if (pppuStack_1f0 != (undefined ***)0x0) {
            pppuVar46 = pppuStack_1f0;
          }
          uVar42 = (*(code *)(*pppuVar46)[1])();
          (*pcVar50)(uVar42,local_5d0);
        }
        iVar54 = (uint)local_610 + 1;
        local_490 = local_490 + 4;
        local_610 = CONCAT44(local_610._4_4_,iVar54);
      } while (iVar54 != 4);
      FRefCountVector::BaseIterator::goto_next(&local_400);
      local_448._0_4_ = local_400.Index;
      local_448._4_4_ = local_400.LastIndex;
    } while (local_400.Index != local_330._8_4_);
  }
  if ((this->TriangleGroups).bIsSet != false) {
    pTVar43 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue(&this->TriangleGroups);
    pFVar1 = &this->TriangleRefCounts;
    local_5c8[0] = (ulonglong)(pTVar43->CurBlock * 0x200 + pTVar43->CurBlockUsed) ==
                   (longlong)
                   (int)((this->TriangleRefCounts).RefCounts.CurBlockUsed +
                        (pFVar1->RefCounts).CurBlock * 0x200);
    Core::Private::Function::CheckCallable(local_218);
    pcVar50 = local_218;
    pppuVar46 = &local_208;
    if (pppuStack_1f0 != (undefined ***)0x0) {
      pppuVar46 = pppuStack_1f0;
    }
    uVar42 = (*(code *)(*pppuVar46)[1])();
    (*pcVar50)(uVar42,local_5c8);
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_3f0,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (this->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar54 = (pFVar1->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed
    ;
    FRefCountVector::IndexIterator::IndexIterator(&local_290,pFVar1,iVar54,iVar54);
    iVar54 = local_3f0.Index;
    while (iVar54 != local_290._8_4_) {
      uVar51 = (ulonglong)((uint)local_3f0._8_8_ & 0x1ff);
      uVar52 = (local_3f0._8_8_ & 0xffffffff) >> 9;
      local_5c0[0] = (byte)((uint)*(undefined4 *)
                                   (*(longlong *)
                                     ((pTVar43->Blocks).AllocatorInstance.Data + uVar52 * 8) +
                                   uVar51 * 4) >> 0x1f) ^ 1;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_5c0);
      local_5b8[0] = *(int *)(*(longlong *)((pTVar43->Blocks).AllocatorInstance.Data + uVar52 * 8) +
                             uVar51 * 4) < this->GroupIDCounter;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_5b8);
      FRefCountVector::BaseIterator::goto_next(&local_3f0);
      iVar54 = local_3f0.Index;
    }
  }
  pFVar1 = &this->EdgeRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_3e0,pFVar1,0,
             (pFVar1->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed);
  iVar54 = (pFVar1->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_320,pFVar1,iVar54,iVar54);
  if (local_3e0.Index != local_320._8_4_) {
    do {
      uVar42 = local_3e0._8_8_;
      uVar39 = local_3e0.Index;
      local_5b0[0] = FRefCountVector::IsValid(pFVar1,uVar39);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar44 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar44,local_5b0);
      uVar51 = (ulonglong)(uVar39 & 0x1ff);
      uVar52 = (uVar42 & 0xffffffff) >> 9;
      sVar34 = *(short *)(*(longlong *)
                           ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           uVar52 * 8) + uVar51 * 2);
      if (sVar34 == -1) {
        sVar34 = 0;
      }
      local_5a8[0] = sVar34 == 1;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_5a8);
      lVar55 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar52 * 8);
      local_438 = *(undefined8 *)(lVar55 + uVar51 * 0x10);
      uVar42 = *(undefined8 *)(lVar55 + 8 + uVar51 * 0x10);
      iVar54 = (int)local_438;
      local_430 = uVar42;
      local_5a0[0] = FRefCountVector::IsValid(&this->VertexRefCounts,iVar54);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar44 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar44,local_5a0);
      local_598[0] = FRefCountVector::IsValid(&this->VertexRefCounts,local_438._4_4_);
      Core::Private::Function::CheckCallable(local_218);
      iVar49 = (int)uVar42;
      local_440 = local_218;
      pppuVar46 = pppuStack_1f0;
      if (pppuStack_1f0 == (undefined ***)0x0) {
        pppuVar46 = &local_208;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*local_440)(uVar42,local_598);
      local_590[0] = iVar49 != -1;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_590);
      local_588[0] = iVar54 < local_438._4_4_;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_588);
      local_580[0] = FRefCountVector::IsValid(&this->TriangleRefCounts,iVar49);
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_580);
      if (local_430._4_4_ != -1) {
        local_578[0] = FRefCountVector::IsValid(&this->TriangleRefCounts,local_430._4_4_);
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_578);
      }
      FRefCountVector::BaseIterator::goto_next(&local_3e0);
    } while (local_3e0.Index != local_320._8_4_);
  }
  if (((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (this->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
     (uVar39 = 0, 0 < (int)((this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed))) {
    do {
      if (((int)uVar39 < 0) ||
         (((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar39 ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance
                                          .Data + (ulonglong)(uVar39 >> 9) * 8) +
                                       (ulonglong)(uVar39 & 0x1ff) * 2) - 1U))))) {
        local_570[0] = 0;
      }
      else {
        local_570[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_570);
      uVar39 = uVar39 + 1;
    } while ((int)uVar39 < (int)((this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed))
    ;
  }
  FRefCountVector::IndexIterator::IndexIterator
            (&local_468,&this->VertexRefCounts,0,
             (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar54 = (this->VertexRefCounts).RefCounts.CurBlockUsed +
           (this->VertexRefCounts).RefCounts.CurBlock * 0x200;
  FRefCountVector::IndexIterator::IndexIterator(&local_340,&this->VertexRefCounts,iVar54,iVar54);
  if (local_468._8_4_ != local_340._8_4_) {
    local_610 = CONCAT44(local_468._12_4_,local_468._8_4_);
    pFVar56 = &this->VertexEdgeLists;
    do {
      uVar10 = local_468._8_4_;
      uVar42 = local_610;
      uVar39 = local_468._8_4_;
      local_470 = (ulonglong)(uint)local_468._8_4_;
      if ((((int)local_468._8_4_ < 0) ||
          ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)local_468._8_4_)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                         Data + (ulonglong)((uint)local_468._8_4_ >> 9) * 8) +
                                      (ulonglong)(local_468._8_4_ & 0x1ff) * 2) - 1U))) {
        local_568[0] = 0;
      }
      else {
        local_568[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar44 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar44,local_568);
      uVar52 = (ulonglong)((uint)uVar42 & 0x1ff);
      lVar55 = *(longlong *)
                ((this->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)uVar10 >> 9) * 8
                );
      pdVar2 = (double *)(lVar55 + uVar52 * 0x18);
      dVar7 = *pdVar2;
      dVar8 = pdVar2[1];
      local_398._16_8_ = *(double *)(lVar55 + 0x10 + uVar52 * 0x18);
      dVar7 = dVar8 * dVar8 + dVar7 * dVar7 + (double)local_398._16_8_ * (double)local_398._16_8_;
      sVar34 = _dclass(SUB84(dVar7,0));
      local_560[0] = sVar34 != 2;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_560);
      local_558[0] = ((uint)((ulonglong)dVar7 >> 0x34) & 0x7ff) != 0x7ff;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_558);
      FSmallListSet::BaseValueIterator::BaseValueIterator
                ((BaseValueIterator *)local_398,pFVar56,uVar10,false);
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_2b8,pFVar56,uVar10,true);
      iVar54 = local_2b8.cur_ptr;
      while (((uVar52 = local_378, (FSmallListSet *)local_398._0_8_ != local_2b8.ListSet ||
              (local_398._8_4_ != local_2b8.ListIndex)) ||
             ((local_380 != local_2b8.iCur || (local_37c != iVar54))))) {
        uVar37 = (uint)local_378;
        if ((((int)uVar37 < 0) ||
            ((int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar37)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                           Data + ((local_378 & 0xffffffff) >> 9) * 8) +
                                        (ulonglong)(uVar37 & 0x1ff) * 2) - 1U))) {
          local_550[0] = 0;
        }
        else {
          local_550[0] = 1;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_550);
        uVar52 = (uVar52 & 0xffffffff) >> 9;
        uVar42 = *(undefined8 *)
                  (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar52 * 8) +
                  (ulonglong)(uVar37 & 0x1ff) * 0x10);
        if (((uint)uVar42 == uVar10) || ((uint)((ulonglong)uVar42 >> 0x20) == uVar10)) {
          local_548[0] = 1;
        }
        else {
          local_548[0] = 0;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_548);
        uVar42 = *(undefined8 *)
                  (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar52 * 8) +
                  (ulonglong)(uVar37 & 0x1ff) * 0x10);
        uVar35 = (uint)((ulonglong)uVar42 >> 0x20);
        uVar36 = (uint)uVar42;
        uVar40 = uVar35;
        if ((uVar36 != uVar10) && (uVar40 = 0xffffffff, uVar35 == uVar10)) {
          uVar40 = uVar36;
        }
        if (uVar10 == uVar40) {
LAB_143481487:
          uVar36 = 0xffffffff;
        }
        else {
          uVar36 = uVar40;
          local_474 = uVar39;
          if ((int)uVar10 < (int)uVar40) {
            uVar36 = uVar10;
            local_474 = uVar40;
          }
          if ((((int)uVar36 < 0) ||
              ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar36)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this->VertexRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + (ulonglong)(uVar36 >> 9) * 8)
                                          + (ulonglong)(uVar36 & 0x1ff) * 2) - 1U)))
          goto LAB_143481487;
          local_370.vMax = (int *)&local_474;
          local_370.__this = this;
          uVar36 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdge_::__l13::<lambda_1>_>
                             (&this->VertexEdgeLists,uVar36,&local_370,-1);
        }
        local_540[0] = uVar36 != 0xffffffff;
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_540);
        local_538[0] = uVar36 == uVar37;
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_538);
        uVar40 = FindEdge(this,uVar40,uVar10);
        local_530[0] = uVar40 != 0xffffffff;
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_530);
        local_528[0] = uVar40 == uVar37;
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_528);
        FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_398);
      }
      local_2d8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_2d0 = CONCAT44(uStack_35c,uVar10);
      local_2e8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                  ::Call;
      local_3c8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                  ::Call;
      local_2c0 = (undefined ***)0x0;
      local_3b8.HeapAllocation = (longlong *)0x0;
      local_360 = uVar39;
      pFStack_358 = this;
      pFStack_2c8 = this;
      Core::Private::Function::
      TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
      CloneToEmptyStorage(&local_2d8,&local_3b8);
      auVar22 = auStack_18c;
      auVar20 = auStack_190;
      uVar19 = local_198._4_4_;
      uVar18 = (undefined4)local_198;
      uVar44 = uStack_1a0;
      plStack_180 = local_3b8.HeapAllocation;
      uVar14 = local_3b8.InlineAllocation._12_4_;
      uVar13 = local_3b8.InlineAllocation._8_4_;
      uVar12 = local_3b8.InlineAllocation._4_4_;
      uVar11 = local_3b8.InlineAllocation._0_4_;
      uStack_1a0 = uStack_3c0;
      local_1a8 = local_3c8;
      pFVar56 = &this->VertexEdgeLists;
      uVar28 = auStack_184[0];
      uVar29 = auStack_184[1];
      uVar30 = auStack_184[2];
      uVar31 = auStack_184[3];
      uVar42._4_1_ = auStack_184[0];
      uVar42._5_1_ = auStack_184[1];
      uVar42._6_1_ = auStack_184[2];
      uVar42._7_1_ = auStack_184[3];
      uVar24 = local_188[0];
      uVar25 = local_188[1];
      uVar26 = local_188[2];
      uVar27 = local_188[3];
      uVar42._0_1_ = local_188[0];
      uVar42._1_1_ = local_188[1];
      uVar42._2_1_ = local_188[2];
      uVar42._3_1_ = local_188[3];
      uVar15 = local_3b8.InlineAllocation._16_4_;
      uVar16 = local_3b8.InlineAllocation._20_4_;
      local_188[0] = local_3b8.InlineAllocation[0x10];
      local_188[1] = local_3b8.InlineAllocation[0x11];
      local_188[2] = local_3b8.InlineAllocation[0x12];
      local_188[3] = local_3b8.InlineAllocation[0x13];
      auStack_184[0] = local_3b8.InlineAllocation[0x14];
      auStack_184[1] = local_3b8.InlineAllocation[0x15];
      auStack_184[2] = local_3b8.InlineAllocation[0x16];
      auStack_184[3] = local_3b8.InlineAllocation[0x17];
      local_1b8 = pFVar56;
      local_1b0 = uVar10;
      local_198._0_1_ = local_3b8.InlineAllocation[0];
      local_198._1_1_ = local_3b8.InlineAllocation[1];
      local_198._2_1_ = local_3b8.InlineAllocation[2];
      local_198._3_1_ = local_3b8.InlineAllocation[3];
      local_198._4_1_ = local_3b8.InlineAllocation[4];
      local_198._5_1_ = local_3b8.InlineAllocation[5];
      local_198._6_1_ = local_3b8.InlineAllocation[6];
      local_198._7_1_ = local_3b8.InlineAllocation[7];
      auStack_190[0] = local_3b8.InlineAllocation[8];
      auStack_190[1] = local_3b8.InlineAllocation[9];
      auStack_190[2] = local_3b8.InlineAllocation[10];
      auStack_190[3] = local_3b8.InlineAllocation[0xb];
      auStack_18c[0] = local_3b8.InlineAllocation[0xc];
      auStack_18c[1] = local_3b8.InlineAllocation[0xd];
      auStack_18c[2] = local_3b8.InlineAllocation[0xe];
      auStack_18c[3] = local_3b8.InlineAllocation[0xf];
      local_3c8 = (code *)0x0;
      uStack_3c0 = uVar44;
      local_198._0_1_ = (uchar)uVar18;
      local_198._1_1_ = SUB41(uVar18,1);
      local_198._2_1_ = SUB41(uVar18,2);
      local_198._3_1_ = SUB41(uVar18,3);
      local_3b8.InlineAllocation[0] = (uchar)local_198;
      local_3b8.InlineAllocation[1] = local_198._1_1_;
      local_3b8.InlineAllocation[2] = local_198._2_1_;
      local_3b8.InlineAllocation[3] = local_198._3_1_;
      local_198._4_1_ = (uchar)uVar19;
      local_198._5_1_ = SUB41(uVar19,1);
      local_198._6_1_ = SUB41(uVar19,2);
      local_198._7_1_ = SUB41(uVar19,3);
      local_3b8.InlineAllocation[4] = local_198._4_1_;
      local_3b8.InlineAllocation[5] = local_198._5_1_;
      local_3b8.InlineAllocation[6] = local_198._6_1_;
      local_3b8.InlineAllocation[7] = local_198._7_1_;
      auStack_190[0] = auVar20[0];
      auStack_190[1] = auVar20[1];
      auStack_190[2] = auVar20[2];
      auStack_190[3] = auVar20[3];
      local_3b8.InlineAllocation[8] = auStack_190[0];
      local_3b8.InlineAllocation[9] = auStack_190[1];
      local_3b8.InlineAllocation[10] = auStack_190[2];
      local_3b8.InlineAllocation[0xb] = auStack_190[3];
      auStack_18c[0] = auVar22[0];
      auStack_18c[1] = auVar22[1];
      auStack_18c[2] = auVar22[2];
      auStack_18c[3] = auVar22[3];
      local_3b8.InlineAllocation[0xc] = auStack_18c[0];
      local_3b8.InlineAllocation[0xd] = auStack_18c[1];
      local_3b8.InlineAllocation[0xe] = auStack_18c[2];
      local_3b8.InlineAllocation[0xf] = auStack_18c[3];
      local_3b8.InlineAllocation[0x10] = uVar24;
      local_3b8.InlineAllocation[0x11] = uVar25;
      local_3b8.InlineAllocation[0x12] = uVar26;
      local_3b8.InlineAllocation[0x13] = uVar27;
      local_3b8.InlineAllocation[0x14] = uVar28;
      local_3b8.InlineAllocation[0x15] = uVar29;
      local_3b8.InlineAllocation[0x16] = uVar30;
      local_3b8.InlineAllocation[0x17] = uVar31;
      local_3b8.HeapAllocation = (void *)0x0;
      local_3b8.InlineAllocation[0x14] = (uchar)uVar16;
      local_3b8.InlineAllocation[0x15] = SUB41(uVar16,1);
      local_3b8.InlineAllocation[0x16] = SUB41(uVar16,2);
      local_3b8.InlineAllocation[0x17] = SUB41(uVar16,3);
      auStack_184[0] = local_3b8.InlineAllocation[0x14];
      auStack_184[1] = local_3b8.InlineAllocation[0x15];
      auStack_184[2] = local_3b8.InlineAllocation[0x16];
      auStack_184[3] = local_3b8.InlineAllocation[0x17];
      local_3b8.InlineAllocation[0x10] = (uchar)uVar15;
      local_3b8.InlineAllocation[0x11] = SUB41(uVar15,1);
      local_3b8.InlineAllocation[0x12] = SUB41(uVar15,2);
      local_3b8.InlineAllocation[0x13] = SUB41(uVar15,3);
      local_188[0] = local_3b8.InlineAllocation[0x10];
      local_188[1] = local_3b8.InlineAllocation[0x11];
      local_188[2] = local_3b8.InlineAllocation[0x12];
      local_188[3] = local_3b8.InlineAllocation[0x13];
      local_3b8.InlineAllocation[0xc] = (uchar)uVar14;
      local_3b8.InlineAllocation[0xd] = SUB41(uVar14,1);
      local_3b8.InlineAllocation[0xe] = SUB41(uVar14,2);
      local_3b8.InlineAllocation[0xf] = SUB41(uVar14,3);
      auStack_18c[0] = local_3b8.InlineAllocation[0xc];
      auStack_18c[1] = local_3b8.InlineAllocation[0xd];
      auStack_18c[2] = local_3b8.InlineAllocation[0xe];
      auStack_18c[3] = local_3b8.InlineAllocation[0xf];
      auVar23 = auStack_18c;
      local_3b8.InlineAllocation[8] = (uchar)uVar13;
      local_3b8.InlineAllocation[9] = SUB41(uVar13,1);
      local_3b8.InlineAllocation[10] = SUB41(uVar13,2);
      local_3b8.InlineAllocation[0xb] = SUB41(uVar13,3);
      auStack_190[0] = local_3b8.InlineAllocation[8];
      auStack_190[1] = local_3b8.InlineAllocation[9];
      auStack_190[2] = local_3b8.InlineAllocation[10];
      auStack_190[3] = local_3b8.InlineAllocation[0xb];
      auVar21 = auStack_190;
      local_3b8.InlineAllocation[4] = (uchar)uVar12;
      local_3b8.InlineAllocation[5] = SUB41(uVar12,1);
      local_3b8.InlineAllocation[6] = SUB41(uVar12,2);
      local_3b8.InlineAllocation[7] = SUB41(uVar12,3);
      local_198._4_1_ = local_3b8.InlineAllocation[4];
      local_198._5_1_ = local_3b8.InlineAllocation[5];
      local_198._6_1_ = local_3b8.InlineAllocation[6];
      local_198._7_1_ = local_3b8.InlineAllocation[7];
      uVar12 = local_198._4_4_;
      local_3b8.InlineAllocation[0] = (uchar)uVar11;
      local_3b8.InlineAllocation[1] = SUB41(uVar11,1);
      local_3b8.InlineAllocation[2] = SUB41(uVar11,2);
      local_3b8.InlineAllocation[3] = SUB41(uVar11,3);
      local_198._0_1_ = local_3b8.InlineAllocation[0];
      local_198._1_1_ = local_3b8.InlineAllocation[1];
      local_198._2_1_ = local_3b8.InlineAllocation[2];
      local_198._3_1_ = local_3b8.InlineAllocation[3];
      uVar11 = (undefined4)local_198;
      local_3b8.HeapAllocation = (void *)0x0;
      auStack_18c[0] = auVar22[0];
      auStack_18c[1] = auVar22[1];
      auStack_18c[2] = auVar22[2];
      auStack_18c[3] = auVar22[3];
      local_3b8.InlineAllocation[0xc] = auStack_18c[0];
      local_3b8.InlineAllocation[0xd] = auStack_18c[1];
      local_3b8.InlineAllocation[0xe] = auStack_18c[2];
      local_3b8.InlineAllocation[0xf] = auStack_18c[3];
      auStack_190[0] = auVar20[0];
      auStack_190[1] = auVar20[1];
      auStack_190[2] = auVar20[2];
      auStack_190[3] = auVar20[3];
      local_3b8.InlineAllocation[8] = auStack_190[0];
      local_3b8.InlineAllocation[9] = auStack_190[1];
      local_3b8.InlineAllocation[10] = auStack_190[2];
      local_3b8.InlineAllocation[0xb] = auStack_190[3];
      local_198._4_1_ = (uchar)uVar19;
      local_198._5_1_ = SUB41(uVar19,1);
      local_198._6_1_ = SUB41(uVar19,2);
      local_198._7_1_ = SUB41(uVar19,3);
      local_3b8.InlineAllocation[4] = local_198._4_1_;
      local_3b8.InlineAllocation[5] = local_198._5_1_;
      local_3b8.InlineAllocation[6] = local_198._6_1_;
      local_3b8.InlineAllocation[7] = local_198._7_1_;
      local_198._0_1_ = (uchar)uVar18;
      local_198._1_1_ = SUB41(uVar18,1);
      local_198._2_1_ = SUB41(uVar18,2);
      local_198._3_1_ = SUB41(uVar18,3);
      local_3b8.InlineAllocation[0] = (uchar)local_198;
      local_3b8.InlineAllocation[1] = local_198._1_1_;
      local_3b8.InlineAllocation[2] = local_198._2_1_;
      local_3b8.InlineAllocation[3] = local_198._3_1_;
      local_3c8 = (code *)0x0;
      local_3b8.InlineAllocation._16_8_ = uVar42;
      local_198._0_4_ = uVar11;
      local_198._4_4_ = uVar12;
      auStack_190 = auVar21;
      auStack_18c = auVar23;
      if (local_2e8 != (code *)0x0) {
        pppuVar46 = &local_2d8;
        if (local_2c0 != (undefined ***)0x0) {
          pppuVar46 = local_2c0;
        }
        (*(code *)(*pppuVar46)[2])();
      }
      uVar37 = local_1b0;
      pFVar17 = local_1b8;
      local_278[0] = local_1a8;
      local_250 = 0;
      if (local_1a8 != (code *)0x0) {
        plVar45 = &local_198;
        if (plStack_180 != (longlong *)0x0) {
          plVar45 = plStack_180;
        }
        (**(code **)*plVar45)(plVar45,local_278 + 2);
      }
      FSmallListSet::MappedValueIterator::MappedValueIterator
                ((MappedValueIterator *)local_118,pFVar17,uVar37,false,
                 (TFunction<int___cdecl(int)> *)local_278);
      uVar37 = local_1b0;
      pFVar17 = local_1b8;
      local_248[0] = local_1a8;
      local_220 = 0;
      if (local_1a8 != (code *)0x0) {
        plVar45 = &local_198;
        if (plStack_180 != (longlong *)0x0) {
          plVar45 = plStack_180;
        }
        (**(code **)*plVar45)(plVar45,local_248 + 2);
      }
      FSmallListSet::MappedValueIterator::MappedValueIterator
                ((MappedValueIterator *)local_b8,pFVar17,uVar37,true,
                 (TFunction<int___cdecl(int)> *)local_248);
      while (((local_118._0_8_ != local_b8._0_8_ || (local_118._8_4_ != local_b8._8_4_)) ||
             ((local_118._24_4_ != local_b8._24_4_ || (local_118._28_4_ != local_b8._28_4_))))) {
        local_458[0] = local_118._32_4_;
        Core::Private::Function::CheckCallable((void *)local_118._48_8_);
        uVar42 = local_118._48_8_;
        plVar45 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar45 = local_c0;
        }
        uVar44 = (**(code **)(*plVar45 + 8))();
        uVar37 = (*(code *)uVar42)(uVar44,local_458);
        if ((((int)uVar37 < 0) ||
            ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar37)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar37 >> 9) * 8) +
                                        (ulonglong)(uVar37 & 0x1ff) * 2) - 1U))) {
          local_520[0] = 0;
        }
        else {
          local_520[0] = 1;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_520);
        if (uVar10 == uVar37) {
LAB_143481977:
          local_518[0] = 0;
        }
        else {
          uVar40 = uVar37;
          local_478 = uVar39;
          if ((int)uVar10 < (int)uVar37) {
            uVar40 = uVar10;
            local_478 = uVar37;
          }
          if ((((int)uVar40 < 0) ||
              ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar40)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this->VertexRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + (ulonglong)(uVar40 >> 9) * 8)
                                          + (ulonglong)(uVar40 & 0x1ff) * 2) - 1U)))
          goto LAB_143481977;
          local_350.vMax = (int *)&local_478;
          local_350.__this = this;
          uVar37 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdge_::__l13::<lambda_1>_>
                             (pFVar56,uVar40,&local_350,-1);
          if ((((int)uVar37 < 0) ||
              ((int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                    (this->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar37)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this->EdgeRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + (ulonglong)(uVar37 >> 9) * 8)
                                          + (ulonglong)(uVar37 & 0x1ff) * 2) - 1U)))
          goto LAB_143481977;
          local_518[0] = 1;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_518);
        FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_118);
      }
      if (local_b8._48_8_ != 0) {
        plVar45 = (longlong *)(local_b8 + 0x40);
        if ((longlong *)local_b8._88_8_ != (longlong *)0x0) {
          plVar45 = (longlong *)local_b8._88_8_;
        }
        (**(code **)(*plVar45 + 0x10))();
      }
      if ((code *)local_118._48_8_ != (code *)0x0) {
        plVar45 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar45 = local_c0;
        }
        (**(code **)(*plVar45 + 0x10))();
      }
      if (local_1a8 != (code *)0x0) {
        plVar45 = &local_198;
        if (plStack_180 != (longlong *)0x0) {
          plVar45 = plStack_180;
        }
        (**(code **)(*plVar45 + 0x10))();
      }
      local_1e8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_1e8.ArrayNum = 0;
      local_1e8.ArrayMax = 8;
      GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                (this,uVar10,&local_1e8);
      uVar39 = (uint)local_610;
      if (param_1.bAllowNonManifoldVertices == false) {
        if ((((int)uVar10 < 0) ||
            ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar10)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data +
                                          (ulonglong)((uint)uVar10 >> 9) * 8) +
                                        (ulonglong)(uVar39 & 0x1ff) * 2) - 1U))) {
          uVar37 = 0xffffffff;
        }
        else {
          uVar37 = *(uint *)(*(longlong *)
                              ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)uVar10 >> 9) * 8) + (ulonglong)(uVar39 & 0x1ff) * 4)
          ;
          if (uVar37 == 0xffffffff) {
            uVar37 = 0;
          }
          else {
            uVar37 = *(uint *)(*(longlong *)
                                ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar37 >> 9) * 8) + (ulonglong)(uVar37 & 0x1ff) * 4);
          }
        }
        if (local_1e8.ArrayNum == uVar37) {
LAB_143481c75:
          local_508[0] = 1;
        }
        else {
          if ((((int)uVar10 < 0) ||
              ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar10)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this->VertexRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data +
                                            (ulonglong)((uint)uVar10 >> 9) * 8) +
                                          (ulonglong)(uVar39 & 0x1ff) * 2) - 1U))) {
            iVar54 = -1;
          }
          else {
            uVar37 = *(uint *)(*(longlong *)
                                ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                                (ulonglong)((uint)uVar10 >> 9) * 8) +
                              (ulonglong)(uVar39 & 0x1ff) * 4);
            if (uVar37 == 0xffffffff) {
              iVar54 = 0;
            }
            else {
              iVar54 = *(int *)(*(longlong *)
                                 ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar37 >> 9) * 8) + (ulonglong)(uVar37 & 0x1ff) * 4);
            }
          }
          if (local_1e8.ArrayNum == iVar54 - 1U) goto LAB_143481c75;
          local_508[0] = 0;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        puVar48 = local_508;
      }
      else {
        if ((((int)uVar10 < 0) ||
            ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar10)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data +
                                          (ulonglong)((uint)uVar10 >> 9) * 8) +
                                        (ulonglong)(uVar39 & 0x1ff) * 2) - 1U))) {
          iVar54 = -1;
        }
        else {
          uVar37 = *(uint *)(*(longlong *)
                              ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)uVar10 >> 9) * 8) + (ulonglong)(uVar39 & 0x1ff) * 4)
          ;
          if (uVar37 == 0xffffffff) {
            iVar54 = 0;
          }
          else {
            iVar54 = *(int *)(*(longlong *)
                               ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar37 >> 9) * 8) + (ulonglong)(uVar37 & 0x1ff) * 4);
          }
        }
        local_510[0] = local_1e8.ArrayNum <= iVar54;
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        puVar48 = local_510;
      }
      (*pcVar50)(uVar42,puVar48);
      uVar39 = (uint)*(ushort *)
                      (*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)uVar10 >> 9) * 8) + (ulonglong)(uVar39 & 0x1ff) * 2);
      if (uVar39 == 0xffff) {
        uVar39 = 0;
      }
      local_500[0] = uVar39 == local_1e8.ArrayNum + 1U;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_500);
      iVar54 = local_1e8.ArrayNum;
      uVar39 = 0;
      if ((int)uVar10 < local_488.ArrayNum) {
        uVar39 = (uint)~uVar10 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar50 = (code *)swi(3);
        uVar33 = (*pcVar50)();
        return (bool)uVar33;
      }
      local_4f8[0] = *(uint *)(local_488.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) ==
                     iVar54;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_4f8);
      iVar54 = local_1e8.ArrayNum;
      uVar52 = (ulonglong)local_1e8.ArrayNum;
      FVar53 = (ForElementType<int>)&local_1e8;
      if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar53 = local_1e8.AllocatorInstance.SecondaryData;
      }
      FVar3 = (ForElementType<int>)((longlong)FVar53 + uVar52 * 4);
      while( true ) {
        uVar39 = (uint)uVar52;
        if ((uint)uVar52 != iVar54) {
          local_4f0[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4f0);
          uVar39 = local_1e8.ArrayNum;
        }
        if (FVar53 == FVar3) break;
        uVar52 = (ulonglong)(*(uint *)FVar53 & 0x1ff);
        lVar55 = *(longlong *)
                  ((this->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)FVar53 >> 9) * 8);
        if (((*(uint *)(lVar55 + uVar52 * 0xc) == uVar10) ||
            (*(uint *)(lVar55 + 4 + uVar52 * 0xc) == uVar10)) ||
           (*(uint *)(lVar55 + 8 + uVar52 * 0xc) == uVar10)) {
          local_4e8[0] = 1;
        }
        else {
          local_4e8[0] = 0;
        }
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_4e8);
        uVar52 = (ulonglong)(uint)local_1e8.ArrayNum;
        FVar53 = (ForElementType<int>)((longlong)FVar53 + 4);
      }
      local_4b0.Data = (FScriptContainerElement *)0x0;
      FVar53 = (ForElementType<int>)&local_1e8;
      if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar53 = local_1e8.AllocatorInstance.SecondaryData;
      }
      local_4a8 = uVar39;
      if (uVar39 == 0) {
        local_4a4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar39,0,&local_4b0,uVar39,&local_4a4);
        memcpy(local_4b0.Data,(void *)FVar53,(longlong)(int)uVar39 << 2);
      }
      uVar52 = local_470;
      pFVar56 = &this->VertexEdgeLists;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_310,pFVar56,(int)local_470,false);
      uVar39 = local_4a8;
      while ((((local_310.ListSet != pFVar56 || (local_310.ListIndex != (int)uVar52)) ||
              (local_310.iCur != -1)) || (local_310.cur_ptr != -1))) {
        local_608 = *(undefined8 *)
                     (*(longlong *)
                       ((this->Edges).Blocks.AllocatorInstance.Data +
                       ((local_310._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                     (ulonglong)(local_310.cur_value & 0x1ff) * 0x10);
        FVar53 = (ForElementType<int>)&local_1e8;
        if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar53 = local_1e8.AllocatorInstance.SecondaryData;
        }
        FVar3 = (ForElementType<int>)((longlong)FVar53 + (longlong)local_1e8.ArrayNum * 4);
        for (; FVar53 != FVar3; FVar53 = (ForElementType<int>)((longlong)FVar53 + 4)) {
          if (*(uint *)FVar53 == (uint)local_608) {
            local_4e0[0] = 1;
            goto LAB_143481fda;
          }
        }
        local_4e0[0] = 0;
LAB_143481fda:
        Core::Private::Function::CheckCallable(local_218);
        pcVar50 = local_218;
        pppuVar46 = &local_208;
        if (pppuStack_1f0 != (undefined ***)0x0) {
          pppuVar46 = pppuStack_1f0;
        }
        uVar42 = (*(code *)(*pppuVar46)[1])();
        (*pcVar50)(uVar42,local_4e0);
        if (local_608._4_4_ != 0xffffffff) {
          FVar53 = (ForElementType<int>)&local_1e8;
          if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar53 = local_1e8.AllocatorInstance.SecondaryData;
          }
          FVar3 = (ForElementType<int>)((longlong)FVar53 + (longlong)local_1e8.ArrayNum * 4);
          for (; FVar53 != FVar3; FVar53 = (ForElementType<int>)((longlong)FVar53 + 4)) {
            if (*(uint *)FVar53 == local_608._4_4_) {
              local_4d8[0] = 1;
              goto LAB_14348205a;
            }
          }
          local_4d8[0] = 0;
LAB_14348205a:
          Core::Private::Function::CheckCallable(local_218);
          pcVar50 = local_218;
          pppuVar46 = &local_208;
          if (pppuStack_1f0 != (undefined ***)0x0) {
            pppuVar46 = pppuStack_1f0;
          }
          uVar42 = (*(code *)(*pppuVar46)[1])();
          (*pcVar50)(uVar42,local_4d8);
        }
        uVar39 = local_608._4_4_;
        if ((local_4b0.Data <= (FScriptContainerElement *)&local_608) &&
           ((FScriptContainerElement *)&local_608 < local_4b0.Data + (longlong)local_4a4 * 4)) {
          bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar32) {
            pcVar50 = (code *)swi(3);
            uVar33 = (*pcVar50)();
            return (bool)uVar33;
          }
          uVar39 = local_608._4_4_;
        }
        FVar9.Data = local_4b0.Data;
        local_610 = CONCAT44(local_610._4_4_,local_4a8);
        if (local_4a8 != 0) {
          bVar32 = *(uint *)local_4b0.Data != (uint)local_608;
          uVar40 = 0;
          lVar55 = 0;
          uVar42 = local_608;
          uVar39 = local_4a8;
          uVar37 = 0;
          do {
            lVar55 = lVar55 + 1;
            uVar36 = uVar37 + 1;
            if ((int)uVar36 < (int)uVar39) {
              do {
                if (bVar32 != (*(int *)(FVar9.Data + lVar55 * 4) != (int)uVar42)) break;
                uVar36 = uVar36 + 1;
                lVar55 = lVar55 + 1;
              } while (lVar55 < (int)uVar39);
            }
            if (bVar32 != false) {
              if (uVar40 != uVar37) {
                memmove(FVar9.Data + (longlong)(int)uVar40 * 4,
                        FVar9.Data + (longlong)(int)uVar37 * 4,(longlong)(int)(uVar36 - uVar37) << 2
                       );
                uVar42 = local_608;
                uVar39 = (uint)local_610;
              }
              uVar40 = uVar40 + (uVar36 - uVar37);
            }
            bVar32 = (bool)(bVar32 ^ 1);
            uVar37 = uVar36;
          } while ((int)uVar36 < (int)uVar39);
          this = local_428;
          uVar39 = local_608._4_4_;
          local_4a8 = uVar40;
        }
        uVar40 = 0;
        uVar37 = local_4a8;
        if (uVar39 != 0xffffffff) {
          if ((local_4b0.Data <= (FScriptContainerElement *)((longlong)&local_608 + 4U)) &&
             ((FScriptContainerElement *)((longlong)&local_608 + 4U) <
              local_4b0.Data + (longlong)local_4a4 * 4)) {
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar32) {
              pcVar50 = (code *)swi(3);
              uVar33 = (*pcVar50)();
              return (bool)uVar33;
            }
            uVar39 = local_608._4_4_;
          }
          FVar9.Data = local_4b0.Data;
          uVar37 = local_4a8;
          if (local_4a8 != 0) {
            lVar58 = (longlong)(int)local_4a8;
            local_627 = *(uint *)local_4b0.Data != uVar39;
            lVar55 = 0;
            uVar36 = uVar40;
            do {
              uVar37 = uVar36;
              do {
                lVar55 = lVar55 + 1;
                uVar37 = uVar37 + 1;
                if (lVar58 <= lVar55) break;
              } while ((bool)local_627 == (*(uint *)(FVar9.Data + lVar55 * 4) != uVar39));
              if (local_627 != 0) {
                if (uVar40 != uVar36) {
                  memmove(FVar9.Data + (longlong)(int)uVar40 * 4,
                          FVar9.Data + (longlong)(int)uVar36 * 4,
                          (longlong)(int)(uVar37 - uVar36) << 2);
                  uVar39 = local_608._4_4_;
                }
                uVar40 = uVar40 + (uVar37 - uVar36);
              }
              local_627 = local_627 ^ 1;
              uVar36 = uVar37;
              uVar37 = uVar40;
            } while (lVar55 < lVar58);
          }
        }
        local_4a8 = uVar37;
        uVar39 = local_4a8;
        FSmallListSet::BaseValueIterator::GotoNext(&local_310);
        pFVar56 = &this->VertexEdgeLists;
        uVar52 = local_470;
      }
      local_4d0[0] = uVar39 == 0;
      Core::Private::Function::CheckCallable(local_218);
      pcVar50 = local_218;
      pppuVar46 = &local_208;
      if (pppuStack_1f0 != (undefined ***)0x0) {
        pppuVar46 = pppuStack_1f0;
      }
      uVar42 = (*(code *)(*pppuVar46)[1])();
      (*pcVar50)(uVar42,local_4d0);
      if (local_4b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data);
      }
      if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_1e8.AllocatorInstance.SecondaryData);
      }
      local_468._8_4_ = local_468._8_4_ + 1;
      if ((int)local_468._8_4_ < (int)local_468._12_4_) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_468._0_8_ + 8) +
                           (ulonglong)((uint)local_468._8_4_ >> 9) * 8) +
                         (ulonglong)(local_468._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_468._0_8_ + 8) +
                          (ulonglong)((uint)local_468._8_4_ >> 9) * 8) +
                        (ulonglong)(local_468._8_4_ & 0x1ff) * 2) != -1)) break;
          local_468._8_4_ = local_468._8_4_ + 1;
        } while ((int)local_468._8_4_ < (int)local_468._12_4_);
      }
      local_610 = CONCAT44(local_468._12_4_,local_468._8_4_);
    } while (local_468._8_4_ != local_340._8_4_);
  }
  pFVar6 = (this->AttributeSet).Ptr;
  if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
    local_4c8[0] = (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,1,local_450);
    Core::Private::Function::CheckCallable(local_218);
    pcVar50 = local_218;
    pppuVar46 = &local_208;
    if (pppuStack_1f0 != (undefined ***)0x0) {
      pppuVar46 = pppuStack_1f0;
    }
    uVar42 = (*(code *)(*pppuVar46)[1])();
    (*pcVar50)(uVar42,local_4c8);
  }
  uVar33 = local_628;
  if (local_218 != (code *)0x0) {
    pppuVar46 = &local_208;
    if (pppuStack_1f0 != (undefined ***)0x0) {
      pppuVar46 = pppuStack_1f0;
    }
    (*(code *)(*pppuVar46)[2])();
  }
  if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.AllocatorInstance.Data);
  }
  return (bool)uVar33;
}

// Clear @ 143483750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FDynamicMesh3::Clear(FDynamicMesh3 *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  bool bVar5;
  
  TDynamicVector<UE::Math::TVector<double>,512>::TruncateBlocks(&this->Vertices,1,No);
  (this->Vertices).CurBlock = 0;
  (this->Vertices).CurBlockUsed = 0;
  if ((this->Vertices).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->Vertices);
  }
  FRefCountVector::Clear(&this->VertexRefCounts);
  if ((this->VertexNormals).bIsSet != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexNormals).TypedValue,0);
    pFVar3 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->VertexNormals).bIsSet = false;
  }
  if ((this->VertexColors).bIsSet != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexColors).TypedValue,0);
    pFVar3 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->VertexColors).bIsSet = false;
  }
  if ((this->VertexUVs).bIsSet != false) {
    TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&(this->VertexUVs).TypedValue,0);
    pFVar3 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->VertexUVs).bIsSet = false;
  }
  FSmallListSet::Reset(&this->VertexEdgeLists);
  TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks(&this->Triangles,1,No);
  (this->Triangles).CurBlock = 0;
  (this->Triangles).CurBlockUsed = 0;
  if ((this->Triangles).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(&this->Triangles);
  }
  FRefCountVector::Clear(&this->TriangleRefCounts);
  TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks(&this->TriangleEdges,1,No);
  (this->TriangleEdges).CurBlock = 0;
  (this->TriangleEdges).CurBlockUsed = 0;
  if ((this->TriangleEdges).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(&this->TriangleEdges);
  }
  if ((this->TriangleGroups).bIsSet != false) {
    TDynamicVector<int,512>::Empty(&(this->TriangleGroups).TypedValue,0);
    pFVar3 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->TriangleGroups).bIsSet = false;
  }
  this->GroupIDCounter = 0;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TruncateBlocks(&this->Edges,1,No);
  (this->Edges).CurBlock = 0;
  (this->Edges).CurBlockUsed = 0;
  if ((this->Edges).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(&this->Edges);
  }
  FRefCountVector::Clear(&this->EdgeRefCounts);
  pFVar4 = (this->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar5 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(pFVar1);
    }
    (this->ChangeStampShape).Value = 1;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar5 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      FMutex::LockSlow(pFVar1);
    }
    (this->ChangeStampTopology).Value = 1;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return;
}

// CollapseEdge @ 143485190

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CollapseEdge
          (FDynamicMesh3 *this,int param_1,int param_2,FEdgeCollapseInfo *param_3)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0x70))();
  return EVar1;
}

// CollapseEdge @ 1434851b0

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CollapseEdge
          (FDynamicMesh3 *this,int param_1,int param_2,FCollapseEdgeOptions *param_3,
          FEdgeCollapseInfo *param_4)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0x80))();
  return EVar1;
}

// CollapseEdge @ 1434851e0

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CollapseEdge
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FEdgeCollapseInfo *param_4)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0x80))();
  return EVar1;
}

// CollapseEdge @ 143485220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::CollapseEdge
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FCollapseEdgeOptions *param_4,
          FEdgeCollapseInfo *param_5)

{
  FRefCountVector *this_00;
  FMutex *pFVar1;
  uint *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  short *psVar5;
  atomic<unsigned_char> aVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FDynamicMeshAttributeSet *pFVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FIndex2i_u_0 FVar20;
  FIndex2i_u_0 FVar21;
  bool bVar22;
  EMeshResult EVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  char cVar32;
  longlong lVar33;
  FSmallListSet *pFVar34;
  short sVar35;
  undefined4 in_register_00000084;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  uint local_204;
  ulonglong local_1e8;
  float local_1d8;
  float fStack_1d4;
  ulonglong local_1d0;
  float fStack_1c4;
  undefined8 local_1b8;
  BaseValueIterator local_150;
  TVector<double>_u_0 local_128;
  undefined8 local_110;
  undefined8 auStack_108 [3];
  double local_f0;
  double local_d8;
  
  FVar21 = _UNK_15060db28;
  FVar20 = ___xmm_ffffffffffffffffffffffffffffffff;
  param_5->KeptVertex = 0;
  param_5->RemovedVertex = 0;
  (param_5->OpposingVerts).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
  param_5->bIsBoundary = false;
  *(undefined3 *)&param_5->field_0x11 = 0;
  param_5->CollapsedEdge = 0;
  (param_5->RemovedTris).field0_0x0 = FVar20;
  (param_5->RemovedEdges).field0_0x0 = FVar21;
  (param_5->KeptEdges).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
  param_5->CollapseT = 0.0;
  EVar23 = (**(code **)(this->_padding_ + 0xe0))
                     (this,param_1,CONCAT44(in_register_00000084,param_2),SUB84(param_3,0),param_4,
                      param_5);
  if (EVar23 != Ok) {
    return EVar23;
  }
  uVar8 = (param_5->OpposingVerts).field0_0x0._s_0.B;
  pFVar14 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar9 = (param_5->RemovedTris).field0_0x0._s_0.B;
  iVar31 = param_5->CollapsedEdge;
  bVar39 = param_5->bIsBoundary;
  iVar10 = (param_5->RemovedEdges).field0_0x0._s_0.A;
  iVar11 = (param_5->RemovedEdges).field0_0x0._s_0.B;
  local_204 = (param_5->KeptEdges).field0_0x0._s_0.A;
  uVar12 = (param_5->RemovedTris).field0_0x0._s_0.A;
  uVar13 = (param_5->OpposingVerts).field0_0x0._s_0.A;
  uVar36 = (ulonglong)((uint)param_2 >> 9);
  lVar33 = *(longlong *)(pFVar14 + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar30 = (ulonglong)(param_2 & 0x1ff);
  local_d8 = *(double *)(lVar33 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  pdVar3 = (double *)(lVar33 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar16 = *pdVar3;
  dVar17 = pdVar3[1];
  lVar33 = *(longlong *)(pFVar14 + uVar36 * 8);
  local_f0 = *(double *)(lVar33 + 0x10 + uVar30 * 0x18);
  pdVar3 = (double *)(lVar33 + uVar30 * 0x18);
  dVar18 = *pdVar3;
  dVar19 = pdVar3[1];
  if ((this->VertexUVs).bIsSet != false) {
    local_1b8 = *(undefined8 *)
                 (*(longlong *)
                   ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + uVar36 * 8) +
                 uVar30 * 8);
  }
  fVar42 = param_5._0_4_;
  fVar45 = param_5._0_4_;
  fVar47 = param_5._0_4_;
  if ((this->VertexNormals).bIsSet != false) {
    lVar33 = *(longlong *)
              ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data + uVar36 * 8);
    uVar7 = *(undefined8 *)(lVar33 + uVar30 * 0xc);
    fVar42 = (float)((ulonglong)uVar7 >> 0x20);
    fVar45 = (float)uVar7;
    fVar47 = *(float *)(lVar33 + 8 + uVar30 * 0xc);
  }
  fVar48 = param_5._0_4_;
  fVar49 = param_5._0_4_;
  fVar50 = param_5._0_4_;
  if ((this->VertexColors).bIsSet != false) {
    lVar33 = *(longlong *)
              ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data + uVar36 * 8);
    uVar7 = *(undefined8 *)(lVar33 + uVar30 * 0xc);
    fVar48 = (float)((ulonglong)uVar7 >> 0x20);
    fVar49 = (float)uVar7;
    fVar50 = *(float *)(lVar33 + 8 + uVar30 * 0xc);
  }
  local_1d0 = 0xffffffff;
  local_1e8 = 0xffffffff;
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_150,&this->VertexEdgeLists,param_2,false);
  while ((((uVar30 = local_150._32_8_, pFVar34 = &this->VertexEdgeLists,
           local_150.ListSet != pFVar34 || (local_150.ListIndex != param_2)) ||
          (local_150.iCur != -1)) || (local_150.cur_ptr != -1))) {
    uVar38 = local_150.cur_value;
    uVar28 = (ulonglong)(uVar38 & 0x1ff);
    uVar36 = (local_150._32_8_ & 0xffffffff) >> 9;
    lVar33 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar36 * 8);
    uVar7 = *(undefined8 *)(lVar33 + uVar28 * 0x10);
    uVar27 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar37 = (uint)uVar7;
    uVar24 = uVar27;
    if ((uVar37 != param_2) && (uVar24 = 0xffffffff, uVar27 == param_2)) {
      uVar24 = uVar37;
    }
    if (uVar24 == param_1) {
      bVar22 = FSmallListSet::Remove(pFVar34,param_1,uVar38);
      if (!bVar22) {
        return Failed_UnrecoverableError;
      }
    }
    else if (uVar24 == uVar13) {
      bVar22 = FSmallListSet::Remove(pFVar34,uVar13,uVar38);
      if (!bVar22) {
        return Failed_UnrecoverableError;
      }
      uVar36 = *(ulonglong *)
                (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar36 * 8) + 8 +
                uVar28 * 0x10);
      local_1e8 = uVar36 >> 0x20;
      if (((uint)uVar36 != uVar12) && (local_1e8 = 0xffffffff, (uint)(uVar36 >> 0x20) == uVar12)) {
        local_1e8 = uVar36 & 0xffffffff;
      }
    }
    else if (uVar24 == uVar8) {
      bVar22 = FSmallListSet::Remove(pFVar34,uVar8,uVar38);
      if (!bVar22) {
        return Failed_UnrecoverableError;
      }
      uVar36 = *(ulonglong *)
                (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar36 * 8) + 8 +
                uVar28 * 0x10);
      local_1d0 = uVar36 >> 0x20;
      if ((uint)uVar36 != uVar9) {
        uVar24 = 0xffffffff;
        if ((uint)(uVar36 >> 0x20) == uVar9) {
          uVar24 = (uint)uVar36;
        }
        local_1d0 = (ulonglong)uVar24;
      }
    }
    else if (((param_4->bAllowHoleCollapse == false) ||
             (*(int *)(lVar33 + 0xc + uVar28 * 0x10) != -1)) ||
            (uVar25 = FindEdge(this,uVar24,param_1), uVar25 == 0xffffffff)) {
      uVar30 = local_150._32_8_;
      uVar24 = param_1;
      uVar25 = param_1;
      if (uVar37 == param_2) {
        if (param_1 < (int)uVar27) {
          uVar25 = uVar27;
        }
        if ((int)uVar27 < param_1) {
          uVar24 = uVar27;
        }
      }
      else {
        if (uVar27 != param_2) {
          return Failed_UnrecoverableError;
        }
        if (param_1 < (int)uVar37) {
          uVar25 = uVar37;
        }
        if ((int)uVar37 < param_1) {
          uVar24 = uVar37;
        }
      }
      *(uint *)(lVar33 + (ulonglong)(uVar38 & 0x1ff) * 0x10) = uVar24;
      *(uint *)(lVar33 + (ulonglong)(uVar38 & 0x1ff) * 0x10 + 4) = uVar25;
      FSmallListSet::Insert(&this->VertexEdgeLists,param_1,local_150.cur_value);
    }
    else {
      uVar27 = *(uint *)(lVar33 + 8 + (ulonglong)(uVar38 & 0x1ff) * 0x10);
      lVar33 = *(longlong *)
                ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8)
               + (ulonglong)(uVar27 & 0x1ff) * 0xc;
      uVar28 = 0;
      uVar36 = uVar28;
      while (*(uint *)(lVar33 + uVar28 * 4) != uVar38) {
        uVar36 = (ulonglong)((int)uVar36 + 1);
        uVar28 = uVar28 + 1;
        if (2 < (longlong)uVar28) {
          return Failed_UnrecoverableError;
        }
      }
      *(uint *)(lVar33 + uVar28 * 4) = uVar25;
      if ((int)uVar36 == -1) {
        return Failed_UnrecoverableError;
      }
      uVar36 = (ulonglong)(uVar25 & 0x1ff);
      lVar33 = *(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8);
      iVar26 = *(int *)(lVar33 + 0xc + uVar36 * 0x10);
      if (*(int *)(lVar33 + 8 + uVar36 * 0x10) == -1) {
        if (uVar27 == 0xffffffff) {
          *(int *)(lVar33 + 8 + uVar36 * 0x10) = iVar26;
          *(undefined4 *)(lVar33 + 0xc + uVar36 * 0x10) = 0xffffffff;
        }
        else {
          *(uint *)(lVar33 + 8 + uVar36 * 0x10) = uVar27;
        }
      }
      else {
        if (iVar26 != -1) {
          return Failed_UnrecoverableError;
        }
        *(uint *)(lVar33 + 0xc + uVar36 * 0x10) = uVar27;
      }
      FSmallListSet::Remove(&this->VertexEdgeLists,uVar24,uVar38);
      FRefCountVector::Decrement(&this->EdgeRefCounts,uVar38,1);
    }
    puVar4 = (undefined8 *)
             (*(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + ((uVar30 & 0xffffffff) >> 9) * 8) +
             (ulonglong)((uint)uVar30 & 0x1ff) * 0x10);
    local_110 = *puVar4;
    lVar33 = 0;
    auStack_108[0] = puVar4[1];
    do {
      uVar24 = *(uint *)((longlong)auStack_108 + lVar33 * 4);
      if (((uVar24 != 0xffffffff) && (uVar24 != uVar12)) && (uVar24 != uVar9)) {
        uVar30 = (ulonglong)(uVar24 & 0x1ff);
        lVar29 = *(longlong *)
                  ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8);
        if (((*(int *)(lVar29 + uVar30 * 0xc) == param_2) ||
            (*(int *)(lVar29 + 4 + uVar30 * 0xc) == param_2)) ||
           (*(int *)(lVar29 + 8 + uVar30 * 0xc) == param_2)) {
          iVar26 = ReplaceTriangleVertex(this,uVar24,param_2,param_1);
          if (iVar26 == -1) {
            return Failed_UnrecoverableError;
          }
          psVar5 = (short *)(*(longlong *)
                              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2);
          *psVar5 = *psVar5 + 1;
          FRefCountVector::Decrement(&this->VertexRefCounts,param_2,1);
        }
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < 2);
    FSmallListSet::BaseValueIterator::GotoNext(&local_150);
  }
  this_00 = &this->EdgeRefCounts;
  FSmallListSet::Clear(pFVar34,param_2);
  uVar24 = (uint)local_1e8;
  if (bVar39 == false) {
    FRefCountVector::Decrement(&this->VertexRefCounts,param_2,3);
    FRefCountVector::Decrement(&this->TriangleRefCounts,uVar12,1);
    FRefCountVector::Decrement(&this->TriangleRefCounts,uVar9,1);
    FRefCountVector::Decrement(&this->VertexRefCounts,uVar13,1);
    FRefCountVector::Decrement(&this->VertexRefCounts,uVar8,1);
    FRefCountVector::Decrement(&this->VertexRefCounts,param_1,2);
    FRefCountVector::Decrement(this_00,iVar11,1);
    FRefCountVector::Decrement(this_00,iVar31,1);
    FRefCountVector::Decrement(this_00,iVar10,1);
    uVar27 = FindEdgeFromTri(this,param_1,uVar8,uVar9);
    if (local_204 == 0xffffffff) {
      local_204 = FindEdgeFromTri(this,param_1,uVar13,uVar12);
    }
    uVar30 = (ulonglong)(uVar27 & 0x1ff);
    lVar33 = *(longlong *)
              ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8);
    uVar37 = *(uint *)(lVar33 + 0xc + uVar30 * 0x10);
    uVar38 = (uint)local_1d0;
    if (*(uint *)(lVar33 + 8 + uVar30 * 0x10) == uVar9) {
      if (uVar38 == 0xffffffff) {
        *(uint *)(lVar33 + 8 + uVar30 * 0x10) = uVar37;
        *(undefined4 *)(lVar33 + 0xc + uVar30 * 0x10) = 0xffffffff;
      }
      else {
        *(uint *)(lVar33 + 8 + uVar30 * 0x10) = uVar38;
      }
    }
    else {
      if (uVar37 != uVar9) {
        return Failed_UnrecoverableError;
      }
      *(uint *)(lVar33 + 0xc + uVar30 * 0x10) = uVar38;
    }
    uVar30 = (ulonglong)(local_204 & 0x1ff);
    lVar33 = *(longlong *)
              ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_204 >> 9) * 8);
    uVar9 = *(uint *)(lVar33 + 0xc + uVar30 * 0x10);
    if (*(uint *)(lVar33 + 8 + uVar30 * 0x10) == uVar12) {
      if (uVar24 == 0xffffffff) {
        *(uint *)(lVar33 + 8 + uVar30 * 0x10) = uVar9;
        *(undefined4 *)(lVar33 + 0xc + uVar30 * 0x10) = 0xffffffff;
      }
      else {
        *(uint *)(lVar33 + 8 + uVar30 * 0x10) = uVar24;
      }
    }
    else {
      if (uVar9 != uVar12) {
        return Failed_UnrecoverableError;
      }
      *(uint *)(lVar33 + 0xc + uVar30 * 0x10) = uVar24;
    }
    if (uVar38 != 0xffffffff) {
      iVar31 = 0;
      lVar33 = *(longlong *)
                ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar38 >> 9) * 8)
               + (ulonglong)(uVar38 & 0x1ff) * 0xc;
      lVar29 = 0;
      while (*(int *)(lVar33 + lVar29 * 4) != iVar11) {
        iVar31 = iVar31 + 1;
        lVar29 = lVar29 + 1;
        if (2 < lVar29) {
          return Failed_UnrecoverableError;
        }
      }
      *(uint *)(lVar33 + (longlong)iVar31 * 4) = uVar27;
      if (iVar31 == -1) {
        return Failed_UnrecoverableError;
      }
    }
    uVar30 = 0;
    if (uVar24 != 0xffffffff) {
      lVar33 = *(longlong *)
                ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
               + (ulonglong)(uVar24 & 0x1ff) * 0xc;
      uVar36 = uVar30;
      while (iVar31 = (int)uVar36, *(int *)(lVar33 + uVar30 * 4) != iVar10) {
        uVar36 = (ulonglong)(iVar31 + 1);
        uVar30 = uVar30 + 1;
        if (2 < (longlong)uVar30) {
          return Failed_UnrecoverableError;
        }
      }
      *(uint *)(lVar33 + (longlong)iVar31 * 4) = local_204;
      if (iVar31 == -1) {
        return Failed_UnrecoverableError;
      }
    }
    if (param_4->bAllowCollapsingInternalEdgeWithBoundaryVertices == false) {
      local_1e8 = 0xffffffff;
    }
    else {
      if (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_204 >> 9) * 8)
                   + 8 + (ulonglong)(local_204 & 0x1ff) * 0x10) == -1) {
        pFVar34 = &this->VertexEdgeLists;
        FSmallListSet::Remove(pFVar34,param_1,local_204);
        FRefCountVector::Decrement(this_00,local_204,1);
        sVar35 = *(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2);
        if (sVar35 == -1) {
          sVar35 = 0;
        }
        if (sVar35 == 1) {
          FSmallListSet::Clear(pFVar34,uVar13);
          FRefCountVector::Decrement(&this->VertexRefCounts,uVar13,1);
        }
        else {
          FSmallListSet::Remove(pFVar34,uVar13,local_204);
        }
      }
      pFVar34 = &this->VertexEdgeLists;
      if (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8) + 8
                  + (ulonglong)(uVar27 & 0x1ff) * 0x10) == -1) {
        FSmallListSet::Remove(pFVar34,param_1,uVar27);
        FSmallListSet::Remove(pFVar34,uVar8,uVar27);
        FRefCountVector::Decrement(this_00,uVar27,1);
        sVar35 = *(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 2);
        if (sVar35 == -1) {
          sVar35 = 0;
        }
        if (sVar35 == 1) {
          FSmallListSet::Clear(pFVar34,uVar8);
          FRefCountVector::Decrement(&this->VertexRefCounts,uVar8,1);
          cVar32 = -1;
          goto LAB_143485e39;
        }
        FSmallListSet::Remove(pFVar34,uVar8,uVar27);
      }
      local_1e8 = 0xffffffff;
    }
  }
  else {
    FRefCountVector::Decrement(&this->VertexRefCounts,param_2,2);
    FRefCountVector::Decrement(&this->TriangleRefCounts,uVar12,1);
    FRefCountVector::Decrement(&this->VertexRefCounts,uVar13,1);
    FRefCountVector::Decrement(&this->VertexRefCounts,param_1,1);
    FRefCountVector::Decrement(this_00,iVar31,1);
    FRefCountVector::Decrement(this_00,iVar10,1);
    local_204 = FindEdgeFromTri(this,param_1,uVar13,uVar12);
    uVar30 = (ulonglong)(local_204 & 0x1ff);
    lVar33 = *(longlong *)
              ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_204 >> 9) * 8);
    uVar8 = *(uint *)(lVar33 + 0xc + uVar30 * 0x10);
    if (*(uint *)(lVar33 + 8 + uVar30 * 0x10) == uVar12) {
      if (uVar24 != 0xffffffff) {
        *(uint *)(lVar33 + 8 + uVar30 * 0x10) = uVar24;
        goto LAB_143485de1;
      }
      *(uint *)(lVar33 + 8 + uVar30 * 0x10) = uVar8;
      *(undefined4 *)(lVar33 + 0xc + uVar30 * 0x10) = 0xffffffff;
    }
    else {
      if (uVar8 != uVar12) {
        return Failed_UnrecoverableError;
      }
      *(uint *)(lVar33 + 0xc + uVar30 * 0x10) = uVar24;
      if (uVar24 != 0xffffffff) {
LAB_143485de1:
        lVar33 = *(longlong *)
                  ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (local_1e8 >> 9) * 8) +
                 (ulonglong)(uVar24 & 0x1ff) * 0xc;
        uVar36 = 0;
        uVar30 = uVar36;
        while (iVar31 = (int)uVar30, *(int *)(lVar33 + uVar36 * 4) != iVar10) {
          uVar30 = (ulonglong)(iVar31 + 1);
          uVar36 = uVar36 + 1;
          if (2 < (longlong)uVar36) {
            return Failed_UnrecoverableError;
          }
        }
        *(uint *)(lVar33 + (longlong)iVar31 * 4) = local_204;
        if (iVar31 == -1) {
          return Failed_UnrecoverableError;
        }
      }
      local_1e8 = 0xffffffff;
    }
    uVar27 = (uint)local_1e8;
  }
  cVar32 = (char)local_1e8;
LAB_143485e39:
  dVar40 = __real_3ff0000000000000 - param_3;
  local_128._s_0.X = dVar18 * param_3 + dVar16 * dVar40;
  local_128._s_0.Y = dVar19 * param_3 + dVar17 * dVar40;
  local_128._s_0.Z = local_f0 * param_3 + local_d8 * dVar40;
  SetVertex(this,param_1,(TVector<double> *)&local_128._s_0,true);
  fVar44 = __real_3f800000;
  if ((this->VertexUVs).bIsSet != false) {
    fVar43 = (float)param_3;
    lVar33 = *(longlong *)
              ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8);
    uVar7 = *(undefined8 *)(lVar33 + (ulonglong)(param_1 & 0x1ff) * 8);
    local_1d8 = (float)uVar7;
    fStack_1d4 = (float)((ulonglong)uVar7 >> 0x20);
    *(ulonglong *)(lVar33 + (ulonglong)(param_1 & 0x1ff) * 8) =
         CONCAT44(fStack_1d4 * (__real_3f800000 - fVar43) + local_1b8._4_4_ * fVar43,
                  local_1d8 * (__real_3f800000 - fVar43) + (float)local_1b8 * fVar43);
  }
  if ((this->VertexNormals).bIsSet != false) {
    fVar41 = (float)param_3;
    uVar30 = (ulonglong)(param_1 & 0x1ff);
    lVar33 = *(longlong *)
              ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8);
    fVar43 = fVar44 - fVar41;
    fVar46 = fVar45 * fVar41 + (float)*(undefined8 *)(lVar33 + uVar30 * 0xc) * fVar43;
    fVar45 = fVar42 * fVar41 + *(float *)(lVar33 + 4 + uVar30 * 0xc) * fVar43;
    fVar47 = fVar47 * fVar41 + *(float *)(lVar33 + 8 + uVar30 * 0xc) * fVar43;
    fVar42 = SQRT(fVar45 * fVar45 + fVar46 * fVar46 + fVar47 * fVar47);
    if (fVar42 <= 0.0) {
      fVar46 = 0.0;
      fVar45 = 0.0;
      fVar47 = 0.0;
    }
    else {
      fVar42 = fVar44 / fVar42;
      fVar46 = fVar46 * fVar42;
      fVar45 = fVar45 * fVar42;
      fVar47 = fVar47 * fVar42;
    }
    *(ulonglong *)(lVar33 + uVar30 * 0xc) = CONCAT44(fVar45,fVar46);
    *(float *)(lVar33 + 8 + uVar30 * 0xc) = fVar47;
  }
  if ((this->VertexColors).bIsSet != false) {
    fVar42 = (float)param_3;
    uVar30 = (ulonglong)(param_1 & 0x1ff);
    lVar33 = *(longlong *)
              ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8);
    fVar44 = fVar44 - fVar42;
    uVar7 = *(undefined8 *)(lVar33 + uVar30 * 0xc);
    *(float *)(lVar33 + uVar30 * 0xc) = fVar49 * fVar42 + (float)uVar7 * fVar44;
    fStack_1c4 = (float)((ulonglong)uVar7 >> 0x20);
    *(float *)(lVar33 + 4 + uVar30 * 0xc) = fVar48 * fVar42 + fStack_1c4 * fVar44;
    *(float *)(lVar33 + 8 + uVar30 * 0xc) =
         fVar50 * fVar42 + *(float *)(lVar33 + 8 + uVar30 * 0xc) * fVar44;
  }
  FVar20._s_0.B = uVar27;
  FVar20._s_0.A = local_204;
  (param_5->KeptEdges).field0_0x0 = FVar20;
  pFVar15 = (this->AttributeSet).Ptr;
  if (pFVar15 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)(pFVar15->_padding_ + 0x48))();
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar39 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar39) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar39) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar6 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + cVar32);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar39 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar39) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar39) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar6 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + cVar32);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return Ok;
}

// CompactCopy @ 14348ac70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMesh3::CompactCopy
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,bool param_2,bool param_3,bool param_4,
          bool param_5,FCompactMaps *param_6)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  undefined8 uVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FDynamicMeshAttributeSet *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FDynamicMeshAttributeSet *pFVar23;
  ulonglong uVar24;
  FDynamicMeshAttributeSet *pFVar25;
  int iVar26;
  FCompactMaps *this_00;
  uint local_e8;
  uint uStack_e4;
  FIndex3i_u_0 local_c8;
  FCompactMaps local_b8;
  TVector2<float>_u_0 local_98;
  TVector<float>_u_0 local_90;
  TVector<float>_u_0 local_84;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  TVector2<float>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  if (((((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
         (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0) ||
       ((param_1->EdgeRefCounts).FreeIndices.CurBlock * 0x200 +
        (param_1->EdgeRefCounts).FreeIndices.CurBlockUsed != 0)) ||
      ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)) ||
     (((param_5 && (pFVar25 = (this->AttributeSet).Ptr, pFVar25 != (FDynamicMeshAttributeSet *)0x0))
      && (bVar8 = FDynamicMeshAttributeSet::IsCompact(pFVar25), !bVar8)))) {
    Clear(this);
    if ((param_2) && ((param_1->VertexNormals).bIsSet != false)) {
      local_90._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      local_90._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      EnableVertexNormals(this,(TVector<float> *)&local_90._s_0);
    }
    if ((param_3) && ((param_1->VertexColors).bIsSet != false)) {
      local_84._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      local_84._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      EnableVertexColors(this,(TVector<float> *)&local_84._s_0);
    }
    if ((param_4) && ((param_1->VertexUVs).bIsSet != false)) {
      local_98 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      EnableVertexUVs(this,(TVector2<float> *)&local_98._s_0);
    }
    if ((param_6 != (FCompactMaps *)0x0) ||
       ((param_5 && ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0)))) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    pFVar25 = (FDynamicMeshAttributeSet *)0x0;
    local_b8.VertMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.VertMap.ArrayNum = 0;
    local_b8.VertMap.ArrayMax = 0;
    this_00 = &local_b8;
    if (param_6 != (FCompactMaps *)0x0) {
      this_00 = param_6;
    }
    local_b8.TriMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.TriMap.ArrayNum = 0;
    local_b8.TriMap.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this_00->VertMap,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    uVar16 = 0;
    local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    lVar13 = (longlong)
             (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    local_78._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_78._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_40 = 0;
    local_3e = 0;
    uVar10 = 0;
    pFVar23 = pFVar25;
    pFVar14 = pFVar25;
    if (0 < lVar13) {
      do {
        uVar17 = (uint)pFVar23;
        if ((((int)uVar17 < 0) ||
            ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar17)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_1->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + ((ulonglong)pFVar23 >> 9) * 8) +
                                        (ulonglong)(uVar17 & 0x1ff) * 2) - 1U))) {
          uVar18 = uVar10;
          if ((int)uVar17 < (this_00->VertMap).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)((this_00->VertMap).AllocatorInstance.Data + (longlong)pFVar14 * 4) =
               0xffffffff;
        }
        else {
          GetVertex(param_1,uVar17,(FVertexInfo *)&local_78._s_0,param_2,param_3,param_4);
          iVar15 = AppendVertex(this,(FVertexInfo *)&local_78._s_0);
          uVar18 = uVar16;
          if ((int)uVar17 < (this_00->VertMap).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(int *)((this_00->VertMap).AllocatorInstance.Data + (longlong)pFVar14 * 4) = iVar15;
        }
        pFVar14 = (FDynamicMeshAttributeSet *)((longlong)&pFVar14->_padding_ + 1);
        pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar17 + 1);
      } while ((longlong)pFVar14 < lVar13);
    }
    if ((param_1->TriangleGroups).bIsSet != false) {
      EnableTriangleGroups(this,0);
    }
    if (bVar8) {
      FCompactMaps::ResetTriangleMap
                (this_00,(param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,true);
    }
    uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    iVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 + uVar17;
    pFVar23 = pFVar25;
    if (((iVar15 != 0) &&
        (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        pFVar23 = (FDynamicMeshAttributeSet *)0x0, 0xfffd < (ushort)(**(short **)pFVar5 - 1U))) &&
       (pFVar23 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar15)) {
      do {
        sVar4 = *(short *)(*(longlong *)(pFVar5 + ((ulonglong)pFVar23 >> 9) * 8) +
                          (ulonglong)((uint)pFVar23 & 0x1ff) * 2);
        if ((sVar4 != 0) && (sVar4 != -1)) break;
        uVar18 = (uint)pFVar23 + 1;
        pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar18;
      } while ((int)uVar18 < iVar15);
    }
    uVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    iVar26 = (int)pFVar23;
    while (iVar26 != uVar18 * 0x200 + uVar17) {
      while( true ) {
        uVar19 = (uint)pFVar23;
        lVar13 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar23 >> 9) * 8);
        uVar3 = *(undefined8 *)(lVar13 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
        uVar20 = *(uint *)(lVar13 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
        local_e8 = (uint)uVar3;
        uVar11 = uVar10;
        if ((int)local_e8 < (this_00->VertMap).ArrayNum) {
          uVar11 = ~local_e8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_e4 = (uint)((ulonglong)uVar3 >> 0x20);
        iVar26 = *(int *)((this_00->VertMap).AllocatorInstance.Data + (longlong)(int)local_e8 * 4);
        uVar11 = uVar10;
        if ((int)uStack_e4 < (this_00->VertMap).ArrayNum) {
          uVar11 = ~uStack_e4 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)((this_00->VertMap).AllocatorInstance.Data + (longlong)(int)uStack_e4 * 4);
        uVar11 = uVar10;
        if ((int)uVar20 < (this_00->VertMap).ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_c8._s_0.C =
             *(undefined4 *)((this_00->VertMap).AllocatorInstance.Data + (longlong)(int)uVar20 * 4);
        if ((param_1->TriangleGroups).bIsSet == false) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = uVar16;
          if (((-1 < (int)uVar19) &&
              ((int)uVar19 <
               (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + ((ulonglong)pFVar23 >> 9) * 8) +
                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            uVar20 = *(uint *)(*(longlong *)
                                ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                + ((ulonglong)pFVar23 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
          }
        }
        local_c8._s_0.A = iVar26;
        local_c8._s_0.B = iVar12;
        iVar12 = AppendTriangle(this,(FIndex3i *)&local_c8._s_0,uVar20);
        iVar26 = uVar20 + 1;
        if ((int)(uVar20 + 1) < this->GroupIDCounter) {
          iVar26 = this->GroupIDCounter;
        }
        this->GroupIDCounter = iVar26;
        if (bVar8) {
          uVar20 = uVar10;
          if ((int)uVar19 < (this_00->TriMap).ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(int *)((this_00->TriMap).AllocatorInstance.Data + (longlong)(int)uVar19 * 4) = iVar12;
        }
        pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar19 + 1);
        if (iVar15 <= (int)(uVar19 + 1)) break;
        pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar13 = ((ulonglong)pFVar23 >> 9) * 8;
          lVar7 = (ulonglong)((uint)pFVar23 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar13)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar13)) != -1)) break;
          uVar20 = (uint)pFVar23 + 1;
          pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar20;
          if (iVar15 <= (int)uVar20) goto LAB_14348b460;
        }
      }
LAB_14348b460:
      iVar26 = (int)pFVar23;
    }
    if ((param_5) && ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0)) {
      EnableAttributes(this);
      pFVar23 = (param_1->AttributeSet).Ptr;
      pFVar14 = pFVar25;
      if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar14 = pFVar23;
      }
      FDynamicMeshAttributeSet::EnableMatchingAttributes
                ((this->AttributeSet).Ptr,pFVar14,true,false);
      pFVar23 = (param_1->AttributeSet).Ptr;
      if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar25 = pFVar23;
      }
      FDynamicMeshAttributeSet::CompactCopy((this->AttributeSet).Ptr,this_00,pFVar25);
    }
    uVar16 = 1;
    uVar10 = 1;
    if ((param_1->ChangeStampShape).bIsEnabled != false) {
      pFVar1 = &(param_1->ChangeStampShape).Mutex;
      LOCK();
      bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(pFVar1);
      }
      uVar10 = (param_1->ChangeStampShape).Value;
      LOCK();
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    if ((this->ChangeStampShape).bIsEnabled != false) {
      pFVar1 = &(this->ChangeStampShape).Mutex;
      LOCK();
      bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(pFVar1);
      }
      (this->ChangeStampShape).Value = uVar10;
      LOCK();
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    if ((param_1->ChangeStampTopology).bIsEnabled != false) {
      pFVar1 = &(param_1->ChangeStampTopology).Mutex;
      LOCK();
      bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(pFVar1);
      }
      uVar16 = (param_1->ChangeStampTopology).Value;
      LOCK();
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    if ((this->ChangeStampTopology).bIsEnabled != false) {
      pFVar1 = &(this->ChangeStampTopology).Mutex;
      LOCK();
      bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(pFVar1);
      }
      (this->ChangeStampTopology).Value = uVar16;
      LOCK();
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    if (local_b8.TriMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.TriMap.AllocatorInstance.Data);
    }
    if (local_b8.VertMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.VertMap.AllocatorInstance.Data);
    }
  }
  else {
    Copy(this,param_1,param_2,param_3,param_4,param_5);
    if (param_6 != (FCompactMaps *)0x0) {
      iVar15 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this->VertexRefCounts).RefCounts.CurBlockUsed;
      iVar26 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this->TriangleRefCounts).RefCounts.CurBlockUsed;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&param_6->VertMap,iVar15,Default)
      ;
      uVar22 = 0;
      uVar21 = uVar22;
      uVar24 = uVar22;
      if (0 < iVar15) {
        do {
          uVar16 = (uint)uVar24;
          uVar10 = 0;
          if ((int)uVar16 < (param_6->VertMap).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)((param_6->VertMap).AllocatorInstance.Data + uVar21 * 4) = uVar16;
          uVar21 = uVar21 + 1;
          uVar24 = (ulonglong)(uVar16 + 1);
        } while ((longlong)uVar21 < (longlong)iVar15);
      }
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&param_6->TriMap,iVar26,Default);
      uVar21 = uVar22;
      if (0 < (longlong)iVar26) {
        do {
          uVar16 = (uint)uVar22;
          uVar10 = 0;
          if ((int)uVar16 < (param_6->TriMap).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)((param_6->TriMap).AllocatorInstance.Data + uVar21 * 4) = uVar16;
          uVar22 = (ulonglong)(uVar16 + 1);
          uVar21 = uVar21 + 1;
        } while ((longlong)uVar21 < (longlong)iVar26);
      }
    }
  }
  return;
}

// CompactInPlace @ 143491d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMesh3::CompactInPlace(FDynamicMesh3 *this,FCompactMaps *param_1)

{
  FSmallListSet *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FDynamicMeshAttributeSet *this_01;
  code *pcVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar17;
  TDynamicVector<UE::Math::TVector2<float>,512> *this_02;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FCompactMaps *local_b8;
  FCompactMaps local_b0;
  undefined8 local_90;
  BaseValueIterator local_88;
  int local_60 [4];
  int local_50 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar23 = 0;
  local_b0.VertMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.VertMap.ArrayNum = 0;
  local_b0.VertMap.ArrayMax = 0;
  local_b0.TriMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.TriMap.ArrayNum = 0;
  local_b0.TriMap.ArrayMax = 0;
  local_b8 = param_1;
  if ((this->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    if (param_1 == (FCompactMaps *)0x0) goto LAB_143491f8c;
  }
  else if (param_1 == (FCompactMaps *)0x0) {
    local_b8 = &local_b0;
  }
  param_1 = local_b8;
  uVar22 = (this->TriangleRefCounts).RefCounts.CurBlock;
  uVar24 = (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b8->VertMap,
             (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  FCompactMaps::ResetTriangleMap(param_1,uVar22 * 0x200 + uVar24,false);
  iVar16 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->VertexRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar16) {
    lVar25 = 0;
    do {
      uVar22 = (uint)uVar23;
      if ((((int)uVar22 < 0) ||
          ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar22)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                         Data + (uVar23 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2
                                      ) - 1U))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      iVar7 = (param_1->VertMap).ArrayNum;
      uVar24 = 0;
      if ((int)uVar22 < iVar7) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (local_c8 = (longlong)(int)uVar22, local_c0 = (longlong)iVar7,
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar24 = 0xffffffff;
      if (bVar15) {
        uVar24 = uVar22;
      }
      uVar23 = (ulonglong)(uVar22 + 1);
      *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar25 * 4) = uVar24;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iVar16);
  }
  uVar22 = 0;
  iVar16 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar16) {
    lVar25 = 0;
    do {
      if ((((int)uVar22 < 0) ||
          ((int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (this->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar22)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->TriangleRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8) +
                                      (ulonglong)(uVar22 & 0x1ff) * 2) - 1U))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      iVar7 = (param_1->TriMap).ArrayNum;
      uVar24 = 0;
      if ((int)uVar22 < iVar7) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (local_c8 = (longlong)(int)uVar22, local_c0 = (longlong)iVar7,
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar24 = 0xffffffff;
      if (bVar15) {
        uVar24 = uVar22;
      }
      uVar22 = uVar22 + 1;
      *(uint *)((param_1->TriMap).AllocatorInstance.Data + lVar25 * 4) = uVar24;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iVar16);
  }
LAB_143491f8c:
  uVar23 = 0;
  uVar22 = ((this->VertexRefCounts).RefCounts.CurBlockUsed - 1) +
           (this->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if (-1 < (int)uVar22) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) break;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  if (0 < (int)uVar22) {
    do {
      uVar24 = (uint)uVar23;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                         Data + (uVar23 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 2
                                      ) - 1U)) {
        if ((int)uVar24 < (int)uVar22) {
          lVar25 = (longlong)(int)uVar22;
          goto LAB_143492010;
        }
        break;
      }
      uVar23 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (int)uVar22);
  }
LAB_14349238f:
  FRefCountVector::Trim(&this->VertexRefCounts,(this->VertexRefCounts).UsedCount);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize
            (&this->Vertices,(this->VertexRefCounts).UsedCount);
  if ((this->VertexNormals).bIsSet != false) {
    pTVar17 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator->
                        (&this->VertexNormals);
    TDynamicVector<UE::Math::TVector<float>,512>::Resize
              (pTVar17,(this->VertexRefCounts).UsedCount * 3);
  }
  if ((this->VertexColors).bIsSet != false) {
    pTVar17 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator->
                        (&this->VertexColors);
    TDynamicVector<UE::Math::TVector<float>,512>::Resize
              (pTVar17,(this->VertexRefCounts).UsedCount * 3);
  }
  if ((this->VertexUVs).bIsSet != false) {
    this_02 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::operator->
                        (&this->VertexUVs);
    TDynamicVector<UE::Math::TVector2<float>,512>::Resize
              (this_02,(this->VertexRefCounts).UsedCount * 2);
  }
  FSmallListSet::Compact(&this->VertexEdgeLists,(this->VertexRefCounts).UsedCount);
  uVar23 = 0;
  uVar22 = ((this->TriangleRefCounts).RefCounts.CurBlockUsed - 1) +
           (this->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if (-1 < (int)uVar22) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) break;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  if (0 < (int)uVar22) {
    do {
      uVar24 = (uint)uVar23;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->TriangleRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (uVar23 >> 9) * 8) +
                                      (ulonglong)(uVar24 & 0x1ff) * 2) - 1U)) {
        if ((int)uVar24 < (int)uVar22) {
          lVar25 = (longlong)(int)uVar22;
          goto LAB_1434925c0;
        }
        break;
      }
      uVar23 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (int)uVar22);
  }
LAB_14349248f:
  uVar23 = 0;
  uVar22 = (this->TriangleRefCounts).UsedCount;
  TDynamicVector<int,512>::TruncateBlocks(&(this->TriangleRefCounts).FreeIndices,1,No);
  iVar16 = (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum;
  (this->TriangleRefCounts).FreeIndices.CurBlock = 0;
  (this->TriangleRefCounts).FreeIndices.CurBlockUsed = 0;
  if (iVar16 == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&(this->TriangleRefCounts).FreeIndices);
  }
  TDynamicVector<unsigned_short,512>::Resize(&(this->TriangleRefCounts).RefCounts,uVar22);
  (this->TriangleRefCounts).UsedCount = uVar22;
  TDynamicVector<UE::Geometry::FIndex3i,512>::Resize(&this->Triangles,uVar22);
  TDynamicVector<UE::Geometry::FIndex3i,512>::Resize
            (&this->TriangleEdges,(this->TriangleRefCounts).UsedCount);
  if ((this->TriangleGroups).bIsSet != false) {
    TDynamicVector<int,512>::Resize
              (&(this->TriangleGroups).TypedValue,(this->TriangleRefCounts).UsedCount);
  }
  uVar22 = ((this->EdgeRefCounts).RefCounts.CurBlockUsed - 1) +
           (this->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if (-1 < (int)uVar22) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) break;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  if (0 < (int)uVar22) {
    do {
      uVar24 = (uint)uVar23;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                         Data + (uVar23 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 2
                                      ) - 1U)) {
        if ((int)uVar24 < (int)uVar22) goto LAB_1434928d0;
        break;
      }
      uVar23 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (int)uVar22);
  }
LAB_143492d4f:
  uVar22 = (this->EdgeRefCounts).UsedCount;
  TDynamicVector<int,512>::TruncateBlocks(&(this->EdgeRefCounts).FreeIndices,1,No);
  iVar16 = (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum;
  (this->EdgeRefCounts).FreeIndices.CurBlock = 0;
  (this->EdgeRefCounts).FreeIndices.CurBlockUsed = 0;
  if (iVar16 == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&(this->EdgeRefCounts).FreeIndices);
  }
  TDynamicVector<unsigned_short,512>::Resize(&(this->EdgeRefCounts).RefCounts,uVar22);
  (this->EdgeRefCounts).UsedCount = uVar22;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Resize(&this->Edges,uVar22);
  this_01 = (this->AttributeSet).Ptr;
  if (this_01 != (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMeshAttributeSet::CompactInPlace(this_01,param_1);
  }
  if (local_b0.TriMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.TriMap.AllocatorInstance.Data);
  }
  if (local_b0.VertMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.VertMap.AllocatorInstance.Data);
  }
  return;
LAB_143492010:
  pFVar11 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar21 = (ulonglong)(uVar22 & 0x1ff);
  uVar24 = (uint)uVar23;
  uVar20 = (ulonglong)(uVar24 & 0x1ff);
  lVar19 = (ulonglong)(uVar22 >> 9) * 8;
  lVar3 = *(longlong *)(pFVar11 + (ulonglong)(uVar22 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar3 + uVar21 * 0x18);
  uVar13 = puVar1[1];
  uVar6 = *(undefined8 *)(lVar3 + 0x10 + uVar21 * 0x18);
  lVar3 = (uVar23 >> 9) * 8;
  lVar4 = *(longlong *)(pFVar11 + (uVar23 >> 9) * 8);
  puVar2 = (undefined8 *)(lVar4 + uVar20 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar13;
  *(undefined8 *)(lVar4 + 0x10 + uVar20 * 0x18) = uVar6;
  if ((this->VertexNormals).bIsSet != false) {
    pFVar11 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    lVar4 = *(longlong *)(pFVar11 + lVar19);
    lVar5 = *(longlong *)(pFVar11 + lVar3);
    uVar8 = *(undefined4 *)(lVar4 + 8 + uVar21 * 0xc);
    *(undefined8 *)(lVar5 + uVar20 * 0xc) = *(undefined8 *)(lVar4 + uVar21 * 0xc);
    *(undefined4 *)(lVar5 + 8 + uVar20 * 0xc) = uVar8;
  }
  if ((this->VertexColors).bIsSet != false) {
    pFVar11 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    lVar4 = *(longlong *)(pFVar11 + lVar19);
    lVar5 = *(longlong *)(pFVar11 + lVar3);
    uVar8 = *(undefined4 *)(lVar4 + 8 + uVar21 * 0xc);
    *(undefined8 *)(lVar5 + uVar20 * 0xc) = *(undefined8 *)(lVar4 + uVar21 * 0xc);
    *(undefined4 *)(lVar5 + 8 + uVar20 * 0xc) = uVar8;
  }
  if ((this->VertexUVs).bIsSet != false) {
    pFVar11 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    *(undefined8 *)(*(longlong *)(pFVar11 + lVar3) + uVar20 * 8) =
         *(undefined8 *)(*(longlong *)(pFVar11 + lVar19) + uVar21 * 8);
  }
  this_00 = &this->VertexEdgeLists;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_88,this_00,uVar22,false);
  while ((((local_88.ListSet != this_00 || (local_88.ListIndex != uVar22)) || (local_88.iCur != -1))
         || (local_88.cur_ptr != -1))) {
    uVar20 = (ulonglong)(local_88.cur_value & 0x1ff);
    lVar19 = ((local_88._32_8_ & 0xffffffff) >> 9) * 8;
    lVar3 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar19);
    uVar27 = *(uint *)(lVar3 + uVar20 * 0x10);
    uVar29 = *(uint *)(lVar3 + 4 + uVar20 * 0x10);
    uVar26 = uVar24;
    if (uVar27 == uVar22) {
      uVar27 = uVar24;
      if ((int)uVar29 < (int)uVar24) {
        uVar27 = uVar29;
      }
      *(uint *)(lVar3 + uVar20 * 0x10) = uVar27;
      if ((int)uVar24 < (int)uVar29) {
        uVar26 = uVar29;
      }
LAB_14349217c:
      *(uint *)(lVar3 + 4 + uVar20 * 0x10) = uVar26;
    }
    else if (uVar29 == uVar22) {
      uVar29 = uVar24;
      if ((int)uVar27 < (int)uVar24) {
        uVar29 = uVar27;
      }
      *(uint *)(lVar3 + uVar20 * 0x10) = uVar29;
      if ((int)uVar24 < (int)uVar27) {
        uVar26 = uVar27;
      }
      goto LAB_14349217c;
    }
    local_60[0] = 0;
    local_60[1] = 1;
    local_60[2] = 2;
    local_90 = *(ulonglong *)
                (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar19) + 8 +
                uVar20 * 0x10);
    uVar20 = local_90;
    lVar19 = *(longlong *)
              ((this->Triangles).Blocks.AllocatorInstance.Data + ((local_90 & 0xffffffff) >> 9) * 8)
             + (ulonglong)((uint)local_90 & 0x1ff) * 0xc;
    piVar18 = local_60;
    do {
      if (*(uint *)(lVar19 + (longlong)*piVar18 * 4) == uVar22) {
        *(uint *)(lVar19 + (longlong)*piVar18 * 4) = uVar24;
        break;
      }
      piVar18 = piVar18 + 1;
    } while (piVar18 != local_60 + 3);
    local_90._4_4_ = (uint)(local_90 >> 0x20);
    local_90 = uVar20;
    if (local_90._4_4_ == 0xffffffff) {
LAB_14349225a:
      FSmallListSet::BaseValueIterator::GotoNext(&local_88);
    }
    else {
      local_50[0] = 0;
      local_50[1] = 1;
      local_50[2] = 2;
      lVar19 = *(longlong *)
                ((this->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_90._4_4_ >> 9) * 8) + (ulonglong)(local_90._4_4_ & 0x1ff) * 0xc;
      piVar18 = local_50;
      do {
        if (*(uint *)(lVar19 + (longlong)*piVar18 * 4) == uVar22) {
          *(uint *)(lVar19 + (longlong)*piVar18 * 4) = uVar24;
          goto LAB_14349225a;
        }
        piVar18 = piVar18 + 1;
      } while (piVar18 != local_50 + 3);
      FSmallListSet::BaseValueIterator::GotoNext(&local_88);
    }
  }
  pFVar11 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  lVar19 = (ulonglong)(uVar22 & 0x1ff) * 2;
  *(undefined2 *)(*(longlong *)(pFVar11 + (uVar23 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 2) =
       *(undefined2 *)(lVar19 + *(longlong *)(pFVar11 + (ulonglong)(uVar22 >> 9) * 8));
  *(undefined2 *)
   (lVar19 + *(longlong *)
              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar22 >> 9) * 8)) = 0xffff;
  FSmallListSet::Move(this_00,uVar22,uVar24);
  param_1 = local_b8;
  if (local_b8 != (FCompactMaps *)0x0) {
    iVar16 = (local_b8->VertMap).ArrayNum;
    uVar27 = 0;
    if ((int)uVar22 < iVar16) {
      uVar27 = ~uVar22 >> 0x1f;
    }
    if (uVar27 == 0) {
      local_c8 = (longlong)(int)uVar22;
      local_c0 = (longlong)iVar16;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar25 * 4) = uVar24;
  }
  lVar25 = lVar25 + -1;
  uVar24 = uVar24 + 1;
  uVar22 = uVar22 - 1;
  if (-1 < (int)uVar22) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) break;
      lVar25 = lVar25 + -1;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  if ((int)uVar22 <= (int)uVar24) goto LAB_14349238f;
  while (uVar23 = (ulonglong)uVar24,
        (ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 2) - 1U)
        < 0xfffe) {
    uVar24 = uVar24 + 1;
    if ((int)uVar22 <= (int)uVar24) goto LAB_14349238f;
  }
  goto LAB_143492010;
LAB_1434925c0:
  param_1 = local_b8;
  pFVar11 = (this->Triangles).Blocks.AllocatorInstance.Data;
  uVar24 = (uint)uVar23;
  lVar19 = (ulonglong)(uVar22 >> 9) * 8;
  lVar9 = *(longlong *)(pFVar11 + lVar19);
  lVar3 = (ulonglong)(uVar22 & 0x1ff) * 0xc;
  uVar8 = *(undefined4 *)(lVar9 + 8 + lVar3);
  lVar4 = (uVar23 >> 9) * 8;
  lVar5 = (ulonglong)(uVar24 & 0x1ff) * 0xc;
  lVar10 = *(longlong *)(pFVar11 + lVar4);
  *(undefined8 *)(lVar10 + lVar5) = *(undefined8 *)(lVar9 + lVar3);
  *(undefined4 *)(lVar10 + 8 + lVar5) = uVar8;
  pFVar11 = (this->TriangleEdges).Blocks.AllocatorInstance.Data;
  lVar9 = *(longlong *)(pFVar11 + lVar19);
  lVar10 = *(longlong *)(pFVar11 + lVar4);
  uVar8 = *(undefined4 *)(lVar9 + 8 + lVar3);
  *(undefined8 *)(lVar10 + lVar5) = *(undefined8 *)(lVar9 + lVar3);
  *(undefined4 *)(lVar10 + 8 + lVar5) = uVar8;
  if ((this->TriangleGroups).bIsSet != false) {
    pFVar11 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
    *(undefined4 *)(*(longlong *)(pFVar11 + lVar4) + (ulonglong)(uVar24 & 0x1ff) * 4) =
         *(undefined4 *)(*(longlong *)(pFVar11 + lVar19) + (ulonglong)(uVar22 & 0x1ff) * 4);
  }
  uVar27 = *(uint *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar4) +
                    lVar5);
  uVar20 = (ulonglong)(uVar27 & 0x1ff);
  lVar19 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8)
  ;
  uVar27 = *(uint *)(lVar19 + 0xc + uVar20 * 0x10);
  if (*(uint *)(lVar19 + 8 + uVar20 * 0x10) == uVar22) {
    if (uVar24 == 0xffffffff) {
      *(uint *)(lVar19 + 8 + uVar20 * 0x10) = uVar27;
      *(undefined4 *)(lVar19 + 0xc + uVar20 * 0x10) = 0xffffffff;
    }
    else {
      *(uint *)(lVar19 + 8 + uVar20 * 0x10) = uVar24;
    }
  }
  else if (uVar27 == uVar22) {
    *(uint *)(lVar19 + 0xc + uVar20 * 0x10) = uVar24;
  }
  uVar27 = *(uint *)(*(longlong *)
                      ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8) + 4
                    + (ulonglong)(uVar24 & 0x1ff) * 0xc);
  uVar20 = (ulonglong)(uVar27 & 0x1ff);
  lVar19 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8)
  ;
  uVar27 = *(uint *)(lVar19 + 0xc + uVar20 * 0x10);
  if (*(uint *)(lVar19 + 8 + uVar20 * 0x10) == uVar22) {
    if (uVar24 == 0xffffffff) {
      *(uint *)(lVar19 + 8 + uVar20 * 0x10) = uVar27;
      *(undefined4 *)(lVar19 + 0xc + uVar20 * 0x10) = 0xffffffff;
    }
    else {
      *(uint *)(lVar19 + 8 + uVar20 * 0x10) = uVar24;
    }
  }
  else if (uVar27 == uVar22) {
    *(uint *)(lVar19 + 0xc + uVar20 * 0x10) = uVar24;
  }
  uVar27 = *(uint *)(*(longlong *)
                      ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8) + 8
                    + (ulonglong)(uVar24 & 0x1ff) * 0xc);
  uVar20 = (ulonglong)(uVar27 & 0x1ff);
  lVar19 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8)
  ;
  uVar27 = *(uint *)(lVar19 + 0xc + uVar20 * 0x10);
  if (*(uint *)(lVar19 + 8 + uVar20 * 0x10) == uVar22) {
    if (uVar24 == 0xffffffff) {
      *(uint *)(lVar19 + 8 + uVar20 * 0x10) = uVar27;
      *(undefined4 *)(lVar19 + 0xc + uVar20 * 0x10) = 0xffffffff;
    }
    else {
      *(uint *)(lVar19 + 8 + uVar20 * 0x10) = uVar24;
    }
  }
  else if (uVar27 == uVar22) {
    *(uint *)(lVar19 + 0xc + uVar20 * 0x10) = uVar24;
  }
  pFVar11 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  lVar19 = (ulonglong)(uVar22 & 0x1ff) * 2;
  *(undefined2 *)(*(longlong *)(pFVar11 + (uVar23 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 2) =
       *(undefined2 *)(lVar19 + *(longlong *)(pFVar11 + (ulonglong)(uVar22 >> 9) * 8));
  *(undefined2 *)
   (lVar19 + *(longlong *)
              ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar22 >> 9) * 8)) = 0xffff;
  if (local_b8 != (FCompactMaps *)0x0) {
    iVar16 = (local_b8->TriMap).ArrayNum;
    uVar27 = 0;
    if ((int)uVar22 < iVar16) {
      uVar27 = ~uVar22 >> 0x1f;
    }
    if (uVar27 == 0) {
      local_c8 = (longlong)(int)uVar22;
      local_c0 = (longlong)iVar16;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    *(uint *)((param_1->TriMap).AllocatorInstance.Data + lVar25 * 4) = uVar24;
  }
  lVar25 = lVar25 + -1;
  uVar24 = uVar24 + 1;
  uVar22 = uVar22 - 1;
  if (-1 < (int)uVar22) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) break;
      lVar25 = lVar25 + -1;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  if ((int)uVar22 <= (int)uVar24) goto LAB_14349248f;
  while (uVar23 = (ulonglong)uVar24,
        (ushort)(*(short *)(*(longlong *)
                             ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 2) - 1U)
        < 0xfffe) {
    uVar24 = uVar24 + 1;
    if ((int)uVar22 <= (int)uVar24) goto LAB_14349248f;
  }
  goto LAB_1434925c0;
LAB_1434928d0:
  pFVar11 = (this->Edges).Blocks.AllocatorInstance.Data;
  uVar29 = (uint)uVar23;
  uVar20 = (ulonglong)(uVar29 & 0x1ff);
  puVar1 = (undefined8 *)
           (*(longlong *)(pFVar11 + (ulonglong)(uVar22 >> 9) * 8) +
           (ulonglong)(uVar22 & 0x1ff) * 0x10);
  uVar6 = puVar1[1];
  lVar25 = (uVar23 >> 9) * 8;
  puVar2 = (undefined8 *)(*(longlong *)(pFVar11 + lVar25) + uVar20 * 0x10);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  lVar25 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar25);
  uVar24 = *(uint *)(lVar25 + uVar20 * 0x10);
  uVar27 = *(uint *)(lVar25 + 4 + uVar20 * 0x10);
  uVar24 = *(uint *)(*(longlong *)
                      ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
  if (uVar24 != 0xffffffff) {
    pFVar11 = (this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data;
    uVar26 = uVar24 + 1;
    uVar20 = (ulonglong)uVar26;
    iVar16 = *(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar24 >> 9) * 8) +
                     (ulonglong)(uVar24 & 0x1ff) * 4);
    if (iVar16 < 8) {
      while ((int)uVar26 <= (int)(uVar24 + iVar16)) {
        uVar21 = (ulonglong)((uint)uVar20 & 0x1ff);
        puVar28 = (uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4);
        if (*(uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4) == uVar22)
        goto LAB_1434929ba;
        uVar26 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar26;
      }
    }
    else {
      while ((int)uVar26 <= (int)(uVar24 + 8)) {
        uVar21 = (ulonglong)((uint)uVar20 & 0x1ff);
        puVar28 = (uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4);
        if (*(uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4) == uVar22)
        goto LAB_1434929ba;
        uVar26 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar26;
      }
      uVar24 = *(uint *)(*(longlong *)
                          ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 + 9 >> 9) * 8) + (ulonglong)(uVar24 + 9 & 0x1ff) * 4);
      if (uVar24 != 0xffffffff) {
        pFVar11 = (this->VertexEdgeLists).LinkedListElements.Blocks.AllocatorInstance.Data;
        do {
          lVar25 = *(longlong *)(pFVar11 + (ulonglong)(uVar24 >> 9) * 8);
          if (*(uint *)(lVar25 + (ulonglong)(uVar24 & 0x1ff) * 4) == uVar22) {
            *(uint *)(lVar25 + (ulonglong)(uVar24 & 0x1ff) * 4) = uVar29;
            break;
          }
          uVar24 = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                            (ulonglong)(uVar24 + 1 & 0x1ff) * 4);
        } while (uVar24 != 0xffffffff);
      }
    }
  }
  goto LAB_143492a70;
LAB_1434929ba:
  *puVar28 = uVar29;
LAB_143492a70:
  uVar24 = *(uint *)(*(longlong *)
                      ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
  if (uVar24 != 0xffffffff) {
    pFVar11 = (this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data;
    uVar27 = uVar24 + 1;
    uVar20 = (ulonglong)uVar27;
    iVar16 = *(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar24 >> 9) * 8) +
                     (ulonglong)(uVar24 & 0x1ff) * 4);
    if (iVar16 < 8) {
      while ((int)uVar27 <= (int)(uVar24 + iVar16)) {
        uVar21 = (ulonglong)((uint)uVar20 & 0x1ff);
        puVar28 = (uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4);
        if (*(uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4) == uVar22)
        goto LAB_143492afa;
        uVar27 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar27;
      }
    }
    else {
      while ((int)uVar27 <= (int)(uVar24 + 8)) {
        uVar21 = (ulonglong)((uint)uVar20 & 0x1ff);
        puVar28 = (uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4);
        if (*(uint *)(*(longlong *)(pFVar11 + (uVar20 >> 9) * 8) + uVar21 * 4) == uVar22)
        goto LAB_143492afa;
        uVar27 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar27;
      }
      uVar24 = *(uint *)(*(longlong *)
                          ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 + 9 >> 9) * 8) + (ulonglong)(uVar24 + 9 & 0x1ff) * 4);
      if (uVar24 != 0xffffffff) {
        pFVar11 = (this->VertexEdgeLists).LinkedListElements.Blocks.AllocatorInstance.Data;
        do {
          lVar25 = *(longlong *)(pFVar11 + (ulonglong)(uVar24 >> 9) * 8);
          if (*(uint *)(lVar25 + (ulonglong)(uVar24 & 0x1ff) * 4) == uVar22) {
            *(uint *)(lVar25 + (ulonglong)(uVar24 & 0x1ff) * 4) = uVar29;
            break;
          }
          uVar24 = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                            (ulonglong)(uVar24 + 1 & 0x1ff) * 4);
        } while (uVar24 != 0xffffffff);
      }
    }
  }
LAB_143492bb0:
  uVar24 = *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8)
                     + 8 + (ulonglong)(uVar29 & 0x1ff) * 0x10);
  lVar25 = *(longlong *)
            ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8) +
           (ulonglong)(uVar24 & 0x1ff) * 0xc;
  lVar19 = 0;
  do {
    if (*(uint *)(lVar25 + lVar19 * 4) == uVar22) {
      *(uint *)(lVar25 + lVar19 * 4) = uVar29;
      break;
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 < 3);
  uVar24 = *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8)
                     + 0xc + (ulonglong)(uVar29 & 0x1ff) * 0x10);
  if (uVar24 != 0xffffffff) {
    lVar25 = *(longlong *)
              ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8) +
             (ulonglong)(uVar24 & 0x1ff) * 0xc;
    lVar19 = 0;
    do {
      if (*(uint *)(lVar25 + lVar19 * 4) == uVar22) {
        *(uint *)(lVar25 + lVar19 * 4) = uVar29;
        break;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < 3);
  }
  pFVar11 = (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  uVar27 = uVar29 + 1;
  lVar25 = (ulonglong)(uVar22 & 0x1ff) * 2;
  *(undefined2 *)(*(longlong *)(pFVar11 + (uVar23 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 2) =
       *(undefined2 *)(lVar25 + *(longlong *)(pFVar11 + (ulonglong)(uVar22 >> 9) * 8));
  uVar24 = uVar22 >> 9;
  uVar22 = uVar22 - 1;
  *(undefined2 *)
   (lVar25 + *(longlong *)
              ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + (ulonglong)uVar24 * 8
              )) = 0xffff;
  if (-1 < (int)uVar22) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) break;
      uVar22 = uVar22 - 1;
    } while (-1 < (int)uVar22);
  }
  if ((int)uVar22 <= (int)uVar27) goto LAB_143492d4f;
  while (uVar23 = (ulonglong)uVar27,
        (ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 2) - 1U)
        < 0xfffe) {
    uVar27 = uVar27 + 1;
    if ((int)uVar22 <= (int)uVar27) goto LAB_143492d4f;
  }
  goto LAB_1434928d0;
LAB_143492afa:
  *puVar28 = uVar29;
  goto LAB_143492bb0;
}

// Copy @ 143498b50

void __thiscall
UE::Geometry::FDynamicMesh3::Copy
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,bool param_2,bool param_3,bool param_4,
          bool param_5)

{
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this_00;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> *this_01;
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMeshAttributeSet *pFVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *pTVar9;
  TDynamicVector<UE::Math::TVector2<float>,512> *pTVar10;
  bool bVar11;
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> local_a8;
  TDynamicVector<UE::Math::TVector2<float>,512> local_88;
  char local_70 [8];
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> local_68;
  TDynamicVector<UE::Math::TVector2<float>,512> local_48;
  char local_30;
  
  if (this == param_1) {
    return;
  }
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(&this->Vertices,&param_1->Vertices);
  if (param_2) {
    local_a8.bIsSet = (param_1->VertexNormals).bIsSet;
    if (local_a8.bIsSet != false) {
      TDynamicVector<UE::Math::TVector<float>,512>::TDynamicVector<UE::Math::TVector<float>,512>
                (&local_a8.TypedValue,&(param_1->VertexNormals).TypedValue);
    }
    TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
              (&this->VertexNormals,&local_a8);
    if (local_a8.bIsSet == false) goto LAB_143498c0d;
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_a8.TypedValue,0);
    FVar8.Data = local_a8.TypedValue.Blocks.AllocatorInstance.Data;
  }
  else {
    local_68.bIsSet = false;
    TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
              (&this->VertexNormals,
               (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *)
               (local_70 + 8));
    if (local_68.bIsSet == false) goto LAB_143498c0d;
    TDynamicVector<UE::Math::TVector<float>,512>::Empty
              ((TDynamicVector<UE::Math::TVector<float>,512> *)(local_70 + 8),0);
    FVar8.Data = local_68.TypedValue.Blocks.AllocatorInstance.Data;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
LAB_143498c0d:
  if (param_3) {
    local_a8.bIsSet = (param_1->VertexColors).bIsSet;
    if (local_a8.bIsSet != false) {
      TDynamicVector<UE::Math::TVector<float>,512>::TDynamicVector<UE::Math::TVector<float>,512>
                (&local_a8.TypedValue,&(param_1->VertexColors).TypedValue);
    }
    pTVar9 = &local_a8;
    bVar6 = true;
    bVar11 = false;
  }
  else {
    local_68.bIsSet = false;
    pTVar9 = (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *)
             (local_70 + 8);
    bVar6 = false;
    bVar11 = true;
  }
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
            (&this->VertexColors,pTVar9);
  if (((bVar11) && (local_68.bIsSet != false)) &&
     (TDynamicVector<UE::Math::TVector<float>,512>::Empty
                ((TDynamicVector<UE::Math::TVector<float>,512> *)(local_70 + 8),0),
     local_68.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.TypedValue.Blocks.AllocatorInstance.Data);
  }
  if (((bVar6) && (local_a8.bIsSet != false)) &&
     (TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_a8.TypedValue,0),
     local_a8.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.TypedValue.Blocks.AllocatorInstance.Data);
  }
  if (param_4) {
    local_70[0] = (param_1->VertexUVs).bIsSet;
    if ((bool)local_70[0] != false) {
      TDynamicVector<UE::Math::TVector2<float>,512>::TDynamicVector<UE::Math::TVector2<float>,512>
                (&local_88,&(param_1->VertexUVs).TypedValue);
    }
    pTVar10 = &local_88;
    bVar6 = true;
    bVar11 = false;
  }
  else {
    local_30 = '\0';
    pTVar10 = &local_48;
    bVar6 = false;
    bVar11 = true;
  }
  this_00 = &this->VertexUVs;
  if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *)pTVar10 != this_00)
  {
    bVar3 = (this->VertexUVs).bIsSet;
    if ((char)pTVar10[1].CurBlock == '\0') {
      if (bVar3 != false) {
        TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this_00->TypedValue,0);
        pFVar4 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (this->VertexUVs).bIsSet = false;
      }
    }
    else {
      if (bVar3 != false) {
        TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this_00->TypedValue,0);
        pFVar4 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      TDynamicVector<UE::Math::TVector2<float>,512>::TDynamicVector<UE::Math::TVector2<float>,512>
                (&this_00->TypedValue,pTVar10);
      (this->VertexUVs).bIsSet = true;
    }
  }
  if (((bVar11) && (local_30 != '\0')) &&
     (TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_48,0),
     local_48.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Blocks.AllocatorInstance.Data);
  }
  if (((bVar6) && (local_70[0] != '\0')) &&
     (TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_88,0),
     local_88.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<unsigned_short,512>::operator=
            (&(this->VertexRefCounts).RefCounts,&(param_1->VertexRefCounts).RefCounts);
  TDynamicVector<int,512>::operator=
            (&(this->VertexRefCounts).FreeIndices,&(param_1->VertexRefCounts).FreeIndices);
  (this->VertexRefCounts).UsedCount = (param_1->VertexRefCounts).UsedCount;
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).ListHeads,&(param_1->VertexEdgeLists).ListHeads);
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).ListBlocks,&(param_1->VertexEdgeLists).ListBlocks);
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).FreeBlocks,&(param_1->VertexEdgeLists).FreeBlocks);
  (this->VertexEdgeLists).AllocatedCount = (param_1->VertexEdgeLists).AllocatedCount;
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).LinkedListElements,
             &(param_1->VertexEdgeLists).LinkedListElements);
  (this->VertexEdgeLists).FreeHeadIndex = (param_1->VertexEdgeLists).FreeHeadIndex;
  TDynamicVector<UE::Geometry::FIndex3i,512>::operator=(&this->Triangles,&param_1->Triangles);
  TDynamicVector<UE::Geometry::FIndex3i,512>::operator=
            (&this->TriangleEdges,&param_1->TriangleEdges);
  TDynamicVector<unsigned_short,512>::operator=
            (&(this->TriangleRefCounts).RefCounts,&(param_1->TriangleRefCounts).RefCounts);
  TDynamicVector<int,512>::operator=
            (&(this->TriangleRefCounts).FreeIndices,&(param_1->TriangleRefCounts).FreeIndices);
  this_01 = &this->TriangleGroups;
  (this->TriangleRefCounts).UsedCount = (param_1->TriangleRefCounts).UsedCount;
  if (&param_1->TriangleGroups != this_01) {
    bVar11 = (this->TriangleGroups).bIsSet;
    if ((param_1->TriangleGroups).bIsSet == false) {
      if (bVar11 != false) {
        TDynamicVector<int,512>::Empty(&this_01->TypedValue,0);
        pFVar4 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (this->TriangleGroups).bIsSet = false;
      }
    }
    else {
      if (bVar11 != false) {
        TDynamicVector<int,512>::Empty(&this_01->TypedValue,0);
        pFVar4 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      TDynamicVector<int,512>::TDynamicVector<int,512>
                (&this_01->TypedValue,&(param_1->TriangleGroups).TypedValue);
      (this->TriangleGroups).bIsSet = true;
    }
  }
  this->GroupIDCounter = param_1->GroupIDCounter;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::operator=(&this->Edges,&param_1->Edges);
  TDynamicVector<unsigned_short,512>::operator=
            (&(this->EdgeRefCounts).RefCounts,&(param_1->EdgeRefCounts).RefCounts);
  TDynamicVector<int,512>::operator=
            (&(this->EdgeRefCounts).FreeIndices,&(param_1->EdgeRefCounts).FreeIndices);
  (this->EdgeRefCounts).UsedCount = (param_1->EdgeRefCounts).UsedCount;
  if ((param_5) && ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0)) {
    EnableAttributes(this);
    FDynamicMeshAttributeSet::Copy((this->AttributeSet).Ptr,(param_1->AttributeSet).Ptr);
  }
  else {
    pFVar5 = (this->AttributeSet).Ptr;
    (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  uVar7 = FChangeStamp::GetValue(&param_1->ChangeStampShape);
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar11 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar11) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar11) {
      FMutex::LockSlow(pFVar1);
    }
    (this->ChangeStampShape).Value = uVar7;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  uVar7 = FChangeStamp::GetValue(&param_1->ChangeStampTopology);
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar11 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar11) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar11) {
      FMutex::LockSlow(pFVar1);
    }
    (this->ChangeStampTopology).Value = uVar7;
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return;
}

// Copy @ 143499020

bool __thiscall UE::Geometry::FDynamicMesh3::Copy(FDynamicMesh3 *this,FMeshShapeGenerator *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  FDynamicMeshAttributeSet *pFVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  TDynamicMeshOverlay<float,2> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  TVector2<float>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  Clear(this);
  EnableTriangleGroups(this,0);
  lVar12 = (longlong)(param_1->Vertices).ArrayNum;
  uVar14 = 0;
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < (param_1->Vertices).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar3 = (param_1->Vertices).AllocatorInstance.Data;
      local_40 = 0;
      local_3e = 0;
      pFVar1 = pFVar3 + lVar13;
      local_78._s_0.X = (double)*(undefined8 *)pFVar1;
      local_78._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_78._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar13 + 0x10);
      local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      AppendVertex(this,(FVertexInfo *)&local_78._s_0);
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar2 = (param_1->Triangles).ArrayNum;
  if (((param_1->UVs).ArrayNum < 1) && ((param_1->Normals).ArrayNum < 1)) {
    uVar14 = 0;
    if ((param_1->TrianglePolygonIDs).ArrayNum == 0) {
      if (0 < iVar2) {
        lVar12 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar14 < (param_1->Triangles).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar9 = AppendTriangle(this,(FIndex3i *)
                                      ((param_1->Triangles).AllocatorInstance.Data + lVar12),0);
          if ((uVar9 != uVar14) &&
             (bVar6 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3119874908218195766>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3.cpp"
                                 ,0xca,"tid == i"), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + 0xc;
        } while ((int)uVar14 < iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < (param_1->TrianglePolygonIDs).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar11 = *(int *)((param_1->TrianglePolygonIDs).AllocatorInstance.Data + lVar12 * 4);
        uVar9 = 0;
        if ((int)uVar14 < (param_1->Triangles).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar9 = AppendTriangle(this,(FIndex3i *)
                                    ((param_1->Triangles).AllocatorInstance.Data +
                                    (longlong)(int)uVar14 * 0xc),iVar11 + 1);
        if ((uVar9 != uVar14) &&
           (bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3119874908218195774>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3.cpp"
                               ,0xc2,"tid == i"), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar2);
    }
  }
  else {
    uVar14 = 0;
    if (0 < iVar2) {
      lVar12 = 0;
      bVar6 = true;
      do {
        iVar11 = (param_1->TrianglePolygonIDs).ArrayNum;
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        else {
          uVar9 = 0;
          if ((int)uVar14 < iVar11) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar11 = *(int *)((param_1->TrianglePolygonIDs).AllocatorInstance.Data + lVar12 * 4) + 1;
        }
        uVar9 = 0;
        if ((int)uVar14 < (param_1->Triangles).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar9 = AppendTriangle(this,(FIndex3i *)
                                    ((param_1->Triangles).AllocatorInstance.Data +
                                    (longlong)(int)uVar14 * 0xc),iVar11);
        bVar8 = false;
        if (uVar14 == uVar9) {
          bVar8 = bVar6;
        }
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 1;
        bVar6 = bVar8;
      } while (lVar12 < iVar2);
      if (!bVar8) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3119874908218195802>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3.cpp"
                           ,0xa6,"bSuccess");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        goto LAB_14349965d;
      }
    }
    EnableAttributes(this);
    pFVar4 = (this->AttributeSet).Ptr;
    pFVar10 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar4;
    }
    if ((pFVar10->UVLayers).Array.ArrayNum < 1) {
      this_00 = (TDynamicMeshOverlay<float,2> *)0x0;
    }
    else {
      this_00 = *(TDynamicMeshOverlay<float,2> **)(pFVar10->UVLayers).Array.AllocatorInstance.Data;
    }
    pFVar10 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar4;
    }
    if ((pFVar10->NormalLayers).Array.ArrayNum < 1) {
      this_01 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    else {
      this_01 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar10->NormalLayers).Array.AllocatorInstance.Data;
    }
    iVar11 = (param_1->UVs).ArrayNum;
    uVar14 = 0;
    if (0 < iVar11) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < (param_1->UVs).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TDynamicMeshOverlay<float,2>::AppendElement
                  (this_00,(float *)((param_1->UVs).AllocatorInstance.Data + lVar12 * 8));
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 1;
      } while ((int)uVar14 < iVar11);
    }
    iVar11 = (param_1->Normals).ArrayNum;
    uVar14 = 0;
    if (0 < iVar11) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < (param_1->Normals).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TDynamicMeshOverlay<float,3>::AppendElement
                  (this_01,(float *)((param_1->Normals).AllocatorInstance.Data + lVar12));
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 0xc;
      } while ((int)uVar14 < iVar11);
    }
    uVar14 = 0;
    if (0 < iVar2) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < (param_1->TriangleUVs).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TDynamicMeshOverlay<float,2>::SetTriangle
                  (this_00,uVar14,
                   (FIndex3i *)((param_1->TriangleUVs).AllocatorInstance.Data + lVar12),true);
        uVar9 = 0;
        if ((int)uVar14 < (param_1->TriangleNormals).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TDynamicMeshOverlay<float,3>::SetTriangle
                  (this_01,uVar14,
                   (FIndex3i *)((param_1->TriangleNormals).AllocatorInstance.Data + lVar12),true);
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 0xc;
      } while ((int)uVar14 < iVar2);
    }
  }
LAB_14349965d:
  return (this->TriangleRefCounts).UsedCount == iVar2;
}

// DiscardAttributes @ 1434b12d0

void __thiscall UE::Geometry::FDynamicMesh3::DiscardAttributes(FDynamicMesh3 *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  
  pFVar1 = (this->AttributeSet).Ptr;
  (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434b12f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DiscardTriangleGroups @ 1434b1470

void __thiscall UE::Geometry::FDynamicMesh3::DiscardTriangleGroups(FDynamicMesh3 *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->TriangleGroups).bIsSet != false) {
    TDynamicVector<int,512>::Empty(&(this->TriangleGroups).TypedValue,0);
    pFVar1 = (this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TriangleGroups).bIsSet = false;
    this->GroupIDCounter = 0;
    return;
  }
  this->GroupIDCounter = 0;
  return;
}

// DiscardVertexColors @ 1434b14e0

void __thiscall UE::Geometry::FDynamicMesh3::DiscardVertexColors(FDynamicMesh3 *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->VertexColors).bIsSet != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexColors).TypedValue,0);
    pFVar1 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->VertexColors).bIsSet = false;
  }
  return;
}

// DiscardVertexNormals @ 1434b1520

void __thiscall UE::Geometry::FDynamicMesh3::DiscardVertexNormals(FDynamicMesh3 *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->VertexNormals).bIsSet != false) {
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexNormals).TypedValue,0);
    pFVar1 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->VertexNormals).bIsSet = false;
  }
  return;
}

// DiscardVertexUVs @ 1434b1560

void __thiscall UE::Geometry::FDynamicMesh3::DiscardVertexUVs(FDynamicMesh3 *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->VertexUVs).bIsSet != false) {
    TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&(this->VertexUVs).TypedValue,0);
    pFVar1 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->VertexUVs).bIsSet = false;
  }
  return;
}

// EdgeHasTriangle @ 1434b16f0

bool __thiscall
UE::Geometry::FDynamicMesh3::EdgeHasTriangle(FDynamicMesh3 *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) + 8
           + (ulonglong)(param_1 & 0x1ff) * 0x10);
  if (((int)uVar1 != param_2) && ((int)((ulonglong)uVar1 >> 0x20) != param_2)) {
    return false;
  }
  return true;
}

// EnableAttributes @ 1434b25e0

void __thiscall UE::Geometry::FDynamicMesh3::EnableAttributes(FDynamicMesh3 *this)

{
  int *piVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  longlong lVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  FDynamicMeshAttributeSet *local_res18;
  longlong local_78;
  FScriptContainerElement *local_70;
  int *piStack_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int *piStack_50;
  undefined8 local_48;
  
  pTVar2 = &this->AttributeSet;
  if (pTVar2->Ptr != (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  pFVar7 = ::operator_new(0x1a8);
  if (pFVar7 == (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = (FDynamicMeshAttributeSet *)0x0;
  }
  else {
    pFVar7 = FDynamicMeshAttributeSet::FDynamicMeshAttributeSet(pFVar7,this);
  }
  if (pTVar2 == (TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                 *)&local_78) {
    if (pFVar7 == (FDynamicMeshAttributeSet *)0x0) goto LAB_1434b2665;
    puVar8 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar5 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar7;
    if (pFVar5 == (FDynamicMeshAttributeSet *)0x0) goto LAB_1434b2665;
    puVar8 = (undefined8 *)pFVar5->_padding_;
    pFVar7 = pFVar5;
  }
  (*(code *)*puVar8)(pFVar7,1);
LAB_1434b2665:
  local_res18 = pTVar2->Ptr;
  iVar10 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  pFVar9 = (local_res18->UVLayers).Array.AllocatorInstance.Data;
  piVar1 = &(local_res18->UVLayers).Array.ArrayNum;
  iVar4 = *piVar1;
  local_60 = CONCAT44(local_60._4_4_,iVar4);
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  local_48 = local_60;
  local_70 = pFVar9;
  piStack_68 = piVar1;
  local_58 = pFVar9;
  piStack_50 = piVar1;
  while( true ) {
    local_res10 = pFVar9;
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar6 = *(longlong *)local_res10;
    TDynamicVector<int,512>::Resize((TDynamicVector<int,512> *)(lVar6 + 0x70),iVar10 * 3);
    TDynamicVector<int,512>::Fill((TDynamicVector<int,512> *)(lVar6 + 0x70),&InvalidID);
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = (local_res18->NormalLayers).Array.ArrayNum;
  piVar1 = &(local_res18->NormalLayers).Array.ArrayNum;
  local_48 = CONCAT44(local_48._4_4_,iVar4);
  pFVar9 = (local_res18->NormalLayers).Array.AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  local_60 = local_48;
  local_70 = pFVar9;
  piStack_68 = piVar1;
  local_58 = pFVar9;
  piStack_50 = piVar1;
  while( true ) {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar6 = *(longlong *)pFVar9;
    TDynamicVector<int,512>::Resize((TDynamicVector<int,512> *)(lVar6 + 0x70),iVar10 * 3);
    TDynamicVector<int,512>::Fill((TDynamicVector<int,512> *)(lVar6 + 0x70),&InvalidID);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// EnableMatchingAttributes @ 1434b2ea0

void __thiscall
UE::Geometry::FDynamicMesh3::EnableMatchingAttributes
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  char cVar5;
  TVector2<float>_u_0 local_res8;
  TVector<float>_u_0 local_28;
  
  if ((param_2) || (param_3)) {
    cVar5 = (param_1->VertexNormals).bIsSet;
    if ((param_2) || ((bool)cVar5 == false)) goto LAB_1434b2eef;
LAB_1434b2f17:
    local_28._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_28._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    EnableVertexNormals(this,(TVector<float> *)&local_28._s_0);
  }
  else {
    if (((param_1->VertexNormals).bIsSet != false) || ((this->VertexNormals).bIsSet != false))
    goto LAB_1434b2f17;
    cVar5 = '\0';
LAB_1434b2eef:
    if ((this->VertexNormals).bIsSet != false) {
      TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexNormals).TypedValue,0);
      pFVar2 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->VertexNormals).bIsSet = false;
    }
    if (cVar5 != '\0') goto LAB_1434b2f17;
  }
  if ((param_2) || (param_3)) {
    cVar5 = (param_1->VertexColors).bIsSet;
    if ((param_2) || ((bool)cVar5 == false)) goto LAB_1434b2f6e;
LAB_1434b2f9f:
    local_28._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_28._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    EnableVertexColors(this,(TVector<float> *)&local_28._s_0);
  }
  else {
    if (((param_1->VertexColors).bIsSet != false) || ((this->VertexColors).bIsSet != false))
    goto LAB_1434b2f9f;
    cVar5 = '\0';
LAB_1434b2f6e:
    if ((this->VertexColors).bIsSet != false) {
      TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexColors).TypedValue,0);
      pFVar2 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->VertexColors).bIsSet = false;
    }
    if (cVar5 != '\0') goto LAB_1434b2f9f;
  }
  if ((param_2) || (param_3)) {
    cVar5 = (param_1->VertexUVs).bIsSet;
    if ((param_2) || ((bool)cVar5 == false)) goto LAB_1434b2ff6;
LAB_1434b302a:
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    EnableVertexUVs(this,(TVector2<float> *)&local_res8._s_0);
  }
  else {
    if (((param_1->VertexUVs).bIsSet != false) || ((this->VertexUVs).bIsSet != false))
    goto LAB_1434b302a;
    cVar5 = '\0';
LAB_1434b2ff6:
    if ((this->VertexUVs).bIsSet != false) {
      TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&(this->VertexUVs).TypedValue,0);
      pFVar2 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this->VertexUVs).bIsSet = false;
    }
    if (cVar5 != '\0') goto LAB_1434b302a;
  }
  if ((param_2) || (param_3)) {
    bVar1 = (param_1->TriangleGroups).bIsSet;
    if (((!param_2) && (bVar1 != false)) || (DiscardTriangleGroups(this), bVar1 != false))
    goto LAB_1434b3087;
LAB_1434b3091:
    if ((!param_2) && (!param_3)) goto LAB_1434b309b;
    pFVar3 = (param_1->AttributeSet).Ptr;
    if ((param_2) || (pFVar3 == (FDynamicMeshAttributeSet *)0x0)) {
      pFVar4 = (this->AttributeSet).Ptr;
      (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
      if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) goto LAB_1434b3116;
    }
  }
  else {
    if (((param_1->TriangleGroups).bIsSet != false) || ((this->TriangleGroups).bIsSet != false)) {
LAB_1434b3087:
      EnableTriangleGroups(this,0);
      goto LAB_1434b3091;
    }
    DiscardTriangleGroups(this);
LAB_1434b309b:
    if (((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
       ((this->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0)) {
      (this->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
      goto LAB_1434b3116;
    }
  }
  EnableAttributes(this);
LAB_1434b3116:
  pFVar3 = (this->AttributeSet).Ptr;
  if ((pFVar3 != (FDynamicMeshAttributeSet *)0x0) &&
     (pFVar4 = (param_1->AttributeSet).Ptr, pFVar4 != (FDynamicMeshAttributeSet *)0x0)) {
    FDynamicMeshAttributeSet::EnableMatchingAttributes(pFVar3,pFVar4,param_2,param_3);
  }
  return;
}

// EnableMeshComponents @ 1434b5430

void __thiscall UE::Geometry::FDynamicMesh3::EnableMeshComponents(FDynamicMesh3 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  TVector2<float>_u_0 local_res18 [2];
  TVector<float>_u_0 local_18;
  
  if ((param_1 & 8U) == 0) {
    DiscardTriangleGroups(this);
  }
  else {
    EnableTriangleGroups(this,0);
  }
  if ((param_1 & 2U) == 0) {
    if ((this->VertexColors).bIsSet != false) {
      TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexColors).TypedValue,0);
      pFVar1 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->VertexColors).bIsSet = false;
    }
  }
  else {
    local_18._0_8_ = 0x3f8000003f800000;
    local_18._s_0.Z = 1.0;
    EnableVertexColors(this,(TVector<float> *)&local_18._s_0);
  }
  if ((param_1 & 1U) == 0) {
    if ((this->VertexNormals).bIsSet != false) {
      TDynamicVector<UE::Math::TVector<float>,512>::Empty(&(this->VertexNormals).TypedValue,0);
      pFVar1 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->VertexNormals).bIsSet = false;
    }
  }
  else {
    local_18._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
    local_18._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    EnableVertexNormals(this,(TVector<float> *)&local_18._s_0);
  }
  if ((param_1 & 4U) != 0) {
    local_res18[0] = (TVector2<float>_u_0)0x0;
    EnableVertexUVs(this,(TVector2<float> *)&local_res18[0]._s_0);
    return;
  }
  if ((this->VertexUVs).bIsSet != false) {
    TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&(this->VertexUVs).TypedValue,0);
    pFVar1 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->VertexUVs).bIsSet = false;
  }
  return;
}

// EnableTriangleGroups @ 1434b56d0

void __thiscall UE::Geometry::FDynamicMesh3::EnableTriangleGroups(FDynamicMesh3 *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  TDynamicVector<int,512> local_28;
  
  if ((this->TriangleGroups).bIsSet == false) {
    uVar5 = 0;
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_28);
    TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator=(&this->TriangleGroups,&local_28);
    TDynamicVector<int,512>::Empty(&local_28,0);
    if (local_28.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Blocks.AllocatorInstance.Data);
    }
    uVar6 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->TriangleRefCounts).RefCounts.CurBlockUsed;
    if (((this->TriangleGroups).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TDynamicVector<int,512>::Resize(&(this->TriangleGroups).TypedValue,uVar6);
    uVar7 = uVar5;
    if (0 < (int)uVar6) {
      do {
        if (((this->TriangleGroups).bIsSet == false) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = uVar5 >> 9;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(int *)(*(longlong *)
                  ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + uVar3 * 8) +
                (ulonglong)((uint)uVar7 & 0x1ff) * 4) = param_1;
        uVar7 = uVar7 + 1;
      } while ((int)uVar4 < (int)uVar6);
    }
    this->GroupIDCounter = param_1 + 1;
  }
  return;
}

// EnableVertexColors @ 1434b5820

void __thiscall
UE::Geometry::FDynamicMesh3::EnableVertexColors(FDynamicMesh3 *this,TVector<float> *param_1)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  TDynamicVector<UE::Math::TVector<float>,512> local_38;
  
  if ((this->VertexColors).bIsSet == false) {
    uVar8 = 0;
    local_38.CurBlock = 0;
    local_38.CurBlockUsed = 0;
    local_38.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Blocks.ArrayNum = 0;
    local_38.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_38);
    TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
              (&this->VertexColors,&local_38);
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_38,0);
    if (local_38.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Blocks.AllocatorInstance.Data);
    }
    uVar9 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed;
    if (((this->VertexColors).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TDynamicVector<UE::Math::TVector<float>,512>::Resize(&(this->VertexColors).TypedValue,uVar9);
    uVar11 = uVar8;
    if (0 < (int)uVar9) {
      do {
        uVar1 = *(undefined8 *)&param_1->field0_0x0;
        fVar2 = (param_1->field0_0x0)._s_0.Z;
        if (((this->VertexColors).bIsSet == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = (ulonglong)((uint)uVar11 & 0x1ff);
        uVar10 = uVar8 >> 9;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        lVar3 = *(longlong *)
                 ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data + uVar10 * 8);
        *(undefined8 *)(lVar3 + uVar6 * 0xc) = uVar1;
        *(float *)(lVar3 + 8 + uVar6 * 0xc) = fVar2;
        uVar11 = uVar11 + 1;
      } while ((int)uVar7 < (int)uVar9);
    }
  }
  return;
}

// EnableVertexNormals @ 1434b5980

void __thiscall
UE::Geometry::FDynamicMesh3::EnableVertexNormals(FDynamicMesh3 *this,TVector<float> *param_1)

{
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this_00;
  float fVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  TDynamicVector<UE::Math::TVector<float>,512> local_28;
  
  if ((this->VertexNormals).bIsSet == false) {
    uVar7 = 0;
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_28);
    uVar6 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed;
    TDynamicVector<UE::Math::TVector<float>,512>::Resize(&local_28,uVar6);
    uVar9 = uVar7;
    if (0 < (int)uVar6) {
      do {
        fVar1 = (param_1->field0_0x0)._s_0.Z;
        uVar4 = (ulonglong)((uint)uVar9 & 0x1ff);
        uVar5 = uVar7 >> 9;
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        lVar2 = *(longlong *)(local_28.Blocks.AllocatorInstance.Data + uVar5 * 8);
        *(undefined8 *)(lVar2 + uVar4 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
        *(float *)(lVar2 + 8 + uVar4 * 0xc) = fVar1;
        uVar9 = uVar9 + 1;
      } while ((int)uVar8 < (int)uVar6);
    }
    this_00 = &this->VertexNormals;
    if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *)&local_28 !=
        this_00) {
      if ((this->VertexNormals).bIsSet != false) {
        TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this_00->TypedValue,0);
        pFVar3 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      (this_00->TypedValue).CurBlock = local_28.CurBlock;
      (this->VertexNormals).TypedValue.CurBlockUsed = local_28.CurBlockUsed;
      (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data =
           local_28.Blocks.AllocatorInstance.Data;
      (this->VertexNormals).TypedValue.Blocks.ArrayNum = local_28.Blocks.ArrayNum;
      (this->VertexNormals).TypedValue.Blocks.ArrayMax = local_28.Blocks.ArrayMax;
      local_28.Blocks.ArrayNum = 0;
      local_28.Blocks.ArrayMax = 0;
      local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.CurBlock = 0;
      local_28.CurBlockUsed = 0;
      TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_28);
      (this->VertexNormals).bIsSet = true;
    }
    TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_28,0);
    if (local_28.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Blocks.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableVertexUVs @ 1434b5ac0

void __thiscall
UE::Geometry::FDynamicMesh3::EnableVertexUVs(FDynamicMesh3 *this,TVector2<float> *param_1)

{
  TVector2<float>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  TDynamicVector<UE::Math::TVector2<float>,512> local_38;
  
  if ((this->VertexUVs).bIsSet == false) {
    uVar5 = 0;
    local_38.CurBlock = 0;
    local_38.CurBlockUsed = 0;
    local_38.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Blocks.ArrayNum = 0;
    local_38.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_38);
    TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::operator=
              (&this->VertexUVs,&local_38);
    TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_38,0);
    if (local_38.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Blocks.AllocatorInstance.Data);
    }
    uVar8 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed;
    if (((this->VertexUVs).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TDynamicVector<UE::Math::TVector2<float>,512>::Resize(&(this->VertexUVs).TypedValue,uVar8);
    uVar7 = uVar5;
    if (0 < (int)uVar8) {
      do {
        TVar1 = param_1->field0_0x0;
        if (((this->VertexUVs).bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = (uint)uVar5;
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 1;
        ((TVector2<float>_u_0 *)
        (*(longlong *)
          ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + (uVar7 >> 9) * 8) +
        (ulonglong)(uVar4 & 0x1ff) * 8))->_s_0 = (TVector2<float>_u_0_s_0)TVar1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)uVar8);
    }
  }
  return;
}

// EndUnsafeTrianglesInsert @ 1434b66f0

void __thiscall UE::Geometry::FDynamicMesh3::EndUnsafeTrianglesInsert(FDynamicMesh3 *this)

{
  FRefCountVector::RebuildFreeList(&this->TriangleRefCounts);
  return;
}

// EndUnsafeVerticesInsert @ 1434b6710

void __thiscall UE::Geometry::FDynamicMesh3::EndUnsafeVerticesInsert(FDynamicMesh3 *this)

{
  FRefCountVector::RebuildFreeList(&this->VertexRefCounts);
  return;
}

// EnumerateEdgeTriangles @ 1434b6720

void __thiscall
UE::Geometry::FDynamicMesh3::EnumerateEdgeTriangles
          (FDynamicMesh3 *this,int param_1,TFunctionRef<void___cdecl(int)> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int local_res10 [6];
  int iStack_c;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    uVar5 = (ulonglong)(param_1 & 0x1ff);
    lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar2)
                           + uVar5 * 2) - 1U) < 0xfffe) {
      lVar3 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar2);
      puVar1 = (undefined8 *)(lVar3 + uVar5 * 0x10);
      uVar4 = puVar1[1];
      local_res10[0] = (int)*(undefined8 *)(lVar3 + 8 + uVar5 * 0x10);
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10,lVar2,this,*puVar1);
      iStack_c = (int)((ulonglong)uVar4 >> 0x20);
      if (iStack_c != -1) {
        local_res10[0] = iStack_c;
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
      }
    }
  }
  return;
}

// EnumerateVertexTriangles @ 1434b85b0

void __thiscall
UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
          (FDynamicMesh3 *this,int param_1,TFunctionRef<void___cdecl(int)> *param_2)

{
  int local_res10 [6];
  <lambda_1> local_28;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_28.VertexID = local_res10;
    local_res10[0] = param_1;
    local_28.__this = this;
    local_28.ApplyFunc = param_2;
    FSmallListSet::
    Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles_::__l2::<lambda_1>_>
              (&this->VertexEdgeLists,param_1,&local_28);
  }
  return;
}

// FindEdge @ 1434b8e50

int __thiscall UE::Geometry::FDynamicMesh3::FindEdge(FDynamicMesh3 *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_res10 [6];
  <lambda_1> local_18;
  
  if (param_1 != param_2) {
    uVar2 = param_2;
    local_res10[0] = param_1;
    if (param_1 < param_2) {
      uVar2 = param_1;
      local_res10[0] = param_2;
    }
    if (((-1 < (int)uVar2) &&
        ((int)uVar2 <
         (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) <
        0xfffe)) {
      local_18.vMax = local_res10;
      local_18.__this = this;
      iVar1 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdge_::__l13::<lambda_1>_>
                        (&this->VertexEdgeLists,uVar2,&local_18,-1);
      return iVar1;
    }
  }
  return -1;
}

// FindEdgeFromTri @ 1434b8ef0

int __thiscall
UE::Geometry::FDynamicMesh3::FindEdgeFromTri
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  lVar1 = (ulonglong)((uint)param_3 >> 9) * 8;
  lVar2 = (ulonglong)(param_3 & 0x1ff) * 0xc;
  piVar7 = (int *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar1) + lVar2);
  iVar3 = piVar7[1];
  piVar8 = (int *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1) +
                  lVar2);
  iVar4 = *piVar7;
  iVar5 = iVar3;
  if (((param_1 == iVar4) || (iVar5 = iVar4, param_1 == iVar3)) && (param_2 == iVar5)) {
    return *piVar8;
  }
  iVar5 = piVar7[2];
  iVar6 = iVar4;
  if (param_1 == iVar3) {
    if (param_2 == iVar5) {
LAB_1434b8f7d:
      return piVar8[1];
    }
    if (param_1 == iVar5) goto LAB_1434b8f6c;
  }
  else if (param_1 == iVar5) {
    if (param_2 == iVar3) goto LAB_1434b8f7d;
    goto LAB_1434b8f6c;
  }
  iVar6 = iVar5;
  if (param_1 != iVar4) {
    return -1;
  }
LAB_1434b8f6c:
  if (param_2 != iVar6) {
    return -1;
  }
  return piVar8[2];
}

// FindEdgeFromTriPair @ 1434b8fb0

int __thiscall
UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair(FDynamicMesh3 *this,int param_1,int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  
  if ((-1 < param_1) &&
     (iVar5 = (this->TriangleRefCounts).RefCounts.CurBlockUsed +
              (this->TriangleRefCounts).RefCounts.CurBlock * 0x200, param_1 < iVar5)) {
    pFVar2 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    if (((ushort)(*(short *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (((-1 < param_2 && (param_2 < iVar5)) &&
        ((ushort)(*(short *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
      lVar4 = 0;
      puVar6 = (uint *)(*(longlong *)
                         ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc);
      do {
        uVar1 = *puVar6;
        uVar3 = *(undefined8 *)
                 (*(longlong *)
                   ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) + 8 +
                 (ulonglong)(uVar1 & 0x1ff) * 0x10);
        iVar5 = (int)uVar3;
        if (iVar5 == param_1) {
          iVar5 = (int)((ulonglong)uVar3 >> 0x20);
        }
        if (iVar5 == param_2) {
          return uVar1;
        }
        lVar4 = lVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar4 < 3);
    }
  }
  return -1;
}

// FindEdgeInternal @ 1434b90e0

int __thiscall
UE::Geometry::FDynamicMesh3::FindEdgeInternal
          (FDynamicMesh3 *this,int param_1,int param_2,bool *param_3)

{
  int iVar1;
  int local_res10 [6];
  <lambda_1> local_28;
  
  iVar1 = param_2;
  local_res10[0] = param_1;
  if (param_1 < param_2) {
    iVar1 = param_1;
    local_res10[0] = param_2;
  }
  local_28.vMax = local_res10;
  local_28.__this = this;
  local_28.bIsBoundary = param_3;
  iVar1 = FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdgeInternal_::__l2::<lambda_1>_>
                    (&this->VertexEdgeLists,iVar1,&local_28,-1);
  return iVar1;
}

// FindTriangle @ 1434b97e0

int __thiscall
UE::Geometry::FDynamicMesh3::FindTriangle(FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = FindEdge(this,param_1,param_2);
  if (uVar5 == 0xffffffff) {
    return -1;
  }
  pFVar1 = (this->Triangles).Blocks.AllocatorInstance.Data;
  uVar2 = *(ulonglong *)
           (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)
            + 8 + (ulonglong)(uVar5 & 0x1ff) * 0x10);
  uVar7 = (ulonglong)((uint)uVar2 & 0x1ff);
  lVar3 = *(longlong *)(pFVar1 + ((uVar2 & 0xffffffff) >> 9) * 8);
  uVar8 = uVar2;
  if (((*(int *)(lVar3 + uVar7 * 0xc) != param_3) && (*(int *)(lVar3 + 4 + uVar7 * 0xc) != param_3))
     && (*(int *)(lVar3 + 8 + uVar7 * 0xc) != param_3)) {
    uVar8 = uVar2 >> 0x20;
    uVar5 = (uint)(uVar2 >> 0x20);
    if (uVar5 == 0xffffffff) {
      return -1;
    }
    lVar4 = *(longlong *)(pFVar1 + (uVar2 >> 0x29) * 8);
    lVar3 = lVar4 + (ulonglong)(uVar5 & 0x1ff) * 0xc;
    if ((*(int *)(lVar4 + (ulonglong)(uVar5 & 0x1ff) * 0xc) != param_3) &&
       (*(int *)(lVar3 + 4) != param_3)) {
      uVar6 = 0xffffffff;
      if (*(int *)(lVar3 + 8) == param_3) {
        uVar6 = uVar5;
      }
      return uVar6;
    }
  }
  return (int)uVar8;
}

// FindTriangleEdge @ 1434b98c0

int __thiscall
UE::Geometry::FDynamicMesh3::FindTriangleEdge
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  uVar9 = (ulonglong)((uint)param_1 >> 9);
  lVar1 = uVar8 * 0xc;
  lVar4 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar9 * 8);
  uVar2 = *(undefined8 *)(lVar4 + lVar1);
  iVar3 = *(int *)(lVar4 + 8 + lVar1);
  iVar7 = (int)uVar2;
  iVar6 = (int)((ulonglong)uVar2 >> 0x20);
  iVar5 = param_3;
  if (((iVar7 == param_2) || (iVar5 = param_2, iVar7 == param_3)) && (iVar6 == iVar5)) {
    return *(int *)(lVar1 + *(longlong *)
                             ((this->TriangleEdges).Blocks.AllocatorInstance.Data + uVar9 * 8));
  }
  iVar5 = param_3;
  if (((iVar6 == param_2) || (iVar5 = param_2, iVar6 == param_3)) && (iVar3 == iVar5)) {
    return *(int *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + uVar9 * 8) +
                    4 + uVar8 * 0xc);
  }
  iVar5 = param_3;
  if (((iVar3 == param_2) || (iVar5 = param_2, iVar3 == param_3)) && (iVar7 == iVar5)) {
    return *(int *)(*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + uVar9 * 8) +
                    8 + uVar8 * 0xc);
  }
  return -1;
}

// FlipEdge @ 1434b9b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::FlipEdge(FDynamicMesh3 *this,int param_1,FEdgeFlipInfo *param_2)

{
  short *psVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FIndex2i_u_0 FVar5;
  FIndex2i_u_0 FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  FIndex2i_u_0 local_res18;
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar18 = 0;
  local_68 = 0;
  uStack_54 = 0xffffffff;
  uStack_64 = (undefined4)___xmm_ffffffffffffffffffffffffffffffff;
  uStack_60 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
  uStack_5c = (undefined4)_UNK_15060db28;
  uStack_58 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
  *(longlong *)param_2 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
  *(ulonglong *)((longlong)&(param_2->OriginalVerts).field0_0x0 + 4) = CONCAT44(uStack_5c,uStack_60)
  ;
  *(ulonglong *)((longlong)&(param_2->OpposingVerts).field0_0x0 + 4) =
       CONCAT44(0xffffffff,uStack_58);
  (param_2->Triangles).field0_0x0._s_0.B = -1;
  if ((param_1 < 0) ||
     ((int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_1)) {
    return Failed_NotAnEdge;
  }
  uVar12 = (ulonglong)(param_1 & 0x1ff);
  local_88 = (ulonglong)((uint)param_1 >> 9) * 8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                    local_88) + uVar12 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar2 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_88);
  if (*(int *)(lVar2 + 0xc + uVar12 * 0x10) == -1) {
    return Failed_IsBoundaryEdge;
  }
  uVar17 = *(ulonglong *)(lVar2 + 8 + uVar12 * 0x10);
  iVar19 = 1;
  uVar14 = *(ulonglong *)(lVar2 + uVar12 * 0x10);
  pFVar3 = (this->Triangles).Blocks.AllocatorInstance.Data;
  local_80 = ((uVar17 & 0xffffffff) >> 9) * 8;
  uVar8 = (uint)uVar17;
  uVar15 = (uint)(uVar14 >> 0x20);
  local_70 = uVar17 >> 0x20;
  local_78 = (ulonglong)(uVar8 & 0x1ff) * 0xc;
  local_98 = (uint *)(*(longlong *)(pFVar3 + local_80) + local_78);
  local_b8 = local_98[2];
  uVar21 = (uint)(uVar17 >> 0x20);
  local_c0 = *(undefined8 *)local_98;
  local_90 = (uVar17 >> 0x29) * 8;
  local_a0 = (ulonglong)(uVar21 & 0x1ff) * 0xc;
  lVar2 = *(longlong *)(pFVar3 + local_90);
  local_b0 = *(undefined8 *)(lVar2 + local_a0);
  local_a8 = *(undefined4 *)(lVar2 + 8 + local_a0);
  uVar17 = uVar18;
  uVar20 = uVar18;
  do {
    uVar16 = *(uint *)((longlong)&local_c0 +
                      (longlong)
                      (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                                (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3) * 4);
    uVar9 = *(uint *)((longlong)&local_c0 + uVar17 * 4);
    uVar13 = uVar16;
    if ((((uint)uVar14 == uVar9) || (uVar13 = uVar9, (uint)uVar14 == uVar16)) && (uVar15 == uVar13))
    {
      uVar14 = (ulonglong)uVar9;
      iVar19 = (int)uVar20 + 2;
      local_res18._s_0.A =
           *(uint *)((longlong)&local_c0 +
                    (longlong)
                    (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                              (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU
                                    ) >> 0x1f)) * -3) * 4);
      goto LAB_1434b9d08;
    }
    uVar20 = (ulonglong)((int)uVar20 + 1);
    iVar19 = iVar19 + 1;
    uVar17 = uVar17 + 1;
  } while ((longlong)uVar17 < 3);
  local_res18._s_0.A = 0xffffffff;
  uVar16 = uVar15;
LAB_1434b9d08:
  iVar19 = 1;
  uVar17 = uVar18;
  while( true ) {
    uVar15 = *(uint *)((longlong)&local_b0 +
                      (longlong)
                      (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                                (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3) * 4);
    uVar9 = *(uint *)((longlong)&local_b0 + uVar18 * 4);
    uVar13 = (uint)uVar14;
    if (((uVar13 == uVar9) || (bVar7 = uVar13 == uVar15, uVar15 = uVar9, bVar7)) &&
       (uVar16 == uVar15)) break;
    uVar17 = (ulonglong)((int)uVar17 + 1);
    iVar19 = iVar19 + 1;
    uVar18 = uVar18 + 1;
    if (2 < (longlong)uVar18) {
      local_res18._s_0.B = 0xffffffff;
LAB_1434b9d8d:
      if ((local_res18._s_0.A == 0xffffffff) || (local_res18._s_0.B == 0xffffffff)) {
        return Failed_BrokenTopology;
      }
      iVar19 = FindEdge(this,local_res18._s_0.A,local_res18._s_0.B);
      if (iVar19 != -1) {
        return Failed_FlippedEdgeExists;
      }
      iVar19 = FindTriangleEdge(this,uVar8,uVar16,local_res18._s_0.A);
      uVar9 = FindTriangleEdge(this,uVar8,local_res18._s_0.A,uVar13);
      iVar10 = FindTriangleEdge(this,uVar21,uVar13,local_res18._s_0.B);
      uVar11 = FindTriangleEdge(this,uVar21,local_res18._s_0.B,uVar16);
      *local_98 = local_res18._s_0.A;
      local_98[1] = local_res18._s_0.B;
      local_98[2] = uVar16;
      lVar2 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + local_90);
      *(undefined4 *)(lVar2 + local_a0) = local_res18._s_0.B;
      *(undefined4 *)(lVar2 + 4 + local_a0) = local_res18._s_0.A;
      *(uint *)(lVar2 + 8 + local_a0) = uVar13;
      uVar15 = local_res18._s_0.B;
      if (local_res18._s_0.A <= local_res18._s_0.B) {
        uVar15 = local_res18._s_0.A;
      }
      *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_88) +
               uVar12 * 0x10) = uVar15;
      uVar15 = local_res18._s_0.A;
      if (local_res18._s_0.A <= local_res18._s_0.B) {
        uVar15 = local_res18._s_0.B;
      }
      *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_88) + 4 +
               uVar12 * 0x10) = uVar15;
      *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_88) + 8 +
               uVar12 * 0x10) = uVar8;
      *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_88) + 0xc +
               uVar12 * 0x10) = uVar21;
      uVar18 = (ulonglong)(uVar9 & 0x1ff);
      lVar2 = *(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      uVar15 = *(uint *)(lVar2 + 0xc + uVar18 * 0x10);
      if (*(uint *)(lVar2 + 8 + uVar18 * 0x10) == uVar8) {
        if (uVar21 == 0xffffffff) {
          *(uint *)(lVar2 + 8 + uVar18 * 0x10) = uVar15;
          *(undefined4 *)(lVar2 + 0xc + uVar18 * 0x10) = 0xffffffff;
        }
        else {
          *(uint *)(lVar2 + 8 + uVar18 * 0x10) = uVar21;
        }
      }
      else {
        if (uVar15 != uVar8) {
          return Failed_UnrecoverableError;
        }
        *(uint *)(lVar2 + 0xc + uVar18 * 0x10) = uVar21;
      }
      uVar18 = (ulonglong)(uVar11 & 0x1ff);
      lVar2 = *(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      uVar15 = *(uint *)(lVar2 + 0xc + uVar18 * 0x10);
      if (*(uint *)(lVar2 + 8 + uVar18 * 0x10) == uVar21) {
        if (uVar8 == 0xffffffff) {
          *(uint *)(lVar2 + 8 + uVar18 * 0x10) = uVar15;
          *(undefined4 *)(lVar2 + 0xc + uVar18 * 0x10) = 0xffffffff;
        }
        else {
          *(uint *)(lVar2 + 8 + uVar18 * 0x10) = uVar8;
        }
      }
      else {
        if (uVar15 != uVar21) {
          return Failed_UnrecoverableError;
        }
        *(uint *)(lVar2 + 0xc + uVar18 * 0x10) = uVar8;
      }
      lVar2 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_80);
      *(int *)(lVar2 + local_78) = param_1;
      *(uint *)(lVar2 + 4 + local_78) = uVar11;
      *(int *)(lVar2 + 8 + local_78) = iVar19;
      lVar2 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_90);
      *(int *)(lVar2 + local_a0) = param_1;
      *(uint *)(lVar2 + 4 + local_a0) = uVar9;
      *(int *)(lVar2 + 8 + local_a0) = iVar10;
      bVar7 = FSmallListSet::Remove(&this->VertexEdgeLists,uVar13,param_1);
      if ((bVar7) && (bVar7 = FSmallListSet::Remove(&this->VertexEdgeLists,uVar16,param_1), bVar7))
      {
        FRefCountVector::Decrement(&this->VertexRefCounts,uVar13,1);
        FRefCountVector::Decrement(&this->VertexRefCounts,uVar16,1);
        bVar7 = IsVertex(this,uVar13);
        if ((bVar7) && (bVar7 = IsVertex(this,uVar16), bVar7)) {
          FSmallListSet::Insert(&this->VertexEdgeLists,local_res18._s_0.A,param_1);
          FSmallListSet::Insert(&this->VertexEdgeLists,local_res18._s_0.B,param_1);
          psVar1 = (short *)(*(longlong *)
                              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)local_res18._s_0.A >> 9) * 8) +
                            (ulonglong)(local_res18._s_0.A & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          FVar5._s_0.B = uVar16;
          FVar5._s_0.A = uVar13;
          psVar1 = (short *)(*(longlong *)
                              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)local_res18._s_0.B >> 9) * 8) +
                            (ulonglong)(local_res18._s_0.B & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          (param_2->OriginalVerts).field0_0x0 = FVar5;
          (param_2->OpposingVerts).field0_0x0 = local_res18;
          FVar6._s_0.B = (int)local_70;
          FVar6._s_0.A = uVar8;
          (param_2->Triangles).field0_0x0 = FVar6;
          param_2->EdgeID = param_1;
          pFVar4 = (this->AttributeSet).Ptr;
          if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
            (**(code **)(pFVar4->_padding_ + 0x40))();
          }
          UpdateChangeStamps(this,true,true);
          return Ok;
        }
      }
      return Failed_UnrecoverableError;
    }
  }
  iVar19 = (int)uVar17 + 2;
  local_res18._s_0.B =
       *(uint *)((longlong)&local_b0 +
                (longlong)
                (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                          (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3) * 4);
  goto LAB_1434b9d8d;
}

// FlipEdge @ 1434ba180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::FlipEdge
          (FDynamicMesh3 *this,int param_1,int param_2,FEdgeFlipInfo *param_3)

{
  int iVar1;
  EMeshResult EVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FindEdge(this,param_1,param_2);
  if (iVar1 == -1) {
    uStack_20 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
    uStack_1c = (undefined4)_UNK_15060db28;
    uStack_18 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
    *(longlong *)param_3 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
    *(ulonglong *)((longlong)&(param_3->OriginalVerts).field0_0x0 + 4) =
         CONCAT44(uStack_1c,uStack_20);
    *(ulonglong *)((longlong)&(param_3->OpposingVerts).field0_0x0 + 4) =
         CONCAT44(0xffffffff,uStack_18);
    (param_3->Triangles).field0_0x0._s_0.B = -1;
    return Failed_NotAnEdge;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434ba1f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(this->_padding_ + 0x40))(this,iVar1,param_3);
  return EVar2;
}

// GetBounds @ 1434be930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetBounds
          (FDynamicMesh3 *this,TAxisAlignedBox3<double> *__return_storage_ptr__,bool param_1)

{
  undefined4 *puVar1;
  double dVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_128 [32];
  FDynamicMesh3 *local_108;
  _RTL_CRITICAL_SECTION *p_Stack_100;
  undefined8 *local_f8;
  code *local_f0;
  FDynamicMesh3 **ppFStack_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  _RTL_CRITICAL_SECTION local_a8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->VertexRefCounts).UsedCount == 0) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  }
  else {
    uVar12 = (this->VertexRefCounts).RefCounts.CurBlockUsed;
    iVar11 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 + uVar12;
    local_d8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_d0 = _UNK_150a9e648;
    local_c8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_c0 = _UNK_150a9e6d8;
    local_b8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_b0 = _UNK_1508ffb58;
    if ((param_1) && (49999 < iVar11)) {
      InitializeCriticalSectionAndSpinCount(&local_a8,4000);
      p_Stack_100 = &local_a8;
      local_f8 = &local_d8;
      ppFStack_e8 = &local_108;
      local_f0 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::GetBounds'::__l14::<lambda_1>,void,int>
                 ::Call;
      local_108 = this;
      ParallelFor(iVar11 / 10000 + 1,(TFunctionRef<void___cdecl(int)> *)&local_f0,None);
      DeleteCriticalSection(&local_a8);
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_d8;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dStack_d0;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_c8;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_c0;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_b8;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_b0;
    }
    else {
      uVar10 = 0;
      if ((iVar11 != 0) &&
         ((pFVar4 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
          0xfffd < (ushort)(**(short **)pFVar4 - 1U) && (uVar10 = 1, 1 < iVar11)))) {
        do {
          sVar3 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                            (ulonglong)(uVar10 & 0x1ff) * 2);
          if ((sVar3 != 0) && (sVar3 != -1)) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar11);
      }
      pFVar4 = (this->Vertices).Blocks.AllocatorInstance.Data;
      lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8);
      dVar22 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
      uVar17 = *puVar1;
      uVar18 = puVar1[1];
      uVar19 = puVar1[2];
      uVar20 = puVar1[3];
      uVar12 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 + uVar12;
      uVar10 = 0;
      if (((uVar12 != 0) &&
          (pFVar6 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar10 = 0,
          0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar10 = 1, 1 < (int)uVar12)) {
        do {
          sVar3 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar10 >> 9) * 8) +
                            (ulonglong)(uVar10 & 0x1ff) * 2);
          if ((sVar3 != 0) && (sVar3 != -1)) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar12);
      }
      dVar25 = dVar22;
      uVar13 = uVar17;
      uVar14 = uVar18;
      uVar15 = uVar19;
      uVar16 = uVar20;
      if (uVar10 != uVar12) {
        uVar23 = SUB84(dVar22,0);
        uVar24 = (undefined4)((ulonglong)dVar22 >> 0x20);
        uVar26 = uVar17;
        uVar27 = uVar18;
LAB_1434bebe0:
        do {
          uVar9 = (ulonglong)(uVar10 & 0x1ff);
          uVar8 = uVar10 >> 9;
          uVar10 = uVar10 + 1;
          lVar5 = *(longlong *)(pFVar4 + (ulonglong)uVar8 * 8);
          dVar2 = *(double *)(lVar5 + uVar9 * 0x18);
          dVar22 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
          dVar21 = *(double *)(lVar5 + 8 + uVar9 * 0x18);
          dVar7 = dVar2;
          if ((double)CONCAT44(uVar14,uVar13) <= dVar2) {
            dVar7 = (double)CONCAT44(uVar14,uVar13);
          }
          uVar17 = SUB84(dVar2,0);
          uVar18 = (int)((ulonglong)dVar2 >> 0x20);
          if (dVar2 <= (double)CONCAT44(uVar27,uVar26)) {
            uVar17 = uVar26;
            uVar18 = uVar27;
          }
          dVar2 = dVar21;
          if ((double)CONCAT44(uVar16,uVar15) <= dVar21) {
            dVar2 = (double)CONCAT44(uVar16,uVar15);
          }
          if (dVar21 <= (double)CONCAT44(uVar20,uVar19)) {
            dVar21 = (double)CONCAT44(uVar20,uVar19);
          }
          uVar13 = SUB84(dVar7,0);
          uVar14 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar7 = dVar22;
          if (dVar25 <= dVar22) {
            dVar7 = dVar25;
          }
          dVar25 = dVar7;
          if (dVar22 <= (double)CONCAT44(uVar24,uVar23)) {
            dVar22 = (double)CONCAT44(uVar24,uVar23);
          }
          uVar15 = SUB84(dVar2,0);
          uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
          uVar19 = SUB84(dVar21,0);
          uVar20 = (undefined4)((ulonglong)dVar21 >> 0x20);
          uVar23 = SUB84(dVar22,0);
          uVar24 = (undefined4)((ulonglong)dVar22 >> 0x20);
          uVar26 = uVar17;
          uVar27 = uVar18;
          if ((int)uVar10 < (int)uVar12) {
            do {
              lVar5 = *(longlong *)
                       ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar10 >> 9) * 8);
              if ((*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
                 (*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) goto LAB_1434bebe0;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar12);
          }
        } while (uVar10 != uVar12);
      }
      *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar13;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar14;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar15;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar16;
      *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar17;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar18;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar19;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar20;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar25;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar22;
    }
  }
  return __return_storage_ptr__;
}

// GetByteCount @ 1434bf340

ulong64 __thiscall UE::Geometry::FDynamicMesh3::GetByteCount(FDynamicMesh3 *this)

{
  FDynamicMeshAttributeSet *this_00;
  ulong64 uVar1;
  ulong64 uVar2;
  
  this_00 = (this->AttributeSet).Ptr;
  uVar1 = ((longlong)((this->EdgeRefCounts).RefCounts.Blocks.ArrayNum << 9) +
           ((longlong)((this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum << 9) +
            (longlong)((this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum << 9) +
            (longlong)((this->VertexEdgeLists).LinkedListElements.Blocks.ArrayNum << 9) +
            (longlong)((this->VertexEdgeLists).FreeBlocks.Blocks.ArrayNum << 9) +
            (longlong)((this->VertexEdgeLists).ListBlocks.Blocks.ArrayNum << 9) +
            (longlong)((this->VertexEdgeLists).ListHeads.Blocks.ArrayNum << 9) +
           (longlong)((this->VertexRefCounts).FreeIndices.Blocks.ArrayNum << 9)) * 2 +
           (longlong)((this->TriangleRefCounts).RefCounts.Blocks.ArrayNum << 9) +
          (longlong)((this->VertexRefCounts).RefCounts.Blocks.ArrayNum << 9)) * 2;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    uVar2 = FDynamicMeshAttributeSet::GetByteCount(this_00);
    return uVar2 + uVar1;
  }
  return uVar1;
}

// GetComponentsFlags @ 1434bfeb0

int __thiscall UE::Geometry::FDynamicMesh3::GetComponentsFlags(FDynamicMesh3 *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = (this->VertexNormals).bIsSet != false;
  uVar1 = bVar3 | 2;
  if ((this->VertexColors).bIsSet == false) {
    uVar1 = (uint)bVar3;
  }
  uVar2 = uVar1 | 4;
  if ((this->VertexUVs).bIsSet == false) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 8;
  if ((this->TriangleGroups).bIsSet == false) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetEdgeNormal @ 1434bffb0

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetEdgeNormal
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  double dVar2;
  TVector<double> *pTVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((-1 < param_1) &&
     (param_1 < (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2
                           ) - 1U) < 0xfffe) {
      uVar1 = *(undefined8 *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
                + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
      GetTriNormal(this,(TVector<double> *)&local_38._s_0,(int)uVar1);
      iVar4 = (int)((ulonglong)uVar1 >> 0x20);
      if (iVar4 != -1) {
        pTVar3 = GetTriNormal(this,&local_20,iVar4);
        dVar7 = local_38._s_0.X + (pTVar3->field0_0x0)._s_0.X;
        dVar8 = local_38._s_0.Y + (pTVar3->field0_0x0)._s_0.Y;
        dVar9 = local_38._s_0.Z + (pTVar3->field0_0x0)._s_0.Z;
        auVar5._0_8_ = dVar9 * dVar9;
        auVar5._8_8_ = 0;
        local_38._s_0.X = 0.0;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar8 * dVar8 + dVar7 * dVar7 + auVar5._0_8_;
        auVar6 = sqrtpd(auVar5,auVar6);
        if (auVar6._0_8_ <= 0.0) {
          local_38._s_0.Y = 0.0;
          local_38._s_0.Z = 0.0;
        }
        else {
          dVar2 = __real_3ff0000000000000 / auVar6._0_8_;
          local_38._s_0.Y = dVar2 * dVar8;
          local_38._s_0.Z = dVar2 * dVar9;
          local_38._s_0.X = dVar2 * dVar7;
        }
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_38._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_38._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_38._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetEdgeOpposingV @ 1434c0130

FIndex2i __thiscall UE::Geometry::FDynamicMesh3::GetEdgeOpposingV(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar11;
  int *piVar12;
  uint in_R8D;
  
  FVar11._s_0.B = in_register_00000014;
  FVar11._s_0.A = param_1;
  pFVar6 = (this->Triangles).Blocks.AllocatorInstance.Data;
  piVar12 = (int *)(*(longlong *)
                     ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(in_R8D >> 9) * 8) +
                   (ulonglong)(in_R8D & 0x1ff) * 0x10);
  iVar2 = *piVar12;
  iVar3 = piVar12[1];
  uVar9 = (ulonglong)(piVar12[2] & 0x1ff);
  lVar7 = *(longlong *)(pFVar6 + (ulonglong)((uint)piVar12[2] >> 9) * 8);
  iVar8 = *(int *)(lVar7 + 4 + uVar9 * 0xc);
  lVar1 = lVar7 + uVar9 * 0xc;
  iVar10 = *(int *)(lVar7 + uVar9 * 0xc);
  if (iVar10 == iVar2) {
    iVar10 = iVar8;
    if (iVar8 == iVar3) {
      iVar10 = *(int *)(lVar1 + 8);
    }
  }
  else if (iVar8 == iVar2) {
    if (iVar10 == iVar3) {
      iVar10 = *(int *)(lVar1 + 8);
    }
  }
  else if (iVar10 == iVar3) {
    iVar10 = iVar8;
  }
  uVar4 = piVar12[3];
  if (uVar4 != 0xffffffff) {
    lVar7 = *(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8);
    lVar1 = lVar7 + (ulonglong)(uVar4 & 0x1ff) * 0xc;
    iVar8 = *(int *)(lVar7 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
    iVar5 = *(int *)(lVar1 + 4);
    if (iVar8 == iVar2) {
      iVar8 = iVar5;
      if (iVar5 == iVar3) {
        *(int *)((longlong)FVar11 + 4) = *(int *)(lVar1 + 8);
        *(int *)FVar11 = iVar10;
        return (FIndex2i)FVar11;
      }
    }
    else if (iVar5 == iVar2) {
      if (iVar8 == iVar3) {
        *(int *)((longlong)FVar11 + 4) = *(int *)(lVar1 + 8);
        *(int *)FVar11 = iVar10;
        return (FIndex2i)FVar11;
      }
    }
    else if (iVar8 == iVar3) {
      iVar8 = iVar5;
    }
    *(int *)((longlong)FVar11 + 4) = iVar8;
    *(int *)FVar11 = iVar10;
    return (FIndex2i)FVar11;
  }
  *(int *)((longlong)FVar11 + 4) = -1;
  *(int *)FVar11 = iVar10;
  return (FIndex2i)FVar11;
}

// GetEdgePoint @ 1434c0260

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetEdgePoint
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar12 = 0.0;
  if ((0.0 <= param_2) && (dVar12 = param_2, __real_3ff0000000000000 <= param_2)) {
    dVar12 = __real_3ff0000000000000;
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2
                           ) - 1U) < 0xfffe) {
      dVar13 = __real_3ff0000000000000 - dVar12;
      pFVar5 = (this->Vertices).Blocks.AllocatorInstance.Data;
      uVar6 = *(ulonglong *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
               + (ulonglong)(param_1 & 0x1ff) * 0x10);
      uVar11 = (ulonglong)((uint)uVar6 & 0x1ff);
      lVar7 = *(longlong *)(pFVar5 + ((uVar6 & 0xffffffff) >> 9) * 8);
      uVar10 = (ulonglong)((uint)(uVar6 >> 0x20) & 0x1ff);
      lVar8 = *(longlong *)(pFVar5 + (uVar6 >> 0x29) * 8);
      dVar1 = *(double *)(lVar8 + 8 + uVar10 * 0x18);
      dVar2 = *(double *)(lVar8 + 0x10 + uVar10 * 0x18);
      dVar3 = *(double *)(lVar7 + 8 + uVar11 * 0x18);
      dVar4 = *(double *)(lVar7 + 0x10 + uVar11 * 0x18);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           dVar13 * *(double *)(lVar7 + uVar11 * 0x18) + dVar12 * *(double *)(lVar8 + uVar10 * 0x18)
      ;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12 * dVar1 + dVar13 * dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12 * dVar2 + dVar13 * dVar4;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMaxVtxEdgeCount @ 1434c3de0

int __thiscall UE::Geometry::FDynamicMesh3::GetMaxVtxEdgeCount(FDynamicMesh3 *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  uVar8 = (this->VertexRefCounts).RefCounts.CurBlockUsed +
          (this->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar5 = 0;
  if ((uVar8 != 0) &&
     (pFVar1 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar5 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar8) {
      do {
        lVar3 = (ulonglong)(uVar4 & 0x1ff) * 2;
        lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8);
        if ((*(short *)(lVar3 + lVar2) != 0) && (uVar5 = uVar4, *(short *)(lVar3 + lVar2) != -1))
        break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while ((int)uVar4 < (int)uVar8);
    }
  }
  if (uVar5 != uVar8) {
LAB_1434c3e80:
    do {
      uVar4 = *(uint *)(*(longlong *)
                         ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
      if (uVar4 == 0xffffffff) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(longlong *)
                          ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      }
      if (iVar6 < iVar7) {
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      uVar5 = uVar5 + 1;
      if ((int)uVar5 < (int)uVar8) {
        pFVar1 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar2 = (ulonglong)(uVar5 >> 9) * 8;
          lVar3 = (ulonglong)(uVar5 & 0x1ff) * 2;
          if ((*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != 0) &&
             (*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != -1)) goto LAB_1434c3e80;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar8);
      }
    } while (uVar5 != uVar8);
  }
  return iVar7;
}

// GetOrientedBoundaryEdgeV @ 1434c3f70

FIndex2i __thiscall
UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV(FDynamicMesh3 *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FIndex3i *pFVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar7;
  ulonglong uVar8;
  uint in_R8D;
  
  FVar7._s_0.B = in_register_00000014;
  FVar7._s_0.A = param_1;
  if ((-1 < (int)in_R8D) &&
     ((int)in_R8D <
      (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    uVar8 = (ulonglong)(in_R8D & 0x1ff);
    lVar4 = (ulonglong)(in_R8D >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar4)
                           + uVar8 * 2) - 1U) < 0xfffe) {
      lVar4 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar4);
      uVar5 = *(ulonglong *)(lVar4 + 8 + uVar8 * 0x10);
      piVar2 = (int *)(lVar4 + uVar8 * 0x10);
      if ((int)(uVar5 >> 0x20) == -1) {
        pFVar3 = (FIndex3i *)
                 (*(longlong *)
                   ((this->Triangles).Blocks.AllocatorInstance.Data +
                   ((uVar5 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar5 & 0x1ff) * 0xc);
        iVar6 = IndexUtil::FindEdgeIndexInTri<int,UE::Geometry::FIndex3i>(*piVar2,piVar2[1],pFVar3);
        iVar1 = iVar6 + 1;
        *(int *)FVar7 = (pFVar3->field0_0x0).ABC[iVar6];
        *(int *)((longlong)FVar7 + 4) =
             (pFVar3->field0_0x0).ABC
             [iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) * -3];
        return (FIndex2i)FVar7;
      }
    }
  }
  *(FIndex2i_u_0 *)FVar7 = (FIndex2i_u_0_s_0)InvalidEdge.field0_0x0;
  return (FIndex2i)FVar7;
}

// GetSingleVertexTriangle @ 1434c48d0

int __thiscall UE::Geometry::FDynamicMesh3::GetSingleVertexTriangle(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)
                              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       ((uVar2 = *(uint *)(*(longlong *)
                            ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar1
                            ) + (ulonglong)(param_1 & 0x1ff) * 4), uVar2 != 0xffffffff &&
        (pFVar3 = (this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data,
        *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) +
                (ulonglong)(uVar2 & 0x1ff) * 4) != 0)))) {
      return *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    }
  }
  return -1;
}

// GetTriArea @ 1434c4f90

double __thiscall UE::Geometry::FDynamicMesh3::GetTriArea(FDynamicMesh3 *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined1 auVar8 [12];
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar6 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar3 = *(uint *)(lVar5 + uVar9 * 0xc);
  uVar10 = (ulonglong)(uVar3 & 0x1ff);
  auVar14 = *(undefined1 (*) [16])
             (*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + uVar10 * 0x18);
  dVar2 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 + uVar10 * 0x18);
  uVar3 = *(uint *)(lVar5 + 4 + uVar9 * 0xc);
  auVar8._4_8_ = in_XMM0_Qb;
  auVar8._0_4_ = auVar14._4_4_;
  auVar11._0_8_ = auVar8._0_8_ << 0x20;
  auVar11._8_4_ = auVar14._8_4_;
  auVar11._12_4_ = auVar14._12_4_;
  uVar10 = (ulonglong)(uVar3 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + uVar10 * 0x18);
  uVar4 = *(uint *)(lVar5 + 8 + uVar9 * 0xc);
  dVar17 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 + uVar10 * 0x18) -
           dVar2;
  dVar18 = *pdVar1 - auVar14._0_8_;
  uVar9 = (ulonglong)(uVar4 & 0x1ff);
  dVar7 = pdVar1[1] - auVar11._8_8_;
  auVar13 = *(undefined1 (*) [16])
             (*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + uVar9 * 0x18);
  dVar2 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar9 * 0x18) -
          dVar2;
  dVar19 = auVar13._8_8_ - auVar11._8_8_;
  dVar16 = auVar13._0_8_ - auVar14._0_8_;
  dVar15 = dVar19 * dVar17 - dVar2 * dVar7;
  auVar12._8_4_ = auVar13._8_4_;
  auVar12._0_8_ = dVar16;
  auVar12._12_4_ = auVar13._12_4_;
  auVar13._8_8_ = auVar12._8_8_;
  auVar13._0_8_ = dVar16 * dVar17;
  dVar2 = dVar2 * dVar18 - auVar13._0_8_;
  dVar17 = dVar16 * dVar7 - dVar19 * dVar18;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar2 * dVar2 + dVar15 * dVar15 + dVar17 * dVar17;
  auVar14 = sqrtpd(auVar13,auVar14);
  return auVar14._0_8_ * __real_3fe0000000000000;
}

// GetTriBaryNormal @ 1434c50d0

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriBaryNormal
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1,double param_2,
          double param_3,double param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((this->VertexNormals).bIsSet != false) {
    pFVar2 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    uVar9 = (ulonglong)(param_1 & 0x1ff);
    fVar19 = (float)param_2;
    fVar16 = (float)param_3;
    lVar3 = *(longlong *)
             ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
    ;
    uVar1 = *(uint *)(lVar3 + uVar9 * 0xc);
    uVar10 = (ulonglong)(uVar1 & 0x1ff);
    fVar14 = (float)param_4;
    lVar4 = *(longlong *)(pFVar2 + (ulonglong)(uVar1 >> 9) * 8);
    uVar1 = *(uint *)(lVar3 + 4 + uVar9 * 0xc);
    uVar11 = (ulonglong)(uVar1 & 0x1ff);
    lVar5 = *(longlong *)(pFVar2 + (ulonglong)(uVar1 >> 9) * 8);
    uVar1 = *(uint *)(lVar3 + 8 + uVar9 * 0xc);
    uVar9 = (ulonglong)(uVar1 & 0x1ff);
    lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar1 >> 9) * 8);
    dVar7 = (double)(fVar19 * *(float *)(lVar4 + uVar10 * 0xc) +
                     fVar16 * *(float *)(lVar5 + uVar11 * 0xc) +
                    fVar14 * *(float *)(lVar3 + uVar9 * 0xc));
    fVar17 = fVar16 * *(float *)(lVar5 + 8 + uVar11 * 0xc) +
             fVar19 * *(float *)(lVar4 + 8 + uVar10 * 0xc) +
             fVar14 * *(float *)(lVar3 + 8 + uVar9 * 0xc);
    dVar13 = (double)(fVar16 * *(float *)(lVar5 + 4 + uVar11 * 0xc) +
                      fVar19 * *(float *)(lVar4 + 4 + uVar10 * 0xc) +
                     fVar14 * *(float *)(lVar3 + 4 + uVar9 * 0xc));
    dVar15 = (double)fVar17;
    dVar12 = 0.0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar13 * dVar13 + dVar7 * dVar7 + dVar15 * dVar15;
    auVar18 = sqrtpd(ZEXT416((uint)fVar17),auVar18);
    if (auVar18._0_8_ <= 0.0) {
      dVar13 = 0.0;
      dVar6 = 0.0;
    }
    else {
      dVar6 = __real_3ff0000000000000 / auVar18._0_8_;
      dVar12 = dVar6 * dVar15;
      dVar13 = dVar6 * dVar13;
      dVar6 = dVar6 * dVar7;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetTriBaryPoint @ 1434c5290

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriBaryPoint
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1,double param_2,
          double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar12 = (ulonglong)(param_1 & 0x1ff);
  lVar8 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar9 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar6 = *(uint *)(lVar8 + uVar12 * 0xc);
  uVar7 = *(uint *)(lVar8 + 4 + uVar12 * 0xc);
  uVar14 = (ulonglong)(uVar6 & 0x1ff);
  lVar10 = *(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8);
  uVar13 = (ulonglong)(uVar7 & 0x1ff);
  uVar6 = *(uint *)(lVar8 + 8 + uVar12 * 0xc);
  lVar8 = *(longlong *)(pFVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar6 & 0x1ff);
  lVar11 = *(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8);
  dVar1 = *(double *)(lVar10 + 8 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar10 + 0x10 + uVar14 * 0x18);
  dVar3 = *(double *)(lVar11 + 0x10 + uVar12 * 0x18);
  dVar4 = *(double *)(lVar11 + 8 + uVar12 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       param_2 * *(double *)(lVar10 + uVar14 * 0x18) + param_3 * *(double *)(lVar8 + uVar13 * 0x18)
       + param_4 * *(double *)(lVar11 + uVar12 * 0x18);
  dVar5 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       param_3 * *(double *)(lVar8 + 8 + uVar13 * 0x18) + param_2 * dVar1 + param_4 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_3 * dVar5 + param_2 * dVar2 + param_4 * dVar3;
  return __return_storage_ptr__;
}

// GetTriBaryPoint @ 1434c53c0

void __thiscall
UE::Geometry::FDynamicMesh3::GetTriBaryPoint
          (FDynamicMesh3 *this,int param_1,double param_2,double param_3,double param_4,
          FVertexInfo *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  code *pcVar18;
  TVector2<float>_u_0 TVar19;
  TVector2<float> TVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool bVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  TVar20.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (param_5->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_5->Position).field0_0x0._s_0.Y = (double)uVar23;
  uStack_70 = (undefined4)uVar21;
  uStack_6c = (undefined4)((ulonglong)uVar21 >> 0x20);
  *(undefined4 *)((longlong)&(param_5->Position).field0_0x0 + 0x10) = uVar24;
  *(undefined4 *)((longlong)&(param_5->Position).field0_0x0 + 0x14) = uVar25;
  *(undefined4 *)&(param_5->Normal).field0_0x0 = uStack_70;
  *(undefined4 *)((longlong)&(param_5->Normal).field0_0x0 + 4) = uStack_6c;
  uVar27 = (ulonglong)(param_1 & 0x1ff);
  *(ulonglong *)((longlong)&(param_5->Normal).field0_0x0 + 8) = CONCAT44(uStack_70,uVar22);
  *(ulonglong *)((longlong)&(param_5->Color).field0_0x0 + 4) = CONCAT44(uVar22,uStack_6c);
  (param_5->UV).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar20.field0_0x0;
  param_5->bHaveN = false;
  param_5->bHaveC = false;
  param_5->bHaveUV = false;
  *(undefined5 *)&param_5->field_0x3b = 0;
  lVar13 = *(longlong *)
            ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar14 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar10 = *(uint *)(lVar13 + uVar27 * 0xc);
  uVar28 = (ulonglong)(uVar10 & 0x1ff);
  uVar11 = *(uint *)(lVar13 + 4 + uVar27 * 0xc);
  lVar15 = *(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8);
  uVar29 = (ulonglong)(uVar11 & 0x1ff);
  dVar4 = *(double *)(lVar15 + 8 + uVar28 * 0x18);
  lVar16 = *(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8);
  uVar10 = *(uint *)(lVar13 + 8 + uVar27 * 0xc);
  dVar5 = *(double *)(lVar16 + 8 + uVar29 * 0x18);
  uVar30 = (ulonglong)(uVar10 & 0x1ff);
  dVar6 = *(double *)(lVar16 + 0x10 + uVar29 * 0x18);
  lVar17 = *(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8);
  dVar7 = *(double *)(lVar15 + 0x10 + uVar28 * 0x18);
  dVar8 = *(double *)(lVar17 + 8 + uVar30 * 0x18);
  dVar9 = *(double *)(lVar17 + 0x10 + uVar30 * 0x18);
  (param_5->Position).field0_0x0._s_0.X =
       param_3 * *(double *)(lVar16 + uVar29 * 0x18) + param_2 * *(double *)(lVar15 + uVar28 * 0x18)
       + param_4 * *(double *)(lVar17 + uVar30 * 0x18);
  (param_5->Position).field0_0x0._s_0.Y = param_3 * dVar5 + param_2 * dVar4 + param_4 * dVar8;
  (param_5->Position).field0_0x0._s_0.Z = param_3 * dVar6 + param_2 * dVar7 + param_4 * dVar9;
  bVar26 = (this->VertexNormals).bIsSet;
  param_5->bHaveN = bVar26;
  if (bVar26 != false) {
    if (((this->VertexNormals).bIsSet == false) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar26)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    uVar10 = *(uint *)(lVar13 + uVar27 * 0xc);
    pFVar14 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    uVar28 = (ulonglong)(uVar10 & 0x1ff);
    fVar33 = (float)param_2;
    lVar15 = *(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8);
    uVar10 = *(uint *)(lVar13 + 4 + uVar27 * 0xc);
    uVar29 = (ulonglong)(uVar10 & 0x1ff);
    fVar32 = *(float *)(lVar15 + 4 + uVar28 * 0xc);
    uVar11 = *(uint *)(lVar13 + 8 + uVar27 * 0xc);
    lVar16 = *(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8);
    fVar31 = (float)param_3;
    uVar30 = (ulonglong)(uVar11 & 0x1ff);
    lVar17 = *(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8);
    fVar35 = (float)param_4;
    fVar34 = *(float *)(lVar16 + 4 + uVar29 * 0xc);
    fVar36 = *(float *)(lVar17 + 4 + uVar30 * 0xc);
    fVar1 = *(float *)(lVar16 + 8 + uVar29 * 0xc);
    fVar2 = *(float *)(lVar15 + 8 + uVar28 * 0xc);
    fVar3 = *(float *)(lVar17 + 8 + uVar30 * 0xc);
    (param_5->Normal).field0_0x0._s_0.X =
         fVar31 * *(float *)(lVar16 + uVar29 * 0xc) + fVar33 * *(float *)(lVar15 + uVar28 * 0xc) +
         fVar35 * *(float *)(lVar17 + uVar30 * 0xc);
    (param_5->Normal).field0_0x0._s_0.Y = fVar31 * fVar34 + fVar33 * fVar32 + fVar35 * fVar36;
    (param_5->Normal).field0_0x0._s_0.Z = fVar31 * fVar1 + fVar33 * fVar2 + fVar35 * fVar3;
    Normalize<float>(&param_5->Normal,0.0);
  }
  fVar34 = (float)param_2;
  fVar32 = (float)param_3;
  fVar36 = (float)param_4;
  bVar26 = (this->VertexColors).bIsSet;
  param_5->bHaveC = bVar26;
  if (bVar26 != false) {
    if (((this->VertexColors).bIsSet == false) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar26)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    uVar10 = *(uint *)(lVar13 + uVar27 * 0xc);
    pFVar14 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    uVar28 = (ulonglong)(uVar10 & 0x1ff);
    lVar15 = *(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8);
    uVar10 = *(uint *)(lVar13 + 4 + uVar27 * 0xc);
    uVar29 = (ulonglong)(uVar10 & 0x1ff);
    fVar1 = *(float *)(lVar15 + 4 + uVar28 * 0xc);
    uVar11 = *(uint *)(lVar13 + 8 + uVar27 * 0xc);
    lVar16 = *(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8);
    uVar30 = (ulonglong)(uVar11 & 0x1ff);
    fVar2 = *(float *)(lVar16 + 4 + uVar29 * 0xc);
    fVar3 = *(float *)(lVar16 + 8 + uVar29 * 0xc);
    lVar17 = *(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8);
    fVar31 = *(float *)(lVar17 + 4 + uVar30 * 0xc);
    fVar33 = *(float *)(lVar15 + 8 + uVar28 * 0xc);
    fVar35 = *(float *)(lVar17 + 8 + uVar30 * 0xc);
    (param_5->Color).field0_0x0._s_0.X =
         fVar32 * *(float *)(lVar16 + uVar29 * 0xc) + fVar34 * *(float *)(lVar15 + uVar28 * 0xc) +
         fVar36 * *(float *)(lVar17 + uVar30 * 0xc);
    (param_5->Color).field0_0x0._s_0.Y = fVar32 * fVar2 + fVar34 * fVar1 + fVar36 * fVar31;
    (param_5->Color).field0_0x0._s_0.Z = fVar32 * fVar3 + fVar34 * fVar33 + fVar36 * fVar35;
  }
  bVar26 = (this->VertexUVs).bIsSet;
  param_5->bHaveUV = bVar26;
  if (bVar26 != false) {
    if (((this->VertexUVs).bIsSet == false) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar26)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    uVar10 = *(uint *)(lVar13 + uVar27 * 0xc);
    uVar11 = *(uint *)(lVar13 + 4 + uVar27 * 0xc);
    uVar12 = *(uint *)(lVar13 + 8 + uVar27 * 0xc);
    uVar27 = (ulonglong)(uVar10 & 0x1ff);
    pFVar14 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    uVar29 = (ulonglong)(uVar11 & 0x1ff);
    uVar28 = (ulonglong)(uVar12 & 0x1ff);
    TVar19._s_0.Y =
         fVar32 * *(float *)(*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + 4 + uVar29 * 8)
         + fVar34 * *(float *)(*(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8) + 4 +
                              uVar27 * 8) +
         fVar36 * *(float *)(*(longlong *)(pFVar14 + (ulonglong)(uVar12 >> 9) * 8) + 4 + uVar28 * 8)
    ;
    TVar19._s_0.X =
         fVar34 * *(float *)(*(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8) + uVar27 * 8) +
         fVar32 * *(float *)(*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + uVar29 * 8) +
         fVar36 * *(float *)(*(longlong *)(pFVar14 + (ulonglong)(uVar12 >> 9) * 8) + uVar28 * 8);
    (param_5->UV).field0_0x0 = TVar19;
  }
  return;
}

// GetTriBounds @ 1434c5cd0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriBounds
          (FDynamicMesh3 *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar11 = (ulonglong)(param_1 & 0x1ff);
  lVar7 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar8 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar5 = *(uint *)(lVar7 + uVar11 * 0xc);
  uVar6 = *(uint *)(lVar7 + 4 + uVar11 * 0xc);
  uVar13 = (ulonglong)(uVar5 & 0x1ff);
  lVar9 = *(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8);
  uVar12 = (ulonglong)(uVar6 & 0x1ff);
  dVar16 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  uVar18 = SUB84(dVar16,0);
  uVar19 = (undefined4)((ulonglong)dVar16 >> 0x20);
  dVar15 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  uVar20 = SUB84(dVar15,0);
  uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
  lVar10 = *(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8);
  uVar5 = *(uint *)(lVar7 + 8 + uVar11 * 0xc);
  dVar17 = *(double *)(lVar9 + uVar13 * 0x18);
  dVar1 = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  uVar11 = (ulonglong)(uVar5 & 0x1ff);
  dVar2 = *(double *)(lVar10 + uVar12 * 0x18);
  dVar3 = *(double *)(lVar10 + 8 + uVar12 * 0x18);
  dVar14 = dVar17;
  if (dVar2 <= dVar17) {
    dVar14 = dVar2;
  }
  if (dVar16 <= dVar3) {
    uVar18 = SUB84(dVar3,0);
    uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  lVar7 = *(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8);
  if (dVar3 <= dVar16) {
    dVar16 = dVar3;
  }
  if (dVar17 <= dVar2) {
    dVar17 = dVar2;
  }
  dVar2 = *(double *)(lVar7 + 0x10 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar7 + 8 + uVar11 * 0x18);
  dVar4 = *(double *)(lVar7 + uVar11 * 0x18);
  if ((double)CONCAT44(uVar19,uVar18) <= dVar3) {
    uVar18 = SUB84(dVar3,0);
    uVar19 = (int)((ulonglong)dVar3 >> 0x20);
  }
  if (dVar4 <= dVar14) {
    dVar14 = dVar4;
  }
  if (dVar3 <= dVar16) {
    dVar16 = dVar3;
  }
  if (dVar17 <= dVar4) {
    dVar17 = dVar4;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar14;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar16;
  if (dVar15 <= dVar1) {
    uVar20 = SUB84(dVar1,0);
    uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  if (dVar1 <= dVar15) {
    dVar15 = dVar1;
  }
  if ((double)CONCAT44(uVar21,uVar20) <= dVar2) {
    uVar20 = SUB84(dVar2,0);
    uVar21 = (int)((ulonglong)dVar2 >> 0x20);
  }
  if (dVar2 <= dVar15) {
    dVar15 = dVar2;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar15;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar17;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar21,uVar20);
  return __return_storage_ptr__;
}

// GetTriCentroid @ 1434c5e40

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriCentroid
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  
  dVar9 = __real_3fd5555555555555;
  uVar10 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar6 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar3 = *(uint *)(lVar5 + uVar10 * 0xc);
  uVar4 = *(uint *)(lVar5 + 4 + uVar10 * 0xc);
  uVar12 = (ulonglong)(uVar3 & 0x1ff);
  lVar7 = *(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8);
  uVar11 = (ulonglong)(uVar4 & 0x1ff);
  uVar3 = *(uint *)(lVar5 + 8 + uVar10 * 0xc);
  lVar5 = *(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8);
  uVar10 = (ulonglong)(uVar3 & 0x1ff);
  lVar8 = *(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8);
  dVar13 = (*(double *)(lVar5 + 0x10 + uVar11 * 0x18) + *(double *)(lVar7 + 0x10 + uVar12 * 0x18) +
           *(double *)(lVar8 + 0x10 + uVar10 * 0x18)) * __real_3fd5555555555555;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*(double *)(lVar7 + uVar12 * 0x18) + *(double *)(lVar5 + uVar11 * 0x18) +
       *(double *)(lVar8 + uVar10 * 0x18)) * __real_3fd5555555555555;
  dVar1 = *(double *)(lVar5 + 8 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar7 + 8 + uVar12 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar1 + dVar2 + *(double *)(lVar8 + 8 + uVar10 * 0x18)) * dVar9;
  return __return_storage_ptr__;
}

// GetTriFrame @ 1434c70b0

TFrame3<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriFrame
          (FDynamicMesh3 *this,TFrame3<double> *__return_storage_ptr__,int param_1,int param_2)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  TQuaternion<double>_u_0 local_148;
  double local_128;
  double local_120;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  
  dVar11 = __real_3fd5555555555555;
  local_148._s_0.W = __real_3ff0000000000000;
  pFVar5 = (this->Vertices).Blocks.AllocatorInstance.Data;
  lVar1 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
          (ulonglong)(param_1 & 0x1ff) * 0xc;
  uVar4 = *(uint *)(lVar1 + (longlong)
                            (param_2 +
                            (param_2 / 3 + (param_2 >> 0x1f) +
                            (int)(((longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffffU
                                  ) >> 0x1f)) * -3) * 4);
  uVar13 = (ulonglong)(uVar4 & 0x1ff);
  pdVar2 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar13 * 0x18);
  local_c8 = *pdVar2;
  dStack_c0 = pdVar2[1];
  local_128 = *(double *)
               (*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  iVar12 = param_2 + 1;
  uVar4 = *(uint *)(lVar1 + (longlong)
                            (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                                      (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
  uVar13 = (ulonglong)(uVar4 & 0x1ff);
  pdVar2 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar13 * 0x18);
  dVar9 = *pdVar2;
  dVar10 = pdVar2[1];
  dVar3 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  iVar12 = param_2 + 2;
  dVar6 = dVar9 - local_c8;
  uVar4 = *(uint *)(lVar1 + (longlong)
                            (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                                      (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
  uVar13 = (ulonglong)(uVar4 & 0x1ff);
  pdVar2 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar13 * 0x18);
  local_b8 = *pdVar2;
  dStack_b0 = pdVar2[1];
  local_120 = *(double *)
               (*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  local_100 = dVar10 - dStack_c0;
  dVar7 = dVar3 - local_128;
  local_e8 = SQRT(local_100 * local_100 + dVar6 * dVar6 + dVar7 * dVar7);
  if (local_e8 <= 0.0) {
    local_e8 = 0.0;
    local_100 = 0.0;
    local_118._s_0.X = 0.0;
  }
  else {
    local_e8 = __real_3ff0000000000000 / local_e8;
    local_118._s_0.X = local_e8 * dVar6;
    local_100 = local_e8 * local_100;
    local_e8 = local_e8 * dVar7;
  }
  dVar7 = local_b8 - dVar9;
  dVar8 = local_120 - dVar3;
  dVar6 = dStack_b0 - dVar10;
  dVar14 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar14 = __real_3ff0000000000000 / dVar14;
    dVar7 = dVar14 * dVar7;
    dVar6 = dVar14 * dVar6;
    dVar14 = dVar14 * dVar8;
  }
  dVar8 = dVar6 * local_e8 - dVar14 * local_100;
  local_f0 = dVar14 * local_118._s_0.X - dVar7 * local_e8;
  auVar15._0_8_ = dVar8 * dVar8;
  auVar15._8_8_ = 0;
  dVar6 = dVar7 * local_100 - dVar6 * local_118._s_0.X;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_f0 * local_f0 + auVar15._0_8_ + dVar6 * dVar6;
  auVar16 = sqrtpd(auVar15,auVar16);
  if (auVar16._0_8_ <= 0.0) {
    local_d8 = 0.0;
    local_f0 = 0.0;
    local_118._s_0.Z = 0.0;
  }
  else {
    local_d8 = __real_3ff0000000000000 / auVar16._0_8_;
    local_118._s_0.Z = local_d8 * dVar8;
    local_f0 = local_d8 * local_f0;
    local_d8 = local_d8 * dVar6;
  }
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (dVar9 + local_c8 + local_b8) * dVar11;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (dVar10 + dStack_c0 + dStack_b0) * dVar11;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (dVar3 + local_128 + local_120) * dVar11;
  local_118._s_0.Y = local_f0 * local_e8 - local_d8 * local_100;
  local_f8 = local_d8 * local_118._s_0.X - local_118._s_0.Z * local_e8;
  local_e0 = local_118._s_0.Z * local_100 - local_f0 * local_118._s_0.X;
  local_148._s_0.X = 0.0;
  local_148._s_0.Y = 0.0;
  local_148._s_0.Z = 0.0;
  TQuaternion<double>::SetFromRotationMatrix
            ((TQuaternion<double> *)&local_148._s_0,(TMatrix3<double> *)&local_118._s_0);
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = local_148._s_0.X;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = local_148._s_0.Y;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = local_148._s_0.Z;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = local_148._s_0.W;
  return __return_storage_ptr__;
}

// GetTriInfo @ 1434c7530

void __thiscall
UE::Geometry::FDynamicMesh3::GetTriInfo
          (FDynamicMesh3 *this,int param_1,TVector<double> *param_2,double *param_3,
          TVector<double> *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  
  dVar11 = __real_3fd5555555555555;
  pFVar5 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar12 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar4 = *(uint *)(lVar6 + uVar12 * 0xc);
  uVar13 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar13 * 0x18);
  dVar16 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  uVar4 = *(uint *)(lVar6 + 4 + uVar12 * 0xc);
  uVar13 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar13 * 0x18);
  dVar19 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar3 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  uVar4 = *(uint *)(lVar6 + 8 + uVar12 * 0xc);
  uVar12 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar12 * 0x18);
  dVar20 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar15 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar12 * 0x18);
  dVar14 = dVar19 - dVar16;
  dVar7 = dVar20 - dVar16;
  (param_4->field0_0x0)._s_0.X = (dVar16 + dVar19 + dVar20) * __real_3fd5555555555555;
  dVar16 = dVar9 - dVar8;
  dVar20 = dVar10 - dVar8;
  (param_4->field0_0x0)._s_0.Y = (dVar8 + dVar9 + dVar10) * dVar11;
  auVar17._0_8_ = dVar3 - dVar2;
  auVar17._8_8_ = 0;
  dVar8 = dVar15 - dVar2;
  (param_4->field0_0x0)._s_0.Z = (dVar2 + dVar3 + dVar15) * dVar11;
  dVar19 = dVar20 * auVar17._0_8_ - dVar8 * dVar16;
  dVar2 = dVar8 * dVar14 - dVar7 * auVar17._0_8_;
  dVar3 = dVar7 * dVar16 - dVar20 * dVar14;
  dVar15 = 0.0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar2 * dVar2 + dVar19 * dVar19 + dVar3 * dVar3;
  auVar18 = sqrtpd(auVar17,auVar18);
  dVar16 = auVar18._0_8_;
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
    dVar2 = 0.0;
    dVar14 = 0.0;
  }
  else {
    dVar14 = __real_3ff0000000000000 / dVar16;
    dVar15 = dVar14 * dVar3;
    dVar2 = dVar14 * dVar2;
    dVar14 = dVar14 * dVar19;
  }
  *param_3 = dVar16 * __real_3fe0000000000000;
  (param_2->field0_0x0)._s_0.X = dVar14;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar15;
  return;
}

// GetTriInternalAngleR @ 1434c7770

double __thiscall
UE::Geometry::FDynamicMesh3::GetTriInternalAngleR(FDynamicMesh3 *this,int param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pFVar3 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  lVar4 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar2 = *(uint *)(lVar4 + uVar8 * 0xc);
  uVar9 = (ulonglong)(uVar2 & 0x1ff);
  dVar11 = *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar9 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + uVar9 * 0x18);
  dVar6 = *pdVar1;
  dVar14 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 4 + uVar8 * 0xc);
  uVar9 = (ulonglong)(uVar2 & 0x1ff);
  dVar13 = *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar9 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + uVar9 * 0x18);
  dVar7 = *pdVar1;
  dVar15 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 8 + uVar8 * 0xc);
  uVar8 = (ulonglong)(uVar2 & 0x1ff);
  dVar12 = *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar8 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + uVar8 * 0x18);
  dVar5 = *pdVar1;
  dVar16 = pdVar1[1];
  if (param_2 == 0) {
    dVar5 = dVar5 - dVar6;
    dVar12 = dVar12 - dVar11;
    dVar16 = dVar16 - dVar14;
    dVar10 = SQRT(dVar16 * dVar16 + dVar5 * dVar5 + dVar12 * dVar12);
    if (dVar10 <= 0.0) {
      dVar12 = 0.0;
      dVar5 = 0.0;
      dVar16 = 0.0;
    }
    else {
      dVar10 = __real_3ff0000000000000 / dVar10;
      dVar16 = dVar16 * dVar10;
      dVar12 = dVar12 * dVar10;
      dVar5 = dVar5 * dVar10;
    }
    dVar7 = dVar7 - dVar6;
    dVar15 = dVar15 - dVar14;
    dVar13 = dVar13 - dVar11;
    dVar11 = SQRT(dVar15 * dVar15 + dVar7 * dVar7 + dVar13 * dVar13);
    if (dVar11 <= 0.0) {
      dVar13 = 0.0;
      dVar7 = 0.0;
      dVar15 = 0.0;
    }
    else {
      dVar11 = __real_3ff0000000000000 / dVar11;
      dVar15 = dVar15 * dVar11;
      dVar13 = dVar13 * dVar11;
      dVar7 = dVar7 * dVar11;
    }
    dVar11 = dVar5 * dVar7 + dVar15 * dVar16 + dVar13 * dVar12;
  }
  else if (param_2 == 1) {
    dVar5 = dVar5 - dVar7;
    dVar12 = dVar12 - dVar13;
    dVar16 = dVar16 - dVar15;
    dVar10 = SQRT(dVar16 * dVar16 + dVar5 * dVar5 + dVar12 * dVar12);
    if (dVar10 <= 0.0) {
      dVar12 = 0.0;
      dVar5 = 0.0;
      dVar16 = 0.0;
    }
    else {
      dVar10 = __real_3ff0000000000000 / dVar10;
      dVar16 = dVar16 * dVar10;
      dVar12 = dVar12 * dVar10;
      dVar5 = dVar5 * dVar10;
    }
    dVar6 = dVar6 - dVar7;
    dVar14 = dVar14 - dVar15;
    dVar11 = dVar11 - dVar13;
    dVar13 = SQRT(dVar14 * dVar14 + dVar6 * dVar6 + dVar11 * dVar11);
    if (dVar13 <= 0.0) {
      dVar11 = 0.0;
      dVar6 = 0.0;
      dVar14 = 0.0;
    }
    else {
      dVar13 = __real_3ff0000000000000 / dVar13;
      dVar14 = dVar14 * dVar13;
      dVar11 = dVar11 * dVar13;
      dVar6 = dVar6 * dVar13;
    }
    dVar11 = dVar6 * dVar5 + dVar14 * dVar16 + dVar11 * dVar12;
  }
  else {
    dVar7 = dVar7 - dVar5;
    dVar13 = dVar13 - dVar12;
    dVar15 = dVar15 - dVar16;
    dVar10 = SQRT(dVar15 * dVar15 + dVar7 * dVar7 + dVar13 * dVar13);
    if (dVar10 <= 0.0) {
      dVar13 = 0.0;
      dVar7 = 0.0;
      dVar15 = 0.0;
    }
    else {
      dVar10 = __real_3ff0000000000000 / dVar10;
      dVar15 = dVar15 * dVar10;
      dVar13 = dVar13 * dVar10;
      dVar7 = dVar7 * dVar10;
    }
    dVar6 = dVar6 - dVar5;
    dVar14 = dVar14 - dVar16;
    dVar11 = dVar11 - dVar12;
    dVar12 = SQRT(dVar14 * dVar14 + dVar6 * dVar6 + dVar11 * dVar11);
    if (dVar12 <= 0.0) {
      dVar11 = 0.0;
      dVar6 = 0.0;
      dVar14 = 0.0;
    }
    else {
      dVar12 = __real_3ff0000000000000 / dVar12;
      dVar14 = dVar14 * dVar12;
      dVar11 = dVar11 * dVar12;
      dVar6 = dVar6 * dVar12;
    }
    dVar11 = dVar6 * dVar7 + dVar14 * dVar15 + dVar11 * dVar13;
  }
  dVar13 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar11) && (dVar13 = dVar11, __real_3ff0000000000000 <= dVar11)) {
    dVar13 = __real_3ff0000000000000;
  }
  dVar11 = acos(dVar13);
  return dVar11;
}

// GetTriInternalAnglesR @ 1434c7bd0

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double _X;
  double dVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  double local_118;
  
  _X = __real_bff0000000000000;
  dVar12 = __real_3ff0000000000000;
  dVar9 = 0.0;
  uVar13 = (ulonglong)(param_1 & 0x1ff);
  lVar4 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar5 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar21 = *(uint *)(lVar4 + uVar13 * 0xc);
  uVar22 = *(uint *)(lVar4 + 4 + uVar13 * 0xc);
  uVar14 = (ulonglong)(uVar21 & 0x1ff);
  lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8);
  uVar15 = (ulonglong)(uVar22 & 0x1ff);
  auVar3 = *(undefined1 (*) [16])(lVar6 + uVar14 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar22 >> 9) * 8) + uVar15 * 0x18);
  dVar8 = *pdVar1;
  dVar11 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar22 >> 9) * 8) + 0x10 + uVar15 * 0x18);
  uVar21 = *(uint *)(lVar4 + 8 + uVar13 * 0xc);
  dVar17 = dVar8 - auVar3._0_8_;
  uVar13 = (ulonglong)(uVar21 & 0x1ff);
  dVar10 = dVar2 - *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
  dVar20 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + uVar13 * 0x18);
  dVar19 = *pdVar1;
  dVar18 = pdVar1[1];
  dVar16 = auVar3._8_8_;
  local_118 = dVar11 - dVar16;
  dVar7 = SQRT(local_118 * local_118 + dVar17 * dVar17 + dVar10 * dVar10);
  if (dVar7 <= 0.0) {
    local_118 = 0.0;
    dVar17 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar7 = __real_3ff0000000000000 / dVar7;
    local_118 = dVar7 * local_118;
    dVar17 = dVar7 * dVar17;
    dVar7 = dVar7 * dVar10;
  }
  dVar8 = dVar19 - dVar8;
  dVar2 = dVar20 - dVar2;
  dVar11 = dVar18 - dVar11;
  dVar10 = SQRT(dVar11 * dVar11 + dVar8 * dVar8 + dVar2 * dVar2);
  if (dVar10 <= 0.0) {
    dVar8 = 0.0;
    dVar11 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar10 = __real_3ff0000000000000 / dVar10;
    dVar8 = dVar10 * dVar8;
    dVar11 = dVar10 * dVar11;
    dVar10 = dVar10 * dVar2;
  }
  dVar18 = dVar18 - dVar16;
  dVar20 = dVar20 - *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
  dVar19 = dVar19 - *(double *)(lVar6 + uVar14 * 0x18);
  dVar2 = SQRT(dVar18 * dVar18 + dVar19 * dVar19 + dVar20 * dVar20);
  if (dVar2 <= 0.0) {
    dVar18 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar2 = __real_3ff0000000000000 / dVar2;
    dVar9 = dVar2 * dVar19;
    dVar18 = dVar2 * dVar18;
    dVar2 = dVar2 * dVar20;
  }
  dVar16 = dVar18 * dVar11 + dVar9 * dVar8 + dVar2 * dVar10;
  dVar20 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar16) && (dVar20 = dVar16, __real_3ff0000000000000 <= dVar16)) {
    dVar20 = __real_3ff0000000000000;
  }
  dVar20 = acos(dVar20);
  dVar16 = dVar11 * local_118 + dVar8 * dVar17 + dVar10 * dVar7;
  uVar21 = SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar22 = (uint)((ulonglong)dVar16 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar16 = _X;
  if ((_X <= (double)CONCAT44(uVar22,uVar21)) &&
     (dVar16 = (double)CONCAT44(uVar22,uVar21), dVar12 <= (double)CONCAT44(uVar22,uVar21))) {
    dVar16 = dVar12;
  }
  dVar16 = acos(dVar16);
  dVar2 = dVar18 * local_118 + dVar9 * dVar17 + dVar2 * dVar7;
  if ((_X <= dVar2) && (_X = dVar2, dVar12 <= dVar2)) {
    _X = dVar12;
  }
  dVar2 = acos(_X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar20;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  return __return_storage_ptr__;
}

// GetTriNeighbourTris @ 1434c7f60

FIndex3i * __thiscall
UE::Geometry::FDynamicMesh3::GetTriNeighbourTris
          (FDynamicMesh3 *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  uVar7 = InvalidTriangle.field0_0x0._s_0.C;
  if ((-1 < param_1) &&
     (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + uVar8 * 2) - 1U) < 0xfffe) {
      pFVar3 = (this->Edges).Blocks.AllocatorInstance.Data;
      lVar4 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1);
      lVar1 = lVar4 + uVar8 * 0xc;
      uVar2 = *(uint *)(lVar4 + uVar8 * 0xc);
      uVar8 = *(ulonglong *)
               (*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 8 +
               (ulonglong)(uVar2 & 0x1ff) * 0x10);
      uVar2 = *(uint *)(lVar1 + 4);
      if ((int)uVar8 == param_1) {
        uVar8 = uVar8 >> 0x20;
      }
      uVar5 = *(ulonglong *)
               (*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 8 +
               (ulonglong)(uVar2 & 0x1ff) * 0x10);
      uVar2 = *(uint *)(lVar1 + 8);
      if ((int)uVar5 == param_1) {
        uVar5 = uVar5 >> 0x20;
      }
      uVar6 = *(ulonglong *)
               (*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 8 +
               (ulonglong)(uVar2 & 0x1ff) * 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.A = (int)uVar8;
      (__return_storage_ptr__->field0_0x0)._s_0.B = (int)uVar5;
      if ((int)uVar6 == param_1) {
        uVar6 = uVar6 >> 0x20;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.C = (int)uVar6;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = InvalidTriangle.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.C = uVar7;
  return __return_storage_ptr__;
}

// GetTriNormal @ 1434c80a0

TVector<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetTriNormal
          (FDynamicMesh3 *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar6 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar3 = *(uint *)(lVar5 + uVar9 * 0xc);
  uVar10 = (ulonglong)(uVar3 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + uVar10 * 0x18);
  dVar11 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 + uVar10 * 0x18);
  uVar3 = *(uint *)(lVar5 + 4 + uVar9 * 0xc);
  uVar10 = (ulonglong)(uVar3 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + uVar10 * 0x18);
  uVar4 = *(uint *)(lVar5 + 8 + uVar9 * 0xc);
  dVar16 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) + 0x10 + uVar10 * 0x18) -
           dVar2;
  dVar7 = *pdVar1 - dVar11;
  uVar9 = (ulonglong)(uVar4 & 0x1ff);
  dVar12 = pdVar1[1] - dVar13;
  pdVar1 = (double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + uVar9 * 0x18);
  dVar8 = pdVar1[1];
  dVar2 = *(double *)(*(longlong *)(pFVar6 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar9 * 0x18) -
          dVar2;
  dVar13 = dVar8 - dVar13;
  dVar11 = *pdVar1 - dVar11;
  auVar14._0_8_ = dVar13 * dVar7;
  auVar14._8_8_ = dVar8;
  dVar13 = dVar13 * dVar16 - dVar2 * dVar12;
  dVar2 = dVar2 * dVar7 - dVar11 * dVar16;
  dVar7 = dVar11 * dVar12 - auVar14._0_8_;
  dVar12 = 0.0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar2 * dVar2 + dVar13 * dVar13 + dVar7 * dVar7;
  auVar15 = sqrtpd(auVar14,auVar15);
  if (auVar15._0_8_ <= 0.0) {
    dVar2 = 0.0;
    dVar11 = 0.0;
  }
  else {
    dVar11 = __real_3ff0000000000000 / auVar15._0_8_;
    dVar12 = dVar11 * dVar7;
    dVar2 = dVar11 * dVar2;
    dVar11 = dVar11 * dVar13;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12;
  return __return_storage_ptr__;
}

// GetTriSolidAngle @ 1434c8230

double __thiscall
UE::Geometry::FDynamicMesh3::GetTriSolidAngle
          (FDynamicMesh3 *this,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar19 [16];
  
  dVar15 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar13 = (ulonglong)(param_1 & 0x1ff);
  lVar4 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  pFVar5 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar3 = *(uint *)(lVar4 + uVar13 * 0xc);
  uVar14 = (ulonglong)(uVar3 & 0x1ff);
  lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar3 >> 9) * 8);
  dVar12 = *(double *)(lVar6 + uVar14 * 0x18) - dVar15;
  auVar16._0_8_ = *(double *)(lVar6 + 8 + uVar14 * 0x18) - dVar1;
  auVar16._8_8_ = 0;
  uVar3 = *(uint *)(lVar4 + 4 + uVar13 * 0xc);
  dVar11 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18) - dVar2;
  uVar14 = (ulonglong)(uVar3 & 0x1ff);
  lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar3 >> 9) * 8);
  dVar10 = *(double *)(lVar6 + uVar14 * 0x18) - dVar15;
  dVar8 = *(double *)(lVar6 + 8 + uVar14 * 0x18) - dVar1;
  uVar3 = *(uint *)(lVar4 + 8 + uVar13 * 0xc);
  dVar9 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18) - dVar2;
  uVar13 = (ulonglong)(uVar3 & 0x1ff);
  lVar4 = *(longlong *)(pFVar5 + (ulonglong)(uVar3 >> 9) * 8);
  dVar2 = *(double *)(lVar4 + 0x10 + uVar13 * 0x18) - dVar2;
  dVar1 = *(double *)(lVar4 + 8 + uVar13 * 0x18) - dVar1;
  dVar15 = *(double *)(lVar4 + uVar13 * 0x18) - dVar15;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar16._0_8_ * auVar16._0_8_ + dVar12 * dVar12 + dVar11 * dVar11;
  auVar18 = sqrtpd(in_XMM5,auVar17);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
  auVar19 = sqrtpd(unaff_XMM6,auVar19);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1 * dVar1 + dVar15 * dVar15 + dVar2 * dVar2;
  auVar17 = sqrtpd(auVar16,auVar7);
  dVar15 = atan2(((dVar2 * dVar8 - dVar1 * dVar9) * dVar12 -
                 (dVar2 * dVar10 - dVar15 * dVar9) * auVar16._0_8_) +
                 (dVar1 * dVar10 - dVar15 * dVar8) * dVar11,
                 auVar17._0_8_ *
                 (auVar16._0_8_ * dVar8 + dVar12 * dVar10 + dVar11 * dVar9 +
                 auVar19._0_8_ * auVar18._0_8_) +
                 (dVar1 * dVar8 + dVar15 * dVar10 + dVar2 * dVar9) * auVar18._0_8_ +
                 (auVar16._0_8_ * dVar1 + dVar12 * dVar15 + dVar11 * dVar2) * auVar19._0_8_);
  return dVar15 * __real_c000000000000000;
}

// GetVertex @ 1434c9430

bool __thiscall
UE::Geometry::FDynamicMesh3::GetVertex
          (FDynamicMesh3 *this,int param_1,FVertexInfo *param_2,bool param_3,bool param_4,
          bool param_5)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar2) + uVar8 * 2) - 1U) < 0xfffe) {
      lVar3 = *(longlong *)((this->Vertices).Blocks.AllocatorInstance.Data + lVar2);
      pdVar1 = (double *)(lVar3 + uVar8 * 0x18);
      dVar5 = pdVar1[1];
      (param_2->Position).field0_0x0._s_0.X = *pdVar1;
      (param_2->Position).field0_0x0._s_0.Y = dVar5;
      (param_2->Position).field0_0x0._s_0.Z = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
      param_2->bHaveC = false;
      param_2->bHaveUV = false;
      param_2->bHaveN = false;
      if (((this->VertexNormals).bIsSet != false) && (param_3)) {
        param_2->bHaveN = true;
        if (((this->VertexNormals).bIsSet == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar3 = *(longlong *)
                 ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data + lVar2);
        *(undefined8 *)&(param_2->Normal).field0_0x0 = *(undefined8 *)(lVar3 + uVar8 * 0xc);
        (param_2->Normal).field0_0x0._s_0.Z = *(float *)(lVar3 + 8 + uVar8 * 0xc);
      }
      if (((this->VertexColors).bIsSet != false) && (param_4)) {
        param_2->bHaveC = true;
        if (((this->VertexColors).bIsSet == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar3 = *(longlong *)((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data + lVar2)
        ;
        *(undefined8 *)&(param_2->Color).field0_0x0 = *(undefined8 *)(lVar3 + uVar8 * 0xc);
        (param_2->Color).field0_0x0._s_0.Z = *(float *)(lVar3 + 8 + uVar8 * 0xc);
      }
      if (((this->VertexUVs).bIsSet != false) && (param_5)) {
        param_2->bHaveUV = true;
        if (((this->VertexUVs).bIsSet == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        (param_2->UV).field0_0x0 =
             *(TVector2<float>_u_0 *)
              (*(longlong *)((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + lVar2) +
              uVar8 * 8);
      }
      return true;
    }
  }
  return false;
}

// GetVertexColor @ 1434c9600

TVector<float> * __thiscall
UE::Geometry::FDynamicMesh3::GetVertexColor
          (FDynamicMesh3 *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  if ((this->VertexColors).bIsSet == false) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar3;
    return __return_storage_ptr__;
  }
  lVar2 = *(longlong *)
           ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  fVar1 = *(float *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// GetVertexFrame @ 1434cafd0

TFrame3<double> * __thiscall
UE::Geometry::FDynamicMesh3::GetVertexFrame
          (FDynamicMesh3 *this,TFrame3<double> *__return_storage_ptr__,int param_1,bool param_2,
          TVector<double> *param_3)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  TFrame3<double> *pTVar9;
  double *pdVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  double dVar15;
  uint uVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  TQuaternion<double>_u_0 local_188;
  TQuaternion<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  TVector<double>_u_0 local_100;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_a8;
  
  dVar6 = __real_3ff0000000000000;
  bVar8 = (this->VertexNormals).bIsSet;
  if ((bVar8 == false) && (param_3 == (TVector<double> *)0x0)) {
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar7;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  }
  else {
    pFVar13 = (this->Vertices).Blocks.AllocatorInstance.Data;
    uVar12 = (ulonglong)(param_1 & 0x1ff);
    uVar14 = (ulonglong)((uint)param_1 >> 9);
    dVar1 = *(double *)(*(longlong *)(pFVar13 + uVar14 * 8) + 0x10 + uVar12 * 0x18);
    pdVar10 = (double *)(*(longlong *)(pFVar13 + uVar14 * 8) + uVar12 * 0x18);
    dVar4 = *pdVar10;
    dVar5 = pdVar10[1];
    local_a8 = dVar1;
    if (param_3 == (TVector<double> *)0x0) {
      if (bVar8 == false) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TFrame3<double> *)(*pcVar3)();
          return pTVar9;
        }
      }
      pFVar13 = (this->Vertices).Blocks.AllocatorInstance.Data;
      lVar2 = *(longlong *)
               ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data + uVar14 * 8);
      pdVar10 = &local_1a0;
      local_1a0 = (double)*(float *)(lVar2 + uVar12 * 0xc);
      local_198 = (double)*(float *)(lVar2 + 4 + uVar12 * 0xc);
      local_190 = (double)*(float *)(lVar2 + 8 + uVar12 * 0xc);
    }
    else {
      dVar15 = (param_3->field0_0x0)._s_0.X;
      dVar19 = (param_3->field0_0x0)._s_0.Y;
      dVar20 = (param_3->field0_0x0)._s_0.Z;
      auVar16._0_8_ = dVar15 * dVar15;
      auVar16._8_8_ = 0;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar19 * dVar19 + auVar16._0_8_ + dVar20 * dVar20;
      auVar17 = sqrtpd(auVar16,auVar17);
      if (auVar17._0_8_ <= 0.0) {
        local_1a8 = 0.0;
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        pdVar10 = &local_1b8;
      }
      else {
        pdVar10 = &local_1b8;
        dVar21 = __real_3ff0000000000000 / auVar17._0_8_;
        local_1b8 = dVar21 * dVar15;
        dStack_1b0 = dVar21 * dVar19;
        local_1a8 = dVar21 * dVar20;
      }
    }
    local_148._s_0.Y = *pdVar10;
    local_128 = pdVar10[1];
    local_190 = pdVar10[2];
    uVar11 = *(int *)(*(longlong *)
                       ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + uVar14 * 8
                       ) + uVar12 * 4) + 1;
    uVar11 = *(uint *)(*(longlong *)
                        ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    uVar12 = *(ulonglong *)
              (*(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) +
              (ulonglong)(uVar11 & 0x1ff) * 0x10);
    if ((uint)uVar12 == param_1) {
      uVar12 = uVar12 >> 0x20;
    }
    else {
      uVar11 = 0xffffffff;
      if ((int)(uVar12 >> 0x20) == param_1) {
        uVar11 = (uint)uVar12;
      }
      uVar12 = (ulonglong)uVar11;
    }
    uVar14 = (ulonglong)((uint)uVar12 & 0x1ff);
    pdVar10 = (double *)(*(longlong *)(pFVar13 + (uVar12 >> 9) * 8) + uVar14 * 0x18);
    dVar20 = *(double *)(*(longlong *)(pFVar13 + (uVar12 >> 9) * 8) + 0x10 + uVar14 * 0x18) -
             local_a8;
    dVar19 = pdVar10[1] - dVar5;
    dVar21 = *pdVar10 - dVar4;
    dVar15 = SQRT(dVar19 * dVar19 + dVar21 * dVar21 + dVar20 * dVar20);
    if (dVar15 <= 0.0) {
      dVar20 = 0.0;
      dVar19 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar15 = dVar6 / dVar15;
      dVar21 = dVar21 * dVar15;
      dVar19 = dVar19 * dVar15;
      dVar20 = dVar20 * dVar15;
    }
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
    local_e0 = dVar21 * local_190 - dVar20 * local_148._s_0.Y;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
    local_c8 = dVar19 * local_148._s_0.Y - dVar21 * local_128;
    local_100._s_0.Y = dVar20 * local_128 - dVar19 * local_190;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar4;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar5;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
    local_148._s_0.X = local_190 * local_e0 - local_128 * local_c8;
    local_130 = local_148._s_0.Y * local_c8 - local_190 * local_100._s_0.Y;
    local_118 = local_128 * local_100._s_0.Y - local_148._s_0.Y * local_e0;
    if (param_2) {
      uVar11 = (uint)__xmm_80000000000000008000000000000000;
      uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_148._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)local_100._s_0.Y >> 0x20) ^ uVar18,
                            SUB84(local_100._s_0.Y,0) ^ uVar11);
      local_108 = CONCAT44((uint)((ulonglong)local_c8 >> 0x20) ^ uVar18,SUB84(local_c8,0) ^ uVar11);
      local_120 = CONCAT44((uint)((ulonglong)local_e0 >> 0x20) ^ uVar18,SUB84(local_e0,0) ^ uVar11);
      local_188._s_0.X = 0.0;
      local_188._s_0.W = dVar6;
      local_188._s_0.Y = 0.0;
      local_188._s_0.Z = 0.0;
      local_110 = local_190;
      TQuaternion<double>::SetFromRotationMatrix
                ((TQuaternion<double> *)&local_188._s_0,(TMatrix3<double> *)&local_148._s_0);
    }
    else {
      local_168._s_0.X = 0.0;
      local_168._s_0.W = dVar6;
      local_168._s_0.Y = 0.0;
      local_168._s_0.Z = 0.0;
      local_100._s_0.X = local_148._s_0.X;
      local_100._s_0.Z = local_148._s_0.Y;
      local_e8 = local_130;
      local_d8 = local_128;
      local_d0 = local_118;
      local_c0 = local_190;
      TQuaternion<double>::SetFromRotationMatrix
                ((TQuaternion<double> *)&local_168._s_0,(TMatrix3<double> *)&local_100._s_0);
      local_188._16_4_ = local_168._16_4_;
      local_188._20_4_ = local_168._20_4_;
      local_188._24_4_ = local_168._24_4_;
      local_188._28_4_ = local_168._28_4_;
      local_188._s_0.X = local_168._s_0.X;
      local_188._s_0.Y = local_168._s_0.Y;
    }
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = local_188._s_0.X;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = local_188._s_0.Y;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 0x10) =
         local_188._16_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 0x14) =
         local_188._20_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 0x18) =
         local_188._24_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 0x1c) =
         local_188._28_4_;
  }
  return __return_storage_ptr__;
}

// GetVertexGroups @ 1434cb4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMesh3::GetVertexGroups(FDynamicMesh3 *this,int param_1,FIndex4i *param_2)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uStack_5c;
  BaseValueIterator local_48;
  
  uVar4 = _UNK_15060db28;
  *(undefined8 *)&param_2->field0_0x0 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uVar4;
  if ((this->TriangleGroups).bIsSet != false) {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,&this->VertexEdgeLists,param_1,false);
    lVar7 = 0;
    while( true ) {
      if ((((local_48.ListSet == &this->VertexEdgeLists) && (local_48.ListIndex == param_1)) &&
          (local_48.iCur == -1)) && (local_48.cur_ptr == -1)) {
        return true;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data +
                 ((local_48._32_8_ & 0xffffffff) >> 9) * 8) +
                (ulonglong)(local_48.cur_value & 0x1ff) * 0x10 + 8);
      if (((this->TriangleGroups).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar1 = *(int *)(*(longlong *)
                        ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                        ((uVar3 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar3 & 0x1ff) * 4);
      if ((((param_2->field0_0x0)._s_0.A != iVar1) && ((param_2->field0_0x0)._s_0.B != iVar1)) &&
         (((param_2->field0_0x0)._s_0.C != iVar1 && ((param_2->field0_0x0)._s_0.D != iVar1)))) {
        (param_2->field0_0x0).ABCD[lVar7] = iVar1;
        lVar7 = lVar7 + 1;
      }
      if (lVar7 == 4) break;
      uStack_5c = (uint)(uVar3 >> 0x20);
      lVar8 = lVar7;
      if (uStack_5c != 0xffffffff) {
        if (((this->TriangleGroups).bIsSet == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        iVar1 = *(int *)(*(longlong *)
                          ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uStack_5c >> 9) * 8) + (ulonglong)(uStack_5c & 0x1ff) * 4);
        if (((((param_2->field0_0x0)._s_0.A != iVar1) && ((param_2->field0_0x0)._s_0.B != iVar1)) &&
            ((param_2->field0_0x0)._s_0.C != iVar1)) && ((param_2->field0_0x0)._s_0.D != iVar1)) {
          lVar8 = lVar7 + 1;
          (param_2->field0_0x0).ABCD[lVar7] = iVar1;
          if (lVar8 == 4) {
            return false;
          }
        }
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
      lVar7 = lVar8;
    }
  }
  return false;
}

// GetVertexInfo @ 1434cb6a0

FVertexInfo * __thiscall
UE::Geometry::FDynamicMesh3::GetVertexInfo
          (FDynamicMesh3 *this,FVertexInfo *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
  uVar8 = (ulonglong)((uint)param_1 >> 9);
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->Normal).field0_0x0 = 0;
  uVar7 = (ulonglong)(param_1 & 0x1ff);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Normal).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Color).field0_0x0 + 4) = 0;
  (__return_storage_ptr__->UV).field0_0x0 = (TVector2<float>_u_0)0x0;
  __return_storage_ptr__->bHaveN = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->bHaveC = false;
  __return_storage_ptr__->bHaveUV = false;
  *(undefined5 *)&__return_storage_ptr__->field_0x3b = 0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->Normal).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->Normal).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->Color).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->Color).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->UV).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  lVar4 = *(longlong *)((this->Vertices).Blocks.AllocatorInstance.Data + uVar8 * 8);
  pdVar1 = (double *)(lVar4 + uVar7 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + uVar7 * 0x18);
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = *pdVar1;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = dVar2;
  if ((this->VertexNormals).bIsSet != false) {
    __return_storage_ptr__->bHaveN = true;
    if ((this->VertexNormals).bIsSet == false) {
      uVar9 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      uVar10 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20);
      uVar6 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    }
    else {
      lVar4 = *(longlong *)
               ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data + uVar8 * 8);
      uVar3 = *(undefined8 *)(lVar4 + uVar7 * 0xc);
      uVar9 = (undefined4)uVar3;
      uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar6 = *(float *)(lVar4 + 8 + uVar7 * 0xc);
    }
    *(ulonglong *)&(__return_storage_ptr__->Normal).field0_0x0 = CONCAT44(uVar10,uVar9);
    (__return_storage_ptr__->Normal).field0_0x0._s_0.Z = (float)uVar6;
  }
  if ((this->VertexColors).bIsSet != false) {
    __return_storage_ptr__->bHaveC = true;
    if ((this->VertexColors).bIsSet == false) {
      uVar9 = (undefined4)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      uVar10 = (undefined4)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20)
      ;
      uVar6 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    }
    else {
      lVar4 = *(longlong *)
               ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data + uVar8 * 8);
      uVar3 = *(undefined8 *)(lVar4 + uVar7 * 0xc);
      uVar9 = (undefined4)uVar3;
      uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar6 = *(float *)(lVar4 + 8 + uVar7 * 0xc);
    }
    *(ulonglong *)&(__return_storage_ptr__->Color).field0_0x0 = CONCAT44(uVar10,uVar9);
    (__return_storage_ptr__->Color).field0_0x0._s_0.Z = (float)uVar6;
  }
  if ((this->VertexUVs).bIsSet != false) {
    __return_storage_ptr__->bHaveUV = true;
    if ((this->VertexUVs).bIsSet == false) {
      (__return_storage_ptr__->UV).field0_0x0._s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->UV).field0_0x0 =
         *(TVector2<float>_u_0 *)
          (*(longlong *)((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + uVar8 * 8) +
          uVar7 * 8);
  }
  return __return_storage_ptr__;
}

// GetVertexNormal @ 1434cb800

TVector<float> * __thiscall
UE::Geometry::FDynamicMesh3::GetVertexNormal
          (FDynamicMesh3 *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  if ((this->VertexNormals).bIsSet == false) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar3;
    return __return_storage_ptr__;
  }
  lVar2 = *(longlong *)
           ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  fVar1 = *(float *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// GetVtxBoundaryEdges @ 1434cb920

int __thiscall
UE::Geometry::FDynamicMesh3::GetVtxBoundaryEdges
          (FDynamicMesh3 *this,int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  BaseValueIterator local_48;
  
  if (((param_1 < 0) ||
      ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    return 0;
  }
  iVar2 = 0;
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_48,&this->VertexEdgeLists,param_1,false);
LAB_1434cb9a4:
  do {
    if (((local_48.ListSet == &this->VertexEdgeLists) && (local_48.ListIndex == param_1)) &&
       ((local_48.iCur == -1 && (local_48.cur_ptr == -1)))) {
      return iVar2;
    }
    uVar1 = local_48.cur_value;
    if (*(int *)(*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data +
                  ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                (ulonglong)(uVar1 & 0x1ff) * 0x10) == -1) {
      if (iVar2 == 0) {
        iVar2 = 1;
        *param_2 = uVar1;
        FSmallListSet::BaseValueIterator::GotoNext(&local_48);
        goto LAB_1434cb9a4;
      }
      if (iVar2 == 1) {
        *param_3 = uVar1;
      }
      iVar2 = iVar2 + 1;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  } while( true );
}

// GetVtxNbrhood @ 1434cba50

void __thiscall
UE::Geometry::FDynamicMesh3::GetVtxNbrhood
          (FDynamicMesh3 *this,int param_1,int param_2,int *param_3,int *param_4,int *param_5,
          int *param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  iVar4 = piVar1[2];
  iVar2 = piVar1[3];
  iVar3 = *piVar1;
  if (*piVar1 == param_2) {
    iVar3 = piVar1[1];
  }
  *param_3 = iVar3;
  *param_6 = iVar4;
  iVar4 = IndexUtil::FindTriOtherVtx(param_2,*param_3,&this->Triangles,iVar4);
  *param_4 = iVar4;
  *param_7 = iVar2;
  if (iVar2 != -1) {
    iVar4 = IndexUtil::FindTriOtherVtx(param_2,*param_3,&this->Triangles,iVar2);
    *param_5 = iVar4;
    return;
  }
  *param_7 = -1;
  return;
}

// GetVtxOneRingCentroid @ 1434cbb30

void __thiscall
UE::Geometry::FDynamicMesh3::GetVtxOneRingCentroid
          (FDynamicMesh3 *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  BaseValueIterator local_38;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar2;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar6 = 0;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_38,&this->VertexEdgeLists,param_1,false);
    while (((local_38.ListSet != &this->VertexEdgeLists || (local_38.ListIndex != param_1)) ||
           ((local_38.iCur != -1 || (local_38.cur_ptr != -1))))) {
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data +
                 ((local_38._32_8_ & 0xffffffff) >> 9) * 8) +
               (ulonglong)(local_38.cur_value & 0x1ff) * 0x10);
      uVar5 = uVar4 >> 0x20;
      if ((uint)uVar4 != param_1) {
        uVar3 = 0xffffffff;
        if ((int)(uVar4 >> 0x20) == param_1) {
          uVar3 = (uint)uVar4;
        }
        uVar5 = (ulonglong)uVar3;
      }
      uVar4 = (ulonglong)((uint)uVar5 & 0x1ff);
      iVar6 = iVar6 + 1;
      lVar1 = *(longlong *)((this->Vertices).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8);
      (param_2->field0_0x0)._s_0.X =
           (param_2->field0_0x0)._s_0.X + *(double *)(lVar1 + uVar4 * 0x18);
      (param_2->field0_0x0)._s_0.Y =
           *(double *)(lVar1 + 8 + uVar4 * 0x18) + (param_2->field0_0x0)._s_0.Y;
      (param_2->field0_0x0)._s_0.Z =
           *(double *)(lVar1 + 0x10 + uVar4 * 0x18) + (param_2->field0_0x0)._s_0.Z;
      FSmallListSet::BaseValueIterator::GotoNext(&local_38);
    }
    if (0 < iVar6) {
      dVar7 = __real_3ff0000000000000 / (double)iVar6;
      (param_2->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X * dVar7;
      (param_2->field0_0x0)._s_0.Y = (param_2->field0_0x0)._s_0.Y * dVar7;
      (param_2->field0_0x0)._s_0.Z = dVar7 * (param_2->field0_0x0)._s_0.Z;
    }
  }
  return;
}

// GetVtxSingleTriangle @ 1434cbce0

int __thiscall UE::Geometry::FDynamicMesh3::GetVtxSingleTriangle(FDynamicMesh3 *this,int param_1)

{
  BaseValueIterator local_38;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_38,&this->VertexEdgeLists,param_1,false);
    if (((local_38.ListSet != &this->VertexEdgeLists) || (local_38.ListIndex != param_1)) ||
       ((local_38.iCur != -1 || (local_38.cur_ptr != -1)))) {
      return *(int *)(*(longlong *)
                       ((this->Edges).Blocks.AllocatorInstance.Data +
                       ((local_38._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                     (ulonglong)(local_38.cur_value & 0x1ff) * 0x10);
    }
  }
  return -1;
}

// GetVtxTriangleCount @ 1434cbdc0

int __thiscall UE::Geometry::FDynamicMesh3::GetVtxTriangleCount(FDynamicMesh3 *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  <lambda_1> local_28;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_28.vID = local_res10;
    local_28.N = local_res8;
    local_res8[0] = 0;
    local_res10[0] = param_1;
    local_28.__this = this;
    FSmallListSet::Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangleCount_::__l2::<lambda_1>_>
              (&this->VertexEdgeLists,param_1,&local_28);
    return local_res8[0];
  }
  return -1;
}

// HasUnusedVertices @ 1434ce910

bool __thiscall UE::Geometry::FDynamicMesh3::HasUnusedVertices(FDynamicMesh3 *this)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = (this->VertexRefCounts).RefCounts.CurBlockUsed +
          (this->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if (0 < iVar3) {
    do {
      sVar2 = *(short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2);
      if (sVar2 == -1) {
        sVar2 = 0;
      }
      if (sVar2 == 1) {
        return true;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return false;
}

// InsertTriangle @ 1434d49e0

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::InsertTriangle
          (FDynamicMesh3 *this,int param_1,FIndex3i *param_2,int param_3,bool param_4)

{
  short *psVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  EMeshResult EVar9;
  TDynamicVector<int,512> *this_00;
  int iVar10;
  int local_res20 [2];
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return Failed_TriangleAlreadyExists;
  }
  uVar8 = (param_2->field0_0x0)._s_0.A;
  if ((((((int)uVar8 < 0) ||
        (iVar10 = (this->VertexRefCounts).RefCounts.CurBlockUsed +
                  (this->VertexRefCounts).RefCounts.CurBlock * 0x200, iVar10 <= (int)uVar8)) ||
       ((pFVar3 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                                    (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) ||
        ((uVar7 = (param_2->field0_0x0)._s_0.B, (int)uVar7 < 0 || (iVar10 <= (int)uVar7)))))) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar7 >> 9) * 8) +
                                   (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))) ||
     (((uVar2 = (param_2->field0_0x0)._s_0.C, (int)uVar2 < 0 || (iVar10 <= (int)uVar2)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))))) {
    EVar9 = Failed_NotAVertex;
  }
  else if (((uVar8 == uVar7) || (uVar8 == uVar2)) || (uVar7 == uVar2)) {
    EVar9 = Failed_InvalidNeighbourhood;
  }
  else {
    local_res20[0] = param_3;
    uVar6 = FindEdge(this,uVar8,uVar7);
    uVar7 = FindEdge(this,uVar7,uVar2);
    uVar8 = FindEdge(this,uVar2,uVar8);
    if ((((uVar6 == 0xffffffff) ||
         (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
                   0xc + (ulonglong)(uVar6 & 0x1ff) * 0x10) == -1)) &&
        ((uVar7 == 0xffffffff ||
         (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                   0xc + (ulonglong)(uVar7 & 0x1ff) * 0x10) == -1)))) &&
       ((uVar8 == 0xffffffff ||
        (*(int *)(*(longlong *)
                   ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) + 0xc
                 + (ulonglong)(uVar8 & 0x1ff) * 0x10) == -1)))) {
      if (param_4) {
        bVar5 = FRefCountVector::AllocateAtUnsafe(&this->TriangleRefCounts,param_1);
      }
      else {
        bVar5 = FRefCountVector::AllocateAt(&this->TriangleRefCounts,param_1);
      }
      if (bVar5 == false) {
        EVar9 = Failed_CannotAllocateTriangle;
      }
      else {
        TDynamicVector<UE::Geometry::FIndex3i,512>::InsertAt(&this->Triangles,param_2,param_1);
        if ((this->TriangleGroups).bIsSet != false) {
          this_00 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator->
                              (&this->TriangleGroups);
          TDynamicVector<int,512>::InsertAt(this_00,local_res20,param_1);
          iVar10 = local_res20[0] + 1;
          if (local_res20[0] + 1 < this->GroupIDCounter) {
            iVar10 = this->GroupIDCounter;
          }
          this->GroupIDCounter = iVar10;
        }
        uVar2 = (param_2->field0_0x0)._s_0.A;
        psVar1 = (short *)(*(longlong *)
                            ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 2);
        *psVar1 = *psVar1 + 1;
        uVar2 = (param_2->field0_0x0)._s_0.B;
        psVar1 = (short *)(*(longlong *)
                            ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 2);
        *psVar1 = *psVar1 + 1;
        uVar2 = (param_2->field0_0x0)._s_0.C;
        psVar1 = (short *)(*(longlong *)
                            ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 2);
        *psVar1 = *psVar1 + 1;
        AddTriangleEdge(this,param_1,(param_2->field0_0x0)._s_0.A,(param_2->field0_0x0)._s_0.B,0,
                        uVar6);
        AddTriangleEdge(this,param_1,(param_2->field0_0x0)._s_0.B,(param_2->field0_0x0)._s_0.C,1,
                        uVar7);
        AddTriangleEdge(this,param_1,(param_2->field0_0x0)._s_0.C,(param_2->field0_0x0)._s_0.A,2,
                        uVar8);
        pFVar4 = (this->AttributeSet).Ptr;
        if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
          (**(code **)(pFVar4->_padding_ + 8))(pFVar4,param_1,1);
        }
        UpdateChangeStamps(this,true,true);
        EVar9 = Ok;
      }
    }
    else {
      EVar9 = Failed_WouldCreateNonmanifoldEdge;
    }
  }
  return EVar9;
}

// InsertVertex @ 1434d4d80

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::InsertVertex
          (FDynamicMesh3 *this,int param_1,FVertexInfo *param_2,bool param_3)

{
  FMutex *pFVar1;
  uint *puVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  FDynamicMeshAttributeSet *pFVar5;
  bool bVar6;
  uint uVar7;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar8;
  TDynamicVector<UE::Math::TVector2<float>,512> *this_00;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  TVector2<float>_u_0 local_res8 [2];
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return Failed_VertexAlreadyExists;
  }
  if (param_3) {
    bVar6 = FRefCountVector::AllocateAtUnsafe(&this->VertexRefCounts,param_1);
  }
  else {
    bVar6 = FRefCountVector::AllocateAt(&this->VertexRefCounts,param_1);
  }
  if (bVar6 == false) {
    return Failed_CannotAllocateVertex;
  }
  TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
            (&this->Vertices,&param_2->Position,param_1);
  if ((this->VertexNormals).bIsSet != false) {
    local_res8[0] = (TVector2<float>_u_0)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
    uVar11 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    if (param_2->bHaveN != false) {
      local_res8[0] = *(TVector2<float>_u_0 *)&(param_2->Normal).field0_0x0;
      uVar11 = (param_2->Normal).field0_0x0._s_0.Z;
    }
    pTVar8 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator->
                       (&this->VertexNormals);
    uVar7 = pTVar8->CurBlockUsed;
    uVar9 = pTVar8->CurBlock;
    uVar10 = uVar9 * 0x200 + uVar7;
    if (param_1 == uVar10) {
      if (uVar7 == 0x200) {
        if (uVar9 == (pTVar8->Blocks).ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(pTVar8);
        }
        pTVar8->CurBlock = pTVar8->CurBlock + 1;
        uVar7 = 0;
        uVar9 = pTVar8->CurBlock;
        pTVar8->CurBlockUsed = 0;
      }
      lVar4 = *(longlong *)((pTVar8->Blocks).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
      *(TVector2<float>_u_0 *)(lVar4 + (longlong)(int)uVar7 * 0xc) = local_res8[0];
      *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar7 * 0xc) = uVar11;
      pTVar8->CurBlockUsed = pTVar8->CurBlockUsed + 1;
    }
    else if (uVar10 < (uint)param_1) {
      TDynamicVector<UE::Math::TVector<float>,512>::Resize(pTVar8,param_1);
      uVar7 = pTVar8->CurBlockUsed;
      if (uVar7 == 0x200) {
        if (pTVar8->CurBlock == (pTVar8->Blocks).ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(pTVar8);
        }
        pTVar8->CurBlock = pTVar8->CurBlock + 1;
        uVar7 = 0;
        pTVar8->CurBlockUsed = 0;
      }
      lVar4 = *(longlong *)
               ((pTVar8->Blocks).AllocatorInstance.Data + (longlong)(int)pTVar8->CurBlock * 8);
      *(TVector2<float>_u_0 *)(lVar4 + (longlong)(int)uVar7 * 0xc) = local_res8[0];
      *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar7 * 0xc) = uVar11;
      pTVar8->CurBlockUsed = pTVar8->CurBlockUsed + 1;
    }
    else {
      lVar4 = *(longlong *)
               ((pTVar8->Blocks).AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
      *(TVector2<float>_u_0 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc) = local_res8[0];
      *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) = uVar11;
    }
  }
  if ((this->VertexColors).bIsSet != false) {
    local_res8[0] = (TVector2<float>_u_0)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    uVar11 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    if (param_2->bHaveC != false) {
      local_res8[0] = *(TVector2<float>_u_0 *)&(param_2->Color).field0_0x0;
      uVar11 = (param_2->Color).field0_0x0._s_0.Z;
    }
    pTVar8 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator->
                       (&this->VertexColors);
    uVar7 = pTVar8->CurBlockUsed;
    uVar9 = pTVar8->CurBlock;
    uVar10 = uVar9 * 0x200 + uVar7;
    if (param_1 == uVar10) {
      if (uVar7 == 0x200) {
        if (uVar9 == (pTVar8->Blocks).ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(pTVar8);
        }
        pTVar8->CurBlock = pTVar8->CurBlock + 1;
        uVar7 = 0;
        uVar9 = pTVar8->CurBlock;
        pTVar8->CurBlockUsed = 0;
      }
    }
    else {
      if ((uint)param_1 <= uVar10) {
        lVar4 = *(longlong *)
                 ((pTVar8->Blocks).AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
        *(TVector2<float>_u_0 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc) = local_res8[0];
        *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) = uVar11;
        goto LAB_1434d5037;
      }
      TDynamicVector<UE::Math::TVector<float>,512>::Resize(pTVar8,param_1);
      uVar7 = pTVar8->CurBlockUsed;
      if (uVar7 == 0x200) {
        if (pTVar8->CurBlock == (pTVar8->Blocks).ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(pTVar8);
        }
        pTVar8->CurBlock = pTVar8->CurBlock + 1;
        pTVar8->CurBlockUsed = 0;
        uVar7 = 0;
      }
      uVar9 = pTVar8->CurBlock;
    }
    lVar4 = *(longlong *)((pTVar8->Blocks).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
    *(TVector2<float>_u_0 *)(lVar4 + (longlong)(int)uVar7 * 0xc) = local_res8[0];
    *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar7 * 0xc) = uVar11;
    pTVar8->CurBlockUsed = pTVar8->CurBlockUsed + 1;
  }
LAB_1434d5037:
  if ((this->VertexUVs).bIsSet != false) {
    local_res8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    if (param_2->bHaveUV != false) {
      local_res8[0] = (param_2->UV).field0_0x0;
    }
    this_00 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::operator->
                        (&this->VertexUVs);
    TDynamicVector<UE::Math::TVector2<float>,512>::InsertAt
              (this_00,(TVector2<float> *)&local_res8[0]._s_0,param_1);
  }
  if (param_1 < (int)((this->VertexEdgeLists).ListHeads.CurBlock * 0x200 +
                     (this->VertexEdgeLists).ListHeads.CurBlockUsed)) {
    FSmallListSet::Clear(&this->VertexEdgeLists,param_1);
  }
  FSmallListSet::AllocateAt(&this->VertexEdgeLists,param_1);
  pFVar5 = (this->AttributeSet).Ptr;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,param_1,1);
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar6 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar6) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar6 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar6) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return Ok;
}

// IsBoundaryTriangle @ 1434d82e0

bool __thiscall UE::Geometry::FDynamicMesh3::IsBoundaryTriangle(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    uVar5 = (ulonglong)(param_1 & 0x1ff);
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + uVar5 * 2) - 1U) < 0xfffe) {
      pFVar3 = (this->Edges).Blocks.AllocatorInstance.Data;
      lVar4 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1);
      lVar1 = lVar4 + uVar5 * 0xc;
      uVar2 = *(uint *)(lVar4 + uVar5 * 0xc);
      if (((*(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0xc +
                    (ulonglong)(uVar2 & 0x1ff) * 0x10) == -1) ||
          (uVar2 = *(uint *)(lVar1 + 4),
          *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0xc +
                  (ulonglong)(uVar2 & 0x1ff) * 0x10) == -1)) ||
         (uVar2 = *(uint *)(lVar1 + 8),
         *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar2 & 0x1ff) * 0x10) == -1)) {
        return true;
      }
    }
  }
  return false;
}

// IsBoundaryVertex @ 1434d83c0

bool __thiscall UE::Geometry::FDynamicMesh3::IsBoundaryVertex(FDynamicMesh3 *this,int param_1)

{
  BaseValueIterator local_38;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_38,&this->VertexEdgeLists,param_1,false);
    while (((local_38.ListSet != &this->VertexEdgeLists || (local_38.ListIndex != param_1)) ||
           ((local_38.iCur != -1 || (local_38.cur_ptr != -1))))) {
      if (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data +
                    ((local_38._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                  (ulonglong)(local_38.cur_value & 0x1ff) * 0x10) == -1) {
        return true;
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_38);
    }
  }
  return false;
}

// IsBowtieVertex @ 1434e59d0

bool __thiscall UE::Geometry::FDynamicMesh3::IsBowtieVertex(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  BaseValueIterator local_48;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->VertexRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar2 = (ulonglong)(param_1 & 0x1ff) * 4;
      uVar9 = *(uint *)(lVar2 + *(longlong *)
                                 ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data +
                                 lVar1));
      if ((uVar9 != 0xffffffff) &&
         (iVar3 = *(int *)(*(longlong *)
                            ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4),
         iVar3 != 0)) {
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  (&local_48,&this->VertexEdgeLists,param_1,false);
        while( true ) {
          if ((((local_48.ListSet == &this->VertexEdgeLists) && (local_48.ListIndex == param_1)) &&
              (local_48.iCur == -1)) && (local_48.cur_ptr == -1)) {
            pFVar14 = (this->Edges).Blocks.AllocatorInstance.Data;
            bVar15 = false;
            goto LAB_1434e5b0a;
          }
          pFVar14 = (this->Edges).Blocks.AllocatorInstance.Data;
          if ((int)((ulonglong)
                    *(undefined8 *)
                     (*(longlong *)(pFVar14 + ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                     (ulonglong)(local_48.cur_value & 0x1ff) * 0x10) >> 0x20) == -1) break;
          FSmallListSet::BaseValueIterator::GotoNext(&local_48);
        }
        bVar5 = true;
        bVar15 = true;
        if (local_48.cur_value == 0xffffffff) {
LAB_1434e5b0a:
          bVar5 = bVar15;
          uVar9 = *(int *)(*(longlong *)
                            ((this->VertexEdgeLists).ListHeads.Blocks.AllocatorInstance.Data + lVar1
                            ) + lVar2) + 1;
          local_48._32_8_ =
               ZEXT48(*(uint *)(*(longlong *)
                                 ((this->VertexEdgeLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4));
        }
        uVar13 = local_48._32_8_ & 0xffffffff;
        iVar12 = 1;
        uVar9 = *(uint *)(*(longlong *)(pFVar14 + ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                         (ulonglong)((uint)local_48._32_8_ & 0x1ff) * 0x10);
        while( true ) {
          lVar2 = *(longlong *)
                   ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
          lVar1 = (ulonglong)(uVar9 & 0x1ff) * 0xc;
          lVar11 = *(longlong *)
                    ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar9 >> 9) * 8) + lVar1;
          if (*(int *)(lVar2 + lVar1) == param_1) {
            lVar7 = 0;
            lVar8 = 8;
          }
          else if (*(int *)(lVar2 + 4 + lVar1) == param_1) {
            lVar7 = 4;
            lVar8 = 0;
          }
          else {
            lVar7 = 8;
            lVar8 = 4;
            if (*(int *)(lVar2 + 8 + lVar1) != param_1) {
              lVar7 = -4;
            }
          }
          uVar10 = *(uint *)(lVar7 + lVar11);
          if (uVar10 == (uint)uVar13) {
            uVar10 = *(uint *)(lVar8 + lVar11);
          }
          uVar13 = (ulonglong)uVar10;
          if (uVar10 == (uint)local_48._32_8_) break;
          uVar4 = *(undefined8 *)
                   (*(longlong *)(pFVar14 + (ulonglong)(uVar10 >> 9) * 8) + 8 +
                   (ulonglong)(uVar10 & 0x1ff) * 0x10);
          uVar10 = (uint)uVar4;
          bVar15 = uVar10 == uVar9;
          uVar9 = uVar10;
          if (bVar15) {
            uVar9 = (uint)((ulonglong)uVar4 >> 0x20);
          }
          if (uVar9 == 0xffffffff) break;
          iVar12 = iVar12 + 1;
        }
        iVar6 = iVar3 + -1;
        if (!bVar5) {
          iVar6 = iVar3;
        }
        return iVar6 != iVar12;
      }
    }
  }
  return false;
}

// IsClosed @ 1434e5c60

bool __thiscall UE::Geometry::FDynamicMesh3::IsClosed(FDynamicMesh3 *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if ((this->TriangleRefCounts).UsedCount == 0) {
    return false;
  }
  uVar2 = 0;
  iVar3 = (this->EdgeRefCounts).RefCounts.CurBlockUsed +
          (this->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if (0 < iVar3) {
    do {
      if ((-1 < (int)uVar2) && ((int)uVar2 < iVar3)) {
        lVar1 = (ulonglong)(uVar2 >> 9) * 8;
        if (((ushort)(*(short *)(*(longlong *)
                                  ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  lVar1) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar1) + 0xc +
                    (ulonglong)(uVar2 & 0x1ff) * 0x10) == -1)) {
          return false;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar3);
  }
  return true;
}

// IsGroupBoundaryEdge @ 1434e6390

bool __thiscall UE::Geometry::FDynamicMesh3::IsGroupBoundaryEdge(FDynamicMesh3 *this,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((this->TriangleGroups).bIsSet != false) {
    uVar1 = *(ulonglong *)
             (*(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
              8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar2 = (uint)(uVar1 >> 0x20);
    if (uVar2 != 0xffffffff) {
      return *(int *)(*(longlong *)
                       ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                       (uVar1 >> 0x29) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4) !=
             *(int *)(*(longlong *)
                       ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                       ((uVar1 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar1 & 0x1ff) * 4);
    }
  }
  return false;
}

// IsGroupBoundaryVertex @ 1434e6410

bool __thiscall UE::Geometry::FDynamicMesh3::IsGroupBoundaryVertex(FDynamicMesh3 *this,int param_1)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uStack_4c;
  BaseValueIterator local_48;
  
  if ((this->TriangleGroups).bIsSet == false) {
LAB_1434e657f:
    bVar5 = false;
  }
  else {
    iVar7 = -1;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,&this->VertexEdgeLists,param_1,false);
    while( true ) {
      if ((((local_48.ListSet == &this->VertexEdgeLists) && (local_48.ListIndex == param_1)) &&
          (local_48.iCur == -1)) && (local_48.cur_ptr == -1)) goto LAB_1434e657f;
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data +
                 ((local_48._32_8_ & 0xffffffff) >> 9) * 8) +
                (ulonglong)(local_48.cur_value & 0x1ff) * 0x10 + 8);
      if (((this->TriangleGroups).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pTVar1 = &(this->TriangleGroups).TypedValue.Blocks;
      iVar2 = *(int *)(*(longlong *)
                        ((pTVar1->AllocatorInstance).Data + ((uVar4 & 0xffffffff) >> 9) * 8) +
                      (ulonglong)((uint)uVar4 & 0x1ff) * 4);
      if ((iVar7 != iVar2) && (bVar5 = iVar7 != -1, iVar7 = iVar2, bVar5)) break;
      uStack_4c = (uint)(uVar4 >> 0x20);
      if (uStack_4c != 0xffffffff) {
        if (((this->TriangleGroups).bIsSet == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (iVar7 != *(int *)(*(longlong *)
                               ((pTVar1->AllocatorInstance).Data + (ulonglong)(uStack_4c >> 9) * 8)
                             + (ulonglong)(uStack_4c & 0x1ff) * 4)) break;
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
    bVar5 = true;
  }
  return bVar5;
}

// IsGroupJunctionVertex @ 1434e65b0

bool __thiscall UE::Geometry::FDynamicMesh3::IsGroupJunctionVertex(FDynamicMesh3 *this,int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res8;
  BaseValueIterator local_48;
  
  if ((this->TriangleGroups).bIsSet != false) {
    iVar9 = -1;
    iVar8 = -1;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_48,&this->VertexEdgeLists,param_1,false);
    while ((((local_48.ListSet != &this->VertexEdgeLists || (local_48.ListIndex != param_1)) ||
            (local_48.iCur != -1)) || (local_48.cur_ptr != -1))) {
      lVar7 = 0;
      local_res8 = *(undefined8 *)
                    (*(longlong *)
                      ((this->Edges).Blocks.AllocatorInstance.Data +
                      ((local_48._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                    (ulonglong)(local_48.cur_value & 0x1ff) * 0x10);
      do {
        iVar4 = iVar9;
        if (*(int *)((longlong)&local_res8 + lVar7 * 4) != -1) {
          if (((this->TriangleGroups).bIsSet == false) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar1 = *(uint *)((longlong)&local_res8 + lVar7 * 4);
          iVar2 = *(int *)(*(longlong *)
                            ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
          if (((iVar2 != iVar9) && (iVar2 != iVar8)) &&
             ((iVar4 = iVar2, iVar9 != -1 &&
              (bVar5 = iVar8 != -1, iVar8 = iVar2, iVar4 = iVar9, bVar5)))) {
            return true;
          }
        }
        iVar9 = iVar4;
        lVar7 = lVar7 + 1;
      } while (lVar7 < 2);
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
    }
  }
  return false;
}

// IsSameAs @ 1434ec260

bool __thiscall
UE::Geometry::FDynamicMesh3::IsSameAs
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,FSameAsOptions *param_2)

{
  bool bVar1;
  
  bVar1 = IsSameAs_Helper(this,param_1,param_2,(FMeshDifferenceInfo *)0x0);
  return bVar1;
}

// IsSameAs @ 1434ec270

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMesh3::IsSameAs
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,FSameAsOptions *param_2,
          FMeshDifferenceInfo *param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  TDynamicVector<int,512> *pTVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  FRefCountVector *pFVar22;
  FString *pFVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  char cVar34;
  int iVar35;
  ForAnyElementType FVar36;
  double dVar37;
  undefined8 uStackX_20;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> TStack_388;
  TDynamicVector<int,512> TStack_368;
  char cStack_350;
  IndexIterator IStack_348;
  FString FStack_338;
  FString FStack_328;
  IndexIterator IStack_318;
  FString FStack_308;
  IndexIterator IStack_2f8;
  FString FStack_2e8;
  FString FStack_2d8;
  undefined8 uStack_2c8;
  BaseIterator BStack_2c0;
  int iStack_2b0;
  int iStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_284;
  BaseIterator BStack_278;
  BaseIterator BStack_268;
  BaseIterator BStack_258;
  FDynamicMesh3 *pFStack_248;
  FDynamicMesh3 *pFStack_240;
  FSameAsOptions *pFStack_238;
  undefined8 uStack_230;
  undefined8 uStack_224;
  undefined8 uStack_218;
  BaseIterator BStack_208;
  BaseIterator BStack_1f8;
  undefined1 auStack_1e8 [16];
  BaseIterator BStack_1d8;
  BaseIterator BStack_1c8;
  undefined4 uStack_1b8;
  FString FStack_1b0;
  undefined8 uStack_1a0;
  EIDType EStack_198;
  FRefCountVector *pFStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  IndexIterator IStack_168;
  IndexIterator IStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  IndexIterator IStack_f8;
  IndexIterator IStack_e8;
  IndexIterator IStack_d8;
  IndexIterator IStack_c8;
  IndexIterator IStack_b8;
  IndexIterator IStack_a8;
  IndexIterator IStack_98;
  IndexIterator IStack_88;
  IndexIterator aIStack_78 [3];
  
  pFVar26 = (FScriptContainerElement *)0x0;
  iVar35 = 0;
  if (param_3 != (FMeshDifferenceInfo *)0x0) {
    uStack_1b8 = 0;
    FStack_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1b0.Data._8_8_ = ___xmm_ffffffffffffffff0000000000000000;
    uStack_1a0 = _UNK_15076cb68;
    EStack_198 = None;
    param_3->Reason = Unknown;
    ::FString::operator=(&param_3->Detail,&FStack_1b0);
    param_3->ID = (int)uStack_1a0;
    param_3->OtherID = uStack_1a0._4_4_;
    param_3->IDType = EStack_198;
    if (FStack_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b0.Data.AllocatorInstance.Data);
    }
  }
  pFStack_248 = this;
  pFStack_240 = param_1;
  pFStack_238 = param_2;
  if ((this->VertexRefCounts).UsedCount != (param_1->VertexRefCounts).UsedCount) {
    if (param_3 == (FMeshDifferenceInfo *)0x0) {
      return false;
    }
    param_3->Reason = VertexCount;
    ::FString::PrintfImpl(&FStack_138,L"Vertex Count: %d != %d");
    ::FString::operator=(&param_3->Detail,&FStack_138);
LAB_1434ed2e4:
    if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
    }
    return false;
  }
  pFStack_190 = &this->TriangleRefCounts;
  if ((this->TriangleRefCounts).UsedCount != (param_1->TriangleRefCounts).UsedCount) {
    if (param_3 == (FMeshDifferenceInfo *)0x0) {
      return false;
    }
    param_3->Reason = TriangleCount;
    ::FString::PrintfImpl(&FStack_108,L"Triangle Count: %d != %d");
    ::FString::operator=(&param_3->Detail,&FStack_108);
    FStack_138.Data.AllocatorInstance.Data = FStack_108.Data.AllocatorInstance.Data;
    goto LAB_1434ed2e4;
  }
  cStack_350 = '\0';
  TStack_388.bIsSet = false;
  if ((param_2->bIgnoreDataLayout != false) &&
     (((((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
         (this->VertexRefCounts).FreeIndices.CurBlockUsed != 0 ||
        ((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
         (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0)) ||
       ((this->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
        (this->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)) ||
      ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)))) {
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&BStack_278,&this->VertexRefCounts,0,
               (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar27 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&IStack_f8,&this->VertexRefCounts,iVar27,iVar27);
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&BStack_2c0,&param_1->VertexRefCounts,0,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar27 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator
              (&IStack_e8,&param_1->VertexRefCounts,iVar27,iVar27);
    TStack_368.CurBlock = 0;
    TStack_368.CurBlockUsed = 0;
    TStack_368.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_368.Blocks.ArrayNum = 0;
    TStack_368.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&TStack_368);
    cStack_350 = '\x01';
    TDynamicVector<int,512>::Resize
              (&TStack_368,(this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed,
               &InvalidID);
    uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar24 = BStack_278.Index;
    uVar21 = BStack_2c0._8_8_;
    uVar33 = BStack_278._8_8_;
    pFVar22 = pFStack_190;
    uVar14 = BStack_2c0.Index;
    while (pFStack_190 = pFVar22, uVar24 != IStack_f8._8_4_) {
      uVar14 = (uint)uVar21;
      uVar24 = (uint)uVar33;
      if (uVar14 == IStack_e8._8_4_) {
        if (uVar24 != IStack_f8._8_4_) goto LAB_1434ed774;
        break;
      }
      BStack_2c0._8_8_ = uVar21;
      BStack_278._8_8_ = uVar33;
      if ((cStack_350 == '\0') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      uVar30 = (ulonglong)(uVar24 & 0x1ff);
      uVar32 = (uVar33 & 0xffffffff) >> 9;
      *(uint *)(*(longlong *)(TStack_368.Blocks.AllocatorInstance.Data + uVar32 * 8) + uVar30 * 4) =
           uVar14;
      dVar3 = pFStack_238->EpsilonDouble;
      uVar33 = (ulonglong)(uVar14 & 0x1ff);
      lVar6 = *(longlong *)
               ((pFStack_240->Vertices).Blocks.AllocatorInstance.Data +
               ((uVar21 & 0xffffffff) >> 9) * 8);
      lVar7 = *(longlong *)((this->Vertices).Blocks.AllocatorInstance.Data + uVar32 * 8);
      dVar37 = *(double *)(lVar7 + uVar30 * 0x18) - *(double *)(lVar6 + uVar33 * 0x18);
      if (((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                     SUB84(dVar37,0) & uVar25)) ||
          (dVar37 = *(double *)(lVar7 + 8 + uVar30 * 0x18) - *(double *)(lVar6 + 8 + uVar33 * 0x18),
          dVar3 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                   SUB84(dVar37,0) & uVar25))) ||
         (dVar37 = *(double *)(lVar7 + 0x10 + uVar30 * 0x18) -
                   *(double *)(lVar6 + 0x10 + uVar33 * 0x18),
         dVar3 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                  SUB84(dVar37,0) & uVar25))) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->OtherID = uVar14;
        bVar12 = false;
        param_3->Reason = Vertex;
        param_3->ID = uVar24;
        param_3->IDType = Vertex;
        goto LAB_1434eea62;
      }
      FRefCountVector::BaseIterator::goto_next(&BStack_278);
      FRefCountVector::BaseIterator::goto_next(&BStack_2c0);
      uVar21 = BStack_2c0._8_8_;
      uVar33 = BStack_278._8_8_;
      pFVar22 = pFStack_190;
      uVar14 = BStack_2c0.Index;
      uVar24 = BStack_278.Index;
    }
    if (uVar14 == IStack_e8._8_4_) {
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&BStack_268,pFVar22,0,
                 (pFVar22->RefCounts).CurBlock * 0x200 + (pFVar22->RefCounts).CurBlockUsed);
      iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (pFVar22->RefCounts).CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator(&IStack_168,pFVar22,iVar27,iVar27);
      pFVar22 = &param_1->TriangleRefCounts;
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&BStack_258,pFVar22,0,
                 (pFVar22->RefCounts).CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator(&IStack_158,pFVar22,iVar27,iVar27);
      if ((TStack_388.bIsSet != false) &&
         (TDynamicVector<int,512>::Empty(&TStack_388.TypedValue,0),
         TStack_388.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(TStack_388.TypedValue.Blocks.AllocatorInstance.Data);
      }
      TStack_388.TypedValue.CurBlock = 0;
      TStack_388.TypedValue.CurBlockUsed = 0;
      TStack_388.TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_388.TypedValue.Blocks.ArrayNum = 0;
      TStack_388.TypedValue.Blocks.ArrayMax = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&TStack_388.TypedValue);
      TStack_388.bIsSet = true;
      TDynamicVector<int,512>::Resize
                (&TStack_388.TypedValue,
                 (this->Triangles).CurBlock * 0x200 + (this->Triangles).CurBlockUsed,&InvalidID);
      while (iVar27 = BStack_258.Index, uVar11 = BStack_268._8_8_, uVar14 = BStack_268.Index,
            uVar14 != IStack_168._8_4_) {
        if (BStack_258.Index == IStack_158._8_4_) goto LAB_1434ed7f3;
        lVar6 = *(longlong *)
                 ((this->Triangles).Blocks.AllocatorInstance.Data +
                 ((BStack_268._8_8_ & 0xffffffff) >> 9) * 8);
        uStack_298 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
        uStack_2a0 = *(undefined8 *)(lVar6 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
        lVar6 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)BStack_258.Index >> 9) * 8);
        uStack_188 = *(undefined8 *)(lVar6 + (ulonglong)(BStack_258.Index & 0x1ff) * 0xc);
        uStack_180 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(BStack_258.Index & 0x1ff) * 0xc);
        if ((TStack_388.bIsSet == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        *(int *)(*(longlong *)
                  (TStack_388.TypedValue.Blocks.AllocatorInstance.Data +
                  ((uVar11 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4) = iVar27;
        pFVar20 = pFVar26;
        do {
          if (cStack_350 == '\0') {
            iVar31 = *(int *)((longlong)&uStack_2a0 + (longlong)pFVar20);
          }
          else {
            iVar31 = *(int *)(*(longlong *)
                               (TStack_368.Blocks.AllocatorInstance.Data +
                               (ulonglong)
                               (*(uint *)((longlong)&uStack_2a0 + (longlong)pFVar20) >> 9) * 8) +
                             (ulonglong)
                             (*(uint *)((longlong)&uStack_2a0 + (longlong)pFVar20) & 0x1ff) * 4);
          }
          if (*(int *)((longlong)&uStack_188 + (longlong)pFVar20) != iVar31) {
            if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
            param_3->ID = uVar14;
            bVar12 = false;
            param_3->Reason = Triangle;
            param_3->OtherID = iVar27;
            param_3->IDType = Triangle;
            goto LAB_1434eea62;
          }
          pFVar20 = pFVar20 + 4;
        } while ((longlong)pFVar20 < 0xc);
        FRefCountVector::BaseIterator::goto_next(&BStack_268);
        FRefCountVector::BaseIterator::goto_next(&BStack_258);
      }
      if (BStack_258.Index == IStack_158._8_4_) goto LAB_1434ed9e1;
LAB_1434ed7f3:
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = TriangleCount;
        bVar12 = false;
        goto LAB_1434eea62;
      }
    }
    else {
LAB_1434ed774:
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = VertexCount;
        bVar12 = false;
        goto LAB_1434eea62;
      }
    }
    goto LAB_1434eea5c;
  }
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&BStack_208,&this->VertexRefCounts,0,
             (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar27 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->VertexRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&IStack_d8,&this->VertexRefCounts,iVar27,iVar27);
  iVar27 = BStack_208.Index;
  while (iVar27 != IStack_d8._8_4_) {
    iVar27 = BStack_208.Index;
    bVar12 = IsVertex(param_1,iVar27);
    if ((!bVar12) ||
       (bVar12 = `UE::Geometry::FDynamicMesh3::IsSameAs_Helper'::__l2::<lambda_1>::operator()
                           (&pFStack_248,iVar27,iVar27), !bVar12)) {
      if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
      param_3->ID = iVar27;
      bVar12 = false;
      param_3->Reason = Vertex;
      param_3->OtherID = -1;
      param_3->IDType = Vertex;
      goto LAB_1434eea62;
    }
    FRefCountVector::BaseIterator::goto_next(&BStack_208);
    iVar27 = BStack_208.Index;
  }
  pFVar22 = &this->TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&BStack_1f8,pFVar22,0,
             (pFVar22->RefCounts).CurBlock * 0x200 +
             (this->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&IStack_c8,pFVar22,iVar27,iVar27);
  iVar27 = BStack_1f8.Index;
  while (iVar27 != IStack_c8._8_4_) {
    uVar14 = (uint)BStack_1f8._8_8_;
    if (((int)uVar14 < 0) ||
       ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) {
LAB_1434eda8c:
      if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
      param_3->Reason = Triangle;
      bVar12 = false;
      param_3->ID = uVar14;
      param_3->OtherID = -1;
      param_3->IDType = Triangle;
      goto LAB_1434eea62;
    }
    uVar21 = (ulonglong)(uVar14 & 0x1ff);
    uVar33 = (BStack_1f8._8_8_ & 0xffffffff) >> 9;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + uVar33 * 8) + uVar21 * 2) - 1U))
    goto LAB_1434eda8c;
    lVar6 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar33 * 8);
    uStack_178 = *(undefined8 *)(lVar6 + uVar21 * 0xc);
    lVar7 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + uVar33 * 8);
    uStack_218 = *(undefined8 *)(lVar7 + uVar21 * 0xc);
    if ((((int)uStack_178 != (int)uStack_218) ||
        ((int)((ulonglong)uStack_178 >> 0x20) != (int)((ulonglong)uStack_218 >> 0x20))) ||
       (*(int *)(lVar6 + 8 + uVar21 * 0xc) != *(int *)(lVar7 + 8 + uVar21 * 0xc)))
    goto LAB_1434eda8c;
    FRefCountVector::BaseIterator::goto_next(&BStack_1f8);
    iVar27 = BStack_1f8.Index;
  }
LAB_1434ed9e1:
  if (param_2->bCheckConnectivity != false) {
    pFVar22 = &this->EdgeRefCounts;
    if ((this->EdgeRefCounts).UsedCount != (param_1->EdgeRefCounts).UsedCount) {
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = EdgeCount;
        ::FString::PrintfImpl(&FStack_148,L"Edge Count: %d != %d");
        ::FString::operator=(&param_3->Detail,&FStack_148);
        if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
          bVar12 = false;
          goto LAB_1434eea62;
        }
      }
      goto LAB_1434eea5c;
    }
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&BStack_1d8,pFVar22,0,
               (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed)
    ;
    iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&IStack_b8,pFVar22,iVar27,iVar27);
    iVar27 = BStack_1d8.Index;
    while (iVar27 != IStack_b8._8_4_) {
      uVar18 = (uint)BStack_1d8._8_8_;
      auVar4 = *(undefined1 (*) [16])
                (*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data +
                  ((BStack_1d8._8_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      uVar14 = auVar4._0_4_;
      uVar25 = auVar4._4_4_;
      if (cStack_350 != '\0') {
        uVar14 = *(uint *)(*(longlong *)
                            (TStack_368.Blocks.AllocatorInstance.Data +
                            ((auVar4._0_8_ & 0xffffffff) >> 9) * 8) +
                          (ulonglong)(uVar14 & 0x1ff) * 4);
        uVar25 = *(uint *)(*(longlong *)
                            (TStack_368.Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8
                            ) + (ulonglong)(uVar25 & 0x1ff) * 4);
      }
      auStack_1e8 = auVar4;
      uVar14 = FindEdge(param_1,uVar14,uVar25);
      if (uVar14 == 0xffffffff) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->ID = uVar18;
        bVar12 = false;
        param_3->Reason = Connectivity;
        param_3->OtherID = -1;
        param_3->IDType = Edge;
        goto LAB_1434eea62;
      }
      lVar6 = *(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
              (ulonglong)(uVar14 & 0x1ff) * 0x10;
      iVar27 = *(int *)(lVar6 + 8);
      iVar31 = *(int *)(lVar6 + 0xc);
      uVar21 = auVar4._8_8_;
      if (TStack_388.bIsSet != false) {
        if (auVar4._8_4_ == -1) {
          uVar25 = 0xffffffff;
        }
        else {
          pTVar17 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator*(&TStack_388);
          uVar25 = *(uint *)(*(longlong *)
                              ((pTVar17->Blocks).AllocatorInstance.Data +
                              ((auStack_1e8._8_8_ & 0xffffffff) >> 9) * 8) +
                            (ulonglong)(auStack_1e8._8_4_ & 0x1ff) * 4);
        }
        if (auStack_1e8._12_4_ == -1) {
          uVar21 = 0xffffffff;
        }
        else {
          pTVar17 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator*(&TStack_388);
          uVar21 = (ulonglong)
                   *(uint *)(*(longlong *)
                              ((pTVar17->Blocks).AllocatorInstance.Data +
                              (ulonglong)((uint)auStack_1e8._12_4_ >> 9) * 8) +
                            (ulonglong)(auStack_1e8._12_4_ & 0x1ff) * 4);
        }
        uVar21 = uVar21 << 0x20 | (ulonglong)uVar25;
      }
      iVar28 = (int)(uVar21 >> 0x20);
      iVar10 = iVar31;
      if (iVar27 < iVar31) {
        iVar10 = iVar27;
      }
      iVar19 = (int)uVar21;
      iVar15 = iVar28;
      if (iVar19 < iVar28) {
        iVar15 = iVar19;
      }
      if (iVar15 != iVar10) {
LAB_1434edd4d:
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->ID = uVar18;
        bVar12 = false;
        param_3->Reason = Connectivity;
        param_3->OtherID = uVar14;
        param_3->IDType = Edge;
        goto LAB_1434eea62;
      }
      uVar33 = uVar21 >> 0x20;
      if (iVar28 < iVar19) {
        uVar33 = uVar21;
      }
      if (iVar31 < iVar27) {
        iVar31 = iVar27;
      }
      if ((int)uVar33 != iVar31) goto LAB_1434edd4d;
      FRefCountVector::BaseIterator::goto_next(&BStack_1d8);
      iVar27 = BStack_1d8.Index;
    }
  }
  if (param_2->bCheckEdgeIDs != false) {
    pFVar22 = &this->EdgeRefCounts;
    if ((this->EdgeRefCounts).UsedCount != (param_1->EdgeRefCounts).UsedCount) {
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = EdgeCount;
        ::FString::PrintfImpl(&FStack_118,L"Edge Count: %d != %d");
        ::FString::operator=(&param_3->Detail,&FStack_118);
        if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
          bVar12 = false;
          goto LAB_1434eea62;
        }
      }
      goto LAB_1434eea5c;
    }
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&BStack_1c8,pFVar22,0,
               (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed)
    ;
    iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&IStack_a8,pFVar22,iVar27,iVar27);
    iVar27 = BStack_1c8.Index;
    while (iVar27 != IStack_a8._8_4_) {
      uVar14 = (uint)BStack_1c8._8_8_;
      if (((int)uVar14 < 0) ||
         ((int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) {
LAB_1434edfb1:
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->Reason = Edge;
        bVar12 = false;
        param_3->ID = uVar14;
        param_3->OtherID = -1;
        param_3->IDType = Edge;
        goto LAB_1434eea62;
      }
      uVar21 = (ulonglong)(uVar14 & 0x1ff);
      uVar33 = (BStack_1c8._8_8_ & 0xffffffff) >> 9;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance
                                         .Data + uVar33 * 8) + uVar21 * 2) - 1U))
      goto LAB_1434edfb1;
      piVar1 = (int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar33 * 8) +
                      uVar21 * 0x10);
      iStack_2b0 = *piVar1;
      iStack_2ac = piVar1[1];
      uStack_2a8 = piVar1[2];
      uStack_2a4 = piVar1[3];
      uVar18 = uStack_2a4;
      uVar25 = uStack_2a8;
      if (TStack_388.bIsSet != false) {
        if (uStack_2a8 == 0xffffffff) {
          uVar25 = 0xffffffff;
        }
        else {
          uVar25 = *(uint *)(*(longlong *)
                              (TStack_388.TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uStack_2a8 >> 9) * 8) +
                            (ulonglong)(uStack_2a8 & 0x1ff) * 4);
        }
        if (uStack_2a4 == 0xffffffff) {
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = *(uint *)(*(longlong *)
                              (TStack_388.TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uStack_2a4 >> 9) * 8) +
                            (ulonglong)(uStack_2a4 & 0x1ff) * 4);
        }
      }
      piVar1 = (int *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + uVar33 * 8) +
                      uVar21 * 0x10);
      if (((iStack_2b0 != *piVar1) || (iStack_2ac != piVar1[1])) ||
         ((uVar25 != piVar1[2] || (uVar18 != piVar1[3])))) goto LAB_1434edfb1;
      FRefCountVector::BaseIterator::goto_next(&BStack_1c8);
      iVar27 = BStack_1c8.Index;
    }
  }
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_2->bCheckNormals == false) {
LAB_1434ee1a9:
    pFVar22 = &this->VertexRefCounts;
    if (param_2->bCheckColors != false) {
      bVar12 = (this->VertexColors).bIsSet;
      if (bVar12 != (param_1->VertexColors).bIsSet) {
        if (param_3 != (FMeshDifferenceInfo *)0x0) {
          param_3->Reason = Color;
          ::FString::PrintfImpl(&FStack_128,L"Has Vertex Colors: %d != %d");
          ::FString::operator=(&param_3->Detail,&FStack_128);
          if (FStack_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_128.Data.AllocatorInstance.Data);
            bVar12 = false;
            goto LAB_1434eea62;
          }
        }
        goto LAB_1434eea5c;
      }
      if (bVar12 != false) {
        FRefCountVector::IndexIterator::IndexIterator
                  (&IStack_348,pFVar22,0,
                   (pFVar22->RefCounts).CurBlock * 0x200 +
                   (this->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed;
        FRefCountVector::IndexIterator::IndexIterator(&IStack_98,pFVar22,iVar27,iVar27);
        if (IStack_348._8_4_ != IStack_98._8_4_) {
          fVar2 = param_2->EpsilonFloat;
          do {
            uVar25 = IStack_348._8_4_;
            if (cStack_350 != '\0') {
              uVar25 = *(uint *)(*(longlong *)
                                  (TStack_368.Blocks.AllocatorInstance.Data +
                                  (ulonglong)((uint)IStack_348._8_4_ >> 9) * 8) +
                                (ulonglong)(IStack_348._8_4_ & 0x1ff) * 4);
            }
            uVar29 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
            uStack_284 = CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
            if ((param_1->VertexColors).bIsSet != false) {
              lVar6 = *(longlong *)
                       ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar25 >> 9) * 8);
              uVar29 = *(float *)(lVar6 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
              uStack_284 = *(ulonglong *)(lVar6 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
            }
            if ((this->VertexColors).bIsSet == false) {
              uVar21 = (ulonglong)(uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
              uVar16 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
              uStack_224 = CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                                    UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
            }
            else {
              lVar6 = *(longlong *)
                       ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)IStack_348._8_4_ >> 9) * 8);
              uVar21 = *(ulonglong *)(lVar6 + (ulonglong)(IStack_348._8_4_ & 0x1ff) * 0xc);
              uVar16 = *(float *)(lVar6 + 8 + (ulonglong)(IStack_348._8_4_ & 0x1ff) * 0xc);
              uStack_224 = uVar21;
            }
            if (fVar2 < (float)((uint)((float)uVar21 - (float)uStack_284) & uVar14)) {
LAB_1434ee4b0:
              if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
              param_3->Reason = Color;
              uVar14 = IStack_348._8_4_;
              goto LAB_1434ee235;
            }
            if ((fVar2 < (float)((uint)(uStack_224._4_4_ - uStack_284._4_4_) & uVar14)) ||
               (fVar2 < (float)((uint)((float)uVar16 - (float)uVar29) & uVar14)))
            goto LAB_1434ee4b0;
            IStack_348._8_4_ = IStack_348._8_4_ + 1;
            if ((int)IStack_348._8_4_ < (int)IStack_348._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(IStack_348._0_8_ + 8) +
                                 (ulonglong)((uint)IStack_348._8_4_ >> 9) * 8) +
                               (ulonglong)(IStack_348._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(IStack_348._0_8_ + 8) +
                                (ulonglong)((uint)IStack_348._8_4_ >> 9) * 8) +
                              (ulonglong)(IStack_348._8_4_ & 0x1ff) * 2) != -1)) break;
                IStack_348._8_4_ = IStack_348._8_4_ + 1;
              } while ((int)IStack_348._8_4_ < (int)IStack_348._12_4_);
            }
          } while (IStack_348._8_4_ != IStack_98._8_4_);
        }
      }
    }
    if (param_2->bCheckUVs != false) {
      bVar12 = (this->VertexUVs).bIsSet;
      if (bVar12 != (param_1->VertexUVs).bIsSet) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->Reason = UV;
        ::FString::PrintfImpl(&FStack_308,L"Has Vertex UVs: %d != %d");
        pFVar23 = &param_3->Detail;
        FVar36.Data = FStack_308.Data.AllocatorInstance.Data;
        if (pFVar23 != &FStack_308) {
          pFVar20 = (pFVar23->Data).AllocatorInstance.Data;
          if (pFVar20 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar20);
          }
          (pFVar23->Data).AllocatorInstance.Data = FStack_308.Data.AllocatorInstance.Data;
          (param_3->Detail).Data.ArrayNum = FStack_308.Data.ArrayNum;
          (param_3->Detail).Data.ArrayMax = FStack_308.Data.ArrayMax;
          FStack_308.Data.ArrayNum = 0;
          FStack_308.Data.ArrayMax = 0;
          FStack_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar36.Data = pFVar26;
        }
        goto LAB_1434eea2a;
      }
      if (bVar12 != false) {
        FRefCountVector::IndexIterator::IndexIterator
                  (&IStack_2f8,&this->VertexRefCounts,0,
                   (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (this->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar27 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed;
        FRefCountVector::IndexIterator::IndexIterator
                  (&IStack_88,&this->VertexRefCounts,iVar27,iVar27);
        if (IStack_2f8._8_4_ != IStack_88._8_4_) {
          do {
            uVar25 = IStack_2f8._8_4_;
            if (cStack_350 != '\0') {
              uVar25 = *(uint *)(*(longlong *)
                                  (TStack_368.Blocks.AllocatorInstance.Data +
                                  (ulonglong)((uint)IStack_2f8._8_4_ >> 9) * 8) +
                                (ulonglong)(IStack_2f8._8_4_ & 0x1ff) * 4);
            }
            if ((param_1->VertexUVs).bIsSet == false) {
              uStack_2c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            }
            else {
              uStack_2c8 = (TVector2<float>_u_0)
                           *(TVector2<float>_u_0 *)
                            &((TVector2<float>_u_0 *)
                             (*(longlong *)
                               ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 8))->
                             _s_0;
            }
            if ((this->VertexUVs).bIsSet == false) {
              uStackX_20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            }
            else {
              uStackX_20 = (TVector2<float>_u_0)
                           *(TVector2<float>_u_0 *)
                            &((TVector2<float>_u_0 *)
                             (*(longlong *)
                               ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                               (ulonglong)((uint)IStack_2f8._8_4_ >> 9) * 8) +
                             (ulonglong)(IStack_2f8._8_4_ & 0x1ff) * 8))->_s_0;
            }
            if (param_2->EpsilonFloat <
                (float)((uint)((float)uStackX_20 - (float)uStack_2c8) & uVar14)) {
LAB_1434ee6f3:
              if (param_3 != (FMeshDifferenceInfo *)0x0) {
                param_3->Reason = UV;
                uVar14 = IStack_2f8._8_4_;
LAB_1434ee235:
                param_3->ID = uVar14;
                bVar12 = false;
                param_3->OtherID = -1;
                param_3->IDType = Vertex;
                goto LAB_1434eea62;
              }
              goto LAB_1434eea5c;
            }
            if (param_2->EpsilonFloat <
                (float)((uint)(uStackX_20._4_4_ - uStack_2c8._4_4_) & uVar14)) goto LAB_1434ee6f3;
            IStack_2f8._8_4_ = IStack_2f8._8_4_ + 1;
            if ((int)IStack_2f8._8_4_ < (int)IStack_2f8._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(IStack_2f8._0_8_ + 8) +
                                 (ulonglong)((uint)IStack_2f8._8_4_ >> 9) * 8) +
                               (ulonglong)(IStack_2f8._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(IStack_2f8._0_8_ + 8) +
                                (ulonglong)((uint)IStack_2f8._8_4_ >> 9) * 8) +
                              (ulonglong)(IStack_2f8._8_4_ & 0x1ff) * 2) != -1)) break;
                IStack_2f8._8_4_ = IStack_2f8._8_4_ + 1;
              } while ((int)IStack_2f8._8_4_ < (int)IStack_2f8._12_4_);
            }
          } while (IStack_2f8._8_4_ != IStack_88._8_4_);
        }
      }
    }
    if (param_2->bCheckGroups != false) {
      bVar12 = (this->TriangleGroups).bIsSet;
      cVar34 = (param_1->TriangleGroups).bIsSet;
      if (bVar12 != (bool)cVar34) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->Reason = Group;
        ::FString::PrintfImpl(&FStack_2e8,L"Has Triangle Groups: %d != %d");
        pFVar23 = &param_3->Detail;
        FVar36.Data = FStack_2e8.Data.AllocatorInstance.Data;
        if (pFVar23 != &FStack_2e8) {
          pFVar26 = (pFVar23->Data).AllocatorInstance.Data;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar26);
          }
          (pFVar23->Data).AllocatorInstance.Data = FStack_2e8.Data.AllocatorInstance.Data;
          (param_3->Detail).Data.ArrayNum = FStack_2e8.Data.ArrayNum;
          (param_3->Detail).Data.ArrayMax = FStack_2e8.Data.ArrayMax;
          FStack_2e8.Data.ArrayNum = 0;
          FStack_2e8.Data.ArrayMax = 0;
          FStack_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar36.Data = (FScriptContainerElement *)0x0;
        }
        goto LAB_1434eea2a;
      }
      if (bVar12 == false) goto LAB_1434ee979;
      uVar14 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this->TriangleRefCounts).RefCounts.CurBlockUsed;
      if ((uVar14 == 0) ||
         (pFVar20 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         pFVar26 = (FScriptContainerElement *)0x0, (ushort)(**(short **)pFVar20 - 1U) < 0xfffe)) {
LAB_1434ee790:
        uVar25 = (uint)pFVar26;
      }
      else {
        pFVar26 = (FScriptContainerElement *)&DAT_00000001;
        uVar25 = 1;
        if (1 < (int)uVar14) {
          do {
            sVar5 = *(short *)(*(longlong *)(pFVar20 + ((ulonglong)pFVar26 >> 9) * 8) +
                              (ulonglong)((uint)pFVar26 & 0x1ff) * 2);
            if ((sVar5 != 0) && (sVar5 != -1)) break;
            uVar25 = (uint)pFVar26 + 1;
            pFVar26 = (FScriptContainerElement *)(ulonglong)uVar25;
          } while ((int)uVar25 < (int)uVar14);
          cVar34 = (param_1->TriangleGroups).bIsSet;
          goto LAB_1434ee790;
        }
      }
joined_r0x0001434ee79a:
      if (uVar25 != uVar14) {
        while( true ) {
          uVar25 = (uint)pFVar26;
          uVar18 = uVar25;
          if (TStack_388.bIsSet != false) {
            uVar18 = *(uint *)(*(longlong *)
                                (TStack_388.TypedValue.Blocks.AllocatorInstance.Data +
                                ((ulonglong)pFVar26 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
          }
          if (cVar34 == '\0') {
            iVar27 = -1;
          }
          else {
            iVar27 = iVar35;
            if ((-1 < (int)uVar18) &&
               ((int)uVar18 <
                (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
              if ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
                                     (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe) {
                iVar27 = *(int *)(*(longlong *)
                                   ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar18 >> 9) * 8) +
                                 (ulonglong)(uVar18 & 0x1ff) * 4);
              }
            }
          }
          iVar31 = iVar35;
          if ((-1 < (int)uVar25) && ((int)uVar25 < (int)uVar14)) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + ((ulonglong)pFVar26 >> 9) * 8) +
                                   (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe) {
              iVar31 = *(int *)(*(longlong *)
                                 ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                 ((ulonglong)pFVar26 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
            }
          }
          if (iVar31 != iVar27) {
            if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
            param_3->Reason = Group;
            GetTriangleGroup(param_1,uVar18);
            GetTriangleGroup(this,uVar25);
            ::FString::PrintfImpl(&FStack_2d8,L"Triangle Group: %d != %d");
            pFVar23 = &param_3->Detail;
            if (pFVar23 != &FStack_2d8) {
              pFVar26 = (pFVar23->Data).AllocatorInstance.Data;
              if (pFVar26 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar26);
              }
              (pFVar23->Data).AllocatorInstance.Data = FStack_2d8.Data.AllocatorInstance.Data;
              (param_3->Detail).Data.ArrayNum = FStack_2d8.Data.ArrayNum;
              (param_3->Detail).Data.ArrayMax = FStack_2d8.Data.ArrayMax;
              FStack_2d8.Data.ArrayNum = 0;
              FStack_2d8.Data.ArrayMax = 0;
              FStack_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (FStack_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_2d8.Data.AllocatorInstance.Data);
            }
            param_3->ID = uVar25;
            bVar12 = false;
            param_3->OtherID = uVar18;
            param_3->IDType = Triangle;
            goto LAB_1434eea62;
          }
          uVar25 = uVar25 + 1;
          pFVar26 = (FScriptContainerElement *)(ulonglong)uVar25;
          if ((int)uVar14 <= (int)uVar25) break;
          while( true ) {
            uVar21 = (ulonglong)((uint)pFVar26 & 0x1ff);
            lVar6 = *(longlong *)
                     ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                     ((ulonglong)pFVar26 >> 9) * 8);
            if ((*(short *)(lVar6 + uVar21 * 2) != 0) && (*(short *)(lVar6 + uVar21 * 2) != -1))
            break;
            uVar25 = (uint)pFVar26 + 1;
            pFVar26 = (FScriptContainerElement *)(ulonglong)uVar25;
            if ((int)uVar14 <= (int)uVar25) goto joined_r0x0001434ee79a;
          }
        }
        goto joined_r0x0001434ee79a;
      }
    }
LAB_1434ee979:
    if (param_2->bCheckAttributes == false) {
LAB_1434eea60:
      bVar12 = true;
      goto LAB_1434eea62;
    }
    this_00 = (this->AttributeSet).Ptr;
    pFVar8 = (param_1->AttributeSet).Ptr;
    if ((this_00 != (FDynamicMeshAttributeSet *)0x0) == (pFVar8 != (FDynamicMeshAttributeSet *)0x0))
    {
      if ((this_00 == (FDynamicMeshAttributeSet *)0x0) ||
         (bVar12 = FDynamicMeshAttributeSet::IsSameAs(this_00,pFVar8,param_2->bIgnoreDataLayout),
         bVar12)) goto LAB_1434eea60;
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = Attribute;
      }
    }
    else if (param_3 != (FMeshDifferenceInfo *)0x0) {
      param_3->Reason = Attribute;
      ::FString::PrintfImpl(&FStack_338,L"Has Attribute Set: %d != %d");
      pFVar23 = &param_3->Detail;
      FVar36.Data = FStack_338.Data.AllocatorInstance.Data;
      if (pFVar23 != &FStack_338) {
        pFVar26 = (pFVar23->Data).AllocatorInstance.Data;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
        (pFVar23->Data).AllocatorInstance.Data = FStack_338.Data.AllocatorInstance.Data;
        (param_3->Detail).Data.ArrayNum = FStack_338.Data.ArrayNum;
        (param_3->Detail).Data.ArrayMax = FStack_338.Data.ArrayMax;
        FStack_338.Data.ArrayNum = 0;
        FStack_338.Data.ArrayMax = 0;
        FStack_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar36.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_1434eea2a;
    }
  }
  else {
    bVar12 = (this->VertexNormals).bIsSet;
    if (bVar12 == (param_1->VertexNormals).bIsSet) {
      pFVar22 = &this->VertexRefCounts;
      if (bVar12 != false) {
        FRefCountVector::IndexIterator::IndexIterator
                  (&IStack_318,pFVar22,0,
                   (pFVar22->RefCounts).CurBlock * 0x200 +
                   (this->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed;
        FRefCountVector::IndexIterator::IndexIterator(aIStack_78,pFVar22,iVar27,iVar27);
        if (IStack_318._8_4_ != aIStack_78[0]._8_4_) {
          fVar2 = param_2->EpsilonFloat;
          do {
            uVar25 = IStack_318._8_4_;
            if (cStack_350 != '\0') {
              uVar25 = *(uint *)(*(longlong *)
                                  (TStack_368.Blocks.AllocatorInstance.Data +
                                  (ulonglong)((uint)IStack_318._8_4_ >> 9) * 8) +
                                (ulonglong)(IStack_318._8_4_ & 0x1ff) * 4);
            }
            uVar29 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
            uStack_290 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                  UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
            if ((param_1->VertexNormals).bIsSet != false) {
              lVar6 = *(longlong *)
                       ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar25 >> 9) * 8);
              uVar29 = *(float *)(lVar6 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
              uStack_290 = *(ulonglong *)(lVar6 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
            }
            if ((this->VertexNormals).bIsSet == false) {
              uVar21 = (ulonglong)(uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
              uVar16 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
              uStack_230 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                    UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
            }
            else {
              lVar6 = *(longlong *)
                       ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)IStack_318._8_4_ >> 9) * 8);
              uVar21 = *(ulonglong *)(lVar6 + (ulonglong)(IStack_318._8_4_ & 0x1ff) * 0xc);
              uVar16 = *(float *)(lVar6 + 8 + (ulonglong)(IStack_318._8_4_ & 0x1ff) * 0xc);
              uStack_230 = uVar21;
            }
            if (fVar2 < (float)((uint)((float)uVar21 - (float)uStack_290) & uVar14)) {
LAB_1434ee226:
              if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
              param_3->Reason = Normal;
              uVar14 = IStack_318._8_4_;
              goto LAB_1434ee235;
            }
            if ((fVar2 < (float)((uint)(uStack_230._4_4_ - uStack_290._4_4_) & uVar14)) ||
               (fVar2 < (float)((uint)((float)uVar16 - (float)uVar29) & uVar14)))
            goto LAB_1434ee226;
            IStack_318._8_4_ = IStack_318._8_4_ + 1;
            if ((int)IStack_318._8_4_ < (int)IStack_318._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(IStack_318._0_8_ + 8) +
                                 (ulonglong)((uint)IStack_318._8_4_ >> 9) * 8) +
                               (ulonglong)(IStack_318._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(IStack_318._0_8_ + 8) +
                                (ulonglong)((uint)IStack_318._8_4_ >> 9) * 8) +
                              (ulonglong)(IStack_318._8_4_ & 0x1ff) * 2) != -1)) break;
                IStack_318._8_4_ = IStack_318._8_4_ + 1;
              } while ((int)IStack_318._8_4_ < (int)IStack_318._12_4_);
            }
          } while (IStack_318._8_4_ != aIStack_78[0]._8_4_);
        }
      }
      goto LAB_1434ee1a9;
    }
    if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
    param_3->Reason = Normal;
    ::FString::PrintfImpl(&FStack_328,L"Has Vertex Normals: %d != %d");
    pFVar23 = &param_3->Detail;
    FVar36.Data = FStack_328.Data.AllocatorInstance.Data;
    if (pFVar23 != &FStack_328) {
      pFVar20 = (pFVar23->Data).AllocatorInstance.Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      (pFVar23->Data).AllocatorInstance.Data = FStack_328.Data.AllocatorInstance.Data;
      (param_3->Detail).Data.ArrayNum = FStack_328.Data.ArrayNum;
      (param_3->Detail).Data.ArrayMax = FStack_328.Data.ArrayMax;
      FStack_328.Data.ArrayNum = 0;
      FStack_328.Data.ArrayMax = 0;
      FStack_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar36.Data = pFVar26;
    }
LAB_1434eea2a:
    if (FVar36.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar36.Data);
      bVar12 = false;
      goto LAB_1434eea62;
    }
  }
LAB_1434eea5c:
  bVar12 = false;
LAB_1434eea62:
  if ((TStack_388.bIsSet != false) &&
     (TDynamicVector<int,512>::Empty(&TStack_388.TypedValue,0),
     TStack_388.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(TStack_388.TypedValue.Blocks.AllocatorInstance.Data);
  }
  if (cStack_350 != '\0') {
    TDynamicVector<int,512>::Empty(&TStack_368,0);
    if (TStack_368.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_368.Blocks.AllocatorInstance.Data);
      return bVar12;
    }
    return bVar12;
  }
  return bVar12;
}

// IsSameAs_Helper @ 1434ed180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMesh3::IsSameAs_Helper
          (FDynamicMesh3 *this,FDynamicMesh3 *param_1,FSameAsOptions *param_2,
          FMeshDifferenceInfo *param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  TDynamicVector<int,512> *pTVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  FRefCountVector *pFVar22;
  FString *pFVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  char cVar34;
  int iVar35;
  ForAnyElementType FVar36;
  double dVar37;
  undefined8 local_res20;
  TOptional<UE::Geometry::TDynamicVector<int,512>_> local_388;
  TDynamicVector<int,512> local_368;
  char local_350;
  IndexIterator local_348;
  FString local_338;
  FString local_328;
  IndexIterator local_318;
  FString local_308;
  IndexIterator local_2f8;
  FString local_2e8;
  FString local_2d8;
  undefined8 local_2c8;
  BaseIterator local_2c0;
  int local_2b0;
  int iStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 local_284;
  BaseIterator local_278;
  BaseIterator local_268;
  BaseIterator local_258;
  FDynamicMesh3 *local_248;
  FDynamicMesh3 *local_240;
  FSameAsOptions *local_238;
  undefined8 local_230;
  undefined8 local_224;
  undefined8 local_218;
  BaseIterator local_208;
  BaseIterator local_1f8;
  undefined1 local_1e8 [16];
  BaseIterator local_1d8;
  BaseIterator local_1c8;
  undefined4 local_1b8;
  FString local_1b0;
  undefined8 local_1a0;
  EIDType local_198;
  FRefCountVector *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  IndexIterator local_168;
  IndexIterator local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  IndexIterator local_f8;
  IndexIterator local_e8;
  IndexIterator local_d8;
  IndexIterator local_c8;
  IndexIterator local_b8;
  IndexIterator local_a8;
  IndexIterator local_98;
  IndexIterator local_88;
  IndexIterator local_78 [3];
  
  pFVar26 = (FScriptContainerElement *)0x0;
  iVar35 = 0;
  if (param_3 != (FMeshDifferenceInfo *)0x0) {
    local_1b8 = 0;
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data._8_8_ = ___xmm_ffffffffffffffff0000000000000000;
    local_1a0 = _UNK_15076cb68;
    local_198 = None;
    param_3->Reason = Unknown;
    ::FString::operator=(&param_3->Detail,&local_1b0);
    param_3->ID = (int)local_1a0;
    param_3->OtherID = local_1a0._4_4_;
    param_3->IDType = local_198;
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  local_248 = this;
  local_240 = param_1;
  local_238 = param_2;
  if ((this->VertexRefCounts).UsedCount != (param_1->VertexRefCounts).UsedCount) {
    if (param_3 == (FMeshDifferenceInfo *)0x0) {
      return false;
    }
    param_3->Reason = VertexCount;
    ::FString::PrintfImpl(&local_138,L"Vertex Count: %d != %d");
    ::FString::operator=(&param_3->Detail,&local_138);
LAB_1434ed2e4:
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    return false;
  }
  local_190 = &this->TriangleRefCounts;
  if ((this->TriangleRefCounts).UsedCount != (param_1->TriangleRefCounts).UsedCount) {
    if (param_3 == (FMeshDifferenceInfo *)0x0) {
      return false;
    }
    param_3->Reason = TriangleCount;
    ::FString::PrintfImpl(&local_108,L"Triangle Count: %d != %d");
    ::FString::operator=(&param_3->Detail,&local_108);
    local_138.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    goto LAB_1434ed2e4;
  }
  local_350 = '\0';
  local_388.bIsSet = false;
  if ((param_2->bIgnoreDataLayout != false) &&
     (((((this->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
         (this->VertexRefCounts).FreeIndices.CurBlockUsed != 0 ||
        ((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
         (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0)) ||
       ((this->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
        (this->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)) ||
      ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)))) {
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_278,&this->VertexRefCounts,0,
               (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar27 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_f8,&this->VertexRefCounts,iVar27,iVar27);
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_2c0,&param_1->VertexRefCounts,0,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar27 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_e8,&param_1->VertexRefCounts,iVar27,iVar27)
    ;
    local_368.CurBlock = 0;
    local_368.CurBlockUsed = 0;
    local_368.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.Blocks.ArrayNum = 0;
    local_368.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_368);
    local_350 = '\x01';
    TDynamicVector<int,512>::Resize
              (&local_368,(this->Vertices).CurBlock * 0x200 + (this->Vertices).CurBlockUsed,
               &InvalidID);
    uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar24 = local_278.Index;
    uVar21 = local_2c0._8_8_;
    uVar33 = local_278._8_8_;
    pFVar22 = local_190;
    uVar14 = local_2c0.Index;
    while (local_190 = pFVar22, uVar24 != local_f8._8_4_) {
      uVar14 = (uint)uVar21;
      uVar24 = (uint)uVar33;
      if (uVar14 == local_e8._8_4_) {
        if (uVar24 != local_f8._8_4_) goto LAB_1434ed774;
        break;
      }
      local_2c0._8_8_ = uVar21;
      local_278._8_8_ = uVar33;
      if ((local_350 == '\0') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      uVar30 = (ulonglong)(uVar24 & 0x1ff);
      uVar32 = (uVar33 & 0xffffffff) >> 9;
      *(uint *)(*(longlong *)(local_368.Blocks.AllocatorInstance.Data + uVar32 * 8) + uVar30 * 4) =
           uVar14;
      dVar3 = local_238->EpsilonDouble;
      uVar33 = (ulonglong)(uVar14 & 0x1ff);
      lVar6 = *(longlong *)
               ((local_240->Vertices).Blocks.AllocatorInstance.Data +
               ((uVar21 & 0xffffffff) >> 9) * 8);
      lVar7 = *(longlong *)((this->Vertices).Blocks.AllocatorInstance.Data + uVar32 * 8);
      dVar37 = *(double *)(lVar7 + uVar30 * 0x18) - *(double *)(lVar6 + uVar33 * 0x18);
      if (((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                     SUB84(dVar37,0) & uVar25)) ||
          (dVar37 = *(double *)(lVar7 + 8 + uVar30 * 0x18) - *(double *)(lVar6 + 8 + uVar33 * 0x18),
          dVar3 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                   SUB84(dVar37,0) & uVar25))) ||
         (dVar37 = *(double *)(lVar7 + 0x10 + uVar30 * 0x18) -
                   *(double *)(lVar6 + 0x10 + uVar33 * 0x18),
         dVar3 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar18,
                                  SUB84(dVar37,0) & uVar25))) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->OtherID = uVar14;
        bVar12 = false;
        param_3->Reason = Vertex;
        param_3->ID = uVar24;
        param_3->IDType = Vertex;
        goto LAB_1434eea62;
      }
      FRefCountVector::BaseIterator::goto_next(&local_278);
      FRefCountVector::BaseIterator::goto_next(&local_2c0);
      uVar21 = local_2c0._8_8_;
      uVar33 = local_278._8_8_;
      pFVar22 = local_190;
      uVar14 = local_2c0.Index;
      uVar24 = local_278.Index;
    }
    if (uVar14 == local_e8._8_4_) {
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_268,pFVar22,0,
                 (pFVar22->RefCounts).CurBlock * 0x200 + (pFVar22->RefCounts).CurBlockUsed);
      iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (pFVar22->RefCounts).CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator(&local_168,pFVar22,iVar27,iVar27);
      pFVar22 = &param_1->TriangleRefCounts;
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_258,pFVar22,0,
                 (pFVar22->RefCounts).CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator(&local_158,pFVar22,iVar27,iVar27);
      if ((local_388.bIsSet != false) &&
         (TDynamicVector<int,512>::Empty(&local_388.TypedValue,0),
         local_388.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_388.TypedValue.Blocks.AllocatorInstance.Data);
      }
      local_388.TypedValue.CurBlock = 0;
      local_388.TypedValue.CurBlockUsed = 0;
      local_388.TypedValue.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.TypedValue.Blocks.ArrayNum = 0;
      local_388.TypedValue.Blocks.ArrayMax = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&local_388.TypedValue);
      local_388.bIsSet = true;
      TDynamicVector<int,512>::Resize
                (&local_388.TypedValue,
                 (this->Triangles).CurBlock * 0x200 + (this->Triangles).CurBlockUsed,&InvalidID);
      while (iVar27 = local_258.Index, uVar11 = local_268._8_8_, uVar14 = local_268.Index,
            uVar14 != local_168._8_4_) {
        if (local_258.Index == local_158._8_4_) goto LAB_1434ed7f3;
        lVar6 = *(longlong *)
                 ((this->Triangles).Blocks.AllocatorInstance.Data +
                 ((local_268._8_8_ & 0xffffffff) >> 9) * 8);
        local_298 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
        local_2a0 = *(undefined8 *)(lVar6 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
        lVar6 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_258.Index >> 9) * 8);
        local_188 = *(undefined8 *)(lVar6 + (ulonglong)(local_258.Index & 0x1ff) * 0xc);
        local_180 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(local_258.Index & 0x1ff) * 0xc);
        if ((local_388.bIsSet == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        *(int *)(*(longlong *)
                  (local_388.TypedValue.Blocks.AllocatorInstance.Data +
                  ((uVar11 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4) = iVar27;
        pFVar20 = pFVar26;
        do {
          if (local_350 == '\0') {
            iVar31 = *(int *)((longlong)&local_2a0 + (longlong)pFVar20);
          }
          else {
            iVar31 = *(int *)(*(longlong *)
                               (local_368.Blocks.AllocatorInstance.Data +
                               (ulonglong)(*(uint *)((longlong)&local_2a0 + (longlong)pFVar20) >> 9)
                               * 8) + (ulonglong)
                                      (*(uint *)((longlong)&local_2a0 + (longlong)pFVar20) & 0x1ff)
                                      * 4);
          }
          if (*(int *)((longlong)&local_188 + (longlong)pFVar20) != iVar31) {
            if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
            param_3->ID = uVar14;
            bVar12 = false;
            param_3->Reason = Triangle;
            param_3->OtherID = iVar27;
            param_3->IDType = Triangle;
            goto LAB_1434eea62;
          }
          pFVar20 = pFVar20 + 4;
        } while ((longlong)pFVar20 < 0xc);
        FRefCountVector::BaseIterator::goto_next(&local_268);
        FRefCountVector::BaseIterator::goto_next(&local_258);
      }
      if (local_258.Index == local_158._8_4_) goto LAB_1434ed9e1;
LAB_1434ed7f3:
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = TriangleCount;
        bVar12 = false;
        goto LAB_1434eea62;
      }
    }
    else {
LAB_1434ed774:
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = VertexCount;
        bVar12 = false;
        goto LAB_1434eea62;
      }
    }
    goto LAB_1434eea5c;
  }
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_208,&this->VertexRefCounts,0,
             (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar27 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->VertexRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_d8,&this->VertexRefCounts,iVar27,iVar27);
  iVar27 = local_208.Index;
  while (iVar27 != local_d8._8_4_) {
    iVar27 = local_208.Index;
    bVar12 = IsVertex(param_1,iVar27);
    if ((!bVar12) ||
       (bVar12 = `UE::Geometry::FDynamicMesh3::IsSameAs_Helper'::__l2::<lambda_1>::operator()
                           (&local_248,iVar27,iVar27), !bVar12)) {
      if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
      param_3->ID = iVar27;
      bVar12 = false;
      param_3->Reason = Vertex;
      param_3->OtherID = -1;
      param_3->IDType = Vertex;
      goto LAB_1434eea62;
    }
    FRefCountVector::BaseIterator::goto_next(&local_208);
    iVar27 = local_208.Index;
  }
  pFVar22 = &this->TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_1f8,pFVar22,0,
             (pFVar22->RefCounts).CurBlock * 0x200 +
             (this->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_c8,pFVar22,iVar27,iVar27);
  iVar27 = local_1f8.Index;
  while (iVar27 != local_c8._8_4_) {
    uVar14 = (uint)local_1f8._8_8_;
    if (((int)uVar14 < 0) ||
       ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) {
LAB_1434eda8c:
      if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
      param_3->Reason = Triangle;
      bVar12 = false;
      param_3->ID = uVar14;
      param_3->OtherID = -1;
      param_3->IDType = Triangle;
      goto LAB_1434eea62;
    }
    uVar21 = (ulonglong)(uVar14 & 0x1ff);
    uVar33 = (local_1f8._8_8_ & 0xffffffff) >> 9;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + uVar33 * 8) + uVar21 * 2) - 1U))
    goto LAB_1434eda8c;
    lVar6 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar33 * 8);
    local_178 = *(undefined8 *)(lVar6 + uVar21 * 0xc);
    lVar7 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + uVar33 * 8);
    local_218 = *(undefined8 *)(lVar7 + uVar21 * 0xc);
    if ((((int)local_178 != (int)local_218) ||
        ((int)((ulonglong)local_178 >> 0x20) != (int)((ulonglong)local_218 >> 0x20))) ||
       (*(int *)(lVar6 + 8 + uVar21 * 0xc) != *(int *)(lVar7 + 8 + uVar21 * 0xc)))
    goto LAB_1434eda8c;
    FRefCountVector::BaseIterator::goto_next(&local_1f8);
    iVar27 = local_1f8.Index;
  }
LAB_1434ed9e1:
  if (param_2->bCheckConnectivity != false) {
    pFVar22 = &this->EdgeRefCounts;
    if ((this->EdgeRefCounts).UsedCount != (param_1->EdgeRefCounts).UsedCount) {
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = EdgeCount;
        ::FString::PrintfImpl(&local_148,L"Edge Count: %d != %d");
        ::FString::operator=(&param_3->Detail,&local_148);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
          bVar12 = false;
          goto LAB_1434eea62;
        }
      }
      goto LAB_1434eea5c;
    }
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_1d8,pFVar22,0,
               (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed)
    ;
    iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_b8,pFVar22,iVar27,iVar27);
    iVar27 = local_1d8.Index;
    while (iVar27 != local_b8._8_4_) {
      uVar18 = (uint)local_1d8._8_8_;
      auVar4 = *(undefined1 (*) [16])
                (*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data +
                  ((local_1d8._8_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
      uVar14 = auVar4._0_4_;
      uVar25 = auVar4._4_4_;
      if (local_350 != '\0') {
        uVar14 = *(uint *)(*(longlong *)
                            (local_368.Blocks.AllocatorInstance.Data +
                            ((auVar4._0_8_ & 0xffffffff) >> 9) * 8) +
                          (ulonglong)(uVar14 & 0x1ff) * 4);
        uVar25 = *(uint *)(*(longlong *)
                            (local_368.Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8)
                          + (ulonglong)(uVar25 & 0x1ff) * 4);
      }
      local_1e8 = auVar4;
      uVar14 = FindEdge(param_1,uVar14,uVar25);
      if (uVar14 == 0xffffffff) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->ID = uVar18;
        bVar12 = false;
        param_3->Reason = Connectivity;
        param_3->OtherID = -1;
        param_3->IDType = Edge;
        goto LAB_1434eea62;
      }
      lVar6 = *(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
              (ulonglong)(uVar14 & 0x1ff) * 0x10;
      iVar27 = *(int *)(lVar6 + 8);
      iVar31 = *(int *)(lVar6 + 0xc);
      uVar21 = auVar4._8_8_;
      if (local_388.bIsSet != false) {
        if (auVar4._8_4_ == -1) {
          uVar25 = 0xffffffff;
        }
        else {
          pTVar17 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator*(&local_388);
          uVar25 = *(uint *)(*(longlong *)
                              ((pTVar17->Blocks).AllocatorInstance.Data +
                              ((local_1e8._8_8_ & 0xffffffff) >> 9) * 8) +
                            (ulonglong)(local_1e8._8_4_ & 0x1ff) * 4);
        }
        if (local_1e8._12_4_ == -1) {
          uVar21 = 0xffffffff;
        }
        else {
          pTVar17 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator*(&local_388);
          uVar21 = (ulonglong)
                   *(uint *)(*(longlong *)
                              ((pTVar17->Blocks).AllocatorInstance.Data +
                              (ulonglong)((uint)local_1e8._12_4_ >> 9) * 8) +
                            (ulonglong)(local_1e8._12_4_ & 0x1ff) * 4);
        }
        uVar21 = uVar21 << 0x20 | (ulonglong)uVar25;
      }
      iVar28 = (int)(uVar21 >> 0x20);
      iVar10 = iVar31;
      if (iVar27 < iVar31) {
        iVar10 = iVar27;
      }
      iVar19 = (int)uVar21;
      iVar15 = iVar28;
      if (iVar19 < iVar28) {
        iVar15 = iVar19;
      }
      if (iVar15 != iVar10) {
LAB_1434edd4d:
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->ID = uVar18;
        bVar12 = false;
        param_3->Reason = Connectivity;
        param_3->OtherID = uVar14;
        param_3->IDType = Edge;
        goto LAB_1434eea62;
      }
      uVar33 = uVar21 >> 0x20;
      if (iVar28 < iVar19) {
        uVar33 = uVar21;
      }
      if (iVar31 < iVar27) {
        iVar31 = iVar27;
      }
      if ((int)uVar33 != iVar31) goto LAB_1434edd4d;
      FRefCountVector::BaseIterator::goto_next(&local_1d8);
      iVar27 = local_1d8.Index;
    }
  }
  if (param_2->bCheckEdgeIDs != false) {
    pFVar22 = &this->EdgeRefCounts;
    if ((this->EdgeRefCounts).UsedCount != (param_1->EdgeRefCounts).UsedCount) {
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = EdgeCount;
        ::FString::PrintfImpl(&local_118,L"Edge Count: %d != %d");
        ::FString::operator=(&param_3->Detail,&local_118);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          bVar12 = false;
          goto LAB_1434eea62;
        }
      }
      goto LAB_1434eea5c;
    }
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_1c8,pFVar22,0,
               (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed)
    ;
    iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_a8,pFVar22,iVar27,iVar27);
    iVar27 = local_1c8.Index;
    while (iVar27 != local_a8._8_4_) {
      uVar14 = (uint)local_1c8._8_8_;
      if (((int)uVar14 < 0) ||
         ((int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) {
LAB_1434edfb1:
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->Reason = Edge;
        bVar12 = false;
        param_3->ID = uVar14;
        param_3->OtherID = -1;
        param_3->IDType = Edge;
        goto LAB_1434eea62;
      }
      uVar21 = (ulonglong)(uVar14 & 0x1ff);
      uVar33 = (local_1c8._8_8_ & 0xffffffff) >> 9;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance
                                         .Data + uVar33 * 8) + uVar21 * 2) - 1U))
      goto LAB_1434edfb1;
      piVar1 = (int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar33 * 8) +
                      uVar21 * 0x10);
      local_2b0 = *piVar1;
      iStack_2ac = piVar1[1];
      uStack_2a8 = piVar1[2];
      uStack_2a4 = piVar1[3];
      uVar18 = uStack_2a4;
      uVar25 = uStack_2a8;
      if (local_388.bIsSet != false) {
        if (uStack_2a8 == 0xffffffff) {
          uVar25 = 0xffffffff;
        }
        else {
          uVar25 = *(uint *)(*(longlong *)
                              (local_388.TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uStack_2a8 >> 9) * 8) +
                            (ulonglong)(uStack_2a8 & 0x1ff) * 4);
        }
        if (uStack_2a4 == 0xffffffff) {
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = *(uint *)(*(longlong *)
                              (local_388.TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uStack_2a4 >> 9) * 8) +
                            (ulonglong)(uStack_2a4 & 0x1ff) * 4);
        }
      }
      piVar1 = (int *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + uVar33 * 8) +
                      uVar21 * 0x10);
      if (((local_2b0 != *piVar1) || (iStack_2ac != piVar1[1])) ||
         ((uVar25 != piVar1[2] || (uVar18 != piVar1[3])))) goto LAB_1434edfb1;
      FRefCountVector::BaseIterator::goto_next(&local_1c8);
      iVar27 = local_1c8.Index;
    }
  }
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_2->bCheckNormals == false) {
LAB_1434ee1a9:
    pFVar22 = &this->VertexRefCounts;
    if (param_2->bCheckColors != false) {
      bVar12 = (this->VertexColors).bIsSet;
      if (bVar12 != (param_1->VertexColors).bIsSet) {
        if (param_3 != (FMeshDifferenceInfo *)0x0) {
          param_3->Reason = Color;
          ::FString::PrintfImpl(&local_128,L"Has Vertex Colors: %d != %d");
          ::FString::operator=(&param_3->Detail,&local_128);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
            bVar12 = false;
            goto LAB_1434eea62;
          }
        }
        goto LAB_1434eea5c;
      }
      if (bVar12 != false) {
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_348,pFVar22,0,
                   (pFVar22->RefCounts).CurBlock * 0x200 +
                   (this->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed;
        FRefCountVector::IndexIterator::IndexIterator(&local_98,pFVar22,iVar27,iVar27);
        if (local_348._8_4_ != local_98._8_4_) {
          fVar2 = param_2->EpsilonFloat;
          do {
            uVar25 = local_348._8_4_;
            if (local_350 != '\0') {
              uVar25 = *(uint *)(*(longlong *)
                                  (local_368.Blocks.AllocatorInstance.Data +
                                  (ulonglong)((uint)local_348._8_4_ >> 9) * 8) +
                                (ulonglong)(local_348._8_4_ & 0x1ff) * 4);
            }
            uVar29 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
            local_284 = CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
            if ((param_1->VertexColors).bIsSet != false) {
              lVar6 = *(longlong *)
                       ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar25 >> 9) * 8);
              uVar29 = *(float *)(lVar6 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
              local_284 = *(ulonglong *)(lVar6 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
            }
            if ((this->VertexColors).bIsSet == false) {
              uVar21 = (ulonglong)(uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
              uVar16 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
              local_224 = CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                                   UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
            }
            else {
              lVar6 = *(longlong *)
                       ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)local_348._8_4_ >> 9) * 8);
              uVar21 = *(ulonglong *)(lVar6 + (ulonglong)(local_348._8_4_ & 0x1ff) * 0xc);
              uVar16 = *(float *)(lVar6 + 8 + (ulonglong)(local_348._8_4_ & 0x1ff) * 0xc);
              local_224 = uVar21;
            }
            if (fVar2 < (float)((uint)((float)uVar21 - (float)local_284) & uVar14)) {
LAB_1434ee4b0:
              if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
              param_3->Reason = Color;
              uVar14 = local_348._8_4_;
              goto LAB_1434ee235;
            }
            if ((fVar2 < (float)((uint)(local_224._4_4_ - local_284._4_4_) & uVar14)) ||
               (fVar2 < (float)((uint)((float)uVar16 - (float)uVar29) & uVar14)))
            goto LAB_1434ee4b0;
            local_348._8_4_ = local_348._8_4_ + 1;
            if ((int)local_348._8_4_ < (int)local_348._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_348._0_8_ + 8) +
                                 (ulonglong)((uint)local_348._8_4_ >> 9) * 8) +
                               (ulonglong)(local_348._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_348._0_8_ + 8) +
                                (ulonglong)((uint)local_348._8_4_ >> 9) * 8) +
                              (ulonglong)(local_348._8_4_ & 0x1ff) * 2) != -1)) break;
                local_348._8_4_ = local_348._8_4_ + 1;
              } while ((int)local_348._8_4_ < (int)local_348._12_4_);
            }
          } while (local_348._8_4_ != local_98._8_4_);
        }
      }
    }
    if (param_2->bCheckUVs != false) {
      bVar12 = (this->VertexUVs).bIsSet;
      if (bVar12 != (param_1->VertexUVs).bIsSet) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->Reason = UV;
        ::FString::PrintfImpl(&local_308,L"Has Vertex UVs: %d != %d");
        pFVar23 = &param_3->Detail;
        FVar36.Data = local_308.Data.AllocatorInstance.Data;
        if (pFVar23 != &local_308) {
          pFVar20 = (pFVar23->Data).AllocatorInstance.Data;
          if (pFVar20 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar20);
          }
          (pFVar23->Data).AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
          (param_3->Detail).Data.ArrayNum = local_308.Data.ArrayNum;
          (param_3->Detail).Data.ArrayMax = local_308.Data.ArrayMax;
          local_308.Data.ArrayNum = 0;
          local_308.Data.ArrayMax = 0;
          local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar36.Data = pFVar26;
        }
        goto LAB_1434eea2a;
      }
      if (bVar12 != false) {
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_2f8,&this->VertexRefCounts,0,
                   (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (this->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar27 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed;
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_88,&this->VertexRefCounts,iVar27,iVar27);
        if (local_2f8._8_4_ != local_88._8_4_) {
          do {
            uVar25 = local_2f8._8_4_;
            if (local_350 != '\0') {
              uVar25 = *(uint *)(*(longlong *)
                                  (local_368.Blocks.AllocatorInstance.Data +
                                  (ulonglong)((uint)local_2f8._8_4_ >> 9) * 8) +
                                (ulonglong)(local_2f8._8_4_ & 0x1ff) * 4);
            }
            if ((param_1->VertexUVs).bIsSet == false) {
              local_2c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            }
            else {
              local_2c8 = (TVector2<float>_u_0)
                          *(TVector2<float>_u_0 *)
                           &((TVector2<float>_u_0 *)
                            (*(longlong *)
                              ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 8))->
                            _s_0;
            }
            if ((this->VertexUVs).bIsSet == false) {
              local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            }
            else {
              local_res20 = (TVector2<float>_u_0)
                            *(TVector2<float>_u_0 *)
                             &((TVector2<float>_u_0 *)
                              (*(longlong *)
                                ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                                (ulonglong)((uint)local_2f8._8_4_ >> 9) * 8) +
                              (ulonglong)(local_2f8._8_4_ & 0x1ff) * 8))->_s_0;
            }
            if (param_2->EpsilonFloat <
                (float)((uint)((float)local_res20 - (float)local_2c8) & uVar14)) {
LAB_1434ee6f3:
              if (param_3 != (FMeshDifferenceInfo *)0x0) {
                param_3->Reason = UV;
                uVar14 = local_2f8._8_4_;
LAB_1434ee235:
                param_3->ID = uVar14;
                bVar12 = false;
                param_3->OtherID = -1;
                param_3->IDType = Vertex;
                goto LAB_1434eea62;
              }
              goto LAB_1434eea5c;
            }
            if (param_2->EpsilonFloat <
                (float)((uint)(local_res20._4_4_ - local_2c8._4_4_) & uVar14)) goto LAB_1434ee6f3;
            local_2f8._8_4_ = local_2f8._8_4_ + 1;
            if ((int)local_2f8._8_4_ < (int)local_2f8._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_2f8._0_8_ + 8) +
                                 (ulonglong)((uint)local_2f8._8_4_ >> 9) * 8) +
                               (ulonglong)(local_2f8._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_2f8._0_8_ + 8) +
                                (ulonglong)((uint)local_2f8._8_4_ >> 9) * 8) +
                              (ulonglong)(local_2f8._8_4_ & 0x1ff) * 2) != -1)) break;
                local_2f8._8_4_ = local_2f8._8_4_ + 1;
              } while ((int)local_2f8._8_4_ < (int)local_2f8._12_4_);
            }
          } while (local_2f8._8_4_ != local_88._8_4_);
        }
      }
    }
    if (param_2->bCheckGroups != false) {
      bVar12 = (this->TriangleGroups).bIsSet;
      cVar34 = (param_1->TriangleGroups).bIsSet;
      if (bVar12 != (bool)cVar34) {
        if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
        param_3->Reason = Group;
        ::FString::PrintfImpl(&local_2e8,L"Has Triangle Groups: %d != %d");
        pFVar23 = &param_3->Detail;
        FVar36.Data = local_2e8.Data.AllocatorInstance.Data;
        if (pFVar23 != &local_2e8) {
          pFVar26 = (pFVar23->Data).AllocatorInstance.Data;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar26);
          }
          (pFVar23->Data).AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
          (param_3->Detail).Data.ArrayNum = local_2e8.Data.ArrayNum;
          (param_3->Detail).Data.ArrayMax = local_2e8.Data.ArrayMax;
          local_2e8.Data.ArrayNum = 0;
          local_2e8.Data.ArrayMax = 0;
          local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar36.Data = (FScriptContainerElement *)0x0;
        }
        goto LAB_1434eea2a;
      }
      if (bVar12 == false) goto LAB_1434ee979;
      uVar14 = (this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this->TriangleRefCounts).RefCounts.CurBlockUsed;
      if ((uVar14 == 0) ||
         (pFVar20 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         pFVar26 = (FScriptContainerElement *)0x0, (ushort)(**(short **)pFVar20 - 1U) < 0xfffe)) {
LAB_1434ee790:
        uVar25 = (uint)pFVar26;
      }
      else {
        pFVar26 = (FScriptContainerElement *)&DAT_00000001;
        uVar25 = 1;
        if (1 < (int)uVar14) {
          do {
            sVar5 = *(short *)(*(longlong *)(pFVar20 + ((ulonglong)pFVar26 >> 9) * 8) +
                              (ulonglong)((uint)pFVar26 & 0x1ff) * 2);
            if ((sVar5 != 0) && (sVar5 != -1)) break;
            uVar25 = (uint)pFVar26 + 1;
            pFVar26 = (FScriptContainerElement *)(ulonglong)uVar25;
          } while ((int)uVar25 < (int)uVar14);
          cVar34 = (param_1->TriangleGroups).bIsSet;
          goto LAB_1434ee790;
        }
      }
joined_r0x0001434ee79a:
      if (uVar25 != uVar14) {
        while( true ) {
          uVar25 = (uint)pFVar26;
          uVar18 = uVar25;
          if (local_388.bIsSet != false) {
            uVar18 = *(uint *)(*(longlong *)
                                (local_388.TypedValue.Blocks.AllocatorInstance.Data +
                                ((ulonglong)pFVar26 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
          }
          if (cVar34 == '\0') {
            iVar27 = -1;
          }
          else {
            iVar27 = iVar35;
            if ((-1 < (int)uVar18) &&
               ((int)uVar18 <
                (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
              if ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
                                     (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe) {
                iVar27 = *(int *)(*(longlong *)
                                   ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar18 >> 9) * 8) +
                                 (ulonglong)(uVar18 & 0x1ff) * 4);
              }
            }
          }
          iVar31 = iVar35;
          if ((-1 < (int)uVar25) && ((int)uVar25 < (int)uVar14)) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + ((ulonglong)pFVar26 >> 9) * 8) +
                                   (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe) {
              iVar31 = *(int *)(*(longlong *)
                                 ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                 ((ulonglong)pFVar26 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
            }
          }
          if (iVar31 != iVar27) {
            if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
            param_3->Reason = Group;
            GetTriangleGroup(param_1,uVar18);
            GetTriangleGroup(this,uVar25);
            ::FString::PrintfImpl(&local_2d8,L"Triangle Group: %d != %d");
            pFVar23 = &param_3->Detail;
            if (pFVar23 != &local_2d8) {
              pFVar26 = (pFVar23->Data).AllocatorInstance.Data;
              if (pFVar26 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar26);
              }
              (pFVar23->Data).AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
              (param_3->Detail).Data.ArrayNum = local_2d8.Data.ArrayNum;
              (param_3->Detail).Data.ArrayMax = local_2d8.Data.ArrayMax;
              local_2d8.Data.ArrayNum = 0;
              local_2d8.Data.ArrayMax = 0;
              local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
            }
            param_3->ID = uVar25;
            bVar12 = false;
            param_3->OtherID = uVar18;
            param_3->IDType = Triangle;
            goto LAB_1434eea62;
          }
          uVar25 = uVar25 + 1;
          pFVar26 = (FScriptContainerElement *)(ulonglong)uVar25;
          if ((int)uVar14 <= (int)uVar25) break;
          while( true ) {
            uVar21 = (ulonglong)((uint)pFVar26 & 0x1ff);
            lVar6 = *(longlong *)
                     ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                     ((ulonglong)pFVar26 >> 9) * 8);
            if ((*(short *)(lVar6 + uVar21 * 2) != 0) && (*(short *)(lVar6 + uVar21 * 2) != -1))
            break;
            uVar25 = (uint)pFVar26 + 1;
            pFVar26 = (FScriptContainerElement *)(ulonglong)uVar25;
            if ((int)uVar14 <= (int)uVar25) goto joined_r0x0001434ee79a;
          }
        }
        goto joined_r0x0001434ee79a;
      }
    }
LAB_1434ee979:
    if (param_2->bCheckAttributes == false) {
LAB_1434eea60:
      bVar12 = true;
      goto LAB_1434eea62;
    }
    this_00 = (this->AttributeSet).Ptr;
    pFVar8 = (param_1->AttributeSet).Ptr;
    if ((this_00 != (FDynamicMeshAttributeSet *)0x0) == (pFVar8 != (FDynamicMeshAttributeSet *)0x0))
    {
      if ((this_00 == (FDynamicMeshAttributeSet *)0x0) ||
         (bVar12 = FDynamicMeshAttributeSet::IsSameAs(this_00,pFVar8,param_2->bIgnoreDataLayout),
         bVar12)) goto LAB_1434eea60;
      if (param_3 != (FMeshDifferenceInfo *)0x0) {
        param_3->Reason = Attribute;
      }
    }
    else if (param_3 != (FMeshDifferenceInfo *)0x0) {
      param_3->Reason = Attribute;
      ::FString::PrintfImpl(&local_338,L"Has Attribute Set: %d != %d");
      pFVar23 = &param_3->Detail;
      FVar36.Data = local_338.Data.AllocatorInstance.Data;
      if (pFVar23 != &local_338) {
        pFVar26 = (pFVar23->Data).AllocatorInstance.Data;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
        (pFVar23->Data).AllocatorInstance.Data = local_338.Data.AllocatorInstance.Data;
        (param_3->Detail).Data.ArrayNum = local_338.Data.ArrayNum;
        (param_3->Detail).Data.ArrayMax = local_338.Data.ArrayMax;
        local_338.Data.ArrayNum = 0;
        local_338.Data.ArrayMax = 0;
        local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar36.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_1434eea2a;
    }
  }
  else {
    bVar12 = (this->VertexNormals).bIsSet;
    if (bVar12 == (param_1->VertexNormals).bIsSet) {
      pFVar22 = &this->VertexRefCounts;
      if (bVar12 != false) {
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_318,pFVar22,0,
                   (pFVar22->RefCounts).CurBlock * 0x200 +
                   (this->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar27 = (pFVar22->RefCounts).CurBlock * 0x200 +
                 (this->VertexRefCounts).RefCounts.CurBlockUsed;
        FRefCountVector::IndexIterator::IndexIterator(local_78,pFVar22,iVar27,iVar27);
        if (local_318._8_4_ != local_78[0]._8_4_) {
          fVar2 = param_2->EpsilonFloat;
          do {
            uVar25 = local_318._8_4_;
            if (local_350 != '\0') {
              uVar25 = *(uint *)(*(longlong *)
                                  (local_368.Blocks.AllocatorInstance.Data +
                                  (ulonglong)((uint)local_318._8_4_ >> 9) * 8) +
                                (ulonglong)(local_318._8_4_ & 0x1ff) * 4);
            }
            uVar29 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
            local_290 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                 UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
            if ((param_1->VertexNormals).bIsSet != false) {
              lVar6 = *(longlong *)
                       ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar25 >> 9) * 8);
              uVar29 = *(float *)(lVar6 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
              local_290 = *(ulonglong *)(lVar6 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
            }
            if ((this->VertexNormals).bIsSet == false) {
              uVar21 = (ulonglong)(uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
              uVar16 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
              local_230 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
            }
            else {
              lVar6 = *(longlong *)
                       ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)local_318._8_4_ >> 9) * 8);
              uVar21 = *(ulonglong *)(lVar6 + (ulonglong)(local_318._8_4_ & 0x1ff) * 0xc);
              uVar16 = *(float *)(lVar6 + 8 + (ulonglong)(local_318._8_4_ & 0x1ff) * 0xc);
              local_230 = uVar21;
            }
            if (fVar2 < (float)((uint)((float)uVar21 - (float)local_290) & uVar14)) {
LAB_1434ee226:
              if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
              param_3->Reason = Normal;
              uVar14 = local_318._8_4_;
              goto LAB_1434ee235;
            }
            if ((fVar2 < (float)((uint)(local_230._4_4_ - local_290._4_4_) & uVar14)) ||
               (fVar2 < (float)((uint)((float)uVar16 - (float)uVar29) & uVar14)))
            goto LAB_1434ee226;
            local_318._8_4_ = local_318._8_4_ + 1;
            if ((int)local_318._8_4_ < (int)local_318._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_318._0_8_ + 8) +
                                 (ulonglong)((uint)local_318._8_4_ >> 9) * 8) +
                               (ulonglong)(local_318._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_318._0_8_ + 8) +
                                (ulonglong)((uint)local_318._8_4_ >> 9) * 8) +
                              (ulonglong)(local_318._8_4_ & 0x1ff) * 2) != -1)) break;
                local_318._8_4_ = local_318._8_4_ + 1;
              } while ((int)local_318._8_4_ < (int)local_318._12_4_);
            }
          } while (local_318._8_4_ != local_78[0]._8_4_);
        }
      }
      goto LAB_1434ee1a9;
    }
    if (param_3 == (FMeshDifferenceInfo *)0x0) goto LAB_1434eea5c;
    param_3->Reason = Normal;
    ::FString::PrintfImpl(&local_328,L"Has Vertex Normals: %d != %d");
    pFVar23 = &param_3->Detail;
    FVar36.Data = local_328.Data.AllocatorInstance.Data;
    if (pFVar23 != &local_328) {
      pFVar20 = (pFVar23->Data).AllocatorInstance.Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      (pFVar23->Data).AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
      (param_3->Detail).Data.ArrayNum = local_328.Data.ArrayNum;
      (param_3->Detail).Data.ArrayMax = local_328.Data.ArrayMax;
      local_328.Data.ArrayNum = 0;
      local_328.Data.ArrayMax = 0;
      local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar36.Data = pFVar26;
    }
LAB_1434eea2a:
    if (FVar36.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar36.Data);
      bVar12 = false;
      goto LAB_1434eea62;
    }
  }
LAB_1434eea5c:
  bVar12 = false;
LAB_1434eea62:
  if ((local_388.bIsSet != false) &&
     (TDynamicVector<int,512>::Empty(&local_388.TypedValue,0),
     local_388.TypedValue.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_388.TypedValue.Blocks.AllocatorInstance.Data);
  }
  if (local_350 != '\0') {
    TDynamicVector<int,512>::Empty(&local_368,0);
    if (local_368.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Blocks.AllocatorInstance.Data);
      return bVar12;
    }
    return bVar12;
  }
  return bVar12;
}

// IsTriangle @ 1434f5490

bool __thiscall UE::Geometry::FDynamicMesh3::IsTriangle(FDynamicMesh3 *this,int param_1)

{
  if (((-1 < param_1) &&
      (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsVertex @ 1434f54e0

bool __thiscall UE::Geometry::FDynamicMesh3::IsVertex(FDynamicMesh3 *this,int param_1)

{
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// MergeEdges @ 1434f7bc0

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::MergeEdges
          (FDynamicMesh3 *this,int param_1,int param_2,FMergeEdgesInfo *param_3,bool param_4)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0x90))();
  return EVar1;
}

// MergeEdges @ 1434f7bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::MergeEdges
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FMergeEdgesInfo *param_4,
          bool param_5)

{
  FMutex *pFVar1;
  uint *puVar2;
  double *pdVar3;
  short *psVar4;
  atomic<unsigned_char> aVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined8 uVar9;
  FDynamicMeshAttributeSet *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar19;
  undefined1 *puVar20;
  FMergeEdgesInfo *pFVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  EMeshResult EVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  longlong lVar29;
  ForElementType<int> FVar30;
  longlong *plVar31;
  int iVar32;
  ushort uVar33;
  uint uVar34;
  uint uVar35;
  ForElementType<int> FVar36;
  uint uVar37;
  ulonglong uVar38;
  ForElementType<int> FVar39;
  ForElementType<int> FVar40;
  uint uVar41;
  longlong lVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auStack_5d8 [32];
  uint *local_5b8;
  ForElementType<int> local_5b0;
  longlong local_5a8;
  longlong local_5a0;
  undefined8 local_598;
  uint local_588;
  uint local_584;
  uint local_580 [2];
  uint local_578;
  uint local_574;
  longlong local_570;
  uint local_568;
  uint local_564;
  uint local_560 [2];
  longlong local_558;
  FMergeEdgesInfo *local_550;
  longlong local_548;
  ForElementType<int> local_540;
  uint local_538 [2];
  uint local_530 [2];
  int local_528 [2];
  ForElementType<int> local_520;
  ForElementType<int> local_518;
  int local_510 [2];
  ForElementType<int> local_508;
  ulonglong local_500;
  ulonglong local_4f8;
  ulonglong local_4f0;
  ulonglong local_4e8;
  longlong local_4e0;
  ulonglong local_4d8;
  FIndex3i_u_0 local_4d0;
  FIndex3i_u_0 local_4c4;
  FDynamicMesh3 *local_4b8;
  double local_4b0;
  double local_4a8;
  undefined1 local_4a0 [24];
  int local_488;
  int local_484;
  uint local_480;
  undefined1 local_478 [24];
  int local_460;
  int local_45c;
  ulonglong local_458;
  undefined1 local_450 [16];
  undefined8 local_438;
  undefined8 local_430;
  FIndex2i_u_0 local_428;
  FIndex2i_u_0 FStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [16];
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined8 local_3d0;
  BaseValueIterator local_3c8;
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  double local_370;
  BaseValueIterator local_368;
  BaseValueIterator local_340;
  ForElementType<int> local_318;
  int local_2f0;
  int local_2ec;
  undefined1 local_2e8 [64];
  longlong local_2a8 [3];
  longlong *local_290;
  undefined1 local_288 [64];
  longlong local_248 [3];
  longlong *local_230;
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined1 local_1a8 [96];
  undefined1 local_148 [96];
  ulonglong local_e8;
  
  FStack_420 = _UNK_15060db28;
  local_428 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_5d8;
  local_438 = 0;
  local_430 = 0xffffffffffffffff;
  auVar46 = ZEXT816(0);
  param_4->RemovedEdge = 0;
  FVar39 = (ForElementType<int>)&param_4->BowtiesRemovedEdges;
  (param_4->KeptVerts).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
  local_418 = 0xffffffffffffffff;
  (param_4->ExtraKeptEdges).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
  (param_4->RemovedVerts).field0_0x0 = local_428;
  local_3d0 = 0;
  local_548 = CONCAT44(local_548._4_4_,param_1);
  local_550 = param_4;
  local_400 = 0;
  local_3f8 = 0;
  local_3f4 = 4;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d4 = 4;
  param_4->KeptEdge = 0;
  (param_4->ExtraRemovedEdges).field0_0x0 = FStack_420;
  local_410 = 0;
  uStack_408 = 0;
  local_584 = param_2;
  local_518 = FVar39;
  local_3f0 = auVar46;
  if (FVar39 != (ForElementType<int>)&local_410) {
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[0] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[1] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[2] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[3] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[4] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[5] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[6] = '\0';
    (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar39)->
    AllocatorInstance).InlineData[7] = '\0';
    pTVar19 = &param_4->BowtiesRemovedEdges;
    (pTVar19->AllocatorInstance).InlineData[8] = '\0';
    (pTVar19->AllocatorInstance).InlineData[9] = '\0';
    (pTVar19->AllocatorInstance).InlineData[10] = '\0';
    (pTVar19->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar19->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar19->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar19->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar19->AllocatorInstance).InlineData[0xf] = '\0';
    FVar40 = (param_4->BowtiesRemovedEdges).AllocatorInstance.SecondaryData;
    if (FVar40 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar40);
    }
    (param_4->BowtiesRemovedEdges).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (param_4->BowtiesRemovedEdges).ArrayNum = 0;
    (param_4->BowtiesRemovedEdges).ArrayMax = 4;
  }
  pFVar21 = local_550;
  FVar40 = (ForElementType<int>)&local_550->BowtiesKeptEdges;
  local_520 = FVar40;
  if (FVar40 != (ForElementType<int>)local_3f0) {
    *(undefined1 (*) [16])
     (((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar40)->
     AllocatorInstance).InlineData = auVar46;
    FVar36 = (local_550->BowtiesKeptEdges).AllocatorInstance.SecondaryData;
    if (FVar36 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar36);
    }
    (pFVar21->BowtiesKeptEdges).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (pFVar21->BowtiesKeptEdges).ArrayNum = 0;
    (pFVar21->BowtiesKeptEdges).ArrayMax = 4;
  }
  local_550->InterpolationT = param_3;
  if ((param_1 < 0) ||
     (iVar32 = (this->EdgeRefCounts).RefCounts.CurBlockUsed +
               (this->EdgeRefCounts).RefCounts.CurBlock * 0x200, iVar32 <= param_1)) {
    return Failed_NotAnEdge;
  }
  pFVar7 = (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  local_4d8 = (ulonglong)((uint)param_1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar7 + local_4d8 * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  if (param_2 < 0) {
    return Failed_NotAnEdge;
  }
  if (iVar32 <= param_2) {
    return Failed_NotAnEdge;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar7 + (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  pFVar7 = (this->Edges).Blocks.AllocatorInstance.Data;
  local_508 = (ForElementType<int>)((ulonglong)(param_1 & 0x1ff) * 0x10);
  local_3a0 = *(undefined1 (*) [16])(*(longlong *)(pFVar7 + local_4d8 * 8) + (longlong)local_508);
  local_390 = *(undefined1 (*) [16])
               (*(longlong *)(pFVar7 + (ulonglong)((uint)param_2 >> 9) * 8) +
               (ulonglong)(param_2 & 0x1ff) * 0x10);
  if ((local_3a0._12_4_ != -1) || (local_390._12_4_ != -1)) {
    return Failed_NotABoundaryEdge;
  }
  pFVar7 = (this->Triangles).Blocks.AllocatorInstance.Data;
  local_538[0] = local_3a0._0_4_;
  local_574 = local_3a0._4_4_;
  local_568 = local_390._0_4_;
  local_564 = local_390._4_4_;
  uVar27 = (ulonglong)(local_3a0._8_4_ & 0x1ff);
  lVar42 = *(longlong *)(pFVar7 + ((local_3a0._8_8_ & 0xffffffff) >> 9) * 8);
  local_4c4._0_8_ = *(undefined8 *)(lVar42 + uVar27 * 0xc);
  local_4c4._s_0.C = *(int *)(lVar42 + 8 + uVar27 * 0xc);
  uVar27 = (ulonglong)(local_390._8_4_ & 0x1ff);
  local_4e8 = (local_390._8_8_ & 0xffffffff) >> 9;
  local_4e0 = uVar27 * 3;
  lVar42 = *(longlong *)(pFVar7 + local_4e8 * 8);
  local_4d0._0_8_ = *(undefined8 *)(lVar42 + uVar27 * 0xc);
  local_4d0._s_0.C = *(int *)(lVar42 + 8 + uVar27 * 0xc);
  iVar32 = IndexUtil::OrientTriEdgeAndFindOtherVtx<int,UE::Geometry::FIndex3i>
                     ((int *)&local_568,(int *)&local_564,(FIndex3i *)&local_4d0._s_0);
  iVar23 = IndexUtil::OrientTriEdgeAndFindOtherVtx<int,UE::Geometry::FIndex3i>
                     ((int *)local_538,(int *)&local_574,(FIndex3i *)&local_4c4._s_0);
  uVar34 = local_538[0];
  uVar25 = local_564;
  uVar41 = local_568;
  uVar35 = local_574;
  if (iVar23 == iVar32) {
    return Failed_InvalidNeighbourhood;
  }
  pFVar7 = (this->Vertices).Blocks.AllocatorInstance.Data;
  uVar27 = CONCAT44(0,local_538[0] & 0x1ff);
  local_558 = CONCAT44(local_558._4_4_,local_568);
  local_450._0_8_ = uVar27;
  local_500 = (ulonglong)(local_538[0] >> 9);
  local_588 = local_564;
  local_568 = local_564;
  local_4f8 = (ulonglong)(local_574 >> 9);
  local_564 = uVar41;
  local_370 = *(double *)(*(longlong *)(pFVar7 + local_500 * 8) + 0x10 + uVar27 * 0x18);
  pdVar3 = (double *)(*(longlong *)(pFVar7 + local_500 * 8) + uVar27 * 0x18);
  dVar15 = *pdVar3;
  dVar44 = pdVar3[1];
  local_4f0 = (ulonglong)(local_574 & 0x1ff);
  local_478._16_8_ = *(double *)(*(longlong *)(pFVar7 + local_4f8 * 8) + 0x10 + local_4f0 * 0x18);
  pdVar3 = (double *)(*(longlong *)(pFVar7 + local_4f8 * 8) + local_4f0 * 0x18);
  dVar16 = *pdVar3;
  dVar45 = pdVar3[1];
  local_4a0._16_8_ =
       *(double *)
        (*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) + 0x10 +
        (ulonglong)(uVar25 & 0x1ff) * 0x18);
  pdVar3 = (double *)
           (*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) +
           (ulonglong)(uVar25 & 0x1ff) * 0x18);
  dVar17 = *pdVar3;
  dVar18 = pdVar3[1];
  local_4a8 = *(double *)
               (*(longlong *)(pFVar7 + (ulonglong)(uVar41 >> 9) * 8) + 0x10 +
               (ulonglong)(uVar41 & 0x1ff) * 0x18);
  pdVar3 = (double *)
           (*(longlong *)(pFVar7 + (ulonglong)(uVar41 >> 9) * 8) +
           (ulonglong)(uVar41 & 0x1ff) * 0x18);
  dVar14 = *pdVar3;
  dVar12 = pdVar3[1];
  if ((param_5) &&
     (dVar43 = dVar16 - dVar14, dVar14 = dVar15 - dVar14, dVar13 = dVar44 - dVar12,
     dVar12 = dVar45 - dVar12, dVar15 = dVar15 - dVar17, dVar16 = dVar16 - dVar17,
     dVar44 = dVar44 - dVar18, dVar45 = dVar45 - dVar18,
     ((double)local_478._16_8_ - (double)local_4a0._16_8_) *
     ((double)local_478._16_8_ - (double)local_4a0._16_8_) + dVar45 * dVar45 + dVar16 * dVar16 +
     (local_370 - local_4a8) * (local_370 - local_4a8) + dVar13 * dVar13 + dVar14 * dVar14 <
     (local_370 - (double)local_4a0._16_8_) * (local_370 - (double)local_4a0._16_8_) +
     dVar44 * dVar44 + dVar15 * dVar15 +
     ((double)local_478._16_8_ - local_4a8) * ((double)local_478._16_8_ - local_4a8) +
     dVar12 * dVar12 + dVar43 * dVar43)) {
    return Failed_SameOrientation;
  }
  local_550->KeptEdge = (int)local_548;
  local_550->RemovedEdge = local_584;
  if ((local_538[0] != uVar25) && (iVar32 = FindEdge(this,local_538[0],uVar25), iVar32 != -1)) {
    return Failed_InvalidNeighbourhood;
  }
  if ((uVar35 != uVar41) && (iVar32 = FindEdge(this,uVar35,uVar41), iVar32 != -1)) {
    return Failed_InvalidNeighbourhood;
  }
  if ((uVar34 != uVar25) && (uVar35 != uVar41)) {
    iVar32 = FindEdge(this,uVar34,uVar41);
    if (iVar32 != -1) {
      return Failed_InvalidNeighbourhood;
    }
    if ((uVar35 != uVar41) && (iVar32 = FindEdge(this,uVar35,uVar25), iVar32 != -1)) {
      return Failed_InvalidNeighbourhood;
    }
  }
  local_528[0] = 0;
  local_528[1] = 0;
  if (uVar34 == uVar25) {
LAB_1434f8436:
    if (uVar35 != uVar41) {
      uVar24 = 0xffffffff;
      if (uVar34 == uVar25) {
        uVar24 = uVar34;
      }
      local_570 = CONCAT44(local_570._4_4_,uVar24);
      VtxVerticesItr(this,(MappedValueEnumerable *)local_1e8,uVar41);
      FSmallListSet::MappedValueEnumerable::begin
                ((MappedValueEnumerable *)local_1e8,(MappedValueIterator *)local_288);
      FSmallListSet::MappedValueEnumerable::end
                ((MappedValueEnumerable *)local_1e8,(MappedValueIterator *)local_148);
      do {
        if (((local_288._0_8_ == local_148._0_8_) && (local_288._8_4_ == local_148._8_4_)) &&
           ((local_288._24_4_ == local_148._24_4_ && (local_288._28_4_ == local_148._28_4_)))) {
          if (local_148._48_8_ != 0) {
            plVar31 = (longlong *)(local_148 + 0x40);
            if ((longlong *)local_148._88_8_ != (longlong *)0x0) {
              plVar31 = (longlong *)local_148._88_8_;
            }
            (**(code **)(*plVar31 + 0x10))();
          }
          if ((code *)local_288._48_8_ != (code *)0x0) {
            plVar31 = local_248;
            if (local_230 != (longlong *)0x0) {
              plVar31 = local_230;
            }
            (**(code **)(*plVar31 + 0x10))();
          }
          uVar25 = local_588;
          if (local_1e8._16_8_ != 0) {
            plVar31 = (longlong *)(local_1e8 + 0x20);
            if ((longlong *)local_1e8._56_8_ != (longlong *)0x0) {
              plVar31 = (longlong *)local_1e8._56_8_;
            }
            (**(code **)(*plVar31 + 0x10))();
            uVar25 = local_588;
          }
          break;
        }
        local_530[0] = local_288._32_4_;
        Core::Private::Function::CheckCallable((void *)local_288._48_8_);
        uVar9 = local_288._48_8_;
        plVar31 = local_248;
        if (local_230 != (longlong *)0x0) {
          plVar31 = local_230;
        }
        uVar28 = (**(code **)(*plVar31 + 8))();
        iVar32 = (*(code *)uVar9)(uVar28,local_530);
        local_540._0_4_ = iVar32;
        if ((iVar32 != (int)local_570) &&
           (uVar25 = FindEdge(this,uVar35,iVar32), uVar25 != 0xffffffff)) {
          uVar24 = FindEdge(this,uVar41,local_540._0_4_);
          pFVar7 = (this->Edges).Blocks.AllocatorInstance.Data;
          if ((*(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) + 0xc +
                       (ulonglong)(uVar25 & 0x1ff) * 0x10) != -1) ||
             (*(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar24 >> 9) * 8) + 0xc +
                      (ulonglong)(uVar24 & 0x1ff) * 0x10) != -1)) goto LAB_1434f8778;
          local_528[1] = local_528[1] + 1;
        }
        FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_288);
      } while( true );
    }
    uVar24 = local_584;
    local_4b8 = this;
    local_4b0 = param_3;
    if (uVar34 == uVar25) {
      FSmallListSet::Remove(&this->VertexEdgeLists,uVar34,local_584);
      (local_550->RemovedVerts).field0_0x0._s_0.A = -1;
    }
    else {
      if (param_3 != 0.0) {
        `UE::Geometry::FDynamicMesh3::MergeEdges'::__l2::<lambda_1>::operator()
                  (&local_4b8,uVar34,uVar25);
      }
      FSmallListSet::BaseValueIterator::BaseValueIterator
                ((BaseValueIterator *)local_4a0,&this->VertexEdgeLists,uVar25,false);
      FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_368,&this->VertexEdgeLists,uVar25,true);
      uVar35 = local_584;
      while (((((FSmallListSet *)local_4a0._0_8_ != local_368.ListSet ||
               (local_4a0._8_4_ != local_368.ListIndex)) || (local_488 != local_368.iCur)) ||
             (local_484 != local_368.cur_ptr))) {
        if (local_480 == uVar35) {
LAB_1434f88aa:
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_4a0);
        }
        else {
          uVar27 = (ulonglong)(local_480 & 0x1ff);
          lVar42 = *(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_480 >> 9) * 8);
          uVar41 = *(uint *)(lVar42 + uVar27 * 0x10);
          uVar24 = *(uint *)(lVar42 + 4 + uVar27 * 0x10);
          uVar37 = uVar34;
          if (uVar41 == uVar25) {
            uVar41 = uVar34;
            if ((int)uVar24 < (int)uVar34) {
              uVar41 = uVar24;
            }
            *(uint *)(lVar42 + uVar27 * 0x10) = uVar41;
            if ((int)uVar34 < (int)uVar24) {
              uVar37 = uVar24;
            }
LAB_1434f87fc:
            *(uint *)(lVar42 + 4 + uVar27 * 0x10) = uVar37;
          }
          else if (uVar24 == uVar25) {
            uVar24 = uVar34;
            if ((int)uVar41 < (int)uVar34) {
              uVar24 = uVar41;
            }
            *(uint *)(lVar42 + uVar27 * 0x10) = uVar24;
            if ((int)uVar34 < (int)uVar41) {
              uVar37 = uVar41;
            }
            goto LAB_1434f87fc;
          }
          lVar42 = *(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_480 >> 9) * 8);
          local_380 = *(undefined1 (*) [16])(lVar42 + uVar27 * 0x10);
          iVar32 = local_380._12_4_;
          iVar23 = ReplaceTriangleVertex(this,*(int *)(lVar42 + 8 + uVar27 * 0x10),uVar25,uVar34);
          uVar33 = (ushort)((uint)iVar23 >> 0x1f) ^ 1;
          if ((iVar32 != -1) &&
             (iVar32 = ReplaceTriangleVertex(this,iVar32,local_588,uVar34), -1 < iVar32)) {
            uVar33 = uVar33 + 1;
          }
          FSmallListSet::Insert(&this->VertexEdgeLists,uVar34,local_480);
          uVar25 = local_588;
          if (uVar33 == 0) goto LAB_1434f88aa;
          psVar4 = (short *)(*(longlong *)
                              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              local_500 * 8) + local_450._0_8_ * 2);
          *psVar4 = *psVar4 + uVar33;
          FRefCountVector::Decrement(&this->VertexRefCounts,local_588,uVar33);
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_4a0);
        }
      }
      FSmallListSet::Clear(&this->VertexEdgeLists,uVar25);
      FRefCountVector::Decrement(&this->VertexRefCounts,uVar25,1);
      (local_550->RemovedVerts).field0_0x0._s_0.A = uVar25;
      FVar39 = local_518;
      FVar40 = local_520;
      uVar41 = (uint)local_558;
      uVar35 = local_574;
      uVar24 = local_584;
    }
    (local_550->KeptVerts).field0_0x0._s_0.A = uVar34;
    if (uVar41 == uVar35) {
      FSmallListSet::Remove(&this->VertexEdgeLists,uVar35,uVar24);
      uVar41 = 0xffffffff;
    }
    else {
      if (param_3 != 0.0) {
        `UE::Geometry::FDynamicMesh3::MergeEdges'::__l2::<lambda_1>::operator()
                  (&local_4b8,uVar35,uVar41);
      }
      FSmallListSet::BaseValueIterator::BaseValueIterator
                ((BaseValueIterator *)local_478,&this->VertexEdgeLists,uVar41,false);
      FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_340,&this->VertexEdgeLists,uVar41,true);
      while ((((FSmallListSet *)local_478._0_8_ != local_340.ListSet ||
              (local_478._8_4_ != local_340.ListIndex)) ||
             ((local_460 != local_340.iCur || (local_45c != local_340.cur_ptr))))) {
        uVar25 = (uint)local_458;
        if (uVar25 == uVar24) {
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_478);
        }
        else {
          uVar27 = (ulonglong)(uVar25 & 0x1ff);
          uVar38 = (local_458 & 0xffffffff) >> 9;
          lVar42 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar38 * 8);
          uVar34 = *(uint *)(lVar42 + uVar27 * 0x10);
          uVar24 = *(uint *)(lVar42 + 4 + uVar27 * 0x10);
          uVar37 = uVar35;
          if (uVar34 == uVar41) {
            uVar34 = uVar35;
            if ((int)uVar24 < (int)uVar35) {
              uVar34 = uVar24;
            }
            *(uint *)(lVar42 + uVar27 * 0x10) = uVar34;
            if ((int)uVar35 < (int)uVar24) {
              uVar37 = uVar24;
            }
LAB_1434f8a02:
            *(uint *)(lVar42 + 4 + uVar27 * 0x10) = uVar37;
          }
          else if (uVar24 == uVar41) {
            uVar24 = uVar35;
            if ((int)uVar34 < (int)uVar35) {
              uVar24 = uVar34;
            }
            *(uint *)(lVar42 + uVar27 * 0x10) = uVar24;
            if ((int)uVar35 < (int)uVar34) {
              uVar37 = uVar34;
            }
            goto LAB_1434f8a02;
          }
          lVar42 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar38 * 8);
          local_450 = *(undefined1 (*) [16])(lVar42 + uVar27 * 0x10);
          iVar32 = local_450._12_4_;
          iVar23 = ReplaceTriangleVertex(this,*(int *)(lVar42 + 8 + uVar27 * 0x10),uVar41,uVar35);
          uVar33 = (ushort)((uint)iVar23 >> 0x1f) ^ 1;
          if ((iVar32 != -1) &&
             (iVar32 = ReplaceTriangleVertex(this,iVar32,uVar41,uVar35), -1 < iVar32)) {
            uVar33 = uVar33 + 1;
          }
          FSmallListSet::Insert(&this->VertexEdgeLists,uVar35,uVar25);
          if (uVar33 != 0) {
            psVar4 = (short *)(*(longlong *)
                                ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                local_4f8 * 8) + local_4f0 * 2);
            *psVar4 = *psVar4 + uVar33;
            FRefCountVector::Decrement(&this->VertexRefCounts,uVar41,uVar33);
          }
          uVar24 = local_584;
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_478);
        }
      }
      FSmallListSet::Clear(&this->VertexEdgeLists,uVar41);
      FRefCountVector::Decrement(&this->VertexRefCounts,uVar41,1);
      FVar39 = local_518;
      FVar40 = local_520;
    }
    pFVar21 = local_550;
    (local_550->RemovedVerts).field0_0x0._s_0.B = uVar41;
    (local_550->KeptVerts).field0_0x0._s_0.B = local_574;
    lVar42 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_4e8 * 8) +
             local_4e0 * 4;
    iVar32 = 0;
    lVar29 = 0;
    do {
      if (*(uint *)(lVar42 + lVar29 * 4) == uVar24) {
        *(int *)(lVar42 + (longlong)iVar32 * 4) = (int)local_548;
        break;
      }
      iVar32 = iVar32 + 1;
      lVar29 = lVar29 + 1;
    } while (lVar29 < 3);
    FRefCountVector::Decrement(&this->EdgeRefCounts,uVar24,1);
    local_518 = (ForElementType<int>)0xffffffffffffffff;
    local_520 = (ForElementType<int>)0xffffffffffffffff;
    local_548 = 0;
    *(undefined4 *)
     (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_4d8 * 8) + 8 +
     (longlong)local_508) = local_3a0._8_4_;
    *(undefined4 *)
     (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_4d8 * 8) + 0xc +
     (longlong)local_508) = local_390._8_4_;
    (pFVar21->ExtraRemovedEdges).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
    (pFVar21->ExtraKeptEdges).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
    do {
      lVar42 = local_548;
      uVar35 = local_538[0];
      uVar25 = local_568;
      if (local_548 == 1) {
        uVar35 = local_574;
        uVar25 = local_564;
      }
      if (uVar35 != uVar25) {
        local_318.SecondaryData = (ForElementType<int>)0x0;
        local_2f0 = 0;
        local_2ec = 8;
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  (&local_3c8,&this->VertexEdgeLists,uVar35,false);
        while ((((local_3c8.ListSet != &this->VertexEdgeLists || (local_3c8.ListIndex != uVar35)) ||
                (local_3c8.iCur != -1)) || (local_3c8.cur_ptr != -1))) {
          local_560[0] = local_3c8.cur_value;
          FVar36 = (ForElementType<int>)&local_318;
          if (local_318.SecondaryData != (ForElementType<int>)0x0) {
            FVar36 = local_318.SecondaryData;
          }
          if ((ulonglong)FVar36 <= local_560) {
            FVar36 = (ForElementType<int>)&local_318;
            if (local_318.SecondaryData != (ForElementType<int>)0x0) {
              FVar36 = local_318.SecondaryData;
            }
            if (local_560 < (uint *)((longlong)FVar36 + (longlong)local_2ec * 4)) {
              local_5a0 = (longlong)local_2f0;
              local_598 = 4;
              local_5b8 = local_560;
              local_5b0 = (ForElementType<int>)&local_318;
              if (local_318.SecondaryData != (ForElementType<int>)0x0) {
                local_5b0 = local_318.SecondaryData;
              }
              local_5a8 = (longlong)local_2ec;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                EVar26 = (*pcVar11)();
                return EVar26;
              }
            }
          }
          if (local_2f0 == local_2ec) {
            local_2f0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                  (0x404,&local_318,&local_2ec);
          }
          lVar29 = (longlong)local_2f0;
          FVar36 = (ForElementType<int>)&local_318;
          if (local_318.SecondaryData != (ForElementType<int>)0x0) {
            FVar36 = local_318.SecondaryData;
          }
          local_2f0 = local_2f0 + 1;
          *(uint *)((longlong)FVar36 + lVar29 * 4) = local_560[0];
          FSmallListSet::BaseValueIterator::GotoNext(&local_3c8);
        }
        local_558 = (longlong)local_2f0;
        local_588 = 0;
        local_584 = 0;
        if (0 < local_558) {
          local_540 = (ForElementType<int>)0x1;
          local_570 = 0;
          lVar29 = local_558;
          uVar25 = local_588;
LAB_1434f8d90:
          do {
            lVar8 = local_570;
            local_508 = local_540;
            if (local_528[lVar42] <= (int)uVar25) break;
            uVar41 = 0;
            if ((int)local_584 < local_2f0) {
              uVar41 = ~local_584 >> 0x1f;
            }
            if (uVar41 == 0) {
              local_5b8 = (uint *)(longlong)(int)local_584;
              local_5b0 = (ForElementType<int>)(longlong)local_2f0;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              lVar29 = local_558;
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                EVar26 = (*pcVar11)();
                return EVar26;
              }
            }
            FVar36 = (ForElementType<int>)&local_318;
            if (local_318.SecondaryData != (ForElementType<int>)0x0) {
              FVar36 = local_318.SecondaryData;
            }
            local_578 = *(uint *)(lVar8 + (longlong)FVar36);
            uVar27 = (ulonglong)(local_578 & 0x1ff);
            if (((ushort)(*(short *)(*(longlong *)
                                      ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                      + (ulonglong)(local_578 >> 9) * 8) + uVar27 * 2) - 1U) <
                 0xfffe) &&
               (lVar8 = *(longlong *)
                         ((this->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(local_578 >> 9) * 8),
               *(int *)(lVar8 + 0xc + uVar27 * 0x10) == -1)) {
              uVar9 = *(undefined8 *)(lVar8 + uVar27 * 0x10);
              uVar34 = (uint)((ulonglong)uVar9 >> 0x20);
              uVar25 = (uint)uVar9;
              uVar41 = uVar34;
              if ((uVar25 != uVar35) && (uVar41 = 0xffffffff, uVar34 == uVar35)) {
                uVar41 = uVar25;
              }
              FVar36 = local_540;
              lVar42 = local_548;
              uVar25 = local_588;
              uVar34 = local_584;
              if ((longlong)local_540 < lVar29) {
                do {
                  uVar34 = uVar34 + 1;
                  uVar25 = 0;
                  if ((int)uVar34 < local_2f0) {
                    uVar25 = ~uVar34 >> 0x1f;
                  }
                  if (uVar25 == 0) {
                    local_5b8 = (uint *)(longlong)(int)uVar34;
                    local_5b0 = (ForElementType<int>)(longlong)local_2f0;
                    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    lVar29 = local_558;
                    if (bVar22) {
                      pcVar11 = (code *)swi(3);
                      EVar26 = (*pcVar11)();
                      return EVar26;
                    }
                  }
                  FVar30 = (ForElementType<int>)&local_318;
                  if (local_318.SecondaryData != (ForElementType<int>)0x0) {
                    FVar30 = local_318.SecondaryData;
                  }
                  local_580[0] = *(uint *)((longlong)FVar30 + (longlong)FVar36 * 4);
                  uVar27 = (ulonglong)(local_580[0] & 0x1ff);
                  if ((ushort)(*(short *)(*(longlong *)
                                           ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance
                                            .Data + (ulonglong)(local_580[0] >> 9) * 8) + uVar27 * 2
                                         ) - 1U) < 0xfffe) {
                    pFVar7 = (this->Edges).Blocks.AllocatorInstance.Data;
                    lVar42 = *(longlong *)(pFVar7 + (ulonglong)(local_580[0] >> 9) * 8);
                    lVar29 = local_558;
                    if (*(int *)(lVar42 + 0xc + uVar27 * 0x10) == -1) {
                      uVar9 = *(undefined8 *)(lVar42 + uVar27 * 0x10);
                      uVar24 = (uint)((ulonglong)uVar9 >> 0x20);
                      uVar37 = (uint)uVar9;
                      uVar25 = uVar24;
                      if ((uVar37 != uVar35) && (uVar25 = 0xffffffff, uVar24 == uVar35)) {
                        uVar25 = uVar37;
                      }
                      if (uVar41 == uVar25) {
                        uVar25 = *(uint *)(lVar42 + 8 + uVar27 * 0x10);
                        uVar6 = *(undefined4 *)
                                 (*(longlong *)(pFVar7 + (ulonglong)(local_578 >> 9) * 8) + 8 +
                                 (ulonglong)(local_578 & 0x1ff) * 0x10);
                        lVar42 = *(longlong *)
                                  ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0xc;
                        lVar29 = 0;
                        goto LAB_1434f9080;
                      }
                    }
                  }
                  FVar36 = (ForElementType<int>)((longlong)FVar36 + 1);
                  lVar42 = local_548;
                  uVar25 = local_588;
                } while ((longlong)FVar36 < lVar29);
              }
            }
            local_570 = local_570 + 4;
            local_584 = local_584 + 1;
            local_540 = (ForElementType<int>)((longlong)local_540 + 1);
          } while ((longlong)local_508 < lVar29);
        }
        if (local_318.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_318.SecondaryData);
        }
      }
      local_548 = lVar42 + 1;
      if (1 < local_548) {
        pFVar10 = (this->AttributeSet).Ptr;
        if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
          (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,local_550);
        }
        if ((this->ChangeStampShape).bIsEnabled != false) {
          pFVar1 = &(this->ChangeStampShape).Mutex;
          LOCK();
          bVar22 = pFVar1->State == (atomic<unsigned_char>)0x0;
          if (bVar22) {
            pFVar1->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar22) {
            FMutex::LockSlow(pFVar1);
          }
          puVar2 = &(this->ChangeStampShape).Value;
          *puVar2 = *puVar2 + 1;
          LOCK();
          aVar5 = pFVar1->State;
          pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
          UNLOCK();
          if (((byte)aVar5 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar1);
          }
        }
        if ((this->ChangeStampTopology).bIsEnabled != false) {
          pFVar1 = &(this->ChangeStampTopology).Mutex;
          LOCK();
          bVar22 = pFVar1->State == (atomic<unsigned_char>)0x0;
          if (bVar22) {
            pFVar1->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar22) {
            FMutex::LockSlow(pFVar1);
          }
          puVar2 = &(this->ChangeStampTopology).Value;
          *puVar2 = *puVar2 + 1;
          LOCK();
          aVar5 = pFVar1->State;
          pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
          UNLOCK();
          if (((byte)aVar5 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar1);
          }
        }
        return Ok;
      }
    } while( true );
  }
  uVar24 = 0xffffffff;
  if (uVar35 == uVar41) {
    uVar24 = uVar35;
  }
  local_570 = CONCAT44(local_570._4_4_,uVar24);
  VtxVerticesItr(this,(MappedValueEnumerable *)local_228,uVar25);
  FSmallListSet::MappedValueEnumerable::begin
            ((MappedValueEnumerable *)local_228,(MappedValueIterator *)local_2e8);
  FSmallListSet::MappedValueEnumerable::end
            ((MappedValueEnumerable *)local_228,(MappedValueIterator *)local_1a8);
  while( true ) {
    while( true ) {
      if ((((local_2e8._0_8_ == local_1a8._0_8_) && (local_2e8._8_4_ == local_1a8._8_4_)) &&
          (local_2e8._24_4_ == local_1a8._24_4_)) && (local_2e8._28_4_ == local_1a8._28_4_)) {
        if (local_1a8._48_8_ != 0) {
          plVar31 = (longlong *)(local_1a8 + 0x40);
          if ((longlong *)local_1a8._88_8_ != (longlong *)0x0) {
            plVar31 = (longlong *)local_1a8._88_8_;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        if ((code *)local_2e8._48_8_ != (code *)0x0) {
          plVar31 = local_2a8;
          if (local_290 != (longlong *)0x0) {
            plVar31 = local_290;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        if (local_228._16_8_ != 0) {
          plVar31 = (longlong *)(local_228 + 0x20);
          if ((longlong *)local_228._56_8_ != (longlong *)0x0) {
            plVar31 = (longlong *)local_228._56_8_;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
        goto LAB_1434f8436;
      }
      local_510[0] = local_2e8._32_4_;
      Core::Private::Function::CheckCallable((void *)local_2e8._48_8_);
      uVar9 = local_2e8._48_8_;
      plVar31 = local_2a8;
      if (local_290 != (longlong *)0x0) {
        plVar31 = local_290;
      }
      uVar28 = (**(code **)(*plVar31 + 8))();
      iVar32 = (*(code *)uVar9)(uVar28,local_510);
      if ((iVar32 != (int)local_570) &&
         (local_530[0] = FindEdge(this,uVar34,iVar32), uVar25 = local_588,
         local_530[0] != 0xffffffff)) break;
      uVar25 = local_588;
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_2e8);
    }
    uVar24 = FindEdge(this,local_588,iVar32);
    pFVar7 = (this->Edges).Blocks.AllocatorInstance.Data;
    if ((*(int *)(*(longlong *)(pFVar7 + (ulonglong)(local_530[0] >> 9) * 8) + 0xc +
                 (ulonglong)(local_530[0] & 0x1ff) * 0x10) != -1) ||
       (*(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar24 >> 9) * 8) + 0xc +
                (ulonglong)(uVar24 & 0x1ff) * 0x10) != -1)) break;
    local_528[0] = local_528[0] + 1;
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_2e8);
  }
  if (local_1a8._48_8_ != 0) {
    plVar31 = (longlong *)(local_1a8 + 0x40);
    if ((longlong *)local_1a8._88_8_ != (longlong *)0x0) {
      plVar31 = (longlong *)local_1a8._88_8_;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  if ((code *)local_2e8._48_8_ != (code *)0x0) {
    plVar31 = local_2a8;
    if (local_290 != (longlong *)0x0) {
      plVar31 = local_290;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  if (local_228._16_8_ == 0) {
    return Failed_InvalidNeighbourhood;
  }
  puVar20 = local_228;
LAB_1434f85fc:
  plVar31 = (longlong *)(puVar20 + 0x20);
  if ((longlong *)local_228._56_8_ != (longlong *)0x0) {
    plVar31 = (longlong *)local_228._56_8_;
  }
  (**(code **)(*plVar31 + 0x10))();
  return Failed_InvalidNeighbourhood;
LAB_1434f8778:
  if (local_148._48_8_ != 0) {
    plVar31 = (longlong *)(local_148 + 0x40);
    if ((longlong *)local_148._88_8_ != (longlong *)0x0) {
      plVar31 = (longlong *)local_148._88_8_;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  if ((code *)local_288._48_8_ != (code *)0x0) {
    plVar31 = local_248;
    if (local_230 != (longlong *)0x0) {
      plVar31 = local_230;
    }
    (**(code **)(*plVar31 + 0x10))();
  }
  if (local_1e8._16_8_ == 0) {
    return Failed_InvalidNeighbourhood;
  }
  puVar20 = local_1e8;
  local_228._56_8_ = local_1e8._56_8_;
  goto LAB_1434f85fc;
  while (lVar29 = lVar29 + 1, lVar29 < 3) {
LAB_1434f9080:
    if (*(uint *)(lVar42 + lVar29 * 4) == local_580[0]) {
      *(uint *)(lVar42 + lVar29 * 4) = local_578;
      break;
    }
  }
  *(undefined4 *)
   (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_578 >> 9) * 8) + 8
   + (ulonglong)(local_578 & 0x1ff) * 0x10) = uVar6;
  *(uint *)(*(longlong *)
             ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_578 >> 9) * 8) + 0xc +
           (ulonglong)(local_578 & 0x1ff) * 0x10) = uVar25;
  FSmallListSet::Remove(&this->VertexEdgeLists,uVar35,local_580[0]);
  FSmallListSet::Remove(&this->VertexEdgeLists,uVar41,local_580[0]);
  FRefCountVector::Decrement(&this->EdgeRefCounts,local_580[0],1);
  uVar25 = local_588;
  if (local_588 == 0) {
    *(uint *)((local_550->BowtiesRemovedEdges).AllocatorInstance.InlineData + local_548 * 4 + -0x10)
         = local_580[0];
    *(uint *)((local_550->BowtiesRemovedEdges).AllocatorInstance.InlineData + local_548 * 4 + -8) =
         local_578;
  }
  else {
    FVar36 = *(ForElementType<int> *)((longlong)FVar39 + 0x10);
    FVar30 = FVar39;
    if (FVar36 != (ForElementType<int>)0x0) {
      FVar30 = FVar36;
    }
    if ((ulonglong)FVar30 <= local_580) {
      FVar30 = FVar39;
      if (FVar36 != (ForElementType<int>)0x0) {
        FVar30 = FVar36;
      }
      if (local_580 < (uint *)((longlong)FVar30 + (longlong)*(int *)((longlong)FVar39 + 0x1c) * 4))
      {
        local_5a0 = (longlong)*(int *)((longlong)FVar39 + 0x18);
        local_598 = 4;
        local_5b0 = FVar39;
        if (FVar36 != (ForElementType<int>)0x0) {
          local_5b0 = FVar36;
        }
        local_5b8 = local_580;
        local_5a8 = (longlong)*(int *)((longlong)FVar39 + 0x1c);
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar22) {
          pcVar11 = (code *)swi(3);
          EVar26 = (*pcVar11)();
          return EVar26;
        }
      }
    }
    iVar32 = *(int *)((longlong)FVar39 + 0x18);
    if (iVar32 == *(int *)((longlong)FVar39 + 0x1c)) {
      iVar32 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (0x404,(ForElementType<int> *)FVar39,(int *)((longlong)FVar39 + 0x1c));
    }
    *(int *)((longlong)FVar39 + 0x18) = iVar32 + 1;
    FVar36 = FVar39;
    if (*(ForElementType<int> *)((longlong)FVar39 + 0x10) != (ForElementType<int>)0x0) {
      FVar36 = *(ForElementType<int> *)((longlong)FVar39 + 0x10);
    }
    *(uint *)((longlong)FVar36 + (longlong)iVar32 * 4) = local_580[0];
    FVar36 = *(ForElementType<int> *)((longlong)FVar40 + 0x10);
    FVar30 = FVar40;
    if (FVar36 != (ForElementType<int>)0x0) {
      FVar30 = FVar36;
    }
    if ((ulonglong)FVar30 <= &local_578) {
      FVar30 = FVar40;
      if (FVar36 != (ForElementType<int>)0x0) {
        FVar30 = FVar36;
      }
      if (&local_578 < (uint *)((longlong)FVar30 + (longlong)*(int *)((longlong)FVar40 + 0x1c) * 4))
      {
        local_5a0 = (longlong)*(int *)((longlong)FVar40 + 0x18);
        local_598 = 4;
        local_5b0 = FVar40;
        if (FVar36 != (ForElementType<int>)0x0) {
          local_5b0 = FVar36;
        }
        local_5b8 = &local_578;
        local_5a8 = (longlong)*(int *)((longlong)FVar40 + 0x1c);
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar22) {
          pcVar11 = (code *)swi(3);
          EVar26 = (*pcVar11)();
          return EVar26;
        }
      }
    }
    iVar32 = *(int *)((longlong)FVar40 + 0x18);
    if (iVar32 == *(int *)((longlong)FVar40 + 0x1c)) {
      iVar32 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (0x404,(ForElementType<int> *)FVar40,(int *)((longlong)FVar40 + 0x1c));
    }
    *(int *)((longlong)FVar40 + 0x18) = iVar32 + 1;
    FVar36 = FVar40;
    if (*(ForElementType<int> *)((longlong)FVar40 + 0x10) != (ForElementType<int>)0x0) {
      FVar36 = *(ForElementType<int> *)((longlong)FVar40 + 0x10);
    }
    *(uint *)((longlong)FVar36 + (longlong)iVar32 * 4) = local_578;
  }
  uVar25 = uVar25 + 1;
  local_570 = local_570 + 4;
  local_584 = local_584 + 1;
  local_540 = (ForElementType<int>)((longlong)local_540 + 1);
  lVar29 = local_558;
  lVar42 = local_548;
  local_588 = uVar25;
  goto LAB_1434f8d90;
}

// MergeVertices @ 1434fa510

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::MergeVertices
          (FDynamicMesh3 *this,int param_1,int param_2,FMergeVerticesInfo *param_3)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0xa8))();
  return EVar1;
}

// MergeVertices @ 1434fa540

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::MergeVertices
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FMergeVerticesInfo *param_4)

{
  EMeshResult EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0xa8))();
  return EVar1;
}

// MergeVertices @ 1434fa580

/* WARNING: Type propagation algorithm not settling */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::MergeVertices
          (FDynamicMesh3 *this,int param_1,int param_2,double param_3,FMergeVerticesOptions *param_4
          ,FMergeVerticesInfo *param_5)

{
  FSmallListSet *this_00;
  FMutex *pFVar1;
  uint *puVar2;
  double *pdVar3;
  double *pdVar4;
  short *psVar5;
  atomic<unsigned_char> aVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  FDynamicMeshAttributeSet *pFVar11;
  ForElementType<int> FVar12;
  FMergeEdgesInfo *pFVar13;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  bool bVar15;
  EMeshResult EVar16;
  int iVar17;
  ulonglong uVar18;
  TDynamicVector<UE::Math::TVector2<float>,512> *pTVar19;
  TVector<float> *pTVar20;
  TVector<float> *pTVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  ushort uVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float local_res8;
  float fStackX_c;
  undefined2 local_res10;
  undefined1 local_res12;
  float local_res20;
  float fStackX_24;
  ulonglong in_stack_fffffffffffffda0;
  float local_258;
  float fStack_254;
  undefined4 local_250;
  float local_248;
  float fStack_244;
  undefined4 local_240;
  ulonglong local_238;
  ulonglong local_230;
  BaseValueIterator local_228;
  BaseValueIterator local_200;
  BaseValueIterator local_1d8;
  TVector<double>_u_0 local_1b0;
  TVector<float> local_198;
  TVector<float> local_18c;
  TVector<float> local_180;
  TVector<float> local_174;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined1 local_158 [56];
  undefined1 local_120;
  TOptional<DynamicMeshInfo::FMergeEdgesInfo> local_118;
  
  memset(&local_168,0,200);
  local_160 = 0;
  local_120 = 0;
  param_5->KeptVertex = local_168;
  param_5->RemovedVertex = local_164;
  local_118.bIsSet = false;
  param_5->InterpolationT = 0.0;
  if (((TOptional<DynamicMeshInfo::FEdgeCollapseInfo> *)local_158 != &param_5->EdgeCollapseInfo) &&
     ((param_5->EdgeCollapseInfo).bIsSet != false)) {
    (param_5->EdgeCollapseInfo).bIsSet = false;
  }
  TOptional<DynamicMeshInfo::FMergeEdgesInfo>::operator=(&param_5->MergeEdgesInfo,&local_118);
  if (local_118.bIsSet != false) {
    if (local_118.TypedValue.BowtiesKeptEdges.AllocatorInstance.SecondaryData !=
        (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_118.TypedValue.BowtiesKeptEdges.AllocatorInstance.SecondaryData);
    }
    if (local_118.TypedValue.BowtiesRemovedEdges.AllocatorInstance.SecondaryData !=
        (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_118.TypedValue.BowtiesRemovedEdges.AllocatorInstance.SecondaryData
                   );
    }
  }
  param_5->InterpolationT = param_3;
  param_5->KeptVertex = param_1;
  param_5->RemovedVertex = param_2;
  if ((-1 < param_1) &&
     (iVar23 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this->VertexRefCounts).RefCounts.CurBlockUsed, param_1 < iVar23)) {
    pFVar7 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    local_230 = (ulonglong)(param_1 & 0x1ff);
    local_238 = (ulonglong)((uint)param_1 >> 9);
    if (((ushort)(*(short *)(*(longlong *)(pFVar7 + local_238 * 8) + local_230 * 2) - 1U) < 0xfffe)
       && ((-1 < param_2 && (param_2 < iVar23)))) {
      uVar29 = (ulonglong)(param_2 & 0x1ff);
      uVar18 = (ulonglong)((uint)param_2 >> 9);
      if ((ushort)(*(short *)(*(longlong *)(pFVar7 + uVar18 * 8) + uVar29 * 2) - 1U) < 0xfffe) {
        if (param_1 == param_2) {
          return Failed_VertexAlreadyExists;
        }
        iVar23 = FindEdge(this,param_1,param_2);
        if (iVar23 != -1) {
          local_res10 = 0x101;
          local_res12 = 1;
          (param_5->EdgeCollapseInfo).TypedValue.KeptVertex = 0;
          (param_5->EdgeCollapseInfo).TypedValue.RemovedVertex = 0;
          (param_5->EdgeCollapseInfo).TypedValue.bIsBoundary = false;
          *(undefined3 *)&(param_5->EdgeCollapseInfo).TypedValue.field_0x11 = 0;
          (param_5->EdgeCollapseInfo).TypedValue.CollapsedEdge = 0;
          (param_5->EdgeCollapseInfo).TypedValue.CollapseT = 0.0;
          (param_5->EdgeCollapseInfo).TypedValue.OpposingVerts.field0_0x0 =
               (FIndex2i_u_0)0xffffffffffffffff;
          (param_5->EdgeCollapseInfo).TypedValue.RemovedTris.field0_0x0 =
               (FIndex2i_u_0)0xffffffffffffffff;
          (param_5->EdgeCollapseInfo).TypedValue.RemovedEdges.field0_0x0 =
               (FIndex2i_u_0)0xffffffffffffffff;
          (param_5->EdgeCollapseInfo).TypedValue.KeptEdges.field0_0x0 =
               (FIndex2i_u_0)0xffffffffffffffff;
          (param_5->EdgeCollapseInfo).bIsSet = true;
          EVar16 = (**(code **)(this->_padding_ + 0x80))
                             (this,param_1,param_2,SUB84(param_3,0),&local_res10,
                              &param_5->EdgeCollapseInfo);
          return EVar16;
        }
        this_00 = &this->VertexEdgeLists;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_228,this_00,param_1,false);
        while ((((local_228.ListSet != this_00 || (local_228.ListIndex != param_1)) ||
                (local_228.iCur != -1)) || (local_228.cur_ptr != -1))) {
          _local_258 = ZEXT48((uint)local_228.cur_value >> 9);
          _local_248 = (ulonglong)(local_228.cur_value & 0x1ff) * 0x10;
          uVar8 = *(undefined8 *)
                   (_local_248 +
                   *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + _local_258 * 8));
          iVar22 = (int)((ulonglong)uVar8 >> 0x20);
          iVar17 = (int)uVar8;
          iVar23 = iVar22;
          if ((iVar17 != param_1) && (iVar23 = -1, iVar22 == param_1)) {
            iVar23 = iVar17;
          }
          FSmallListSet::BaseValueIterator::BaseValueIterator(&local_200,this_00,param_2,false);
          while (((local_200.ListSet != this_00 || (local_200.ListIndex != param_2)) ||
                 ((local_200.iCur != -1 || (local_200.cur_ptr != -1))))) {
            pFVar7 = (this->Edges).Blocks.AllocatorInstance.Data;
            uVar25 = (ulonglong)(local_200.cur_value & 0x1ff);
            uVar28 = (local_200._32_8_ & 0xffffffff) >> 9;
            uVar8 = *(undefined8 *)(*(longlong *)(pFVar7 + uVar28 * 8) + uVar25 * 0x10);
            iVar22 = (int)((ulonglong)uVar8 >> 0x20);
            iVar27 = (int)uVar8;
            iVar17 = iVar22;
            if ((iVar27 != param_2) && (iVar17 = -1, iVar22 == param_2)) {
              iVar17 = iVar27;
            }
            if (iVar17 == iVar23) {
              if ((*(int *)(*(longlong *)(pFVar7 + _local_258 * 8) + 0xc + _local_248) == -1) &&
                 (*(int *)(*(longlong *)(pFVar7 + uVar28 * 8) + 0xc + uVar25 * 0x10) == -1)) {
                if ((param_5->MergeEdgesInfo).bIsSet != false) {
                  FVar12 = (param_5->MergeEdgesInfo).TypedValue.BowtiesKeptEdges.AllocatorInstance.
                           SecondaryData;
                  if (FVar12 != (ForElementType<int>)0x0) {
                    FMemory::Free((void *)FVar12);
                  }
                  FVar12 = (param_5->MergeEdgesInfo).TypedValue.BowtiesRemovedEdges.
                           AllocatorInstance.SecondaryData;
                  if (FVar12 != (ForElementType<int>)0x0) {
                    FMemory::Free((void *)FVar12);
                  }
                }
                (param_5->MergeEdgesInfo).TypedValue.KeptEdge = 0;
                (param_5->MergeEdgesInfo).TypedValue.RemovedEdge = 0;
                pFVar13 = &(param_5->MergeEdgesInfo).TypedValue;
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[0] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[1] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[2] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[3] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[4] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[5] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[6] = '\0';
                (pFVar13->BowtiesRemovedEdges).AllocatorInstance.InlineData[7] = '\0';
                pTVar14 = &(param_5->MergeEdgesInfo).TypedValue.BowtiesRemovedEdges;
                (pTVar14->AllocatorInstance).InlineData[8] = '\0';
                (pTVar14->AllocatorInstance).InlineData[9] = '\0';
                (pTVar14->AllocatorInstance).InlineData[10] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xb] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xc] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xd] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xe] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xf] = '\0';
                pFVar13 = &(param_5->MergeEdgesInfo).TypedValue;
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[0] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[1] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[2] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[3] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[4] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[5] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[6] = '\0';
                (pFVar13->BowtiesKeptEdges).AllocatorInstance.InlineData[7] = '\0';
                pTVar14 = &(param_5->MergeEdgesInfo).TypedValue.BowtiesKeptEdges;
                (pTVar14->AllocatorInstance).InlineData[8] = '\0';
                (pTVar14->AllocatorInstance).InlineData[9] = '\0';
                (pTVar14->AllocatorInstance).InlineData[10] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xb] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xc] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xd] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xe] = '\0';
                (pTVar14->AllocatorInstance).InlineData[0xf] = '\0';
                (param_5->MergeEdgesInfo).TypedValue.KeptVerts.field0_0x0 =
                     (FIndex2i_u_0)0xffffffffffffffff;
                (param_5->MergeEdgesInfo).TypedValue.RemovedVerts.field0_0x0 =
                     (FIndex2i_u_0)0xffffffffffffffff;
                (param_5->MergeEdgesInfo).TypedValue.ExtraRemovedEdges.field0_0x0 =
                     (FIndex2i_u_0)0xffffffffffffffff;
                (param_5->MergeEdgesInfo).TypedValue.ExtraKeptEdges.field0_0x0 =
                     (FIndex2i_u_0)0xffffffffffffffff;
                (param_5->MergeEdgesInfo).TypedValue.BowtiesRemovedEdges.AllocatorInstance.
                SecondaryData = (ForElementType<int>)0x0;
                (param_5->MergeEdgesInfo).TypedValue.BowtiesRemovedEdges.ArrayNum = 0;
                (param_5->MergeEdgesInfo).TypedValue.BowtiesRemovedEdges.ArrayMax = 4;
                (param_5->MergeEdgesInfo).TypedValue.BowtiesKeptEdges.AllocatorInstance.
                SecondaryData = (ForElementType<int>)0x0;
                (param_5->MergeEdgesInfo).TypedValue.BowtiesKeptEdges.ArrayNum = 0;
                (param_5->MergeEdgesInfo).TypedValue.BowtiesKeptEdges.ArrayMax = 4;
                (param_5->MergeEdgesInfo).TypedValue.InterpolationT = 0.0;
                (param_5->MergeEdgesInfo).bIsSet = true;
                EVar16 = (**(code **)(this->_padding_ + 0x90))
                                   (this,local_228.cur_value,local_200._32_8_ & 0xffffffff,
                                    SUB84(param_3,0),&param_5->MergeEdgesInfo,
                                    in_stack_fffffffffffffda0 & 0xffffffffffffff00);
                return EVar16;
              }
              return Failed_InvalidNeighbourhood;
            }
            FSmallListSet::BaseValueIterator::GotoNext(&local_200);
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_228);
        }
        if ((param_4->bAllowNonBoundaryBowtieCreation == false) &&
           ((bVar15 = IsBoundaryVertex(this,param_1), !bVar15 ||
            (bVar15 = IsBoundaryVertex(this,param_2), !bVar15)))) {
          return Failed_WouldCreateBowtie;
        }
        uVar28 = local_230;
        uVar25 = local_238;
        if (param_3 != 0.0) {
          pFVar7 = (this->Vertices).Blocks.AllocatorInstance.Data;
          dVar35 = __real_3ff0000000000000 - param_3;
          lVar9 = *(longlong *)(pFVar7 + uVar18 * 8);
          pdVar3 = (double *)(lVar9 + uVar29 * 0x18);
          lVar10 = *(longlong *)(pFVar7 + local_238 * 8);
          pdVar4 = (double *)(lVar10 + local_230 * 0x18);
          local_1b0._s_0.X = *pdVar3 * param_3 + dVar35 * *pdVar4;
          local_1b0._s_0.Z =
               *(double *)(lVar9 + 0x10 + uVar29 * 0x18) * param_3 +
               dVar35 * *(double *)(lVar10 + 0x10 + local_230 * 0x18);
          local_1b0._s_0.Y = pdVar3[1] * param_3 + dVar35 * pdVar4[1];
          SetVertex(this,param_1,(TVector<double> *)&local_1b0._s_0,true);
          fVar36 = __real_3f800000;
          if ((this->VertexUVs).bIsSet != false) {
            uVar8 = *(undefined8 *)
                     (*(longlong *)
                       ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + uVar18 * 8) +
                     uVar29 * 8);
            pTVar19 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::
                      GetValue(&this->VertexUVs);
            fVar31 = (float)param_3;
            fStackX_c = (float)((ulonglong)uVar8 >> 0x20);
            local_res8 = (float)uVar8;
            uVar8 = *(undefined8 *)
                     (*(longlong *)((pTVar19->Blocks).AllocatorInstance.Data + uVar25 * 8) +
                     uVar28 * 8);
            local_res20 = (float)uVar8;
            fStackX_24 = (float)((ulonglong)uVar8 >> 0x20);
            fStack_254 = fVar31 * fStackX_c + fStackX_24 * (fVar36 - fVar31);
            local_258 = fVar31 * local_res8 + local_res20 * (fVar36 - fVar31);
            if ((this->VertexUVs).bIsSet != false) {
              *(undefined8 *)
               (*(longlong *)
                 ((this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data + uVar25 * 8) +
               uVar28 * 8) = _local_258;
            }
          }
          fVar37 = (float)param_3;
          fVar31 = fVar36 - fVar37;
          if ((this->VertexNormals).bIsSet != false) {
            pTVar20 = GetVertexNormal(this,&local_198,param_2);
            pTVar21 = GetVertexNormal(this,&local_18c,param_1);
            fVar32 = fVar31 * (pTVar21->field0_0x0)._s_0.X + fVar37 * (pTVar20->field0_0x0)._s_0.X;
            fVar33 = fVar31 * (pTVar21->field0_0x0)._s_0.Y + fVar37 * (pTVar20->field0_0x0)._s_0.Y;
            fVar34 = fVar31 * (pTVar21->field0_0x0)._s_0.Z + fVar37 * (pTVar20->field0_0x0)._s_0.Z;
            fVar30 = SQRT(fVar33 * fVar33 + fVar32 * fVar32 + fVar34 * fVar34);
            if (fVar30 <= 0.0) {
              _local_248 = 0;
              local_240 = 0.0;
            }
            else {
              fVar36 = fVar36 / fVar30;
              local_240 = fVar34 * fVar36;
              fStack_244 = fVar33 * fVar36;
              local_248 = fVar32 * fVar36;
            }
            SetVertexNormal(this,param_1,(TVector<float> *)&local_248);
          }
          if ((this->VertexColors).bIsSet != false) {
            pTVar20 = GetVertexColor(this,&local_180,param_2);
            pTVar21 = GetVertexColor(this,&local_174,param_1);
            local_250 = fVar31 * (pTVar21->field0_0x0)._s_0.Z +
                        fVar37 * (pTVar20->field0_0x0)._s_0.Z;
            fStack_254 = fVar31 * (pTVar21->field0_0x0)._s_0.Y +
                         fVar37 * (pTVar20->field0_0x0)._s_0.Y;
            local_258 = fVar37 * (pTVar20->field0_0x0)._s_0.X +
                        fVar31 * (pTVar21->field0_0x0)._s_0.X;
            SetVertexColor(this,param_1,(TVector<float> *)&local_258);
          }
        }
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_1d8,this_00,param_2,false);
        do {
          if ((((local_1d8.ListSet == this_00) && (local_1d8.ListIndex == param_2)) &&
              (local_1d8.iCur == -1)) && (local_1d8.cur_ptr == -1)) {
            FSmallListSet::Clear(this_00,param_2);
            FRefCountVector::Decrement(&this->VertexRefCounts,param_2,1);
            pFVar11 = (this->AttributeSet).Ptr;
            if (pFVar11 != (FDynamicMeshAttributeSet *)0x0) {
              (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,param_5);
            }
            if ((this->ChangeStampShape).bIsEnabled != false) {
              pFVar1 = &(this->ChangeStampShape).Mutex;
              LOCK();
              bVar15 = pFVar1->State == (atomic<unsigned_char>)0x0;
              if (bVar15) {
                pFVar1->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar15) {
                FMutex::LockSlow(pFVar1);
              }
              puVar2 = &(this->ChangeStampShape).Value;
              *puVar2 = *puVar2 + 1;
              LOCK();
              aVar6 = pFVar1->State;
              pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
              UNLOCK();
              if (((byte)aVar6 & 2) != 0) {
                FMutex::WakeWaitingThread(pFVar1);
              }
            }
            if ((this->ChangeStampTopology).bIsEnabled != false) {
              pFVar1 = &(this->ChangeStampTopology).Mutex;
              LOCK();
              bVar15 = pFVar1->State == (atomic<unsigned_char>)0x0;
              if (bVar15) {
                pFVar1->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar15) {
                FMutex::LockSlow(pFVar1);
              }
              puVar2 = &(this->ChangeStampTopology).Value;
              *puVar2 = *puVar2 + 1;
              LOCK();
              aVar6 = pFVar1->State;
              pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
              UNLOCK();
              if (((byte)aVar6 & 2) != 0) {
                FMutex::WakeWaitingThread(pFVar1);
              }
            }
            return Ok;
          }
          uVar24 = local_1d8.cur_value;
          uVar18 = (ulonglong)(uVar24 & 0x1ff);
          uVar29 = (local_1d8._32_8_ & 0xffffffff) >> 9;
          lVar9 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar29 * 8);
          iVar23 = *(int *)(lVar9 + uVar18 * 0x10);
          iVar17 = *(int *)(lVar9 + 4 + uVar18 * 0x10);
          iVar22 = param_1;
          if (iVar23 == param_2) {
            iVar23 = param_1;
            if (iVar17 < param_1) {
              iVar23 = iVar17;
            }
            *(int *)(lVar9 + uVar18 * 0x10) = iVar23;
            if (param_1 < iVar17) {
              iVar22 = iVar17;
            }
LAB_1434fac59:
            *(int *)(lVar9 + 4 + uVar18 * 0x10) = iVar22;
          }
          else if (iVar17 == param_2) {
            iVar17 = param_1;
            if (iVar23 < param_1) {
              iVar17 = iVar23;
            }
            *(int *)(lVar9 + uVar18 * 0x10) = iVar17;
            if (param_1 < iVar23) {
              iVar22 = iVar23;
            }
            goto LAB_1434fac59;
          }
          lVar9 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar29 * 8);
          iVar23 = *(int *)(lVar9 + uVar18 * 0x10 + 0xc);
          iVar17 = ReplaceTriangleVertex(this,*(int *)(lVar9 + 8 + uVar18 * 0x10),param_2,param_1);
          uVar26 = (ushort)((uint)iVar17 >> 0x1f) ^ 1;
          if ((iVar23 != -1) &&
             (iVar23 = ReplaceTriangleVertex(this,iVar23,param_2,param_1), -1 < iVar23)) {
            uVar26 = uVar26 + 1;
          }
          FSmallListSet::Insert(this_00,param_1,uVar24);
          if (uVar26 != 0) {
            psVar5 = (short *)(*(longlong *)
                                ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                local_238 * 8) + local_230 * 2);
            *psVar5 = *psVar5 + uVar26;
            FRefCountVector::Decrement(&this->VertexRefCounts,param_2,uVar26);
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_1d8);
        } while( true );
      }
    }
  }
  return Failed_NotAVertex;
}

// MeshInfoString @ 1434faea0

FString * __thiscall
UE::Geometry::FDynamicMesh3::MeshInfoString(FDynamicMesh3 *this,FString *__return_storage_ptr__)

{
  FMutex *this_00;
  longlong lVar1;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::PrintfImpl
            (&local_128,L"ListSize %zu  Blocks Count %d  Free %zu  Mem %zukb   Linked Mem %zukb");
  ::FString::PrintfImpl(&local_118,L"RefCountSize %zu  FreeSize %zu  FreeMem %zukb");
  ::FString::PrintfImpl(&local_38,L"Vertices count %d max %d  %s  VtxEdges %s");
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_128,L"RefCountSize %zu  FreeSize %zu  FreeMem %zukb");
  ::FString::PrintfImpl(&local_48,L"Triangles count %d max %d  %s");
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_128,L"RefCountSize %zu  FreeSize %zu  FreeMem %zukb");
  ::FString::PrintfImpl(&local_58,L"Edges count %d max %d  %s");
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  uVar4 = 0;
  ::FString::PrintfImpl
            (&local_68,L"VtxNormals %d  VtxColors %d  VtxUVs %d  TriGroups %d  Attributes %d");
  if ((this->ChangeStampTopology).bIsEnabled == false) {
    `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    this_00 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar6) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      FMutex::LockSlow(this_00);
    }
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  if (((this->TriangleRefCounts).UsedCount != 0) &&
     (iVar5 = (this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
              (this->EdgeRefCounts).RefCounts.CurBlockUsed, 0 < iVar5)) {
    do {
      uVar3 = (uint)uVar4;
      if ((-1 < (int)uVar3) && ((int)uVar3 < iVar5)) {
        lVar1 = (uVar4 >> 9) * 8;
        if (((ushort)(*(short *)(*(longlong *)
                                  ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  lVar1) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar1) + 0xc +
                    (ulonglong)(uVar3 & 0x1ff) * 0x10) == -1)) break;
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while ((int)(uVar3 + 1) < iVar5);
  }
  ::FString::PrintfImpl(&local_78,L"Closed %d  Compact %d  TopologyChangeStamp %d  MaxGroupID %d");
  ::FString::FString(&local_88,"\n");
  ::FString::FString(&local_98,"\n");
  ::FString::FString(&local_a8,"\n");
  ::FString::FString(&local_b8,"\n");
  ::FString::ConcatFF(&local_c8,&local_38,&local_b8);
  ::FString::ConcatFF(&local_d8,&local_c8,&local_48);
  ::FString::ConcatFF(&local_e8,&local_d8,&local_a8);
  ::FString::ConcatFF(&local_f8,&local_e8,&local_58);
  ::FString::ConcatFF(&local_108,&local_f8,&local_98);
  ::FString::ConcatFF(&local_118,&local_108,&local_68);
  ::FString::ConcatFF(&local_128,&local_118,&local_88);
  ::FString::ConcatFF(__return_storage_ptr__,&local_128,&local_78);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PokeTriangle @ 143514000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::PokeTriangle
          (FDynamicMesh3 *this,int param_1,FPokeTriangleInfo *param_2)

{
  EMeshResult EVar1;
  undefined1 local_28 [16];
  double local_18;
  
  local_18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
             ___xmm_3fd55555555555553fd5555555555555;
  local_28._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150aa23f8,0);
  local_28._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_3fd55555555555553fd5555555555555;
  local_28._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150aa23f8) >>
            0x20);
  EVar1 = (**(code **)(this->_padding_ + 0xb8))
                    (SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
                           ___xmm_3fd55555555555553fd5555555555555,0),local_18,local_28,param_2);
  return EVar1;
}

// PokeTriangle @ 143514050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::PokeTriangle
          (FDynamicMesh3 *this,int param_1,TVector<double> *param_2,FPokeTriangleInfo *param_3)

{
  FMutex *pFVar1;
  uint *puVar2;
  short *psVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  FDynamicMeshAttributeSet *pFVar9;
  code *pcVar10;
  double dVar11;
  FIndex2i_u_0 FVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  EMeshResult EVar20;
  ulonglong uVar21;
  int local_120 [2];
  undefined8 local_118;
  uint local_110;
  undefined8 local_108;
  uint local_100;
  ulonglong local_f8;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  TVector<double>_u_0 local_88;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  TVector2<float>_u_0 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  
  uStack_cc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_d0 = 0;
  uStack_c4 = 0xffffffff;
  local_c0 = 0;
  uStack_ac = 0xffffffff;
  local_98 = 0;
  uStack_bc = (undefined4)___xmm_ffffffffffffffffffffffffffffffff;
  uStack_b8 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
  uStack_b4 = (undefined4)_UNK_15060db28;
  uStack_b0 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
  lVar7 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
  *(undefined8 *)param_3 = 0xffffffff00000000;
  *(undefined8 *)((longlong)&(param_3->TriVertices).field0_0x0 + 4) = 0xffffffffffffffff;
  *(longlong *)&param_3->NewVertex = lVar7;
  *(ulonglong *)((longlong)&(param_3->NewTriangles).field0_0x0 + 4) = CONCAT44(uStack_b4,uStack_b8);
  *(ulonglong *)((longlong)&(param_3->NewEdges).field0_0x0 + 4) = CONCAT44(0xffffffff,uStack_b0);
  (param_3->BaryCoords).field0_0x0._s_0.X = 0.0;
  (param_3->BaryCoords).field0_0x0._s_0.Y = 0.0;
  (param_3->BaryCoords).field0_0x0._s_0.Z = 0.0;
  if ((-1 < param_1) &&
     (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    local_f8 = (ulonglong)((uint)param_1 >> 9);
    uVar21 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             local_f8 * 8) + uVar21 * 2) - 1U) < 0xfffe) {
      lVar7 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + local_f8 * 8);
      lVar8 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_f8 * 8);
      local_118 = *(undefined8 *)(lVar7 + uVar21 * 0xc);
      uVar5 = *(uint *)(lVar7 + 8 + uVar21 * 0xc);
      local_108 = *(undefined8 *)(lVar8 + uVar21 * 0xc);
      local_100 = *(uint *)(lVar8 + 8 + uVar21 * 0xc);
      local_68 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_5c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_58 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_70 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_64 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_50 = 0;
      local_4e = 0;
      local_110 = uVar5;
      local_d8 = uVar21;
      GetTriBaryPoint(this,param_1,(param_2->field0_0x0)._s_0.X,(param_2->field0_0x0)._s_0.Y,
                      (param_2->field0_0x0)._s_0.Z,(FVertexInfo *)&local_88._s_0);
      uVar14 = AppendVertex(this,(FVertexInfo *)&local_88._s_0);
      uVar18 = (uint)local_118;
      uVar15 = AddEdgeInternal(this,(uint)local_118,uVar14,-1,-1);
      uVar19 = local_118._4_4_;
      uVar16 = AddEdgeInternal(this,local_118._4_4_,uVar14,-1,-1);
      uVar17 = AddEdgeInternal(this,uVar5,uVar14,-1,-1);
      psVar3 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)((uint)local_118 & 0x1ff) * 2);
      *psVar3 = *psVar3 + 1;
      psVar3 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2);
      *psVar3 = *psVar3 + 1;
      uStack_e4 = uVar19;
      local_e8 = uVar18;
      psVar3 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(local_110 & 0x1ff) * 2);
      *psVar3 = *psVar3 + 1;
      psVar3 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 2);
      *psVar3 = *psVar3 + 3;
      lVar7 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + local_f8 * 8);
      *(ulonglong *)(lVar7 + uVar21 * 0xc) = CONCAT44(uVar19,uVar18);
      *(uint *)(lVar7 + 8 + uVar21 * 0xc) = uVar14;
      lVar7 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_f8 * 8);
      *(undefined4 *)(lVar7 + uVar21 * 0xc) = (undefined4)local_108;
      *(uint *)(lVar7 + 4 + uVar21 * 0xc) = uVar16;
      *(uint *)(lVar7 + 8 + uVar21 * 0xc) = uVar15;
      uVar5 = local_108._4_4_;
      local_e0 = uVar14;
      uVar18 = AddTriangleInternal(this,local_118._4_4_,local_110,uVar14,local_108._4_4_,uVar17,
                                   uVar16);
      uVar19 = AddTriangleInternal(this,local_110,(uint)local_118,uVar14,local_100,uVar15,uVar17);
      uVar21 = (ulonglong)(uVar5 & 0x1ff);
      lVar7 = *(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
      iVar6 = *(int *)(lVar7 + 0xc + uVar21 * 0x10);
      if (*(int *)(lVar7 + 8 + uVar21 * 0x10) == param_1) {
        if (uVar18 == 0xffffffff) {
          *(int *)(lVar7 + 8 + uVar21 * 0x10) = iVar6;
          *(undefined4 *)(lVar7 + 0xc + uVar21 * 0x10) = 0xffffffff;
        }
        else {
          *(uint *)(lVar7 + 8 + uVar21 * 0x10) = uVar18;
        }
      }
      else if (iVar6 == param_1) {
        *(uint *)(lVar7 + 0xc + uVar21 * 0x10) = uVar18;
      }
      uVar21 = (ulonglong)(local_100 & 0x1ff);
      lVar7 = *(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_100 >> 9) * 8);
      iVar6 = *(int *)(lVar7 + 0xc + uVar21 * 0x10);
      if (*(int *)(lVar7 + 8 + uVar21 * 0x10) == param_1) {
        if (uVar19 == 0xffffffff) {
          *(int *)(lVar7 + 8 + uVar21 * 0x10) = iVar6;
          *(undefined4 *)(lVar7 + 0xc + uVar21 * 0x10) = 0xffffffff;
        }
        else {
          *(uint *)(lVar7 + 8 + uVar21 * 0x10) = uVar19;
        }
      }
      else if (iVar6 == param_1) {
        *(uint *)(lVar7 + 0xc + uVar21 * 0x10) = uVar19;
      }
      *(int *)(*(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8) + 8 +
              (ulonglong)(uVar15 & 0x1ff) * 0x10) = param_1;
      *(uint *)(*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8) + 0xc
               + (ulonglong)(uVar15 & 0x1ff) * 0x10) = uVar19;
      *(int *)(*(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8) + 8 +
              (ulonglong)(uVar16 & 0x1ff) * 0x10) = param_1;
      *(uint *)(*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8) + 0xc
               + (ulonglong)(uVar16 & 0x1ff) * 0x10) = uVar18;
      *(uint *)(*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) + 8 +
               (ulonglong)(uVar17 & 0x1ff) * 0x10) = uVar18;
      *(uint *)(*(longlong *)
                 ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) + 0xc
               + (ulonglong)(uVar17 & 0x1ff) * 0x10) = uVar19;
      if ((this->TriangleGroups).bIsSet != false) {
        local_120[0] = *(int *)(*(longlong *)
                                 ((this->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                 local_f8 * 8) + local_d8 * 4);
        TDynamicVector<int,512>::InsertAt(&(this->TriangleGroups).TypedValue,local_120,uVar18);
        if (((this->TriangleGroups).bIsSet == false) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          EVar20 = (*pcVar10)();
          return EVar20;
        }
        TDynamicVector<int,512>::InsertAt(&(this->TriangleGroups).TypedValue,local_120,uVar19);
      }
      *(undefined8 *)&(param_3->TriVertices).field0_0x0 = local_118;
      (param_3->TriVertices).field0_0x0._s_0.C = local_110;
      param_3->NewVertex = uVar14;
      param_3->OriginalTriangle = param_1;
      FVar12._s_0.B = uVar19;
      FVar12._s_0.A = uVar18;
      (param_3->NewTriangles).field0_0x0 = FVar12;
      (param_3->NewEdges).field0_0x0._s_0.A = uVar15;
      (param_3->NewEdges).field0_0x0._s_0.B = uVar16;
      (param_3->NewEdges).field0_0x0._s_0.C = uVar17;
      dVar11 = (param_2->field0_0x0)._s_0.Y;
      (param_3->BaryCoords).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
      (param_3->BaryCoords).field0_0x0._s_0.Y = dVar11;
      (param_3->BaryCoords).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      pFVar9 = (this->AttributeSet).Ptr;
      local_f0 = uVar18;
      uStack_ec = uVar19;
      if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
        (**(code **)(pFVar9->_padding_ + 0x50))(pFVar9,param_3);
      }
      if ((this->ChangeStampShape).bIsEnabled != false) {
        pFVar1 = &(this->ChangeStampShape).Mutex;
        LOCK();
        bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
        if (bVar13) {
          pFVar1->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar13) {
          FMutex::LockSlow(pFVar1);
        }
        puVar2 = &(this->ChangeStampShape).Value;
        *puVar2 = *puVar2 + 1;
        LOCK();
        aVar4 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar1);
        }
      }
      if ((this->ChangeStampTopology).bIsEnabled != false) {
        pFVar1 = &(this->ChangeStampTopology).Mutex;
        LOCK();
        bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
        if (bVar13) {
          pFVar1->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar13) {
          FMutex::LockSlow(pFVar1);
        }
        puVar2 = &(this->ChangeStampTopology).Value;
        *puVar2 = *puVar2 + 1;
        LOCK();
        aVar4 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar1);
        }
      }
      return Ok;
    }
  }
  return Failed_NotATriangle;
}

// RemoveTriangle @ 143517170

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::RemoveTriangle
          (FDynamicMesh3 *this,int param_1,bool param_2,bool param_3)

{
  TDynamicVector<int,512> *pTVar1;
  FMutex *pFVar2;
  uint *puVar3;
  short *psVar4;
  longlong lVar5;
  atomic<unsigned_char> aVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  code *pcVar11;
  bool bVar12;
  short sVar13;
  EMeshResult EVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  uint local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (((param_1 < 0) ||
      ((int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2458686373993905493>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Edits.cpp"
                        ,0x2ab,"false");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      EVar14 = (*pcVar11)();
      return EVar14;
    }
    return Failed_NotATriangle;
  }
  lVar18 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar5 = (ulonglong)(param_1 & 0x1ff) * 0xc;
  lVar8 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar18);
  local_60 = *(undefined4 *)(lVar8 + 8 + lVar5);
  local_68 = *(undefined8 *)(lVar8 + lVar5);
  lVar18 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar18);
  uVar7 = *(uint *)(lVar18 + 8 + lVar5);
  local_58 = *(undefined8 *)(lVar18 + lVar5);
  local_50 = uVar7;
  if (param_3) {
    iVar19 = 2;
    lVar18 = 0;
    do {
      bVar12 = IsBoundaryVertex(this,*(int *)((longlong)&local_68 + lVar18));
      if (((bVar12) &&
          (pFVar9 = (this->Edges).Blocks.AllocatorInstance.Data,
          *(int *)(*(longlong *)
                    (pFVar9 + (ulonglong)(*(uint *)((longlong)&local_58 + lVar18) >> 9) * 8) + 0xc +
                  (ulonglong)(*(uint *)((longlong)&local_58 + lVar18) & 0x1ff) * 0x10) != -1)) &&
         (uVar20 = *(uint *)((longlong)&local_58 +
                            (longlong)
                            (iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                                      (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4),
         *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar20 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar20 & 0x1ff) * 0x10) != -1)) {
        return Failed_WouldCreateBowtie;
      }
      iVar19 = iVar19 + 1;
      lVar18 = lVar18 + 4;
    } while (lVar18 < 0xc);
  }
  uVar20 = (uint)local_58;
  uVar16 = (ulonglong)((uint)local_58 & 0x1ff);
  lVar18 = (ulonglong)((uint)local_58 >> 9) * 8;
  lVar5 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar18);
  iVar19 = *(int *)(lVar5 + 0xc + uVar16 * 0x10);
  if (*(int *)(lVar5 + 8 + uVar16 * 0x10) == param_1) {
    *(int *)(lVar5 + 8 + uVar16 * 0x10) = iVar19;
LAB_143517338:
    *(undefined4 *)(lVar5 + 0xc + uVar16 * 0x10) = 0xffffffff;
  }
  else if (iVar19 == param_1) goto LAB_143517338;
  uVar16 = (ulonglong)((uint)local_58 & 0x1ff);
  lVar5 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar18);
  piVar17 = (int *)(lVar5 + uVar16 * 0x10);
  local_48 = *piVar17;
  iStack_44 = piVar17[1];
  iStack_40 = piVar17[2];
  iStack_3c = piVar17[3];
  if (*(int *)(lVar5 + 8 + uVar16 * 0x10) == -1) {
    FSmallListSet::Remove(&this->VertexEdgeLists,local_48,(uint)local_58);
    FSmallListSet::Remove(&this->VertexEdgeLists,iStack_44,uVar20);
    psVar4 = (short *)(*(longlong *)
                        ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
                      uVar16 * 2);
    *psVar4 = *psVar4 + -1;
    if (*(short *)(*(longlong *)
                    ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
                  uVar16 * 2) == 0) {
      pTVar1 = &(this->EdgeRefCounts).FreeIndices;
      uVar15 = (this->EdgeRefCounts).FreeIndices.CurBlockUsed;
      if (uVar15 == 0x200) {
        if (pTVar1->CurBlock == (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
          TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
        }
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        uVar15 = 0;
        (this->EdgeRefCounts).FreeIndices.CurBlockUsed = 0;
      }
      *(uint *)(*(longlong *)
                 ((this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                 (longlong)(int)pTVar1->CurBlock * 8) + (longlong)(int)uVar15 * 4) = uVar20;
      puVar3 = &(this->EdgeRefCounts).FreeIndices.CurBlockUsed;
      *puVar3 = *puVar3 + 1;
      *(undefined2 *)
       (*(longlong *)((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
       uVar16 * 2) = 0xffff;
      piVar17 = &(this->EdgeRefCounts).UsedCount;
      *piVar17 = *piVar17 + -1;
    }
  }
  uVar20 = local_58._4_4_;
  uVar16 = (ulonglong)(local_58._4_4_ & 0x1ff);
  lVar18 = (ulonglong)(local_58._4_4_ >> 9) * 8;
  lVar5 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar18);
  iVar19 = *(int *)(lVar5 + 0xc + uVar16 * 0x10);
  if (*(int *)(lVar5 + 8 + uVar16 * 0x10) == param_1) {
    *(int *)(lVar5 + 8 + uVar16 * 0x10) = iVar19;
LAB_14351745b:
    *(undefined4 *)(lVar5 + 0xc + uVar16 * 0x10) = 0xffffffff;
  }
  else if (iVar19 == param_1) goto LAB_14351745b;
  uVar16 = (ulonglong)(local_58._4_4_ & 0x1ff);
  lVar5 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar18);
  piVar17 = (int *)(lVar5 + uVar16 * 0x10);
  local_48 = *piVar17;
  iStack_44 = piVar17[1];
  iStack_40 = piVar17[2];
  iStack_3c = piVar17[3];
  if (*(int *)(lVar5 + 8 + uVar16 * 0x10) == -1) {
    FSmallListSet::Remove(&this->VertexEdgeLists,local_48,local_58._4_4_);
    FSmallListSet::Remove(&this->VertexEdgeLists,iStack_44,uVar20);
    psVar4 = (short *)(*(longlong *)
                        ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
                      uVar16 * 2);
    *psVar4 = *psVar4 + -1;
    if (*(short *)(*(longlong *)
                    ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
                  uVar16 * 2) == 0) {
      pTVar1 = &(this->EdgeRefCounts).FreeIndices;
      uVar15 = (this->EdgeRefCounts).FreeIndices.CurBlockUsed;
      if (uVar15 == 0x200) {
        if (pTVar1->CurBlock == (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
          TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
        }
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        uVar15 = 0;
        (this->EdgeRefCounts).FreeIndices.CurBlockUsed = 0;
      }
      *(uint *)(*(longlong *)
                 ((this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                 (longlong)(int)pTVar1->CurBlock * 8) + (longlong)(int)uVar15 * 4) = uVar20;
      puVar3 = &(this->EdgeRefCounts).FreeIndices.CurBlockUsed;
      *puVar3 = *puVar3 + 1;
      *(undefined2 *)
       (*(longlong *)((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
       uVar16 * 2) = 0xffff;
      piVar17 = &(this->EdgeRefCounts).UsedCount;
      *piVar17 = *piVar17 + -1;
    }
  }
  uVar16 = (ulonglong)(local_50 & 0x1ff);
  lVar18 = (ulonglong)(uVar7 >> 9) * 8;
  lVar5 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar18);
  iVar19 = *(int *)(lVar5 + 0xc + uVar16 * 0x10);
  if (*(int *)(lVar5 + 8 + uVar16 * 0x10) == param_1) {
    *(int *)(lVar5 + 8 + uVar16 * 0x10) = iVar19;
  }
  else if (iVar19 != param_1) goto LAB_14351758e;
  *(undefined4 *)(lVar5 + 0xc + uVar16 * 0x10) = 0xffffffff;
LAB_14351758e:
  uVar16 = (ulonglong)(local_50 & 0x1ff);
  lVar5 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar18);
  piVar17 = (int *)(lVar5 + uVar16 * 0x10);
  local_48 = *piVar17;
  iStack_44 = piVar17[1];
  iStack_40 = piVar17[2];
  iStack_3c = piVar17[3];
  if (*(int *)(lVar5 + 8 + uVar16 * 0x10) == -1) {
    FSmallListSet::Remove(&this->VertexEdgeLists,local_48,uVar7);
    FSmallListSet::Remove(&this->VertexEdgeLists,iStack_44,uVar7);
    psVar4 = (short *)(*(longlong *)
                        ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
                      uVar16 * 2);
    *psVar4 = *psVar4 + -1;
    if (*(short *)(*(longlong *)
                    ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
                  uVar16 * 2) == 0) {
      pTVar1 = &(this->EdgeRefCounts).FreeIndices;
      uVar20 = (this->EdgeRefCounts).FreeIndices.CurBlockUsed;
      if (uVar20 == 0x200) {
        if (pTVar1->CurBlock == (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
          TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
        }
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        uVar20 = 0;
        (this->EdgeRefCounts).FreeIndices.CurBlockUsed = 0;
      }
      *(uint *)(*(longlong *)
                 ((this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                 (longlong)(int)pTVar1->CurBlock * 8) + (longlong)(int)uVar20 * 4) = uVar7;
      puVar3 = &(this->EdgeRefCounts).FreeIndices.CurBlockUsed;
      *puVar3 = *puVar3 + 1;
      *(undefined2 *)
       (*(longlong *)((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar18) +
       uVar16 * 2) = 0xffff;
      piVar17 = &(this->EdgeRefCounts).UsedCount;
      *piVar17 = *piVar17 + -1;
    }
  }
  FRefCountVector::Decrement(&this->TriangleRefCounts,param_1,1);
  lVar18 = 0;
  do {
    uVar7 = *(uint *)((longlong)&local_68 + lVar18 * 4);
    pTVar1 = &(this->VertexRefCounts).FreeIndices;
    uVar16 = (ulonglong)(uVar7 & 0x1ff);
    lVar5 = (ulonglong)(uVar7 >> 9) * 8;
    psVar4 = (short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5) +
                      uVar16 * 2);
    *psVar4 = *psVar4 + -1;
    if (*(short *)(*(longlong *)
                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5) +
                  uVar16 * 2) == 0) {
      uVar20 = (this->VertexRefCounts).FreeIndices.CurBlockUsed;
      if (uVar20 == 0x200) {
        if (pTVar1->CurBlock == (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
          TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
        }
        pTVar1->CurBlock = pTVar1->CurBlock + 1;
        uVar20 = 0;
        (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
      }
      piVar17 = &(this->VertexRefCounts).UsedCount;
      *(uint *)(*(longlong *)
                 ((this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                 (longlong)(int)pTVar1->CurBlock * 8) + (longlong)(int)uVar20 * 4) = uVar7;
      puVar3 = &(this->VertexRefCounts).FreeIndices.CurBlockUsed;
      *puVar3 = *puVar3 + 1;
      *(undefined2 *)
       (*(longlong *)((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5) +
       uVar16 * 2) = 0xffff;
      *piVar17 = *piVar17 + -1;
    }
    if (param_2) {
      lVar8 = *(longlong *)((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5)
      ;
      sVar13 = *(short *)(lVar8 + uVar16 * 2);
      if (sVar13 == -1) {
        sVar13 = 0;
      }
      if (sVar13 == 1) {
        psVar4 = (short *)(lVar8 + uVar16 * 2);
        *psVar4 = *psVar4 + -1;
        if (*(short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5) +
                      uVar16 * 2) == 0) {
          uVar20 = (this->VertexRefCounts).FreeIndices.CurBlockUsed;
          if (uVar20 == 0x200) {
            if (pTVar1->CurBlock == (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
              TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
            }
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar20 = 0;
            (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
          }
          piVar17 = &(this->VertexRefCounts).UsedCount;
          *(uint *)(*(longlong *)
                     ((this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                     (longlong)(int)pTVar1->CurBlock * 8) + (longlong)(int)uVar20 * 4) = uVar7;
          puVar3 = &(this->VertexRefCounts).FreeIndices.CurBlockUsed;
          *puVar3 = *puVar3 + 1;
          *(undefined2 *)
           (*(longlong *)
             ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar7 >> 9) * 8) + uVar16 * 2) = 0xffff;
          *piVar17 = *piVar17 + -1;
        }
        FSmallListSet::Clear(&this->VertexEdgeLists,uVar7);
      }
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 < 3);
  pFVar10 = (this->AttributeSet).Ptr;
  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)(pFVar10->_padding_ + 0x18))(pFVar10,param_1);
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar2 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar12 = pFVar2->State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      pFVar2->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      FMutex::LockSlow(pFVar2);
    }
    puVar3 = &(this->ChangeStampShape).Value;
    *puVar3 = *puVar3 + 1;
    LOCK();
    aVar6 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar2);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar2 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar12 = pFVar2->State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      pFVar2->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      FMutex::LockSlow(pFVar2);
    }
    puVar3 = &(this->ChangeStampTopology).Value;
    *puVar3 = *puVar3 + 1;
    LOCK();
    aVar6 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar2);
    }
  }
  return Ok;
}

// RemoveUnusedVertices @ 1435178e0

int __thiscall UE::Geometry::FDynamicMesh3::RemoveUnusedVertices(FDynamicMesh3 *this)

{
  TDynamicVector<int,512> *pTVar1;
  int *piVar2;
  FMutex *pFVar3;
  uint *puVar4;
  longlong lVar5;
  atomic<unsigned_char> aVar6;
  short sVar7;
  longlong lVar8;
  FDynamicMeshAttributeSet *pFVar9;
  longlong lVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  iVar13 = 0;
  uVar15 = 0;
  if ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->VertexRefCounts).RefCounts.CurBlockUsed) < 1) {
    return 0;
  }
  do {
    uVar14 = (uint)uVar15;
    lVar5 = (uVar15 >> 9) * 8;
    lVar10 = (ulonglong)(uVar14 & 0x1ff) * 2;
    lVar8 = *(longlong *)((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5);
    sVar7 = *(short *)(lVar8 + lVar10);
    sVar11 = sVar7;
    if (sVar7 == -1) {
      sVar11 = 0;
    }
    if (sVar11 == 1) {
      iVar13 = iVar13 + 1;
      *(short *)(lVar8 + lVar10) = sVar7 + -1;
      if (*(short *)(lVar10 + *(longlong *)
                               ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar5)) == 0) {
        uVar12 = (this->VertexRefCounts).FreeIndices.CurBlockUsed;
        if (uVar12 == 0x200) {
          if ((this->VertexRefCounts).FreeIndices.CurBlock ==
              (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&(this->VertexRefCounts).FreeIndices);
          }
          pTVar1 = &(this->VertexRefCounts).FreeIndices;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar12 = 0;
          (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
        }
        *(uint *)(*(longlong *)
                   ((this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                   (longlong)(int)(this->VertexRefCounts).FreeIndices.CurBlock * 8) +
                 (longlong)(int)uVar12 * 4) = uVar14;
        puVar4 = &(this->VertexRefCounts).FreeIndices.CurBlockUsed;
        *puVar4 = *puVar4 + 1;
        *(undefined2 *)
         (lVar10 + *(longlong *)
                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar5)) =
             0xffff;
        piVar2 = &(this->VertexRefCounts).UsedCount;
        *piVar2 = *piVar2 + -1;
      }
      pFVar9 = (this->AttributeSet).Ptr;
      if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
        (**(code **)(pFVar9->_padding_ + 0x20))(pFVar9,uVar15);
      }
    }
    uVar15 = (ulonglong)(uVar14 + 1);
  } while ((int)(uVar14 + 1) <
           (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->VertexRefCounts).RefCounts.CurBlockUsed));
  if (0 < iVar13) {
    if ((this->ChangeStampShape).bIsEnabled != false) {
      pFVar3 = &(this->ChangeStampShape).Mutex;
      LOCK();
      bVar16 = pFVar3->State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        pFVar3->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        FMutex::LockSlow(pFVar3);
      }
      puVar4 = &(this->ChangeStampShape).Value;
      *puVar4 = *puVar4 + 1;
      LOCK();
      aVar6 = pFVar3->State;
      pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
      UNLOCK();
      if (((byte)aVar6 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar3);
      }
    }
    if ((this->ChangeStampTopology).bIsEnabled != false) {
      pFVar3 = &(this->ChangeStampTopology).Mutex;
      LOCK();
      bVar16 = pFVar3->State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        pFVar3->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        FMutex::LockSlow(pFVar3);
      }
      puVar4 = &(this->ChangeStampTopology).Value;
      *puVar4 = *puVar4 + 1;
      LOCK();
      aVar6 = pFVar3->State;
      pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
      UNLOCK();
      if (((byte)aVar6 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar3);
      }
    }
  }
  return iVar13;
}

// RemoveVertex @ 143517ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::RemoveVertex(FDynamicMesh3 *this,int param_1,bool param_2)

{
  FMutex *pFVar1;
  uint *puVar2;
  ForElementType<int> FVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong lVar6;
  FDynamicMeshAttributeSet *pFVar7;
  code *pcVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  EMeshResult EVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ForElementType<int> FVar17;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  undefined8 local_230;
  int local_228;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_220;
  undefined1 local_1e8 [48];
  ValueIterator local_1b8;
  ValueIterator local_190;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (((param_1 < 0) ||
      ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    EVar12 = Failed_NotAVertex;
  }
  else if (param_2) {
    VtxTrianglesItr(this,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_1e8,param_1);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
               &local_1b8,&local_190,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
               &local_190,&local_190,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
    while( true ) {
      if (((local_168._0_8_ == local_d8._0_8_) && (local_168._8_4_ == local_d8._8_4_)) &&
         ((local_168._24_4_ == local_d8._24_4_ && (local_168._28_4_ == local_d8._28_4_)))) {
        if (local_d8._96_8_ != 0) {
          plVar13 = (longlong *)(local_d8 + 0x70);
          if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_d8._136_8_;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if (local_168._96_8_ != 0) {
          plVar13 = (longlong *)(local_168 + 0x70);
          if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_168._136_8_;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if (local_1e8._0_8_ != 0) {
          plVar13 = (longlong *)(local_1e8 + 0x10);
          if ((longlong *)local_1e8._40_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_1e8._40_8_;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        goto LAB_143517cd3;
      }
      uVar14 = (ulonglong)((uint)local_168._88_8_ & 0x1ff);
      lVar6 = *(longlong *)
               ((this->Triangles).Blocks.AllocatorInstance.Data +
               ((local_168._88_8_ & 0xffffffff) >> 9) * 8);
      uVar5 = *(undefined8 *)(lVar6 + uVar14 * 0xc);
      local_228 = *(int *)(lVar6 + 8 + uVar14 * 0xc);
      local_230._0_4_ = (int)uVar5;
      local_230._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
      iVar16 = local_228;
      iVar15 = local_230._4_4_;
      if (((int)local_230 != param_1) &&
         (iVar16 = local_230._4_4_, iVar15 = (int)local_230, local_230._4_4_ == param_1)) {
        iVar16 = (int)local_230;
        iVar15 = local_228;
      }
      local_230 = uVar5;
      uVar11 = FindEdge(this,iVar15,iVar16);
      if ((*(int *)(*(longlong *)
                     ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) +
                    0xc + (ulonglong)(uVar11 & 0x1ff) * 0x10) != -1) &&
         ((bVar9 = IsBoundaryVertex(this,iVar15), bVar9 ||
          (bVar9 = IsBoundaryVertex(this,iVar16), bVar9)))) break;
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
    }
    if (local_d8._96_8_ != 0) {
      plVar13 = (longlong *)(local_d8 + 0x70);
      if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_d8._136_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (local_168._96_8_ != 0) {
      plVar13 = (longlong *)(local_168 + 0x70);
      if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_168._136_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (local_1e8._0_8_ != 0) {
      plVar13 = (longlong *)(local_1e8 + 0x10);
      if ((longlong *)local_1e8._40_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_1e8._40_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    EVar12 = Failed_WouldCreateBowtie;
  }
  else {
LAB_143517cd3:
    local_220.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 8;
    GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
              (this,param_1,&local_220);
    iVar16 = local_220.ArrayNum;
    uVar14 = (ulonglong)local_220.ArrayNum;
    FVar17 = (ForElementType<int>)&local_220;
    if (local_220.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_220.AllocatorInstance.SecondaryData;
    }
    FVar3 = (ForElementType<int>)((longlong)FVar17 + uVar14 * 4);
    while( true ) {
      if ((uint)uVar14 != iVar16) {
        local_238[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_238);
      }
      if (FVar17 == FVar3) break;
      EVar12 = RemoveTriangle(this,*(int *)FVar17,false,param_2);
      if (EVar12 != Ok) goto LAB_143517f43;
      uVar14 = (ulonglong)(uint)local_220.ArrayNum;
      FVar17 = (ForElementType<int>)((longlong)FVar17 + 4);
    }
    sVar10 = *(short *)(*(longlong *)
                         ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2);
    if (sVar10 == -1) {
      sVar10 = 0;
    }
    if (sVar10 == 1) {
      FRefCountVector::Decrement(&this->VertexRefCounts,param_1,1);
      if (((param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                           (this->VertexRefCounts).RefCounts.CurBlockUsed)) &&
          ((ushort)(*(short *)(*(longlong *)
                                ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                (ulonglong)((uint)param_1 >> 9) * 8) +
                              (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2458686373993905516>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Edits.cpp"
                             ,0x294,"VertexRefCounts.IsValid(vID) == false"), bVar9)) {
        pcVar8 = (code *)swi(3);
        EVar12 = (*pcVar8)();
        return EVar12;
      }
      FSmallListSet::Clear(&this->VertexEdgeLists,param_1);
      pFVar7 = (this->AttributeSet).Ptr;
      if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
        (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7,param_1);
      }
      if ((this->ChangeStampShape).bIsEnabled != false) {
        pFVar1 = &(this->ChangeStampShape).Mutex;
        LOCK();
        bVar9 = pFVar1->State == (atomic<unsigned_char>)0x0;
        if (bVar9) {
          pFVar1->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar9) {
          FMutex::LockSlow(pFVar1);
        }
        puVar2 = &(this->ChangeStampShape).Value;
        *puVar2 = *puVar2 + 1;
        LOCK();
        aVar4 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar1);
        }
      }
      if ((this->ChangeStampTopology).bIsEnabled != false) {
        pFVar1 = &(this->ChangeStampTopology).Mutex;
        LOCK();
        bVar9 = pFVar1->State == (atomic<unsigned_char>)0x0;
        if (bVar9) {
          pFVar1->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar9) {
          FMutex::LockSlow(pFVar1);
        }
        puVar2 = &(this->ChangeStampTopology).Value;
        *puVar2 = *puVar2 + 1;
        LOCK();
        aVar4 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar1);
        }
      }
      EVar12 = Ok;
    }
    else {
      EVar12 = Failed_VertexStillReferenced;
    }
LAB_143517f43:
    if (local_220.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_220.AllocatorInstance.SecondaryData);
    }
  }
  return EVar12;
}

// ReplaceEdgeTriangle @ 143518890

int __thiscall
UE::Geometry::FDynamicMesh3::ReplaceEdgeTriangle
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
          (ulonglong)(param_1 & 0x1ff) * 0x10;
  if (*(int *)(lVar1 + 8) != param_2) {
    if (*(int *)(lVar1 + 0xc) == param_2) {
      *(int *)(lVar1 + 0xc) = param_3;
      return 1;
    }
    return -1;
  }
  if (param_3 == -1) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 0xc);
    *(undefined4 *)(lVar1 + 0xc) = 0xffffffff;
    return 0;
  }
  *(int *)(lVar1 + 8) = param_3;
  return 0;
}

// ReplaceEdgeVertex @ 1435188f0

int __thiscall
UE::Geometry::FDynamicMesh3::ReplaceEdgeVertex
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if (iVar1 == param_2) {
    iVar1 = param_3;
    if (iVar2 < param_3) {
      iVar1 = iVar2;
    }
    if (param_3 < iVar2) {
      param_3 = iVar2;
    }
    *piVar3 = iVar1;
    piVar3[1] = param_3;
    return 0;
  }
  if (iVar2 == param_2) {
    iVar2 = param_3;
    if (iVar1 < param_3) {
      iVar2 = iVar1;
    }
    if (param_3 < iVar1) {
      param_3 = iVar1;
    }
    *piVar3 = iVar2;
    piVar3[1] = param_3;
    return 1;
  }
  return -1;
}

// ReplaceTriangleEdge @ 143518960

int __thiscall
UE::Geometry::FDynamicMesh3::ReplaceTriangleEdge
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  lVar1 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc;
  uVar4 = uVar2;
  do {
    iVar3 = (int)uVar4;
    if (*(int *)(lVar1 + uVar2 * 4) == param_2) {
      *(int *)(lVar1 + (longlong)iVar3 * 4) = param_3;
      return iVar3;
    }
    uVar4 = (ulonglong)(iVar3 + 1);
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < 3);
  return -1;
}

// ReplaceTriangleVertex @ 1435189b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::FDynamicMesh3::ReplaceTriangleVertex
          (FDynamicMesh3 *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  int local_28 [8];
  
  piVar2 = local_28;
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 2;
  lVar1 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
          (ulonglong)(param_1 & 0x1ff) * 0xc;
  do {
    if (*(int *)(lVar1 + (longlong)*piVar2 * 4) == param_2) {
      *(int *)(lVar1 + (longlong)*piVar2 * 4) = param_3;
      return 0;
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != local_28 + 3);
  return -1;
}

// ReverseOrientation @ 143519ff0

void __thiscall UE::Geometry::FDynamicMesh3::ReverseOrientation(FDynamicMesh3 *this,bool param_1)

{
  FMutex *pFVar1;
  uint *puVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar10 = 0;
  uVar11 = (this->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar12 = 1;
  uVar7 = __xmm_80000000800000008000000080000000;
  if (((uVar11 != 0) &&
      (pFVar4 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar10 = uVar12, 1 < (int)uVar11)) {
    do {
      lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8);
      if ((*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar11);
  }
joined_r0x00014351a087:
  __xmm_80000000800000008000000080000000 = uVar7;
  if (uVar10 != uVar11) {
    while( true ) {
      ReverseTriOrientationInternal(this,uVar10);
      uVar10 = uVar10 + 1;
      uVar7 = __xmm_80000000800000008000000080000000;
      if ((int)uVar11 <= (int)uVar10) break;
      pFVar4 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                       (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
        uVar10 = uVar10 + 1;
        if ((int)uVar11 <= (int)uVar10) goto joined_r0x00014351a087;
      }
    }
    goto joined_r0x00014351a087;
  }
  if ((param_1) && ((this->VertexNormals).bIsSet != false)) {
    uVar11 = (this->VertexRefCounts).RefCounts.CurBlockUsed +
             (this->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar10 = 0;
    if ((uVar11 != 0) &&
       ((pFVar4 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar10 = 0,
        0xfffd < (ushort)(**(short **)pFVar4 - 1U) && (uVar10 = uVar12, 1 < (int)uVar11)))) {
      do {
        lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar12 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
           (uVar10 = uVar12, *(short *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
        uVar12 = uVar12 + 1;
        uVar10 = uVar12;
      } while ((int)uVar12 < (int)uVar11);
    }
joined_r0x00014351a158:
    if (uVar10 != uVar11) {
      while( true ) {
        if (((this->VertexNormals).bIsSet == false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = (ulonglong)(uVar10 & 0x1ff);
        uVar12 = uVar10 >> 9;
        uVar10 = uVar10 + 1;
        lVar5 = *(longlong *)
                 ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)uVar12 * 8);
        *(uint *)(lVar5 + uVar9 * 0xc) = *(uint *)(lVar5 + uVar9 * 0xc) ^ uVar7;
        *(uint *)(lVar5 + 4 + uVar9 * 0xc) = *(uint *)(lVar5 + 4 + uVar9 * 0xc) ^ uVar7;
        *(uint *)(lVar5 + 8 + uVar9 * 0xc) = *(uint *)(lVar5 + 8 + uVar9 * 0xc) ^ uVar7;
        if ((int)uVar11 <= (int)uVar10) break;
        pFVar4 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
          uVar10 = uVar10 + 1;
          if ((int)uVar11 <= (int)uVar10) goto joined_r0x00014351a158;
        }
      }
      goto joined_r0x00014351a158;
    }
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return;
}

// ReverseTriOrientation @ 14351a2d0

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::ReverseTriOrientation(FDynamicMesh3 *this,int param_1)

{
  FMutex *pFVar1;
  uint *puVar2;
  atomic<unsigned_char> aVar3;
  bool bVar4;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    ReverseTriOrientationInternal(this,param_1);
    if ((this->ChangeStampShape).bIsEnabled != false) {
      pFVar1 = &(this->ChangeStampShape).Mutex;
      LOCK();
      bVar4 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar4) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar4) {
        FMutex::LockSlow(pFVar1);
      }
      puVar2 = &(this->ChangeStampShape).Value;
      *puVar2 = *puVar2 + 1;
      LOCK();
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    if ((this->ChangeStampTopology).bIsEnabled != false) {
      pFVar1 = &(this->ChangeStampTopology).Mutex;
      LOCK();
      bVar4 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar4) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar4) {
        FMutex::LockSlow(pFVar1);
      }
      puVar2 = &(this->ChangeStampTopology).Value;
      *puVar2 = *puVar2 + 1;
      LOCK();
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    return Ok;
  }
  return Failed_NotATriangle;
}

// ReverseTriOrientationInternal @ 14351a3f0

void __thiscall
UE::Geometry::FDynamicMesh3::ReverseTriOrientationInternal(FDynamicMesh3 *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  FDynamicMeshAttributeSet *pFVar5;
  undefined8 *puVar6;
  undefined4 local_18;
  
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
  lVar4 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar1);
  uVar3 = *(undefined8 *)(lVar4 + lVar2);
  *(int *)(lVar4 + lVar2) = (int)((ulonglong)uVar3 >> 0x20);
  *(int *)(lVar4 + 4 + lVar2) = (int)uVar3;
  *(undefined4 *)(lVar4 + 8 + lVar2) = *(undefined4 *)(lVar4 + 8 + lVar2);
  puVar6 = (undefined8 *)
           (*(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1) + lVar2);
  uVar3 = *puVar6;
  local_18 = (undefined4)uVar3;
  *(undefined4 *)puVar6 = local_18;
  *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)(puVar6 + 1);
  *(int *)(puVar6 + 1) = (int)((ulonglong)uVar3 >> 0x20);
  pFVar5 = (this->AttributeSet).Ptr;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014351a498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,param_1);
    return;
  }
  return;
}

// Serialize @ 1435297d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Geometry::FDynamicMesh3::Serialize(FDynamicMesh3 *this,FArchive *param_1)

{
  int iVar1;
  size_t sVar2;
  char *_Str;
  undefined1 auStack_188 [32];
  bool local_168 [8];
  LARGE_INTEGER local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  QueryPerformanceCounter(&local_160);
  if ((param_1->field_0x2b & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
    if (((param_1->field_0x28 & 1) == 0) ||
       (iVar1 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
       0x37 < iVar1)) {
      local_168[2] = (bool)(param_1->field_0x29 & 1);
      local_168[0] = false;
      local_168[1] = true;
      ::operator<<(param_1,local_168);
      ::operator<<(param_1,local_168 + 1);
      ::operator<<(param_1,local_168 + 2);
      if (local_168[1] == false) {
        SerializeInternal<2>(this,param_1,local_168);
      }
      else if (local_168[1] == true) {
        SerializeInternal<65538>(this,param_1,local_168);
      }
      else {
        local_160.QuadPart = (LONGLONG)local_168;
        `UE::Geometry::FDynamicMesh3::Serialize'::__l13::<lambda_1>::operator()(&local_160);
      }
    }
    else {
      SerializeInternal<1>(this,param_1,(void *)0x0);
    }
    if (5 < (byte)LogGeometry._0_1_) {
      QueryPerformanceCounter(&local_160);
      local_158._padding_ = 0;
      _Str = "serialization";
      if ((param_1->field_0x28 & 1) != 0) {
        _Str = "deserialization";
      }
      sVar2 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar2,Yes);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    return;
  }
  return;
}

// SetTriangle @ 143531550

/* WARNING: Type propagation algorithm not settling */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::SetTriangle
          (FDynamicMesh3 *this,int param_1,FIndex3i *param_2,bool param_3)

{
  FMutex *pFVar1;
  uint *puVar2;
  int *piVar3;
  short *psVar4;
  longlong lVar5;
  atomic<unsigned_char> aVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  code *pcVar14;
  bool bVar15;
  EMeshResult EVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  short sVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined8 local_90;
  uint local_88;
  
  if ((this->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2458686373993905414>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Edits.cpp"
                        ,0x2fa,"HasAttributes()");
    if (!bVar15) {
      return Failed_Unsupported;
    }
    pcVar14 = (code *)swi(3);
    EVar16 = (*pcVar14)();
    return EVar16;
  }
  uVar25 = (ulonglong)(param_1 & 0x1ff);
  uVar26 = (ulonglong)((uint)param_1 >> 9);
  lVar5 = uVar25 * 0xc;
  lVar11 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar26 * 8);
  uVar7 = *(ulonglong *)(lVar11 + lVar5);
  uVar9 = *(uint *)(lVar11 + 8 + lVar5);
  lVar11 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + uVar26 * 8);
  uVar20 = (param_2->field0_0x0)._s_0.A;
  uVar8 = *(undefined8 *)(lVar11 + lVar5);
  local_88 = *(uint *)(lVar11 + 8 + lVar5);
  uVar21 = (uint)uVar7;
  uVar17 = (uint)(uVar7 >> 0x20);
  local_90 = uVar8;
  if (uVar21 == uVar20) {
    local_90._0_4_ = (uint)uVar8;
    if (uVar17 == (param_2->field0_0x0)._s_0.B) {
      local_90._0_4_ = 0xffffffff;
    }
    local_90._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
  }
  uVar19 = (param_2->field0_0x0)._s_0.B;
  uVar27 = local_90._4_4_;
  if (uVar17 == uVar19) {
    if (uVar9 == (param_2->field0_0x0)._s_0.C) {
      uVar27 = 0xffffffff;
    }
    local_90 = CONCAT44(uVar27,(uint)local_90);
  }
  uVar10 = (param_2->field0_0x0)._s_0.C;
  if ((uVar9 == uVar10) && (uVar21 == uVar20)) {
    local_88 = 0xffffffff;
  }
  if (((param_1 < 0) ||
      ((int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + uVar26 * 8) + uVar25 * 2) - 1U))) {
    return Failed_NotATriangle;
  }
  if ((((((int)uVar20 < 0) ||
        (iVar24 = (this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->VertexRefCounts).RefCounts.CurBlockUsed, iVar24 <= (int)uVar20)) ||
       ((pFVar12 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar12 + (ulonglong)(uVar20 >> 9) * 8) +
                                    (ulonglong)(uVar20 & 0x1ff) * 2) - 1U) ||
        (((int)uVar19 < 0 || (iVar24 <= (int)uVar19)))))) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar12 + (ulonglong)(uVar19 >> 9) * 8) +
                                   (ulonglong)(uVar19 & 0x1ff) * 2) - 1U))) ||
     (bVar15 = IsVertex(this,uVar10), !bVar15)) {
    return Failed_NotAVertex;
  }
  if (((uVar20 == uVar19) || (uVar20 == uVar10)) || (uVar19 == uVar10)) {
    return Failed_BrokenTopology;
  }
  uVar18 = FindEdge(this,uVar20,uVar19);
  uVar19 = FindEdge(this,uVar19,uVar10);
  uVar20 = FindEdge(this,uVar10,uVar20);
  if ((((uint)local_90 != 0xffffffff) && (uVar18 != 0xffffffff)) &&
     (*(int *)(*(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) + 0xc +
              (ulonglong)(uVar18 & 0x1ff) * 0x10) != -1)) {
    return Failed_BrokenTopology;
  }
  if (((uVar27 != 0xffffffff) && (uVar19 != 0xffffffff)) &&
     (*(int *)(*(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) + 0xc +
              (ulonglong)(uVar19 & 0x1ff) * 0x10) != -1)) {
    return Failed_BrokenTopology;
  }
  if (((local_88 != 0xffffffff) && (uVar20 != 0xffffffff)) &&
     (*(int *)(*(longlong *)
                ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8) + 0xc +
              (ulonglong)(uVar20 & 0x1ff) * 0x10) != -1)) {
    return Failed_BrokenTopology;
  }
  if ((uint)local_90 != 0xffffffff) {
    uVar23 = (ulonglong)((uint)local_90 & 0x1ff);
    lVar11 = (ulonglong)((uint)local_90 >> 9) * 8;
    lVar13 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar11);
    iVar24 = *(int *)(lVar13 + 0xc + uVar23 * 0x10);
    if (*(int *)(lVar13 + 8 + uVar23 * 0x10) == param_1) {
      *(int *)(lVar13 + 8 + uVar23 * 0x10) = iVar24;
LAB_1435318d0:
      *(undefined4 *)(lVar13 + 0xc + uVar23 * 0x10) = 0xffffffff;
    }
    else if (iVar24 == param_1) goto LAB_1435318d0;
    lVar11 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar11);
    piVar3 = (int *)(lVar11 + (ulonglong)((uint)local_90 & 0x1ff) * 0x10);
    iVar24 = piVar3[1];
    if (*(int *)(lVar11 + 8 + (ulonglong)((uint)local_90 & 0x1ff) * 0x10) == -1) {
      FSmallListSet::Remove(&this->VertexEdgeLists,*piVar3,(uint)local_90);
      FSmallListSet::Remove(&this->VertexEdgeLists,iVar24,(uint)local_90);
      FRefCountVector::Decrement(&this->EdgeRefCounts,(uint)local_90,1);
    }
  }
  if (uVar27 != 0xffffffff) {
    uVar23 = (ulonglong)(uVar27 & 0x1ff);
    lVar11 = (ulonglong)(uVar27 >> 9) * 8;
    lVar13 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar11);
    iVar24 = *(int *)(lVar13 + 0xc + uVar23 * 0x10);
    if (*(int *)(lVar13 + 8 + uVar23 * 0x10) == param_1) {
      *(int *)(lVar13 + 8 + uVar23 * 0x10) = iVar24;
LAB_143531985:
      *(undefined4 *)(lVar13 + 0xc + uVar23 * 0x10) = 0xffffffff;
    }
    else if (iVar24 == param_1) goto LAB_143531985;
    lVar11 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar11);
    piVar3 = (int *)(lVar11 + (ulonglong)(uVar27 & 0x1ff) * 0x10);
    iVar24 = piVar3[1];
    if (*(int *)(lVar11 + 8 + (ulonglong)(uVar27 & 0x1ff) * 0x10) == -1) {
      FSmallListSet::Remove(&this->VertexEdgeLists,*piVar3,uVar27);
      FSmallListSet::Remove(&this->VertexEdgeLists,iVar24,uVar27);
      FRefCountVector::Decrement(&this->EdgeRefCounts,uVar27,1);
    }
  }
  if (local_88 == 0xffffffff) goto LAB_143531aaa;
  uVar23 = (ulonglong)(local_88 & 0x1ff);
  lVar11 = (ulonglong)(local_88 >> 9) * 8;
  lVar13 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar11);
  iVar24 = *(int *)(lVar13 + 0xc + uVar23 * 0x10);
  if (*(int *)(lVar13 + 8 + uVar23 * 0x10) == param_1) {
    *(int *)(lVar13 + 8 + uVar23 * 0x10) = iVar24;
LAB_143531a3d:
    *(undefined4 *)(lVar13 + 0xc + uVar23 * 0x10) = 0xffffffff;
  }
  else if (iVar24 == param_1) goto LAB_143531a3d;
  lVar11 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar11);
  piVar3 = (int *)(lVar11 + (ulonglong)(local_88 & 0x1ff) * 0x10);
  iVar24 = piVar3[1];
  if (*(int *)(lVar11 + 8 + (ulonglong)(local_88 & 0x1ff) * 0x10) == -1) {
    FSmallListSet::Remove(&this->VertexEdgeLists,*piVar3,local_88);
    FSmallListSet::Remove(&this->VertexEdgeLists,iVar24,local_88);
    FRefCountVector::Decrement(&this->EdgeRefCounts,local_88,1);
  }
LAB_143531aaa:
  if ((uVar21 != (param_2->field0_0x0)._s_0.A) &&
     (FRefCountVector::Decrement(&this->VertexRefCounts,uVar21,1), param_3)) {
    sVar22 = *(short *)(*(longlong *)
                         ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                         ((uVar7 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2);
    if (sVar22 == -1) {
      sVar22 = 0;
    }
    if (sVar22 == 1) {
      FRefCountVector::Decrement(&this->VertexRefCounts,uVar21,1);
      FSmallListSet::Clear(&this->VertexEdgeLists,uVar21);
    }
  }
  if ((uVar17 != (param_2->field0_0x0)._s_0.B) &&
     (FRefCountVector::Decrement(&this->VertexRefCounts,uVar17,1), param_3)) {
    sVar22 = *(short *)(*(longlong *)
                         ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 2);
    if (sVar22 == -1) {
      sVar22 = 0;
    }
    if (sVar22 == 1) {
      FRefCountVector::Decrement(&this->VertexRefCounts,uVar17,1);
      FSmallListSet::Clear(&this->VertexEdgeLists,uVar17);
    }
  }
  if ((uVar9 != (param_2->field0_0x0)._s_0.C) &&
     (FRefCountVector::Decrement(&this->VertexRefCounts,uVar9,1), param_3)) {
    sVar22 = *(short *)(*(longlong *)
                         ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 2);
    if (sVar22 == -1) {
      sVar22 = 0;
    }
    if (sVar22 == 1) {
      FRefCountVector::Decrement(&this->VertexRefCounts,uVar9,1);
      FSmallListSet::Clear(&this->VertexEdgeLists,uVar9);
    }
  }
  uVar10 = (param_2->field0_0x0)._s_0.A;
  if (uVar10 != uVar21) {
    *(uint *)(lVar5 + *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar26 * 8)) =
         uVar10;
    uVar21 = (param_2->field0_0x0)._s_0.A;
    psVar4 = (short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2);
    *psVar4 = *psVar4 + 1;
  }
  uVar21 = (param_2->field0_0x0)._s_0.B;
  if (uVar21 != uVar17) {
    *(uint *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar26 * 8) + 4 +
             lVar5) = uVar21;
    uVar17 = (param_2->field0_0x0)._s_0.B;
    psVar4 = (short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 2);
    *psVar4 = *psVar4 + 1;
  }
  uVar17 = (param_2->field0_0x0)._s_0.C;
  if (uVar17 != uVar9) {
    *(uint *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + uVar26 * 8) + 8 +
             uVar25 * 0xc) = uVar17;
    uVar9 = (param_2->field0_0x0)._s_0.C;
    psVar4 = (short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 2);
    *psVar4 = *psVar4 + 1;
  }
  if ((uint)local_90 != 0xffffffff) {
    AddTriangleEdge(this,param_1,(param_2->field0_0x0)._s_0.A,(param_2->field0_0x0)._s_0.B,0,uVar18)
    ;
  }
  if (uVar27 != 0xffffffff) {
    AddTriangleEdge(this,param_1,(param_2->field0_0x0)._s_0.B,(param_2->field0_0x0)._s_0.C,1,uVar19)
    ;
  }
  if (local_88 != 0xffffffff) {
    AddTriangleEdge(this,param_1,(param_2->field0_0x0)._s_0.C,(param_2->field0_0x0)._s_0.A,2,uVar20)
    ;
  }
  if ((this->ChangeStampShape).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampShape).Mutex;
    LOCK();
    bVar15 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar15) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar15) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampShape).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar6 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  if ((this->ChangeStampTopology).bIsEnabled != false) {
    pFVar1 = &(this->ChangeStampTopology).Mutex;
    LOCK();
    bVar15 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar15) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar15) {
      FMutex::LockSlow(pFVar1);
    }
    puVar2 = &(this->ChangeStampTopology).Value;
    *puVar2 = *puVar2 + 1;
    LOCK();
    aVar6 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
  }
  return Ok;
}

// SetVertex @ 143532090

void __thiscall
UE::Geometry::FDynamicMesh3::SetVertex
          (FDynamicMesh3 *this,int param_1,TVector<double> *param_2,bool param_3)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  short sVar7;
  bool bVar8;
  
  sVar7 = _dclass((param_2->field0_0x0)._s_0.X);
  if (((sVar7 < 1) && (sVar7 = _dclass((param_2->field0_0x0)._s_0.Y), sVar7 < 1)) &&
     (sVar7 = _dclass((param_2->field0_0x0)._s_0.Z), sVar7 < 1)) {
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    lVar5 = *(longlong *)
             ((this->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
    pdVar2 = (double *)(lVar5 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    *pdVar2 = (param_2->field0_0x0)._s_0.X;
    pdVar2[1] = dVar6;
    *(double *)(lVar5 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18) = dVar4;
    if ((param_3) && ((this->ChangeStampShape).bIsEnabled != false)) {
      this_00 = &(this->ChangeStampShape).Mutex;
      LOCK();
      bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        FMutex::LockSlow(this_00);
      }
      puVar1 = &(this->ChangeStampShape).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar3 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// SetVertexColor @ 143532180

void __thiscall
UE::Geometry::FDynamicMesh3::SetVertexColor(FDynamicMesh3 *this,int param_1,TVector<float> *param_2)

{
  float fVar1;
  longlong lVar2;
  
  if ((this->VertexColors).bIsSet != false) {
    fVar1 = (param_2->field0_0x0)._s_0.Z;
    lVar2 = *(longlong *)
             ((this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc) =
         *(undefined8 *)&param_2->field0_0x0;
    *(float *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) = fVar1;
  }
  return;
}

// SetVertexNormal @ 1435321d0

void __thiscall
UE::Geometry::FDynamicMesh3::SetVertexNormal
          (FDynamicMesh3 *this,int param_1,TVector<float> *param_2)

{
  float fVar1;
  longlong lVar2;
  
  if ((this->VertexNormals).bIsSet != false) {
    fVar1 = (param_2->field0_0x0)._s_0.Z;
    lVar2 = *(longlong *)
             ((this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc) =
         *(undefined8 *)&param_2->field0_0x0;
    *(float *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) = fVar1;
  }
  return;
}

// SplitEdge @ 1435445e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::SplitEdge
          (FDynamicMesh3 *this,int param_1,int param_2,FEdgeSplitInfo *param_3)

{
  longlong lVar1;
  int iVar2;
  EMeshResult EVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = FindEdge(this,param_1,param_2);
  lVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  if (iVar2 == -1) {
    uStack_40 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
    uStack_3c = (undefined4)_UNK_15060db28;
    uStack_38 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
    *(longlong *)param_3 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
    *(ulonglong *)((longlong)&(param_3->OriginalVertices).field0_0x0 + 4) =
         CONCAT44(uStack_3c,uStack_40);
    *(ulonglong *)((longlong)&(param_3->OtherVertices).field0_0x0 + 4) =
         CONCAT44(0xffffffff,uStack_38);
    *(undefined8 *)((longlong)&(param_3->OriginalTriangles).field0_0x0 + 4) = 0xffffffff;
    *(longlong *)&param_3->NewVertex = lVar1 << 0x20;
    *(ulonglong *)((longlong)&(param_3->NewTriangles).field0_0x0 + 4) =
         CONCAT44(uStack_3c,uStack_40);
    *(ulonglong *)((longlong)&(param_3->NewEdges).field0_0x0 + 4) = CONCAT44(0xffffffff,uStack_38);
    param_3->SplitT = 0.0;
    return Failed_NotAnEdge;
  }
                    /* WARNING: Could not recover jumptable at 0x00014354467b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(this->_padding_ + 0x30))(this,iVar2,param_3,__real_3fe0000000000000);
  return EVar3;
}

// SplitEdge @ 143544690

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::SplitEdge
          (FDynamicMesh3 *this,int param_1,FEdgeSplitInfo *param_2,double param_3)

{
  double *pdVar1;
  double *pdVar2;
  short *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FDynamicMeshAttributeSet *pFVar9;
  double dVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TDynamicVector<int,512> *pTVar19;
  undefined4 extraout_var;
  FIndex2i_u_0 FVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  undefined8 local_2c8;
  uint local_2c0;
  ulonglong local_2b8;
  FIndex2i_u_0 local_2b0;
  FIndex2i_u_0 local_2a8;
  FIndex2i_u_0 local_2a0;
  FIndex2i_u_0 local_298;
  FIndex2i_u_0 local_290;
  undefined8 local_288;
  float local_280;
  float fStack_27c;
  undefined4 local_278;
  float local_274;
  float fStack_270;
  undefined4 local_26c;
  FIndex3i_u_0 local_268;
  int local_258;
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  uint local_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  float local_228;
  undefined8 local_224;
  float local_21c;
  undefined8 local_218;
  float local_210;
  undefined8 local_20c;
  float local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [16];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  TVector<double>_u_0 local_180;
  undefined8 local_168;
  float local_160;
  undefined8 local_15c;
  float local_154;
  TVector2<float>_u_0 local_150;
  undefined2 local_148;
  undefined1 local_146;
  TVector<double>_u_0 local_140;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  TVector2<float>_u_0 local_110;
  undefined2 local_108;
  undefined1 local_106;
  
  lVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar21 = 0;
  local_1a4 = 0;
  uStack_1a0 = 0;
  local_1c0 = 0;
  local_1ac = 0xffffffff;
  uStack_1a8 = 0xffffffff;
  uStack_188 = 0;
  uStack_18c = 0xffffffff;
  uStack_1bc = (undefined4)___xmm_ffffffffffffffffffffffffffffffff;
  uStack_1b8 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
  uStack_1b4 = (undefined4)_UNK_15060db28;
  uStack_1b0 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
  *(longlong *)param_2 = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
  *(ulonglong *)((longlong)&(param_2->OriginalVertices).field0_0x0 + 4) =
       CONCAT44(uStack_1b4,uStack_1b8);
  *(ulonglong *)((longlong)&(param_2->OtherVertices).field0_0x0 + 4) =
       CONCAT44(0xffffffff,uStack_1b0);
  *(undefined8 *)((longlong)&(param_2->OriginalTriangles).field0_0x0 + 4) = 0xffffffff;
  *(longlong *)&param_2->NewVertex = lVar6 << 0x20;
  *(ulonglong *)((longlong)&(param_2->NewTriangles).field0_0x0 + 4) =
       CONCAT44(uStack_1b4,uStack_1b8);
  *(ulonglong *)((longlong)&(param_2->NewEdges).field0_0x0 + 4) = CONCAT44(0xffffffff,uStack_1b0);
  param_2->SplitT = 0.0;
  dVar10 = __real_3ff0000000000000;
  if ((param_1 < 0) ||
     ((int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_1)) {
    return Failed_NotAnEdge;
  }
  local_2a8._s_0.A = (uint)param_1 >> 9;
  local_2a8._s_0.B = 0;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                    (longlong)local_2a8 * 8) + (ulonglong)(param_1 & 0x1ff) * 2) -
                       1U)) {
    return Failed_NotAnEdge;
  }
  local_2b0 = (FIndex2i_u_0)((ulonglong)(param_1 & 0x1ff) * 0x10);
  local_1d0 = *(undefined1 (*) [16])
               (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (longlong)local_2a8 * 8)
               + (longlong)local_2b0);
  uVar12 = local_1d0._0_4_;
  local_290._s_0.A = local_1d0._8_4_;
  uVar27 = local_1d0._8_8_;
  if (local_290._s_0.A == 0xffffffff) {
    return Failed_BrokenTopology;
  }
  iVar24 = 1;
  lVar6 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)local_290._s_0.A >> 9) * 8);
  uVar14 = *(uint *)(lVar6 + 8 + (ulonglong)(local_290._s_0.A & 0x1ff) * 0xc);
  local_2c8 = *(undefined8 *)(lVar6 + (ulonglong)(local_290._s_0.A & 0x1ff) * 0xc);
  local_2c0 = uVar14;
  uVar23 = uVar21;
  uVar26 = uVar21;
  do {
    uVar22 = *(uint *)((longlong)&local_2c8 +
                      (longlong)
                      (iVar24 + (iVar24 / 3 + (iVar24 >> 0x1f) +
                                (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3) * 4);
    uVar25 = *(uint *)((longlong)&local_2c8 + uVar23 * 4);
    uVar28 = uVar22;
    if (((uVar12 == uVar25) || (uVar28 = uVar25, uVar12 == uVar22)) && (local_1d0._4_4_ == uVar28))
    {
      iVar24 = (int)uVar26 + 2;
      uVar28 = *(uint *)((longlong)&local_2c8 +
                        (longlong)
                        (iVar24 + (iVar24 / 3 + (iVar24 >> 0x1f) +
                                  (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3) * 4);
      goto LAB_143544861;
    }
    uVar26 = (ulonglong)((int)uVar26 + 1);
    iVar24 = iVar24 + 1;
    uVar23 = uVar23 + 1;
  } while ((longlong)uVar23 < 3);
  uVar28 = 0xffffffff;
  uVar25 = uVar12;
  uVar22 = local_1d0._4_4_;
LAB_143544861:
  if (0xfffc < *(ushort *)
                (*(longlong *)
                  ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 2)) {
    return Failed_HitValenceLimit;
  }
  if (uVar25 != uVar12) {
    param_3 = __real_3ff0000000000000 - param_3;
  }
  param_2->OriginalEdge = param_1;
  param_2->SplitT = param_3;
  local_298._s_0.B = uVar22;
  local_298._s_0.A = uVar25;
  (param_2->OriginalVertices).field0_0x0 = local_298;
  local_290._s_0.B = 0xffffffff;
  (param_2->OriginalTriangles).field0_0x0 = local_290;
  local_2cc = *(uint *)(*(longlong *)
                         ((this->Edges).Blocks.AllocatorInstance.Data + (longlong)local_2a8 * 8) +
                        0xc + (longlong)local_2b0);
  uStack_19c = uStack_1bc;
  uStack_198 = uStack_1b8;
  uStack_194 = uStack_1b4;
  uStack_190 = uStack_1b0;
  if (local_2cc == 0xffffffff) {
    pFVar7 = (this->Vertices).Blocks.AllocatorInstance.Data;
    dVar10 = dVar10 - param_3;
    local_2b8 = (ulonglong)(uVar25 >> 9);
    uVar23 = (ulonglong)(uVar22 & 0x1ff);
    local_290._s_0.B = 0;
    local_290._s_0.A = uVar22 >> 9;
    local_148 = 0;
    lVar6 = *(longlong *)(pFVar7 + (longlong)local_290 * 8);
    local_146 = 0;
    pdVar1 = (double *)(lVar6 + uVar23 * 0x18);
    local_298._s_0.A = uVar25 & 0x1ff;
    local_298._s_0.B = 0;
    lVar8 = *(longlong *)(pFVar7 + local_2b8 * 8);
    pdVar2 = (double *)(lVar8 + (longlong)local_298 * 0x18);
    local_160 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_154 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_180._s_0.X = *pdVar1 * param_3 + *pdVar2 * dVar10;
    local_150 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_180._s_0.Y = pdVar1[1] * param_3 + pdVar2[1] * dVar10;
    local_168 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_15c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_180._s_0.Z =
         *(double *)(lVar6 + 0x10 + uVar23 * 0x18) * param_3 +
         *(double *)(lVar8 + 0x10 + (longlong)local_298 * 0x18) * dVar10;
    uVar12 = AppendVertex(this,(FVertexInfo *)&local_180._s_0);
    fVar33 = __real_3f800000;
    if ((this->VertexNormals).bIsSet != false) {
      pFVar7 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
      fVar30 = (float)param_3;
      lVar6 = *(longlong *)(pFVar7 + (longlong)local_290 * 8);
      lVar8 = *(longlong *)(pFVar7 + local_2b8 * 8);
      uVar4 = *(undefined8 *)(lVar6 + uVar23 * 0xc);
      fVar29 = __real_3f800000 - fVar30;
      uVar5 = *(undefined8 *)(lVar8 + (longlong)local_298 * 0xc);
      fVar32 = (float)uVar5 * fVar29 + (float)uVar4 * fVar30;
      fVar31 = (float)((ulonglong)uVar5 >> 0x20) * fVar29 +
               (float)((ulonglong)uVar4 >> 0x20) * fVar30;
      fVar30 = *(float *)(lVar8 + 8 + (longlong)local_298 * 0xc) * fVar29 +
               *(float *)(lVar6 + 8 + uVar23 * 0xc) * fVar30;
      fVar29 = SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar30 * fVar30);
      if (fVar29 <= 0.0) {
        _local_280 = 0;
        local_278 = 0.0;
      }
      else {
        fVar29 = __real_3f800000 / fVar29;
        local_278 = fVar30 * fVar29;
        fStack_27c = fVar31 * fVar29;
        local_280 = fVar32 * fVar29;
      }
      SetVertexNormal(this,uVar12,(TVector<float> *)&local_280);
    }
    if ((this->VertexColors).bIsSet != false) {
      pFVar7 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
      fVar30 = (float)param_3;
      fVar29 = fVar33 - fVar30;
      local_224 = *(undefined8 *)(*(longlong *)(pFVar7 + (longlong)local_290 * 8) + uVar23 * 0xc);
      local_21c = *(float *)(*(longlong *)(pFVar7 + (longlong)local_290 * 8) + 8 + uVar23 * 0xc);
      uVar5 = local_224;
      local_230 = *(undefined8 *)(*(longlong *)(pFVar7 + local_2b8 * 8) + (longlong)local_298 * 0xc)
      ;
      local_228 = *(float *)(*(longlong *)(pFVar7 + local_2b8 * 8) + 8 + (longlong)local_298 * 0xc);
      uVar4 = local_230;
      uVar27 = (ulonglong)(uVar12 & 0x1ff);
      lVar6 = *(longlong *)(pFVar7 + (ulonglong)(uVar12 >> 9) * 8);
      *(float *)(lVar6 + uVar27 * 0xc) = (float)local_230 * fVar29 + (float)local_224 * fVar30;
      local_224._4_4_ = (float)((ulonglong)local_224 >> 0x20);
      local_230._4_4_ = (float)((ulonglong)local_230 >> 0x20);
      *(float *)(lVar6 + 4 + uVar27 * 0xc) = local_230._4_4_ * fVar29 + local_224._4_4_ * fVar30;
      *(float *)(lVar6 + 8 + uVar27 * 0xc) = local_228 * fVar29 + local_21c * fVar30;
      uVar27 = local_1d0._8_8_;
      uVar14 = local_2c0;
      local_230 = uVar4;
      local_224 = uVar5;
    }
    if ((this->VertexUVs).bIsSet != false) {
      pFVar7 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
      fVar29 = (float)param_3;
      local_248 = *(undefined8 *)
                   (*(longlong *)(pFVar7 + (ulonglong)(uVar22 >> 9) * 8) +
                   (ulonglong)(uVar22 & 0x1ff) * 8);
      fVar33 = fVar33 - fVar29;
      uVar5 = local_248;
      local_250 = *(undefined8 *)
                   (*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) +
                   (ulonglong)(uVar25 & 0x1ff) * 8);
      uVar4 = local_250;
      local_250._4_4_ = (float)((ulonglong)local_250 >> 0x20);
      local_248._4_4_ = (float)((ulonglong)local_248 >> 0x20);
      *(ulonglong *)
       (*(longlong *)(pFVar7 + (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 8) =
           CONCAT44(local_250._4_4_ * fVar33 + local_248._4_4_ * fVar29,
                    (float)local_250 * fVar33 + (float)local_248 * fVar29);
      local_250 = uVar4;
      local_248 = uVar5;
    }
    uVar13 = (uint)uVar27;
    lVar6 = *(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data + ((uVar27 & 0xffffffff) >> 9) * 8
             );
    local_200 = *(undefined8 *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
    local_1f8 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
    uVar25 = local_2c8._4_4_;
    if ((uVar22 == (uint)local_2c8) || (uVar25 = (uint)local_2c8, uVar22 == local_2c8._4_4_)) {
      if (uVar28 != uVar25) {
        uVar25 = uVar14;
        if (uVar22 != local_2c8._4_4_) goto LAB_143544f2a;
        goto joined_r0x000143544f32;
      }
    }
    else {
LAB_143544f2a:
      uVar25 = local_2c8._4_4_;
      if (uVar22 == uVar14) {
joined_r0x000143544f32:
        if (uVar28 != uVar25) {
          uVar25 = (uint)local_2c8;
          if (uVar22 != uVar14) goto LAB_143544f42;
          goto joined_r0x000143544f4d;
        }
        uVar21 = 4;
      }
      else {
LAB_143544f42:
        uVar25 = uVar14;
        if (uVar22 == (uint)local_2c8) {
joined_r0x000143544f4d:
          if (uVar28 == uVar25) {
            uVar21 = 8;
            goto LAB_143544d3e;
          }
        }
        uVar21 = 0xfffffffffffffffc;
      }
    }
LAB_143544d3e:
    iVar24 = *(int *)((longlong)&local_200 + uVar21);
    ReplaceTriangleVertex(this,uVar13,uVar22,uVar12);
    uVar14 = AddTriangleInternal(this,uVar12,uVar22,uVar28,-1,-1,-1);
    if ((this->TriangleGroups).bIsSet != false) {
      pTVar19 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue(&this->TriangleGroups);
      local_2d4 = *(uint *)(*(longlong *)
                             ((pTVar19->Blocks).AllocatorInstance.Data +
                             ((uVar27 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
      pTVar19 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator->(&this->TriangleGroups)
      ;
      TDynamicVector<int,512>::InsertAt(pTVar19,(int *)&local_2d4,uVar14);
    }
    ReplaceEdgeTriangle(this,iVar24,uVar13,uVar14);
    ReplaceEdgeVertex(this,param_1,uVar22,uVar12);
    FSmallListSet::Remove(&this->VertexEdgeLists,uVar22,param_1);
    FSmallListSet::Insert(&this->VertexEdgeLists,uVar12,param_1);
    iVar15 = AddEdgeInternal(this,uVar12,uVar22,uVar14,-1);
    iVar16 = AddEdgeInternal(this,uVar12,uVar28,uVar13,uVar14);
    ReplaceTriangleEdge(this,uVar13,iVar24,iVar16);
    uVar21 = (ulonglong)(uVar14 & 0x1ff);
    uStack_23c = 0xffffffff;
    local_2a0._s_0.B = 0xffffffff;
    local_2a0._s_0.A = uVar14;
    lVar6 = *(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
    *(int *)(lVar6 + uVar21 * 0xc) = iVar15;
    *(int *)(lVar6 + 4 + uVar21 * 0xc) = iVar24;
    *(int *)(lVar6 + 8 + uVar21 * 0xc) = iVar16;
    psVar3 = (short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 2);
    *psVar3 = *psVar3 + 1;
    psVar3 = (short *)(*(longlong *)
                        ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2);
    *psVar3 = *psVar3 + 2;
    FVar20._s_0.B = 0xffffffff;
    FVar20._s_0.A = uVar28;
    (param_2->OtherVertices).field0_0x0 = FVar20;
    param_2->bIsBoundary = true;
    param_2->NewVertex = uVar12;
    (param_2->NewEdges).field0_0x0._s_0.A = iVar15;
    (param_2->NewEdges).field0_0x0._s_0.B = iVar16;
    (param_2->NewEdges).field0_0x0._s_0.C = -1;
    FVar20 = local_2a0;
    local_240 = uVar28;
    goto LAB_1435457ae;
  }
  (param_2->OriginalTriangles).field0_0x0._s_0.B = local_2cc;
  lVar6 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(local_2cc >> 9) * 8);
  local_2d4 = *(uint *)(lVar6 + 8 + (ulonglong)(local_2cc & 0x1ff) * 0xc);
  local_268._0_8_ = *(undefined8 *)(lVar6 + (ulonglong)(local_2cc & 0x1ff) * 0xc);
  local_268._s_0.C = local_2d4;
  uVar12 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                     (uVar25,uVar22,(FIndex3i *)&local_268._s_0);
  local_2b8 = CONCAT44(extraout_var,uVar12);
  if (0xfffc < *(ushort *)
                (*(longlong *)
                  ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2)) {
    return Failed_HitValenceLimit;
  }
  pFVar7 = (this->Vertices).Blocks.AllocatorInstance.Data;
  dVar10 = dVar10 - param_3;
  local_2a8 = (FIndex2i_u_0)(ulonglong)(uVar22 & 0x1ff);
  local_2a0._s_0.B = 0;
  local_2a0._s_0.A = uVar22 >> 9;
  local_108 = 0;
  local_106 = 0;
  lVar6 = *(longlong *)(pFVar7 + (longlong)local_2a0 * 8);
  pdVar1 = (double *)(lVar6 + (longlong)local_2a8 * 0x18);
  local_2b0 = (FIndex2i_u_0)(ulonglong)(uVar25 & 0x1ff);
  local_288 = (ulonglong)(uVar25 >> 9);
  lVar8 = *(longlong *)(pFVar7 + local_288 * 8);
  pdVar2 = (double *)(lVar8 + (longlong)local_2b0 * 0x18);
  local_120 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_114 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_140._s_0.X = *pdVar1 * param_3 + *pdVar2 * dVar10;
  local_110 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_140._s_0.Y = pdVar1[1] * param_3 + pdVar2[1] * dVar10;
  local_128 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_11c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_140._s_0.Z =
       *(double *)(lVar6 + 0x10 + (longlong)local_2a8 * 0x18) * param_3 +
       *(double *)(lVar8 + 0x10 + (longlong)local_2b0 * 0x18) * dVar10;
  uVar12 = AppendVertex(this,(FVertexInfo *)&local_140._s_0);
  fVar33 = __real_3f800000;
  if ((this->VertexNormals).bIsSet != false) {
    pFVar7 = (this->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
    fVar30 = (float)param_3;
    lVar6 = *(longlong *)(pFVar7 + (longlong)local_2a0 * 8);
    fVar29 = __real_3f800000 - fVar30;
    uVar4 = *(undefined8 *)(lVar6 + (longlong)local_2a8 * 0xc);
    lVar8 = *(longlong *)(pFVar7 + local_288 * 8);
    uVar5 = *(undefined8 *)(lVar8 + (longlong)local_2b0 * 0xc);
    fVar32 = (float)uVar5 * fVar29 + (float)uVar4 * fVar30;
    fVar31 = (float)((ulonglong)uVar5 >> 0x20) * fVar29 + (float)((ulonglong)uVar4 >> 0x20) * fVar30
    ;
    fVar30 = *(float *)(lVar8 + 8 + (longlong)local_2b0 * 0xc) * fVar29 +
             *(float *)(lVar6 + 8 + (longlong)local_2a8 * 0xc) * fVar30;
    fVar29 = SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar30 * fVar30);
    if (fVar29 <= 0.0) {
      _local_274 = 0;
      local_26c = 0.0;
    }
    else {
      fVar29 = __real_3f800000 / fVar29;
      local_26c = fVar30 * fVar29;
      fStack_270 = fVar31 * fVar29;
      local_274 = fVar32 * fVar29;
    }
    SetVertexNormal(this,uVar12,(TVector<float> *)&local_274);
  }
  if ((this->VertexColors).bIsSet != false) {
    pFVar7 = (this->VertexColors).TypedValue.Blocks.AllocatorInstance.Data;
    fVar30 = (float)param_3;
    fVar29 = fVar33 - fVar30;
    local_20c = *(undefined8 *)
                 (*(longlong *)(pFVar7 + (longlong)local_2a0 * 8) +
                 (ulonglong)(uVar22 & 0x1ff) * 0xc);
    local_204 = *(float *)(*(longlong *)(pFVar7 + (longlong)local_2a0 * 8) + 8 +
                          (ulonglong)(uVar22 & 0x1ff) * 0xc);
    uVar5 = local_20c;
    local_218 = *(undefined8 *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) +
                 (ulonglong)(uVar25 & 0x1ff) * 0xc);
    local_210 = *(float *)(*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) + 8 +
                          (ulonglong)(uVar25 & 0x1ff) * 0xc);
    uVar4 = local_218;
    uVar27 = (ulonglong)(uVar12 & 0x1ff);
    lVar6 = *(longlong *)(pFVar7 + (ulonglong)(uVar12 >> 9) * 8);
    *(float *)(lVar6 + uVar27 * 0xc) = (float)local_218 * fVar29 + (float)local_20c * fVar30;
    local_20c._4_4_ = (float)((ulonglong)local_20c >> 0x20);
    local_218._4_4_ = (float)((ulonglong)local_218 >> 0x20);
    *(float *)(lVar6 + 4 + uVar27 * 0xc) = local_218._4_4_ * fVar29 + local_20c._4_4_ * fVar30;
    *(float *)(lVar6 + 8 + uVar27 * 0xc) = local_210 * fVar29 + local_204 * fVar30;
    uVar27 = local_1d0._8_8_;
    uVar14 = local_2c0;
    local_2d4 = local_268._s_0.C;
    local_218 = uVar4;
    local_20c = uVar5;
  }
  if ((this->VertexUVs).bIsSet != false) {
    pFVar7 = (this->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data;
    fVar29 = (float)param_3;
    local_288 = *(ulonglong *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar22 >> 9) * 8) +
                 (ulonglong)(uVar22 & 0x1ff) * 8);
    fVar33 = fVar33 - fVar29;
    uVar23 = local_288;
    local_238 = *(undefined8 *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8) +
                 (ulonglong)(uVar25 & 0x1ff) * 8);
    uVar4 = local_238;
    local_238._4_4_ = (float)((ulonglong)local_238 >> 0x20);
    local_288._4_4_ = (float)(local_288 >> 0x20);
    *(ulonglong *)
     (*(longlong *)(pFVar7 + (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 8) =
         CONCAT44(local_238._4_4_ * fVar33 + local_288._4_4_ * fVar29,
                  (float)local_238 * fVar33 + (float)local_288 * fVar29);
    local_288 = uVar23;
    local_238 = uVar4;
  }
  pFVar7 = (this->TriangleEdges).Blocks.AllocatorInstance.Data;
  uVar13 = (uint)uVar27;
  lVar6 = *(longlong *)(pFVar7 + ((uVar27 & 0xffffffff) >> 9) * 8);
  local_1e8 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
  local_1f0 = *(undefined8 *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
  uVar25 = local_2c8._4_4_;
  if ((uVar22 == (uint)local_2c8) || (uVar25 = (uint)local_2c8, uVar22 == local_2c8._4_4_)) {
    uVar23 = uVar21;
    if (uVar28 != uVar25) {
      if (uVar22 != local_2c8._4_4_) goto LAB_14354543d;
      if (uVar28 != uVar14) goto LAB_1435453de;
LAB_143545446:
      uVar23 = 4;
    }
  }
  else {
LAB_14354543d:
    if (uVar22 == uVar14) {
      if (uVar28 == local_2c8._4_4_) goto LAB_143545446;
LAB_1435453de:
      uVar25 = (uint)local_2c8;
      if (uVar22 != uVar14) goto LAB_14354544d;
joined_r0x000143545454:
      if (uVar28 == uVar25) {
        uVar23 = 8;
        goto LAB_1435453f3;
      }
    }
    else {
LAB_14354544d:
      uVar25 = uVar14;
      if (uVar22 == (uint)local_2c8) goto joined_r0x000143545454;
    }
    uVar23 = 0xfffffffffffffffc;
  }
LAB_1435453f3:
  iVar24 = *(int *)((longlong)&local_1f0 + uVar23);
  lVar6 = *(longlong *)(pFVar7 + (ulonglong)(local_2cc >> 9) * 8);
  local_1e0 = *(undefined8 *)(lVar6 + (ulonglong)(local_2cc & 0x1ff) * 0xc);
  local_1d8 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(local_2cc & 0x1ff) * 0xc);
  uVar14 = (uint)local_2b8;
  uVar11 = local_268._s_0.B;
  if ((uVar14 == local_268._s_0.A) || (uVar11 = local_268._s_0.A, uVar14 == local_268._s_0.B)) {
    if (uVar22 != uVar11) {
      uVar11 = local_2d4;
      if (uVar14 != local_268._s_0.B) goto LAB_14354581f;
      goto joined_r0x000143545826;
    }
  }
  else {
LAB_14354581f:
    uVar11 = local_268._s_0.B;
    if (uVar14 == local_2d4) {
joined_r0x000143545826:
      if (uVar22 != uVar11) {
        uVar11 = local_268._s_0.A;
        if (uVar14 != local_2d4) goto LAB_143545836;
        goto joined_r0x000143545841;
      }
      uVar21 = 4;
    }
    else {
LAB_143545836:
      uVar11 = local_2d4;
      if (uVar14 == local_268._s_0.A) {
joined_r0x000143545841:
        if (uVar22 == uVar11) {
          uVar21 = 8;
          goto LAB_14354549c;
        }
      }
      uVar21 = 0xfffffffffffffffc;
    }
  }
LAB_14354549c:
  local_2d4 = *(uint *)((longlong)&local_1e0 + uVar21);
  ReplaceTriangleVertex(this,uVar13,uVar22,uVar12);
  uVar25 = local_2cc;
  ReplaceTriangleVertex(this,local_2cc,uVar22,uVar12);
  uVar17 = AddTriangleInternal(this,uVar12,uVar22,uVar28,-1,-1,-1);
  local_2d0 = AddTriangleInternal(this,uVar12,uVar14,uVar22,-1,-1,-1);
  if ((this->TriangleGroups).bIsSet != false) {
    pTVar19 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue(&this->TriangleGroups);
    local_258 = *(int *)(*(longlong *)
                          ((pTVar19->Blocks).AllocatorInstance.Data +
                          ((uVar27 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
    pTVar19 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator->(&this->TriangleGroups);
    TDynamicVector<int,512>::InsertAt(pTVar19,&local_258,uVar17);
    pTVar19 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue(&this->TriangleGroups);
    local_254 = *(int *)(*(longlong *)
                          ((pTVar19->Blocks).AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8)
                        + (ulonglong)(uVar25 & 0x1ff) * 4);
    pTVar19 = TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator->(&this->TriangleGroups);
    TDynamicVector<int,512>::InsertAt(pTVar19,&local_254,local_2d0);
  }
  ReplaceEdgeTriangle(this,iVar24,uVar13,uVar17);
  ReplaceEdgeTriangle(this,local_2d4,uVar25,local_2d0);
  ReplaceEdgeVertex(this,param_1,uVar22,uVar12);
  FSmallListSet::Remove(&this->VertexEdgeLists,uVar22,param_1);
  FSmallListSet::Insert(&this->VertexEdgeLists,uVar12,param_1);
  iVar15 = AddEdgeInternal(this,uVar12,uVar22,uVar17,local_2d0);
  iVar16 = AddEdgeInternal(this,uVar12,uVar28,uVar13,uVar17);
  iVar18 = AddEdgeInternal(this,(int)local_2b8,uVar12,local_2cc,local_2d0);
  ReplaceTriangleEdge(this,uVar13,iVar24,iVar16);
  uVar14 = local_2d4;
  ReplaceTriangleEdge(this,local_2cc,local_2d4,iVar18);
  uVar21 = (ulonglong)(uVar17 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
  *(int *)(lVar6 + uVar21 * 0xc) = iVar15;
  *(int *)(lVar6 + 4 + uVar21 * 0xc) = iVar24;
  *(int *)(lVar6 + 8 + uVar21 * 0xc) = iVar16;
  uVar21 = (ulonglong)(local_2d0 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(local_2d0 >> 9) * 8);
  *(int *)(lVar6 + uVar21 * 0xc) = iVar18;
  *(uint *)(lVar6 + 4 + uVar21 * 0xc) = uVar14;
  *(int *)(lVar6 + 8 + uVar21 * 0xc) = iVar15;
  local_2b0._s_0.B = (uint)local_2b8;
  local_2b0._s_0.A = uVar28;
  local_2a8._s_0.B = local_2d0;
  local_2a8._s_0.A = uVar17;
  psVar3 = (short *)(*(longlong *)
                      ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 2);
  *psVar3 = *psVar3 + 1;
  psVar3 = (short *)(*(longlong *)
                      ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      ((local_2b8 & 0xffffffff) >> 9) * 8) +
                    (ulonglong)((uint)local_2b8 & 0x1ff) * 2);
  *psVar3 = *psVar3 + 1;
  psVar3 = (short *)(*(longlong *)
                      ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2);
  *psVar3 = *psVar3 + 4;
  (param_2->OtherVertices).field0_0x0 = local_2b0;
  param_2->bIsBoundary = false;
  param_2->NewVertex = uVar12;
  (param_2->NewEdges).field0_0x0._s_0.A = iVar15;
  (param_2->NewEdges).field0_0x0._s_0.B = iVar16;
  (param_2->NewEdges).field0_0x0._s_0.C = iVar18;
  FVar20 = local_2a8;
LAB_1435457ae:
  (param_2->NewTriangles).field0_0x0 = FVar20;
  pFVar9 = (this->AttributeSet).Ptr;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)(pFVar9->_padding_ + 0x38))(pFVar9,param_2);
  }
  UpdateChangeStamps(this,true,true);
  return Ok;
}

// SplitVertex @ 14354a140

EMeshResult __thiscall
UE::Geometry::FDynamicMesh3::SplitVertex
          (FDynamicMesh3 *this,int param_1,TArrayView<int_const_,int> *param_2,
          FVertexSplitInfo *param_3)

{
  TDynamicVector<int,512> *pTVar1;
  FMutex *pFVar2;
  uint *puVar3;
  uint *puVar4;
  short *psVar5;
  longlong lVar6;
  longlong lVar7;
  atomic<unsigned_char> aVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FDynamicMeshAttributeSet *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  EMeshResult EVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  int *piVar29;
  bool bVar30;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if (((param_1 < 0) ||
      ((int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar30 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2458686373993904947>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Edits.cpp"
                        ,0x4cd,"IsVertex(VertexID)");
    if (bVar30) {
      pcVar13 = (code *)swi(3);
      EVar18 = (*pcVar13)();
      return EVar18;
    }
    return Failed_NotAVertex;
  }
  param_3->OriginalVertex = param_1;
  iVar15 = AppendVertex(this,this,param_1);
  param_3->NewVertex = iVar15;
  puVar23 = (uint *)param_2->DataPtr;
  puVar3 = puVar23 + param_2->ArrayNum;
  do {
    if (puVar23 == puVar3) {
      pFVar12 = (this->AttributeSet).Ptr;
      if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
        (**(code **)(pFVar12->_padding_ + 0x68))(pFVar12,param_3,param_2);
      }
      if ((this->ChangeStampShape).bIsEnabled != false) {
        pFVar2 = &(this->ChangeStampShape).Mutex;
        LOCK();
        bVar30 = pFVar2->State == (atomic<unsigned_char>)0x0;
        if (bVar30) {
          pFVar2->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar30) {
          FMutex::LockSlow(pFVar2);
        }
        puVar3 = &(this->ChangeStampShape).Value;
        *puVar3 = *puVar3 + 1;
        LOCK();
        aVar8 = pFVar2->State;
        pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
        UNLOCK();
        if (((byte)aVar8 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar2);
        }
      }
      if ((this->ChangeStampTopology).bIsEnabled != false) {
        pFVar2 = &(this->ChangeStampTopology).Mutex;
        LOCK();
        bVar30 = pFVar2->State == (atomic<unsigned_char>)0x0;
        if (bVar30) {
          pFVar2->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar30) {
          FMutex::LockSlow(pFVar2);
        }
        puVar3 = &(this->ChangeStampTopology).Value;
        *puVar3 = *puVar3 + 1;
        LOCK();
        aVar8 = pFVar2->State;
        pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
        UNLOCK();
        if (((byte)aVar8 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar2);
        }
      }
      return Ok;
    }
    iVar15 = 1;
    uVar9 = *puVar23;
    lVar6 = (ulonglong)(uVar9 >> 9) * 8;
    lVar7 = (ulonglong)(uVar9 & 0x1ff) * 0xc;
    lVar11 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar6);
    local_60 = *(undefined8 *)(lVar11 + lVar7);
    local_58 = *(int *)(lVar11 + 8 + lVar7);
    uVar14 = local_60;
    if ((int)local_60 == param_1) {
      iVar15 = 0;
LAB_14354a271:
      iVar27 = param_3->NewVertex;
      lVar26 = (longlong)iVar15;
      lVar11 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar6);
      local_60 = uVar14;
      *(int *)((longlong)&local_60 + lVar26 * 4) = iVar27;
      local_48 = *(undefined4 *)(lVar11 + 8 + lVar7);
      local_50 = *(undefined8 *)(lVar11 + lVar7);
      uVar21 = *(uint *)((longlong)&local_50 + lVar26 * 4);
      lVar7 = *(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8);
      piVar29 = (int *)((ulonglong)(uVar21 & 0x1ff) * 0x10 + lVar7);
      uVar24 = (uint)((ulonglong)*(undefined8 *)(piVar29 + 2) >> 0x20);
      uVar16 = (uint)*(undefined8 *)(piVar29 + 2);
      uVar25 = uVar24;
      if (((uVar16 == uVar9) || (uVar25 = uVar16, uVar24 == uVar9)) && (-1 < (int)uVar25)) {
        puVar22 = (uint *)param_2->DataPtr;
        puVar4 = puVar22 + param_2->ArrayNum;
        for (; puVar22 != puVar4; puVar22 = puVar22 + 1) {
          if (*puVar22 == uVar25) goto LAB_14354a36e;
        }
        uVar19 = (ulonglong)(uVar21 & 0x1ff);
        uVar21 = *(uint *)(lVar7 + 0xc + uVar19 * 0x10);
        if (*(uint *)(lVar7 + 8 + uVar19 * 0x10) == uVar9) {
          *(uint *)(lVar7 + 8 + uVar19 * 0x10) = uVar21;
LAB_14354a333:
          *(undefined4 *)(lVar7 + 0xc + uVar19 * 0x10) = 0xffffffff;
        }
        else if (uVar21 == uVar9) goto LAB_14354a333;
        AddTriangleEdge(this,uVar9,iVar27,
                        *(int *)((longlong)&local_60 + (longlong)(int)((iVar15 + 1U) % 3) * 4),
                        iVar15,-1);
      }
      else {
LAB_14354a36e:
        iVar10 = *piVar29;
        iVar20 = piVar29[1];
        iVar17 = iVar27;
        if (iVar10 == param_3->OriginalVertex) {
          if (iVar27 < iVar20) {
            iVar17 = iVar20;
          }
          if (iVar20 < iVar27) {
            iVar27 = iVar20;
          }
LAB_14354a39d:
          *piVar29 = iVar27;
          piVar29[1] = iVar17;
          bVar30 = FSmallListSet::Remove(&this->VertexEdgeLists,param_3->OriginalVertex,uVar21);
          if ((!bVar30) &&
             (bVar30 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2458686373993904921>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Edits.cpp"
                                  ,0x4e7,"VertexEdgeLists.Remove(SplitInfo.OriginalVertex, EdgeID)")
             , bVar30)) {
            pcVar13 = (code *)swi(3);
            EVar18 = (*pcVar13)();
            return EVar18;
          }
          FSmallListSet::Insert(&this->VertexEdgeLists,param_3->NewVertex,uVar21);
        }
        else if (iVar20 == param_3->OriginalVertex) {
          if (iVar27 < iVar10) {
            iVar17 = iVar10;
          }
          if (iVar10 < iVar27) {
            iVar27 = iVar10;
          }
          goto LAB_14354a39d;
        }
      }
      uVar28 = (iVar15 + 2U) % 3;
      uVar21 = *(uint *)((longlong)&local_50 + (longlong)(int)uVar28 * 4);
      lVar7 = *(longlong *)
               ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8);
      piVar29 = (int *)((ulonglong)(uVar21 & 0x1ff) * 0x10 + lVar7);
      uVar24 = (uint)((ulonglong)*(undefined8 *)(piVar29 + 2) >> 0x20);
      uVar16 = (uint)*(undefined8 *)(piVar29 + 2);
      uVar25 = uVar24;
      if (((uVar16 == uVar9) || (uVar25 = uVar16, uVar24 == uVar9)) && (-1 < (int)uVar25)) {
        puVar22 = (uint *)param_2->DataPtr;
        puVar4 = puVar22 + param_2->ArrayNum;
        for (; puVar22 != puVar4; puVar22 = puVar22 + 1) {
          if (*puVar22 == uVar25) goto LAB_14354a4f0;
        }
        uVar19 = (ulonglong)(uVar21 & 0x1ff);
        uVar21 = *(uint *)(lVar7 + 0xc + uVar19 * 0x10);
        if (*(uint *)(lVar7 + 8 + uVar19 * 0x10) == uVar9) {
          *(uint *)(lVar7 + 8 + uVar19 * 0x10) = uVar21;
LAB_14354a4ae:
          *(undefined4 *)(lVar7 + 0xc + uVar19 * 0x10) = 0xffffffff;
        }
        else if (uVar21 == uVar9) goto LAB_14354a4ae;
        AddTriangleEdge(this,uVar9,*(int *)((longlong)&local_60 + (longlong)(int)uVar28 * 4),
                        *(int *)((longlong)&local_60 + (longlong)(int)((uVar28 + 1) % 3) * 4),uVar28
                        ,-1);
      }
      else {
LAB_14354a4f0:
        iVar15 = *piVar29;
        iVar27 = param_3->NewVertex;
        iVar10 = piVar29[1];
        iVar20 = iVar27;
        if (iVar15 == param_3->OriginalVertex) {
          if (iVar27 < iVar10) {
            iVar20 = iVar10;
          }
          if (iVar10 < iVar27) {
            iVar27 = iVar10;
          }
LAB_14354a522:
          *piVar29 = iVar27;
          piVar29[1] = iVar20;
          bVar30 = FSmallListSet::Remove(&this->VertexEdgeLists,param_3->OriginalVertex,uVar21);
          if ((!bVar30) &&
             (bVar30 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2458686373993904921>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3_Edits.cpp"
                                  ,0x4e7,"VertexEdgeLists.Remove(SplitInfo.OriginalVertex, EdgeID)")
             , bVar30)) {
            pcVar13 = (code *)swi(3);
            EVar18 = (*pcVar13)();
            return EVar18;
          }
          FSmallListSet::Insert(&this->VertexEdgeLists,param_3->NewVertex,uVar21);
        }
        else if (iVar10 == param_3->OriginalVertex) {
          if (iVar27 < iVar15) {
            iVar20 = iVar15;
          }
          if (iVar15 < iVar27) {
            iVar27 = iVar15;
          }
          goto LAB_14354a522;
        }
      }
      *(int *)(*(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar6) +
              lVar26 * 4 + (ulonglong)(uVar9 & 0x1ff) * 0xc) = param_3->NewVertex;
      uVar9 = param_3->OriginalVertex;
      lVar6 = (ulonglong)(uVar9 >> 9) * 8;
      lVar7 = (ulonglong)(uVar9 & 0x1ff) * 2;
      psVar5 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar6)
                        + lVar7);
      *psVar5 = *psVar5 + -1;
      if (*(short *)(lVar7 + *(longlong *)
                              ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              lVar6)) == 0) {
        uVar21 = (this->VertexRefCounts).FreeIndices.CurBlockUsed;
        if (uVar21 == 0x200) {
          if ((this->VertexRefCounts).FreeIndices.CurBlock ==
              (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&(this->VertexRefCounts).FreeIndices);
          }
          pTVar1 = &(this->VertexRefCounts).FreeIndices;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar21 = 0;
          (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
        }
        *(uint *)(*(longlong *)
                   ((this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data +
                   (longlong)(int)(this->VertexRefCounts).FreeIndices.CurBlock * 8) +
                 (longlong)(int)uVar21 * 4) = uVar9;
        puVar4 = &(this->VertexRefCounts).FreeIndices.CurBlockUsed;
        *puVar4 = *puVar4 + 1;
        *(undefined2 *)
         (lVar7 + *(longlong *)
                   ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar6)) =
             0xffff;
        piVar29 = &(this->VertexRefCounts).UsedCount;
        *piVar29 = *piVar29 + -1;
      }
      psVar5 = (short *)(*(longlong *)
                          ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_3->NewVertex >> 9) * 8) +
                        (ulonglong)(param_3->NewVertex & 0x1ff) * 2);
      *psVar5 = *psVar5 + 1;
    }
    else {
      if ((int)((ulonglong)local_60 >> 0x20) == param_1) goto LAB_14354a271;
      local_60 = uVar14;
      if (local_58 == param_1) {
        iVar15 = 2;
        goto LAB_14354a271;
      }
    }
    puVar23 = puVar23 + 1;
  } while( true );
}

// SplitVertexWouldLeaveIsolated @ 14354a790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMesh3::SplitVertexWouldLeaveIsolated
          (FDynamicMesh3 *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [48];
  ValueIterator local_188;
  ValueIterator local_160;
  undefined1 local_138 [144];
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  VtxTrianglesItr(this,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                       local_1b8,param_1);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_138,&local_188
             ,&local_160,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1b8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_a8,&local_160,
             &local_160,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1b8);
  while ((((local_138._0_8_ != local_a8._0_8_ || (local_138._8_4_ != local_a8._8_4_)) ||
          (local_138._24_4_ != local_a8._24_4_)) || (local_138._28_4_ != local_a8._28_4_))) {
    piVar2 = param_2->DataPtr;
    piVar1 = piVar2 + param_2->ArrayNum;
    while( true ) {
      if (piVar2 == piVar1) {
        if (local_a8._96_8_ != 0) {
          plVar3 = (longlong *)(local_a8 + 0x70);
          if ((longlong *)local_a8._136_8_ != (longlong *)0x0) {
            plVar3 = (longlong *)local_a8._136_8_;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_138._96_8_ != 0) {
          plVar3 = (longlong *)(local_138 + 0x70);
          if ((longlong *)local_138._136_8_ != (longlong *)0x0) {
            plVar3 = (longlong *)local_138._136_8_;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_1b8._0_8_ != 0) {
          plVar3 = (longlong *)(local_1b8 + 0x10);
          if ((longlong *)local_1b8._40_8_ != (longlong *)0x0) {
            plVar3 = (longlong *)local_1b8._40_8_;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        return false;
      }
      if (*piVar2 == (int)local_138._88_8_) break;
      piVar2 = piVar2 + 1;
    }
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_138);
  }
  if (local_a8._96_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x70);
    if ((longlong *)local_a8._136_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._136_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_138._96_8_ != 0) {
    plVar3 = (longlong *)(local_138 + 0x70);
    if ((longlong *)local_138._136_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_138._136_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_1b8._0_8_ != 0) {
    plVar3 = (longlong *)(local_1b8 + 0x10);
    if ((longlong *)local_1b8._40_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_1b8._40_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return true;
}

// TriangleHasVertex @ 143552b70

bool __thiscall
UE::Geometry::FDynamicMesh3::TriangleHasVertex(FDynamicMesh3 *this,int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = *(longlong *)
           ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  if (((*(int *)(lVar1 + uVar2 * 0xc) != param_2) && (*(int *)(lVar1 + 4 + uVar2 * 0xc) != param_2))
     && (*(int *)(lVar1 + 8 + uVar2 * 0xc) != param_2)) {
    return false;
  }
  return true;
}

// UpdateChangeStamps @ 143556450

void __thiscall
UE::Geometry::FDynamicMesh3::UpdateChangeStamps(FDynamicMesh3 *this,bool param_1,bool param_2)

{
  FMutex *pFVar1;
  uint *puVar2;
  atomic<unsigned_char> aVar3;
  bool bVar4;
  
  if ((param_1) || (param_2)) {
    if ((this->ChangeStampShape).bIsEnabled != false) {
      pFVar1 = &(this->ChangeStampShape).Mutex;
      LOCK();
      bVar4 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar4) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar4) {
        FMutex::LockSlow(pFVar1);
      }
      puVar2 = &(this->ChangeStampShape).Value;
      *puVar2 = *puVar2 + 1;
      LOCK();
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
    if ((param_2) && ((this->ChangeStampTopology).bIsEnabled != false)) {
      pFVar1 = &(this->ChangeStampTopology).Mutex;
      LOCK();
      bVar4 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar4) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar4) {
        FMutex::LockSlow(pFVar1);
      }
      puVar2 = &(this->ChangeStampTopology).Value;
      *puVar2 = *puVar2 + 1;
      LOCK();
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar1);
      }
    }
  }
  return;
}

// VtxTrianglesItr @ 143557750

TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> * __thiscall
UE::Geometry::FDynamicMesh3::VtxTrianglesItr
          (FDynamicMesh3 *this,
          TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *__return_storage_ptr__,
          int param_1)

{
  FSmallListSet *pFVar1;
  undefined ***pppuVar2;
  BaseValueIterator local_68;
  code *local_38 [2];
  undefined **local_28;
  FDynamicMesh3 *local_20;
  int local_18;
  undefined ***local_10;
  
  *(undefined8 *)&__return_storage_ptr__->ExpandFunc = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  pFVar1 = &this->VertexEdgeLists;
  *(undefined8 *)&(__return_storage_ptr__->ExpandFunc).field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->BeginItr = 0;
  *(undefined4 *)&(__return_storage_ptr__->BeginItr).field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->EndItr = 0;
  *(undefined4 *)&(__return_storage_ptr__->EndItr).field_0x8 = 0;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                ::Call;
  local_10 = (undefined ***)0x0;
  local_20 = this;
  local_18 = param_1;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_68,pFVar1,param_1,false);
  *(FSmallListSet **)&__return_storage_ptr__->BeginItr = local_68.ListSet;
  *(ulonglong *)&(__return_storage_ptr__->BeginItr).field_0x8 =
       CONCAT44(local_68.block_ptr,local_68.ListIndex);
  local_68.block_ptr = -1;
  *(ulonglong *)&(__return_storage_ptr__->BeginItr).field_0x10 = CONCAT44(local_68.iEnd,local_68.N);
  *(int *)&(__return_storage_ptr__->BeginItr).field_0x18 = local_68.iCur;
  *(int *)&(__return_storage_ptr__->BeginItr).field_0x1c = local_68.cur_ptr;
  local_68.N = 0;
  *(int *)&(__return_storage_ptr__->BeginItr).field_0x20 = local_68.cur_value;
  *(undefined4 *)&(__return_storage_ptr__->BeginItr).field_0x24 = local_68._36_4_;
  local_68.iCur = -1;
  local_68.cur_ptr = -1;
  *(FSmallListSet **)&__return_storage_ptr__->EndItr = pFVar1;
  *(ulonglong *)&(__return_storage_ptr__->EndItr).field_0x8 = CONCAT44(0xffffffff,param_1);
  *(ulonglong *)&(__return_storage_ptr__->EndItr).field_0x10 =
       (ulonglong)(uint)local_68.iEnd << 0x20;
  *(undefined8 *)&(__return_storage_ptr__->EndItr).field_0x18 = 0xffffffffffffffff;
  *(int *)&(__return_storage_ptr__->EndItr).field_0x20 = local_68.cur_value;
  *(undefined4 *)&(__return_storage_ptr__->EndItr).field_0x24 = local_68._36_4_;
  local_68.ListSet = pFVar1;
  local_68.ListIndex = param_1;
  TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
            (&__return_storage_ptr__->ExpandFunc,
             (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_38);
  if (local_38[0] != (code *)0x0) {
    pppuVar2 = &local_28;
    if (local_10 != (undefined ***)0x0) {
      pppuVar2 = local_10;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return __return_storage_ptr__;
}

// VtxVerticesItr @ 143557870

MappedValueEnumerable * __thiscall
UE::Geometry::FDynamicMesh3::VtxVerticesItr
          (FDynamicMesh3 *this,MappedValueEnumerable *__return_storage_ptr__,int param_1)

{
  FFunctionStorage *pFVar1;
  longlong lVar2;
  FFunctionStorage *pFVar3;
  undefined ***pppuVar4;
  undefined8 uStack_70;
  FFunctionStorage local_68;
  int local_48;
  undefined4 uStack_44;
  FDynamicMesh3 *pFStack_40;
  code *local_38;
  undefined **local_28;
  undefined8 local_20;
  FDynamicMesh3 *pFStack_18;
  undefined ***local_10;
  
  local_20 = CONCAT44(uStack_44,param_1);
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = (undefined ***)0x0;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
             ::Call;
  local_68.HeapAllocation = (void *)0x0;
  local_48 = param_1;
  pFStack_40 = this;
  pFStack_18 = this;
  Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_28,&local_68);
  __return_storage_ptr__->ListSet = &this->VertexEdgeLists;
  *(undefined8 *)&__return_storage_ptr__->MapFunc = 0;
  *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x28 = 0;
  __return_storage_ptr__->ListIndex = param_1;
  lVar2 = *(longlong *)&__return_storage_ptr__->MapFunc;
  pFVar1 = *(FFunctionStorage **)&(__return_storage_ptr__->MapFunc).field_0x28;
  *(code **)&__return_storage_ptr__->MapFunc =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>::
       Call;
  *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x8 = uStack_70;
  (__return_storage_ptr__->MapFunc).field_0x10 = local_68.InlineAllocation[0];
  (__return_storage_ptr__->MapFunc).field_0x11 = local_68.InlineAllocation[1];
  (__return_storage_ptr__->MapFunc).field_0x12 = local_68.InlineAllocation[2];
  (__return_storage_ptr__->MapFunc).field_0x13 = local_68.InlineAllocation[3];
  (__return_storage_ptr__->MapFunc).field_0x14 = local_68.InlineAllocation[4];
  (__return_storage_ptr__->MapFunc).field_0x15 = local_68.InlineAllocation[5];
  (__return_storage_ptr__->MapFunc).field_0x16 = local_68.InlineAllocation[6];
  (__return_storage_ptr__->MapFunc).field_0x17 = local_68.InlineAllocation[7];
  (__return_storage_ptr__->MapFunc).field_0x18 = local_68.InlineAllocation[8];
  (__return_storage_ptr__->MapFunc).field_0x19 = local_68.InlineAllocation[9];
  (__return_storage_ptr__->MapFunc).field_0x1a = local_68.InlineAllocation[10];
  (__return_storage_ptr__->MapFunc).field_0x1b = local_68.InlineAllocation[0xb];
  (__return_storage_ptr__->MapFunc).field_0x1c = local_68.InlineAllocation[0xc];
  (__return_storage_ptr__->MapFunc).field_0x1d = local_68.InlineAllocation[0xd];
  (__return_storage_ptr__->MapFunc).field_0x1e = local_68.InlineAllocation[0xe];
  (__return_storage_ptr__->MapFunc).field_0x1f = local_68.InlineAllocation[0xf];
  (__return_storage_ptr__->MapFunc).field_0x20 = local_68.InlineAllocation[0x10];
  (__return_storage_ptr__->MapFunc).field_0x21 = local_68.InlineAllocation[0x11];
  (__return_storage_ptr__->MapFunc).field_0x22 = local_68.InlineAllocation[0x12];
  (__return_storage_ptr__->MapFunc).field_0x23 = local_68.InlineAllocation[0x13];
  (__return_storage_ptr__->MapFunc).field_0x24 = local_68.InlineAllocation[0x14];
  (__return_storage_ptr__->MapFunc).field_0x25 = local_68.InlineAllocation[0x15];
  (__return_storage_ptr__->MapFunc).field_0x26 = local_68.InlineAllocation[0x16];
  (__return_storage_ptr__->MapFunc).field_0x27 = local_68.InlineAllocation[0x17];
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x28 = local_68.HeapAllocation._0_4_;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x2c = local_68.HeapAllocation._4_4_;
  local_68.InlineAllocation[0] = (__return_storage_ptr__->MapFunc).field_0x10;
  local_68.InlineAllocation[1] = (__return_storage_ptr__->MapFunc).field_0x11;
  local_68.InlineAllocation[2] = (__return_storage_ptr__->MapFunc).field_0x12;
  local_68.InlineAllocation[3] = (__return_storage_ptr__->MapFunc).field_0x13;
  local_68.InlineAllocation[4] = (__return_storage_ptr__->MapFunc).field_0x14;
  local_68.InlineAllocation[5] = (__return_storage_ptr__->MapFunc).field_0x15;
  local_68.InlineAllocation[6] = (__return_storage_ptr__->MapFunc).field_0x16;
  local_68.InlineAllocation[7] = (__return_storage_ptr__->MapFunc).field_0x17;
  local_68.InlineAllocation[8] = (__return_storage_ptr__->MapFunc).field_0x18;
  local_68.InlineAllocation[9] = (__return_storage_ptr__->MapFunc).field_0x19;
  local_68.InlineAllocation[10] = (__return_storage_ptr__->MapFunc).field_0x1a;
  local_68.InlineAllocation[0xb] = (__return_storage_ptr__->MapFunc).field_0x1b;
  local_68.InlineAllocation[0xc] = (__return_storage_ptr__->MapFunc).field_0x1c;
  local_68.InlineAllocation[0xd] = (__return_storage_ptr__->MapFunc).field_0x1d;
  local_68.InlineAllocation[0xe] = (__return_storage_ptr__->MapFunc).field_0x1e;
  local_68.InlineAllocation[0xf] = (__return_storage_ptr__->MapFunc).field_0x1f;
  local_68.InlineAllocation[0x10] = (__return_storage_ptr__->MapFunc).field_0x20;
  local_68.InlineAllocation[0x11] = (__return_storage_ptr__->MapFunc).field_0x21;
  local_68.InlineAllocation[0x12] = (__return_storage_ptr__->MapFunc).field_0x22;
  local_68.InlineAllocation[0x13] = (__return_storage_ptr__->MapFunc).field_0x23;
  local_68.InlineAllocation[0x14] = (__return_storage_ptr__->MapFunc).field_0x24;
  local_68.InlineAllocation[0x15] = (__return_storage_ptr__->MapFunc).field_0x25;
  local_68.InlineAllocation[0x16] = (__return_storage_ptr__->MapFunc).field_0x26;
  local_68.InlineAllocation[0x17] = (__return_storage_ptr__->MapFunc).field_0x27;
  local_68.HeapAllocation = pFVar1;
  if (lVar2 != 0) {
    pFVar3 = &local_68;
    if (pFVar1 != (FFunctionStorage *)0x0) {
      pFVar3 = pFVar1;
    }
    (**(code **)(*(longlong *)pFVar3->InlineAllocation + 0x10))();
  }
  if (local_38 != (code *)0x0) {
    pppuVar4 = &local_28;
    if (local_10 != (undefined ***)0x0) {
      pppuVar4 = local_10;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return __return_storage_ptr__;
}

// BoundaryEdgeIndicesItr @ 143578550

FilteredEnumerable * __thiscall
UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr
          (FDynamicMesh3 *this,FilteredEnumerable *__return_storage_ptr__)

{
  FFunctionStorage *pFVar1;
  undefined ***pppuVar2;
  undefined **local_58;
  FDynamicMesh3 *local_50;
  undefined ***local_40;
  code *local_38 [2];
  FFunctionStorage local_28;
  
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__BoundaryEdgeIndicesItr_FDynamicMesh3_Geometry_UE__QEBA_AVFilteredEnumerable_FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,bool,int>
                ::Call;
  local_40 = (undefined ***)0x0;
  local_28.HeapAllocation = (FFunctionStorage *)0x0;
  local_50 = this;
  Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_58,&local_28);
  *(undefined8 *)&__return_storage_ptr__->FilterFunc = 0;
  (__return_storage_ptr__->enumerable).Vector = &this->EdgeRefCounts;
  *(undefined8 *)&(__return_storage_ptr__->FilterFunc).field_0x28 = 0;
  TFunction<bool___cdecl(int)>::operator=
            (&__return_storage_ptr__->FilterFunc,(TFunction<bool___cdecl(int)> *)local_38);
  if (local_38[0] != (code *)0x0) {
    pFVar1 = &local_28;
    if (local_28.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar1 = local_28.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar1->InlineAllocation + 0x10))();
  }
  pppuVar2 = &local_58;
  if (local_40 != (undefined ***)0x0) {
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[2])();
  return __return_storage_ptr__;
}

// GetShapeChangeStamp @ 143607510

uint __thiscall UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(FDynamicMesh3 *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  if ((this->ChangeStampShape).bIsEnabled == false) {
    `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->ChangeStampShape).bIsEnabled == false) {
    return 1;
  }
  this_00 = &(this->ChangeStampShape).Mutex;
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(this_00);
  }
  uVar2 = (this->ChangeStampShape).Value;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return uVar2;
}

// GetTopologyChangeStamp @ 143607590

uint __thiscall UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(FDynamicMesh3 *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  if ((this->ChangeStampTopology).bIsEnabled == false) {
    `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->ChangeStampTopology).bIsEnabled == false) {
    return 1;
  }
  this_00 = &(this->ChangeStampTopology).Mutex;
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(this_00);
  }
  uVar2 = (this->ChangeStampTopology).Value;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return uVar2;
}

// operator() @ 15049f460

bool __thiscall
`UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_369676055734124007>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_369676055734124007>,
                       &`public:___cdecl_`public:_unsigned_int___cdecl_UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f520

bool __thiscall `UE::Geometry::FDynamicMesh3::Serialize'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<721570491596275981>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<721570491596275981>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15049fda0

bool __thiscall
`UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_369676055734124017>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_369676055734124017>,
                       &`public:___cdecl_`public:_unsigned_int___cdecl_UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

