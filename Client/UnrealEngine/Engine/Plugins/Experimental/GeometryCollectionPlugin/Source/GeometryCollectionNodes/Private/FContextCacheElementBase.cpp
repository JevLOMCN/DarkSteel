// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 22

// GetTypedData<UE::Math::TBox<double>_> @ 14e8f8ec0

TBox<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TBox<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TBox<double> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TBox<double> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TBox<double> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TBox<double> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UDataflowMesh_const_>_> @ 14e8f8f70

TObjectPtr<UDataflowMesh_const_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDataflowMesh_const_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UDataflowMesh_const_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UDataflowMesh_const_> *pTVar5;
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
      return (TObjectPtr<UDataflowMesh_const_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UDataflowMesh_const_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UDynamicMesh_const_>_> @ 14e8f9020

TObjectPtr<UDynamicMesh_const_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDynamicMesh_const_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UDynamicMesh_const_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UDynamicMesh_const_> *pTVar5;
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
      return (TObjectPtr<UDynamicMesh_const_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UDynamicMesh_const_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UDataflowMesh>_> @ 14e8f90d0

TObjectPtr<UDataflowMesh> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDataflowMesh>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UDataflowMesh> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UDataflowMesh> *pTVar5;
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
      return (TObjectPtr<UDataflowMesh> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UDataflowMesh> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UGeometryCollection>_> @ 14e8f9180

TObjectPtr<UGeometryCollection> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UGeometryCollection>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UGeometryCollection> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UGeometryCollection> *pTVar5;
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
      return (TObjectPtr<UGeometryCollection> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UGeometryCollection> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UMaterial>_> @ 14e8f9230

TObjectPtr<UMaterial> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UMaterial>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UMaterial> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UMaterial> *pTVar5;
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
      return (TObjectPtr<UMaterial> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UMaterial> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UMaterialInterface>_> @ 14e8f92e0

TObjectPtr<UMaterialInterface> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UMaterialInterface>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UMaterialInterface> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UMaterialInterface> *pTVar5;
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
      return (TObjectPtr<UMaterialInterface> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UMaterialInterface> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UStaticMesh>_> @ 14e8f9390

TObjectPtr<UStaticMesh> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UStaticMesh>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UStaticMesh> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UStaticMesh> *pTVar5;
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
      return (TObjectPtr<UStaticMesh> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UStaticMesh> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TSphere<double>_> @ 14e8f9440

TSphere<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TSphere<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TSphere<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSphere<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TSphere<double> *)(this + 1);
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
      pTVar6 = *(TSphere<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TSphere<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSphere<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSphere<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TSphere<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TSphere<double>_>::Get();
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
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TSphere<double>_>::Get();
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
          pTVar6 = (TSphere<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSphere<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowConvexDecompositionSettings> @ 14e8f9650

FDataflowConvexDecompositionSettings * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowConvexDecompositionSettings>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowConvexDecompositionSettings *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowConvexDecompositionSettings *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowConvexDecompositionSettings *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowConvexDecompositionSettings>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowConvexDecompositionSettings *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowRootProxyMesh> @ 14e8f9720

FDataflowRootProxyMesh * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowRootProxyMesh>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowRootProxyMesh *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowRootProxyMesh *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowRootProxyMesh *)&this[1].Type;
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowRootProxyMesh>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowRootProxyMesh *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowSphereCovering> @ 14e8f97f0

FDataflowSphereCovering * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowSphereCovering>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowSphereCovering *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowSphereCovering *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowSphereCovering *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowSphereCovering>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowSphereCovering *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e8f98c0

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> @ 14e8f9970

TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUObjectArray) {
      return (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> @ 14e8f9a40

TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUObjectArray) {
      return (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e8f9b10

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUObjectArray) {
      return (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e8f9be0

TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TSphere<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> @ 14e8f9cc0

TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UPackage *pUVar5;
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar6;
  char *pcVar7;
  undefined8 unaff_RDI;
  int iVar8;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    param_3 = (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (this[1].Property == (FProperty *)0x0) {
      return param_3;
    }
    if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowRootProxyMesh,(UObject *)pUVar5,
                           L"DataflowRootProxyMesh");
    }
    if (Z_Registration_Info_UScriptStruct_FDataflowRootProxyMesh.OuterSingleton ==
        (UScriptStruct *)this[1].Property) {
      return param_3;
    }
    iVar8 = 0x201;
    pcVar7 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar8 = 0x24a;
    pcVar7 = "false";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar8,L"");
  if (!bVar3) {
    return param_3;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// GetTypedData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> @ 14e8f9dd0

TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UScriptStruct *pUVar5;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar6;
  char *pcVar7;
  undefined8 unaff_RDI;
  int iVar8;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    param_3 = (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)
              &this[1].NodeGuid.B;
    if (this[1].Property == (FProperty *)0x0) {
      return param_3;
    }
    pUVar5 = FGeometryCollectionAutoInstanceMesh::StaticStruct();
    if (pUVar5 == (UScriptStruct *)this[1].Property) {
      return param_3;
    }
    iVar8 = 0x201;
    pcVar7 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar8 = 0x24a;
    pcVar7 = "false";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar8,L"");
  if (!bVar3) {
    return param_3;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// GetTypedData<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> @ 14e8f9eb0

TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UScriptStruct *pUVar5;
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar6;
  char *pcVar7;
  undefined8 unaff_RDI;
  int iVar8;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    param_3 = (TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (this[1].Property == (FProperty *)0x0) {
      return param_3;
    }
    pUVar5 = FGeometryCollectionSource::StaticStruct();
    if (pUVar5 == (UScriptStruct *)this[1].Property) {
      return param_3;
    }
    iVar8 = 0x201;
    pcVar7 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar8 = 0x24a;
    pcVar7 = "false";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar8,L"");
  if (!bVar3) {
    return param_3;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// GetTypedData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> @ 14e8f9f90

TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UScriptStruct *pUVar5;
  TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *pTVar6;
  char *pcVar7;
  undefined8 unaff_RDI;
  int iVar8;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    param_3 = (TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (this[1].Property == (FProperty *)0x0) {
      return param_3;
    }
    pUVar5 = FManagedArrayCollection::StaticStruct();
    if (pUVar5 == (UScriptStruct *)this[1].Property) {
      return param_3;
    }
    iVar8 = 0x201;
    pcVar7 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar8 = 0x24a;
    pcVar7 = "false";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar8,L"");
  if (!bVar3) {
    return param_3;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// GetTypedData<enum_ERotationOrderEnum> @ 14e8fa070

ERotationOrderEnum * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<enum_ERotationOrderEnum>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          ERotationOrderEnum *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ERotationOrderEnum *pEVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (ERotationOrderEnum *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pEVar5 = (ERotationOrderEnum *)(*pcVar2)();
    return pEVar5;
  }
  return param_3;
}

