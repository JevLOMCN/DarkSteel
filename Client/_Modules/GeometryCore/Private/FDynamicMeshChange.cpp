// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 13

// ~FDynamicMeshChange @ 143454a60

void __thiscall UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(FDynamicMeshChange *this)

{
  FScriptContainerElement *pFVar1;
  
  TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>::operator()
            ((TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet> *)&this->AttributeChanges
             ,(this->AttributeChanges).Ptr);
  pFVar1 = (this->NewTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Apply @ 1434713e0

bool __thiscall
UE::Geometry::FDynamicMeshChange::Apply
          (FDynamicMeshChange *this,FDynamicMesh3 *param_1,bool param_2)

{
  FDynamicMeshAttributeChangeSet *this_00;
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshChange *pFVar3;
  
  pFVar3 = this;
  if (!param_2) {
    pFVar3 = (FDynamicMeshChange *)&this->NewVertices;
  }
  ApplyReplaceChange(this,param_1,&this->OldTriangles + (ulonglong)param_2 * 2,&pFVar3->OldVertices,
                     &this->OldTriangles + ((ulonglong)param_2 ^ 1) * 2);
  this_00 = (this->AttributeChanges).Ptr;
  if (this_00 != (FDynamicMeshAttributeChangeSet *)0x0) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    pFVar2 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = pFVar1;
    }
    FDynamicMeshAttributeChangeSet::Apply(this_00,pFVar2,param_2);
  }
  return true;
}

// ApplyReplaceChange @ 1434730f0

void __thiscall
UE::Geometry::FDynamicMeshChange::ApplyReplaceChange
          (FDynamicMeshChange *this,FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FDynamicMeshChange::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::FDynamicMeshChange::FChangeVertex,TSizedDefaultAllocator<32>_>
                   *param_3,
          TArray<UE::Geometry::FDynamicMeshChange::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_4)

{
  TVector2<float> *pTVar1;
  FMutex *this_00;
  uint *puVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  short sVar13;
  EMeshResult EVar14;
  ulonglong uVar15;
  FVertexInfo *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  iVar6 = param_2->ArrayNum;
  pFVar17 = (param_2->AllocatorInstance).Data;
  pFVar18 = pFVar17 + (longlong)iVar6 * 0x20;
  while( true ) {
    if (param_2->ArrayNum != iVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeTriangle_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar17 == pFVar18) break;
    EVar14 = FDynamicMesh3::RemoveTriangle(param_1,*(int *)pFVar17,true,false);
    if ((EVar14 != Ok) &&
       (bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1327787060794228987>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                            ,0xfb,"Result == EMeshResult::Ok"), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar17 = pFVar17 + 0x20;
  }
  (**(code **)(param_1->_padding_ + 8))();
  pFVar18 = (param_3->AllocatorInstance).Data;
  iVar6 = param_3->ArrayNum;
  pFVar16 = (FVertexInfo *)(pFVar18 + 8);
  pFVar17 = pFVar18 + (longlong)iVar6 * 0x48;
  do {
    while( true ) {
      if (param_3->ArrayNum != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeVertex_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar18 == pFVar17) {
        (**(code **)(param_1->_padding_ + 0x10))(param_1);
        (**(code **)(param_1->_padding_ + 0x18))(param_1);
        iVar6 = param_4->ArrayNum;
        pFVar17 = (param_4->AllocatorInstance).Data;
        pFVar18 = pFVar17 + (longlong)iVar6 * 0x20;
        while( true ) {
          if (param_4->ArrayNum != iVar6) {
            local_48[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeTriangle_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_48);
          }
          if (pFVar17 == pFVar18) break;
          EVar14 = FDynamicMesh3::InsertTriangle
                             (param_1,*(int *)pFVar17,(FIndex3i *)(pFVar17 + 4),
                              *(int *)(pFVar17 + 0x1c),true);
          if ((EVar14 != Ok) &&
             (bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1327787060794229039>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                                  ,0x12f,"Result == EMeshResult::Ok"), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar17 = pFVar17 + 0x20;
        }
                    /* WARNING: Could not recover jumptable at 0x000143473452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1->_padding_ + 0x20))();
        return;
      }
      uVar7 = *(uint *)pFVar18;
      if (((int)uVar7 < 0) ||
         ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar7)) break;
      uVar15 = (ulonglong)(uVar7 & 0x1ff);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                                      uVar15 * 2) - 1U)) break;
      sVar13 = _dclass((pFVar16->Position).field0_0x0._s_0.X);
      if (((sVar13 < 1) && (sVar13 = _dclass((pFVar16->Position).field0_0x0._s_0.Y), sVar13 < 1)) &&
         (sVar13 = _dclass((pFVar16->Position).field0_0x0._s_0.Z), sVar13 < 1)) {
        dVar11 = (pFVar16->Position).field0_0x0._s_0.Y;
        dVar5 = (pFVar16->Position).field0_0x0._s_0.Z;
        lVar9 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
        pdVar3 = (double *)(lVar9 + uVar15 * 0x18);
        *pdVar3 = (pFVar16->Position).field0_0x0._s_0.X;
        pdVar3[1] = dVar11;
        *(double *)(lVar9 + 0x10 + uVar15 * 0x18) = dVar5;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar12) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar12) {
            FMutex::LockSlow(this_00);
          }
          puVar2 = &(param_1->ChangeStampShape).Value;
          *puVar2 = *puVar2 + 1;
          LOCK();
          aVar4 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      if ((pFVar16->bHaveN != false) && ((param_1->VertexNormals).bIsSet != false)) {
        fVar8 = (pFVar16->Normal).field0_0x0._s_0.Z;
        uVar15 = (ulonglong)(*(uint *)pFVar18 & 0x1ff);
        lVar9 = *(longlong *)
                 ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar18 >> 9) * 8);
        *(undefined8 *)(lVar9 + uVar15 * 0xc) = *(undefined8 *)&(pFVar16->Normal).field0_0x0;
        *(float *)(lVar9 + 8 + uVar15 * 0xc) = fVar8;
      }
      if ((pFVar16->bHaveC != false) && ((param_1->VertexColors).bIsSet != false)) {
        fVar8 = (pFVar16->Color).field0_0x0._s_0.Z;
        uVar15 = (ulonglong)(*(uint *)pFVar18 & 0x1ff);
        lVar9 = *(longlong *)
                 ((param_1->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)(*(uint *)pFVar18 >> 9) * 8);
        *(undefined8 *)(lVar9 + uVar15 * 0xc) = *(undefined8 *)&(pFVar16->Color).field0_0x0;
        *(float *)(lVar9 + 8 + uVar15 * 0xc) = fVar8;
      }
      if ((pFVar16->bHaveUV == false) ||
         (uVar7 = *(uint *)pFVar18, (param_1->VertexUVs).bIsSet == false)) goto LAB_143473395;
      pFVar18 = pFVar18 + 0x48;
      pTVar1 = &pFVar16->UV;
      pFVar16 = (FVertexInfo *)(pFVar16[1].Position.field0_0x0.XYZ + 1);
      *(TVector2<float>_u_0 *)
       (*(longlong *)
         ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
         (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 8) = pTVar1->field0_0x0;
    }
    EVar14 = FDynamicMesh3::InsertVertex(param_1,uVar7,pFVar16,true);
    if ((EVar14 != Ok) &&
       (bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1327787060794229007>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                            ,0x10f,"Result == EMeshResult::Ok"), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
LAB_143473395:
    pFVar18 = pFVar18 + 0x48;
    pFVar16 = (FVertexInfo *)(pFVar16[1].Position.field0_0x0.XYZ + 1);
  } while( true );
}

// AttachAttributeChanges @ 143473ca0

void __thiscall
UE::Geometry::FDynamicMeshChange::AttachAttributeChanges
          (FDynamicMeshChange *this,
          TUniquePtr<UE::Geometry::FDynamicMeshAttributeChangeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>_>
          param_1)

{
  FDynamicMeshAttributeChangeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeChangeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>_>
  *this_00;
  
  this_00 = &this->AttributeChanges;
  if ((FDynamicMeshAttributeChangeSet *)this_00 != param_1.Ptr) {
    pFVar1 = this_00->Ptr;
    this_00->Ptr = (FDynamicMeshAttributeChangeSet *)
                   ((param_1.Ptr)->UVChanges).AllocatorInstance.Data;
    ((param_1.Ptr)->UVChanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>::operator()
              ((TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet> *)this_00,pFVar1);
  }
  pFVar2 = ((param_1.Ptr)->UVChanges).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    DestructItems<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,int>
              (*(TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
                 **)(pFVar2 + 0xd8),*(int *)(pFVar2 + 0xe0));
    if (*(void **)(pFVar2 + 0xd8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar2 + 0xd8));
    }
    DestructItems<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,int>
              (*(TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
                 **)(pFVar2 + 200),*(int *)(pFVar2 + 0xd0));
    if (*(void **)(pFVar2 + 200) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar2 + 200));
    }
    DestructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int>
              (*(FDynamicMeshTriangleAttributeChange<int,1> **)(pFVar2 + 0xb8),
               *(int *)(pFVar2 + 0xc0));
    if (*(void **)(pFVar2 + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar2 + 0xb8));
    }
    if (pFVar2[0xb0] != (FScriptContainerElement)0x0) {
      *(undefined ***)(pFVar2 + 0x88) =
           &___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
      if (*(void **)(pFVar2 + 0xa0) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0xa0));
      }
      if (*(void **)(pFVar2 + 0x90) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x90));
      }
      *(undefined ***)(pFVar2 + 0x88) =
           &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    }
    if (pFVar2[0x80] != (FScriptContainerElement)0x0) {
      if (*(void **)(pFVar2 + 0x70) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x70));
      }
      if (*(void **)(pFVar2 + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x60));
      }
      if (*(void **)(pFVar2 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x50));
      }
      if (*(void **)(pFVar2 + 0x40) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x40));
      }
      if (*(void **)(pFVar2 + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x30));
      }
      if (*(void **)(pFVar2 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x20));
      }
    }
    DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,3>,int>
              (*(TDynamicMeshAttributeChange<float,3> **)(pFVar2 + 0x10),*(int *)(pFVar2 + 0x18));
    if (*(void **)(pFVar2 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar2 + 0x10));
    }
    DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,2>,int>
              (*(TDynamicMeshAttributeChange<float,2> **)pFVar2,*(int *)(pFVar2 + 8));
    if (*(void **)pFVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar2);
    }
    ::operator_delete(pFVar2,0xe8);
    return;
  }
  return;
}

// CheckValidity @ 143482f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143483080) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000143483084 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UE::Geometry::FDynamicMeshChange::CheckValidity
          (FDynamicMeshChange *this,EValidityCheckFailMode param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [4];
  int local_134 [3];
  code *local_128;
  undefined **local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined ***pppuStack_100;
  code *local_f8;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148[0] = 1;
  local_118 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  pppuStack_100 = (undefined ***)0x0;
  puStack_110 = local_148;
  local_128 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,void,bool>
              ::Call;
  if (param_1 == Check) {
    local_e8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    local_128 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,void,bool>
                ::Call;
  }
  else {
    if (param_1 != Ensure) goto LAB_14348308a;
    local_e8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`9'::<lambda_3>,0,0>
                ::_vftable_;
    local_128 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,void,bool>
                ::Call;
  }
  local_118 = local_e8;
  puStack_e0 = local_148;
  puStack_110 = puStack_e0;
  local_108 = local_d8;
  uStack_104 = uStack_d4;
  pppuStack_100 = (undefined ***)0x0;
  uStack_d0 = 0;
  local_e8 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  puStack_e0 = local_148;
  local_f8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,void,bool>
             ::Call;
  (*(code *)PTR_Destroy_150aa1a58)();
LAB_14348308a:
  iVar1 = (this->OldVertices).ArrayNum;
  pFVar7 = (this->OldVertices).AllocatorInstance.Data;
  local_78.Elements._0_8_ = 0;
  local_78.Elements._8_8_ = 0;
  local_78.Elements._32_8_ = 0;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x48;
  local_78.Elements._40_4_ = 0;
  local_78.Elements._44_4_ = 0x80;
  local_78.Elements._48_4_ = 0xffffffff;
  local_78.Elements._52_4_ = 0;
  local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_78.HashSize = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  while( true ) {
    if ((this->OldVertices).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeVertex_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (pFVar7 == pFVar8) break;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_78,local_134,(bool *)pFVar7);
    pFVar7 = pFVar7 + 0x48;
  }
  iVar1 = (this->NewVertices).ArrayNum;
  pFVar7 = (this->NewVertices).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x48;
  while( true ) {
    if ((this->NewVertices).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeVertex_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (pFVar7 == pFVar8) break;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_c8,local_134,(bool *)pFVar7);
    pFVar7 = pFVar7 + 0x48;
  }
  iVar1 = (this->OldTriangles).ArrayNum;
  pFVar8 = (this->OldTriangles).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x20;
  do {
    if ((this->OldTriangles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeTriangle_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_150);
    }
    if (pFVar8 == pFVar7) {
      iVar1 = (this->NewTriangles).ArrayNum;
      pFVar8 = (this->NewTriangles).AllocatorInstance.Data;
      pFVar7 = pFVar8 + (longlong)iVar1 * 0x20;
      do {
        if ((this->NewTriangles).ArrayNum != iVar1) {
          `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeTriangle_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_138);
        }
        if (pFVar8 == pFVar7) {
          local_c8.HashSize = 0;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_c8.Elements);
          local_78.HashSize = 0;
          if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_78.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_78.Elements);
          if (local_128 != (code *)0x0) {
            pppuVar4 = &local_118;
            if (pppuStack_100 != (undefined ***)0x0) {
              pppuVar4 = pppuStack_100;
            }
            (*(code *)(*pppuVar4)[2])();
          }
          return;
        }
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar6 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar6 = local_c8.Hash.SecondaryData;
          }
          for (iVar5 = *(int *)((longlong)FVar6 +
                               (ulonglong)(local_c8.HashSize - 1U & *(uint *)(pFVar8 + 4)) * 4);
              iVar5 != -1; iVar5 = *(int *)(local_c8.Elements._0_8_ + 4 + (longlong)iVar5 * 0xc)) {
            if (*(uint *)(local_c8.Elements._0_8_ + (longlong)iVar5 * 0xc) == *(uint *)(pFVar8 + 4))
            goto LAB_1434833ac;
          }
        }
        iVar5 = -1;
LAB_1434833ac:
        local_158[0] = iVar5 != -1;
        Core::Private::Function::CheckCallable(local_128);
        pcVar2 = local_128;
        pppuVar4 = &local_118;
        if (pppuStack_100 != (undefined ***)0x0) {
          pppuVar4 = pppuStack_100;
        }
        uVar3 = (*(code *)(*pppuVar4)[1])();
        (*pcVar2)(uVar3,local_158);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar6 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar6 = local_c8.Hash.SecondaryData;
          }
          for (iVar5 = *(int *)((longlong)FVar6 +
                               (ulonglong)(local_c8.HashSize - 1U & *(uint *)(pFVar8 + 8)) * 4);
              iVar5 != -1; iVar5 = *(int *)(local_c8.Elements._0_8_ + 4 + (longlong)iVar5 * 0xc)) {
            if (*(uint *)(local_c8.Elements._0_8_ + (longlong)iVar5 * 0xc) == *(uint *)(pFVar8 + 8))
            goto LAB_14348342f;
          }
        }
        iVar5 = -1;
LAB_14348342f:
        local_140[0] = iVar5 != -1;
        Core::Private::Function::CheckCallable(local_128);
        pcVar2 = local_128;
        pppuVar4 = &local_118;
        if (pppuStack_100 != (undefined ***)0x0) {
          pppuVar4 = pppuStack_100;
        }
        uVar3 = (*(code *)(*pppuVar4)[1])();
        (*pcVar2)(uVar3,local_140);
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar6 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar6 = local_c8.Hash.SecondaryData;
          }
          for (iVar5 = *(int *)((longlong)FVar6 +
                               (ulonglong)(local_c8.HashSize - 1U & *(uint *)(pFVar8 + 0xc)) * 4);
              iVar5 != -1; iVar5 = *(int *)(local_c8.Elements._0_8_ + 4 + (longlong)iVar5 * 0xc)) {
            if (*(uint *)(local_c8.Elements._0_8_ + (longlong)iVar5 * 0xc) ==
                *(uint *)(pFVar8 + 0xc)) goto LAB_1434834bc;
          }
        }
        iVar5 = -1;
LAB_1434834bc:
        local_150[0] = iVar5 != -1;
        Core::Private::Function::CheckCallable(local_128);
        pcVar2 = local_128;
        pppuVar4 = &local_118;
        if (pppuStack_100 != (undefined ***)0x0) {
          pppuVar4 = pppuStack_100;
        }
        uVar3 = (*(code *)(*pppuVar4)[1])();
        (*pcVar2)(uVar3,local_150);
        pFVar8 = pFVar8 + 0x20;
      } while( true );
    }
    if (local_78.Elements._8_4_ != local_78.Elements._52_4_) {
      FVar6 = (ForElementType<FSetElementId>)&local_78.Hash;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar6 = local_78.Hash.SecondaryData;
      }
      for (iVar5 = *(int *)((longlong)FVar6 +
                           (ulonglong)(local_78.HashSize - 1U & *(uint *)(pFVar8 + 4)) * 4);
          iVar5 != -1; iVar5 = *(int *)(local_78.Elements._0_8_ + 4 + (longlong)iVar5 * 0xc)) {
        if (*(uint *)(local_78.Elements._0_8_ + (longlong)iVar5 * 0xc) == *(uint *)(pFVar8 + 4))
        goto LAB_1434831dc;
      }
    }
    iVar5 = -1;
LAB_1434831dc:
    local_150[0] = iVar5 != -1;
    Core::Private::Function::CheckCallable(local_128);
    pcVar2 = local_128;
    pppuVar4 = &local_118;
    if (pppuStack_100 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_100;
    }
    uVar3 = (*(code *)(*pppuVar4)[1])();
    (*pcVar2)(uVar3,local_150);
    if (local_78.Elements._8_4_ != local_78.Elements._52_4_) {
      FVar6 = (ForElementType<FSetElementId>)&local_78.Hash;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar6 = local_78.Hash.SecondaryData;
      }
      for (iVar5 = *(int *)((longlong)FVar6 +
                           (ulonglong)(local_78.HashSize - 1U & *(uint *)(pFVar8 + 8)) * 4);
          iVar5 != -1; iVar5 = *(int *)(local_78.Elements._0_8_ + 4 + (longlong)iVar5 * 0xc)) {
        if (*(uint *)(local_78.Elements._0_8_ + (longlong)iVar5 * 0xc) == *(uint *)(pFVar8 + 8))
        goto LAB_14348325f;
      }
    }
    iVar5 = -1;
LAB_14348325f:
    local_140[0] = iVar5 != -1;
    Core::Private::Function::CheckCallable(local_128);
    pcVar2 = local_128;
    pppuVar4 = &local_118;
    if (pppuStack_100 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_100;
    }
    uVar3 = (*(code *)(*pppuVar4)[1])();
    (*pcVar2)(uVar3,local_140);
    if (local_78.Elements._8_4_ != local_78.Elements._52_4_) {
      FVar6 = (ForElementType<FSetElementId>)&local_78.Hash;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar6 = local_78.Hash.SecondaryData;
      }
      for (iVar5 = *(int *)((longlong)FVar6 +
                           (ulonglong)(local_78.HashSize - 1U & *(uint *)(pFVar8 + 0xc)) * 4);
          iVar5 != -1; iVar5 = *(int *)(local_78.Elements._0_8_ + 4 + (longlong)iVar5 * 0xc)) {
        if (*(uint *)(local_78.Elements._0_8_ + (longlong)iVar5 * 0xc) == *(uint *)(pFVar8 + 0xc))
        goto LAB_1434832ec;
      }
    }
    iVar5 = -1;
LAB_1434832ec:
    local_158[0] = iVar5 != -1;
    Core::Private::Function::CheckCallable(local_128);
    pcVar2 = local_128;
    pppuVar4 = &local_118;
    if (pppuStack_100 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_100;
    }
    uVar3 = (*(code *)(*pppuVar4)[1])();
    (*pcVar2)(uVar3,local_158);
    pFVar8 = pFVar8 + 0x20;
  } while( true );
}

// GetAffectedVertices @ 1434bd240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshChange::GetAffectedVertices
          (FDynamicMeshChange *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshChange *pFVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  int local_a4;
  int local_a0;
  int local_9c;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar6 = (ulonglong)param_2 ^ 1;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  pFVar4 = this;
  if (!param_2) {
    pFVar4 = (FDynamicMeshChange *)&this->NewVertices;
  }
  iVar1 = (&this->OldTriangles)[uVar6 * 2].ArrayNum;
  pFVar3 = (&this->OldTriangles)[uVar6 * 2].AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x20;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  while( true ) {
    if ((&this->OldTriangles)[uVar6 * 2].ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeTriangle_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (pFVar3 == pFVar5) break;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_88,&local_a0,(bool *)(pFVar3 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_88,&local_9c,(bool *)(pFVar3 + 8));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_88,&local_a4,(bool *)(pFVar3 + 0xc));
    pFVar3 = pFVar3 + 0x20;
  }
  iVar1 = (pFVar4->OldVertices).ArrayNum;
  pFVar5 = (pFVar4->OldVertices).AllocatorInstance.Data;
  pFVar3 = pFVar5 + (longlong)iVar1 * 0x48;
  while( true ) {
    if ((pFVar4->OldVertices).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeVertex_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (pFVar5 == pFVar3) break;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_88,&local_a4,(bool *)pFVar5);
    pFVar5 = pFVar5 + 0x48;
  }
  pTVar2 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_88,&local_98);
  if (param_1 != pTVar2) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar2->ArrayNum;
    param_1->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// GetSavedTriangleList @ 1434c4730

void __thiscall
UE::Geometry::FDynamicMeshChange::GetSavedTriangleList
          (FDynamicMeshChange *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = (ulonglong)param_2 ^ 1;
  iVar6 = (&this->OldTriangles)[uVar10 * 2].ArrayNum;
  lVar7 = (longlong)iVar6;
  uVar9 = param_1->ArrayNum + iVar6;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar9 = 0;
  if (0 < iVar6) {
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (&this->OldTriangles)[uVar10 * 2].ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar8 = (&this->OldTriangles)[uVar10 * 2].AllocatorInstance.Data + lVar11;
      if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar6 + 1;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x20;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// HasSavedVertex @ 1434ce8a0

bool __thiscall
UE::Geometry::FDynamicMeshChange::HasSavedVertex(FDynamicMeshChange *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->OldVertices).ArrayNum;
  pFVar3 = (this->OldVertices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->OldVertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeVertex,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x48;
  }
  return false;
}

// SaveInitialTriangle @ 14351e370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FDynamicMeshChange::SaveInitialTriangle
          (FDynamicMeshChange *this,FDynamicMesh3 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  lVar2 = (ulonglong)((uint)param_2 >> 9) * 8;
  lVar3 = (ulonglong)(param_2 & 0x1ff) * 0xc;
  lVar5 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar2);
  uVar4 = *(undefined8 *)(lVar5 + lVar3);
  uStack_24 = (undefined4)uVar4;
  uStack_20 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1c = *(undefined4 *)(lVar5 + 8 + lVar3);
  lVar2 = *(longlong *)((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar2);
  uVar4 = *(undefined8 *)(lVar2 + lVar3);
  uStack_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_10 = *(undefined4 *)(lVar2 + 8 + lVar3);
  local_28 = param_2;
  iStack_c = FDynamicMesh3::GetTriangleGroup(param_1,param_2);
  pFVar6 = (this->OldTriangles).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->OldTriangles).ArrayMax * 0x20
     )) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x420,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar10 + 1;
  pFVar7 = (this->OldTriangles).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar10 * 0x20;
  *(ulonglong *)pFVar6 = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_1c,uStack_20);
  pFVar7 = pFVar7 + (longlong)iVar10 * 0x20 + 0x10;
  *(ulonglong *)pFVar7 = CONCAT44(uStack_14,uStack_18);
  *(ulonglong *)(pFVar7 + 8) = CONCAT44(iStack_c,uStack_10);
  return;
}

// SaveInitialVertex @ 14351e930

void __thiscall
UE::Geometry::FDynamicMeshChange::SaveInitialVertex
          (FDynamicMeshChange *this,FDynamicMesh3 *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FVertexInfo *pFVar8;
  longlong lVar9;
  int local_98;
  undefined4 uStack_94;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  TVector2<float>_u_0 local_60;
  ulonglong uStack_58;
  FVertexInfo local_48;
  
  local_70 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fStack_64 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_78 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_6c = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_68 = (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
  ;
  local_60 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  uStack_58 = uStack_58 & 0xffffffffff000000;
  local_98 = param_2;
  pFVar8 = FDynamicMesh3::GetVertexInfo(param_1,&local_48,param_2);
  pFVar2 = (this->OldVertices).AllocatorInstance.Data;
  dStack_90 = (pFVar8->Position).field0_0x0._s_0.X;
  dStack_88 = (pFVar8->Position).field0_0x0._s_0.Y;
  dStack_80 = (pFVar8->Position).field0_0x0._s_0.Z;
  uStack_78 = *(undefined8 *)&(pFVar8->Normal).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->Normal).field0_0x0 + 8);
  uVar5 = *(undefined8 *)((longlong)&(pFVar8->Color).field0_0x0 + 4);
  local_70 = (float)uVar4;
  uStack_6c = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_68 = (undefined4)uVar5;
  fStack_64 = (float)((ulonglong)uVar5 >> 0x20);
  local_60 = (pFVar8->UV).field0_0x0;
  uStack_58._0_1_ = pFVar8->bHaveN;
  uStack_58._1_1_ = pFVar8->bHaveC;
  uStack_58._2_1_ = pFVar8->bHaveUV;
  uStack_58._3_5_ = *(undefined5 *)&pFVar8->field_0x3b;
  if ((pFVar2 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar2 + (longlong)(this->OldVertices).ArrayMax * 0x48)
     ) {
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
  iVar7 = (this->OldVertices).ArrayNum;
  piVar1 = &(this->OldVertices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)this,piVar1);
  }
  (this->OldVertices).ArrayNum = iVar7 + 1;
  lVar9 = (longlong)iVar7;
  pFVar2 = (this->OldVertices).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + lVar9 * 0x48) = CONCAT44(uStack_94,local_98);
  *(double *)(pFVar2 + lVar9 * 0x48 + 8) = dStack_90;
  *(double *)(pFVar2 + lVar9 * 0x48 + 0x10) = dStack_88;
  *(double *)(pFVar2 + lVar9 * 0x48 + 0x10 + 8) = dStack_80;
  *(undefined8 *)(pFVar2 + lVar9 * 0x48 + 0x20) = uStack_78;
  *(ulonglong *)(pFVar2 + lVar9 * 0x48 + 0x20 + 8) = CONCAT44(uStack_6c,local_70);
  *(ulonglong *)(pFVar2 + lVar9 * 0x48 + 0x30) = CONCAT44(fStack_64,uStack_68);
  *(TVector2<float>_u_0 *)(pFVar2 + lVar9 * 0x48 + 0x30 + 8) = local_60;
  *(ulonglong *)(pFVar2 + lVar9 * 0x48 + 0x40) = uStack_58;
  return;
}

// StoreFinalTriangle @ 1435512b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FDynamicMeshChange::StoreFinalTriangle
          (FDynamicMeshChange *this,FDynamicMesh3 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  lVar2 = (ulonglong)((uint)param_2 >> 9) * 8;
  lVar3 = (ulonglong)(param_2 & 0x1ff) * 0xc;
  lVar5 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar2);
  uVar4 = *(undefined8 *)(lVar5 + lVar3);
  uStack_24 = (undefined4)uVar4;
  uStack_20 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1c = *(undefined4 *)(lVar5 + 8 + lVar3);
  lVar2 = *(longlong *)((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar2);
  uVar4 = *(undefined8 *)(lVar2 + lVar3);
  uStack_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_10 = *(undefined4 *)(lVar2 + 8 + lVar3);
  local_28 = param_2;
  iStack_c = FDynamicMesh3::GetTriangleGroup(param_1,param_2);
  pFVar6 = (this->NewTriangles).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->NewTriangles).ArrayMax * 0x20
     )) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x420,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar10 + 1;
  pFVar7 = (this->NewTriangles).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar10 * 0x20;
  *(ulonglong *)pFVar6 = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_1c,uStack_20);
  pFVar7 = pFVar7 + (longlong)iVar10 * 0x20 + 0x10;
  *(ulonglong *)pFVar7 = CONCAT44(uStack_14,uStack_18);
  *(ulonglong *)(pFVar7 + 8) = CONCAT44(iStack_c,uStack_10);
  return;
}

// StoreFinalVertex @ 143551410

void __thiscall
UE::Geometry::FDynamicMeshChange::StoreFinalVertex
          (FDynamicMeshChange *this,FDynamicMesh3 *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FVertexInfo *pFVar8;
  longlong lVar9;
  int local_98;
  undefined4 uStack_94;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  TVector2<float>_u_0 local_60;
  ulonglong uStack_58;
  FVertexInfo local_48;
  
  local_70 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fStack_64 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_78 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_6c = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_68 = (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
  ;
  local_60 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  uStack_58 = uStack_58 & 0xffffffffff000000;
  local_98 = param_2;
  pFVar8 = FDynamicMesh3::GetVertexInfo(param_1,&local_48,param_2);
  pFVar2 = (this->NewVertices).AllocatorInstance.Data;
  dStack_90 = (pFVar8->Position).field0_0x0._s_0.X;
  dStack_88 = (pFVar8->Position).field0_0x0._s_0.Y;
  dStack_80 = (pFVar8->Position).field0_0x0._s_0.Z;
  uStack_78 = *(undefined8 *)&(pFVar8->Normal).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->Normal).field0_0x0 + 8);
  uVar5 = *(undefined8 *)((longlong)&(pFVar8->Color).field0_0x0 + 4);
  local_70 = (float)uVar4;
  uStack_6c = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_68 = (undefined4)uVar5;
  fStack_64 = (float)((ulonglong)uVar5 >> 0x20);
  local_60 = (pFVar8->UV).field0_0x0;
  uStack_58._0_1_ = pFVar8->bHaveN;
  uStack_58._1_1_ = pFVar8->bHaveC;
  uStack_58._2_1_ = pFVar8->bHaveUV;
  uStack_58._3_5_ = *(undefined5 *)&pFVar8->field_0x3b;
  if ((pFVar2 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar2 + (longlong)(this->NewVertices).ArrayMax * 0x48)
     ) {
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
  iVar7 = (this->NewVertices).ArrayNum;
  piVar1 = &(this->NewVertices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->NewVertices).AllocatorInstance,piVar1);
  }
  (this->NewVertices).ArrayNum = iVar7 + 1;
  lVar9 = (longlong)iVar7;
  pFVar2 = (this->NewVertices).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + lVar9 * 0x48) = CONCAT44(uStack_94,local_98);
  *(double *)(pFVar2 + lVar9 * 0x48 + 8) = dStack_90;
  *(double *)(pFVar2 + lVar9 * 0x48 + 0x10) = dStack_88;
  *(double *)(pFVar2 + lVar9 * 0x48 + 0x10 + 8) = dStack_80;
  *(undefined8 *)(pFVar2 + lVar9 * 0x48 + 0x20) = uStack_78;
  *(ulonglong *)(pFVar2 + lVar9 * 0x48 + 0x20 + 8) = CONCAT44(uStack_6c,local_70);
  *(ulonglong *)(pFVar2 + lVar9 * 0x48 + 0x30) = CONCAT44(fStack_64,uStack_68);
  *(TVector2<float>_u_0 *)(pFVar2 + lVar9 * 0x48 + 0x30 + 8) = local_60;
  *(ulonglong *)(pFVar2 + lVar9 * 0x48 + 0x40) = uStack_58;
  return;
}

// VerifySaveState @ 1435573f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FDynamicMeshChange::VerifySaveState(FDynamicMeshChange *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_98;
  undefined1 local_97 [3];
  int local_94 [3];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar6 = (this->OldVertices).AllocatorInstance.Data;
  iVar1 = (this->OldVertices).ArrayNum;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x48;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  while( true ) {
    if ((this->OldVertices).ArrayNum != iVar1) {
      local_98 = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeVertex_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_98);
    }
    if (pFVar6 == pFVar7) break;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_88,local_94,(bool *)pFVar6);
    pFVar6 = pFVar6 + 0x48;
  }
  iVar1 = (this->OldTriangles).ArrayNum;
  pFVar7 = (this->OldTriangles).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
  do {
    if ((this->OldTriangles).ArrayNum != iVar1) {
      local_97[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMeshChange::FChangeTriangle_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_97);
    }
    if (pFVar7 == pFVar6) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar5 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar5 = local_88.Hash.SecondaryData;
      }
      for (iVar2 = *(int *)((longlong)FVar5 +
                           (ulonglong)(local_88.HashSize - 1U & *(uint *)(pFVar7 + 4)) * 4);
          iVar2 != -1; iVar2 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar2 * 0xc)) {
        if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar2 * 0xc) == *(uint *)(pFVar7 + 4))
        goto LAB_14355754f;
      }
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1327787060794229069>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                       ,0x14d,"SavedVertexIDs.Contains(TriInfo.Vertices.A)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14355754f:
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar5 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar5 = local_88.Hash.SecondaryData;
      }
      for (iVar2 = *(int *)((longlong)FVar5 +
                           (ulonglong)(local_88.HashSize - 1U & *(uint *)(pFVar7 + 8)) * 4);
          iVar2 != -1; iVar2 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar2 * 0xc)) {
        if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar2 * 0xc) == *(uint *)(pFVar7 + 8))
        goto LAB_1435575bf;
      }
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1327787060794229070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                       ,0x14e,"SavedVertexIDs.Contains(TriInfo.Vertices.B)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1435575bf:
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar5 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar5 = local_88.Hash.SecondaryData;
      }
      for (iVar2 = *(int *)((longlong)FVar5 +
                           (ulonglong)(local_88.HashSize - 1U & *(uint *)(pFVar7 + 0xc)) * 4);
          iVar2 != -1; iVar2 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar2 * 0xc)) {
        if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar2 * 0xc) == *(uint *)(pFVar7 + 0xc))
        goto LAB_143557630;
      }
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1327787060794229071>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                       ,0x14f,"SavedVertexIDs.Contains(TriInfo.Vertices.C)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_143557630:
    pFVar7 = pFVar7 + 0x20;
  } while( true );
}

