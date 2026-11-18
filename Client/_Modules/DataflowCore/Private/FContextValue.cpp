// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 6

// FContextValue @ 14442a020

FContextValue * __thiscall
UE::Dataflow::FContextValue::FContextValue
          (FContextValue *this,IContextCacheStore *param_1,
          TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          *param_2)

{
  this->Context = param_1;
  this->CacheKey = 0;
  (this->CacheElement).Ptr = param_2->Ptr;
  param_2->Ptr = (FContextCacheElementBase *)0x0;
  return this;
}

// FContextValue @ 14442a040

FContextValue * __thiscall
UE::Dataflow::FContextValue::FContextValue
          (FContextValue *this,IContextCacheStore *param_1,uint param_2)

{
  this->Context = param_1;
  this->CacheKey = param_2;
  (this->CacheElement).Ptr = (FContextCacheElementBase *)0x0;
  return this;
}

// GetAt @ 14444a5c0

FContextValue * __thiscall
UE::Dataflow::FContextValue::GetAt
          (FContextValue *this,FContextValue *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  FContextCacheElementBase *pFVar2;
  FContextCacheElementBase *local_res8;
  
  pFVar2 = (this->CacheElement).Ptr;
  if (pFVar2 == (FContextCacheElementBase *)0x0) {
    plVar1 = (longlong *)(**(code **)*this->Context)(this->Context,this->CacheKey);
    if ((plVar1 == (longlong *)0x0) ||
       (pFVar2 = (FContextCacheElementBase *)*plVar1, pFVar2 == (FContextCacheElementBase *)0x0)) {
      __return_storage_ptr__->Context = this->Context;
      local_res8 = (FContextCacheElementBase *)0x0;
      __return_storage_ptr__->CacheKey = 0;
      goto LAB_14444a64d;
    }
  }
  (**(code **)(pFVar2->_padding_ + 0x28))
            (pFVar2,&local_res8,this->Context,param_1,pFVar2->Property,&pFVar2->NodeGuid,
             pFVar2->NodeHash,&pFVar2->Timestamp);
  __return_storage_ptr__->Context = this->Context;
  __return_storage_ptr__->CacheKey = 0;
LAB_14444a64d:
  (__return_storage_ptr__->CacheElement).Ptr = local_res8;
  return __return_storage_ptr__;
}

// GetCacheEntry @ 14444a890

FContextCacheElementBase * __thiscall
UE::Dataflow::FContextValue::GetCacheEntry(FContextValue *this)

{
  undefined8 *puVar1;
  FContextCacheElementBase *pFVar2;
  
  pFVar2 = (this->CacheElement).Ptr;
  if (pFVar2 == (FContextCacheElementBase *)0x0) {
    puVar1 = (undefined8 *)(**(code **)*this->Context)(this->Context,this->CacheKey);
    pFVar2 = (FContextCacheElementBase *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      return (FContextCacheElementBase *)*puVar1;
    }
  }
  return pFVar2;
}

// Num @ 144452950

int __thiscall UE::Dataflow::FContextValue::Num(FContextValue *this)

{
  int iVar1;
  longlong *plVar2;
  FContextCacheElementBase *pFVar3;
  
  pFVar3 = (this->CacheElement).Ptr;
  if (pFVar3 == (FContextCacheElementBase *)0x0) {
    plVar2 = (longlong *)(**(code **)*this->Context)(this->Context,this->CacheKey);
    if ((plVar2 == (longlong *)0x0) ||
       (pFVar3 = (FContextCacheElementBase *)*plVar2, pFVar3 == (FContextCacheElementBase *)0x0)) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144452985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,this->Context);
  return iVar1;
}

// ToArray @ 144466b70

FContextValue * __thiscall
UE::Dataflow::FContextValue::ToArray(FContextValue *this,FContextValue *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  IContextCacheStore *pIVar4;
  FContextCacheElementBase *pFVar5;
  undefined8 *local_res8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  local_res18 [2];
  
  pFVar5 = (this->CacheElement).Ptr;
  if ((pFVar5 == (FContextCacheElementBase *)0x0) &&
     ((plVar2 = (longlong *)(**(code **)*this->Context)(), plVar2 == (longlong *)0x0 ||
      (pFVar5 = (FContextCacheElementBase *)*plVar2, pFVar5 == (FContextCacheElementBase *)0x0)))) {
    pIVar4 = this->Context;
    __return_storage_ptr__->CacheKey = 0;
  }
  else {
    cVar1 = (**(code **)(pFVar5->_padding_ + 0x18))(pFVar5);
    if (cVar1 == '\0') {
      (**(code **)(pFVar5->_padding_ + 0x30))
                (pFVar5,local_res18,this->Context,pFVar5->Property,&pFVar5->NodeGuid,
                 pFVar5->NodeHash,&pFVar5->Timestamp);
      __return_storage_ptr__->Context = this->Context;
      __return_storage_ptr__->CacheKey = 0;
      (__return_storage_ptr__->CacheElement).Ptr = local_res18[0].Ptr;
      return __return_storage_ptr__;
    }
    if ((this->CacheElement).Ptr != (FContextCacheElementBase *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5,&local_res8,this->Context);
      __return_storage_ptr__->Context = this->Context;
      __return_storage_ptr__->CacheKey = 0;
      (__return_storage_ptr__->CacheElement).Ptr = (FContextCacheElementBase *)*puVar3;
      *puVar3 = 0;
      if (local_res8 == (undefined8 *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)*local_res8)(local_res8,1);
      return __return_storage_ptr__;
    }
    pIVar4 = this->Context;
    __return_storage_ptr__->CacheKey = this->CacheKey;
  }
  __return_storage_ptr__->Context = pIVar4;
  (__return_storage_ptr__->CacheElement).Ptr = (FContextCacheElementBase *)0x0;
  return __return_storage_ptr__;
}

