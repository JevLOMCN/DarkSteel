// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 21

// ETManifoldMesh @ 1495a6180

ETManifoldMesh * __thiscall
gte::ETManifoldMesh::ETManifoldMesh(ETManifoldMesh *this,ETManifoldMesh *param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ETManifoldMesh_gte__6B_;
  *(undefined8 *)&this->mEMap = 0;
  *(undefined8 *)&(this->mEMap).field_0x8 = 0;
  pvVar1 = ::operator_new(0x38);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)&this->mEMap = pvVar1;
  *(undefined8 *)&this->mTMap = 0;
  *(undefined8 *)&(this->mTMap).field_0x8 = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)&this->mTMap = pvVar1;
  operator=(this,param_1);
  return this;
}

// ETManifoldMesh @ 1495a6220

ETManifoldMesh * __thiscall
gte::ETManifoldMesh::ETManifoldMesh
          (ETManifoldMesh *this,_func___cdecl_shared_ptr<gte::ETManifoldMesh::Edge>_int_int *param_1
          ,_func___cdecl_shared_ptr<gte::ETManifoldMesh::Triangle>_int_int_int *param_2)

{
  code *pcVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ETManifoldMesh_gte__6B_;
  pcVar1 = CreateEdge;
  if (param_1 != (_func___cdecl_shared_ptr<gte::ETManifoldMesh::Edge>_int_int *)0x0) {
    pcVar1 = param_1;
  }
  this->mECreator = pcVar1;
  *(undefined8 *)&this->mEMap = 0;
  *(undefined8 *)&(this->mEMap).field_0x8 = 0;
  pvVar2 = ::operator_new(0x38);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)&this->mEMap = pvVar2;
  pcVar1 = CreateTriangle;
  if (param_2 != (_func___cdecl_shared_ptr<gte::ETManifoldMesh::Triangle>_int_int_int *)0x0) {
    pcVar1 = param_2;
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
  this->mAssertOnNonmanifoldInsertion = true;
  return this;
}

// Edge @ 1495a6420

Edge * __thiscall gte::ETManifoldMesh::Edge::Edge(Edge *this,int param_1,int param_2)

{
  this->_padding_ = (longlong)&___7Edge_ETManifoldMesh_gte__6B_;
  *(undefined8 *)this->T = 0;
  *(undefined8 *)&this->T[0].field_0x8 = 0;
  *(undefined8 *)(this->T + 1) = 0;
  *(undefined8 *)&this->T[1].field_0x8 = 0;
  this->V[0] = param_1;
  this->V[1] = param_2;
  return this;
}

// Triangle @ 1495a7b80

Triangle * __thiscall
gte::ETManifoldMesh::Triangle::Triangle(Triangle *this,int param_1,int param_2,int param_3)

{
  this->_padding_ = (longlong)&___7Triangle_ETManifoldMesh_gte__6B_;
  *(undefined8 *)this->E = 0;
  *(undefined8 *)&this->E[0].field_0x8 = 0;
  *(undefined8 *)(this->E + 1) = 0;
  *(undefined8 *)&this->E[1].field_0x8 = 0;
  *(undefined8 *)(this->E + 2) = 0;
  *(undefined8 *)&this->E[2].field_0x8 = 0;
  *(undefined8 *)this->T = 0;
  *(undefined8 *)&this->T[0].field_0x8 = 0;
  *(undefined8 *)(this->T + 1) = 0;
  *(undefined8 *)&this->T[1].field_0x8 = 0;
  *(undefined8 *)(this->T + 2) = 0;
  *(undefined8 *)&this->T[2].field_0x8 = 0;
  this->V[0] = param_1;
  this->V[1] = param_2;
  this->V[2] = param_3;
  return this;
}

// ~ETManifoldMesh @ 1495aa170

void __thiscall gte::ETManifoldMesh::~ETManifoldMesh(ETManifoldMesh *this)

{
  this->_padding_ = (longlong)&___7ETManifoldMesh_gte__6B_;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
              *)&this->mTMap,
             (allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_>
              *)&this->mTMap,
             *(_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
               **)(*(longlong *)&this->mTMap + 8));
  ::operator_delete(*(void **)&this->mTMap,0x40);
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
              *)&this->mEMap,
             (allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_>
              *)&this->mEMap,
             *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
               **)(*(longlong *)&this->mEMap + 8));
  ::operator_delete(*(void **)&this->mEMap,0x38);
  return;
}

// ~Edge @ 1495aa250

void __thiscall gte::ETManifoldMesh::Edge::~Edge(Edge *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7Edge_ETManifoldMesh_gte__6B_;
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

// ~Triangle @ 1495aaa80

void __thiscall gte::ETManifoldMesh::Triangle::~Triangle(Triangle *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7Triangle_ETManifoldMesh_gte__6B_;
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
  plVar3 = *(longlong **)&this->E[2].field_0x8;
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
  plVar3 = *(longlong **)&this->E[1].field_0x8;
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
  plVar3 = *(longlong **)&this->E[0].field_0x8;
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

// operator= @ 1495ab780

ETManifoldMesh * __thiscall
gte::ETManifoldMesh::operator=(ETManifoldMesh *this,ETManifoldMesh *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  this->mECreator = param_1->mECreator;
  this->mTCreator = param_1->mTCreator;
  this->mAssertOnNonmanifoldInsertion = param_1->mAssertOnNonmanifoldInsertion;
  plVar7 = (longlong *)**(longlong **)&param_1->mTMap;
  cVar3 = *(char *)((longlong)plVar7 + 0x19);
  while (cVar3 == '\0') {
    (**(code **)(this->_padding_ + 8))
              (this,local_18,(int)plVar7[4],*(undefined4 *)((longlong)plVar7 + 0x24),(int)plVar7[5])
    ;
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    plVar4 = (longlong *)plVar7[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar4 + 0x19);
      plVar7 = plVar4;
      plVar4 = (longlong *)*plVar4;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar4 + 0x19);
        plVar7 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar3 = *(char *)(plVar7[1] + 0x19);
      plVar6 = (longlong *)plVar7[1];
      plVar4 = plVar7;
      while ((plVar7 = plVar6, cVar3 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
        cVar3 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar4 = plVar7;
      }
    }
    cVar3 = *(char *)((longlong)plVar7 + 0x19);
  }
  return this;
}

// AssertOnNonmanifoldInsertion @ 1495ba060

bool __thiscall gte::ETManifoldMesh::AssertOnNonmanifoldInsertion(ETManifoldMesh *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = this->mAssertOnNonmanifoldInsertion;
  this->mAssertOnNonmanifoldInsertion = param_1;
  return bVar1;
}

// Clear @ 1495ba900

void __thiscall gte::ETManifoldMesh::Clear(ETManifoldMesh *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->mEMap;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
              *)&this->mEMap,
             (allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_>
              *)&this->mEMap,
             *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
               **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)&(this->mEMap).field_0x8 = 0;
  lVar1 = *(longlong *)&this->mTMap;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
              *)&this->mTMap,
             (allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_>
              *)&this->mTMap,
             *(_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
               **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)&(this->mTMap).field_0x8 = 0;
  return;
}

// CreateEdge @ 1495bb5b0

shared_ptr<gte::ETManifoldMesh::Edge> * __cdecl
gte::ETManifoldMesh::CreateEdge
          (shared_ptr<gte::ETManifoldMesh::Edge> *__return_storage_ptr__,int param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &___7___Ref_count_obj2_VEdge_ETManifoldMesh_gte___std__6B_;
    puVar1[2] = &___7Edge_ETManifoldMesh_gte__6B_;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(int *)(puVar1 + 3) = param_1;
    *(int *)((longlong)puVar1 + 0x1c) = param_2;
  }
  *(undefined8 **)__return_storage_ptr__ = puVar1 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// CreateTriangle @ 1495bb850

shared_ptr<gte::ETManifoldMesh::Triangle> * __cdecl
gte::ETManifoldMesh::CreateTriangle
          (shared_ptr<gte::ETManifoldMesh::Triangle> *__return_storage_ptr__,int param_1,int param_2
          ,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &___7___Ref_count_obj2_VTriangle_ETManifoldMesh_gte___std__6B_;
    puVar1[2] = &___7Triangle_ETManifoldMesh_gte__6B_;
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
    *(int *)(puVar1 + 3) = param_1;
    *(int *)((longlong)puVar1 + 0x1c) = param_2;
    *(int *)(puVar1 + 4) = param_3;
  }
  *(undefined8 **)__return_storage_ptr__ = puVar1 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// DepthFirstSearch @ 1495bbbf0

void __thiscall
gte::ETManifoldMesh::DepthFirstSearch
          (ETManifoldMesh *this,shared_ptr<gte::ETManifoldMesh::Triangle> *param_1,
          map<std::shared_ptr<gte::ETManifoldMesh::Triangle>,int,std::less<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,std::allocator<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
          *param_2,vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
                   *param_3)

{
  int *piVar1;
  shared_ptr<gte::ETManifoldMesh::Triangle> **ppsVar2;
  int iVar3;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var4;
  longlong lVar5;
  longlong *plVar6;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var7;
  undefined8 uVar8;
  int iVar9;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var10;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var11;
  ulong64 uVar12;
  char cVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  shared_ptr<gte::ETManifoldMesh::Triangle> *psVar19;
  uint uVar20;
  bool bVar21;
  shared_ptr<gte::ETManifoldMesh::Triangle> *local_res8;
  shared_ptr<gte::ETManifoldMesh::Triangle> *local_78;
  shared_ptr<gte::ETManifoldMesh::Triangle> *local_70;
  undefined1 local_68 [16];
  _Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_*>
  local_58 [2];
  
  uVar15 = *(ulonglong *)&(this->mTMap).field_0x8;
  local_70 = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
  local_58[0]._Parent =
       (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *)
       0x0;
  local_58[0]._8_8_ = 0;
  if (uVar15 == 0) {
    local_78 = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
    local_res8 = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
  }
  else {
    if (0xfffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
      ::_Xlength();
    }
    local_res8 = std::_Allocate<16,std::_Default_allocate_traits>(uVar15 * 0x10);
    local_70 = local_res8 + uVar15;
    local_78 = local_res8;
    do {
      *(undefined8 *)local_78 = 0;
      *(undefined8 *)&local_78->field_0x8 = 0;
      local_78 = local_78 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  std::shared_ptr<gte::ETManifoldMesh::Triangle>::operator=(local_res8,param_1);
  lVar17 = 0;
  do {
    if (*(longlong *)&local_res8[lVar17].field_0x8 != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)&local_res8[lVar17].field_0x8 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_68._0_8_ = *(undefined8 *)(local_res8 + lVar17);
    p_Var4 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
               **)param_2;
    local_68._8_8_ = *(undefined8 *)&local_res8[lVar17].field_0x8;
    p_Var10 = p_Var4->_Parent;
    local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
    cVar13 = p_Var10->_Isnil;
    p_Var11 = p_Var4;
    local_58[0]._Parent = p_Var10;
    while (p_Var7 = p_Var10, cVar13 == '\0') {
      uVar15 = *(ulonglong *)&(p_Var7->_Myval).first;
      local_58[0]._12_4_ = (undefined4)((ulonglong)local_58[0]._8_8_ >> 0x20);
      if (uVar15 == local_68._0_8_) {
        cVar13 = '\0';
LAB_1495bbd02:
        local_58[0]._Child = 1;
        p_Var11 = p_Var7;
      }
      else {
        cVar13 = -1;
        if ((ulonglong)local_68._0_8_ <= uVar15) {
          cVar13 = '\x01';
          goto LAB_1495bbd02;
        }
        local_58[0]._8_8_ = (ulonglong)(uint)local_58[0]._12_4_ << 0x20;
      }
      p_Var10 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 *)&p_Var7->_Right;
      if (-1 < cVar13) {
        p_Var10 = p_Var7;
      }
      cVar13 = p_Var10->_Left->_Isnil;
      p_Var10 = p_Var10->_Left;
      local_58[0]._Parent = p_Var7;
    }
    if ((p_Var11->_Isnil != '\0') ||
       ((ulonglong)local_68._0_8_ < *(ulonglong *)&(p_Var11->_Myval).first)) {
      if (*(longlong *)&param_2->field_0x8 == 0x492492492492492) goto LAB_1495bc1da;
      p_Var10 = ::operator_new(0x38);
      *(undefined8 *)&(p_Var10->_Myval).first = 0;
      *(undefined8 *)&(p_Var10->_Myval).first.field_0x8 = 0;
      if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68._8_8_ + 8) = (int)*(longlong *)(local_68._8_8_ + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)&(p_Var10->_Myval).first = local_68._0_8_;
      *(undefined8 *)&(p_Var10->_Myval).first.field_0x8 = local_68._8_8_;
      (p_Var10->_Myval).second = 0;
      p_Var10->_Left = p_Var4;
      p_Var10->_Parent = p_Var4;
      p_Var10->_Right = p_Var4;
      p_Var10->_Color = '\0';
      p_Var10->_Isnil = '\0';
      p_Var11 = std::
                _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                                *)param_2,local_58,p_Var10);
    }
    uVar18 = 0;
    (p_Var11->_Myval).second = 1;
    uVar15 = uVar18;
    do {
      plVar14 = (longlong *)0x0;
      uVar20 = (uint)uVar15;
      lVar5 = *(longlong *)(local_68._0_8_ + 0x50 + uVar18);
      plVar16 = plVar14;
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 8);
        do {
          if (iVar3 == 0) goto LAB_1495bbe02;
          LOCK();
          iVar9 = *(int *)(lVar5 + 8);
          bVar21 = iVar3 == iVar9;
          if (bVar21) {
            *(int *)(lVar5 + 8) = iVar3 + 1;
            iVar9 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar9;
        } while (!bVar21);
        plVar16 = *(longlong **)(local_68._0_8_ + 0x48 + uVar18);
        plVar14 = *(longlong **)(local_68._0_8_ + 0x50 + uVar18);
      }
LAB_1495bbe02:
      if (plVar16 != (longlong *)0x0) {
        p_Var4 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   **)param_2;
        local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
        p_Var10 = p_Var4->_Parent;
        cVar13 = p_Var10->_Isnil;
        p_Var11 = p_Var4;
        local_58[0]._Parent = p_Var10;
        while (p_Var7 = p_Var10, cVar13 == '\0') {
          plVar6 = *(longlong **)&(p_Var7->_Myval).first;
          local_58[0]._12_4_ = (undefined4)((ulonglong)local_58[0]._8_8_ >> 0x20);
          if (plVar6 == plVar16) {
            cVar13 = '\0';
LAB_1495bbe40:
            local_58[0]._Child = 1;
            p_Var11 = p_Var7;
          }
          else {
            cVar13 = -1;
            if (plVar16 <= plVar6) {
              cVar13 = '\x01';
              goto LAB_1495bbe40;
            }
            local_58[0]._8_8_ = (ulonglong)(uint)local_58[0]._12_4_ << 0x20;
          }
          p_Var10 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                     *)&p_Var7->_Right;
          if (-1 < cVar13) {
            p_Var10 = p_Var7;
          }
          cVar13 = p_Var10->_Left->_Isnil;
          p_Var10 = p_Var10->_Left;
          local_58[0]._Parent = p_Var7;
        }
        if ((p_Var11->_Isnil != '\0') || (plVar16 < *(longlong **)&(p_Var11->_Myval).first)) {
          if (*(longlong *)&param_2->field_0x8 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Throw_tree_length_error();
          }
          p_Var10 = ::operator_new(0x38);
          *(undefined8 *)&(p_Var10->_Myval).first = 0;
          *(undefined8 *)&(p_Var10->_Myval).first.field_0x8 = 0;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          *(longlong **)&(p_Var10->_Myval).first = plVar16;
          *(longlong **)&(p_Var10->_Myval).first.field_0x8 = plVar14;
          (p_Var10->_Myval).second = 0;
          p_Var10->_Left = p_Var4;
          p_Var10->_Parent = p_Var4;
          p_Var10->_Right = p_Var4;
          p_Var10->_Color = '\0';
          p_Var10->_Isnil = '\0';
          p_Var11 = std::
                    _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                    ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                                    *)param_2,local_58,p_Var10);
        }
        if ((p_Var11->_Myval).second == 0) {
          lVar17 = lVar17 + 1;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          *(longlong **)(local_res8 + lVar17) = plVar16;
          plVar16 = *(longlong **)&local_res8[lVar17].field_0x8;
          *(longlong **)&local_res8[lVar17].field_0x8 = plVar14;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar16 + 1;
            lVar5 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar14 + 1;
            lVar5 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14);
              }
            }
          }
          break;
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar14 + 1;
        lVar5 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      uVar20 = uVar20 + 1;
      uVar15 = (ulonglong)uVar20;
      uVar18 = uVar18 + 0x10;
    } while ((longlong)uVar18 < 0x30);
    if (uVar20 == 3) {
      p_Var4 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 **)param_2;
      local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
      p_Var10 = p_Var4->_Parent;
      cVar13 = p_Var10->_Isnil;
      p_Var11 = p_Var4;
      local_58[0]._Parent = p_Var10;
      while (p_Var7 = p_Var10, cVar13 == '\0') {
        uVar15 = *(ulonglong *)&(p_Var7->_Myval).first;
        local_58[0]._12_4_ = (undefined4)((ulonglong)local_58[0]._8_8_ >> 0x20);
        if (uVar15 == local_68._0_8_) {
          cVar13 = '\0';
LAB_1495bc014:
          local_58[0]._Child = 1;
          p_Var11 = p_Var7;
        }
        else {
          cVar13 = -1;
          if ((ulonglong)local_68._0_8_ <= uVar15) {
            cVar13 = '\x01';
            goto LAB_1495bc014;
          }
          local_58[0]._8_8_ = (ulonglong)(uint)local_58[0]._12_4_ << 0x20;
        }
        p_Var10 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)&p_Var7->_Right;
        if (-1 < cVar13) {
          p_Var10 = p_Var7;
        }
        cVar13 = p_Var10->_Left->_Isnil;
        p_Var10 = p_Var10->_Left;
        local_58[0]._Parent = p_Var7;
      }
      if ((p_Var11->_Isnil != '\0') ||
         ((ulonglong)local_68._0_8_ < *(ulonglong *)&(p_Var11->_Myval).first)) {
        if (*(longlong *)&param_2->field_0x8 == 0x492492492492492) {
LAB_1495bc1da:
                    /* WARNING: Subroutine does not return */
          std::_Throw_tree_length_error();
        }
        p_Var10 = ::operator_new(0x38);
        *(undefined8 *)&(p_Var10->_Myval).first = 0;
        *(undefined8 *)&(p_Var10->_Myval).first.field_0x8 = 0;
        if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68._8_8_ + 8) = (int)*(longlong *)(local_68._8_8_ + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)&(p_Var10->_Myval).first = local_68._0_8_;
        *(undefined8 *)&(p_Var10->_Myval).first.field_0x8 = local_68._8_8_;
        (p_Var10->_Myval).second = 0;
        p_Var10->_Left = p_Var4;
        p_Var10->_Parent = p_Var4;
        p_Var10->_Right = p_Var4;
        p_Var10->_Color = '\0';
        p_Var10->_Isnil = '\0';
        p_Var11 = std::
                  _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                  ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                                  *)param_2,local_58,p_Var10);
      }
      (p_Var11->_Myval).second = 2;
      psVar19 = (param_3->_Mypair)._Myval2._Mylast;
      if (psVar19 == (param_3->_Mypair)._Myval2._Myend) {
        std::
        vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
        ::_Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>
                  (param_3,psVar19,(shared_ptr<gte::ETManifoldMesh::Triangle> *)local_68);
      }
      else {
        *(undefined8 *)psVar19 = 0;
        *(undefined8 *)&psVar19->field_0x8 = 0;
        if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68._8_8_ + 8) = (int)*(longlong *)(local_68._8_8_ + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)psVar19 = local_68._0_8_;
        *(undefined8 *)&psVar19->field_0x8 = local_68._8_8_;
        ppsVar2 = &(param_3->_Mypair)._Myval2._Mylast;
        *ppsVar2 = *ppsVar2 + 1;
      }
      lVar17 = lVar17 + -1;
    }
    uVar8 = local_68._8_8_;
    if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar16 = (longlong *)(local_68._8_8_ + 8);
      lVar5 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_);
        LOCK();
        piVar1 = (int *)(uVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)uVar8 + 8))(uVar8);
        }
      }
    }
    if (lVar17 < 0) {
      if (local_res8 != (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0) {
        std::_Destroy_range<std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
                  (local_res8,local_78,
                   (allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_> *)local_58);
        uVar12 = (longlong)local_70 - (longlong)local_res8 & 0xfffffffffffffff0;
        psVar19 = local_res8;
        if (0xfff < uVar12) {
          psVar19 = *(shared_ptr<gte::ETManifoldMesh::Triangle> **)&local_res8[-1].field_0x8;
          uVar12 = uVar12 + 0x27;
          if (0x1f < (ulonglong)((longlong)local_res8 + (-8 - (longlong)psVar19))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(psVar19,uVar12);
      }
      return;
    }
  } while( true );
}

// GetComponents @ 1495be6e0

void __thiscall
gte::ETManifoldMesh::GetComponents
          (ETManifoldMesh *this,
          vector<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>,std::allocator<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>_>_>
          *param_1)

{
  int *piVar1;
  vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_> **ppvVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_> *pvVar8;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var9;
  shared_ptr<gte::ETManifoldMesh::Triangle> *psVar10;
  longlong lVar11;
  undefined8 uVar12;
  shared_ptr<gte::ETManifoldMesh::Triangle> *psVar13;
  longlong *plVar14;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var15;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var16;
  ulonglong uVar17;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var18;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var19;
  shared_ptr<gte::ETManifoldMesh::Triangle> *psVar20;
  ulong64 uVar21;
  longlong *plVar22;
  bool bVar23;
  TriangleKey<1> local_a8;
  vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_> local_98;
  _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
  local_78;
  undefined1 local_68 [16];
  vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
  local_58;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *local_40;
  uint uStack_38;
  undefined4 uStack_34;
  
  local_78._Mysize = 0;
  local_78._Myhead = ::operator_new(0x38);
  (local_78._Myhead)->_Left = local_78._Myhead;
  (local_78._Myhead)->_Parent = local_78._Myhead;
  (local_78._Myhead)->_Right = local_78._Myhead;
  (local_78._Myhead)->_Color = '\x01';
  (local_78._Myhead)->_Isnil = '\x01';
  plVar22 = (longlong *)**(undefined8 **)&this->mTMap;
  while (p_Var18 = local_78._Myhead, *(char *)((longlong)plVar22 + 0x19) == '\0') {
    if (plVar22[7] != 0) {
      LOCK();
      piVar1 = (int *)(plVar22[7] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar17 = plVar22[6];
    plVar6 = (longlong *)plVar22[7];
    p_Var15 = (local_78._Myhead)->_Parent;
    cVar4 = p_Var15->_Isnil;
    local_40 = p_Var15;
    p_Var16 = local_78._Myhead;
    uStack_38 = 0;
    while (p_Var9 = p_Var15, cVar4 == '\0') {
      bVar23 = uVar17 <= *(ulonglong *)&(p_Var9->_Myval).first;
      p_Var15 = p_Var9;
      p_Var19 = p_Var9;
      if (!bVar23) {
        p_Var15 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)&p_Var9->_Right;
        p_Var19 = p_Var16;
      }
      uStack_38 = (uint)bVar23;
      cVar4 = p_Var15->_Left->_Isnil;
      p_Var15 = p_Var15->_Left;
      local_40 = p_Var9;
      p_Var16 = p_Var19;
    }
    if ((p_Var16->_Isnil == '\0') &&
       ((uVar7 = *(ulonglong *)&(p_Var16->_Myval).first, uVar17 == uVar7 || (uVar7 <= uVar17)))) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar6 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
    }
    else {
      if (local_78._Mysize == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_tree_length_error();
      }
      p_Var15 = ::operator_new(0x38);
      local_68._8_8_ = CONCAT44(uStack_34,uStack_38);
      *(ulonglong *)&(p_Var15->_Myval).first = uVar17;
      *(longlong **)&(p_Var15->_Myval).first.field_0x8 = plVar6;
      (p_Var15->_Myval).second = 0;
      p_Var15->_Left = p_Var18;
      p_Var15->_Parent = p_Var18;
      p_Var15->_Right = p_Var18;
      p_Var15->_Color = '\0';
      p_Var15->_Isnil = '\0';
      local_68._0_8_ = local_40;
      std::
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
      ::_Insert_node(&local_78,
                     (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_*>
                      *)local_68,p_Var15);
    }
    plVar6 = (longlong *)plVar22[2];
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar4 = *(char *)(*plVar6 + 0x19);
      plVar22 = plVar6;
      plVar6 = (longlong *)*plVar6;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*plVar6 + 0x19);
        plVar22 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
    }
    else {
      cVar4 = *(char *)(plVar22[1] + 0x19);
      plVar14 = (longlong *)plVar22[1];
      plVar6 = plVar22;
      while ((plVar22 = plVar14, cVar4 == '\0' && (plVar6 == (longlong *)plVar22[2]))) {
        cVar4 = *(char *)(plVar22[1] + 0x19);
        plVar14 = (longlong *)plVar22[1];
        plVar6 = plVar22;
      }
    }
  }
  plVar22 = (longlong *)**(longlong **)&this->mTMap;
  cVar4 = *(char *)((longlong)plVar22 + 0x19);
  do {
    local_78._Myhead = p_Var18;
    if (cVar4 != '\0') {
      std::
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
      ::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_>_>
                (&local_78,
                 (allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_>
                  *)&local_78,p_Var18->_Parent);
      ::operator_delete(local_78._Myhead,0x38);
      return;
    }
    if (plVar22[7] != 0) {
      LOCK();
      piVar1 = (int *)(plVar22[7] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_68._8_8_ = plVar22[7];
    local_68._0_8_ = plVar22[6];
    p_Var15 = p_Var18->_Parent;
    uStack_38 = 0;
    cVar4 = p_Var15->_Isnil;
    local_40 = p_Var15;
    p_Var16 = p_Var18;
    while (p_Var9 = p_Var15, cVar4 == '\0') {
      bVar23 = (ulonglong)local_68._0_8_ <=
               *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 **)&(p_Var9->_Myval).first;
      p_Var15 = p_Var9;
      p_Var19 = p_Var9;
      if (!bVar23) {
        p_Var15 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)&p_Var9->_Right;
        p_Var19 = p_Var16;
      }
      uStack_38 = (uint)bVar23;
      cVar4 = p_Var15->_Left->_Isnil;
      p_Var15 = p_Var15->_Left;
      local_40 = p_Var9;
      p_Var16 = p_Var19;
    }
    if ((p_Var16->_Isnil != '\0') ||
       ((ulonglong)local_68._0_8_ <
        *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> **
         )&(p_Var16->_Myval).first)) {
      if (local_78._Mysize == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_tree_length_error();
      }
      p_Var15 = ::operator_new(0x38);
      *(undefined8 *)&(p_Var15->_Myval).first = 0;
      *(undefined8 *)&(p_Var15->_Myval).first.field_0x8 = 0;
      if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68._8_8_ + 8) = (int)*(longlong *)(local_68._8_8_ + 8) + 1;
        UNLOCK();
      }
      local_98._Mypair._Myval2._Mylast = (TriangleKey<1> *)CONCAT44(uStack_34,uStack_38);
      *(undefined8 *)&(p_Var15->_Myval).first = local_68._0_8_;
      *(undefined8 *)&(p_Var15->_Myval).first.field_0x8 = local_68._8_8_;
      (p_Var15->_Myval).second = 0;
      p_Var15->_Left = p_Var18;
      p_Var15->_Parent = p_Var18;
      p_Var15->_Right = p_Var18;
      p_Var15->_Color = '\0';
      p_Var15->_Isnil = '\0';
      local_98._Mypair._Myval2._Myfirst = (TriangleKey<1> *)local_40;
      p_Var16 = std::
                _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                ::_Insert_node(&local_78,
                               (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_*>
                                *)&local_98,p_Var15);
    }
    if ((p_Var16->_Myval).second == 0) {
      local_58._Mypair._Myval2._Myend = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
      local_58._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
      local_58._Mypair._Myval2._Mylast = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
      DepthFirstSearch(this,(shared_ptr<gte::ETManifoldMesh::Triangle> *)local_68,
                       (map<std::shared_ptr<gte::ETManifoldMesh::Triangle>,int,std::less<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,std::allocator<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                        *)&local_78,&local_58);
      local_98._Mypair._Myval2._Myend = (TriangleKey<1> *)0x0;
      uVar17 = (longlong)local_58._Mypair._Myval2._Mylast -
               (longlong)local_58._Mypair._Myval2._Myfirst >> 4;
      local_98._Mypair._Myval2._Myfirst = (TriangleKey<1> *)0x0;
      local_98._Mypair._Myval2._Mylast = (TriangleKey<1> *)0x0;
      p_Var18 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 *)local_98._Mypair._Myval2._Mylast;
      psVar20 = local_58._Mypair._Myval2._Myfirst;
      psVar10 = local_58._Mypair._Myval2._Mylast;
      if (uVar17 != 0) {
        if (0x1555555555555555 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>::_Xlength();
        }
        p_Var18 = std::_Allocate<16,std::_Default_allocate_traits>(uVar17 * 0xc);
        memmove(p_Var18,local_98._Mypair._Myval2._Myfirst,
                (longlong)local_98._Mypair._Myval2._Mylast -
                (longlong)local_98._Mypair._Myval2._Myfirst);
        if ((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
             *)local_98._Mypair._Myval2._Myfirst !=
            (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
             *)0x0) {
          uVar21 = (((longlong)local_98._Mypair._Myval2._Myend -
                    (longlong)local_98._Mypair._Myval2._Myfirst) / 0xc) * 0xc;
          p_Var15 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                     *)local_98._Mypair._Myval2._Myfirst;
          if (0xfff < uVar21) {
            p_Var15 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                        **)&(((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                               *)((longlong)local_98._Mypair._Myval2._Myfirst + -0x38))->_Myval).
                            second;
            uVar21 = uVar21 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_98._Mypair._Myval2._Myfirst + (-8 - (longlong)p_Var15)))
            goto LAB_1495becc4;
          }
          ::operator_delete(p_Var15,uVar21);
        }
        local_98._Mypair._Myval2._Myend =
             (TriangleKey<1> *)((longlong)&p_Var18->_Left + uVar17 * 0xc);
        local_98._Mypair._Myval2._Mylast = (TriangleKey<1> *)p_Var18;
        psVar20 = local_58._Mypair._Myval2._Myfirst;
        psVar10 = local_58._Mypair._Myval2._Mylast;
      }
      for (; local_98._Mypair._Myval2._Myfirst = (TriangleKey<1> *)p_Var18,
          psVar13 = local_58._Mypair._Myval2._Mylast, psVar20 != local_58._Mypair._Myval2._Mylast;
          psVar20 = psVar20 + 1) {
        lVar11 = *(longlong *)psVar20;
        local_a8._8_4_ = *(int *)(lVar11 + 0xc);
        iVar3 = *(int *)(lVar11 + 0x10);
        iVar5 = *(int *)(lVar11 + 8);
        local_a8._0_4_ = iVar3;
        local_a8._4_4_ = iVar5;
        if (iVar5 < (int)local_a8._8_4_) {
          if (iVar5 < iVar3) {
            local_a8._0_4_ = iVar5;
            local_a8._4_4_ = local_a8._8_4_;
            local_a8._8_4_ = iVar3;
          }
        }
        else if ((int)local_a8._8_4_ < iVar3) {
          local_a8._0_4_ = local_a8._8_4_;
          local_a8._4_4_ = iVar3;
          local_a8._8_4_ = iVar5;
        }
        if (local_98._Mypair._Myval2._Mylast == local_98._Mypair._Myval2._Myend) {
          local_58._Mypair._Myval2._Mylast = psVar10;
          std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>::
          _Emplace_reallocate<gte::TriangleKey<1>_>
                    (&local_98,local_98._Mypair._Myval2._Mylast,&local_a8);
        }
        else {
          *(undefined4 *)
           &((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
              *)local_98._Mypair._Myval2._Mylast)->_Left = local_a8._0_4_;
          *(undefined4 *)
           ((longlong)
            &((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
               *)local_98._Mypair._Myval2._Mylast)->_Left + 4) = local_a8._4_4_;
          *(undefined4 *)
           &((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
              *)local_98._Mypair._Myval2._Mylast)->_Parent = local_a8._8_4_;
          local_98._Mypair._Myval2._Mylast =
               (TriangleKey<1> *)
               ((longlong)
                &((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_98._Mypair._Myval2._Mylast)->_Parent + 4);
          local_58._Mypair._Myval2._Mylast = psVar10;
        }
        p_Var18 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_98._Mypair._Myval2._Myfirst;
        psVar10 = local_58._Mypair._Myval2._Mylast;
        local_58._Mypair._Myval2._Mylast = psVar13;
      }
      pvVar8 = (param_1->_Mypair)._Myval2._Mylast;
      if (pvVar8 == (param_1->_Mypair)._Myval2._Myend) {
        local_58._Mypair._Myval2._Mylast = psVar10;
        std::
        vector<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>,std::allocator<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>_>_>
        ::
        _Emplace_reallocate<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>_const_&>
                  (param_1,pvVar8,&local_98);
      }
      else {
        local_58._Mypair._Myval2._Mylast = psVar10;
        std::
        _Default_allocator_traits<std::allocator<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>_>_>
        ::
        construct<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>,std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>_const_&>
                  ((allocator<std::vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_>_>
                    *)param_1,pvVar8,&local_98);
        ppvVar2 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppvVar2 = *ppvVar2 + 1;
      }
      if ((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )local_98._Mypair._Myval2._Myfirst !=
          (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )0x0) {
        uVar21 = (((longlong)local_98._Mypair._Myval2._Myend -
                  (longlong)local_98._Mypair._Myval2._Myfirst) / 0xc) * 0xc;
        p_Var18 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_98._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          p_Var18 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                      **)&(((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                             *)((longlong)local_98._Mypair._Myval2._Myfirst + -0x38))->_Myval).
                          second;
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_98._Mypair._Myval2._Myfirst + (-8 - (longlong)p_Var18)))
          goto LAB_1495becc4;
        }
        ::operator_delete(p_Var18,uVar21);
        local_98._Mypair._Myval2._Myend = (TriangleKey<1> *)0x0;
        local_98._Mypair._Myval2._Myfirst = (TriangleKey<1> *)0x0;
        local_98._Mypair._Myval2._Mylast = (TriangleKey<1> *)0x0;
      }
      if (local_58._Mypair._Myval2._Myfirst != (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0) {
        std::_Destroy_range<std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
                  (local_58._Mypair._Myval2._Myfirst,local_58._Mypair._Myval2._Mylast,
                   (allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_> *)&local_58);
        uVar21 = (longlong)local_58._Mypair._Myval2._Myend -
                 (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        psVar20 = local_58._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          psVar20 = *(shared_ptr<gte::ETManifoldMesh::Triangle> **)
                     &local_58._Mypair._Myval2._Myfirst[-1].field_0x8;
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_58._Mypair._Myval2._Myfirst + (-8 - (longlong)psVar20))) {
LAB_1495becc4:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(psVar20,uVar21);
      }
    }
    uVar12 = local_68._8_8_;
    if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar6 = (longlong *)(local_68._8_8_ + 8);
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_);
        LOCK();
        piVar1 = (int *)(uVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)uVar12 + 8))(uVar12);
        }
      }
    }
    plVar6 = (longlong *)plVar22[2];
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar4 = *(char *)(*plVar6 + 0x19);
      plVar22 = plVar6;
      plVar6 = (longlong *)*plVar6;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*plVar6 + 0x19);
        plVar22 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
    }
    else {
      cVar4 = *(char *)(plVar22[1] + 0x19);
      plVar14 = (longlong *)plVar22[1];
      plVar6 = plVar22;
      while ((plVar22 = plVar14, cVar4 == '\0' && (plVar6 == (longlong *)plVar22[2]))) {
        cVar4 = *(char *)(plVar22[1] + 0x19);
        plVar14 = (longlong *)plVar22[1];
        plVar6 = plVar22;
      }
    }
    cVar4 = *(char *)((longlong)plVar22 + 0x19);
    p_Var18 = local_78._Myhead;
  } while( true );
}

// GetComponents @ 1495bed40

void __thiscall
gte::ETManifoldMesh::GetComponents
          (ETManifoldMesh *this,
          vector<std::vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>,std::allocator<std::vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>_>
          *param_1)

{
  int *piVar1;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> **pp_Var2;
  vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
  **ppvVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
  *pvVar7;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var12;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var13;
  _Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *p_Var14;
  shared_ptr<gte::ETManifoldMesh::Triangle> *psVar15;
  char cVar16;
  ulong64 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
  local_68;
  undefined1 local_58 [16];
  vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
  local_48;
  
  local_68._Mysize = 0;
  p_Var12 = ::operator_new(0x38);
  p_Var12->_Left = p_Var12;
  p_Var12->_Parent = p_Var12;
  p_Var12->_Right = p_Var12;
  p_Var12->_Color = '\x01';
  p_Var12->_Isnil = '\x01';
  plVar18 = (longlong *)**(longlong **)&this->mTMap;
  cVar16 = *(char *)((longlong)plVar18 + 0x19);
  while (cVar16 == '\0') {
    if (plVar18[7] != 0) {
      LOCK();
      piVar1 = (int *)(plVar18[7] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar19 = plVar18[6];
    plVar5 = (longlong *)plVar18[7];
    p_Var13 = p_Var12->_Parent;
    cVar16 = p_Var13->_Isnil;
    local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)p_Var13;
    uVar20 = 0;
    p_Var14 = p_Var12;
    while (p_Var8 = p_Var13, cVar16 == '\0') {
      uVar6 = *(ulonglong *)&(p_Var8->_Myval).first;
      if (uVar6 == uVar19) {
        cVar16 = '\0';
LAB_1495bedeb:
        p_Var14 = p_Var8;
        uVar20 = 1;
      }
      else {
        cVar16 = -1;
        uVar20 = 0;
        if (uVar19 <= uVar6) {
          cVar16 = '\x01';
          goto LAB_1495bedeb;
        }
      }
      p_Var13 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 *)&p_Var8->_Right;
      if (-1 < cVar16) {
        p_Var13 = p_Var8;
      }
      cVar16 = p_Var13->_Left->_Isnil;
      p_Var13 = p_Var13->_Left;
      local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)p_Var8;
    }
    local_48._Mypair._Myval2._Mylast =
         (shared_ptr<gte::ETManifoldMesh::Triangle> *)
         CONCAT44((int)((ulonglong)local_48._Mypair._Myval2._Mylast >> 0x20),uVar20);
    local_68._Myhead = p_Var12;
    if ((p_Var14->_Isnil == '\0') &&
       ((uVar6 = *(ulonglong *)&(p_Var14->_Myval).first, uVar19 == uVar6 || (uVar6 <= uVar19)))) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar5 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
    }
    else {
      if (local_68._Mysize == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_tree_length_error();
      }
      p_Var13 = ::operator_new(0x38);
      *(ulonglong *)&(p_Var13->_Myval).first = uVar19;
      *(longlong **)&(p_Var13->_Myval).first.field_0x8 = plVar5;
      (p_Var13->_Myval).second = 0;
      p_Var13->_Left = p_Var12;
      p_Var13->_Parent = p_Var12;
      p_Var13->_Right = p_Var12;
      p_Var13->_Color = '\0';
      p_Var13->_Isnil = '\0';
      local_58._0_8_ = local_48._Mypair._Myval2._Myfirst;
      local_58._8_8_ = local_48._Mypair._Myval2._Mylast;
      std::
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
      ::_Insert_node(&local_68,
                     (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_*>
                      *)local_58,p_Var13);
    }
    plVar5 = (longlong *)plVar18[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar16 = *(char *)(*plVar5 + 0x19);
      plVar18 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar16 == '\0') {
        cVar16 = *(char *)(*plVar5 + 0x19);
        plVar18 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar16 = *(char *)(plVar18[1] + 0x19);
      plVar11 = (longlong *)plVar18[1];
      plVar5 = plVar18;
      while ((plVar18 = plVar11, cVar16 == '\0' && (plVar5 == (longlong *)plVar18[2]))) {
        cVar16 = *(char *)(plVar18[1] + 0x19);
        plVar11 = (longlong *)plVar18[1];
        plVar5 = plVar18;
      }
    }
    p_Var12 = local_68._Myhead;
    cVar16 = *(char *)((longlong)plVar18 + 0x19);
  }
  plVar18 = (longlong *)**(longlong **)&this->mTMap;
  cVar16 = *(char *)((longlong)plVar18 + 0x19);
  do {
    local_68._Myhead = p_Var12;
    if (cVar16 != '\0') {
      std::
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
      ::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_>_>
                (&local_68,
                 (allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_>
                  *)&local_68,p_Var12->_Parent);
      ::operator_delete(local_68._Myhead,0x38);
      return;
    }
    if (plVar18[7] != 0) {
      LOCK();
      piVar1 = (int *)(plVar18[7] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_58._0_8_ = plVar18[6];
    local_58._8_8_ = plVar18[7];
    p_Var13 = p_Var12->_Parent;
    local_48._Mypair._Myval2._Mylast =
         (shared_ptr<gte::ETManifoldMesh::Triangle> *)
         ((ulonglong)local_48._Mypair._Myval2._Mylast & 0xffffffff00000000);
    cVar16 = p_Var13->_Isnil;
    local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)p_Var13;
    p_Var14 = p_Var12;
    while (p_Var8 = p_Var13, cVar16 == '\0') {
      p_Var13 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                  **)&(p_Var8->_Myval).first;
      local_48._Mypair._Myval2._Mylast._4_4_ =
           (uint)((ulonglong)local_48._Mypair._Myval2._Mylast >> 0x20);
      if (p_Var13 ==
          (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )local_58._0_8_) {
        cVar16 = '\0';
LAB_1495bef80:
        local_48._Mypair._Myval2._Mylast =
             (shared_ptr<gte::ETManifoldMesh::Triangle> *)
             CONCAT44(local_48._Mypair._Myval2._Mylast._4_4_,1);
        p_Var14 = p_Var8;
      }
      else {
        cVar16 = -1;
        if ((ulonglong)local_58._0_8_ <= p_Var13) {
          cVar16 = '\x01';
          goto LAB_1495bef80;
        }
        local_48._Mypair._Myval2._Mylast =
             (shared_ptr<gte::ETManifoldMesh::Triangle> *)
             ((ulonglong)local_48._Mypair._Myval2._Mylast._4_4_ << 0x20);
      }
      p_Var13 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 *)&p_Var8->_Right;
      if (-1 < cVar16) {
        p_Var13 = p_Var8;
      }
      cVar16 = p_Var13->_Left->_Isnil;
      p_Var13 = p_Var13->_Left;
      local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)p_Var8;
    }
    if ((p_Var14->_Isnil != '\0') ||
       ((ulonglong)local_58._0_8_ <
        *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> **
         )&(p_Var14->_Myval).first)) {
      if (local_68._Mysize == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_tree_length_error();
      }
      p_Var13 = ::operator_new(0x38);
      *(undefined8 *)&(p_Var13->_Myval).first = 0;
      *(undefined8 *)&(p_Var13->_Myval).first.field_0x8 = 0;
      if ((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )local_58._8_8_ !=
          (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )0x0) {
        LOCK();
        *(int *)(local_58._8_8_ + 8) = *(int *)(local_58._8_8_ + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)&(p_Var13->_Myval).first = local_58._0_8_;
      *(undefined8 *)&(p_Var13->_Myval).first.field_0x8 = local_58._8_8_;
      (p_Var13->_Myval).second = 0;
      p_Var13->_Left = p_Var12;
      p_Var13->_Parent = p_Var12;
      p_Var13->_Right = p_Var12;
      p_Var13->_Color = '\0';
      p_Var13->_Isnil = '\0';
      p_Var14 = std::
                _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                ::_Insert_node(&local_68,
                               (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>_*>
                                *)&local_48,p_Var13);
    }
    if ((p_Var14->_Myval).second == 0) {
      local_48._Mypair._Myval2._Myend = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
      local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
      local_48._Mypair._Myval2._Mylast = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
      DepthFirstSearch(this,(shared_ptr<gte::ETManifoldMesh::Triangle> *)local_58,
                       (map<std::shared_ptr<gte::ETManifoldMesh::Triangle>,int,std::less<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,std::allocator<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>_>_>
                        *)&local_68,&local_48);
      pvVar7 = (param_1->_Mypair)._Myval2._Mylast;
      if (pvVar7 == (param_1->_Mypair)._Myval2._Myend) {
        std::
        vector<std::vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>,std::allocator<std::vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>_>
        ::
        _Emplace_reallocate<std::vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_const_&>
                  (param_1,pvVar7,&local_48);
      }
      else {
        (pvVar7->_Mypair)._Myval2._Myfirst = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
        (pvVar7->_Mypair)._Myval2._Mylast = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
        (pvVar7->_Mypair)._Myval2._Myend = (shared_ptr<gte::ETManifoldMesh::Triangle> *)0x0;
        uVar19 = (longlong)local_48._Mypair._Myval2._Mylast -
                 (longlong)local_48._Mypair._Myval2._Myfirst >> 4;
        if (uVar19 != 0) {
          if (0xfffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
            std::
            vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
            ::_Xlength();
          }
          psVar15 = std::_Allocate<16,std::_Default_allocate_traits>(uVar19 * 0x10);
          (pvVar7->_Mypair)._Myval2._Myfirst = psVar15;
          (pvVar7->_Mypair)._Myval2._Mylast = psVar15;
          (pvVar7->_Mypair)._Myval2._Myend = psVar15 + uVar19;
          for (p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                          *)local_48._Mypair._Myval2._Myfirst;
              p_Var12 !=
              (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
               *)local_48._Mypair._Myval2._Mylast;
              p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                         *)&p_Var12->_Right) {
            *(undefined8 *)psVar15 = 0;
            *(undefined8 *)&psVar15->field_0x8 = 0;
            if (p_Var12->_Parent !=
                (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 *)0x0) {
              LOCK();
              pp_Var2 = &p_Var12->_Parent->_Parent;
              *(int *)pp_Var2 = *(int *)pp_Var2 + 1;
              UNLOCK();
            }
            *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
              **)psVar15 = p_Var12->_Left;
            *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
              **)&psVar15->field_0x8 = p_Var12->_Parent;
            psVar15 = psVar15 + 1;
          }
          (pvVar7->_Mypair)._Myval2._Mylast = psVar15;
        }
        ppvVar3 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppvVar3 = *ppvVar3 + 1;
      }
      psVar15 = local_48._Mypair._Myval2._Mylast;
      p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 *)local_48._Mypair._Myval2._Myfirst;
      if ((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )local_48._Mypair._Myval2._Myfirst !=
          (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *
          )0x0) {
        for (; p_Var12 !=
               (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                *)psVar15;
            p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                       *)&p_Var12->_Right) {
          p_Var13 = p_Var12->_Parent;
          if (p_Var13 !=
              (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
               *)0x0) {
            LOCK();
            pp_Var2 = &p_Var13->_Parent;
            iVar4 = *(int *)pp_Var2;
            *(int *)pp_Var2 = *(int *)pp_Var2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (*(code *)p_Var13->_Left->_Left)();
              LOCK();
              piVar1 = (int *)((longlong)&p_Var13->_Parent + 4);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (*(code *)p_Var13->_Left->_Parent)();
              }
            }
          }
        }
        uVar17 = (longlong)local_48._Mypair._Myval2._Myend -
                 (longlong)local_48._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_48._Mypair._Myval2._Myfirst;
        if (0xfff < uVar17) {
          p_Var12 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                      **)&(((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                             *)((longlong)local_48._Mypair._Myval2._Myfirst + -0x38))->_Myval).
                          second;
          uVar17 = uVar17 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_48._Mypair._Myval2._Myfirst + (-8 - (longlong)p_Var12))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(p_Var12,uVar17);
      }
    }
    uVar10 = local_58._8_8_;
    if ((_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *)
        local_58._8_8_ !=
        (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*> *)
        0x0) {
      LOCK();
      pp_Var2 = (_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                 **)(local_58._8_8_ + 8);
      iVar4 = *(int *)pp_Var2;
      *(int *)pp_Var2 = *(int *)pp_Var2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)(*(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                     **)local_58._8_8_)->_Left)(local_58._8_8_);
        LOCK();
        piVar1 = (int *)((longlong)(uVar10 + 8) + 4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)(*(_Tree_node<std::pair<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_,int>,void_*>
                       **)uVar10)->_Parent)(uVar10);
        }
      }
    }
    plVar5 = (longlong *)plVar18[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar16 = *(char *)(*plVar5 + 0x19);
      plVar18 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar16 == '\0') {
        cVar16 = *(char *)(*plVar5 + 0x19);
        plVar18 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar16 = *(char *)(plVar18[1] + 0x19);
      plVar11 = (longlong *)plVar18[1];
      plVar5 = plVar18;
      while ((plVar18 = plVar11, cVar16 == '\0' && (plVar5 == (longlong *)plVar18[2]))) {
        cVar16 = *(char *)(plVar18[1] + 0x19);
        plVar11 = (longlong *)plVar18[1];
        plVar5 = plVar18;
      }
    }
    cVar16 = *(char *)((longlong)plVar18 + 0x19);
    p_Var12 = local_68._Myhead;
  } while( true );
}

// GetEdges @ 1495bfec0

map<gte::EdgeKey<0>,std::shared_ptr<gte::ETManifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
* __thiscall gte::ETManifoldMesh::GetEdges(ETManifoldMesh *this)

{
  return &this->mEMap;
}

// GetTriangles @ 1495c0420

map<gte::TriangleKey<1>,std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
* __thiscall gte::ETManifoldMesh::GetTriangles(ETManifoldMesh *this)

{
  return &this->mTMap;
}

// Insert @ 1495c0890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

shared_ptr<gte::ETManifoldMesh::Triangle> * __thiscall
gte::ETManifoldMesh::Insert
          (ETManifoldMesh *this,shared_ptr<gte::ETManifoldMesh::Triangle> *__return_storage_ptr__,
          int param_1,int param_2,int param_3)

{
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  **pp_Var1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  longlong *plVar5;
  _Ref_count_base *this_00;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
  *p_Var6;
  EdgeKey<0> EVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ETManifoldMesh *pEVar11;
  longlong lVar12;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *p_Var13;
  shared_ptr<gte::ETManifoldMesh::Edge> *psVar14;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *p_Var15;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *p_Var16;
  Logger *pLVar17;
  int *piVar18;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
  *p_Var19;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
  *p_Var20;
  int iVar21;
  int iVar22;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *p_Var23;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *p_Var24;
  undefined8 uVar25;
  undefined8 uVar26;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *p_Var27;
  ulong64 uVar28;
  shared_ptr<gte::ETManifoldMesh::Triangle> *psVar29;
  ulong *puVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  bool bVar34;
  undefined1 auStackY_128 [32];
  int local_f8 [6];
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *local_e0;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
  *local_d8;
  int local_d0;
  longlong local_c8;
  ETManifoldMesh *local_c0;
  shared_ptr<gte::ETManifoldMesh::Triangle> *local_b8;
  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
  *local_b0;
  longlong local_a8;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_b8 = __return_storage_ptr__;
  local_c0 = this;
  if (param_1 < param_2) {
    if (param_1 < param_3) {
      local_f8[0] = param_1;
      local_f8[1] = param_2;
      local_f8[2] = param_3;
      goto LAB_1495c0904;
    }
  }
  else if (param_2 < param_3) {
    local_f8[0] = param_2;
    local_f8[1] = param_3;
    local_f8[2] = param_1;
    goto LAB_1495c0904;
  }
  local_f8[0] = param_3;
  local_f8[1] = param_1;
  local_f8[2] = param_2;
LAB_1495c0904:
  plVar5 = *(longlong **)&this->mTMap;
  plVar31 = (longlong *)plVar5[1];
  cVar2 = *(char *)((longlong)plVar31 + 0x19);
  plVar8 = plVar5;
  while (cVar2 == '\0') {
    iVar21 = 2;
    piVar18 = local_f8 + 2;
    do {
      iVar22 = *(int *)((longlong)piVar18 + (longlong)plVar31 + (0x28 - (longlong)(local_f8 + 2)));
      if (iVar22 < *piVar18) {
        plVar31 = plVar31 + 2;
        plVar32 = plVar8;
        break;
      }
      plVar32 = plVar31;
      if (*piVar18 < iVar22) break;
      piVar18 = piVar18 + -1;
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
    plVar31 = (longlong *)*plVar31;
    plVar8 = plVar32;
    cVar2 = *(char *)((longlong)plVar31 + 0x19);
  }
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    iVar21 = 2;
    piVar18 = local_f8 + 2;
    do {
      iVar22 = *(int *)((longlong)piVar18 + (longlong)plVar8 + (0x28 - (longlong)(local_f8 + 2)));
      if (*piVar18 < iVar22) goto LAB_1495c09b0;
      if (iVar22 < *piVar18) break;
      piVar18 = piVar18 + -1;
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
    if (plVar8 != plVar5) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      return __return_storage_ptr__;
    }
  }
LAB_1495c09b0:
  (*this->mTCreator)((shared_ptr<gte::ETManifoldMesh::Triangle> *)&local_e0,param_1,param_2,param_3)
  ;
  local_d0 = 0;
  local_c8 = 0;
  local_a8 = 2;
  local_b0 = (_Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
              *)&local_c0->mEMap;
  do {
    lVar12 = local_a8;
    lVar33 = local_c8;
    p_Var24 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
               *)0x0;
    uVar3 = *(ulong *)((longlong)&local_e0->_Parent + local_c8 * 4);
    local_f8[5] = *(ulong *)((longlong)&local_e0->_Parent + local_a8 * 4);
    if (local_f8[5] < (int)uVar3) {
      local_f8[4] = local_f8[5];
      local_f8[5] = uVar3;
    }
    else {
      local_f8[4] = uVar3;
    }
    p_Var27 = local_b0->_Myhead;
    p_Var13 = p_Var27->_Parent;
    cVar2 = p_Var13->_Isnil;
    p_Var15 = p_Var27;
    while (cVar2 == '\0') {
      iVar21 = 1;
      piVar18 = local_f8 + 5;
      do {
        iVar22 = *(int *)((longlong)piVar18 + (longlong)p_Var13 + (0x24 - (longlong)(local_f8 + 5)))
        ;
        if (iVar22 < *piVar18) {
          p_Var13 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                     *)&p_Var13->_Right;
          p_Var16 = p_Var15;
          break;
        }
        p_Var16 = p_Var13;
        if (*piVar18 < iVar22) break;
        piVar18 = piVar18 + -1;
        iVar21 = iVar21 + -1;
      } while (-1 < iVar21);
      p_Var13 = p_Var13->_Left;
      p_Var15 = p_Var16;
      cVar2 = p_Var13->_Isnil;
    }
    if (p_Var15->_Isnil == '\0') {
      iVar21 = 1;
      piVar18 = local_f8 + 5;
      do {
        iVar22 = *(int *)((longlong)piVar18 + (longlong)p_Var15 + (0x24 - (longlong)(local_f8 + 5)))
        ;
        if (*piVar18 < iVar22) goto LAB_1495c0d79;
        if (iVar22 < *piVar18) break;
        piVar18 = piVar18 + -1;
        iVar21 = iVar21 + -1;
      } while (-1 < iVar21);
      if (p_Var15 == p_Var27) goto LAB_1495c0d79;
      lVar33 = *(longlong *)&(p_Var15->_Myval).second.field_0x8;
      if (lVar33 != 0) {
        LOCK();
        piVar18 = (int *)(lVar33 + 8);
        *piVar18 = *piVar18 + 1;
        UNLOCK();
      }
      p_Var27 = *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                  **)&(p_Var15->_Myval).second;
      p_Var13 = *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                  **)&(p_Var15->_Myval).second.field_0x8;
      local_78[0]._Ptr = p_Var13;
      if (p_Var27 ==
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        local_98._8_8_ = (longlong *)0x0;
        local_98._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
        uVar25 = s_Unexpected_condition_._8_8_;
        local_88 = ___xmm_000000000000001f0000000000000015;
        uStack_80 = _UNK_151e59228;
        *(undefined8 *)local_98._Ptr = s_Unexpected_condition_._0_8_;
        *(undefined8 *)(local_98._Ptr + 8) = uVar25;
        *(undefined4 *)(local_98._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
        *(local_98._Ptr + 0x14) = s_Unexpected_condition_[0x14];
        *(local_98._Ptr + 0x15) = '\0';
        pLVar17 = Logger::Logger((Logger *)local_78,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETManifoldMesh.cpp"
                                 ,"gte::ETManifoldMesh::Insert",99,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_98);
        Logger::Error(pLVar17);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78);
        if (0xf < uStack_80) {
          uVar28 = uStack_80 + 1;
          uVar25 = local_98._Ptr;
          if (0xfff < uVar28) {
            uVar25 = *(undefined8 *)(local_98._Ptr + -8);
            uVar28 = uStack_80 + 0x28;
            if ((char *)0x1f < local_98._Ptr + (-8 - uVar25)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar25,uVar28);
        }
LAB_1495c11a5:
        *(undefined8 *)&local_b8->field_0x8 = 0;
        *(undefined8 *)local_b8 = 0;
        psVar29 = local_b8;
LAB_1495c11b0:
        if (p_Var13 !=
            (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
             *)0x0) {
          std::_Ref_count_base::_Decref((_Ref_count_base *)p_Var13);
        }
        if (local_d8 ==
            (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
             *)0x0) {
          return psVar29;
        }
        std::_Ref_count_base::_Decref((_Ref_count_base *)local_d8);
        return psVar29;
      }
      lVar33 = *(longlong *)&(p_Var27->_Myval).second;
      if (lVar33 != 0) {
        iVar21 = *(int *)(lVar33 + 8);
        do {
          if (iVar21 == 0) goto LAB_1495c0b10;
          LOCK();
          iVar22 = *(int *)(lVar33 + 8);
          bVar34 = iVar21 == iVar22;
          if (bVar34) {
            *(int *)(lVar33 + 8) = iVar21 + 1;
            iVar22 = iVar21;
          }
          UNLOCK();
          iVar21 = iVar22;
        } while (!bVar34);
        this_00 = *(_Ref_count_base **)&(p_Var27->_Myval).second;
        lVar33 = ((_Ref_count_base *)&p_Var27->_Myval)->_padding_;
        if (this_00 != (_Ref_count_base *)0x0) {
          std::_Ref_count_base::_Decref(this_00);
        }
        if (lVar33 != 0) {
          if (local_c0->mAssertOnNonmanifoldInsertion != false) {
            local_98._8_8_ = (longlong *)0x0;
            local_98._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
            uVar25 = s_The_mesh_must_be_manifold_._8_8_;
            local_88 = ___xmm_000000000000001f000000000000001a;
            uStack_80 = _UNK_151e59248;
            *(undefined8 *)local_98._Ptr = s_The_mesh_must_be_manifold_._0_8_;
            *(undefined8 *)(local_98._Ptr + 8) = uVar25;
            *(undefined8 *)(local_98._Ptr + 0x10) = s_The_mesh_must_be_manifold_._16_8_;
            *(undefined2 *)(local_98._Ptr + 0x18) = s_The_mesh_must_be_manifold_._24_2_;
            *(local_98._Ptr + 0x1a) = '\0';
            pLVar17 = Logger::Logger((Logger *)local_78,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETManifoldMesh.cpp"
                                     ,"gte::ETManifoldMesh::Insert",0x6c,
                                     (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_98);
            Logger::Information(pLVar17);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98)
            ;
          }
          goto LAB_1495c11a5;
        }
      }
LAB_1495c0b10:
      p_Var15 = p_Var24;
      p_Var16 = p_Var24;
      if (local_d8 !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        puVar30 = (ulong *)((longlong)&local_d8->_Parent + 4);
        *puVar30 = *puVar30 + 1;
        UNLOCK();
        p_Var15 = local_d8;
        p_Var16 = local_e0;
      }
      ((_Ref_count_base *)&p_Var27->_Myval)->_padding_ = (longlong)p_Var16;
      plVar5 = *(longlong **)&(p_Var27->_Myval).second;
      *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
        **)&(p_Var27->_Myval).second = p_Var15;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        iVar21 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      lVar33 = *(longlong *)&p_Var27->_Color;
      p_Var15 = p_Var24;
      p_Var16 = p_Var24;
      if (lVar33 != 0) {
        iVar21 = *(int *)(lVar33 + 8);
        do {
          p_Var16 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                     *)0x0;
          p_Var15 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                     *)0x0;
          if (iVar21 == 0) goto LAB_1495c0b7e;
          LOCK();
          iVar22 = *(int *)(lVar33 + 8);
          bVar34 = iVar21 == iVar22;
          if (bVar34) {
            *(int *)(lVar33 + 8) = iVar21 + 1;
            iVar22 = iVar21;
          }
          UNLOCK();
          iVar21 = iVar22;
        } while (!bVar34);
        p_Var15 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                   *)((_Ref_count_base *)&p_Var27->_Right)->_padding_;
        p_Var16 = *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                    **)&p_Var27->_Color;
      }
LAB_1495c0b7e:
      if (p_Var15 ==
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        local_98._8_8_ = (longlong *)0x0;
        local_98._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
        uVar25 = s_Unexpected_condition_._8_8_;
        local_88 = ___xmm_000000000000001f0000000000000015;
        uStack_80 = _UNK_151e59228;
        *(undefined8 *)local_98._Ptr = s_Unexpected_condition_._0_8_;
        *(undefined8 *)(local_98._Ptr + 8) = uVar25;
        *(undefined4 *)(local_98._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
        *(local_98._Ptr + 0x14) = s_Unexpected_condition_[0x14];
        *(local_98._Ptr + 0x15) = '\0';
        pLVar17 = Logger::Logger((Logger *)local_78,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETManifoldMesh.cpp"
                                 ,"gte::ETManifoldMesh::Insert",0x76,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_98);
        Logger::Error(pLVar17);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98);
        psVar29 = local_b8;
        *(undefined8 *)local_b8 = 0;
        *(undefined8 *)&local_b8->field_0x8 = 0;
        if (p_Var16 !=
            (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
             *)0x0) {
          std::_Ref_count_base::_Decref((_Ref_count_base *)p_Var16);
        }
        goto LAB_1495c11b0;
      }
      puVar30 = (ulong *)&p_Var15->_Color;
      do {
        lVar33 = *(longlong *)(puVar30 + 2);
        if (lVar33 != 0) {
          iVar21 = *(int *)(lVar33 + 8);
          do {
            if (iVar21 == 0) goto LAB_1495c0bf9;
            LOCK();
            iVar22 = *(int *)(lVar33 + 8);
            bVar34 = iVar21 == iVar22;
            if (bVar34) {
              *(int *)(lVar33 + 8) = iVar21 + 1;
              iVar22 = iVar21;
            }
            UNLOCK();
            iVar21 = iVar22;
          } while (!bVar34);
          plVar5 = *(longlong **)(puVar30 + 2);
          p_Var13 = *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                      **)puVar30;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar31 = plVar5 + 1;
            lVar33 = *plVar31;
            *(int *)plVar31 = (int)*plVar31 + -1;
            UNLOCK();
            if ((int)lVar33 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar18 = (int *)((longlong)plVar5 + 0xc);
              iVar21 = *piVar18;
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (iVar21 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
          if (p_Var13 == p_Var27) {
            p_Var13 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                       *)0x0;
            p_Var23 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                       *)0x0;
            if (local_d8 !=
                (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                 *)0x0) {
              LOCK();
              puVar30 = (ulong *)((longlong)&local_d8->_Parent + 4);
              *puVar30 = *puVar30 + 1;
              UNLOCK();
              p_Var13 = local_d8;
              p_Var23 = local_e0;
            }
            (&p_Var15[1]._Right)[(longlong)p_Var24 * 2] = p_Var23;
            plVar5 = (longlong *)
                     ((_Ref_count_base *)(&p_Var15[1]._Color + (longlong)p_Var24 * 0x10))->_padding_
            ;
            ((_Ref_count_base *)(&p_Var15[1]._Color + (longlong)p_Var24 * 0x10))->_padding_ =
                 (longlong)p_Var13;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar18 = (int *)((longlong)plVar5 + 0xc);
              iVar21 = *piVar18;
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (iVar21 == 1) {
                (**(code **)(*plVar5 + 8))();
              }
            }
            break;
          }
        }
LAB_1495c0bf9:
        p_Var24 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                   *)((longlong)&p_Var24->_Left + 1);
        puVar30 = puVar30 + 4;
      } while ((longlong)p_Var24 < 3);
      uVar25 = local_78[0]._Ptr;
      lVar33 = local_a8;
      p_Var24 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                 *)0x0;
      p_Var13 = p_Var24;
      uVar26 = p_Var24;
      if ((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)local_78[0]._0_8_ !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        *(ulong *)(local_78[0]._Ptr + 0xc) = *(ulong *)(local_78[0]._Ptr + 0xc) + 1;
        UNLOCK();
        p_Var13 = p_Var27;
        uVar26 = local_78[0]._Ptr;
      }
      *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
        **)(&local_e0->_Color + local_a8 * 0x10) = p_Var13;
      plVar5 = *(longlong **)(&(local_e0->_Myval).first + local_a8 * 2);
      (&(local_e0->_Myval).first)[local_a8 * 2] = (EdgeKey<0>)uVar26;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        iVar21 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      p_Var27 = p_Var24;
      if (p_Var16 !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        puVar9 = (undefined1 *)((longlong)&p_Var16->_Parent + 4);
        *(int *)puVar9 = *(int *)puVar9 + 1;
        UNLOCK();
        p_Var24 = p_Var15;
        p_Var27 = p_Var16;
      }
      (&local_e0[1]._Right)[lVar33 * 2] = p_Var24;
      plVar5 = *(longlong **)(&local_e0[1]._Color + lVar33 * 0x10);
      *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
        **)(&local_e0[1]._Color + lVar33 * 0x10) = p_Var27;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        iVar21 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      lVar33 = local_c8;
      if (p_Var16 !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        pp_Var1 = &p_Var16->_Parent;
        iVar21 = *(int *)pp_Var1;
        *(int *)pp_Var1 = *(int *)pp_Var1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)p_Var16->_Left)(p_Var16);
          LOCK();
          puVar9 = (undefined1 *)((longlong)&p_Var16->_Parent + 4);
          iVar21 = *(int *)puVar9;
          *(int *)puVar9 = *(int *)puVar9 + -1;
          UNLOCK();
          lVar33 = local_c8;
          if (iVar21 == 1) {
            (**(code **)((longlong)p_Var16->_Left + 8))(p_Var16);
            lVar33 = local_c8;
          }
        }
      }
    }
    else {
LAB_1495c0d79:
      psVar14 = (*local_c0->mECreator)
                          ((shared_ptr<gte::ETManifoldMesh::Edge> *)&local_98,
                           *(ulong *)((longlong)&local_e0->_Parent + local_a8 * 4),
                           *(ulong *)((longlong)&local_e0->_Parent + local_c8 * 4));
      uVar26 = local_98._8_8_;
      p_Var27 = *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                  **)psVar14;
      uVar25 = *(undefined8 *)&psVar14->field_0x8;
      *(undefined8 *)psVar14 = 0;
      *(undefined8 *)&psVar14->field_0x8 = 0;
      if ((longlong *)local_98._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar5 = (longlong *)(local_98._8_8_ + 8);
        iVar21 = *(int *)plVar5;
        *(int *)plVar5 = *(int *)plVar5 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (*(code *)**(undefined8 **)local_98._8_8_)(local_98._8_8_);
          LOCK();
          piVar18 = (int *)(uVar26 + 0xc);
          iVar21 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*(longlong *)uVar26 + 8))(uVar26);
          }
        }
      }
      local_78[0]._8_8_ = local_78[0]._8_8_ & 0xffffffff00000000;
      p_Var13 = local_b0->_Myhead;
      p_Var15 = p_Var13->_Parent;
      local_78[0]._Ptr = p_Var15;
      cVar2 = p_Var15->_Isnil;
      p_Var16 = p_Var13;
      uVar26 = local_78[0]._8_8_;
      while (cVar2 == '\0') {
        local_78[0]._Ptr = p_Var15;
        iVar21 = 1;
        piVar18 = (int *)&(p_Var15->_Myval).first.field_0x4;
        do {
          iVar22 = *(int *)((longlong)piVar18 +
                           (longlong)local_f8 + (0x10 - (longlong)&p_Var15->_Myval));
          local_78[0]._12_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
          if (*piVar18 < iVar22) {
            local_78[0]._8_8_ = (ulonglong)(uint)local_78[0]._12_4_ << 0x20;
            p_Var15 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                       *)&p_Var15->_Right;
            goto LAB_1495c0e37;
          }
          if (iVar22 < *piVar18) break;
          piVar18 = piVar18 + -1;
          iVar21 = iVar21 + -1;
        } while (-1 < iVar21);
        local_78[0]._8_4_ = 1;
        p_Var16 = p_Var15;
LAB_1495c0e37:
        p_Var15 = p_Var15->_Left;
        uVar26 = local_78[0]._8_8_;
        cVar2 = p_Var15->_Isnil;
      }
      local_78[0]._8_8_ = uVar26;
      if (p_Var16->_Isnil == '\0') {
        iVar21 = 1;
        piVar18 = (int *)&(p_Var16->_Myval).first.field_0x4;
        do {
          iVar22 = *(int *)((longlong)piVar18 +
                           (longlong)local_f8 + (0x10 - (longlong)&p_Var16->_Myval));
          if (iVar22 < *piVar18) goto LAB_1495c0e76;
          if (*piVar18 < iVar22) break;
          piVar18 = piVar18 + -1;
          iVar21 = iVar21 + -1;
        } while (-1 < iVar21);
      }
      else {
LAB_1495c0e76:
        if (local_b0->_Mysize == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_tree_length_error();
        }
        p_Var15 = ::operator_new(0x38);
        EVar7._4_4_ = local_f8[5];
        EVar7._0_4_ = local_f8[4];
        (p_Var15->_Myval).first = EVar7;
        *(undefined8 *)&(p_Var15->_Myval).second = 0;
        *(undefined8 *)&(p_Var15->_Myval).second.field_0x8 = 0;
        p_Var15->_Left = p_Var13;
        p_Var15->_Parent = p_Var13;
        p_Var15->_Right = p_Var13;
        p_Var15->_Color = '\0';
        p_Var15->_Isnil = '\0';
        p_Var16 = std::
                  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>_>
                  ::_Insert_node(local_b0,(_Tree_id<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_*>
                                           *)local_78,p_Var15);
      }
      if ((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)uVar25 !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        *(ulong *)&((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                     *)uVar25)->_Parent =
             *(ulong *)&((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                          *)uVar25)->_Parent + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)((_Ref_count_base *)&(p_Var16->_Myval).second.field_0x8)->_padding_;
      *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
        **)&(p_Var16->_Myval).second.field_0x0 = p_Var27;
      ((_Ref_count_base *)&(p_Var16->_Myval).second.field_0x8)->_padding_ = uVar25;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar31 = plVar5 + 1;
        lVar10 = *plVar31;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar18 = (int *)((longlong)plVar5 + 0xc);
          iVar21 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      p_Var13 = p_Var24;
      p_Var15 = p_Var24;
      if (local_d8 !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        puVar30 = (ulong *)((longlong)&local_d8->_Parent + 4);
        *puVar30 = *puVar30 + 1;
        UNLOCK();
        p_Var13 = local_d8;
        p_Var15 = local_e0;
      }
      plVar5 = *(longlong **)&p_Var27->_Color;
      ((_Ref_count_base *)&p_Var27->_Right)->_padding_ = (longlong)p_Var15;
      *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
        **)&p_Var27->_Color = p_Var13;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        iVar21 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      p_Var13 = p_Var24;
      if ((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)uVar25 !=
          (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
           *)0x0) {
        LOCK();
        puVar30 = (ulong *)((longlong)
                            &((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                               *)uVar25)->_Parent + 4);
        *puVar30 = *puVar30 + 1;
        UNLOCK();
        p_Var24 = p_Var27;
        p_Var13 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                   *)uVar25;
      }
      *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
        **)(&local_e0->_Color + lVar12 * 0x10) = p_Var24;
      plVar5 = *(longlong **)(&(local_e0->_Myval).first + lVar12 * 2);
      (&(local_e0->_Myval).first)[lVar12 * 2] = (EdgeKey<0>)p_Var13;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        iVar21 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    if ((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
         *)uVar25 !=
        (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
         *)0x0) {
      LOCK();
      pp_Var1 = &((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                   *)uVar25)->_Parent;
      uVar3 = *(ulong *)pp_Var1;
      *(ulong *)pp_Var1 = *(ulong *)pp_Var1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        (**(code **)((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                      *)uVar25)->_Left)(uVar25);
        LOCK();
        puVar30 = (ulong *)((longlong)
                            &((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                               *)uVar25)->_Parent + 4);
        uVar3 = *puVar30;
        *puVar30 = *puVar30 - 1;
        UNLOCK();
        if (uVar3 == 1) {
          (**(code **)((longlong)
                       ((_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
                         *)uVar25)->_Left + 8))(uVar25);
        }
      }
    }
    pEVar11 = local_c0;
    local_d0 = local_d0 + 1;
    local_a8 = lVar33;
    local_c8 = lVar33 + 1;
  } while (local_d0 < 3);
  iVar21 = 2;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  p_Var6 = *(_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
             **)&local_c0->mTMap;
  p_Var19 = p_Var6->_Parent;
  local_98._Ptr = (char *)p_Var19;
  cVar2 = p_Var19->_Isnil;
  p_Var20 = p_Var6;
  uVar25 = local_98._8_8_;
  while (cVar2 == '\0') {
    local_98._Ptr = (char *)p_Var19;
    iVar22 = 2;
    piVar18 = local_f8 + 2;
    do {
      iVar4 = *(int *)((longlong)piVar18 + (longlong)p_Var19 + (0x28 - (longlong)(local_f8 + 2)));
      local_98._12_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
      if (iVar4 < *piVar18) {
        local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
        p_Var19 = (_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>
                   *)&p_Var19->_Right;
        goto LAB_1495c125f;
      }
      if (*piVar18 < iVar4) break;
      piVar18 = piVar18 + -1;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
    local_98._8_4_ = 1;
    p_Var20 = p_Var19;
LAB_1495c125f:
    p_Var19 = p_Var19->_Left;
    uVar25 = local_98._8_8_;
    cVar2 = p_Var19->_Isnil;
  }
  local_98._8_8_ = uVar25;
  if (p_Var20->_Isnil == '\0') {
    piVar18 = (int *)&(p_Var20->_Myval).first.field_0x8;
    do {
      iVar22 = *(int *)((longlong)piVar18 + ((longlong)local_f8 - (longlong)&p_Var20->_Myval));
      if (iVar22 < *piVar18) goto LAB_1495c1295;
      if (*piVar18 < iVar22) break;
      piVar18 = piVar18 + -1;
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
  }
  else {
LAB_1495c1295:
    if (*(longlong *)&(local_c0->mTMap).field_0x8 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_tree_length_error();
    }
    p_Var19 = ::operator_new(0x40);
    *(ulonglong *)&(p_Var19->_Myval).first = CONCAT44(local_f8[1],local_f8[0]);
    *(int *)&(p_Var19->_Myval).first.field_0x8 = local_f8[2];
    *(undefined8 *)&(p_Var19->_Myval).second = 0;
    *(undefined8 *)&(p_Var19->_Myval).second.field_0x8 = 0;
    p_Var19->_Left = p_Var6;
    p_Var19->_Parent = p_Var6;
    p_Var19->_Right = p_Var6;
    p_Var19->_Color = '\0';
    p_Var19->_Isnil = '\0';
    p_Var20 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
              ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>_>
                              *)&pEVar11->mTMap,
                             (_Tree_id<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_*>
                              *)&local_98,p_Var19);
  }
  if (local_d8 !=
      (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
       *)0x0) {
    LOCK();
    *(ulong *)&local_d8->_Parent = *(ulong *)&local_d8->_Parent + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)&(p_Var20->_Myval).second.field_0x8;
  *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
    **)&(p_Var20->_Myval).second = local_e0;
  *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
    **)&(p_Var20->_Myval).second.field_0x8 = local_d8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar31 = plVar5 + 1;
    lVar33 = *plVar31;
    *(int *)plVar31 = (int)*plVar31 + -1;
    UNLOCK();
    if ((int)lVar33 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar18 = (int *)((longlong)plVar5 + 0xc);
      iVar21 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
    **)local_b8 = local_e0;
  *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>
    **)&local_b8->field_0x8 = local_d8;
  return local_b8;
}

// IsClosed @ 1495c4080

bool __thiscall gte::ETManifoldMesh::IsClosed(ETManifoldMesh *this)

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
  plVar10 = (longlong *)**(longlong **)&this->mEMap;
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    plVar12 = (longlong *)((ulonglong)uStackX_c << 0x20);
    do {
      if (plVar10[6] != 0) {
        LOCK();
        piVar1 = (int *)(plVar10[6] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar5 = plVar10[5];
      plVar6 = (longlong *)plVar10[6];
      plVar11 = (longlong *)0x0;
      lVar7 = *(longlong *)(lVar5 + 0x18);
      bVar8 = bVar13;
      if (lVar7 == 0) {
LAB_1495c4102:
        bVar13 = bVar8;
        bVar8 = true;
      }
      else {
        iVar3 = *(int *)(lVar7 + 8);
        do {
          if (iVar3 == 0) goto LAB_1495c4102;
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
        plVar11 = *(longlong **)(lVar5 + 0x18);
        if (*(longlong *)(lVar5 + 0x10) == 0) goto LAB_1495c4102;
        lVar7 = *(longlong *)(lVar5 + 0x28);
        bVar13 = true;
        bVar8 = true;
        plVar12 = (longlong *)0x0;
        if (lVar7 == 0) goto LAB_1495c4102;
        iVar3 = *(int *)(lVar7 + 8);
        do {
          if (iVar3 == 0) goto LAB_1495c4102;
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
        plVar12 = *(longlong **)(lVar5 + 0x28);
        if (*(longlong *)(lVar5 + 0x20) == 0) goto LAB_1495c4102;
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

// IsOriented @ 1495c4870

bool __thiscall gte::ETManifoldMesh::IsOriented(ETManifoldMesh *this)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  bool bVar17;
  undefined2 local_res8;
  uint local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  
  uVar13 = 0;
  local_res10 = 0;
  plVar8 = (longlong *)**(longlong **)&this->mEMap;
  cVar3 = *(char *)((longlong)plVar8 + 0x19);
  do {
    if (cVar3 != '\0') {
      return true;
    }
    if (plVar8[6] != 0) {
      LOCK();
      piVar16 = (int *)(plVar8[6] + 8);
      *piVar16 = *piVar16 + 1;
      UNLOCK();
    }
    lVar14 = plVar8[5];
    lVar7 = *(longlong *)(lVar14 + 0x18);
    plVar15 = (longlong *)(lVar14 + 0x10);
    plVar4 = (longlong *)plVar8[6];
    plVar10 = (longlong *)0x0;
    if (lVar7 == 0) {
LAB_1495c48ea:
      bVar17 = false;
    }
    else {
      iVar6 = *(int *)(lVar7 + 8);
      do {
        if (iVar6 == 0) goto LAB_1495c48ea;
        LOCK();
        iVar11 = *(int *)(lVar7 + 8);
        bVar17 = iVar6 == iVar11;
        if (bVar17) {
          *(int *)(lVar7 + 8) = iVar6 + 1;
          iVar11 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar11;
      } while (!bVar17);
      plVar10 = *(longlong **)(lVar14 + 0x18);
      if (*plVar15 == 0) goto LAB_1495c48ea;
      lVar7 = *(longlong *)(lVar14 + 0x28);
      uVar13 = uVar13 | 2;
      local_res18 = (longlong *)0x0;
      if (lVar7 == 0) goto LAB_1495c48ea;
      iVar6 = *(int *)(lVar7 + 8);
      do {
        if (iVar6 == 0) goto LAB_1495c48ea;
        LOCK();
        iVar11 = *(int *)(lVar7 + 8);
        bVar17 = iVar6 == iVar11;
        if (bVar17) {
          *(int *)(lVar7 + 8) = iVar6 + 1;
          iVar11 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar11;
      } while (!bVar17);
      local_res18 = *(longlong **)(lVar14 + 0x28);
      if (*(longlong *)(lVar14 + 0x20) == 0) goto LAB_1495c48ea;
      bVar17 = true;
    }
    plVar2 = local_res18;
    if (((uVar13 & 2) != 0) && (uVar13 = uVar13 & 0xfffffffd, local_res18 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_res18 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_res18)();
        LOCK();
        piVar16 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
    uVar13 = uVar13 & 0xfffffffe;
    local_res10 = uVar13;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar10)();
        LOCK();
        piVar16 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    if (bVar17) {
      local_res8 = 0;
      puVar9 = &local_res8;
      local_res20 = 0xffffffffffffffff;
      piVar16 = (int *)&local_res20;
      lVar14 = 2;
      do {
        lVar7 = plVar15[1];
        lVar12 = 0;
        plVar10 = (longlong *)0x0;
        if (lVar7 != 0) {
          iVar6 = *(int *)(lVar7 + 8);
          do {
            if (iVar6 == 0) goto LAB_1495c4a41;
            LOCK();
            iVar11 = *(int *)(lVar7 + 8);
            bVar17 = iVar6 == iVar11;
            if (bVar17) {
              *(int *)(lVar7 + 8) = iVar6 + 1;
              iVar11 = iVar6;
            }
            UNLOCK();
            iVar6 = iVar11;
          } while (!bVar17);
          lVar12 = *plVar15;
          plVar10 = (longlong *)plVar15[1];
        }
LAB_1495c4a41:
        piVar5 = (int *)(lVar12 + 8);
        lVar7 = 0;
        iVar6 = 0;
        do {
          iVar11 = iVar6 + 1;
          if (*piVar5 == (int)plVar8[4]) {
            iVar11 = *(int *)(lVar12 + 8 +
                             (longlong)
                             (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                                       (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            if (iVar11 == *(int *)((longlong)plVar8 + 0x24)) {
              iVar6 = iVar6 + 2;
              *(undefined1 *)puVar9 = 1;
              iVar11 = *(int *)(lVar12 + 8 +
                               (longlong)
                               (iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                                        (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) &
                                              0xffffffffU) >> 0x1f)) * -3) * 4);
            }
            else {
              *(undefined1 *)puVar9 = 0;
            }
            *piVar16 = iVar11;
            break;
          }
          lVar7 = lVar7 + 1;
          piVar5 = piVar5 + 1;
          iVar6 = iVar11;
        } while (lVar7 < 3);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar10)();
            LOCK();
            piVar5 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar15 = plVar15 + 2;
        puVar9 = (undefined2 *)((longlong)puVar9 + 1);
        piVar16 = piVar16 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if ((char)local_res8 == local_res8._1_1_) {
LAB_1495c4bcc:
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar4 + 1;
          lVar14 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar16 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
        }
        return false;
      }
      uVar13 = local_res10;
      if ((int)local_res20 == local_res20._4_4_) goto LAB_1495c4bcc;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar4 + 1;
      lVar14 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar16 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    plVar15 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar15 + 0x19);
      plVar8 = plVar15;
      plVar15 = (longlong *)*plVar15;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar15 + 0x19);
        plVar8 = plVar15;
        plVar15 = (longlong *)*plVar15;
      }
    }
    else {
      cVar3 = *(char *)(plVar8[1] + 0x19);
      plVar4 = (longlong *)plVar8[1];
      plVar15 = plVar8;
      while ((plVar8 = plVar4, cVar3 == '\0' && (plVar15 == (longlong *)plVar8[2]))) {
        cVar3 = *(char *)(plVar8[1] + 0x19);
        plVar4 = (longlong *)plVar8[1];
        plVar15 = plVar8;
      }
    }
    cVar3 = *(char *)((longlong)plVar8 + 0x19);
  } while( true );
}

// Remove @ 1495c64b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
gte::ETManifoldMesh::Remove(ETManifoldMesh *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ETManifoldMesh *pEVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 uVar8;
  pair<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_*,std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_*>
  *ppVar9;
  pair<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_*,std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_*>
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
  undefined1 auStackY_f8 [32];
  TriangleKey<1> local_b8;
  EdgeKey<0> local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  ETManifoldMesh *local_88;
  longlong *local_80;
  longlong *local_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_88 = this;
  bVar14 = false;
  if (param_1 < param_2) {
    if (param_1 < param_3) {
      local_b8._8_4_ = param_3;
      local_b8._0_4_ = param_1;
      local_b8._4_4_ = param_2;
      goto LAB_1495c650d;
    }
  }
  else if (param_2 < param_3) {
    local_b8._8_4_ = param_1;
    local_b8._0_4_ = param_2;
    local_b8._4_4_ = param_3;
    goto LAB_1495c650d;
  }
  local_b8._8_4_ = param_2;
  local_b8._0_4_ = param_3;
  local_b8._4_4_ = param_1;
LAB_1495c650d:
  plVar16 = *(longlong **)&this->mTMap;
  iVar19 = 2;
  plVar17 = (longlong *)plVar16[1];
  cVar1 = *(char *)((longlong)plVar17 + 0x19);
  plVar15 = plVar16;
  while (cVar1 == '\0') {
    iVar12 = 2;
    piVar7 = (int *)&local_b8.field_0x8;
    do {
      iVar2 = *(int *)((longlong)piVar7 + (longlong)plVar17 + (0x28 - (longlong)&local_b8.field_0x8)
                      );
      if (iVar2 < *piVar7) {
        bVar22 = true;
        goto LAB_1495c6566;
      }
      if (*piVar7 < iVar2) {
        bVar22 = false;
        plVar15 = plVar17;
        goto LAB_1495c6566;
      }
      piVar7 = piVar7 + -1;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    bVar22 = false;
    plVar15 = plVar17;
LAB_1495c6566:
    plVar6 = plVar17 + 2;
    if (!bVar22) {
      plVar6 = plVar17;
    }
    plVar17 = (longlong *)*plVar6;
    cVar1 = *(char *)((longlong)plVar17 + 0x19);
  }
  if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
    piVar7 = (int *)&local_b8.field_0x8;
    do {
      iVar12 = *(int *)((longlong)piVar7 +
                       (longlong)plVar15 + (0x28 - (longlong)&local_b8.field_0x8));
      if (*piVar7 < iVar12) {
        return false;
      }
      if (iVar12 < *piVar7) break;
      piVar7 = piVar7 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
    if (plVar15 != plVar16) {
      if (plVar15[7] != 0) {
        LOCK();
        piVar7 = (int *)(plVar15[7] + 8);
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      local_78 = (longlong *)plVar15[7];
      lVar3 = plVar15[6];
      local_a0 = local_80;
      local_90 = 0;
      do {
        lVar20 = 0;
        lVar21 = local_90 * 0x10 + lVar3;
        local_98 = (longlong *)0x0;
        lVar4 = *(longlong *)(lVar21 + 0x20);
        if (lVar4 != 0) {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c664f;
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
          local_98 = *(longlong **)(lVar21 + 0x20);
          lVar20 = *(longlong *)(lVar21 + 0x18);
        }
LAB_1495c664f:
        plVar16 = local_98;
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
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETManifoldMesh.cpp"
                                   ,"gte::ETManifoldMesh::Remove",0xa1,
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
LAB_1495c6c23:
            ::operator_delete((void *)uVar8,uVar13);
          }
LAB_1495c6c28:
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar16 + 1;
            lVar3 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
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
          bVar14 = false;
          goto LAB_1495c6c5c;
        }
        lVar4 = *(longlong *)(lVar20 + 0x18);
        lVar18 = 0;
        if (lVar4 != 0) {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c66c1;
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
          plVar17 = *(longlong **)(lVar20 + 0x18);
          lVar18 = *(longlong *)(lVar20 + 0x10);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar17 + 1;
            lVar4 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
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
LAB_1495c66c1:
        lVar4 = *(longlong *)(lVar20 + 0x28);
        if (lVar18 == lVar3) {
          uVar8 = 0;
          lVar18 = 0;
          if (lVar4 != 0) {
            uVar8 = *(undefined8 *)(lVar20 + 0x20);
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
            lVar18 = lVar4;
          }
          plVar16 = *(longlong **)(lVar20 + 0x18);
          *(undefined8 *)(lVar20 + 0x10) = uVar8;
          *(longlong *)(lVar20 + 0x18) = lVar18;
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
        }
        else {
          lVar18 = 0;
          if (lVar4 != 0) {
            iVar19 = *(int *)(lVar4 + 8);
            do {
              if (iVar19 == 0) goto LAB_1495c6765;
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
            plVar17 = *(longlong **)(lVar20 + 0x28);
            lVar18 = *(longlong *)(lVar20 + 0x20);
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar17 + 1;
              lVar4 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
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
LAB_1495c6765:
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
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETManifoldMesh.cpp"
                                     ,"gte::ETManifoldMesh::Remove",0xb1,
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
              goto LAB_1495c6c23;
            }
            goto LAB_1495c6c28;
          }
        }
        plVar16 = *(longlong **)(lVar20 + 0x28);
        *(undefined8 *)(lVar20 + 0x28) = 0;
        *(undefined8 *)(lVar20 + 0x20) = 0;
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
        plVar16 = (longlong *)0x0;
        lVar4 = *(longlong *)(lVar20 + 0x18);
        if (lVar4 == 0) {
LAB_1495c67d3:
          lVar4 = *(longlong *)(lVar20 + 0x28);
          bVar14 = true;
          local_a0 = (longlong *)0x0;
          if (lVar4 != 0) {
            iVar19 = *(int *)(lVar4 + 8);
            do {
              if (iVar19 == 0) goto LAB_1495c6802;
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
            local_a0 = *(longlong **)(lVar20 + 0x28);
            if (*(longlong *)(lVar20 + 0x20) != 0) {
              bVar22 = false;
              goto LAB_1495c6805;
            }
          }
LAB_1495c6802:
          bVar22 = true;
        }
        else {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c67d3;
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
          plVar16 = *(longlong **)(lVar20 + 0x18);
          if (*(longlong *)(lVar20 + 0x10) == 0) goto LAB_1495c67d3;
          bVar22 = false;
        }
LAB_1495c6805:
        plVar17 = local_a0;
        if ((bVar14) && (bVar14 = false, local_a0 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_a0 + 1;
          lVar4 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_a0)(local_a0);
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
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar16 + 1;
          lVar4 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
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
        pEVar5 = local_88;
        if (bVar22) {
          iVar19 = *(int *)(lVar20 + 0xc);
          local_a8._4_4_ = *(int *)(lVar20 + 8);
          local_a8._0_4_ = iVar19;
          if ((int)local_a8._4_4_ < iVar19) {
            local_a8._0_4_ = local_a8._4_4_;
            local_a8._4_4_ = iVar19;
          }
          ppVar9 = std::
                   _Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETManifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>,0>_>
                   ::_Eqrange<gte::EdgeKey<0>_>
                             ((_Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETManifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>,0>_>
                               *)&local_88->mEMap,
                              (pair<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_*,std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>,void_*>_*>
                               *)&local_70,&local_a8);
          std::
          _Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETManifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>,0>_>
          ::_Erase_unchecked((_Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETManifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETManifoldMesh::Edge>_>_>,0>_>
                              *)&pEVar5->mEMap,ppVar9->first,ppVar9->second);
        }
        lVar4 = *(longlong *)(lVar21 + 0x50);
        if (lVar4 != 0) {
          iVar19 = *(int *)(lVar4 + 8);
          do {
            if (iVar19 == 0) goto LAB_1495c6a14;
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
          lVar4 = *(longlong *)(lVar21 + 0x48);
          plVar16 = *(longlong **)(lVar21 + 0x50);
          if (lVar4 != 0) {
            plVar17 = (longlong *)(lVar4 + 0x48);
            lVar20 = 0;
            do {
              lVar21 = plVar17[1];
              lVar18 = 0;
              if (lVar21 != 0) {
                iVar19 = *(int *)(lVar21 + 8);
                do {
                  if (iVar19 == 0) goto LAB_1495c6998;
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
                plVar15 = (longlong *)plVar17[1];
                lVar18 = *plVar17;
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
LAB_1495c6998:
              if (lVar18 == lVar3) {
                *(undefined8 *)(lVar4 + 0x48 + lVar20 * 0x10) = 0;
                plVar17 = *(longlong **)(lVar4 + 0x50 + lVar20 * 0x10);
                *(undefined8 *)(lVar4 + 0x50 + lVar20 * 0x10) = 0;
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
                break;
              }
              lVar20 = lVar20 + 1;
              plVar17 = plVar17 + 2;
            } while (lVar20 < 3);
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar16 + 1;
            lVar4 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
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
LAB_1495c6a14:
        plVar16 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_98 + 1;
          lVar4 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_98)(local_98);
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
        pEVar5 = local_88;
        local_90 = local_90 + 1;
      } while (local_90 < 3);
      ppVar10 = std::
                _Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>,0>_>
                ::_Eqrange<gte::TriangleKey<1>_>
                          ((_Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>,0>_>
                            *)&local_88->mTMap,
                           (pair<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_*,std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>,void_*>_*>
                            *)&local_70,&local_b8);
      std::
      _Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>,0>_>
      ::_Erase_unchecked((_Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>,0>_>
                          *)&pEVar5->mTMap,ppVar10->first,ppVar10->second);
      bVar14 = true;
LAB_1495c6c5c:
      plVar16 = local_78;
      if (local_78 == (longlong *)0x0) {
        return bVar14;
      }
      LOCK();
      plVar17 = local_78 + 1;
      lVar3 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar7 = (int *)((longlong)plVar16 + 0xc);
        iVar19 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
          return bVar14;
        }
        return bVar14;
      }
      return bVar14;
    }
  }
  return false;
}

