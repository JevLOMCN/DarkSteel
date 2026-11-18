// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TImplicitObjectInstanced<Chaos::FConvex> @ 1481c6610

TImplicitObjectInstanced<Chaos::FConvex> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FConvex>::TImplicitObjectInstanced<Chaos::FConvex>
          (TImplicitObjectInstanced<Chaos::FConvex> *this,TRefCountPtr<Chaos::FConvex> *param_1,
          double param_2)

{
  FConvex *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar5;
  
  bVar3 = FImplicitObject::GetType((FImplicitObject *)param_1->Reference);
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,bVar3 | 0x40);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TImplicitObjectInstanced_VFConvex_Chaos___Chaos__6B_;
  (this->MObject).Reference = (FConvex *)0x0;
  pFVar1 = param_1->Reference;
  (this->MObject).Reference = pFVar1;
  if (pFVar1 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  bVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar3 & 0x40) != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351985>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x4f,"IsInstanced(MObject->GetType()) == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TImplicitObjectInstanced<Chaos::FConvex> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_2;
  *(float *)&this->_padding_ = (float)param_2 + *(float *)&pFVar1->_padding_;
  return this;
}

// TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> @ 1481c66f0

TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> * __thiscall
Chaos::TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>::
TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject>
          (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *this,
          TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *param_1,double param_2)

{
  FTriangleMeshImplicitObject *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *pTVar5;
  
  bVar3 = FImplicitObject::GetType((FImplicitObject *)param_1->Reference);
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,bVar3 | 0x40);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TImplicitObjectInstanced_VFTriangleMeshImplicitObject_Chaos___Chaos__6B_;
  (this->MObject).Reference = (FTriangleMeshImplicitObject *)0x0;
  pFVar1 = param_1->Reference;
  (this->MObject).Reference = pFVar1;
  if (pFVar1 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  bVar3 = FImplicitObject::GetType((FImplicitObject *)(this->MObject).Reference);
  if ((bVar3 & 0x40) != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3369118521899351985>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectScaled.h"
                       ,0x4f,"IsInstanced(MObject->GetType()) == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TImplicitObjectInstanced<Chaos::FTriangleMeshImplicitObject> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (this->MObject).Reference;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
  *(float *)&this->_padding_ = (float)param_2;
  *(float *)&this->_padding_ = (float)param_2 + *(float *)&pFVar1->_padding_;
  return this;
}

