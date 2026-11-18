// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 6

// init_b_mesh_and_tree @ 14957fc30

/* WARNING: Type propagation algorithm not settling */

void __thiscall
floatTetWild::AABBWrapper::init_b_mesh_and_tree
          (AABBWrapper *this,
          vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
          *param_1,vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>
                   *param_2,Mesh *param_3)

{
  int **ppiVar1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar2;
  vector<int,std::allocator<int>_> *this_00;
  undefined1 *puVar3;
  int *piVar4;
  Matrix<int,3,1,0,3,1> *pMVar5;
  FScriptContainerElement *pFVar6;
  Matrix<double,3,1,0,3,1> *pMVar7;
  Matrix<double,3,1,0,3,1> *pMVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *ppVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *_Dst;
  array<int,2> *paVar18;
  vector<bool,std::allocator<bool>_> *pvVar19;
  vector<bool,std::allocator<bool>_> *pvVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  array<int,2> *paVar26;
  array<int,2> *paVar27;
  int *piVar28;
  ulong64 uVar29;
  pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *ppVar30;
  size_t sVar31;
  ulonglong uVar32;
  FTriTreeWrapper *this_01;
  vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_> *local_res18;
  Mesh *local_res20;
  bool local_148 [8];
  vector<std::array<int,2>,std::allocator<std::array<int,2>_>_> local_140;
  int local_128;
  allocator<std::vector<int,std::allocator<int>_>_> local_124;
  allocator<bool> local_123;
  allocator<bool> local_122 [2];
  int local_120;
  vector<std::array<int,2>,std::allocator<std::array<int,2>_>_> local_118;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  longlong local_f0;
  longlong local_e8;
  vector<std::pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_>,std::allocator<std::pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_>_>_>
  local_e0;
  FTriTreeWrapper *local_c8;
  undefined1 local_c0 [8];
  uint *puStack_b8;
  uint *local_b0;
  undefined8 local_a8;
  vector<std::vector<int,std::allocator<int>_>,std::allocator<std::vector<int,std::allocator<int>_>_>_>
  local_a0;
  vector<bool,std::allocator<bool>_> local_88;
  vector<bool,std::allocator<bool>_> local_68;
  
  this_01 = &this->BTree;
  local_res18 = param_2;
  local_res20 = param_3;
  local_c8 = this_01;
  FTriTreeWrapper::Reset(this_01);
  std::
  vector<std::vector<int,std::allocator<int>_>,std::allocator<std::vector<int,std::allocator<int>_>_>_>
  ::
  vector<std::vector<int,std::allocator<int>_>,std::allocator<std::vector<int,std::allocator<int>_>_>_>
            (&local_a0,
             ((longlong)(param_1->_Mypair)._Myval2._Mylast -
             (longlong)(param_1->_Mypair)._Myval2._Myfirst) / 0x18,&local_124);
  local_140._Mypair._Myval2._Myfirst = (array<int,2> *)0x0;
  local_140._Mypair._Myval2._Mylast = (array<int,2> *)0x0;
  local_140._Mypair._Myval2._Myend = (array<int,2> *)0x0;
  std::vector<std::array<int,2>,std::allocator<std::array<int,2>_>_>::reserve
            (&local_140,
             (((longlong)(param_2->_Mypair)._Myval2._Mylast -
              (longlong)(param_2->_Mypair)._Myval2._Myfirst) / 0xc) * 3);
  lVar22 = (longlong)(param_2->_Mypair)._Myval2._Mylast -
           (longlong)(param_2->_Mypair)._Myval2._Myfirst;
  local_128 = 0;
  lVar21 = lVar22 >> 0x3f;
  if (lVar22 / 0xc + lVar21 != lVar21) {
    uVar32 = 0;
    do {
      local_e8 = uVar32 * 0xc;
      local_f0 = 0;
      local_120 = 1;
      do {
        iVar15 = *(int *)(&((param_2->_Mypair)._Myval2._Myfirst)->field_0x0 + local_e8 + local_f0);
        piVar28 = local_a0._Mypair._Myval2._Myfirst[iVar15]._Mypair._Myval2._Mylast;
        this_00 = local_a0._Mypair._Myval2._Myfirst + iVar15;
        piVar23 = local_a0._Mypair._Myval2._Myfirst[iVar15]._Mypair._Myval2._Myend;
        if (piVar28 == piVar23) {
          piVar4 = (this_00->_Mypair)._Myval2._Myfirst;
          lVar21 = (longlong)piVar28 - (longlong)piVar4 >> 2;
          if (lVar21 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::vector<int,std::allocator<int>_>::_Xlength();
          }
          uVar32 = lVar21 + 1;
          uVar24 = (longlong)piVar23 - (longlong)piVar4 >> 2;
          if (0x3fffffffffffffff - (uVar24 >> 1) < uVar24) {
            uVar25 = 0x3fffffffffffffff;
          }
          else {
            uVar24 = uVar24 + (uVar24 >> 1);
            uVar25 = uVar32;
            if (uVar32 <= uVar24) {
              uVar25 = uVar24;
            }
            if (0x3fffffffffffffff < uVar25) goto LAB_14958071e;
          }
          _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar25 * 4);
          _Dst[lVar21] = local_128;
          piVar23 = (this_00->_Mypair)._Myval2._Mylast;
          piVar4 = (this_00->_Mypair)._Myval2._Myfirst;
          if (piVar28 == piVar23) {
            sVar31 = (longlong)piVar23 - (longlong)piVar4;
            piVar23 = _Dst;
            piVar28 = piVar4;
          }
          else {
            memmove(_Dst,piVar4,(longlong)piVar28 - (longlong)piVar4);
            piVar23 = _Dst + lVar21 + 1;
            sVar31 = (longlong)(this_00->_Mypair)._Myval2._Mylast - (longlong)piVar28;
          }
          memmove(piVar23,piVar28,sVar31);
          std::vector<int,std::allocator<int>_>::_Change_array(this_00,_Dst,uVar32,uVar25);
        }
        else {
          *piVar28 = local_128;
          ppiVar1 = &(this_00->_Mypair)._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        lVar21 = local_f0;
        paVar27 = local_140._Mypair._Myval2._Mylast;
        pMVar5 = (local_res18->_Mypair)._Myval2._Myfirst;
        iVar15 = *(int *)(&pMVar5->field_0x0 +
                         (longlong)
                         (local_120 +
                         (local_120 / 3 + (local_120 >> 0x1f) +
                         (int)(((longlong)local_120 / 3 + ((longlong)local_120 >> 0x3f) &
                               0xffffffffU) >> 0x1f)) * -3) * 4 + local_e8);
        iVar16 = *(int *)(&pMVar5->field_0x0 + local_f0 + local_e8);
        if (iVar16 < iVar15) {
          local_100 = iVar16;
          iStack_fc = iVar15;
          if (local_140._Mypair._Myval2._Mylast == local_140._Mypair._Myval2._Myend) {
            lVar22 = (longlong)local_140._Mypair._Myval2._Mylast -
                     (longlong)local_140._Mypair._Myval2._Myfirst >> 3;
            if (lVar22 == 0x1fffffffffffffff) {
LAB_149580718:
                    /* WARNING: Subroutine does not return */
              std::vector<std::array<int,2>,std::allocator<std::array<int,2>_>_>::_Xlength();
            }
            uVar32 = lVar22 + 1;
            uVar24 = (longlong)local_140._Mypair._Myval2._Myend -
                     (longlong)local_140._Mypair._Myval2._Myfirst >> 3;
            if (0x1fffffffffffffff - (uVar24 >> 1) < uVar24) {
              uVar25 = 0x1fffffffffffffff;
            }
            else {
              uVar24 = uVar24 + (uVar24 >> 1);
              uVar25 = uVar32;
              if (uVar32 <= uVar24) {
                uVar25 = uVar24;
              }
              if (0x1fffffffffffffff < uVar25) {
LAB_14958071e:
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_array_new_length();
              }
            }
            paVar18 = std::_Allocate<16,std::_Default_allocate_traits>(uVar25 * 8);
            *(ulonglong *)paVar18[lVar22]._Elems = CONCAT44(iStack_fc,local_100);
            if (paVar27 == local_140._Mypair._Myval2._Mylast) {
              sVar31 = (longlong)local_140._Mypair._Myval2._Mylast -
                       (longlong)local_140._Mypair._Myval2._Myfirst;
              paVar26 = paVar18;
              paVar27 = local_140._Mypair._Myval2._Myfirst;
            }
            else {
              memmove(paVar18,local_140._Mypair._Myval2._Myfirst,
                      (longlong)paVar27 - (longlong)local_140._Mypair._Myval2._Myfirst);
              paVar26 = paVar18 + lVar22 + 1;
              sVar31 = (longlong)local_140._Mypair._Myval2._Mylast - (longlong)paVar27;
            }
            memmove(paVar26,paVar27,sVar31);
            if (local_140._Mypair._Myval2._Myfirst != (array<int,2> *)0x0) {
              uVar29 = (longlong)local_140._Mypair._Myval2._Myend -
                       (longlong)local_140._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
              paVar27 = local_140._Mypair._Myval2._Myfirst;
              if (0xfff < uVar29) {
                paVar27 = *(array<int,2> **)local_140._Mypair._Myval2._Myfirst[-1]._Elems;
                uVar29 = uVar29 + 0x27;
                if (0x1f < (ulonglong)
                           ((longlong)local_140._Mypair._Myval2._Myfirst + (-8 - (longlong)paVar27))
                   ) goto LAB_1495806c1;
              }
              ::operator_delete(paVar27,uVar29);
            }
            local_140._Mypair._Myval2._Myend = paVar18 + uVar25;
LAB_14958009a:
            local_140._Mypair._Myval2._Mylast = paVar18 + uVar32;
            local_140._Mypair._Myval2._Myfirst = paVar18;
          }
          else {
            *(ulonglong *)(local_140._Mypair._Myval2._Mylast)->_Elems = CONCAT44(iVar15,iVar16);
            local_140._Mypair._Myval2._Mylast = local_140._Mypair._Myval2._Mylast + 1;
          }
        }
        else {
          local_f8 = iVar15;
          iStack_f4 = iVar16;
          if (local_140._Mypair._Myval2._Mylast == local_140._Mypair._Myval2._Myend) {
            lVar22 = (longlong)local_140._Mypair._Myval2._Mylast -
                     (longlong)local_140._Mypair._Myval2._Myfirst >> 3;
            if (lVar22 == 0x1fffffffffffffff) goto LAB_149580718;
            uVar32 = lVar22 + 1;
            uVar24 = (longlong)local_140._Mypair._Myval2._Myend -
                     (longlong)local_140._Mypair._Myval2._Myfirst >> 3;
            if (0x1fffffffffffffff - (uVar24 >> 1) < uVar24) {
              uVar25 = 0x1fffffffffffffff;
            }
            else {
              uVar24 = (uVar24 >> 1) + uVar24;
              uVar25 = uVar32;
              if (uVar32 <= uVar24) {
                uVar25 = uVar24;
              }
              if (0x1fffffffffffffff < uVar25) goto LAB_14958071e;
            }
            paVar18 = std::_Allocate<16,std::_Default_allocate_traits>(uVar25 * 8);
            *(ulonglong *)paVar18[lVar22]._Elems = CONCAT44(iStack_f4,local_f8);
            if (paVar27 == local_140._Mypair._Myval2._Mylast) {
              sVar31 = (longlong)local_140._Mypair._Myval2._Mylast -
                       (longlong)local_140._Mypair._Myval2._Myfirst;
              paVar26 = paVar18;
              paVar27 = local_140._Mypair._Myval2._Myfirst;
            }
            else {
              memmove(paVar18,local_140._Mypair._Myval2._Myfirst,
                      (longlong)paVar27 - (longlong)local_140._Mypair._Myval2._Myfirst);
              paVar26 = paVar18 + lVar22 + 1;
              sVar31 = (longlong)local_140._Mypair._Myval2._Mylast - (longlong)paVar27;
            }
            memmove(paVar26,paVar27,sVar31);
            if (local_140._Mypair._Myval2._Myfirst != (array<int,2> *)0x0) {
              uVar29 = (longlong)local_140._Mypair._Myval2._Myend -
                       (longlong)local_140._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
              paVar27 = local_140._Mypair._Myval2._Myfirst;
              if (0xfff < uVar29) {
                paVar27 = *(array<int,2> **)local_140._Mypair._Myval2._Myfirst[-1]._Elems;
                uVar29 = uVar29 + 0x27;
                if (0x1f < (ulonglong)
                           ((longlong)local_140._Mypair._Myval2._Myfirst + (-8 - (longlong)paVar27))
                   ) goto LAB_1495806c1;
              }
              ::operator_delete(paVar27,uVar29);
            }
            local_140._Mypair._Myval2._Myend = paVar18 + uVar25;
            goto LAB_14958009a;
          }
          *(ulonglong *)(local_140._Mypair._Myval2._Mylast)->_Elems = CONCAT44(iVar16,iVar15);
          local_140._Mypair._Myval2._Mylast = local_140._Mypair._Myval2._Mylast + 1;
        }
        local_f0 = lVar21 + 4;
        local_120 = local_120 + 1;
        param_2 = local_res18;
      } while (local_f0 < 0xc);
      local_128 = local_128 + 1;
      uVar32 = (ulonglong)local_128;
      this_01 = local_c8;
    } while (uVar32 < (ulonglong)
                      (((longlong)(local_res18->_Mypair)._Myval2._Mylast -
                       (longlong)(local_res18->_Mypair)._Myval2._Myfirst) / 0xc));
  }
  std::_Sort_unchecked<std::array<int,2>_*,std::less<void>_>
            (local_140._Mypair._Myval2._Myfirst,local_140._Mypair._Myval2._Mylast,
             (longlong)local_140._Mypair._Myval2._Mylast -
             (longlong)local_140._Mypair._Myval2._Myfirst >> 3,(less<void>)0x0);
  if (local_140._Mypair._Myval2._Myfirst != local_140._Mypair._Myval2._Mylast) {
    paVar27 = local_140._Mypair._Myval2._Myfirst + 1;
    paVar18 = local_140._Mypair._Myval2._Myfirst;
    do {
      paVar26 = paVar18;
      paVar18 = paVar27;
      if (paVar18 == local_140._Mypair._Myval2._Mylast) goto LAB_1495801bb;
      paVar27 = (array<int,2> *)((longlong)paVar18 + 8);
    } while (*(longlong *)paVar26 != *(longlong *)paVar18);
    for (; paVar27 != local_140._Mypair._Myval2._Mylast; paVar27 = paVar27 + 1) {
      if (*(longlong *)paVar26->_Elems != *(longlong *)paVar27->_Elems) {
        paVar26 = paVar26 + 1;
        *(undefined8 *)paVar26->_Elems = *(undefined8 *)paVar27->_Elems;
      }
    }
    if (paVar26 + 1 != local_140._Mypair._Myval2._Mylast) {
      memmove(paVar26 + 1,local_140._Mypair._Myval2._Mylast,0);
    }
  }
LAB_1495801bb:
  local_e0._Mypair._Myval2._Myend =
       (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0;
  local_118._Mypair._Myval2._Myend = (array<int,2> *)0x0;
  local_b0 = (uint *)0x0;
  local_e0._Mypair._Myval2._Myfirst =
       (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0;
  local_e0._Mypair._Myval2._Mylast =
       (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0;
  local_118._Mypair._Myval2._Myfirst = (array<int,2> *)0x0;
  local_118._Mypair._Myval2._Mylast = (array<int,2> *)0x0;
  local_c0 = (undefined1  [8])0x0;
  puStack_b8 = (uint *)0x0;
  local_a8 = 0;
  local_res18 = (vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>
                 *)CONCAT71(local_res18._1_7_,1);
  pvVar19 = std::vector<bool,std::allocator<bool>_>::vector<bool,std::allocator<bool>_>
                      (&local_68,
                       ((longlong)(param_2->_Mypair)._Myval2._Mylast -
                       (longlong)(param_2->_Mypair)._Myval2._Myfirst) / 0xc,(bool *)&local_res18,
                       &local_123);
  local_148[0] = true;
  pvVar20 = std::vector<bool,std::allocator<bool>_>::vector<bool,std::allocator<bool>_>
                      (&local_88,
                       ((longlong)(param_2->_Mypair)._Myval2._Mylast -
                       (longlong)(param_2->_Mypair)._Myval2._Myfirst) / 0xc,local_148,local_122);
  find_boundary_edges(param_1,param_2,pvVar20,pvVar19,&local_e0,
                      (vector<bool,std::allocator<bool>_> *)local_c0,&local_118);
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Tidy
            ((vector<unsigned_int,std::allocator<unsigned_int>_> *)&local_88);
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Tidy
            ((vector<unsigned_int,std::allocator<unsigned_int>_> *)&local_68);
  if (((this->BTree).Vertices.ArrayNum != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("BTree.Vertices.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\fTetWild\\AABBWrapper.cpp"
                          ,0x1f,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->BTree).Tris.ArrayNum != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("BTree.Tris.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\fTetWild\\AABBWrapper.cpp"
                          ,0x20,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (local_118._Mypair._Myval2._Myfirst == local_118._Mypair._Myval2._Mylast) {
    iVar15 = (this_01->Vertices).ArrayNum;
    piVar28 = &(this_01->Vertices).ArrayMax;
    if (iVar15 == *piVar28) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this_01,piVar28);
    }
    lVar21 = (longlong)iVar15;
    (this_01->Vertices).ArrayNum = iVar15 + 1;
    piVar28 = &(this->BTree).Tris.ArrayMax;
    pFVar6 = (this_01->Vertices).AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + lVar21 * 0x18) = 0;
    *(undefined8 *)(pFVar6 + lVar21 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar6 + lVar21 * 0x18 + 0x10) = 0;
    iVar15 = (this->BTree).Tris.ArrayNum;
    if (iVar15 == *piVar28) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&(this->BTree).Tris.AllocatorInstance,piVar28);
    }
    (this->BTree).Tris.ArrayNum = iVar15 + 1;
    pFVar6 = (this->BTree).Tris.AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar15 * 0xc) = 0;
    *(undefined4 *)(pFVar6 + (longlong)iVar15 * 0xc + 8) = 0;
  }
  else {
    uVar10 = (int)((longlong)local_118._Mypair._Myval2._Mylast -
                   (longlong)local_118._Mypair._Myval2._Myfirst >> 3) * 2;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar28 = &(this_01->Vertices).ArrayMax;
    paVar27 = local_118._Mypair._Myval2._Myfirst;
    paVar18 = local_118._Mypair._Myval2._Mylast;
    if ((this_01->Vertices).ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar10,(ForAnyElementType *)this_01,(this_01->Vertices).ArrayNum,piVar28);
      paVar27 = local_118._Mypair._Myval2._Myfirst;
      paVar18 = local_118._Mypair._Myval2._Mylast;
    }
    for (; paVar26 = local_118._Mypair._Myval2._Mylast, paVar27 != local_118._Mypair._Myval2._Mylast
        ; paVar27 = paVar27 + 1) {
      iVar15 = paVar27->_Elems[0];
      pMVar7 = (param_1->_Mypair)._Myval2._Myfirst;
      iVar16 = (this_01->Vertices).ArrayNum;
      local_118._Mypair._Myval2._Mylast = paVar18;
      if (iVar16 == *piVar28) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this_01,piVar28);
      }
      (this_01->Vertices).ArrayNum = iVar16 + 1;
      puVar3 = &pMVar7[iVar15].field_0x8;
      uVar11 = *(undefined8 *)puVar3;
      uVar12 = *(undefined8 *)(puVar3 + 8);
      pFVar6 = (this_01->Vertices).AllocatorInstance.Data;
      pMVar8 = (param_1->_Mypair)._Myval2._Myfirst;
      *(undefined8 *)(pFVar6 + (longlong)iVar16 * 0x18) = *(undefined8 *)(pMVar7 + iVar15);
      pFVar6 = pFVar6 + (longlong)iVar16 * 0x18 + 8;
      *(undefined8 *)pFVar6 = uVar11;
      *(undefined8 *)(pFVar6 + 8) = uVar12;
      iVar15 = paVar27->_Elems[1];
      iVar16 = (this_01->Vertices).ArrayNum;
      if (iVar16 == *piVar28) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this_01,piVar28);
      }
      (this_01->Vertices).ArrayNum = iVar16 + 1;
      pFVar6 = (this_01->Vertices).AllocatorInstance.Data;
      puVar3 = &pMVar8[iVar15].field_0x8;
      uVar11 = *(undefined8 *)puVar3;
      uVar12 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(pFVar6 + (longlong)iVar16 * 0x18) = *(undefined8 *)(pMVar8 + iVar15);
      pFVar6 = pFVar6 + (longlong)iVar16 * 0x18 + 8;
      *(undefined8 *)pFVar6 = uVar11;
      *(undefined8 *)(pFVar6 + 8) = uVar12;
      paVar18 = local_118._Mypair._Myval2._Mylast;
      local_118._Mypair._Myval2._Mylast = paVar26;
    }
    pTVar2 = &(this->BTree).Tris;
    uVar32 = (longlong)paVar18 - (longlong)local_118._Mypair._Myval2._Myfirst >> 3;
    iVar15 = (int)uVar32;
    if (iVar15 < 0) {
      local_118._Mypair._Myval2._Mylast = paVar18;
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar32 & 0xffffffff);
    }
    local_118._Mypair._Myval2._Mylast = paVar18;
    if ((this->BTree).Tris.ArrayMax < iVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar15,&pTVar2->AllocatorInstance,(this->BTree).Tris.ArrayNum,
                 &(this->BTree).Tris.ArrayMax);
    }
    iVar15 = 0;
    if ((longlong)local_118._Mypair._Myval2._Mylast - (longlong)local_118._Mypair._Myval2._Myfirst
        >> 3 != 0) {
      iVar16 = 0;
      do {
        iVar17 = (this->BTree).Tris.ArrayNum;
        if (iVar17 == (this->BTree).Tris.ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&pTVar2->AllocatorInstance,&(this->BTree).Tris.ArrayMax);
          (this->BTree).Tris.ArrayNum = iVar17;
        }
        iVar15 = iVar15 + 1;
        (this->BTree).Tris.ArrayNum = iVar17 + 1;
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        lVar21 = (longlong)iVar17;
        *(int *)(pFVar6 + lVar21 * 0xc) = iVar16;
        *(int *)(pFVar6 + lVar21 * 0xc + 8) = iVar16 + 1;
        *(int *)(pFVar6 + lVar21 * 0xc + 4) = iVar16;
        iVar16 = iVar16 + 2;
      } while ((ulonglong)(longlong)iVar15 <
               (ulonglong)
               ((longlong)local_118._Mypair._Myval2._Mylast -
                (longlong)local_118._Mypair._Myval2._Myfirst >> 3));
    }
  }
  (this->BTree).Tree.MeshChangeStamp = 0;
  (this->BTree).Tree.Mesh = &(this->BTree).Mesh;
  UE::Geometry::
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::BuildTopDown(&(this->BTree).Tree,false);
  (this->BTree).Tree.MeshChangeStamp = 1;
  (this->BTree).bTreeBuilt = true;
  if (local_118._Mypair._Myval2._Myfirst == local_118._Mypair._Myval2._Mylast) {
    local_res20->is_closed = true;
  }
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Tidy
            ((vector<unsigned_int,std::allocator<unsigned_int>_> *)local_c0);
  if (local_118._Mypair._Myval2._Myfirst != (array<int,2> *)0x0) {
    uVar29 = (longlong)local_118._Mypair._Myval2._Myend -
             (longlong)local_118._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
    paVar27 = local_118._Mypair._Myval2._Myfirst;
    if (0xfff < uVar29) {
      paVar27 = *(array<int,2> **)local_118._Mypair._Myval2._Myfirst[-1]._Elems;
      uVar29 = uVar29 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_118._Mypair._Myval2._Myfirst + (-8 - (longlong)paVar27)))
      goto LAB_1495806c1;
    }
    ::operator_delete(paVar27,uVar29);
    local_118._Mypair._Myval2._Myend = (array<int,2> *)0x0;
    local_118._Mypair._Myval2._Myfirst = (array<int,2> *)0x0;
    local_118._Mypair._Myval2._Mylast = (array<int,2> *)0x0;
  }
  ppVar13 = local_e0._Mypair._Myval2._Mylast;
  ppVar30 = local_e0._Mypair._Myval2._Myfirst;
  if (local_e0._Mypair._Myval2._Myfirst !=
      (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0) {
    for (; ppVar30 != ppVar13; ppVar30 = ppVar30 + 1) {
      std::vector<int,std::allocator<int>_>::_Tidy(&ppVar30->second);
    }
    uVar29 = (longlong)local_e0._Mypair._Myval2._Myend - (longlong)local_e0._Mypair._Myval2._Myfirst
             & 0xffffffffffffffe0;
    ppVar30 = local_e0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar29) {
      ppVar30 = (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)
                local_e0._Mypair._Myval2._Myfirst[-1].second._Mypair._Myval2._Myend;
      uVar29 = uVar29 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)ppVar30))
         ) goto LAB_1495806c1;
    }
    ::operator_delete(ppVar30,uVar29);
    local_e0._Mypair._Myval2._Myend =
         (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0;
    local_e0._Mypair._Myval2._Myfirst =
         (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0;
    local_e0._Mypair._Myval2._Mylast =
         (pair<std::array<int,2>,std::vector<int,std::allocator<int>_>_> *)0x0;
  }
  if (local_140._Mypair._Myval2._Myfirst != (array<int,2> *)0x0) {
    uVar29 = (longlong)local_140._Mypair._Myval2._Myend -
             (longlong)local_140._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
    paVar27 = local_140._Mypair._Myval2._Myfirst;
    if (0xfff < uVar29) {
      paVar27 = *(array<int,2> **)local_140._Mypair._Myval2._Myfirst[-1]._Elems;
      uVar29 = uVar29 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_140._Mypair._Myval2._Myfirst + (-8 - (longlong)paVar27))) {
LAB_1495806c1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(paVar27,uVar29);
    local_140._Mypair._Myval2._Myend = (array<int,2> *)0x0;
    local_140._Mypair._Myval2._Myfirst = (array<int,2> *)0x0;
    local_140._Mypair._Myval2._Mylast = (array<int,2> *)0x0;
  }
  std::
  vector<std::vector<int,std::allocator<int>_>,std::allocator<std::vector<int,std::allocator<int>_>_>_>
  ::_Tidy(&local_a0);
  return;
}

// init_tmp_b_mesh_and_tree @ 149580740

void __thiscall
floatTetWild::AABBWrapper::init_tmp_b_mesh_and_tree
          (AABBWrapper *this,
          vector<Eigen::Matrix<double,3,1,0,3,1>,std::allocator<Eigen::Matrix<double,3,1,0,3,1>_>_>
          *param_1,vector<Eigen::Matrix<int,3,1,0,3,1>,std::allocator<Eigen::Matrix<int,3,1,0,3,1>_>_>
                   *param_2,vector<std::array<int,2>,std::allocator<std::array<int,2>_>_> *param_3,
          Mesh *param_4,vector<std::array<int,2>,std::allocator<std::array<int,2>_>_> *param_5)

{
  array<int,2> **ppaVar1;
  int *piVar2;
  FTriTreeWrapper *pFVar3;
  undefined1 *puVar4;
  array<int,2> *paVar5;
  FScriptContainerElement *pFVar6;
  Matrix<double,3,1,0,3,1> *pMVar7;
  Matrix<double,3,1,0,3,1> *pMVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  array<int,2> *paVar14;
  uint uVar15;
  ulonglong uVar16;
  
  pFVar3 = &this->TmpBTree;
  FTriTreeWrapper::Reset(pFVar3);
  paVar5 = (param_3->_Mypair)._Myval2._Mylast;
  paVar14 = (param_3->_Mypair)._Myval2._Myfirst;
  ppaVar1 = &(param_5->_Mypair)._Myval2._Mylast;
  if ((paVar14 == paVar5) && ((param_5->_Mypair)._Myval2._Myfirst == *ppaVar1)) {
    iVar11 = (this->TmpBTree).Vertices.ArrayNum;
    piVar2 = &(this->TmpBTree).Vertices.ArrayMax;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)pFVar3,piVar2);
    }
    lVar13 = (longlong)iVar11;
    (this->TmpBTree).Vertices.ArrayNum = iVar11 + 1;
    piVar2 = &(this->TmpBTree).Tris.ArrayMax;
    pFVar6 = (pFVar3->Vertices).AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar6 + lVar13 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar6 + lVar13 * 0x18 + 0x10) = 0;
    iVar11 = (this->TmpBTree).Tris.ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&(this->TmpBTree).Tris.AllocatorInstance,piVar2);
    }
    (this->TmpBTree).Tris.ArrayNum = iVar11 + 1;
    pFVar6 = (this->TmpBTree).Tris.AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar11 * 0xc) = 0;
    *(undefined4 *)(pFVar6 + (longlong)iVar11 * 0xc + 8) = 0;
  }
  else {
    uVar15 = ((int)((longlong)*ppaVar1 - (longlong)(param_5->_Mypair)._Myval2._Myfirst >> 3) +
             (int)((longlong)paVar5 - (longlong)paVar14 >> 3)) * 2;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(this->TmpBTree).Vertices.ArrayMax;
    if (*piVar2 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar15,(ForAnyElementType *)pFVar3,(this->TmpBTree).Vertices.ArrayNum,piVar2
                );
    }
    paVar5 = (param_3->_Mypair)._Myval2._Mylast;
    for (paVar14 = (param_3->_Mypair)._Myval2._Myfirst; paVar14 != paVar5; paVar14 = paVar14 + 1) {
      iVar11 = paVar14->_Elems[0];
      pMVar7 = (param_1->_Mypair)._Myval2._Myfirst;
      iVar12 = (this->TmpBTree).Vertices.ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar3,piVar2);
      }
      (this->TmpBTree).Vertices.ArrayNum = iVar12 + 1;
      puVar4 = &pMVar7[iVar11].field_0x8;
      uVar9 = *(undefined8 *)puVar4;
      uVar10 = *(undefined8 *)(puVar4 + 8);
      pFVar6 = (pFVar3->Vertices).AllocatorInstance.Data;
      pMVar8 = (param_1->_Mypair)._Myval2._Myfirst;
      *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18) = *(undefined8 *)(pMVar7 + iVar11);
      pFVar6 = pFVar6 + (longlong)iVar12 * 0x18 + 8;
      *(undefined8 *)pFVar6 = uVar9;
      *(undefined8 *)(pFVar6 + 8) = uVar10;
      iVar11 = paVar14->_Elems[1];
      iVar12 = (this->TmpBTree).Vertices.ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar3,piVar2);
      }
      (this->TmpBTree).Vertices.ArrayNum = iVar12 + 1;
      pFVar6 = (pFVar3->Vertices).AllocatorInstance.Data;
      puVar4 = &pMVar8[iVar11].field_0x8;
      uVar9 = *(undefined8 *)puVar4;
      uVar10 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18) = *(undefined8 *)(pMVar8 + iVar11);
      pFVar6 = pFVar6 + (longlong)iVar12 * 0x18 + 8;
      *(undefined8 *)pFVar6 = uVar9;
      *(undefined8 *)(pFVar6 + 8) = uVar10;
    }
    paVar5 = (param_5->_Mypair)._Myval2._Mylast;
    paVar14 = (param_5->_Mypair)._Myval2._Myfirst;
    if (paVar14 != paVar5) {
      pFVar3 = &this->TmpBTree;
      do {
        iVar11 = paVar14->_Elems[0];
        pMVar7 = (param_1->_Mypair)._Myval2._Myfirst;
        iVar12 = (this->TmpBTree).Vertices.ArrayNum;
        if (iVar12 == (this->TmpBTree).Vertices.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar3,&(this->TmpBTree).Vertices.ArrayMax)
          ;
        }
        (this->TmpBTree).Vertices.ArrayNum = iVar12 + 1;
        puVar4 = &pMVar7[iVar11].field_0x8;
        uVar9 = *(undefined8 *)puVar4;
        uVar10 = *(undefined8 *)(puVar4 + 8);
        pFVar6 = (pFVar3->Vertices).AllocatorInstance.Data;
        pMVar8 = (param_1->_Mypair)._Myval2._Myfirst;
        *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18) = *(undefined8 *)(pMVar7 + iVar11);
        pFVar6 = pFVar6 + (longlong)iVar12 * 0x18 + 8;
        *(undefined8 *)pFVar6 = uVar9;
        *(undefined8 *)(pFVar6 + 8) = uVar10;
        iVar11 = paVar14->_Elems[1];
        iVar12 = (this->TmpBTree).Vertices.ArrayNum;
        if (iVar12 == (this->TmpBTree).Vertices.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar3,&(this->TmpBTree).Vertices.ArrayMax)
          ;
        }
        paVar14 = paVar14 + 1;
        (this->TmpBTree).Vertices.ArrayNum = iVar12 + 1;
        pFVar6 = (pFVar3->Vertices).AllocatorInstance.Data;
        puVar4 = &pMVar8[iVar11].field_0x8;
        uVar9 = *(undefined8 *)puVar4;
        uVar10 = *(undefined8 *)(puVar4 + 8);
        *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18) = *(undefined8 *)(pMVar8 + iVar11);
        pFVar6 = pFVar6 + (longlong)iVar12 * 0x18 + 8;
        *(undefined8 *)pFVar6 = uVar9;
        *(undefined8 *)(pFVar6 + 8) = uVar10;
      } while (paVar14 != paVar5);
    }
    uVar15 = (int)((longlong)(param_5->_Mypair)._Myval2._Mylast -
                   (longlong)(param_5->_Mypair)._Myval2._Myfirst >> 3) +
             (int)((longlong)(param_3->_Mypair)._Myval2._Mylast -
                   (longlong)(param_3->_Mypair)._Myval2._Myfirst >> 3);
    uVar16 = (ulonglong)uVar15;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(this->TmpBTree).Tris.ArrayMax;
    if (*piVar2 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar15,&(this->TmpBTree).Tris.AllocatorInstance,
                 (this->TmpBTree).Tris.ArrayNum,piVar2);
    }
    if (0 < (int)uVar15) {
      iVar11 = 0;
      do {
        iVar12 = (this->TmpBTree).Tris.ArrayNum;
        if (iVar12 == (this->TmpBTree).Tris.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&(this->TmpBTree).Tris.AllocatorInstance,
                              &(this->TmpBTree).Tris.ArrayMax);
        }
        lVar13 = (longlong)iVar12;
        (this->TmpBTree).Tris.ArrayNum = iVar12 + 1;
        pFVar6 = (this->TmpBTree).Tris.AllocatorInstance.Data;
        iVar12 = iVar11 + 1;
        *(int *)(pFVar6 + lVar13 * 0xc) = iVar11;
        *(int *)(pFVar6 + lVar13 * 0xc + 4) = iVar11;
        iVar11 = iVar11 + 2;
        *(int *)(pFVar6 + lVar13 * 0xc + 8) = iVar12;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  (this->TmpBTree).Tree.MeshChangeStamp = 0;
  (this->TmpBTree).Tree.Mesh = &(this->TmpBTree).Mesh;
  UE::Geometry::
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::BuildTopDown(&(this->TmpBTree).Tree,false);
  (this->TmpBTree).Tree.MeshChangeStamp = 1;
  (this->TmpBTree).bTreeBuilt = true;
  return;
}

// get_sf_diag @ 1495f75c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall floatTetWild::AABBWrapper::get_sf_diag(AABBWrapper *this)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar3 = (this->SFTree).Tree.RootIndex;
  if ((int)uVar3 < 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2828200105734045879>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                       ,0xb7,"RootIndex >= 0");
    dVar10 = _UNK_150a9e648;
    dVar11 = _UNK_1508ffb58;
    dVar12 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dVar1 = __real_ffefffffffffffff;
    dVar2 = __real_7fefffffffffffff;
    dVar9 = ___xmm_ffefffffffffffffffefffffffffffff;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar9 = (double)(*pcVar6)();
      return dVar9;
    }
  }
  else {
    uVar8 = (ulonglong)(uVar3 & 0x1ff);
    lVar4 = *(longlong *)
             ((this->SFTree).Tree.BoxCenters.Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar3 >> 9) * 8);
    dVar9 = *(double *)(lVar4 + uVar8 * 0x18);
    lVar5 = *(longlong *)
             ((this->SFTree).Tree.BoxExtents.Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar3 >> 9) * 8);
    dVar1 = *(double *)(lVar4 + 8 + uVar8 * 0x18);
    dVar2 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    dVar10 = dVar2 - *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
    dVar11 = dVar1 + *(double *)(lVar5 + 8 + uVar8 * 0x18);
    dVar12 = dVar1 - *(double *)(lVar5 + 8 + uVar8 * 0x18);
    dVar1 = dVar2 + *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
    dVar2 = dVar9 - *(double *)(lVar5 + uVar8 * 0x18);
    dVar9 = dVar9 + *(double *)(lVar5 + uVar8 * 0x18);
  }
  return SQRT((dVar11 - dVar12) * (dVar11 - dVar12) + (dVar9 - dVar2) * (dVar9 - dVar2) +
              (dVar1 - dVar10) * (dVar1 - dVar10));
}

// is_out_sf_envelope @ 149600220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
floatTetWild::AABBWrapper::is_out_sf_envelope
          (AABBWrapper *this,Matrix<double,3,1,0,3,1> *param_1,double param_2,int *param_3,
          double *param_4,Matrix<double,3,1,0,3,1> *param_5)

{
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *pTVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong *plVar9;
  undefined1 auStackY_2e8 [32];
  int local_2b8 [2];
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 TStack_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218 [2];
  double local_1e8;
  undefined8 local_1d8;
  longlong local_1c8;
  longlong local_1b8 [3];
  longlong *local_1a0;
  undefined1 local_198;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (*param_3 != -1) {
    UE::Geometry::
    TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
    GetTriVertices(&(this->SFTree).Mesh,*param_3,(TVector<double> *)&local_298._s_0,
                   (TVector<double> *)&TStack_280._s_0,(TVector<double> *)&local_268._s_0);
    local_f8._s_0.X = (double)*(undefined8 *)param_1;
    local_f8._s_0.Y = (double)*(undefined8 *)&param_1->field_0x8;
    local_f8._s_0.Z = (double)*(undefined8 *)&param_1->field_0x10;
    local_e0 = local_298._s_0.X;
    dStack_d8 = local_298._s_0.Y;
    local_d0 = local_298._s_0.Z;
    dStack_c8 = TStack_280._s_0.X;
    local_c0 = TStack_280._s_0.Y;
    dStack_b8 = TStack_280._s_0.Z;
    local_b0 = local_268._s_0.X;
    dStack_a8 = local_268._s_0.Y;
    local_a0 = local_268._s_0.Z;
    dVar3 = UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                      ((TDistPoint3Triangle3<double> *)&local_f8._s_0);
    *(undefined8 *)param_5 = local_80;
    *(undefined8 *)&param_5->field_0x8 = uStack_78;
    *(undefined8 *)&param_5->field_0x10 = local_70;
    *param_4 = dVar3;
  }
  if (*param_4 <= param_2) {
    bVar7 = false;
  }
  else {
    local_2b8[0] = -1;
    local_2b0 = *(double *)param_1;
    dStack_2a8 = *(double *)&param_1->field_0x8;
    pTVar1 = &(this->SFTree).Tree;
    local_1c8 = 0;
    local_2a0 = *(double *)&param_1->field_0x10;
    local_1a0 = (longlong *)0x0;
    local_198 = 0;
    local_1d8 = __real_7fefffffffffffff;
    cVar6 = (**(code **)(pTVar1->_padding_ + 0x58))(pTVar1,&local_2b0,param_2,local_2b8);
    if (local_1c8 != 0) {
      plVar9 = local_1b8;
      if (local_1a0 != (longlong *)0x0) {
        plVar9 = local_1a0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    dVar5 = dStack_2a8;
    dVar3 = local_2b0;
    if ((cVar6 == '\0') &&
       ((local_2b8[0] = *param_3, local_2b8[0] < 0 || ((this->SFTree).Tris.ArrayNum <= local_2b8[0])
        ))) {
      local_2b8[0] = (this->SFTree).Tris.ArrayNum + -1;
    }
    iVar4 = local_2b8[0];
    if (-1 < local_2b8[0]) {
      local_1e8 = local_2a0;
      if (((local_2b8[0] < 0) || (((this->SFTree).Mesh.SourceTriangles)->ArrayNum <= local_2b8[0]))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mesh.IsTriangle(TriIdx)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                ,0x1e,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      UE::Geometry::
      TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
      GetTriVertices(&(this->SFTree).Mesh,iVar4,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218[0]._s_0);
      local_188._s_0.Z = local_1e8;
      local_170 = local_248._s_0.X;
      dStack_168 = local_248._s_0.Y;
      local_160 = local_248._s_0.Z;
      dStack_158 = TStack_230._s_0.X;
      local_150 = TStack_230._s_0.Y;
      dStack_148 = TStack_230._s_0.Z;
      local_188._s_0.X = dVar3;
      local_140 = (double)local_218[0]._0_8_;
      dStack_138 = (double)local_218[0]._8_8_;
      local_130 = (double)local_218[0]._16_8_;
      local_188._s_0.Y = dVar5;
      UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                ((TDistPoint3Triangle3<double> *)&local_188._s_0);
      dVar3 = UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_188._s_0);
      *param_4 = dVar3;
      *(undefined8 *)param_5 = local_110;
      *(undefined8 *)&param_5->field_0x8 = uStack_108;
      *(undefined8 *)&param_5->field_0x10 = local_100;
    }
    *param_3 = local_2b8[0];
    bVar7 = param_2 < *param_4;
  }
  return bVar7;
}

// is_out_tmp_b_envelope @ 149600510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
floatTetWild::AABBWrapper::is_out_tmp_b_envelope
          (AABBWrapper *this,Matrix<double,3,1,0,3,1> *param_1,double param_2,int *param_3)

{
  int iVar1;
  undefined1 auStackY_78 [32];
  double local_48;
  Matrix<double,3,1,0,3,1> local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  iVar1 = FTriTreeWrapper::facet_in_envelope(&this->TmpBTree,param_1,param_2,&local_40,&local_48);
  *param_3 = iVar1;
  return param_2 < local_48;
}

// project_to_sf @ 149610020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
floatTetWild::AABBWrapper::project_to_sf(AABBWrapper *this,Matrix<double,3,1,0,3,1> *param_1)

{
  undefined1 auStack_58 [32];
  double local_38;
  Matrix<double,3,1,0,3,1> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = __real_7fefffffffffffff;
  FTriTreeWrapper::nearest_facet(&this->SFTree,param_1,&local_30,&local_38);
  *(undefined8 *)param_1 = local_30._0_8_;
  *(undefined8 *)&param_1->field_0x8 = local_30._8_8_;
  *(undefined8 *)&param_1->field_0x10 = local_30._16_8_;
  return local_38;
}

