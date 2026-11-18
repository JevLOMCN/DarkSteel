// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 21

// ETNonmanifoldMesh @ 1495a62d0

ETNonmanifoldMesh * __thiscall
gte::ETNonmanifoldMesh::ETNonmanifoldMesh(ETNonmanifoldMesh *this,ETNonmanifoldMesh *param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ETNonmanifoldMesh_gte__6B_;
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

// ETNonmanifoldMesh @ 1495a6370

ETNonmanifoldMesh * __thiscall
gte::ETNonmanifoldMesh::ETNonmanifoldMesh
          (ETNonmanifoldMesh *this,
          _func___cdecl_shared_ptr<gte::ETNonmanifoldMesh::Edge>_int_int *param_1,
          _func___cdecl_shared_ptr<gte::ETNonmanifoldMesh::Triangle>_int_int_int *param_2)

{
  code *pcVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ETNonmanifoldMesh_gte__6B_;
  pcVar1 = CreateEdge;
  if (param_1 != (_func___cdecl_shared_ptr<gte::ETNonmanifoldMesh::Edge>_int_int *)0x0) {
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
  if (param_2 != (_func___cdecl_shared_ptr<gte::ETNonmanifoldMesh::Triangle>_int_int_int *)0x0) {
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
  return this;
}

// Edge @ 1495a6450

Edge * __thiscall gte::ETNonmanifoldMesh::Edge::Edge(Edge *this,int param_1,int param_2)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7Edge_ETNonmanifoldMesh_gte__6B_;
  *(undefined8 *)&this->T = 0;
  *(undefined8 *)&(this->T).field_0x8 = 0;
  pvVar1 = ::operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)&this->T = pvVar1;
  this->V[0] = param_1;
  this->V[1] = param_2;
  return this;
}

// Triangle @ 1495a7be0

Triangle * __thiscall
gte::ETNonmanifoldMesh::Triangle::Triangle(Triangle *this,int param_1,int param_2,int param_3)

{
  this->_padding_ = (longlong)&___7Triangle_ETNonmanifoldMesh_gte__6B_;
  *(undefined8 *)this->E = 0;
  *(undefined8 *)&this->E[0].field_0x8 = 0;
  *(undefined8 *)(this->E + 1) = 0;
  *(undefined8 *)&this->E[1].field_0x8 = 0;
  *(undefined8 *)(this->E + 2) = 0;
  *(undefined8 *)&this->E[2].field_0x8 = 0;
  this->V[0] = param_1;
  this->V[1] = param_2;
  this->V[2] = param_3;
  return this;
}

// ~ETNonmanifoldMesh @ 1495aa1e0

void __thiscall gte::ETNonmanifoldMesh::~ETNonmanifoldMesh(ETNonmanifoldMesh *this)

{
  this->_padding_ = (longlong)&___7ETNonmanifoldMesh_gte__6B_;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
              *)&this->mTMap,
             (allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_>
              *)&this->mTMap,
             *(_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
               **)(*(longlong *)&this->mTMap + 8));
  ::operator_delete(*(void **)&this->mTMap,0x40);
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
              *)&this->mEMap,
             (allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_>
              *)&this->mEMap,
             *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
               **)(*(longlong *)&this->mEMap + 8));
  ::operator_delete(*(void **)&this->mEMap,0x38);
  return;
}

// ~Edge @ 1495aa2c0

void __thiscall gte::ETNonmanifoldMesh::Edge::~Edge(Edge *this)

{
  set<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
  *this_00;
  
  this_00 = &this->T;
  this->_padding_ = (longlong)&___7Edge_ETNonmanifoldMesh_gte__6B_;
  std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>::
  _Erase_tree<std::allocator<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
              *)this_00,
             (allocator<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_> *)
             this_00,*(_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> **)
                      (*(longlong *)&this_00->field_0x0 + 8));
  ::operator_delete(*(void **)&this_00->field_0x0,0x30);
  return;
}

// ~Triangle @ 1495aab50

void __thiscall gte::ETNonmanifoldMesh::Triangle::~Triangle(Triangle *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7Triangle_ETNonmanifoldMesh_gte__6B_;
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

// operator= @ 1495ab8b0

ETNonmanifoldMesh * __thiscall
gte::ETNonmanifoldMesh::operator=(ETNonmanifoldMesh *this,ETNonmanifoldMesh *param_1)

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

// operator< @ 1495ad330

bool __thiscall gte::ETNonmanifoldMesh::Triangle::operator<(Triangle *this,Triangle *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_20 [4];
  int local_10 [4];
  
  iVar3 = this->V[1];
  local_20[0] = this->V[0];
  iVar1 = this->V[2];
  if (local_20[0] < iVar3) {
    if (local_20[0] < iVar1) {
      local_20[0] = iVar1;
    }
    else {
LAB_1495ad36c:
      local_20[0] = iVar3;
    }
  }
  else {
    if (iVar1 <= iVar3) goto LAB_1495ad36c;
  }
  iVar3 = param_1->V[1];
  iVar1 = param_1->V[2];
  local_10[0] = param_1->V[0];
  if (local_10[0] < iVar3) {
    if (local_10[0] < iVar1) {
      local_10[0] = iVar1;
      goto LAB_1495ad3b6;
    }
  }
  else if (iVar3 < iVar1) {
    goto LAB_1495ad3b6;
  }
  local_10[0] = iVar3;
LAB_1495ad3b6:
  iVar3 = 2;
  lVar2 = 0;
  while( true ) {
    if (*(int *)((longlong)local_20 + lVar2) < *(int *)((longlong)local_10 + lVar2)) {
      return true;
    }
    if (*(int *)((longlong)local_10 + lVar2) < *(int *)((longlong)local_20 + lVar2)) break;
    lVar2 = lVar2 + -4;
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return false;
    }
  }
  return false;
}

// Clear @ 1495ba980

void __thiscall gte::ETNonmanifoldMesh::Clear(ETNonmanifoldMesh *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->mEMap;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
              *)&this->mEMap,
             (allocator<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_>
              *)&this->mEMap,
             *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
               **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)&(this->mEMap).field_0x8 = 0;
  lVar1 = *(longlong *)&this->mTMap;
  std::
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
              *)&this->mTMap,
             (allocator<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_>
              *)&this->mTMap,
             *(_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
               **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)&(this->mTMap).field_0x8 = 0;
  return;
}

// CreateEdge @ 1495bb640

shared_ptr<gte::ETNonmanifoldMesh::Edge> * __cdecl
gte::ETNonmanifoldMesh::CreateEdge
          (shared_ptr<gte::ETNonmanifoldMesh::Edge> *__return_storage_ptr__,int param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &___7___Ref_count_obj2_VEdge_ETNonmanifoldMesh_gte___std__6B_;
    Edge::Edge((Edge *)(puVar1 + 2),param_1,param_2);
  }
  *(undefined8 **)__return_storage_ptr__ = puVar1 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// CreateTriangle @ 1495bb920

shared_ptr<gte::ETNonmanifoldMesh::Triangle> * __cdecl
gte::ETNonmanifoldMesh::CreateTriangle
          (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *__return_storage_ptr__,int param_1,
          int param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &___7___Ref_count_obj2_VTriangle_ETNonmanifoldMesh_gte___std__6B_;
    puVar1[2] = &___7Triangle_ETNonmanifoldMesh_gte__6B_;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(int *)(puVar1 + 3) = param_1;
    *(int *)((longlong)puVar1 + 0x1c) = param_2;
    *(int *)(puVar1 + 4) = param_3;
  }
  *(undefined8 **)__return_storage_ptr__ = puVar1 + 2;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar1;
  return __return_storage_ptr__;
}

// DepthFirstSearch @ 1495bc1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
gte::ETNonmanifoldMesh::DepthFirstSearch
          (ETNonmanifoldMesh *this,shared_ptr<gte::ETNonmanifoldMesh::Triangle> *param_1,
          map<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,int,std::less<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,std::allocator<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
          *param_2,vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
                   *param_3)

{
  int *piVar1;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> **ppsVar2;
  int iVar3;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*> *p_Var4
  ;
  longlong *plVar5;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*> *p_Var6
  ;
  longlong lVar7;
  int iVar8;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*> *p_Var9
  ;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var10;
  Logger *pLVar11;
  undefined8 uVar12;
  ulong64 uVar13;
  char cVar14;
  longlong *plVar15;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStackY_108 [32];
  int local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *local_b8;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *local_b0;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *local_a8;
  vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
  *local_a0;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar18 = *(ulonglong *)&(this->mTMap).field_0x8;
  lVar20 = 0;
  local_a8 = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
  local_98._Ptr = (char *)0x0;
  local_98._8_8_ = 0;
  local_a0 = param_3;
  if (uVar18 == 0) {
    local_b0 = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
    local_b8 = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
  }
  else {
    if (0xfffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
      ::_Xlength();
    }
    local_b8 = std::_Allocate<16,std::_Default_allocate_traits>(uVar18 * 0x10);
    local_a8 = local_b8 + uVar18;
    local_b0 = local_b8;
    do {
      *(undefined8 *)local_b0 = 0;
      *(undefined8 *)&local_b0->field_0x8 = 0;
      local_b0 = local_b0 + 1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  psVar21 = local_b8;
  std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>::operator=(local_b8,param_1);
  local_c0 = 0;
  do {
    if (*(longlong *)&psVar21[lVar20].field_0x8 != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)&psVar21[lVar20].field_0x8 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_d0._0_8_ = *(undefined8 *)(psVar21 + lVar20);
    p_Var4 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
               **)param_2;
    local_d0._8_8_ = *(undefined8 *)&psVar21[lVar20].field_0x8;
    p_Var9 = p_Var4->_Parent;
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    cVar14 = p_Var9->_Isnil;
    p_Var10 = p_Var4;
    local_98._Ptr = (char *)p_Var9;
    while (p_Var6 = p_Var9, cVar14 == '\0') {
      uVar18 = *(ulonglong *)&(p_Var6->_Myval).first;
      local_98._12_4_ = (undefined4)((ulonglong)local_98._8_8_ >> 0x20);
      if (uVar18 == local_d0._0_8_) {
        cVar14 = '\0';
LAB_1495bc320:
        local_98._8_4_ = 1;
        p_Var10 = p_Var6;
      }
      else {
        cVar14 = -1;
        if ((ulonglong)local_d0._0_8_ <= uVar18) {
          cVar14 = '\x01';
          goto LAB_1495bc320;
        }
        local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      }
      p_Var9 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                *)&p_Var6->_Right;
      if (-1 < cVar14) {
        p_Var9 = p_Var6;
      }
      cVar14 = p_Var9->_Left->_Isnil;
      p_Var9 = p_Var9->_Left;
      local_98._Ptr = (char *)p_Var6;
    }
    if ((p_Var10->_Isnil != '\0') ||
       ((ulonglong)local_d0._0_8_ < *(ulonglong *)&(p_Var10->_Myval).first)) {
      if (*(longlong *)&param_2->field_0x8 == 0x492492492492492) goto LAB_1495bcb78;
      p_Var9 = ::operator_new(0x38);
      *(undefined8 *)&(p_Var9->_Myval).first = 0;
      *(undefined8 *)&(p_Var9->_Myval).first.field_0x8 = 0;
      if ((longlong *)local_d0._8_8_ != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0._8_8_ + 8) = (int)*(longlong *)(local_d0._8_8_ + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)&(p_Var9->_Myval).first = local_d0._0_8_;
      *(undefined8 *)&(p_Var9->_Myval).first.field_0x8 = local_d0._8_8_;
      (p_Var9->_Myval).second = 0;
      p_Var9->_Left = p_Var4;
      p_Var9->_Parent = p_Var4;
      p_Var9->_Right = p_Var4;
      p_Var9->_Color = '\0';
      p_Var9->_Isnil = '\0';
      local_78[0]._Ptr = local_98._Ptr;
      local_78[0]._8_8_ = local_98._8_8_;
      p_Var10 = std::
                _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                                *)param_2,
                               (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
                                *)local_78,p_Var9);
    }
    (p_Var10->_Myval).second = 1;
    local_d8 = 0;
    local_78[0]._Ptr = (char *)0x0;
    do {
      plVar15 = (longlong *)0x0;
      lVar20 = *(longlong *)(local_78[0]._Ptr + local_d0._0_8_ + 0x20);
      plVar22 = plVar15;
      if (lVar20 != 0) {
        iVar3 = *(int *)(lVar20 + 8);
        do {
          if (iVar3 == 0) goto LAB_1495bc432;
          LOCK();
          iVar8 = *(int *)(lVar20 + 8);
          bVar23 = iVar3 == iVar8;
          if (bVar23) {
            *(int *)(lVar20 + 8) = iVar3 + 1;
            iVar8 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar8;
        } while (!bVar23);
        plVar15 = *(longlong **)(local_78[0]._Ptr + local_d0._0_8_ + 0x18);
        plVar22 = *(longlong **)(local_78[0]._Ptr + local_d0._0_8_ + 0x20);
      }
LAB_1495bc432:
      if (plVar15 == (longlong *)0x0) {
        local_98._8_8_ = 0;
        local_98._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
        uVar12 = s_Unexpected_condition_._8_8_;
        local_88 = ___xmm_000000000000001f0000000000000015;
        uStack_80 = _UNK_151e59228;
        ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
          *)local_98._Ptr)->_Left =
             (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              *)s_Unexpected_condition_._0_8_;
        ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
          *)local_98._Ptr)->_Parent =
             (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              *)uVar12;
        *(undefined4 *)
         &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
            *)local_98._Ptr)->_Right = s_Unexpected_condition_._16_4_;
        *(char *)((longlong)
                  &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                     *)local_98._Ptr)->_Right + 4) = s_Unexpected_condition_[0x14];
        *(undefined1 *)
         ((longlong)
          &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
             *)local_98._Ptr)->_Right + 5) = 0;
        pLVar11 = Logger::Logger((Logger *)local_78,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETNonmanifoldMesh.cpp"
                                 ,"gte::ETNonmanifoldMesh::DepthFirstSearch",0xf5,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_98);
        Logger::Error(pLVar11);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78);
        if (0xf < uStack_80) {
          uVar13 = uStack_80 + 1;
          uVar12 = local_98._Ptr;
          if (0xfff < uVar13) {
            uVar12 = *(undefined8 *)(local_98._Ptr + -8);
            uVar13 = uStack_80 + 0x28;
            if ((char *)0x1f < local_98._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar12,uVar13);
        }
LAB_1495bca7e:
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar22 + 1;
          lVar20 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22);
            }
          }
        }
        uVar12 = local_d0._8_8_;
        if ((longlong *)local_d0._8_8_ != (longlong *)0x0) {
          LOCK();
          plVar15 = (longlong *)(local_d0._8_8_ + 8);
          lVar20 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (*(code *)**(undefined8 **)local_d0._8_8_)(local_d0._8_8_);
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
        goto LAB_1495bcae3;
      }
      plVar15 = *(longlong **)plVar15[2];
      cVar14 = *(char *)((longlong)plVar15 + 0x19);
      uVar12 = local_78[0]._Ptr;
      while (local_78[0]._0_8_ = uVar12, cVar14 == '\0') {
        plVar17 = (longlong *)0x0;
        lVar20 = plVar15[5];
        plVar19 = plVar17;
        if (lVar20 != 0) {
          iVar3 = *(int *)(lVar20 + 8);
          do {
            if (iVar3 == 0) goto LAB_1495bc488;
            LOCK();
            iVar8 = *(int *)(lVar20 + 8);
            bVar23 = iVar3 == iVar8;
            if (bVar23) {
              *(int *)(lVar20 + 8) = iVar3 + 1;
              iVar8 = iVar3;
            }
            UNLOCK();
            iVar3 = iVar8;
          } while (!bVar23);
          plVar17 = (longlong *)plVar15[4];
          plVar19 = (longlong *)plVar15[5];
        }
LAB_1495bc488:
        if (plVar17 == (longlong *)0x0) {
          local_98._8_8_ = 0;
          local_98._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
          uVar12 = s_Unexpected_condition_._8_8_;
          local_88 = ___xmm_000000000000001f0000000000000015;
          uStack_80 = _UNK_151e59228;
          ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
            *)local_98._Ptr)->_Left =
               (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                *)s_Unexpected_condition_._0_8_;
          ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
            *)local_98._Ptr)->_Parent =
               (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                *)uVar12;
          *(undefined4 *)
           &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              *)local_98._Ptr)->_Right = s_Unexpected_condition_._16_4_;
          *(char *)((longlong)
                    &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                       *)local_98._Ptr)->_Right + 4) = s_Unexpected_condition_[0x14];
          *(undefined1 *)
           ((longlong)
            &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
               *)local_98._Ptr)->_Right + 5) = 0;
          pLVar11 = Logger::Logger((Logger *)local_78,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETNonmanifoldMesh.cpp"
                                   ,"gte::ETNonmanifoldMesh::DepthFirstSearch",0xff,
                                   (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_98);
          Logger::Error(pLVar11);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78);
          if (0xf < uStack_80) {
            uVar13 = uStack_80 + 1;
            uVar12 = local_98._Ptr;
            if (0xfff < uVar13) {
              uVar12 = *(undefined8 *)(local_98._Ptr + -8);
              uVar13 = uStack_80 + 0x28;
              if ((char *)0x1f < local_98._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar12,uVar13);
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar19 + 1;
            lVar20 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19);
              }
            }
          }
          goto LAB_1495bca7e;
        }
        p_Var4 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                   **)param_2;
        local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
        p_Var9 = p_Var4->_Parent;
        cVar14 = p_Var9->_Isnil;
        p_Var10 = p_Var4;
        local_98._Ptr = (char *)p_Var9;
        while (p_Var6 = p_Var9, cVar14 == '\0') {
          plVar5 = *(longlong **)&(p_Var6->_Myval).first;
          local_98._12_4_ = (undefined4)((ulonglong)local_98._8_8_ >> 0x20);
          if (plVar5 == plVar17) {
            cVar14 = '\0';
LAB_1495bc4c0:
            local_98._8_4_ = 1;
            p_Var10 = p_Var6;
          }
          else {
            cVar14 = -1;
            if (plVar17 <= plVar5) {
              cVar14 = '\x01';
              goto LAB_1495bc4c0;
            }
            local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
          }
          p_Var9 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                    *)&p_Var6->_Right;
          if (-1 < cVar14) {
            p_Var9 = p_Var6;
          }
          cVar14 = p_Var9->_Left->_Isnil;
          p_Var9 = p_Var9->_Left;
          local_98._Ptr = (char *)p_Var6;
        }
        if ((p_Var10->_Isnil != '\0') || (plVar17 < *(longlong **)&(p_Var10->_Myval).first)) {
          if (*(longlong *)&param_2->field_0x8 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Throw_tree_length_error();
          }
          p_Var9 = ::operator_new(0x38);
          *(undefined8 *)&(p_Var9->_Myval).first = 0;
          *(undefined8 *)&(p_Var9->_Myval).first.field_0x8 = 0;
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          *(longlong **)&(p_Var9->_Myval).first = plVar17;
          *(longlong **)&(p_Var9->_Myval).first.field_0x8 = plVar19;
          (p_Var9->_Myval).second = 0;
          p_Var9->_Left = p_Var4;
          p_Var9->_Parent = p_Var4;
          p_Var9->_Right = p_Var4;
          p_Var9->_Color = '\0';
          p_Var9->_Isnil = '\0';
          p_Var10 = std::
                    _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                    ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                                    *)param_2,
                                   (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
                                    *)&local_98,p_Var9);
        }
        if ((p_Var10->_Myval).second == 0) {
          lVar20 = local_c0 + 1;
          psVar21 = local_b8 + lVar20;
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          plVar15 = *(longlong **)&psVar21->field_0x8;
          *(longlong **)psVar21 = plVar17;
          *(longlong **)&psVar21->field_0x8 = plVar19;
          local_c0 = lVar20;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar15 + 1;
            lVar7 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15);
              }
            }
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar19 + 1;
            lVar7 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19);
              }
            }
          }
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar22 + 1;
            lVar7 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar22 + 8))(plVar22);
              }
            }
          }
          goto LAB_1495bc722;
        }
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar19 + 1;
          lVar20 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19);
            }
          }
        }
        plVar17 = (longlong *)plVar15[2];
        if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
          cVar14 = *(char *)(*plVar17 + 0x19);
          plVar15 = plVar17;
          plVar17 = (longlong *)*plVar17;
          while (cVar14 == '\0') {
            cVar14 = *(char *)(*plVar17 + 0x19);
            plVar15 = plVar17;
            plVar17 = (longlong *)*plVar17;
          }
        }
        else {
          cVar14 = *(char *)(plVar15[1] + 0x19);
          plVar19 = (longlong *)plVar15[1];
          plVar17 = plVar15;
          while ((plVar15 = plVar19, cVar14 == '\0' && (plVar17 == (longlong *)plVar15[2]))) {
            cVar14 = *(char *)(plVar15[1] + 0x19);
            plVar19 = (longlong *)plVar15[1];
            plVar17 = plVar15;
          }
        }
        uVar12 = local_78[0]._Ptr;
        cVar14 = *(char *)((longlong)plVar15 + 0x19);
      }
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar22 + 1;
        lVar20 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar22 + 8))(plVar22);
          }
        }
      }
      local_d8 = local_d8 + 1;
      local_78[0]._0_8_ = uVar12 + 0x10;
      lVar20 = local_c0;
    } while ((longlong)local_78[0]._0_8_ < 0x30);
LAB_1495bc722:
    if (local_d8 == 3) {
      p_Var4 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 **)param_2;
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      p_Var9 = p_Var4->_Parent;
      cVar14 = p_Var9->_Isnil;
      p_Var10 = p_Var4;
      local_98._Ptr = (char *)p_Var9;
      while (p_Var6 = p_Var9, cVar14 == '\0') {
        uVar18 = *(ulonglong *)&(p_Var6->_Myval).first;
        local_98._12_4_ = (undefined4)((ulonglong)local_98._8_8_ >> 0x20);
        if (uVar18 == local_d0._0_8_) {
          cVar14 = '\0';
LAB_1495bc764:
          local_98._8_4_ = 1;
          p_Var10 = p_Var6;
        }
        else {
          cVar14 = -1;
          if ((ulonglong)local_d0._0_8_ <= uVar18) {
            cVar14 = '\x01';
            goto LAB_1495bc764;
          }
          local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
        }
        p_Var9 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                  *)&p_Var6->_Right;
        if (-1 < cVar14) {
          p_Var9 = p_Var6;
        }
        cVar14 = p_Var9->_Left->_Isnil;
        p_Var9 = p_Var9->_Left;
        local_98._Ptr = (char *)p_Var6;
      }
      if ((p_Var10->_Isnil != '\0') ||
         ((ulonglong)local_d0._0_8_ < *(ulonglong *)&(p_Var10->_Myval).first)) {
        if (*(longlong *)&param_2->field_0x8 == 0x492492492492492) {
LAB_1495bcb78:
                    /* WARNING: Subroutine does not return */
          std::_Throw_tree_length_error();
        }
        p_Var9 = ::operator_new(0x38);
        *(undefined8 *)&(p_Var9->_Myval).first = 0;
        *(undefined8 *)&(p_Var9->_Myval).first.field_0x8 = 0;
        if ((longlong *)local_d0._8_8_ != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0._8_8_ + 8) = (int)*(longlong *)(local_d0._8_8_ + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)&(p_Var9->_Myval).first = local_d0._0_8_;
        *(undefined8 *)&(p_Var9->_Myval).first.field_0x8 = local_d0._8_8_;
        (p_Var9->_Myval).second = 0;
        p_Var9->_Left = p_Var4;
        p_Var9->_Parent = p_Var4;
        p_Var9->_Right = p_Var4;
        p_Var9->_Color = '\0';
        p_Var9->_Isnil = '\0';
        p_Var10 = std::
                  _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                  ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                                  *)param_2,
                                 (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
                                  *)&local_98,p_Var9);
      }
      (p_Var10->_Myval).second = 2;
      psVar21 = (local_a0->_Mypair)._Myval2._Mylast;
      if (psVar21 == (local_a0->_Mypair)._Myval2._Myend) {
        std::
        vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
        ::_Emplace_reallocate<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_&>
                  (local_a0,psVar21,(shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)local_d0);
      }
      else {
        *(undefined8 *)psVar21 = 0;
        *(undefined8 *)&psVar21->field_0x8 = 0;
        if ((longlong *)local_d0._8_8_ != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0._8_8_ + 8) = (int)*(longlong *)(local_d0._8_8_ + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)psVar21 = local_d0._0_8_;
        *(undefined8 *)&psVar21->field_0x8 = local_d0._8_8_;
        ppsVar2 = &(local_a0->_Mypair)._Myval2._Mylast;
        *ppsVar2 = *ppsVar2 + 1;
      }
      lVar20 = lVar20 + -1;
      local_c0 = lVar20;
    }
    uVar12 = local_d0._8_8_;
    if ((longlong *)local_d0._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar15 = (longlong *)(local_d0._8_8_ + 8);
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (*(code *)**(undefined8 **)local_d0._8_8_)(local_d0._8_8_);
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
    psVar21 = local_b8;
    if (lVar20 < 0) {
LAB_1495bcae3:
      psVar21 = local_b8;
      if (local_b8 != (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0) {
        std::_Destroy_range<std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
                  (local_b8,local_b0,
                   (allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_> *)local_98._Buf);
        uVar13 = (longlong)local_a8 - (longlong)psVar21 & 0xfffffffffffffff0;
        psVar16 = psVar21;
        if (0xfff < uVar13) {
          psVar16 = *(shared_ptr<gte::ETNonmanifoldMesh::Triangle> **)&psVar21[-1].field_0x8;
          uVar13 = uVar13 + 0x27;
          if (0x1f < (ulonglong)((longlong)psVar21 + (-8 - (longlong)psVar16))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(psVar16,uVar13);
      }
      return;
    }
  } while( true );
}

// GetComponents @ 1495bf2d0

void __thiscall
gte::ETNonmanifoldMesh::GetComponents
          (ETNonmanifoldMesh *this,
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
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*> *p_Var9
  ;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar10;
  longlong lVar11;
  undefined8 uVar12;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar13;
  longlong *plVar14;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var15;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var16;
  ulonglong uVar17;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var18;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var19;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar20;
  ulong64 uVar21;
  longlong *plVar22;
  bool bVar23;
  TriangleKey<1> local_a8;
  vector<gte::TriangleKey<1>,std::allocator<gte::TriangleKey<1>_>_> local_98;
  _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
  local_78;
  undefined1 local_68 [16];
  vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
  local_58;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *local_40;
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
        p_Var15 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
      ::_Insert_node(&local_78,
                     (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
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
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
      ::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_>_>
                (&local_78,
                 (allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_>
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
               *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 **)&(p_Var9->_Myval).first;
      p_Var15 = p_Var9;
      p_Var19 = p_Var9;
      if (!bVar23) {
        p_Var15 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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
        *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
          **)&(p_Var16->_Myval).first)) {
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
                _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                ::_Insert_node(&local_78,
                               (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
                                *)&local_98,p_Var15);
    }
    if ((p_Var16->_Myval).second == 0) {
      local_58._Mypair._Myval2._Myend = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
      local_58._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
      local_58._Mypair._Myval2._Mylast = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
      DepthFirstSearch(this,(shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)local_68,
                       (map<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,int,std::less<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,std::allocator<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                        *)&local_78,&local_58);
      local_98._Mypair._Myval2._Myend = (TriangleKey<1> *)0x0;
      uVar17 = (longlong)local_58._Mypair._Myval2._Mylast -
               (longlong)local_58._Mypair._Myval2._Myfirst >> 4;
      local_98._Mypair._Myval2._Myfirst = (TriangleKey<1> *)0x0;
      local_98._Mypair._Myval2._Mylast = (TriangleKey<1> *)0x0;
      p_Var18 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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
        if ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
             *)local_98._Mypair._Myval2._Myfirst !=
            (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
             *)0x0) {
          uVar21 = (((longlong)local_98._Mypair._Myval2._Myend -
                    (longlong)local_98._Mypair._Myval2._Myfirst) / 0xc) * 0xc;
          p_Var15 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                     *)local_98._Mypair._Myval2._Myfirst;
          if (0xfff < uVar21) {
            p_Var15 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                        **)&(((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                               *)((longlong)local_98._Mypair._Myval2._Myfirst + -0x38))->_Myval).
                            second;
            uVar21 = uVar21 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_98._Mypair._Myval2._Myfirst + (-8 - (longlong)p_Var15)))
            goto LAB_1495bf8b4;
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
           &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              *)local_98._Mypair._Myval2._Mylast)->_Left = local_a8._0_4_;
          *(undefined4 *)
           ((longlong)
            &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
               *)local_98._Mypair._Myval2._Mylast)->_Left + 4) = local_a8._4_4_;
          *(undefined4 *)
           &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              *)local_98._Mypair._Myval2._Mylast)->_Parent = local_a8._8_4_;
          local_98._Mypair._Myval2._Mylast =
               (TriangleKey<1> *)
               ((longlong)
                &((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_98._Mypair._Myval2._Mylast)->_Parent + 4);
          local_58._Mypair._Myval2._Mylast = psVar10;
        }
        p_Var18 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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
      if ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)local_98._Mypair._Myval2._Myfirst !=
          (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)0x0) {
        uVar21 = (((longlong)local_98._Mypair._Myval2._Myend -
                  (longlong)local_98._Mypair._Myval2._Myfirst) / 0xc) * 0xc;
        p_Var18 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_98._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          p_Var18 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                      **)&(((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                             *)((longlong)local_98._Mypair._Myval2._Myfirst + -0x38))->_Myval).
                          second;
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_98._Mypair._Myval2._Myfirst + (-8 - (longlong)p_Var18)))
          goto LAB_1495bf8b4;
        }
        ::operator_delete(p_Var18,uVar21);
        local_98._Mypair._Myval2._Myend = (TriangleKey<1> *)0x0;
        local_98._Mypair._Myval2._Myfirst = (TriangleKey<1> *)0x0;
        local_98._Mypair._Myval2._Mylast = (TriangleKey<1> *)0x0;
      }
      if (local_58._Mypair._Myval2._Myfirst != (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0)
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
                  (local_58._Mypair._Myval2._Myfirst,local_58._Mypair._Myval2._Mylast,
                   (allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_> *)&local_58);
        uVar21 = (longlong)local_58._Mypair._Myval2._Myend -
                 (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        psVar20 = local_58._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          psVar20 = *(shared_ptr<gte::ETNonmanifoldMesh::Triangle> **)
                     &local_58._Mypair._Myval2._Myfirst[-1].field_0x8;
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_58._Mypair._Myval2._Myfirst + (-8 - (longlong)psVar20))) {
LAB_1495bf8b4:
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

// GetComponents @ 1495bf930

void __thiscall
gte::ETNonmanifoldMesh::GetComponents
          (ETNonmanifoldMesh *this,
          vector<std::vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>,std::allocator<std::vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>_>
          *param_1)

{
  int *piVar1;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  **pp_Var2;
  vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
  **ppvVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
  *pvVar7;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*> *p_Var8
  ;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var12;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var13;
  _Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
  *p_Var14;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar15;
  char cVar16;
  ulong64 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
  local_68;
  undefined1 local_58 [16];
  vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
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
    local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)p_Var13;
    uVar20 = 0;
    p_Var14 = p_Var12;
    while (p_Var8 = p_Var13, cVar16 == '\0') {
      uVar6 = *(ulonglong *)&(p_Var8->_Myval).first;
      if (uVar6 == uVar19) {
        cVar16 = '\0';
LAB_1495bf9db:
        p_Var14 = p_Var8;
        uVar20 = 1;
      }
      else {
        cVar16 = -1;
        uVar20 = 0;
        if (uVar19 <= uVar6) {
          cVar16 = '\x01';
          goto LAB_1495bf9db;
        }
      }
      p_Var13 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 *)&p_Var8->_Right;
      if (-1 < cVar16) {
        p_Var13 = p_Var8;
      }
      cVar16 = p_Var13->_Left->_Isnil;
      p_Var13 = p_Var13->_Left;
      local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)p_Var8;
    }
    local_48._Mypair._Myval2._Mylast =
         (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)
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
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
      ::_Insert_node(&local_68,
                     (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
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
      _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
      ::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_>_>
                (&local_68,
                 (allocator<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_>
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
         (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)
         ((ulonglong)local_48._Mypair._Myval2._Mylast & 0xffffffff00000000);
    cVar16 = p_Var13->_Isnil;
    local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)p_Var13;
    p_Var14 = p_Var12;
    while (p_Var8 = p_Var13, cVar16 == '\0') {
      p_Var13 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                  **)&(p_Var8->_Myval).first;
      local_48._Mypair._Myval2._Mylast._4_4_ =
           (uint)((ulonglong)local_48._Mypair._Myval2._Mylast >> 0x20);
      if (p_Var13 ==
          (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)local_58._0_8_) {
        cVar16 = '\0';
LAB_1495bfb70:
        local_48._Mypair._Myval2._Mylast =
             (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)
             CONCAT44(local_48._Mypair._Myval2._Mylast._4_4_,1);
        p_Var14 = p_Var8;
      }
      else {
        cVar16 = -1;
        if ((ulonglong)local_58._0_8_ <= p_Var13) {
          cVar16 = '\x01';
          goto LAB_1495bfb70;
        }
        local_48._Mypair._Myval2._Mylast =
             (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)
             ((ulonglong)local_48._Mypair._Myval2._Mylast._4_4_ << 0x20);
      }
      p_Var13 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 *)&p_Var8->_Right;
      if (-1 < cVar16) {
        p_Var13 = p_Var8;
      }
      cVar16 = p_Var13->_Left->_Isnil;
      p_Var13 = p_Var13->_Left;
      local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)p_Var8;
    }
    if ((p_Var14->_Isnil != '\0') ||
       ((ulonglong)local_58._0_8_ <
        *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
          **)&(p_Var14->_Myval).first)) {
      if (local_68._Mysize == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_tree_length_error();
      }
      p_Var13 = ::operator_new(0x38);
      *(undefined8 *)&(p_Var13->_Myval).first = 0;
      *(undefined8 *)&(p_Var13->_Myval).first.field_0x8 = 0;
      if ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)local_58._8_8_ !=
          (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)0x0) {
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
                _Tree_val<std::_Tree_simple_types<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                ::_Insert_node(&local_68,
                               (_Tree_id<std::_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>_*>
                                *)&local_48,p_Var13);
    }
    if ((p_Var14->_Myval).second == 0) {
      local_48._Mypair._Myval2._Myend = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
      local_48._Mypair._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
      local_48._Mypair._Myval2._Mylast = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
      DepthFirstSearch(this,(shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)local_58,
                       (map<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,int,std::less<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,std::allocator<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>_>_>
                        *)&local_68,&local_48);
      pvVar7 = (param_1->_Mypair)._Myval2._Mylast;
      if (pvVar7 == (param_1->_Mypair)._Myval2._Myend) {
        std::
        vector<std::vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>,std::allocator<std::vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>_>
        ::
        _Emplace_reallocate<std::vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_const_&>
                  (param_1,pvVar7,&local_48);
      }
      else {
        (pvVar7->_Mypair)._Myval2._Myfirst = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
        (pvVar7->_Mypair)._Myval2._Mylast = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
        (pvVar7->_Mypair)._Myval2._Myend = (shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)0x0;
        uVar19 = (longlong)local_48._Mypair._Myval2._Mylast -
                 (longlong)local_48._Mypair._Myval2._Myfirst >> 4;
        if (uVar19 != 0) {
          if (0xfffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
            std::
            vector<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
            ::_Xlength();
          }
          psVar15 = std::_Allocate<16,std::_Default_allocate_traits>(uVar19 * 0x10);
          (pvVar7->_Mypair)._Myval2._Myfirst = psVar15;
          (pvVar7->_Mypair)._Myval2._Mylast = psVar15;
          (pvVar7->_Mypair)._Myval2._Myend = psVar15 + uVar19;
          for (p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                          *)local_48._Mypair._Myval2._Myfirst;
              p_Var12 !=
              (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
               *)local_48._Mypair._Myval2._Mylast;
              p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                         *)&p_Var12->_Right) {
            *(undefined8 *)psVar15 = 0;
            *(undefined8 *)&psVar15->field_0x8 = 0;
            if (p_Var12->_Parent !=
                (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 *)0x0) {
              LOCK();
              pp_Var2 = &p_Var12->_Parent->_Parent;
              *(int *)pp_Var2 = *(int *)pp_Var2 + 1;
              UNLOCK();
            }
            *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              **)psVar15 = p_Var12->_Left;
            *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
              **)&psVar15->field_0x8 = p_Var12->_Parent;
            psVar15 = psVar15 + 1;
          }
          (pvVar7->_Mypair)._Myval2._Mylast = psVar15;
        }
        ppvVar3 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppvVar3 = *ppvVar3 + 1;
      }
      psVar15 = local_48._Mypair._Myval2._Mylast;
      p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 *)local_48._Mypair._Myval2._Myfirst;
      if ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)local_48._Mypair._Myval2._Myfirst !=
          (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
           *)0x0) {
        for (; p_Var12 !=
               (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                *)psVar15;
            p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                       *)&p_Var12->_Right) {
          p_Var13 = p_Var12->_Parent;
          if (p_Var13 !=
              (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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
        p_Var12 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                   *)local_48._Mypair._Myval2._Myfirst;
        if (0xfff < uVar17) {
          p_Var12 = *(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                      **)&(((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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
    if ((_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
         *)local_58._8_8_ !=
        (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
         *)0x0) {
      LOCK();
      pp_Var2 = (_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                 **)(local_58._8_8_ + 8);
      iVar4 = *(int *)pp_Var2;
      *(int *)pp_Var2 = *(int *)pp_Var2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)(*(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
                     **)local_58._8_8_)->_Left)(local_58._8_8_);
        LOCK();
        piVar1 = (int *)((longlong)(uVar10 + 8) + 4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)(*(_Tree_node<std::pair<std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_const_,int>,void_*>
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

// GetEdges @ 1495bfed0

map<gte::EdgeKey<0>,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
* __thiscall gte::ETNonmanifoldMesh::GetEdges(ETNonmanifoldMesh *this)

{
  return &this->mEMap;
}

// GetTriangles @ 1495c0430

map<gte::TriangleKey<1>,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
* __thiscall gte::ETNonmanifoldMesh::GetTriangles(ETNonmanifoldMesh *this)

{
  return &this->mTMap;
}

// Insert @ 1495c1380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

shared_ptr<gte::ETNonmanifoldMesh::Triangle> * __thiscall
gte::ETNonmanifoldMesh::Insert
          (ETNonmanifoldMesh *this,
          shared_ptr<gte::ETNonmanifoldMesh::Triangle> *__return_storage_ptr__,int param_1,
          int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
  *p_Var3;
  _Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *p_Var4;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
  *p_Var5;
  EdgeKey<0> EVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *psVar9;
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
  *this_00;
  bool bVar10;
  longlong *plVar11;
  Logger *this_01;
  shared_ptr<gte::ETNonmanifoldMesh::Edge> *psVar12;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
  *p_Var13;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
  *p_Var14;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
  *p_Var15;
  _Tree_find_result<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*>
  *p_Var16;
  _Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *p_Var17;
  int *piVar18;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
  *p_Var19;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
  *p_Var20;
  _Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
  *p_Var21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  _Tree_val<std::_Tree_simple_types<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>_> *this_02;
  longlong lVar28;
  longlong lVar29;
  undefined1 auStackY_188 [32];
  int local_158 [8];
  undefined1 local_138 [8];
  undefined8 uStack_130;
  _Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
  *local_118;
  longlong *plStack_110;
  ETNonmanifoldMesh *local_108;
  undefined1 local_f8 [12];
  uint uStack_ec;
  longlong local_d8;
  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
  *local_d0;
  shared_ptr<gte::ETNonmanifoldMesh::Triangle> *local_c8;
  _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
  *local_c0;
  _Bxty local_b8;
  undefined8 local_a8;
  ulonglong uStack_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_98;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_c8 = __return_storage_ptr__;
  local_108 = this;
  if (param_1 < param_2) {
    if (param_1 < param_3) {
      local_158[0] = param_1;
      local_158[1] = param_2;
      local_158[2] = param_3;
      goto LAB_1495c13f9;
    }
  }
  else if (param_2 < param_3) {
    local_158[0] = param_2;
    local_158[1] = param_3;
    local_158[2] = param_1;
    goto LAB_1495c13f9;
  }
  local_158[0] = param_3;
  local_158[1] = param_1;
  local_158[2] = param_2;
LAB_1495c13f9:
  plVar27 = *(longlong **)&this->mTMap;
  local_c0 = (_Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
              *)&this->mTMap;
  plVar26 = (longlong *)plVar27[1];
  cVar1 = *(char *)((longlong)plVar26 + 0x19);
  plVar24 = plVar27;
  while (cVar1 == '\0') {
    iVar22 = 2;
    piVar18 = local_158 + 2;
    do {
      iVar23 = *(int *)((longlong)piVar18 + (longlong)plVar26 + (0x28 - (longlong)(local_158 + 2)));
      if (iVar23 < *piVar18) {
        bVar10 = true;
        goto LAB_1495c1458;
      }
      if (*piVar18 < iVar23) {
        bVar10 = false;
        plVar24 = plVar26;
        goto LAB_1495c1458;
      }
      piVar18 = piVar18 + -1;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
    bVar10 = false;
    plVar24 = plVar26;
LAB_1495c1458:
    plVar11 = plVar26 + 2;
    if (!bVar10) {
      plVar11 = plVar26;
    }
    plVar26 = (longlong *)*plVar11;
    cVar1 = *(char *)((longlong)plVar26 + 0x19);
  }
  if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
    iVar22 = 2;
    piVar18 = local_158 + 2;
    do {
      iVar23 = *(int *)((longlong)piVar18 + (longlong)plVar24 + (0x28 - (longlong)(local_158 + 2)));
      if (*piVar18 < iVar23) goto LAB_1495c14b4;
      if (iVar23 < *piVar18) break;
      piVar18 = piVar18 + -1;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
    if (plVar24 != plVar27) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      return __return_storage_ptr__;
    }
  }
LAB_1495c14b4:
  (*this->mTCreator)((shared_ptr<gte::ETNonmanifoldMesh::Triangle> *)&local_118,param_1,param_2,
                     param_3);
  local_158[6] = 0;
  lVar25 = 8;
  local_d0 = (_Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
              *)&this->mEMap;
  local_d8 = 0;
  lVar29 = 8;
  lVar28 = 0x20;
  do {
    iVar22 = *(int *)((longlong)&local_118->_Left + lVar29);
    local_158[5] = *(int *)((longlong)&local_118->_Parent + lVar25);
    if (local_158[5] < iVar22) {
      local_158[4] = local_158[5];
      local_158[5] = iVar22;
    }
    else {
      local_158[4] = iVar22;
    }
    p_Var3 = local_d0->_Myhead;
    p_Var14 = p_Var3->_Parent;
    cVar1 = p_Var14->_Isnil;
    p_Var15 = p_Var3;
    while (cVar1 == '\0') {
      iVar22 = 1;
      piVar18 = local_158 + 5;
      do {
        iVar23 = *(int *)((longlong)piVar18 + (longlong)p_Var14 + (0x24 - (longlong)(local_158 + 5))
                         );
        if (iVar23 < *piVar18) {
          bVar10 = true;
          goto LAB_1495c157c;
        }
        if (*piVar18 < iVar23) {
          bVar10 = false;
          p_Var15 = p_Var14;
          goto LAB_1495c157c;
        }
        piVar18 = piVar18 + -1;
        iVar22 = iVar22 + -1;
      } while (-1 < iVar22);
      bVar10 = false;
      p_Var15 = p_Var14;
LAB_1495c157c:
      p_Var13 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
                 *)&p_Var14->_Right;
      if (!bVar10) {
        p_Var13 = p_Var14;
      }
      p_Var14 = p_Var13->_Left;
      cVar1 = p_Var14->_Isnil;
    }
    if (p_Var15->_Isnil == '\0') {
      iVar22 = 1;
      piVar18 = local_158 + 5;
      do {
        iVar23 = *(int *)((longlong)p_Var15 + (0x24 - (longlong)(local_158 + 5)) + (longlong)piVar18
                         );
        if (*piVar18 < iVar23) goto LAB_1495c171f;
        if (iVar23 < *piVar18) break;
        piVar18 = piVar18 + -1;
        iVar22 = iVar22 + -1;
      } while (-1 < iVar22);
      if (p_Var15 == p_Var3) goto LAB_1495c171f;
      lVar25 = *(longlong *)&(p_Var15->_Myval).second.field_0x8;
      if (lVar25 != 0) {
        LOCK();
        piVar18 = (int *)(lVar25 + 8);
        *piVar18 = *piVar18 + 1;
        UNLOCK();
      }
      plVar27 = *(longlong **)&(p_Var15->_Myval).second;
      plVar26 = *(longlong **)&(p_Var15->_Myval).second.field_0x8;
      if (plVar27 == (longlong *)0x0) {
        local_b8._8_8_ = 0;
        local_b8._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
        uVar8 = s_Unexpected_condition_._8_8_;
        local_a8 = ___xmm_000000000000001f0000000000000015;
        uStack_a0 = _UNK_151e59228;
        *(undefined8 *)local_b8._Ptr = s_Unexpected_condition_._0_8_;
        *(undefined8 *)(local_b8._Ptr + 8) = uVar8;
        *(undefined4 *)(local_b8._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
        *(local_b8._Ptr + 0x14) = s_Unexpected_condition_[0x14];
        *(local_b8._Ptr + 0x15) = '\0';
        this_01 = Logger::Logger((Logger *)&local_98,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETNonmanifoldMesh.cpp"
                                 ,"gte::ETNonmanifoldMesh::Insert",0x57,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_b8);
        Logger::Error(this_01);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_98);
        if (0xf < uStack_a0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Deallocate_for_capacity((allocator<char> *)local_b8._Buf,local_b8._Ptr,uStack_a0);
        }
        psVar9 = local_c8;
        *(longlong *)local_c8 = 0;
        *(undefined8 *)&local_c8->field_0x8 = 0;
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          plVar27 = plVar26 + 1;
          lVar25 = *plVar27;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)lVar25 == 1) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar18 = (int *)((longlong)plVar26 + 0xc);
            iVar22 = *piVar18;
            *piVar18 = *piVar18 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar26 + 8))(plVar26);
            }
          }
        }
        if (plStack_110 == (longlong *)0x0) {
          return psVar9;
        }
        LOCK();
        plVar27 = plStack_110 + 1;
        lVar25 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar25 != 1) {
          return psVar9;
        }
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar18 = (int *)((longlong)plStack_110 + 0xc);
        iVar22 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar22 != 1) {
          return psVar9;
        }
        (**(code **)(*plStack_110 + 8))(plStack_110);
        return psVar9;
      }
    }
    else {
LAB_1495c171f:
      psVar12 = (*local_108->mECreator)
                          ((shared_ptr<gte::ETNonmanifoldMesh::Edge> *)local_f8,
                           *(int *)((longlong)&local_118->_Parent + lVar25),
                           *(int *)((longlong)&local_118->_Left + lVar29));
      plVar24 = stack0xffffffffffffff10;
      plVar27 = *(longlong **)psVar12;
      plVar26 = *(longlong **)&psVar12->field_0x8;
      *(undefined8 *)psVar12 = 0;
      *(undefined8 *)&psVar12->field_0x8 = 0;
      if (stack0xffffffffffffff10 != (longlong *)0x0) {
        LOCK();
        plVar11 = stack0xffffffffffffff10 + 1;
        lVar25 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar25 == 1) {
          (**(code **)*stack0xffffffffffffff10)(stack0xffffffffffffff10);
          LOCK();
          piVar18 = (int *)((longlong)plVar24 + 0xc);
          iVar22 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
      uStack_130 = (longlong *)((ulonglong)uStack_130 & 0xffffffff00000000);
      p_Var3 = *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
                 **)&local_108->mEMap;
      p_Var14 = p_Var3->_Parent;
      local_138 = (undefined1  [8])p_Var14;
      cVar1 = p_Var14->_Isnil;
      p_Var15 = p_Var3;
      plVar24 = uStack_130;
      while (cVar1 == '\0') {
        local_138 = (undefined1  [8])p_Var14;
        iVar22 = 1;
        piVar18 = (int *)&(p_Var14->_Myval).first.field_0x4;
        do {
          iVar23 = *(int *)((longlong)local_158 + (0x10 - (longlong)&p_Var14->_Myval) +
                           (longlong)piVar18);
          uStack_130._4_4_ = (uint)((ulonglong)plVar24 >> 0x20);
          if (*piVar18 < iVar23) {
            bVar10 = true;
            uStack_130 = (longlong *)((ulonglong)uStack_130._4_4_ << 0x20);
            goto LAB_1495c17f8;
          }
          if (iVar23 < *piVar18) {
            bVar10 = false;
            uStack_130 = (longlong *)CONCAT44(uStack_130._4_4_,1);
            p_Var15 = p_Var14;
            goto LAB_1495c17f8;
          }
          piVar18 = piVar18 + -1;
          iVar22 = iVar22 + -1;
        } while (-1 < iVar22);
        bVar10 = false;
        uStack_130 = (longlong *)CONCAT44(uStack_130._4_4_,1);
        p_Var15 = p_Var14;
LAB_1495c17f8:
        p_Var13 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
                   *)&p_Var14->_Right;
        if (!bVar10) {
          p_Var13 = p_Var14;
        }
        p_Var14 = p_Var13->_Left;
        plVar24 = uStack_130;
        cVar1 = p_Var14->_Isnil;
      }
      uStack_130 = plVar24;
      if (p_Var15->_Isnil == '\0') {
        iVar22 = 1;
        piVar18 = (int *)&(p_Var15->_Myval).first.field_0x4;
        do {
          iVar23 = *(int *)((longlong)piVar18 +
                           (longlong)local_158 + (0x10 - (longlong)&p_Var15->_Myval));
          if (iVar23 < *piVar18) goto LAB_1495c183b;
          if (*piVar18 < iVar23) break;
          piVar18 = piVar18 + -1;
          iVar22 = iVar22 + -1;
        } while (-1 < iVar22);
      }
      else {
LAB_1495c183b:
        if (*(longlong *)&(local_108->mEMap).field_0x8 == 0x492492492492492) goto LAB_1495c1bf0;
        p_Var14 = ::operator_new(0x38);
        EVar6._4_4_ = local_158[5];
        EVar6._0_4_ = local_158[4];
        (p_Var14->_Myval).first = EVar6;
        *(undefined8 *)&(p_Var14->_Myval).second = 0;
        *(undefined8 *)&(p_Var14->_Myval).second.field_0x8 = 0;
        p_Var14->_Left = p_Var3;
        p_Var14->_Parent = p_Var3;
        p_Var14->_Right = p_Var3;
        p_Var14->_Color = '\0';
        p_Var14->_Isnil = '\0';
        p_Var15 = std::
                  _Tree_val<std::_Tree_simple_types<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>_>
                  ::_Insert_node(local_d0,(_Tree_id<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_*>
                                           *)local_138,p_Var14);
      }
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
        UNLOCK();
      }
      plVar24 = *(longlong **)&(p_Var15->_Myval).second.field_0x8;
      *(longlong **)&(p_Var15->_Myval).second = plVar27;
      *(longlong **)&(p_Var15->_Myval).second.field_0x8 = plVar26;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar24 + 1;
        lVar25 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar25 == 1) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar18 = (int *)((longlong)plVar24 + 0xc);
          iVar22 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
    }
    plVar24 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar26 + 0xc) = *(int *)((longlong)plVar26 + 0xc) + 1;
      UNLOCK();
      plVar24 = plVar27;
      plVar11 = plVar26;
    }
    *(longlong **)(&local_118->_Color + lVar28) = plVar24;
    plVar24 = *(longlong **)(&(local_118->_Myval).first.field_0x0 + lVar28);
    *(longlong **)(&(local_118->_Myval).first.field_0x0 + lVar28) = plVar11;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      piVar18 = (int *)((longlong)plVar24 + 0xc);
      iVar22 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar24 + 8))();
      }
    }
    this_02 = (_Tree_val<std::_Tree_simple_types<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>
               *)(plVar27 + 2);
    local_138 = (undefined1  [8])0x0;
    uStack_130 = (longlong *)0x0;
    if (plStack_110 != (longlong *)0x0) {
      local_138 = (undefined1  [8])local_118;
      uStack_130 = plStack_110;
      LOCK();
      *(int *)((longlong)plStack_110 + 0xc) = *(int *)((longlong)plStack_110 + 0xc) + 1;
      UNLOCK();
    }
    plVar11 = uStack_130;
    p_Var16 = std::
              _Tree<std::_Tset_traits<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>,0>_>
              ::_Find_lower_bound<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>
                        ((_Tree<std::_Tset_traits<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>,0>_>
                          *)this_02,
                         (_Tree_find_result<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*>
                          *)&local_b8,(weak_ptr<gte::ETNonmanifoldMesh::Triangle> *)local_138);
    local_98._Mypair._Myval2._Mysize = (ulong64)p_Var16->_Bound;
    p_Var3 = (_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
              *)(p_Var16->_Location)._Parent;
    plVar24 = *(longlong **)&(p_Var16->_Location)._Child;
    if ((((_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)
         local_98._Mypair._Myval2._Mysize)->_Isnil != '\0') ||
       (bVar10 = WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>::operator()
                           ((WeakPtrLT<gte::ETNonmanifoldMesh::Triangle> *)this_02,
                            (weak_ptr<gte::ETNonmanifoldMesh::Triangle> *)local_138,
                            &((_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)
                             local_98._Mypair._Myval2._Mysize)->_Myval), bVar10)) {
      if (plVar27[3] == 0x555555555555555) {
LAB_1495c1bf0:
                    /* WARNING: Subroutine does not return */
        std::_Throw_tree_length_error();
      }
      p_Var4 = this_02->_Myhead;
      p_Var17 = ::operator_new(0x30);
      *(undefined1 (*) [8])&p_Var17->_Myval = local_138;
      *(longlong **)&(p_Var17->_Myval).field_0x8 = uStack_130;
      p_Var17->_Left = p_Var4;
      p_Var17->_Parent = p_Var4;
      p_Var17->_Right = p_Var4;
      p_Var17->_Color = '\0';
      p_Var17->_Isnil = '\0';
      local_138 = (undefined1  [8])p_Var3;
      uStack_130 = plVar24;
      std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>::
      _Insert_node(this_02,(_Tree_id<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*>
                            *)local_138,p_Var17);
    }
    else if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar18 = (int *)((longlong)plVar11 + 0xc);
      iVar22 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar27 = plVar26 + 1;
      lVar25 = *plVar27;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)lVar25 == 1) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar18 = (int *)((longlong)plVar26 + 0xc);
        iVar22 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*plVar26 + 8))(plVar26);
        }
      }
    }
    this_00 = local_c0;
    lVar28 = local_d8;
    lVar25 = lVar29 + -8;
    local_158[6] = local_158[6] + 1;
    lVar29 = lVar29 + 4;
    local_d8 = local_d8 + 0x10;
  } while (local_158[6] < 3);
  iVar22 = 2;
  stack0xffffffffffffff10 = (longlong *)((ulonglong)stack0xffffffffffffff10 & 0xffffffff00000000);
  p_Var5 = local_c0->_Myhead;
  p_Var20 = p_Var5->_Parent;
  local_f8._0_8_ = p_Var20;
  cVar1 = p_Var20->_Isnil;
  p_Var21 = p_Var5;
  uVar7 = (ulonglong)stack0xffffffffffffff10;
  while (cVar1 == '\0') {
    local_f8._0_8_ = p_Var20;
    iVar23 = 2;
    piVar18 = local_158 + 2;
    do {
      iVar2 = *(int *)((longlong)piVar18 + (longlong)p_Var20 + (0x28 - (longlong)(local_158 + 2)));
      uStack_ec = (uint)(uVar7 >> 0x20);
      if (iVar2 < *piVar18) {
        bVar10 = true;
        stack0xffffffffffffff10 = (longlong *)((ulonglong)uStack_ec << 0x20);
        goto LAB_1495c1add;
      }
      if (*piVar18 < iVar2) {
        bVar10 = false;
        stack0xffffffffffffff10 = (longlong *)CONCAT44(uStack_ec,1);
        p_Var21 = p_Var20;
        goto LAB_1495c1add;
      }
      piVar18 = piVar18 + -1;
      iVar23 = iVar23 + -1;
    } while (-1 < iVar23);
    bVar10 = false;
    stack0xffffffffffffff10 = (longlong *)CONCAT44(uStack_ec,1);
    p_Var21 = p_Var20;
LAB_1495c1add:
    p_Var19 = (_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>
               *)&p_Var20->_Right;
    if (!bVar10) {
      p_Var19 = p_Var20;
    }
    p_Var20 = p_Var19->_Left;
    uVar7 = (ulonglong)stack0xffffffffffffff10;
    cVar1 = p_Var20->_Isnil;
  }
  unique0x1000116c = (longlong *)uVar7;
  if (p_Var21->_Isnil == '\0') {
    piVar18 = (int *)&(p_Var21->_Myval).first.field_0x8;
    do {
      iVar23 = *(int *)((longlong)piVar18 + ((longlong)local_158 - (longlong)&p_Var21->_Myval));
      if (iVar23 < *piVar18) goto LAB_1495c1b1b;
      if (*piVar18 < iVar23) break;
      piVar18 = piVar18 + -1;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
  }
  else {
LAB_1495c1b1b:
    if (local_c0->_Mysize == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_tree_length_error();
    }
    p_Var20 = ::operator_new(0x40);
    *(ulonglong *)&(p_Var20->_Myval).first = CONCAT44(local_158[1],local_158[0]);
    *(int *)&(p_Var20->_Myval).first.field_0x8 = local_158[2];
    *(undefined8 *)&(p_Var20->_Myval).second = 0;
    *(undefined8 *)&(p_Var20->_Myval).second.field_0x8 = 0;
    p_Var20->_Left = p_Var5;
    p_Var20->_Parent = p_Var5;
    p_Var20->_Right = p_Var5;
    p_Var20->_Color = '\0';
    p_Var20->_Isnil = '\0';
    p_Var21 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
              ::_Insert_node(this_00,(_Tree_id<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_*>
                                      *)local_f8,p_Var20);
  }
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  plVar27 = *(longlong **)&(p_Var21->_Myval).second.field_0x8;
  *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
    **)&(p_Var21->_Myval).second = local_118;
  *(longlong **)&(p_Var21->_Myval).second.field_0x8 = plStack_110;
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar26 = plVar27 + 1;
    lVar25 = *plVar26;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)lVar25 == 1) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar18 = (int *)((longlong)plVar27 + 0xc);
      iVar22 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar27 + 8))(plVar27);
      }
    }
  }
  *(_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>
    **)local_c8 = local_118;
  *(longlong **)&local_c8->field_0x8 = plStack_110;
  return local_c8;
}

// IsClosed @ 1495c42c0

bool __thiscall gte::ETNonmanifoldMesh::IsClosed(ETNonmanifoldMesh *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)**(longlong **)&this->mEMap;
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while( true ) {
    if (cVar1 != '\0') {
      return true;
    }
    if (*(longlong *)(plVar4[5] + 0x18) != 2) break;
    plVar2 = (longlong *)plVar4[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar3 = (longlong *)plVar4[1];
      plVar2 = plVar4;
      while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar2 = plVar4;
      }
    }
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  return false;
}

// IsManifold @ 1495c47e0

bool __thiscall gte::ETNonmanifoldMesh::IsManifold(ETNonmanifoldMesh *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)**(longlong **)&this->mEMap;
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while( true ) {
    if (cVar1 != '\0') {
      return true;
    }
    if (2 < *(ulonglong *)(plVar4[5] + 0x18)) break;
    plVar2 = (longlong *)plVar4[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar3 = (longlong *)plVar4[1];
      plVar2 = plVar4;
      while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar2 = plVar4;
      }
    }
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  return false;
}

// Remove @ 1495c6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
gte::ETNonmanifoldMesh::Remove(ETNonmanifoldMesh *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  _Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> **pp_Var2;
  int iVar3;
  char cVar4;
  _Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *p_Var5;
  longlong lVar6;
  _Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *p_Var7;
  ETNonmanifoldMesh *pEVar8;
  longlong *plVar9;
  pair<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*,std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*>
  *ppVar10;
  ulong64 uVar11;
  pair<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_*,std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_*>
  *ppVar12;
  pair<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_*,std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_*>
  *ppVar13;
  Logger *pLVar14;
  longlong *plVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  char *pcVar22;
  bool bVar23;
  undefined1 auStackY_e8 [32];
  TriangleKey<1> local_b8;
  EdgeKey<0> local_a8;
  _Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *local_a0;
  pair<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*,std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*>
  local_98;
  longlong local_88;
  ETNonmanifoldMesh *local_80;
  map<gte::TriangleKey<1>,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>_>
  *local_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_80 = this;
  if (param_1 < param_2) {
    if (param_1 < param_3) {
      local_b8._0_4_ = param_1;
      local_b8._4_4_ = param_2;
      local_b8._8_4_ = param_3;
      goto LAB_1495c6d3a;
    }
  }
  else if (param_2 < param_3) {
    local_b8._0_4_ = param_2;
    local_b8._4_4_ = param_3;
    local_b8._8_4_ = param_1;
    goto LAB_1495c6d3a;
  }
  local_b8._0_4_ = param_3;
  local_b8._4_4_ = param_1;
  local_b8._8_4_ = param_2;
LAB_1495c6d3a:
  plVar19 = *(longlong **)&this->mTMap;
  local_78 = &this->mTMap;
  iVar20 = 2;
  plVar15 = (longlong *)plVar19[1];
  cVar4 = *(char *)((longlong)plVar15 + 0x19);
  plVar21 = plVar19;
  while (cVar4 == '\0') {
    iVar17 = 2;
    plVar9 = plVar15 + 5;
    do {
      iVar3 = *(int *)((longlong)plVar9 + ((longlong)&local_b8 - (longlong)(plVar15 + 4)));
      if ((int)*plVar9 < iVar3) {
        bVar23 = true;
        goto LAB_1495c6d95;
      }
      if (iVar3 < (int)*plVar9) {
        bVar23 = false;
        plVar21 = plVar15;
        goto LAB_1495c6d95;
      }
      plVar9 = (longlong *)((longlong)plVar9 + -4);
      iVar17 = iVar17 + -1;
    } while (-1 < iVar17);
    bVar23 = false;
    plVar21 = plVar15;
LAB_1495c6d95:
    plVar9 = plVar15 + 2;
    if (!bVar23) {
      plVar9 = plVar15;
    }
    plVar15 = (longlong *)*plVar9;
    cVar4 = *(char *)((longlong)plVar15 + 0x19);
  }
  if (*(char *)((longlong)plVar21 + 0x19) == '\0') {
    plVar15 = plVar21 + 5;
    do {
      iVar17 = *(int *)(((longlong)&local_b8 - (longlong)(plVar21 + 4)) + (longlong)plVar15);
      if (iVar17 < (int)*plVar15) {
        return false;
      }
      if ((int)*plVar15 < iVar17) break;
      plVar15 = (longlong *)((longlong)plVar15 + -4);
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
    if (plVar21 != plVar19) {
      if (plVar21[7] != 0) {
        LOCK();
        piVar1 = (int *)(plVar21[7] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_a0 = (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)plVar21[6];
      p_Var5 = (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)plVar21[7];
      local_88 = 0;
      pcVar22 = &local_a0->_Color;
      do {
        lVar6 = *(longlong *)(pcVar22 + 8);
        lVar18 = 0;
        plVar19 = (longlong *)0x0;
        if (lVar6 != 0) {
          iVar20 = *(int *)(lVar6 + 8);
          do {
            if (iVar20 == 0) goto LAB_1495c6e6f;
            LOCK();
            iVar17 = *(int *)(lVar6 + 8);
            bVar23 = iVar20 == iVar17;
            if (bVar23) {
              *(int *)(lVar6 + 8) = iVar20 + 1;
              iVar17 = iVar20;
            }
            UNLOCK();
            iVar20 = iVar17;
          } while (!bVar23);
          lVar18 = *(longlong *)pcVar22;
          plVar19 = *(longlong **)(pcVar22 + 8);
        }
LAB_1495c6e6f:
        if (lVar18 == 0) {
          local_70._8_8_ = 0;
          local_70._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
          uVar16 = s_Unexpected_condition_._8_8_;
          local_60 = ___xmm_000000000000001f0000000000000015;
          uStack_58 = _UNK_151e59228;
          *(undefined8 *)local_70._Ptr = s_Unexpected_condition_._0_8_;
          *(undefined8 *)(local_70._Ptr + 8) = uVar16;
          *(undefined4 *)(local_70._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
          *(local_70._Ptr + 0x14) = s_Unexpected_condition_[0x14];
          *(local_70._Ptr + 0x15) = '\0';
          pLVar14 = Logger::Logger((Logger *)&local_50,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETNonmanifoldMesh.cpp"
                                   ,"gte::ETNonmanifoldMesh::Remove",0x7b,
                                   (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_70);
          Logger::Error(pLVar14);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_50);
          if (0xf < uStack_58) {
            uVar11 = uStack_58 + 1;
            uVar16 = local_70._Ptr;
            if (0xfff < uVar11) {
              uVar16 = *(undefined8 *)(local_70._Ptr + -8);
              uVar11 = uStack_58 + 0x28;
              if ((char *)0x1f < local_70._Ptr + (-8 - uVar16)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
LAB_1495c7133:
            ::operator_delete((void *)uVar16,uVar11);
          }
LAB_1495c7138:
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar19 + 1;
            lVar6 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19);
              }
            }
          }
          bVar23 = false;
          goto LAB_1495c716a;
        }
        local_98.first = (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)0x0;
        local_98.second = (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)0x0;
        if (p_Var5 != (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)&p_Var5->_Parent + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          local_98.first = local_a0;
          local_98.second = p_Var5;
        }
        p_Var7 = local_98.second;
        ppVar10 = std::
                  _Tree<std::_Tset_traits<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>,0>_>
                  ::_Eqrange<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>
                            ((_Tree<std::_Tset_traits<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>,0>_>
                              *)(lVar18 + 0x10),
                             (pair<std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*,std::_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*>_*>
                              *)&local_50,(weak_ptr<gte::ETNonmanifoldMesh::Triangle> *)&local_98);
        local_98.first = ppVar10->first;
        local_98.second = ppVar10->second;
        uVar11 = std::
                 _Tree<std::_Tset_traits<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>,0>_>
                 ::_Erase((_Tree<std::_Tset_traits<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,gte::WeakPtrLT<gte::ETNonmanifoldMesh::Triangle>,std::allocator<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>_>,0>_>
                           *)(lVar18 + 0x10),&local_98);
        if (p_Var7 != (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)&p_Var7->_Parent + 4);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (*(code *)p_Var7->_Left->_Parent)(p_Var7);
          }
        }
        pEVar8 = local_80;
        if (uVar11 == 0) {
          local_70._8_8_ = 0;
          local_70._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
          uVar16 = s_Unexpected_condition_._8_8_;
          local_60 = ___xmm_000000000000001f0000000000000015;
          uStack_58 = _UNK_151e59228;
          *(undefined8 *)local_70._Ptr = s_Unexpected_condition_._0_8_;
          *(undefined8 *)(local_70._Ptr + 8) = uVar16;
          *(undefined4 *)(local_70._Ptr + 0x10) = s_Unexpected_condition_._16_4_;
          *(local_70._Ptr + 0x14) = s_Unexpected_condition_[0x14];
          *(local_70._Ptr + 0x15) = '\0';
          pLVar14 = Logger::Logger((Logger *)&local_50,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ThirdParty\\GTEngine\\Mathematics\\GteETNonmanifoldMesh.cpp"
                                   ,"gte::ETNonmanifoldMesh::Remove",0x83,
                                   (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_70);
          Logger::Error(pLVar14);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_50);
          if (0xf < uStack_58) {
            uVar11 = uStack_58 + 1;
            uVar16 = local_70._Ptr;
            if (0xfff < uVar11) {
              uVar11 = uStack_58 + 0x28;
              uVar16 = *(char **)(local_70._Ptr + -8);
              if ((char *)0x1f < local_70._Ptr + (-8 - (longlong)*(char **)(local_70._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            goto LAB_1495c7133;
          }
          goto LAB_1495c7138;
        }
        if (*(longlong *)(lVar18 + 0x18) == 0) {
          iVar20 = *(int *)(lVar18 + 0xc);
          local_a8._4_4_ = *(int *)(lVar18 + 8);
          local_a8._0_4_ = iVar20;
          if ((int)local_a8._4_4_ < iVar20) {
            local_a8._0_4_ = local_a8._4_4_;
            local_a8._4_4_ = iVar20;
          }
          ppVar12 = std::
                    _Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>,0>_>
                    ::_Eqrange<gte::EdgeKey<0>_>
                              ((_Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>,0>_>
                                *)&local_80->mEMap,
                               (pair<std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_*,std::_Tree_node<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>,void_*>_*>
                                *)&local_70,&local_a8);
          std::
          _Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>,0>_>
          ::_Erase_unchecked((_Tree<std::_Tmap_traits<gte::EdgeKey<0>,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>,std::less<gte::EdgeKey<0>_>,std::allocator<std::pair<gte::EdgeKey<0>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Edge>_>_>,0>_>
                              *)&pEVar8->mEMap,ppVar12->first,ppVar12->second);
        }
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar19 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19);
            }
          }
        }
        pcVar22 = pcVar22 + 0x10;
        local_88 = local_88 + 1;
      } while (local_88 < 3);
      ppVar13 = std::
                _Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>,0>_>
                ::_Eqrange<gte::TriangleKey<1>_>
                          ((_Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>,0>_>
                            *)local_78,
                           (pair<std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_*,std::_Tree_node<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>,void_*>_*>
                            *)&local_70,&local_b8);
      std::
      _Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>,0>_>
      ::_Erase_unchecked((_Tree<std::_Tmap_traits<gte::TriangleKey<1>,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>,std::less<gte::TriangleKey<1>_>,std::allocator<std::pair<gte::TriangleKey<1>_const_,std::shared_ptr<gte::ETNonmanifoldMesh::Triangle>_>_>,0>_>
                          *)local_78,ppVar13->first,ppVar13->second);
      bVar23 = true;
LAB_1495c716a:
      if (p_Var5 == (_Tree_node<std::weak_ptr<gte::ETNonmanifoldMesh::Triangle>,void_*> *)0x0) {
        return bVar23;
      }
      LOCK();
      pp_Var2 = &p_Var5->_Parent;
      iVar20 = *(int *)pp_Var2;
      *(int *)pp_Var2 = *(int *)pp_Var2 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (*(code *)p_Var5->_Left->_Left)(p_Var5);
        LOCK();
        piVar1 = (int *)((longlong)&p_Var5->_Parent + 4);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (*(code *)p_Var5->_Left->_Parent)(p_Var5);
          return bVar23;
        }
        return bVar23;
      }
      return bVar23;
    }
  }
  return false;
}

