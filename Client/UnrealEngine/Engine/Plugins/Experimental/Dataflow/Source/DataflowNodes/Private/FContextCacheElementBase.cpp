// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 6

// GetTypedData<TObjectPtr<USkeletalMesh_const_>_> @ 14dac8bf0

TObjectPtr<USkeletalMesh_const_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<USkeletalMesh_const_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<USkeletalMesh_const_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<USkeletalMesh_const_> *pTVar5;
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
      return (TObjectPtr<USkeletalMesh_const_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<USkeletalMesh_const_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<USkeleton_const_>_> @ 14dac8ca0

TObjectPtr<USkeleton_const_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<USkeleton_const_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<USkeleton_const_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<USkeleton_const_> *pTVar5;
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
      return (TObjectPtr<USkeleton_const_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<USkeleton_const_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UStaticMesh_const_>_> @ 14dac8d50

TObjectPtr<UStaticMesh_const_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UStaticMesh_const_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UStaticMesh_const_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UStaticMesh_const_> *pTVar5;
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
      return (TObjectPtr<UStaticMesh_const_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UStaticMesh_const_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<USkeletalMesh>_> @ 14dac8e00

TObjectPtr<USkeletalMesh> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<USkeletalMesh>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<USkeletalMesh> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<USkeletalMesh> *pTVar5;
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
      return (TObjectPtr<USkeletalMesh> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<USkeletalMesh> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<USkeleton>_> @ 14dac8eb0

TObjectPtr<USkeleton> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<USkeleton>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<USkeleton> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<USkeleton> *pTVar5;
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
      return (TObjectPtr<USkeleton> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<USkeleton> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<FCollectionAttributeKey> @ 14dac8f60

FCollectionAttributeKey * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FCollectionAttributeKey>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FCollectionAttributeKey *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FCollectionAttributeKey *pFVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FCollectionAttributeKey *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pFVar6 = *(FCollectionAttributeKey **)&this[1].NodeGuid.D;
      if ((pFVar6 == (FCollectionAttributeKey *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FCollectionAttributeKey *)(*pcVar3)();
        return pFVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FCollectionAttributeKey *)(*pcVar3)();
        return pFVar6;
      }
      pUVar7 = FCollectionAttributeKey::StaticStruct();
      if (this_00 != pUVar7) {
        pUVar7 = FCollectionAttributeKey::StaticStruct();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pFVar6;
          }
        }
        pUVar7 = FCollectionAttributeKey::StaticStruct();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                           ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FCollectionAttributeKey *)(*pcVar3)();
          return pFVar6;
        }
      }
      return pFVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCollectionAttributeKey *)(*pcVar3)();
      return pFVar6;
    }
  }
  return param_3;
}

