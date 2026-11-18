// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// FBufferWithRDG @ 145ded0f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBufferWithRDG * __thiscall
FBufferWithRDG::FBufferWithRDG(FBufferWithRDG *this,FBufferWithRDG *param_1)

{
  FRDGPooledBuffer *pFVar1;
  
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  this->_padding_ = (longlong)&___7FBufferWithRDG__6B_;
  (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
  pFVar1 = (param_1->Buffer).Reference;
  (this->Buffer).Reference = pFVar1;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  return this;
}

// FBufferWithRDG @ 145ded160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBufferWithRDG * __thiscall FBufferWithRDG::FBufferWithRDG(FBufferWithRDG *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBufferWithRDG__6B_;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// ~FBufferWithRDG @ 145df0980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBufferWithRDG::~FBufferWithRDG(FBufferWithRDG *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FBufferWithRDG__6B_;
  pFVar2 = (this->Buffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator= @ 145df2230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBufferWithRDG * __thiscall FBufferWithRDG::operator=(FBufferWithRDG *this,FBufferWithRDG *param_1)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  pFVar2 = (param_1->Buffer).Reference;
  pFVar3 = (this->Buffer).Reference;
  if (pFVar3 != pFVar2) {
    (this->Buffer).Reference = pFVar2;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return this;
}

// ReleaseRHI @ 145e21510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBufferWithRDG::ReleaseRHI(FBufferWithRDG *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Buffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145e21543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

