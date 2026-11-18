// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 3

// ComputeTetMesh @ 149510610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::FTetWild::ComputeTetMesh
          (FTetMeshParameters *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *param_5,
          FProgressCancel *param_6)

{
  bool bVar1;
  int *piVar2;
  ulong64 uVar3;
  Matrix<int,3,1,0,3,1> *pMVar4;
  Matrix<double,3,1,0,3,1> *pMVar5;
  undefined1 auStackY_248 [32];
  vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_> local_1e8;
  vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
  local_1d0;
  vector<int,std::allocator<int>_> local_1b8;
  undefined1 local_198 [32];
  void *local_178;
  void *local_168;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  `anonymous_namespace'::ConvertParameters((Parameters *)local_198,param_1);
  local_1d0._Mypair._Myval2._Myend = (Matrix<double,3,1,0,3,1> *)0x0;
  local_1e8._Mypair._Myval2._Myend = (Matrix<int,3,1,0,3,1> *)0x0;
  local_1b8._Mypair._Myval2._Myend = (int *)0x0;
  local_1d0._Mypair._Myval2._Myfirst = (Matrix<double,3,1,0,3,1> *)0x0;
  local_1d0._Mypair._Myval2._Mylast = (Matrix<double,3,1,0,3,1> *)0x0;
  local_1e8._Mypair._Myval2._Myfirst = (Matrix<int,3,1,0,3,1> *)0x0;
  local_1e8._Mypair._Myval2._Mylast = (Matrix<int,3,1,0,3,1> *)0x0;
  local_1b8._Mypair._Myval2._Myfirst = (int *)0x0;
  local_1b8._Mypair._Myval2._Mylast = (int *)0x0;
  `anonymous_namespace'::ConvertIndexMesh(param_2,param_3,&local_1d0,&local_1e8);
  bVar1 = floatTetWild::tetrahedralization
                    (&local_1d0,&local_1e8,&local_1b8,(Parameters *)local_198,
                     param_1->bInvertOutputTets,param_4,param_5,
                     (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,
                     (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0,-1,
                     param_1->bSkipSimplification,param_6);
  if (local_1b8._Mypair._Myval2._Myfirst != (int *)0x0) {
    uVar3 = (longlong)local_1b8._Mypair._Myval2._Myend -
            (longlong)local_1b8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
    piVar2 = local_1b8._Mypair._Myval2._Myfirst;
    if (0xfff < uVar3) {
      piVar2 = *(int **)(local_1b8._Mypair._Myval2._Myfirst + -2);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_1b8._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar2))
         ) goto LAB_1495107f2;
    }
    ::operator_delete(piVar2,uVar3);
    local_1b8._Mypair._Myval2._Myend = (int *)0x0;
    local_1b8._Mypair._Myval2._Myfirst = (int *)0x0;
    local_1b8._Mypair._Myval2._Mylast = (int *)0x0;
  }
  if (local_1e8._Mypair._Myval2._Myfirst != (Matrix<int,3,1,0,3,1> *)0x0) {
    uVar3 = (((longlong)local_1e8._Mypair._Myval2._Myend -
             (longlong)local_1e8._Mypair._Myval2._Myfirst) / 0xc) * 0xc;
    pMVar4 = local_1e8._Mypair._Myval2._Myfirst;
    if (0xfff < uVar3) {
      pMVar4 = *(Matrix<int,3,1,0,3,1> **)&local_1e8._Mypair._Myval2._Myfirst[-1].field_0x4;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_1e8._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar4))
         ) goto LAB_1495107f2;
    }
    ::operator_delete(pMVar4,uVar3);
    local_1e8._Mypair._Myval2._Myend = (Matrix<int,3,1,0,3,1> *)0x0;
    local_1e8._Mypair._Myval2._Myfirst = (Matrix<int,3,1,0,3,1> *)0x0;
    local_1e8._Mypair._Myval2._Mylast = (Matrix<int,3,1,0,3,1> *)0x0;
  }
  if (local_1d0._Mypair._Myval2._Myfirst != (Matrix<double,3,1,0,3,1> *)0x0) {
    uVar3 = (((longlong)local_1d0._Mypair._Myval2._Myend -
             (longlong)local_1d0._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pMVar5 = local_1d0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar3) {
      pMVar5 = *(Matrix<double,3,1,0,3,1> **)&local_1d0._Mypair._Myval2._Myfirst[-1].field_0x10;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_1d0._Mypair._Myval2._Myfirst + (-8 - (longlong)pMVar5))
         ) {
LAB_1495107f2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar5,uVar3);
    local_1d0._Mypair._Myval2._Myend = (Matrix<double,3,1,0,3,1> *)0x0;
    local_1d0._Mypair._Myval2._Myfirst = (Matrix<double,3,1,0,3,1> *)0x0;
    local_1d0._Mypair._Myval2._Mylast = (Matrix<double,3,1,0,3,1> *)0x0;
  }
  FMemory_Free(local_168);
  FMemory_Free(local_178);
  FMemory_Free((void *)local_198._16_8_);
  return bVar1;
}

// ConvertIndexMesh @ 149511240

void __cdecl
UE::Geometry::FTetWild::`anonymous_namespace'::ConvertIndexMesh
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
          *param_3,vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>
                   *param_4)

{
  Matrix<int,3,1,0,3,1> **ppMVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  Matrix<double,3,1,0,3,1> *pMVar4;
  Matrix<int,3,1,0,3,1> *pMVar5;
  undefined8 uVar6;
  Matrix<double,3,1,0,3,1> *pMVar7;
  Matrix<int,3,1,0,3,1> *pMVar8;
  Matrix<double,3,1,0,3,1> *pMVar9;
  Matrix<double,3,1,0,3,1> *pMVar10;
  Matrix<int,3,1,0,3,1> *pMVar11;
  longlong lVar12;
  Matrix<int,3,1,0,3,1> *pMVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  double local_res8;
  double local_res18;
  double local_38 [2];
  
  uVar14 = (ulonglong)param_1->ArrayNum;
  pMVar4 = (param_3->_Mypair)._Myval2._Myfirst;
  if ((ulonglong)(((longlong)(param_3->_Mypair)._Myval2._Myend - (longlong)pMVar4) / 0x18) < uVar14)
  {
    if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
      ::_Xlength();
    }
    lVar12 = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)pMVar4;
    lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
    pMVar9 = std::_Allocate<16,std::_Default_allocate_traits>(uVar14 * 0x18);
    pMVar4 = (param_3->_Mypair)._Myval2._Mylast;
    pMVar7 = pMVar9;
    for (pMVar10 = (param_3->_Mypair)._Myval2._Myfirst; pMVar10 != pMVar4; pMVar10 = pMVar10 + 1) {
      uVar6 = *(undefined8 *)&pMVar10->field_0x8;
      *(undefined8 *)pMVar7 = *(undefined8 *)pMVar10;
      *(undefined8 *)&pMVar7->field_0x8 = uVar6;
      *(undefined8 *)&pMVar7->field_0x10 = *(undefined8 *)&pMVar10->field_0x10;
      pMVar7 = pMVar7 + 1;
    }
    std::vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>::
    _Change_array(param_3,pMVar9,(lVar12 >> 2) - (lVar12 >> 0x3f),uVar14);
  }
  pMVar5 = (param_4->_Mypair)._Myval2._Myfirst;
  uVar14 = (ulonglong)param_2->ArrayNum;
  if ((ulonglong)(((longlong)(param_4->_Mypair)._Myval2._Myend - (longlong)pMVar5) / 0xc) < uVar14)
  {
    if (0x1555555555555555 < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>::
      _Xlength();
    }
    lVar12 = (longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pMVar5;
    lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
    pMVar11 = std::_Allocate<16,std::_Default_allocate_traits>(uVar14 * 0xc);
    pMVar5 = (param_4->_Mypair)._Myval2._Mylast;
    pMVar8 = pMVar11;
    for (pMVar13 = (param_4->_Mypair)._Myval2._Myfirst; pMVar13 != pMVar5; pMVar13 = pMVar13 + 1) {
      *(undefined8 *)pMVar8 = *(undefined8 *)pMVar13;
      *(undefined4 *)&pMVar8->field_0x8 = *(undefined4 *)&pMVar13->field_0x8;
      pMVar8 = pMVar8 + 1;
    }
    std::vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>::
    _Change_array(param_4,pMVar11,(lVar12 >> 1) - (lVar12 >> 0x3f),uVar14);
  }
  iVar3 = param_1->ArrayNum;
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar15 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar15 == pFVar2) break;
    pMVar4 = (param_3->_Mypair)._Myval2._Mylast;
    local_res8 = *(double *)(pFVar15 + 0x10);
    local_res18 = *(double *)(pFVar15 + 8);
    local_38[0] = *(double *)pFVar15;
    if (pMVar4 == (param_3->_Mypair)._Myval2._Myend) {
      std::vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
      ::_Emplace_reallocate<double,double,double>(param_3,pMVar4,local_38,&local_res18,&local_res8);
      pFVar15 = pFVar15 + 0x18;
    }
    else {
      *(double *)pMVar4 = local_38[0];
      (param_3->_Mypair)._Myval2._Mylast = pMVar4 + 1;
      pFVar15 = pFVar15 + 0x18;
      *(double *)&pMVar4->field_0x8 = local_res18;
      *(double *)&pMVar4->field_0x10 = local_res8;
    }
  }
  iVar3 = param_2->ArrayNum;
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar2 = pFVar15 + (longlong)iVar3 * 0xc;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar15 == pFVar2) break;
    pMVar5 = (param_4->_Mypair)._Myval2._Mylast;
    if (pMVar5 == (param_4->_Mypair)._Myval2._Myend) {
      std::vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>::
      _Emplace_reallocate<int_const_&,int_const_&,int_const_&>
                (param_4,pMVar5,(int *)pFVar15,(int *)(pFVar15 + 4),(int *)(pFVar15 + 8));
      pFVar15 = pFVar15 + 0xc;
    }
    else {
      *(undefined4 *)pMVar5 = *(undefined4 *)pFVar15;
      *(int *)&pMVar5->field_0x4 = *(int *)(pFVar15 + 4);
      *(int *)&pMVar5->field_0x8 = *(int *)(pFVar15 + 8);
      ppMVar1 = &(param_4->_Mypair)._Myval2._Mylast;
      *ppMVar1 = *ppMVar1 + 1;
      pFVar15 = pFVar15 + 0xc;
    }
  }
  return;
}

// ConvertParameters @ 149511510

Parameters * __cdecl
UE::Geometry::FTetWild::`anonymous_namespace'::ConvertParameters
          (Parameters *__return_storage_ptr__,FTetMeshParameters *param_1)

{
  EFilterOutsideMethod EVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  Parameters *pPVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  __return_storage_ptr__->use_floodfill = false;
  __return_storage_ptr__->use_input_for_wn = false;
  __return_storage_ptr__->coarsen = false;
  __return_storage_ptr__->apply_sizing_field = false;
  __return_storage_ptr__->box_scale = 0.06666666666666667;
  __return_storage_ptr__->not_sort_input = false;
  __return_storage_ptr__->is_quiet = false;
  *(undefined8 *)&__return_storage_ptr__->V_sizing_field = 0;
  *(undefined8 *)&(__return_storage_ptr__->V_sizing_field).field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->T_sizing_field = 0;
  *(undefined8 *)&(__return_storage_ptr__->T_sizing_field).field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->values_sizing_field = 0;
  *(undefined8 *)&(__return_storage_ptr__->values_sizing_field).field_0x8 = 0;
  __return_storage_ptr__->eps_rel = 0.001;
  __return_storage_ptr__->ideal_edge_length_rel = 0.05;
  __return_storage_ptr__->min_edge_len_rel = -1.0;
  __return_storage_ptr__->stop_energy = 10.0;
  __return_storage_ptr__->log_level = 3;
  __return_storage_ptr__->correct_tracked_surface_orientation = false;
  __return_storage_ptr__->smooth_open_boundary = false;
  __return_storage_ptr__->manifold_surface = false;
  __return_storage_ptr__->disable_filtering = false;
  __return_storage_ptr__->max_its = 0x50;
  __return_storage_ptr__->stage = 2;
  __return_storage_ptr__->num_threads = 0xffffffff;
  __return_storage_ptr__->stop_p = -1;
  bVar3 = param_1->bApplySizing;
  __return_storage_ptr__->apply_sizing_field = bVar3;
  if (bVar3 != false) {
    Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<double,_1,1,0,_1,1>_> *)
               &__return_storage_ptr__->V_sizing_field,
               (longlong)((param_1->SizingFieldVertices).ArrayNum * 3),1);
    uVar9 = (ulonglong)((param_1->SizingFieldTets).ArrayNum << 2);
    if (uVar9 != *(ulonglong *)&(__return_storage_ptr__->T_sizing_field).field_0x8) {
      FMemory_Free(*(void **)&__return_storage_ptr__->T_sizing_field);
      if ((longlong)uVar9 < 1) {
        *(undefined8 *)&__return_storage_ptr__->T_sizing_field = 0;
      }
      else {
        if (0x3fffffffffffffff < uVar9) {
          ::operator_new(0xffffffffffffffff);
        }
        pvVar4 = FMemory_Malloc(uVar9 * 4,0x10);
        if ((pvVar4 == (void *)0x0) && (uVar9 * 4 != 0)) {
          ::operator_new(0xffffffffffffffff);
        }
        *(void **)&__return_storage_ptr__->T_sizing_field = pvVar4;
      }
    }
    uVar10 = 0;
    *(ulonglong *)&(__return_storage_ptr__->T_sizing_field).field_0x8 = uVar9;
    Eigen::PlainObjectBase<Eigen::Matrix<double,-1,1,0,-1,1>_>::resize
              ((PlainObjectBase<Eigen::Matrix<double,_1,1,0,_1,1>_> *)
               &__return_storage_ptr__->values_sizing_field,
               (longlong)(param_1->SizingFieldValues).ArrayNum,1);
    uVar9 = uVar10;
    if (0 < (param_1->SizingFieldVertices).ArrayNum) {
      do {
        uVar7 = (uint)uVar9;
        uVar6 = ~uVar7 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar7 < (param_1->SizingFieldVertices).ArrayNum) {
          uVar8 = uVar6;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        *(undefined8 *)(uVar10 + *(longlong *)&__return_storage_ptr__->V_sizing_field) =
             *(undefined8 *)((param_1->SizingFieldVertices).AllocatorInstance.Data + uVar10);
        uVar8 = 0;
        if ((int)uVar7 < (param_1->SizingFieldVertices).ArrayNum) {
          uVar8 = uVar6;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        *(undefined8 *)(uVar10 + 8 + *(longlong *)&__return_storage_ptr__->V_sizing_field) =
             *(undefined8 *)((param_1->SizingFieldVertices).AllocatorInstance.Data + uVar10 + 8);
        uVar8 = 0;
        if ((int)uVar7 < (param_1->SizingFieldVertices).ArrayNum) {
          uVar8 = uVar6;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        *(undefined8 *)(uVar10 + 0x10 + *(longlong *)&__return_storage_ptr__->V_sizing_field) =
             *(undefined8 *)((param_1->SizingFieldVertices).AllocatorInstance.Data + uVar10 + 0x10);
        uVar10 = uVar10 + 0x18;
        uVar9 = (ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < (param_1->SizingFieldVertices).ArrayNum);
    }
    uVar8 = 0;
    if (0 < (param_1->SizingFieldTets).ArrayNum) {
      lVar11 = 0;
      lVar12 = 8;
      do {
        uVar7 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->SizingFieldTets).ArrayNum) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        *(undefined4 *)(lVar11 + *(longlong *)&__return_storage_ptr__->T_sizing_field) =
             *(undefined4 *)((param_1->SizingFieldTets).AllocatorInstance.Data + lVar11);
        uVar6 = 0;
        if ((int)uVar8 < (param_1->SizingFieldTets).ArrayNum) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        *(undefined4 *)(lVar12 + -4 + *(longlong *)&__return_storage_ptr__->T_sizing_field) =
             *(undefined4 *)((param_1->SizingFieldTets).AllocatorInstance.Data + lVar12 + -4);
        uVar6 = 0;
        if ((int)uVar8 < (param_1->SizingFieldTets).ArrayNum) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        *(undefined4 *)(lVar12 + *(longlong *)&__return_storage_ptr__->T_sizing_field) =
             *(undefined4 *)((param_1->SizingFieldTets).AllocatorInstance.Data + lVar12);
        uVar6 = 0;
        if ((int)uVar8 < (param_1->SizingFieldTets).ArrayNum) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x10;
        *(undefined4 *)(lVar11 + 0xc + *(longlong *)&__return_storage_ptr__->T_sizing_field) =
             *(undefined4 *)((param_1->SizingFieldTets).AllocatorInstance.Data + lVar11 + 0xc);
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar8 < (param_1->SizingFieldTets).ArrayNum);
    }
    uVar8 = 0;
    if (0 < (param_1->SizingFieldValues).ArrayNum) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (param_1->SizingFieldValues).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pPVar5 = (Parameters *)(*pcVar2)();
          return pPVar5;
        }
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar11 + *(longlong *)&__return_storage_ptr__->values_sizing_field) =
             *(undefined8 *)((param_1->SizingFieldValues).AllocatorInstance.Data + lVar11);
        lVar11 = lVar11 + 8;
      } while ((int)uVar8 < (param_1->SizingFieldValues).ArrayNum);
    }
  }
  __return_storage_ptr__->ideal_edge_length_rel = param_1->IdealEdgeLengthRel;
  __return_storage_ptr__->eps_rel = param_1->EpsRel;
  __return_storage_ptr__->max_its = param_1->MaxIts;
  __return_storage_ptr__->stop_energy = param_1->StopEnergy;
  __return_storage_ptr__->coarsen = param_1->bCoarsen;
  __return_storage_ptr__->manifold_surface = param_1->bExtractManifoldBoundarySurface;
  EVar1 = param_1->OutsideFilterMethod;
  if (EVar1 == None) {
    __return_storage_ptr__->disable_filtering = true;
  }
  else {
    if (EVar1 == FloodFill) {
      __return_storage_ptr__->use_floodfill = true;
      return __return_storage_ptr__;
    }
    if (EVar1 == InputSurface) {
      __return_storage_ptr__->use_input_for_wn = true;
      return __return_storage_ptr__;
    }
    if (EVar1 != TrackedSurface) {
      if (EVar1 == SmoothOpenBoundary) {
        __return_storage_ptr__->smooth_open_boundary = true;
        return __return_storage_ptr__;
      }
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5540523557190107229>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\FTetWildWrapper.cpp"
                         ,0x5d,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pPVar5 = (Parameters *)(*pcVar2)();
        return pPVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

