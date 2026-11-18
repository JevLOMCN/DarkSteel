// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 16

// TSManifoldMesh @ 1495a7870

TSManifoldMesh * __thiscall
gte::TSManifoldMesh::TSManifoldMesh(TSManifoldMesh *this,TSManifoldMesh *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong *plVar10;
  undefined1 local_18 [16];
  
  this->_padding_ = (longlong)&___7TSManifoldMesh_gte__6B_;
  *(undefined8 *)&this->mTMap = 0;
  *(undefined8 *)&(this->mTMap).field_0x8 = 0;
  pvVar9 = ::operator_new(0x40);
  *(void **)pvVar9 = pvVar9;
  *(void **)((longlong)pvVar9 + 8) = pvVar9;
  *(void **)((longlong)pvVar9 + 0x10) = pvVar9;
  *(undefined2 *)((longlong)pvVar9 + 0x18) = 0x101;
  *(void **)&this->mTMap = pvVar9;
  *(undefined8 *)&this->mSMap = 0;
  *(undefined8 *)&(this->mSMap).field_0x8 = 0;
  pvVar9 = ::operator_new(0x40);
  *(void **)pvVar9 = pvVar9;
  *(void **)((longlong)pvVar9 + 8) = pvVar9;
  *(void **)((longlong)pvVar9 + 0x10) = pvVar9;
  *(undefined2 *)((longlong)pvVar9 + 0x18) = 0x101;
  *(void **)&this->mSMap = pvVar9;
  pcVar4 = *(code **)(this->_padding_ + 8);
  if (pcVar4 == Clear) {
    std::
    _Tree<std::_Tmap_traits<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>,0>_>
    ::clear((_Tree<std::_Tmap_traits<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>,0>_>
             *)&this->mTMap);
    std::
    _Tree<std::_Tmap_traits<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>,0>_>
    ::clear((_Tree<std::_Tmap_traits<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>,0>_>
             *)&this->mSMap);
  }
  else {
    (*pcVar4)(this);
  }
  this->mTCreator = param_1->mTCreator;
  this->mSCreator = param_1->mSCreator;
  this->mAssertOnNonmanifoldInsertion = param_1->mAssertOnNonmanifoldInsertion;
  plVar10 = (longlong *)**(longlong **)&param_1->mSMap;
  cVar3 = *(char *)((longlong)plVar10 + 0x19);
  while (cVar3 == '\0') {
    Insert(this,(shared_ptr<gte::TSManifoldMesh::Tetrahedron> *)local_18,(int)plVar10[4],
           *(int *)((longlong)plVar10 + 0x24),(int)plVar10[5],*(int *)((longlong)plVar10 + 0x2c));
    uVar7 = local_18._8_8_;
    if ((longlong *)local_18._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar5 = (longlong *)(local_18._8_8_ + 8);
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (*(code *)**(undefined8 **)local_18._8_8_)(local_18._8_8_);
        LOCK();
        piVar1 = (int *)(uVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)uVar7 + 8))(uVar7);
        }
      }
    }
    plVar5 = (longlong *)plVar10[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar5 + 0x19);
      plVar10 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar5 + 0x19);
        plVar10 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar3 = *(char *)(plVar10[1] + 0x19);
      plVar8 = (longlong *)plVar10[1];
      plVar5 = plVar10;
      while ((plVar10 = plVar8, cVar3 == '\0' && (plVar5 == (longlong *)plVar10[2]))) {
        cVar3 = *(char *)(plVar10[1] + 0x19);
        plVar8 = (longlong *)plVar10[1];
        plVar5 = plVar10;
      }
    }
    cVar3 = *(char *)((longlong)plVar10 + 0x19);
  }
  return this;
}

// TSManifoldMesh @ 1495a7a20

TSManifoldMesh * __thiscall
gte::TSManifoldMesh::TSManifoldMesh
          (TSManifoldMesh *this,
          _func___cdecl_shared_ptr<gte::TSManifoldMesh::Triangle>_int_int_int *param_1,
          _func___cdecl_shared_ptr<gte::TSManifoldMesh::Tetrahedron>_int_int_int_int *param_2)

{
  code *pcVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7TSManifoldMesh_gte__6B_;
  pcVar1 = CreateTriangle;
  if (param_1 != (_func___cdecl_shared_ptr<gte::TSManifoldMesh::Triangle>_int_int_int *)0x0) {
    pcVar1 = param_1;
  }
  this->mTCreator = pcVar1;
  *(undefined8 *)&this->mTMap = 0;
  *(undefined8 *)&(this->mTMap).field_0x8 = 0;
  pvVar2 = ::operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)&this->mTMap = pvVar2;
  pcVar1 = CreateTetrahedron;
  if (param_2 != (_func___cdecl_shared_ptr<gte::TSManifoldMesh::Tetrahedron>_int_int_int_int *)0x0)
  {
    pcVar1 = param_2;
  }
  this->mSCreator = pcVar1;
  *(undefined8 *)&this->mSMap = 0;
  *(undefined8 *)&(this->mSMap).field_0x8 = 0;
  pvVar2 = ::operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)&this->mSMap = pvVar2;
  this->mAssertOnNonmanifoldInsertion = true;
  return this;
}

// Tetrahedron @ 1495a7ad0

Tetrahedron * __thiscall
gte::TSManifoldMesh::Tetrahedron::Tetrahedron
          (Tetrahedron *this,int param_1,int param_2,int param_3,int param_4)

{
  this->_padding_ = (longlong)&___7Tetrahedron_TSManifoldMesh_gte__6B_;
  *(undefined8 *)this->T = 0;
  *(undefined8 *)&this->T[0].field_0x8 = 0;
  *(undefined8 *)(this->T + 1) = 0;
  *(undefined8 *)&this->T[1].field_0x8 = 0;
  *(undefined8 *)(this->T + 2) = 0;
  *(undefined8 *)&this->T[2].field_0x8 = 0;
  *(undefined8 *)(this->T + 3) = 0;
  *(undefined8 *)&this->T[3].field_0x8 = 0;
  *(undefined8 *)this->S = 0;
  *(undefined8 *)&this->S[0].field_0x8 = 0;
  *(undefined8 *)(this->S + 1) = 0;
  *(undefined8 *)&this->S[1].field_0x8 = 0;
  *(undefined8 *)(this->S + 2) = 0;
  *(undefined8 *)&this->S[2].field_0x8 = 0;
  *(undefined8 *)(this->S + 3) = 0;
  *(undefined8 *)&this->S[3].field_0x8 = 0;
  this->V[3] = param_4;
  this->V[0] = param_1;
  this->V[1] = param_2;
  this->V[2] = param_3;
  return this;
}

// Triangle @ 1495a7c20

Triangle * __thiscall
gte::TSManifoldMesh::Triangle::Triangle(Triangle *this,int param_1,int param_2,int param_3)

{
  this->_padding_ = (longlong)&___7Triangle_TSManifoldMesh_gte__6B_;
  *(undefined8 *)this->T = 0;
  *(undefined8 *)&this->T[0].field_0x8 = 0;
  *(undefined8 *)(this->T + 1) = 0;
  *(undefined8 *)&this->T[1].field_0x8 = 0;
  this->V[0] = param_1;
  this->V[1] = param_2;
  this->V[2] = param_3;
  return this;
}

// ~TSManifoldMesh @ 1495aa900

void __thiscall gte::TSManifoldMesh::~TSManifoldMesh(TSManifoldMesh *this)

{
  this->_padding_ = (longlong)&___7TSManifoldMesh_gte__6B_;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>_>
              *)&this->mSMap,
             (allocator<std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_>
              *)&this->mSMap,
             *(_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>
               **)(*(longlong *)&this->mSMap + 8));
  ::operator_delete(*(void **)&this->mSMap,0x40);
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>_>
              *)&this->mTMap,
             (allocator<std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_>
              *)&this->mTMap,
             *(_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>
               **)(*(longlong *)&this->mTMap + 8));
  ::operator_delete(*(void **)&this->mTMap,0x40);
  return;
}

// ~Tetrahedron @ 1495aa970

void __thiscall gte::TSManifoldMesh::Tetrahedron::~Tetrahedron(Tetrahedron *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7Tetrahedron_TSManifoldMesh_gte__6B_;
  plVar3 = *(longlong **)&this->S[3].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->S[2].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->S[1].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->S[0].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->T[3].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->T[2].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->T[1].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->T[0].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return;
}

// ~Triangle @ 1495aabd0

void __thiscall gte::TSManifoldMesh::Triangle::~Triangle(Triangle *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7Triangle_TSManifoldMesh_gte__6B_;
  plVar3 = *(longlong **)&this->T[1].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(longlong **)&this->T[0].field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return;
}

// operator= @ 1495ab9e0

TSManifoldMesh * __thiscall
gte::TSManifoldMesh::operator=(TSManifoldMesh *this,TSManifoldMesh *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_18 [16];
  
  (**(code **)(this->_padding_ + 8))();
  this->mTCreator = param_1->mTCreator;
  this->mSCreator = param_1->mSCreator;
  this->mAssertOnNonmanifoldInsertion = param_1->mAssertOnNonmanifoldInsertion;
  plVar8 = (longlong *)**(longlong **)&param_1->mSMap;
  cVar3 = *(char *)((longlong)plVar8 + 0x19);
  while (cVar3 == '\0') {
    Insert(this,(shared_ptr<gte::TSManifoldMesh::Tetrahedron> *)local_18,(int)plVar8[4],
           *(int *)((longlong)plVar8 + 0x24),(int)plVar8[5],*(int *)((longlong)plVar8 + 0x2c));
    uVar6 = local_18._8_8_;
    if ((longlong *)local_18._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar4 = (longlong *)(local_18._8_8_ + 8);
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (*(code *)**(undefined8 **)local_18._8_8_)(local_18._8_8_);
        LOCK();
        piVar1 = (int *)(uVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)uVar6 + 8))(uVar6);
        }
      }
    }
    plVar4 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar4 + 0x19);
      plVar8 = plVar4;
      plVar4 = (longlong *)*plVar4;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar3 = *(char *)(plVar8[1] + 0x19);
      plVar7 = (longlong *)plVar8[1];
      plVar4 = plVar8;
      while ((plVar8 = plVar7, cVar3 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
        cVar3 = *(char *)(plVar8[1] + 0x19);
        plVar7 = (longlong *)plVar8[1];
        plVar4 = plVar8;
      }
    }
    cVar3 = *(char *)((longlong)plVar8 + 0x19);
  }
  return this;
}

// AssertOnNonmanifoldInsertion @ 1495ba070

void __thiscall gte::TSManifoldMesh::AssertOnNonmanifoldInsertion(TSManifoldMesh *this,bool param_1)

{
  this->mAssertOnNonmanifoldInsertion = param_1;
  return;
}

// Clear @ 1495baa00

void __thiscall gte::TSManifoldMesh::Clear(TSManifoldMesh *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->mTMap;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>_>
              *)&this->mTMap,
             (allocator<std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_>
              *)&this->mTMap,
             *(_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>
               **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)&(this->mTMap).field_0x8 = 0;
  lVar1 = *(longlong *)&this->mSMap;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>_>
              *)&this->mSMap,
             (allocator<std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_>
              *)&this->mSMap,
             *(_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>
               **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)&(this->mSMap).field_0x8 = 0;
  return;
}

// CreateTetrahedron @ 1495bb760

shared_ptr<gte::TSManifoldMesh::Tetrahedron> * __cdecl
gte::TSManifoldMesh::CreateTetrahedron
          (shared_ptr<gte::TSManifoldMesh::Tetrahedron> *__return_storage_ptr__,int param_1,
          int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &___7___Ref_count_obj2_VTetrahedron_TSManifoldMesh_gte___std__6B_;
    puVar1[2] = &___7Tetrahedron_TSManifoldMesh_gte__6B_;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(int *)(puVar1 + 3) = param_1;
    *(int *)((longlong)puVar1 + 0x1c) = param_2;
    *(int *)(puVar1 + 4) = param_3;
    *(int *)((longlong)puVar1 + 0x24) = param_4;
  }
  *(undefined8 **)__return_storage_ptr__ = puVar1 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// CreateTriangle @ 1495bb9d0

shared_ptr<gte::TSManifoldMesh::Triangle> * __cdecl
gte::TSManifoldMesh::CreateTriangle
          (shared_ptr<gte::TSManifoldMesh::Triangle> *__return_storage_ptr__,int param_1,int param_2
          ,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &___7___Ref_count_obj2_VTriangle_TSManifoldMesh_gte___std__6B_;
    puVar1[2] = &___7Triangle_TSManifoldMesh_gte__6B_;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(int *)(puVar1 + 3) = param_1;
    *(int *)((longlong)puVar1 + 0x1c) = param_2;
    *(int *)(puVar1 + 4) = param_3;
  }
  *(undefined8 **)__return_storage_ptr__ = puVar1 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// GetTetrahedra @ 1495c0310

map<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>_>
* __thiscall gte::TSManifoldMesh::GetTetrahedra(TSManifoldMesh *this)

{
  return &this->mSMap;
}

// GetTriangles @ 1495c0440

map<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>_>
* __thiscall gte::TSManifoldMesh::GetTriangles(TSManifoldMesh *this)

{
  return &this->mTMap;
}

// IsClosed @ 1495c4350

bool __thiscall gte::TSManifoldMesh::IsClosed(TSManifoldMesh *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  uint uStackX_c;
  
  bVar13 = false;
  plVar10 = (longlong *)**(longlong **)&this->mSMap;
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    plVar12 = (longlong *)((ulonglong)uStackX_c << 0x20);
    do {
      if (plVar10[7] != 0) {
        LOCK();
        piVar1 = (int *)(plVar10[7] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar5 = plVar10[6];
      plVar6 = (longlong *)plVar10[7];
      plVar11 = (longlong *)0x0;
      lVar7 = *(longlong *)(lVar5 + 0x60);
      bVar8 = bVar13;
      if (lVar7 == 0) {
LAB_1495c43d2:
        bVar13 = bVar8;
        bVar8 = true;
      }
      else {
        iVar3 = *(int *)(lVar7 + 8);
        do {
          if (iVar3 == 0) goto LAB_1495c43d2;
          LOCK();
          iVar9 = *(int *)(lVar7 + 8);
          bVar13 = iVar3 == iVar9;
          if (bVar13) {
            *(int *)(lVar7 + 8) = iVar3 + 1;
            iVar9 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar9;
        } while (!bVar13);
        plVar11 = *(longlong **)(lVar5 + 0x60);
        if (*(longlong *)(lVar5 + 0x58) == 0) goto LAB_1495c43d2;
        lVar7 = *(longlong *)(lVar5 + 0x70);
        bVar13 = true;
        bVar8 = true;
        plVar12 = (longlong *)0x0;
        if (lVar7 == 0) goto LAB_1495c43d2;
        iVar3 = *(int *)(lVar7 + 8);
        do {
          if (iVar3 == 0) goto LAB_1495c43d2;
          LOCK();
          iVar9 = *(int *)(lVar7 + 8);
          bVar14 = iVar3 == iVar9;
          if (bVar14) {
            *(int *)(lVar7 + 8) = iVar3 + 1;
            iVar9 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar9;
        } while (!bVar14);
        plVar12 = *(longlong **)(lVar5 + 0x70);
        if (*(longlong *)(lVar5 + 0x68) == 0) goto LAB_1495c43d2;
        bVar8 = false;
      }
      if ((bVar13) && (bVar13 = false, plVar12 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plVar12 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
      if (bVar8) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar6 + 1;
          lVar5 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        return false;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar6 + 1;
        lVar5 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar4 = *(char *)(*plVar6 + 0x19);
        plVar10 = plVar6;
        plVar6 = (longlong *)*plVar6;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar6 + 0x19);
          plVar10 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar4 = *(char *)(plVar10[1] + 0x19);
        plVar11 = (longlong *)plVar10[1];
        plVar6 = plVar10;
        while ((plVar10 = plVar11, cVar4 == '\0' && (plVar6 == (longlong *)plVar10[2]))) {
          cVar4 = *(char *)(plVar10[1] + 0x19);
          plVar11 = (longlong *)plVar10[1];
          plVar6 = plVar10;
        }
      }
    } while (*(char *)((longlong)plVar10 + 0x19) == '\0');
  }
  return true;
}

// Remove @ 1495c71f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
gte::TSManifoldMesh::Remove(TSManifoldMesh *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  TSManifoldMesh *pTVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 uVar8;
  pair<std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_*,std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_*>
  *ppVar9;
  pair<std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_*,std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_*>
  *ppVar10;
  Logger *pLVar11;
  int iVar12;
  ulong64 uVar13;
  bool bVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStackY_108 [32];
  TriangleKey<0> local_c8;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  TetrahedronKey<1> local_98;
  TSManifoldMesh *local_88;
  map<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>_>
  *local_80;
  longlong *local_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar14 = false;
  local_88 = this;
  TetrahedronKey<1>::TetrahedronKey<1>(&local_98,param_1,param_2,param_3,param_4);
  plVar17 = *(longlong **)&this->mSMap;
  local_80 = &this->mSMap;
  iVar19 = 3;
  plVar16 = (longlong *)plVar17[1];
  cVar1 = *(char *)((longlong)plVar16 + 0x19);
  plVar15 = plVar17;
  while (cVar1 == '\0') {
    iVar12 = 3;
    piVar7 = (int *)&local_98.field_0xc;
    do {
      iVar2 = *(int *)((longlong)piVar7 + (longlong)plVar16 + (0x2c - (longlong)&local_98.field_0xc)
                      );
      if (iVar2 < *piVar7) {
        bVar22 = true;
        goto LAB_1495c7286;
      }
      if (*piVar7 < iVar2) {
        bVar22 = false;
        plVar15 = plVar16;
        goto LAB_1495c7286;
      }
      piVar7 = piVar7 + -1;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    bVar22 = false;
    plVar15 = plVar16;
LAB_1495c7286:
    plVar6 = plVar16 + 2;
    if (!bVar22) {
      plVar6 = plVar16;
    }
    plVar16 = (longlong *)*plVar6;
    cVar1 = *(char *)((longlong)plVar16 + 0x19);
  }
  if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
    piVar7 = (int *)&local_98.field_0xc;
    do {
      iVar12 = *(int *)((longlong)piVar7 +
                       (longlong)plVar15 + (0x2c - (longlong)&local_98.field_0xc));
      if (*piVar7 < iVar12) {
        return false;
      }
      if (iVar12 < *piVar7) break;
      piVar7 = piVar7 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
    if (plVar15 != plVar17) {
      if (plVar15[7] != 0) {
        LOCK();
        piVar7 = (int *)(plVar15[7] + 8);
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      local_78 = (longlong *)plVar15[7];
      lVar3 = plVar15[6];
      local_b8 = local_a0;
      local_a8 = 0;
      do {
        lVar20 = 0;
        lVar21 = local_a8 * 0x10 + lVar3;
        local_b0 = (longlong *)0x0;
        lVar4 = *(longlong *)(lVar21 + 0x20);
        if (lVar4 != 0) {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c736f;
            LOCK();
            iVar12 = *(int *)(lVar4 + 8);
            bVar22 = iVar19 == iVar12;
            if (bVar22) {
              *(int *)(lVar4 + 8) = iVar19 + 1;
              iVar12 = iVar19;
            }
            UNLOCK();
            iVar19 = iVar12;
          } while (!bVar22);
          local_b0 = *(longlong **)(lVar21 + 0x20);
          lVar20 = *(longlong *)(lVar21 + 0x18);
        }
LAB_1495c736f:
        plVar17 = local_b0;
        if (lVar20 == 0) {
          local_70._8_8_ = 0;
          local_70._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
          uVar8 = s_Unexpected_condition_._8_8_;
          local_60 = ___xmm_000000000000001f0000000000000015;
          uStack_58 = _UNK_151e59228;
          *(undefined8 *)local_70._Ptr = s_Unexpected_condition_._0_8_;
          *(undefined8 *)(local_70._Ptr + 8) = uVar8;
          *(undefined4 *)(local_70._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
          *(local_70._Ptr + 0x14) = s_Unexpected_condition_[0x14];
          *(local_70._Ptr + 0x15) = '\0';
          pLVar11 = Logger::Logger((Logger *)&local_50,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteTSManifoldMesh.cpp"
                                   ,"gte::TSManifoldMesh::Remove",0xa9,
                                   (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_70);
          Logger::Error(pLVar11);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_50);
          if (0xf < uStack_58) {
            uVar13 = uStack_58 + 1;
            uVar8 = local_70._Ptr;
            if (0xfff < uVar13) {
              uVar8 = *(undefined8 *)(local_70._Ptr + -8);
              uVar13 = uStack_58 + 0x28;
              if ((char *)0x1f < local_70._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
LAB_1495c798e:
            ::operator_delete((void *)uVar8,uVar13);
          }
LAB_1495c7993:
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar17 + 1;
            lVar3 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar7 = (int *)((longlong)plVar17 + 0xc);
              iVar19 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17);
              }
            }
          }
          bVar14 = false;
          goto LAB_1495c79c7;
        }
        lVar4 = *(longlong *)(lVar20 + 0x20);
        lVar18 = 0;
        if (lVar4 != 0) {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c73e1;
            LOCK();
            iVar12 = *(int *)(lVar4 + 8);
            bVar22 = iVar19 == iVar12;
            if (bVar22) {
              *(int *)(lVar4 + 8) = iVar19 + 1;
              iVar12 = iVar19;
            }
            UNLOCK();
            iVar19 = iVar12;
          } while (!bVar22);
          plVar16 = *(longlong **)(lVar20 + 0x20);
          lVar18 = *(longlong *)(lVar20 + 0x18);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar16 + 1;
            lVar4 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar7 = (int *)((longlong)plVar16 + 0xc);
              iVar19 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
          }
        }
LAB_1495c73e1:
        lVar4 = *(longlong *)(lVar20 + 0x30);
        if (lVar18 == lVar3) {
          uVar8 = 0;
          lVar18 = 0;
          if (lVar4 != 0) {
            uVar8 = *(undefined8 *)(lVar20 + 0x28);
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
            lVar18 = lVar4;
          }
          plVar17 = *(longlong **)(lVar20 + 0x20);
          *(undefined8 *)(lVar20 + 0x18) = uVar8;
          *(longlong *)(lVar20 + 0x20) = lVar18;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)plVar17 + 0xc);
            iVar19 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        else {
          lVar18 = 0;
          if (lVar4 != 0) {
            iVar19 = *(int *)(lVar4 + 8);
            do {
              if (iVar19 == 0) goto LAB_1495c7485;
              LOCK();
              iVar12 = *(int *)(lVar4 + 8);
              bVar22 = iVar19 == iVar12;
              if (bVar22) {
                *(int *)(lVar4 + 8) = iVar19 + 1;
                iVar12 = iVar19;
              }
              UNLOCK();
              iVar19 = iVar12;
            } while (!bVar22);
            plVar16 = *(longlong **)(lVar20 + 0x30);
            lVar18 = *(longlong *)(lVar20 + 0x28);
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar16 + 1;
              lVar4 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar7 = (int *)((longlong)plVar16 + 0xc);
                iVar19 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16);
                }
              }
            }
          }
LAB_1495c7485:
          if (lVar18 != lVar3) {
            local_70._8_8_ = 0;
            local_70._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
            uVar8 = s_Unexpected_condition_._8_8_;
            local_60 = ___xmm_000000000000001f0000000000000015;
            uStack_58 = _UNK_151e59228;
            *(undefined8 *)local_70._Ptr = s_Unexpected_condition_._0_8_;
            *(undefined8 *)(local_70._Ptr + 8) = uVar8;
            *(undefined4 *)(local_70._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
            *(local_70._Ptr + 0x14) = s_Unexpected_condition_[0x14];
            *(local_70._Ptr + 0x15) = '\0';
            pLVar11 = Logger::Logger((Logger *)&local_50,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteTSManifoldMesh.cpp"
                                     ,"gte::TSManifoldMesh::Remove",0xb9,
                                     (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_70);
            Logger::Error(pLVar11);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_50);
            if (0xf < uStack_58) {
              uVar13 = uStack_58 + 1;
              uVar8 = local_70._Ptr;
              if (0xfff < uVar13) {
                uVar13 = uStack_58 + 0x28;
                uVar8 = *(char **)(local_70._Ptr + -8);
                if ((char *)0x1f < local_70._Ptr + (-8 - (longlong)*(char **)(local_70._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              goto LAB_1495c798e;
            }
            goto LAB_1495c7993;
          }
        }
        plVar17 = *(longlong **)(lVar20 + 0x30);
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined8 *)(lVar20 + 0x28) = 0;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          piVar7 = (int *)((longlong)plVar17 + 0xc);
          iVar19 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar17 + 8))();
          }
        }
        plVar17 = (longlong *)0x0;
        lVar4 = *(longlong *)(lVar20 + 0x20);
        if (lVar4 == 0) {
LAB_1495c74f4:
          lVar4 = *(longlong *)(lVar20 + 0x30);
          bVar14 = true;
          local_b8 = (longlong *)0x0;
          if (lVar4 != 0) {
            iVar19 = *(int *)(lVar4 + 8);
            do {
              if (iVar19 == 0) goto LAB_1495c7522;
              LOCK();
              iVar12 = *(int *)(lVar4 + 8);
              bVar22 = iVar19 == iVar12;
              if (bVar22) {
                *(int *)(lVar4 + 8) = iVar19 + 1;
                iVar12 = iVar19;
              }
              UNLOCK();
              iVar19 = iVar12;
            } while (!bVar22);
            local_b8 = *(longlong **)(lVar20 + 0x30);
            if (*(longlong *)(lVar20 + 0x28) != 0) {
              bVar22 = false;
              goto LAB_1495c7525;
            }
          }
LAB_1495c7522:
          bVar22 = true;
        }
        else {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c74f4;
            LOCK();
            iVar12 = *(int *)(lVar4 + 8);
            bVar22 = iVar19 == iVar12;
            if (bVar22) {
              *(int *)(lVar4 + 8) = iVar19 + 1;
              iVar12 = iVar19;
            }
            UNLOCK();
            iVar19 = iVar12;
          } while (!bVar22);
          plVar17 = *(longlong **)(lVar20 + 0x20);
          if (*(longlong *)(lVar20 + 0x18) == 0) goto LAB_1495c74f4;
          bVar22 = false;
        }
LAB_1495c7525:
        plVar16 = local_b8;
        if ((bVar14) && (bVar14 = false, local_b8 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_b8 + 1;
          lVar4 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar7 = (int *)((longlong)plVar16 + 0xc);
            iVar19 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar17 + 1;
          lVar4 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar7 = (int *)((longlong)plVar17 + 0xc);
            iVar19 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17);
            }
          }
        }
        pTVar5 = local_88;
        if (bVar22) {
          iVar19 = *(int *)(lVar20 + 0xc);
          iVar12 = *(int *)(lVar20 + 8);
          iVar2 = *(int *)(lVar20 + 0x10);
          local_c8._0_4_ = iVar2;
          local_c8._4_4_ = iVar12;
          if (iVar12 < iVar19) {
            local_c8._8_4_ = iVar19;
            if (iVar12 < iVar2) {
              if (iVar19 < iVar2) {
                local_c8._8_4_ = iVar2;
              }
              local_c8._0_4_ = iVar12;
              local_c8._4_4_ = iVar19;
              if (iVar2 < iVar19) {
                local_c8._4_4_ = iVar2;
              }
            }
          }
          else {
            local_c8._8_4_ = iVar12;
            if (iVar19 < iVar2) {
              local_c8._8_4_ = iVar2;
              if (iVar2 < iVar12) {
                local_c8._8_4_ = iVar12;
              }
              local_c8._0_4_ = iVar19;
              local_c8._4_4_ = iVar2;
              if (iVar12 < iVar2) {
                local_c8._4_4_ = iVar12;
              }
            }
            else if (iVar19 < iVar12) {
              local_c8._4_4_ = iVar19;
            }
          }
          ppVar9 = std::
                   _Tree<std::_Tmap_traits<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>,0>_>
                   ::_Eqrange<gte::TriangleKey<0>_>
                             ((_Tree<std::_Tmap_traits<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>,0>_>
                               *)&local_88->mTMap,
                              (pair<std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_*,std::_Tree_node<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>,void_*>_*>
                               *)&local_70,&local_c8);
          std::
          _Tree<std::_Tmap_traits<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>,0>_>
          ::_Erase_unchecked((_Tree<std::_Tmap_traits<gte::TriangleKey<0>,std::shared_ptr<gte::TSManifoldMesh::Triangle>,std::less<gte::TriangleKey<0>_>,std::allocator<std::pair<gte::TriangleKey<0>_const_,std::shared_ptr<gte::TSManifoldMesh::Triangle>_>_>,0>_>
                              *)&pTVar5->mTMap,ppVar9->first,ppVar9->second);
        }
        lVar4 = *(longlong *)(lVar21 + 0x60);
        if (lVar4 != 0) {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c7783;
            LOCK();
            iVar12 = *(int *)(lVar4 + 8);
            bVar22 = iVar19 == iVar12;
            if (bVar22) {
              *(int *)(lVar4 + 8) = iVar19 + 1;
              iVar12 = iVar19;
            }
            UNLOCK();
            iVar19 = iVar12;
          } while (!bVar22);
          lVar4 = *(longlong *)(lVar21 + 0x58);
          plVar17 = *(longlong **)(lVar21 + 0x60);
          if (lVar4 != 0) {
            plVar16 = (longlong *)(lVar4 + 0x58);
            lVar20 = 0;
            do {
              lVar21 = plVar16[1];
              lVar18 = 0;
              if (lVar21 != 0) {
                iVar19 = *(int *)(lVar21 + 8);
                do {
                  if (iVar19 == 0) goto LAB_1495c7707;
                  LOCK();
                  iVar12 = *(int *)(lVar21 + 8);
                  bVar22 = iVar19 == iVar12;
                  if (bVar22) {
                    *(int *)(lVar21 + 8) = iVar19 + 1;
                    iVar12 = iVar19;
                  }
                  UNLOCK();
                  iVar19 = iVar12;
                } while (!bVar22);
                plVar15 = (longlong *)plVar16[1];
                lVar18 = *plVar16;
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar15 + 1;
                  lVar21 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar21 == 1) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar7 = (int *)((longlong)plVar15 + 0xc);
                    iVar19 = *piVar7;
                    *piVar7 = *piVar7 + -1;
                    UNLOCK();
                    if (iVar19 == 1) {
                      (**(code **)(*plVar15 + 8))(plVar15);
                    }
                  }
                }
              }
LAB_1495c7707:
              if (lVar18 == lVar3) {
                *(undefined8 *)(lVar4 + 0x58 + lVar20 * 0x10) = 0;
                plVar16 = *(longlong **)(lVar4 + 0x60 + lVar20 * 0x10);
                *(undefined8 *)(lVar4 + 0x60 + lVar20 * 0x10) = 0;
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  piVar7 = (int *)((longlong)plVar16 + 0xc);
                  iVar19 = *piVar7;
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (iVar19 == 1) {
                    (**(code **)(*plVar16 + 8))();
                  }
                }
                break;
              }
              lVar20 = lVar20 + 1;
              plVar16 = plVar16 + 2;
            } while (lVar20 < 4);
          }
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar17 + 1;
            lVar4 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar7 = (int *)((longlong)plVar17 + 0xc);
              iVar19 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17);
              }
            }
          }
        }
LAB_1495c7783:
        plVar17 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_b0 + 1;
          lVar4 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar7 = (int *)((longlong)plVar17 + 0xc);
            iVar19 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17);
            }
          }
        }
        local_a8 = local_a8 + 1;
      } while (local_a8 < 4);
      ppVar10 = std::
                _Tree<std::_Tmap_traits<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>,0>_>
                ::_Eqrange<gte::TetrahedronKey<1>_>
                          ((_Tree<std::_Tmap_traits<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>,0>_>
                            *)local_80,
                           (pair<std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_*,std::_Tree_node<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>,void_*>_*>
                            *)&local_70,&local_98);
      std::
      _Tree<std::_Tmap_traits<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>,0>_>
      ::_Erase_unchecked((_Tree<std::_Tmap_traits<gte::TetrahedronKey<1>,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>,std::less<gte::TetrahedronKey<1>_>,std::allocator<std::pair<gte::TetrahedronKey<1>_const_,std::shared_ptr<gte::TSManifoldMesh::Tetrahedron>_>_>,0>_>
                          *)local_80,ppVar10->first,ppVar10->second);
      bVar14 = true;
LAB_1495c79c7:
      plVar17 = local_78;
      if (local_78 == (longlong *)0x0) {
        return bVar14;
      }
      LOCK();
      plVar16 = local_78 + 1;
      lVar3 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar7 = (int *)((longlong)plVar17 + 0xc);
        iVar19 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17);
          return bVar14;
        }
        return bVar14;
      }
      return bVar14;
    }
  }
  return false;
}

