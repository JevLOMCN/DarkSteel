// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// FPBDSkinnedTriangleMeshCollisions @ 14db95790

FPBDSkinnedTriangleMeshCollisions * __thiscall
Chaos::Softs::FPBDSkinnedTriangleMeshCollisions::FPBDSkinnedTriangleMeshCollisions
          (FPBDSkinnedTriangleMeshCollisions *this,FPBDSkinnedTriangleMeshCollisions *param_1)

{
  longlong lVar1;
  FSkinnedTriangleMesh *pFVar2;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->SkinnedTriangleMesh).Reference = (FSkinnedTriangleMesh *)0x0;
  pFVar2 = (param_1->SkinnedTriangleMesh).Reference;
  (this->SkinnedTriangleMesh).Reference = pFVar2;
  if (pFVar2 != (FSkinnedTriangleMesh *)0x0) {
    LOCK();
    *(int *)&pFVar2->field_0x8 = *(int *)&pFVar2->field_0x8 + 1;
    UNLOCK();
  }
  this->Velocities = param_1->Velocities;
  return this;
}

// ~FPBDSkinnedTriangleMeshCollisions @ 14db9fe40

void __thiscall
Chaos::Softs::FPBDSkinnedTriangleMeshCollisions::~FPBDSkinnedTriangleMeshCollisions
          (FPBDSkinnedTriangleMeshCollisions *this)

{
  undefined1 *puVar1;
  int iVar2;
  FSkinnedTriangleMesh *pFVar3;
  
  pFVar3 = (this->SkinnedTriangleMesh).Reference;
  if (pFVar3 != (FSkinnedTriangleMesh *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x8;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)&pFVar3->field_0xc == 0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  DestructItems<TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,int>
            ((TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
             this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

