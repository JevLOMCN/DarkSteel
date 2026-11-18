// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// GetTypedData<TObjectPtr<UTexture2D>_> @ 1462ca810

TObjectPtr<UTexture2D> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UTexture2D>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UTexture2D> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UTexture2D> *pTVar5;
  undefined8 unaff_RDI;
  
  while (EVar1 = this->Type, EVar1 == CacheElementReference) {
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUObject) {
      return (TObjectPtr<UTexture2D> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UTexture2D> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

