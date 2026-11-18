// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 17

// ~FFoliageStaticMesh @ 145eda160

void __thiscall FFoliageStaticMesh::~FFoliageStaticMesh(FFoliageStaticMesh *this)

{
  this->_padding_ = (longlong)&___7ISMInstanceManager__6B_;
  this->_padding_ = (longlong)&___7FFoliageImpl__6B_;
  return;
}

// AddReferencedObjects @ 145ede3c0

void __thiscall
FFoliageStaticMesh::AddReferencedObjects
          (FFoliageStaticMesh *this,UObject *param_1,FReferenceCollector *param_2)

{
  if ((this->Component).field0_0x0.DebugPtr != (UHierarchicalInstancedStaticMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ede3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&this->Component,param_1,0);
    return;
  }
  return;
}

// CanEditSMInstance @ 145edf2a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FFoliageStaticMesh::CanEditSMInstance(FFoliageStaticMesh *this,FSMInstanceId *param_1)

{
  return false;
}

// CanMoveSMInstance @ 145edf2c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FFoliageStaticMesh::CanMoveSMInstance
          (FFoliageStaticMesh *this,FSMInstanceId *param_1,ETypedElementWorldType param_2)

{
  return false;
}

// DeleteSMInstances @ 145edfc60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FFoliageStaticMesh::DeleteSMInstances
          (FFoliageStaticMesh *this,TArrayView<FSMInstanceId_const_,int> *param_1)

{
  return false;
}

// DuplicateSMInstances @ 145ee04e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FFoliageStaticMesh::DuplicateSMInstances
          (FFoliageStaticMesh *this,TArrayView<FSMInstanceId_const_,int> *param_1,
          TArray<FSMInstanceId,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetOverlappingBoxCount @ 145ee4250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FFoliageStaticMesh::GetOverlappingBoxCount(FFoliageStaticMesh *this,TBox<double> *param_1)

{
  double *pdVar1;
  UHierarchicalInstancedStaticMeshComponent *pUVar2;
  UStaticMesh *this_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType this_01;
  int iVar18;
  TTransform<double> *pTVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_1c8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> TStack_1c0;
  TVector<double>_u_0 TStack_1b0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  TMatrix<double> aTStack_178 [2];
  
  pUVar2 = (this->Component).field0_0x0.DebugPtr;
  if ((pUVar2 != (UHierarchicalInstancedStaticMeshComponent *)0x0) && (!pUVar2->bIsOutOfDate)) {
    TStack_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_1c0.ArrayNum = 0;
    TStack_1c0.ArrayMax = 0;
    GatherInstanceTransformsInArea(pUVar2,param_1,0,&TStack_1c0);
    this_00 = *(UStaticMesh **)&pUVar2->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UStaticMesh::GetBounds(this_00,(TBoxSphereBounds<double,double> *)&TStack_1b0._s_0);
    uVar14 = _UNK_15061cc8c;
    uVar13 = _UNK_15061cc88;
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar15 = TStack_1c0.ArrayNum;
    uVar17 = (ulonglong)TStack_1c0.ArrayNum;
    pTVar19 = (TTransform<double> *)(TStack_1c0.AllocatorInstance.Data + uVar17 * 0x60);
    this_01.Data = TStack_1c0.AllocatorInstance.Data;
    iVar16 = 0;
    while( true ) {
      iVar18 = iVar16;
      if ((int)uVar17 != iVar15) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(auStack_1c8);
      }
      if ((TTransform<double> *)this_01.Data == pTVar19) break;
      UE::Math::TTransform<double>::ToMatrixWithScale
                ((TTransform<double> *)this_01.Data,aTStack_178);
      dVar5 = (double)CONCAT44((uint)((ulonglong)(dStack_190 * aTStack_178[0].M[1][0]) >> 0x20) &
                               uVar12,SUB84(dStack_190 * aTStack_178[0].M[1][0],0) & uVar11) +
              (double)CONCAT44((uint)((ulonglong)(dStack_198 * aTStack_178[0].M[0][0]) >> 0x20) &
                               uVar12,SUB84(dStack_198 * aTStack_178[0].M[0][0],0) & uVar11) +
              (double)CONCAT44((uint)((ulonglong)(dStack_188 * aTStack_178[0].M[2][0]) >> 0x20) &
                               uVar12,SUB84(dStack_188 * aTStack_178[0].M[2][0],0) & uVar11);
      dVar6 = (double)CONCAT44((uint)((ulonglong)(dStack_190 * aTStack_178[0].M[1][1]) >> 0x20) &
                               uVar14,SUB84(dStack_190 * aTStack_178[0].M[1][1],0) & uVar13) +
              (double)CONCAT44((uint)((ulonglong)(dStack_198 * aTStack_178[0].M[0][1]) >> 0x20) &
                               uVar14,SUB84(dStack_198 * aTStack_178[0].M[0][1],0) & uVar13) +
              (double)CONCAT44((uint)((ulonglong)(dStack_188 * aTStack_178[0].M[2][1]) >> 0x20) &
                               uVar14,SUB84(dStack_188 * aTStack_178[0].M[2][1],0) & uVar13);
      dVar7 = (double)CONCAT44((uint)((ulonglong)(dStack_190 * aTStack_178[0].M[1][2]) >> 0x20) &
                               uVar12,SUB84(dStack_190 * aTStack_178[0].M[1][2],0) & uVar11) +
              (double)CONCAT44((uint)((ulonglong)(dStack_198 * aTStack_178[0].M[0][2]) >> 0x20) &
                               uVar12,SUB84(dStack_198 * aTStack_178[0].M[0][2],0) & uVar11) +
              (double)CONCAT44((uint)((ulonglong)(dStack_188 * aTStack_178[0].M[2][2]) >> 0x20) &
                               uVar12,SUB84(dStack_188 * aTStack_178[0].M[2][2],0) & uVar11);
      dVar3 = TStack_1b0._s_0.Y * aTStack_178[0].M[1][0] +
              TStack_1b0._s_0.X * aTStack_178[0].M[0][0] +
              TStack_1b0._s_0.Z * aTStack_178[0].M[2][0] + aTStack_178[0].M[3][0];
      dVar4 = TStack_1b0._s_0.Y * aTStack_178[0].M[1][1] +
              TStack_1b0._s_0.X * aTStack_178[0].M[0][1] +
              TStack_1b0._s_0.Z * aTStack_178[0].M[2][1] + aTStack_178[0].M[3][1];
      dVar8 = TStack_1b0._s_0.Y * aTStack_178[0].M[1][2] +
              TStack_1b0._s_0.X * aTStack_178[0].M[0][2] +
              TStack_1b0._s_0.Z * aTStack_178[0].M[2][2] + aTStack_178[0].M[3][2];
      dVar21 = dVar3 - dVar5;
      dVar20 = dVar4 - dVar6;
      dVar9 = dVar8 - dVar7;
      if ((((dVar3 + dVar5 < (param_1->Min).field0_0x0._s_0.X) ||
           ((param_1->Max).field0_0x0._s_0.X <= dVar21 && dVar21 != (param_1->Max).field0_0x0._s_0.X
           )) || (dVar4 + dVar6 < (param_1->Min).field0_0x0._s_0.Y)) ||
         (((pdVar1 = &(param_1->Max).field0_0x0._s_0.Y, *pdVar1 <= dVar20 && dVar20 != *pdVar1 ||
           (dVar8 + dVar7 < (param_1->Min).field0_0x0._s_0.Z)) ||
          (pdVar1 = &(param_1->Max).field0_0x0._s_0.Z, *pdVar1 <= dVar9 && dVar9 != *pdVar1)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      this_01.Data = this_01.Data + 0x60;
      uVar17 = TStack_1c0._8_8_ & 0xffffffff;
      iVar16 = iVar18 + 1;
      if (!bVar10) {
        iVar16 = iVar18;
      }
    }
    if ((TTransform<double> *)TStack_1c0.AllocatorInstance.Data != (TTransform<double> *)0x0) {
      FMemory::Free(TStack_1c0.AllocatorInstance.Data);
    }
    return iVar18;
  }
  return 0;
}

// GetOverlappingBoxTransforms @ 145ee4350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FFoliageStaticMesh::GetOverlappingBoxTransforms
          (FFoliageStaticMesh *this,TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  UHierarchicalInstancedStaticMeshComponent *pUVar1;
  UStaticMesh *this_00;
  <lambda_1> <Stack_58;
  TBoxSphereBounds<double,double> TStack_48;
  
  pUVar1 = (this->Component).field0_0x0.DebugPtr;
  if ((pUVar1 != (UHierarchicalInstancedStaticMeshComponent *)0x0) && (!pUVar1->bIsOutOfDate)) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    GatherInstanceTransformsInArea(pUVar1,param_1,0,param_2);
    this_00 = *(UStaticMesh **)&pUVar1->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UStaticMesh::GetBounds(this_00,&TStack_48);
    <Stack_58.MeshBounds = &TStack_48;
    <Stack_58.Box = param_1;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_UHierarchicalInstancedStaticMeshComponent::GetOverlappingBoxTransforms_::__l2::<lambda_1>_>
              (param_2,&<Stack_58,Default);
    return;
  }
  return;
}

// GetOverlappingMeshCount @ 145ee43a0

void __thiscall
FFoliageStaticMesh::GetOverlappingMeshCount
          (FFoliageStaticMesh *this,TSphere<double> *param_1,
          TMap<UStaticMesh_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>_>
          *param_2)

{
  UObject *pUVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_res8 [2];
  UObject *local_res20;
  UObject **local_18 [2];
  
  iVar2 = (**(code **)(this->_padding_ + 0x28))();
  if (0 < iVar2) {
    pUVar1 = *(UObject **)&((this->Component).field0_0x0.DebugPtr)->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    uVar5 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar6 = *(undefined1 **)&param_2->field_0x40;
      if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
        puVar6 = &param_2->field_0x38;
      }
      iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar5) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)param_2 + (longlong)iVar3 * 0x18;
          if (*(UObject **)(*(longlong *)param_2 + (longlong)iVar3 * 0x18) == pUVar1) {
            if (lVar4 != 0) goto LAB_145ee44a4;
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x10);
        } while (iVar3 != -1);
      }
    }
    local_18[0] = &local_res20;
    local_res20 = pUVar1;
    TSet<TTuple<UStaticMesh_*,int>,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UStaticMesh_*_const_&>_>
              ((TSet<TTuple<UStaticMesh_*,int>,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>,FDefaultSetAllocator>
                *)param_2,(uint)local_res8,
               (TKeyInitializer<UStaticMesh_*_const_&> *)(ulonglong)uVar5,(bool *)local_18);
    lVar4 = *(longlong *)param_2 + (longlong)local_res8[0] * 0x18;
LAB_145ee44a4:
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + iVar2;
  }
  return;
}

// GetOverlappingSphereCount @ 145ee47e0

int __thiscall
FFoliageStaticMesh::GetOverlappingSphereCount(FFoliageStaticMesh *this,TSphere<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  UHierarchicalInstancedStaticMeshComponent *pUVar5;
  UStaticMesh *this_00;
  double dVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStackX_8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> TStack_e8;
  TVector<double>_u_0 TStack_d8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined1 uStack_a8;
  TBoxSphereBounds<double,double> aTStack_88 [2];
  
  pUVar5 = (this->Component).field0_0x0.DebugPtr;
  if ((pUVar5 != (UHierarchicalInstancedStaticMeshComponent *)0x0) && (!pUVar5->bIsOutOfDate)) {
    dVar2 = param_1->W;
    dStack_c0 = (param_1->Center).field0_0x0._s_0.X;
    dStack_b8 = (param_1->Center).field0_0x0._s_0.Y;
    dStack_b0 = (param_1->Center).field0_0x0._s_0.Z;
    TStack_d8._s_0.X = dStack_c0 - dVar2;
    dStack_c0 = dStack_c0 + dVar2;
    TStack_d8._s_0.Y = dStack_b8 - dVar2;
    dStack_b8 = dStack_b8 + dVar2;
    TStack_d8._s_0.Z = dStack_b0 - dVar2;
    dStack_b0 = dStack_b0 + dVar2;
    TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_e8.ArrayNum = 0;
    TStack_e8.ArrayMax = 0;
    uStack_a8 = 1;
    GatherInstanceTransformsInArea(pUVar5,(TBox<double> *)&TStack_d8._s_0,0,&TStack_e8);
    this_00 = *(UStaticMesh **)&pUVar5->field_0x5a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UStaticMesh::GetBounds(this_00,aTStack_88);
    dVar2 = __real_3f1a36e2e0000000;
    iVar8 = TStack_e8.ArrayNum;
    uVar10 = (ulonglong)TStack_e8.ArrayNum;
    pFVar13 = TStack_e8.AllocatorInstance.Data + 0x40;
    pFVar11 = TStack_e8.AllocatorInstance.Data + uVar10 * 0x60;
    iVar9 = 0;
    while( true ) {
      iVar12 = iVar9;
      if ((int)uVar10 != iVar8) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(auStackX_8);
        uVar10 = TStack_e8._8_8_ & 0xffffffff;
      }
      if (pFVar13 + -0x40 == pFVar11) break;
      auVar3 = *(undefined1 (*) [16])pFVar13;
      pFVar7 = pFVar13 + -0x18;
      auVar4 = *(undefined1 (*) [16])(pFVar13 + 0x10);
      pFVar1 = pFVar13 + -0x10;
      dVar15 = (param_1->Center).field0_0x0._s_0.X - *(double *)(pFVar13 + -0x20);
      pFVar13 = pFVar13 + 0x60;
      dVar14 = (param_1->Center).field0_0x0._s_0.Z - *(double *)pFVar1;
      dVar16 = (param_1->Center).field0_0x0._s_0.Y - *(double *)pFVar7;
      uVar17 = auVar3._0_4_;
      uVar18 = auVar3._4_4_;
      if (auVar3._0_8_ <= auVar3._8_8_) {
        uVar17 = auVar3._8_4_;
        uVar18 = auVar3._12_4_;
      }
      if ((double)CONCAT44(uVar18,uVar17) <= auVar4._0_8_) {
        uVar17 = auVar4._0_4_;
        uVar18 = auVar4._4_4_;
      }
      dVar6 = (double)CONCAT44(uVar18,uVar17) * aTStack_88[0].SphereRadius + param_1->W + dVar2;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      iVar9 = iVar12 + 1;
      if (dVar6 * dVar6 < dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14) {
        iVar9 = iVar12;
      }
    }
    if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_e8.AllocatorInstance.Data);
    }
    return iVar12;
  }
  return 0;
}

// GetSMInstanceTransform @ 145ee5e60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FFoliageStaticMesh::GetSMInstanceTransform
          (FFoliageStaticMesh *this,FSMInstanceId *param_1,TTransform<double> *param_2,bool param_3)

{
  return false;
}

// NotifySMInstanceMovementEnded @ 145ee7d00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFoliageStaticMesh::NotifySMInstanceMovementEnded(FFoliageStaticMesh *this,FSMInstanceId *param_1)

{
  return;
}

// NotifySMInstanceMovementOngoing @ 145ee7d10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFoliageStaticMesh::NotifySMInstanceMovementOngoing(FFoliageStaticMesh *this,FSMInstanceId *param_1)

{
  return;
}

// NotifySMInstanceMovementStarted @ 145ee7d20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFoliageStaticMesh::NotifySMInstanceMovementStarted(FFoliageStaticMesh *this,FSMInstanceId *param_1)

{
  return;
}

// NotifySMInstanceSelectionChanged @ 145ee7d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFoliageStaticMesh::NotifySMInstanceSelectionChanged
          (FFoliageStaticMesh *this,FSMInstanceId *param_1,bool param_2)

{
  return;
}

// Serialize @ 145eeb260

void __thiscall FFoliageStaticMesh::Serialize(FFoliageStaticMesh *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145eeb26d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Component);
  return;
}

// SetSMInstanceTransform @ 145eeb680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FFoliageStaticMesh::SetSMInstanceTransform
          (FFoliageStaticMesh *this,FSMInstanceId *param_1,TTransform<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  return false;
}

