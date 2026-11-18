// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 16

// Call @ 14e93b670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14e93b680

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FSplitMeshIslandsDataflowNode::Evaluate'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::FSizedDisjointSet::Find
                    (*(FSizedDisjointSet **)param_1,
                     *(int *)(*(longlong *)
                               (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x130) +
                               (ulonglong)((uint)*param_2 >> 9) * 8) +
                             (ulonglong)(*param_2 & 0x1ff) * 0xc));
  return iVar1;
}

// Call @ 14e93b6c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::PairedGeometryTransfer'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Private::PairedGeometryTransfer'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e93b6d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSphereCoveringToMeshDataflowNode::Evaluate'::__l7::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = *(double *)((longlong)param_1 + 8) + (param_3->field0_0x0)._s_0.Y;
  dVar1 = *(double *)((longlong)param_1 + 0x10);
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = *(double *)param_1 + (param_3->field0_0x0)._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 + dVar2;
  return __return_storage_ptr__;
}

// Call @ 14e93b700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar11;
  bool bVar12;
  ulong64 uVar13;
  byte bVar14;
  uint uVar15;
  byte bVar17;
  ulonglong uVar18;
  byte bVar19;
  char cVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_238 [32];
  <lambda_1> <Stack_1f8;
  TArray<bool,TSizedDefaultAllocator<32>_> TStack_1f0;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> TStack_1e0;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTStack_1a8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTStack_1a0;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *pTStack_198;
  undefined8 uStack_190;
  byte bStack_188;
  byte bStack_187;
  byte bStack_186;
  undefined1 uStack_185;
  undefined1 uStack_184;
  char cStack_183;
  undefined8 uStack_180;
  <lambda_1> <Stack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_160;
  TArrayView<std::nullptr_t,int> TStack_158;
  code *pcStack_148;
  TArray<bool,TSizedDefaultAllocator<32>_> **ppTStack_140;
  undefined1 auStack_138 [48];
  undefined **ppuStack_108;
  code *pcStack_100;
  undefined8 uStack_f0;
  double dStack_e8;
  TDynamicVector<int,512> TStack_e0;
  TDynamicVector<UE::Math::TVector<double>,512> TStack_c8;
  TDynamicVector<UE::Math::TVector<double>,512> TStack_b0;
  TDynamicVector<int,512> TStack_98;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong uVar16;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar19 = *(byte *)(*(longlong *)((longlong)param_1 + 0x30) + 0x250);
  bVar17 = bVar19 >> 1 & 1;
  bVar14 = bVar19 >> 2 & 1;
  bVar19 = bVar19 & 1;
  if (((bVar19 == 0) && (bVar17 == 0)) && (bVar14 == 0)) {
    return;
  }
  dVar23 = *(double *)((longlong)param_1 + 0x18);
  uVar15 = SUB84(dVar23,0);
  uVar26 = (uint)((ulonglong)dVar23 >> 0x20);
  dVar4 = *(double *)((longlong)param_1 + 0x20);
  uVar27 = SUB84(dVar4,0);
  uVar28 = (uint)((ulonglong)dVar4 >> 0x20);
  uVar29 = 0;
  uVar30 = 0;
  if (*(char *)((longlong)param_1 + 0x28) == '\0') {
    if (dVar23 <= 0.0) {
      uVar15 = 0;
      uVar26 = 0;
    }
    if (dVar4 <= 0.0) {
      uVar27 = 0;
      uVar28 = 0;
    }
  }
  if (((bVar17 != 0) && (bVar14 != 0)) &&
     ((double)CONCAT44(uVar28,uVar27) <= (double)CONCAT44(uVar26,uVar15) &&
      (double)CONCAT44(uVar26,uVar15) != (double)CONCAT44(uVar28,uVar27))) {
    pFVar5 = *(ForAnyElementType **)param_1;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    *(undefined4 *)&pFVar5[1].Data = 0;
    if (*piVar1 == 0) {
      return;
    }
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>(0x18,8,0,pFVar5,0,piVar1);
    return;
  }
  if ((bVar19 == 0) && (*(char *)((longlong)param_1 + 0x28) == '\0')) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01';
  }
  if ((bVar17 == 0) && (bVar14 == 0)) {
    <Stack_1f8 = (<lambda_1>)0x0;
  }
  else {
    <Stack_1f8 = (<lambda_1>)0x1;
    if (bVar14 != 0) {
      dVar23 = (double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                uVar27 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      goto LAB_14e9361de;
    }
  }
  dVar23 = 0.0;
LAB_14e9361de:
  if (bVar17 != 0) {
    uVar29 = uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  }
  uVar16 = 0;
  auStack_138._24_4_ = 3;
  auStack_138._16_8_ = 0;
  auStack_138._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((double)CONCAT44(uVar30,uVar29) <= dVar23) {
    uVar29 = SUB84(dVar23,0);
    uVar30 = (uint)((ulonglong)dVar23 >> 0x20);
  }
  ppuStack_108 = &
                 ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  dStack_e8 = __real_3e45798ee2308c3a;
  pcStack_100 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  auStack_138._32_8_ =
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  uStack_f0 = 0;
  TStack_e0.CurBlock = 0;
  TStack_e0.CurBlockUsed = 0;
  TStack_e0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e0.Blocks.ArrayNum = 0;
  TStack_e0.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&TStack_e0);
  TStack_c8.CurBlock = 0;
  TStack_c8.CurBlockUsed = 0;
  TStack_c8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_c8.Blocks.ArrayNum = 0;
  TStack_c8.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&TStack_c8);
  TStack_b0.CurBlock = 0;
  TStack_b0.CurBlockUsed = 0;
  TStack_b0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_b0.Blocks.ArrayNum = 0;
  TStack_b0.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&TStack_b0);
  TStack_98.CurBlock = 0;
  TStack_98.CurBlockUsed = 0;
  TStack_98.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_98.Blocks.ArrayNum = 0;
  TStack_98.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&TStack_98);
  lStack_80 = -1;
  auStack_138._16_8_ = 0;
  auStack_138._8_8_ = param_2;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)auStack_138,false);
  auStack_138._16_8_ =
       UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)auStack_138._8_8_);
  TStack_1e0.FWNBeta = __real_4000000000000000;
  TStack_1e0.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1e0.FastWindingCache.ArrayNum = 0;
  TStack_1e0.FastWindingCache.ArrayMax = 0;
  TStack_1e0.FastWindingCacheOffset = 0;
  TStack_1e0.FastWindingCacheMeshChangeStamp = 0;
  TStack_1e0.FWNApproxOrder = 2;
  TStack_1e0.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)auStack_138;
  if (cVar20 != '\0') {
    if ((lStack_80 < 0) ||
       (uVar13 = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)auStack_138._8_8_),
       auStack_138._16_8_ != uVar13)) {
      pTVar11 = TStack_1e0.Tree;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(TStack_1e0.Tree,false)
      ;
      uVar13 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar11->Mesh);
      pTVar11->MeshChangeStamp = uVar13;
    }
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
              (&TStack_1e0);
    TStack_1e0.FastWindingCacheMeshChangeStamp = (TStack_1e0.Tree)->MeshChangeStamp;
  }
  uVar24 = copysign((double)CONCAT44(uVar26,uVar15) * (double)CONCAT44(uVar26,uVar15));
  uVar25 = copysign((double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar28,uVar27));
  TStack_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_1f0.ArrayNum = 0;
  TStack_1f0.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&TStack_1f0,*(int *)(*(longlong *)param_1 + 8),Default);
  dStack_160 = (double)CONCAT44(uVar30,uVar29) + __real_3f1a36e2eb1c432d;
  uStack_180 = *(undefined8 *)((longlong)param_1 + 8);
  pTStack_1a8 = &TStack_1f0;
  pTStack_198 = &TStack_1e0;
  uStack_190 = *(undefined8 *)param_1;
  uStack_185 = *(undefined1 *)((longlong)param_1 + 0x28);
  uStack_184 = *(undefined1 *)((longlong)param_1 + 0x10);
  <Stack_178 = <Stack_1f8;
  pcStack_148 = TFunctionRefCaller<``FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
                ::Call;
  ppTStack_140 = &pTStack_1a8;
  TStack_158.DataPtr = (void **)0x0;
  TStack_158.ArrayNum = 0;
  pTStack_1a0 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)auStack_138;
  bStack_188 = bVar19;
  bStack_187 = bVar17;
  bStack_186 = bVar14;
  cStack_183 = cVar20;
  uStack_170 = uVar24;
  uStack_168 = uVar25;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",TStack_1f0.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&pcStack_148,<Stack_1f8,None,&TStack_158);
  uVar18 = uVar16;
  uVar21 = uVar16;
  uVar22 = uVar16;
  do {
    uVar15 = (uint)uVar16;
    if ((int)uVar15 < *(int *)(*(longlong *)param_1 + 8)) {
      do {
        uVar15 = (uint)uVar16;
        uVar26 = 0;
        if ((int)uVar15 < TStack_1f0.ArrayNum) {
          uVar26 = ~uVar15 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (TStack_1f0.AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) break;
        uVar15 = uVar15 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar18 = uVar18 + 1;
      } while ((int)uVar15 < *(int *)(*(longlong *)param_1 + 8));
    }
    this = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_1;
    uVar26 = (uint)uVar22;
    if (this->ArrayNum <= (int)uVar15) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(this,uVar26,Default);
      if (TStack_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_1f0.AllocatorInstance.Data);
      }
      if (TStack_1e0.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_1e0.FastWindingCache.AllocatorInstance.Data);
      }
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)auStack_138);
      return;
    }
    if (uVar15 != uVar26) {
      if (((int)uVar15 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data;
      plVar7 = *(longlong **)param_1;
      pFVar2 = pFVar6 + uVar18 * 0x18;
      uVar25 = *(undefined8 *)pFVar2;
      uVar10 = *(undefined8 *)(pFVar2 + 8);
      uVar24 = *(undefined8 *)(pFVar6 + uVar18 * 0x18 + 0x10);
      uVar27 = 0;
      if ((int)uVar26 < (int)plVar7[1]) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar8 = *plVar7;
      puVar3 = (undefined8 *)(lVar8 + uVar21);
      *puVar3 = uVar25;
      puVar3[1] = uVar10;
      *(undefined8 *)(lVar8 + 0x10 + uVar21) = uVar24;
    }
    uVar22 = (ulonglong)(uVar26 + 1);
    uVar21 = uVar21 + 0x18;
    uVar16 = (ulonglong)(uVar15 + 1);
    uVar18 = uVar18 + 1;
  } while( true );
}

// Call @ 14e93b710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMakeDataflowMeshDataflowNode::Evaluate'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UDataflowMesh::SetDynamicMesh<UE::Geometry::FDynamicMesh3_const_&>
            (*(UDataflowMesh **)param_1,param_2);
  return;
}

// Call @ 14e93b720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAppendMeshesToCollectionDataflowNode::Evaluate'::__l18::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int iVar1;
  FToCollectionOptions local_res8 [4];
  
  local_res8[0].NewMeshParentIndex = *(int *)((longlong)param_1 + 0x10);
  local_res8[0].bDefaultFaceVisible = true;
  local_res8[0].bDefaultFaceInternal = false;
  local_res8[0].bAllowAppendAsRoot = false;
  iVar1 = UE::Geometry::FGeometryCollectionToDynamicMeshes::AppendMeshToCollection
                    ((FGeometryCollection *)**(undefined8 **)param_1,param_2,
                     &UE::Math::TTransform<double>::Identity,local_res8);
  if (iVar1 != -1) {
    if (**(char **)((longlong)param_1 + 8) == '\0') {
      **(int **)((longlong)param_1 + 0x18) = iVar1;
    }
    **(undefined1 **)((longlong)param_1 + 8) = 1;
  }
  return;
}

// Call @ 14e93b780

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::GlobalAssetTransfer'::__l21::<lambda_1>,bool,int,int>::Call
          (void *param_1,int *param_2,int *param_3)

{
  return true;
}

// Call @ 14e93b790

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Private::PairedGeometryTransfer'::__l2::<lambda_1>::operator()'::__l23::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return true;
}

// Call @ 14e93b7a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FApplyMeshProcessorToGeometryCollectionDataflowNode::Evaluate'::__l24::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),param_2);
  return;
}

// Call @ 14e93b7c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSplitMeshIslandsDataflowNode::Evaluate'::__l13::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UDynamicMesh *pUVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> TStack_78;
  FVertexConnectedComponents *pFStack_68;
  FDynamicMesh3 *pFStack_60;
  code *pcStack_58;
  FVertexConnectedComponents **ppFStack_50;
  FVertexConnectedComponents FStack_48;
  
  uVar9 = 0;
  TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_78.ArrayNum = 0;
  TStack_78.ArrayMax = 0;
  UE::Geometry::FVertexConnectedComponents::FVertexConnectedComponents
            (&FStack_48,
             (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->VertexRefCounts).RefCounts.CurBlockUsed);
  UE::Geometry::FVertexConnectedComponents::ConnectTriangles<UE::Geometry::FDynamicMesh3>
            (&FStack_48,param_2);
  if (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0x260) == '\x02') {
    UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>
              (&FStack_48,param_2,(double)*(float *)(*(longlong *)((longlong)param_1 + 8) + 0x264),2
              );
  }
  pFStack_68 = &FStack_48;
  ppFStack_50 = &pFStack_68;
  pcStack_58 = TFunctionRefCaller<``FSplitMeshIslandsDataflowNode::Evaluate'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
               ::Call;
  pFStack_60 = param_2;
  UE::Geometry::FDynamicMeshEditor::SplitMesh
            (param_2,&TStack_78,(TFunctionRef<int___cdecl(int)> *)&pcStack_58,-1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>::SetNum
            (*(TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> **)param_1,
             TStack_78.ArrayNum,Default);
  uVar11 = 0;
  uVar10 = uVar9;
  if (0 < TStack_78.ArrayNum) {
    do {
      pUVar5 = GetTransientPackageAsObject();
      pUVar6 = NewObject<UDynamicMesh>(pUVar5);
      plVar1 = *(longlong **)param_1;
      uVar8 = (uint)uVar9;
      uVar12 = ~uVar8 >> 0x1f;
      uVar7 = uVar11;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *plVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDynamicMesh *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar6);
      }
      *(UDynamicMesh **)(lVar2 + uVar10 * 8) = pUVar6;
      plVar1 = *(longlong **)param_1;
      uVar7 = uVar11;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = *(UDynamicMesh **)(*plVar1 + uVar10 * 8);
      uVar7 = uVar11;
      if ((int)uVar8 < TStack_78.ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UDynamicMesh::SetMesh
                (pUVar6,(FDynamicMesh3 *)
                        (TStack_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x230));
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 1;
    } while ((int)(uVar8 + 1) < TStack_78.ArrayNum);
  }
  if (FStack_48.DisjointSet.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.DisjointSet.Sizes.AllocatorInstance.Data);
  }
  if (FStack_48.DisjointSet.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.DisjointSet.Parents.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDynamicMesh3,int>
            ((FDynamicMesh3 *)TStack_78.AllocatorInstance.Data,TStack_78.ArrayNum);
  if ((FDynamicMesh3 *)TStack_78.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(TStack_78.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14e93b7d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCollectionToMeshDataflowNode::Evaluate'::__l14::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAxisAlignedBox3<double> *pTVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  TVector<double>_u_0 TStack_58;
  TAxisAlignedBox3<double> TStack_40;
  
  plVar7 = *(longlong **)((longlong)param_1 + 8);
  if (((int)plVar7[1] < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(param_2,*(FDynamicMesh3 **)(*plVar7 + 8));
  plVar7 = *(longlong **)((longlong)param_1 + 8);
  uVar5 = 1;
  if (1 < (int)plVar7[1]) {
    lVar6 = 0x70;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (int)plVar7[1]) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::Geometry::FDynamicMesh3::AppendWithOffsets
                (param_2,*(FDynamicMesh3 **)(lVar6 + 8 + *plVar7),(FAppendInfo *)0x0);
      plVar7 = *(longlong **)((longlong)param_1 + 8);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x70;
    } while ((int)uVar5 < (int)plVar7[1]);
  }
  if (*(char *)(*(longlong *)param_1 + 0x2f8) != '\0') {
    pTVar4 = UE::Geometry::FDynamicMesh3::GetBounds(param_2,&TStack_40,false);
    TStack_58._s_0.Y =
         ((pTVar4->Max).field0_0x0._s_0.Y + (pTVar4->Min).field0_0x0._s_0.Y) *
         __real_bfe0000000000000;
    TStack_58._s_0.X =
         ((pTVar4->Max).field0_0x0._s_0.X + (pTVar4->Min).field0_0x0._s_0.X) *
         __real_bfe0000000000000;
    TStack_58._s_0.Z =
         ((pTVar4->Max).field0_0x0._s_0.Z + (pTVar4->Min).field0_0x0._s_0.Z) *
         __real_bfe0000000000000;
    MeshTransforms::Translate(param_2,(TVector<double> *)&TStack_58._s_0,All);
  }
  return;
}

// Call @ 14e93b7e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshToCollectionDataflowNode::Evaluate'::__l14::<lambda_1>,int,int>::Call
          (void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::FSizedDisjointSet::Find
                    (*(FSizedDisjointSet **)param_1,
                     *(int *)(*(longlong *)
                               (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x130) +
                               (ulonglong)((uint)*param_2 >> 9) * 8) +
                             (ulonglong)(*param_2 & 0x1ff) * 0xc));
  return iVar1;
}

// Call @ 14e93b820

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_27_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14e93b830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGetConvexHullVolumeDataflowNode::Evaluate'::__l17::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FGetConvexHullVolumeDataflowNode::Evaluate'::__l17::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e93b840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGetConvexHullVolumeDataflowNode::Evaluate'::__l19::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FGetConvexHullVolumeDataflowNode::Evaluate'::__l19::<lambda_3>::operator()(param_1,*param_2);
  return;
}

