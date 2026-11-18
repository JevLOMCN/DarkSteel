// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 17

// FKDTree @ 14a8ab520

FKDTree * __thiscall UE::PoseSearch::FKDTree::FKDTree(FKDTree *this,FKDTree *param_1)

{
  FKDTreeImplementation **ppFVar1;
  FKDTreeImplementation **ppFVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  FKDTreeImplementation *pFVar5;
  FKDTreeImplementation *pFVar6;
  FKDTreeImplementation *_Src;
  FKDTreeImplementation *_Dst;
  code *pcVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  FKDTreeImplementation *pFVar11;
  FKDTreeImplementation *pFVar12;
  FKDTree *pFVar13;
  uint uVar14;
  FKDTreeImplementation *pFVar15;
  uint uVar17;
  ulong64 uVar18;
  longlong lVar19;
  _Value_init_tag local_res8 [8];
  _Value_init_tag local_res10 [8];
  KDTreeSingleIndexAdaptorParams local_res18 [2];
  FKDTreeImplementation *pFVar16;
  
  pFVar16 = (FKDTreeImplementation *)0x0;
  pFVar15 = (FKDTreeImplementation *)0x0;
  ppFVar1 = &this->KDTreeImplementation;
  (this->DataSource).PointCount = 0;
  (this->DataSource).PointDim = 0;
  (this->DataSource).Data = (float *)0x0;
  *ppFVar1 = (FKDTreeImplementation *)0x0;
  if (this != param_1) {
    ppFVar2 = &param_1->KDTreeImplementation;
    if (param_1->KDTreeImplementation != (FKDTreeImplementation *)0x0) {
      pFVar11 = ::operator_new(0x90);
      pFVar12 = pFVar16;
      if (pFVar11 != (FKDTreeImplementation *)0x0) {
        local_res18[0].leaf_max_size = 0;
        pFVar12 = FKDTreeImplementation::FKDTreeImplementation<>
                            (pFVar11,0,&this->DataSource,local_res18);
      }
      *ppFVar1 = pFVar12;
      iVar9 = (param_1->DataSource).PointDim;
      pfVar8 = (param_1->DataSource).Data;
      (this->DataSource).PointCount = (param_1->DataSource).PointCount;
      (this->DataSource).PointDim = iVar9;
      (this->DataSource).Data = pfVar8;
      if ((0x7fffffff < *(ulonglong *)&(*ppFVar2)->field_0x28) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Other.KDTreeImplementation->m_size <= AccessorTypeMax",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                              ,0x104,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FKDTree *)(*pcVar7)();
        return pFVar13;
      }
      *(undefined8 *)&(*ppFVar1)->field_0x28 = *(undefined8 *)&(*ppFVar2)->field_0x28;
      if (*(longlong *)&(*ppFVar1)->field_0x28 != 0) {
        *(undefined4 *)&(*ppFVar1)->field_0x38 = *(undefined4 *)&(*ppFVar2)->field_0x38;
        if ((0x7fffffff <
             (ulonglong)
             (*(longlong *)&(*ppFVar2)->field_0x48 - *(longlong *)&(*ppFVar2)->field_0x40 >> 3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Other.KDTreeImplementation->root_bbox.size() <= AccessorTypeMax",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                                ,0x10b,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FKDTree *)(*pcVar7)();
          return pFVar13;
        }
        uVar18 = (ulong64)(int)(*(longlong *)&(*ppFVar2)->field_0x48 -
                                *(longlong *)&(*ppFVar2)->field_0x40 >> 3);
        std::
        vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
        ::_Resize<std::_Value_init_tag>
                  ((vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                    *)&(*ppFVar1)->field_0x40,uVar18,local_res8);
        pFVar12 = pFVar16;
        if (0 < (longlong)uVar18) {
          do {
            puVar3 = (undefined4 *)(*(longlong *)&(*ppFVar2)->field_0x40 + (longlong)pFVar12 * 8);
            uVar4 = puVar3[1];
            lVar19 = *(longlong *)&(*ppFVar1)->field_0x40;
            *(undefined4 *)(lVar19 + (longlong)pFVar12 * 8) = *puVar3;
            *(undefined4 *)(lVar19 + 4 + (longlong)pFVar12 * 8) = uVar4;
            pFVar12 = (FKDTreeImplementation *)&pFVar12->field_0x1;
          } while ((longlong)pFVar12 < (longlong)uVar18);
        }
        if ((0x7fffffff < *(ulonglong *)&(*ppFVar2)->field_0x20) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Other.KDTreeImplementation->m_leaf_max_size <= AccessorTypeMax",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                                ,0x114,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FKDTree *)(*pcVar7)();
          return pFVar13;
        }
        *(longlong *)&(*ppFVar1)->field_0x20 = (longlong)*(int *)&(*ppFVar2)->field_0x20;
        if ((0x7fffffff <
             (ulonglong)(*(longlong *)&(*ppFVar2)->field_0x8 - *(longlong *)*ppFVar2 >> 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Other.KDTreeImplementation->vAcc.size() <= AccessorTypeMax",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                                ,0x118,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FKDTree *)(*pcVar7)();
          return pFVar13;
        }
        uVar17 = (uint)(*(longlong *)&(*ppFVar2)->field_0x8 - *(longlong *)*ppFVar2 >> 2);
        uVar18 = (ulong64)(int)uVar17;
        std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
                  ((vector<int,std::allocator<int>_> *)*ppFVar1,uVar18,local_res10);
        pFVar12 = pFVar16;
        if ((0 < (int)uVar17) && (3 < uVar17)) {
          pFVar5 = *ppFVar2;
          pFVar6 = *ppFVar1;
          _Src = *(FKDTreeImplementation **)pFVar5;
          _Dst = *(FKDTreeImplementation **)pFVar6;
          pFVar11 = (FKDTreeImplementation *)
                    ((longlong)&_Dst->field_0x0 + (longlong)(int)(uVar17 - 1) * 4);
          if ((((FKDTreeImplementation *)
                ((longlong)&_Src->field_0x0 + (longlong)(int)(uVar17 - 1) * 4) < _Dst) ||
              (pFVar11 < _Src)) &&
             ((((pFVar12 = pFVar15, ppFVar1 < _Dst || (pFVar11 < ppFVar1)) &&
               ((ppFVar2 < _Dst || (pFVar11 < ppFVar2)))) &&
              (((pFVar6 < _Dst || (pFVar11 < pFVar6)) && ((pFVar5 < _Dst || (pFVar11 < pFVar5)))))))
             ) {
            memcpy(_Dst,_Src,uVar18 * 4);
            pFVar12 = pFVar16;
            do {
              uVar14 = (int)pFVar12 + 1;
              pFVar12 = (FKDTreeImplementation *)(ulonglong)uVar14;
            } while ((int)uVar14 < (int)uVar17);
          }
        }
        for (lVar19 = (longlong)(int)pFVar12; lVar19 < (longlong)uVar18; lVar19 = lVar19 + 1) {
          *(undefined4 *)(*(longlong *)*ppFVar1 + lVar19 * 4) =
               *(undefined4 *)(*(longlong *)*ppFVar2 + lVar19 * 4);
        }
        CopySubTree(this,(Node **)&(*ppFVar1)->field_0x18,(Node **)&(*ppFVar2)->field_0x18);
      }
    }
    Reset(param_1);
  }
  return this;
}

// FKDTree @ 14a8ab810

FKDTree * __thiscall UE::PoseSearch::FKDTree::FKDTree(FKDTree *this,FKDTree *param_1)

{
  FKDTreeImplementation **ppFVar1;
  FKDTreeImplementation **ppFVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  FKDTreeImplementation *pFVar5;
  FKDTreeImplementation *pFVar6;
  FKDTreeImplementation *_Src;
  FKDTreeImplementation *_Dst;
  code *pcVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  FKDTreeImplementation *pFVar11;
  FKDTreeImplementation *pFVar12;
  FKDTree *pFVar13;
  uint uVar14;
  FKDTreeImplementation *pFVar15;
  uint uVar17;
  ulong64 uVar18;
  longlong lVar19;
  _Value_init_tag local_res8 [8];
  _Value_init_tag local_res10 [8];
  KDTreeSingleIndexAdaptorParams local_res18;
  FKDTreeImplementation *pFVar16;
  
  pFVar16 = (FKDTreeImplementation *)0x0;
  pFVar15 = (FKDTreeImplementation *)0x0;
  ppFVar1 = &this->KDTreeImplementation;
  (this->DataSource).PointCount = 0;
  (this->DataSource).PointDim = 0;
  (this->DataSource).Data = (float *)0x0;
  *ppFVar1 = (FKDTreeImplementation *)0x0;
  if (this == param_1) {
    return this;
  }
  ppFVar2 = &param_1->KDTreeImplementation;
  if (param_1->KDTreeImplementation != (FKDTreeImplementation *)0x0) {
    pFVar11 = ::operator_new(0x90);
    pFVar12 = pFVar16;
    if (pFVar11 != (FKDTreeImplementation *)0x0) {
      local_res18.leaf_max_size = 0;
      pFVar12 = FKDTreeImplementation::FKDTreeImplementation<>
                          (pFVar11,0,&this->DataSource,&local_res18);
    }
    *ppFVar1 = pFVar12;
    iVar9 = (param_1->DataSource).PointDim;
    pfVar8 = (param_1->DataSource).Data;
    (this->DataSource).PointCount = (param_1->DataSource).PointCount;
    (this->DataSource).PointDim = iVar9;
    (this->DataSource).Data = pfVar8;
    if ((0x7fffffff < *(ulonglong *)&(*ppFVar2)->field_0x28) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Other.KDTreeImplementation->m_size <= AccessorTypeMax",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                            ,0xd4,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FKDTree *)(*pcVar7)();
      return pFVar13;
    }
    *(undefined8 *)&(*ppFVar1)->field_0x28 = *(undefined8 *)&(*ppFVar2)->field_0x28;
    if (*(longlong *)&(*ppFVar1)->field_0x28 != 0) {
      *(undefined4 *)&(*ppFVar1)->field_0x38 = *(undefined4 *)&(*ppFVar2)->field_0x38;
      if ((0x7fffffff <
           (ulonglong)
           (*(longlong *)&(*ppFVar2)->field_0x48 - *(longlong *)&(*ppFVar2)->field_0x40 >> 3)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Other.KDTreeImplementation->root_bbox.size() <= AccessorTypeMax",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                              ,0xdb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FKDTree *)(*pcVar7)();
        return pFVar13;
      }
      uVar18 = (ulong64)(int)(*(longlong *)&(*ppFVar2)->field_0x48 -
                              *(longlong *)&(*ppFVar2)->field_0x40 >> 3);
      std::
      vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
      ::_Resize<std::_Value_init_tag>
                ((vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                  *)&(*ppFVar1)->field_0x40,uVar18,local_res8);
      pFVar12 = pFVar16;
      if (0 < (longlong)uVar18) {
        do {
          puVar3 = (undefined4 *)(*(longlong *)&(*ppFVar2)->field_0x40 + (longlong)pFVar12 * 8);
          uVar4 = puVar3[1];
          lVar19 = *(longlong *)&(*ppFVar1)->field_0x40;
          *(undefined4 *)(lVar19 + (longlong)pFVar12 * 8) = *puVar3;
          *(undefined4 *)(lVar19 + 4 + (longlong)pFVar12 * 8) = uVar4;
          pFVar12 = (FKDTreeImplementation *)&pFVar12->field_0x1;
        } while ((longlong)pFVar12 < (longlong)uVar18);
      }
      if ((0x7fffffff < *(ulonglong *)&(*ppFVar2)->field_0x20) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Other.KDTreeImplementation->m_leaf_max_size <= AccessorTypeMax",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                              ,0xe4,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FKDTree *)(*pcVar7)();
        return pFVar13;
      }
      *(longlong *)&(*ppFVar1)->field_0x20 = (longlong)*(int *)&(*ppFVar2)->field_0x20;
      if ((0x7fffffff <
           (ulonglong)(*(longlong *)&(*ppFVar2)->field_0x8 - *(longlong *)*ppFVar2 >> 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Other.KDTreeImplementation->vAcc.size() <= AccessorTypeMax",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                              ,0xe8,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FKDTree *)(*pcVar7)();
        return pFVar13;
      }
      uVar17 = (uint)(*(longlong *)&(*ppFVar2)->field_0x8 - *(longlong *)*ppFVar2 >> 2);
      uVar18 = (ulong64)(int)uVar17;
      std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
                ((vector<int,std::allocator<int>_> *)*ppFVar1,uVar18,local_res10);
      pFVar12 = pFVar16;
      if ((0 < (int)uVar17) && (3 < uVar17)) {
        pFVar5 = *ppFVar2;
        pFVar6 = *ppFVar1;
        _Src = *(FKDTreeImplementation **)pFVar5;
        _Dst = *(FKDTreeImplementation **)pFVar6;
        pFVar11 = (FKDTreeImplementation *)
                  ((longlong)&_Dst->field_0x0 + (longlong)(int)(uVar17 - 1) * 4);
        if ((((FKDTreeImplementation *)
              ((longlong)&_Src->field_0x0 + (longlong)(int)(uVar17 - 1) * 4) < _Dst) ||
            (pFVar11 < _Src)) &&
           ((((pFVar12 = pFVar15, ppFVar1 < _Dst || (pFVar11 < ppFVar1)) &&
             ((ppFVar2 < _Dst || (pFVar11 < ppFVar2)))) &&
            (((pFVar6 < _Dst || (pFVar11 < pFVar6)) && ((pFVar5 < _Dst || (pFVar11 < pFVar5))))))))
        {
          memcpy(_Dst,_Src,uVar18 * 4);
          pFVar12 = pFVar16;
          do {
            uVar14 = (int)pFVar12 + 1;
            pFVar12 = (FKDTreeImplementation *)(ulonglong)uVar14;
          } while ((int)uVar14 < (int)uVar17);
        }
      }
      for (lVar19 = (longlong)(int)pFVar12; lVar19 < (longlong)uVar18; lVar19 = lVar19 + 1) {
        *(undefined4 *)(*(longlong *)*ppFVar1 + lVar19 * 4) =
             *(undefined4 *)(*(longlong *)*ppFVar2 + lVar19 * 4);
      }
      CopySubTree(this,(Node **)&(*ppFVar1)->field_0x18,(Node **)&(*ppFVar2)->field_0x18);
      return this;
    }
  }
  return this;
}

// FKDTree @ 14a8abb10

FKDTree * __thiscall
UE::PoseSearch::FKDTree::FKDTree(FKDTree *this,int param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  FKDTreeImplementation *this_00;
  FKDTreeImplementation *pFVar2;
  KDTreeSingleIndexAdaptorParams local_res8;
  
  pFVar2 = (FKDTreeImplementation *)0x0;
  if ((param_2 < 1) || (iVar1 = param_1, param_3 == (float *)0x0)) {
    iVar1 = 0;
  }
  (this->DataSource).PointCount = iVar1;
  (this->DataSource).PointDim = param_2;
  (this->DataSource).Data = param_3;
  this->KDTreeImplementation = (FKDTreeImplementation *)0x0;
  if (((0 < param_1) && (0 < param_2)) && (param_3 != (float *)0x0)) {
    this_00 = ::operator_new(0x90);
    if (this_00 != (FKDTreeImplementation *)0x0) {
      local_res8.leaf_max_size = (ulong64)param_4;
      pFVar2 = FKDTreeImplementation::FKDTreeImplementation<>
                         (this_00,param_2,&this->DataSource,&local_res8);
    }
    this->KDTreeImplementation = pFVar2;
  }
  return this;
}

// FKDTree @ 14a8abba0

FKDTree * __thiscall UE::PoseSearch::FKDTree::FKDTree(FKDTree *this)

{
  (this->DataSource).PointCount = 0;
  (this->DataSource).PointDim = 0;
  (this->DataSource).Data = (float *)0x0;
  this->KDTreeImplementation = (FKDTreeImplementation *)0x0;
  return this;
}

// ~FKDTree @ 14a8ad920

void __thiscall UE::PoseSearch::FKDTree::~FKDTree(FKDTree *this)

{
  Reset(this);
  (this->DataSource).PointCount = 0;
  (this->DataSource).PointDim = 0;
  (this->DataSource).Data = (float *)0x0;
  return;
}

// operator= @ 14a8aec90

FKDTree * __thiscall UE::PoseSearch::FKDTree::operator=(FKDTree *this,FKDTree *param_1)

{
  if (this != param_1) {
    Reset(this);
    (this->DataSource).PointCount = 0;
    (this->DataSource).PointDim = 0;
    (this->DataSource).Data = (float *)0x0;
    FKDTree(this,param_1);
  }
  return this;
}

// operator= @ 14a8aece0

FKDTree * __thiscall UE::PoseSearch::FKDTree::operator=(FKDTree *this,FKDTree *param_1)

{
  if (this != param_1) {
    Reset(this);
    (this->DataSource).PointCount = 0;
    (this->DataSource).PointDim = 0;
    (this->DataSource).Data = (float *)0x0;
    FKDTree(this,param_1);
  }
  return this;
}

// operator== @ 14a8af350

bool __thiscall UE::PoseSearch::FKDTree::operator==(FKDTree *this,FKDTree *param_1)

{
  int iVar1;
  FKDTreeImplementation *pFVar2;
  FKDTreeImplementation *pFVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong _Size;
  
  pFVar2 = param_1->KDTreeImplementation;
  pFVar3 = this->KDTreeImplementation;
  if ((pFVar3 != (FKDTreeImplementation *)0x0) != (pFVar2 != (FKDTreeImplementation *)0x0)) {
    return false;
  }
  lVar9 = 0;
  if ((pFVar3 != (FKDTreeImplementation *)0x0) && (pFVar2 != (FKDTreeImplementation *)0x0)) {
    if (*(longlong *)&pFVar3->field_0x28 != *(longlong *)&pFVar2->field_0x28) {
      return false;
    }
    if (*(int *)&pFVar3->field_0x38 != *(int *)&pFVar2->field_0x38) {
      return false;
    }
    lVar10 = *(longlong *)&pFVar3->field_0x40;
    pfVar7 = *(float **)&pFVar2->field_0x40;
    iVar5 = (int)(*(longlong *)&pFVar3->field_0x48 - lVar10 >> 3);
    if ((longlong)iVar5 != *(longlong *)&pFVar2->field_0x48 - (longlong)pfVar7 >> 3) {
      return false;
    }
    if (0 < iVar5) {
      pfVar8 = (float *)(lVar10 + 4);
      lVar10 = lVar10 - (longlong)pfVar7;
      lVar6 = lVar9;
      do {
        if (pfVar7[1] != *pfVar8) {
          return false;
        }
        if (*pfVar7 != *(float *)(lVar10 + (longlong)pfVar7)) {
          return false;
        }
        lVar6 = lVar6 + 1;
        pfVar8 = pfVar8 + 2;
        pfVar7 = pfVar7 + 2;
      } while (lVar6 < iVar5);
    }
    if (*(longlong *)&pFVar3->field_0x20 != *(longlong *)&pFVar2->field_0x20) {
      return false;
    }
    _Size = *(longlong *)&pFVar3->field_0x8 - (longlong)*(void **)pFVar3;
    if (((*(longlong *)&pFVar2->field_0x8 - (longlong)*(void **)pFVar2 ^ _Size) & 0xfffffffffffffffc
        ) != 0) {
      return false;
    }
    iVar5 = memcmp(*(void **)pFVar3,*(void **)pFVar2,_Size);
    if (iVar5 != 0) {
      return false;
    }
    bVar4 = FKDTreeImplementation::CompareNodes
                      ((Node **)&pFVar3->field_0x18,(Node **)&pFVar2->field_0x18);
    if (!bVar4) {
      return false;
    }
  }
  iVar5 = (this->DataSource).PointCount;
  if ((iVar5 == (param_1->DataSource).PointCount) &&
     (iVar1 = (this->DataSource).PointDim, iVar1 == (param_1->DataSource).PointDim)) {
    iVar5 = iVar5 * iVar1;
    if (0 < iVar5) {
      pfVar7 = (param_1->DataSource).Data;
      lVar10 = (longlong)(this->DataSource).Data - (longlong)pfVar7;
      do {
        if (*pfVar7 != *(float *)((longlong)pfVar7 + lVar10)) {
          return false;
        }
        lVar9 = lVar9 + 1;
        pfVar7 = pfVar7 + 1;
      } while (lVar9 < iVar5);
    }
    return true;
  }
  return false;
}

// Construct @ 14a8b2020

void __thiscall
UE::PoseSearch::FKDTree::Construct(FKDTree *this,int param_1,int param_2,float *param_3,int param_4)

{
  FKDTreeImplementation *this_00;
  FKDTreeImplementation *pFVar1;
  int iVar2;
  KDTreeSingleIndexAdaptorParams local_res8;
  
  Reset(this);
  pFVar1 = (FKDTreeImplementation *)0x0;
  if ((param_2 < 1) || (iVar2 = param_1, param_3 == (float *)0x0)) {
    iVar2 = 0;
  }
  (this->DataSource).PointCount = iVar2;
  (this->DataSource).PointDim = param_2;
  (this->DataSource).Data = param_3;
  this->KDTreeImplementation = (FKDTreeImplementation *)0x0;
  if (((0 < param_1) && (0 < param_2)) && (param_3 != (float *)0x0)) {
    this_00 = ::operator_new(0x90);
    if (this_00 != (FKDTreeImplementation *)0x0) {
      local_res8.leaf_max_size = (ulong64)param_4;
      pFVar1 = FKDTreeImplementation::FKDTreeImplementation<>
                         (this_00,param_2,&this->DataSource,&local_res8);
    }
    this->KDTreeImplementation = pFVar1;
  }
  return;
}

// FindNeighbors @ 14a8b8f80

int __thiscall
UE::PoseSearch::FKDTree::FindNeighbors
          (FKDTree *this,FFilteredKNNMaxHeapResultSet *param_1,TArrayView<float_const_,int> *param_2
          )

{
  int iVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
                    (this->KDTreeImplementation,param_1,&local_18);
  return iVar1;
}

// FindNeighbors @ 14a8b8fb0

int __thiscall
UE::PoseSearch::FKDTree::FindNeighbors
          (FKDTree *this,FFilteredKNNResultSet *param_1,TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>
                    (this->KDTreeImplementation,param_1,&local_18);
  return iVar1;
}

// FindNeighbors @ 14a8b8fe0

int __thiscall
UE::PoseSearch::FKDTree::FindNeighbors
          (FKDTree *this,FKNNMaxHeapResultSet *param_1,TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
                    (this->KDTreeImplementation,param_1,&local_18);
  return iVar1;
}

// FindNeighbors @ 14a8b9010

int __thiscall
UE::PoseSearch::FKDTree::FindNeighbors
          (FKDTree *this,FKNNResultSet *param_1,TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>
                    (this->KDTreeImplementation,param_1,&local_18);
  return iVar1;
}

// FindNeighbors @ 14a8b9040

int __thiscall
UE::PoseSearch::FKDTree::FindNeighbors
          (FKDTree *this,FRadiusMaxHeapResultSet *param_1,TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>
                    (this->KDTreeImplementation,param_1,&local_18);
  return iVar1;
}

// FindNeighbors @ 14a8b9070

int __thiscall
UE::PoseSearch::FKDTree::FindNeighbors
          (FKDTree *this,FRadiusResultSet *param_1,TArrayView<float_const_,int> *param_2)

{
  int iVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>
                    (this->KDTreeImplementation,param_1,&local_18);
  return iVar1;
}

// GetAllocatedSize @ 14a8b9400

ulong64 __thiscall UE::PoseSearch::FKDTree::GetAllocatedSize(FKDTree *this)

{
  FKDTreeImplementation *pFVar1;
  
  pFVar1 = this->KDTreeImplementation;
  if (pFVar1 != (FKDTreeImplementation *)0x0) {
    return (ulonglong)(uint)(*(int *)&pFVar1->field_0x74 + *(int *)&pFVar1->field_0x70) +
           ((longlong)**(int **)&pFVar1->field_0x78 + 0x2a) * 4;
  }
  return 0x18;
}

// Reset @ 14a8c5450

void __thiscall UE::PoseSearch::FKDTree::Reset(FKDTree *this)

{
  FKDTreeImplementation *this_00;
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  this_00 = this->KDTreeImplementation;
  if (this_00 != (FKDTreeImplementation *)0x0) {
    _Memory = *(undefined8 **)&this_00->field_0x60;
    while (_Memory != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*_Memory;
      free(_Memory);
      *(undefined8 **)&this_00->field_0x60 = puVar1;
      _Memory = puVar1;
    }
    *(undefined4 *)&this_00->field_0x58 = 0;
    *(undefined8 *)&this_00->field_0x60 = 0;
    *(undefined8 *)&this_00->field_0x70 = 0;
    std::
    vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
    ::_Tidy((vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
             *)&this_00->field_0x40);
    std::vector<int,std::allocator<int>_>::~vector<int,std::allocator<int>_>
              ((vector<int,std::allocator<int>_> *)this_00);
    ::operator_delete(this_00,0x90);
  }
  this->KDTreeImplementation = (FKDTreeImplementation *)0x0;
  (this->DataSource).PointCount = 0;
  (this->DataSource).PointDim = 0;
  (this->DataSource).Data = (float *)0x0;
  return;
}

