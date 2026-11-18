// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 68

// TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_><TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> @ 14e8f1e00

TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_>::
TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_><TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *this,FGuid *param_1,
          FProperty *param_2,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_3,
          uint param_4,FTimestamp param_5)

{
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar4,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_><TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&> @ 14e8f1ef0

TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_><TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,FGuid *param_1,
          FProperty *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,uint param_4,
          FTimestamp param_5)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_><TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&> @ 14e8f2e80

TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_>::
TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_><TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *this,FGuid *param_1,
          FProperty *param_2,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_3,
          uint param_4,FTimestamp param_5)

{
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar4,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_><TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&> @ 14e8f2f70

TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::
TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_><TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,FGuid *param_1,
          FProperty *param_2,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3,
          uint param_4,FTimestamp param_5)

{
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterial> *)pFVar4,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_><TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&> @ 14e8f3060

TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_><TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,FGuid *param_1,
          FProperty *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,uint param_4,
          FTimestamp param_5)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)&param_1->C;
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(uint *)&this->_padding_ = param_4;
  this->_padding_ = param_5.Value;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> @ 14e90f370

TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::
TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *param_1)

{
  TArray<TObjectPtr<UDataflowMesh_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDataflowMesh_const_>,TObjectPtr<UDataflowMesh_const_>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDataflowMesh_const_> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> @ 14e90f460

TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::
TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *param_1)

{
  TArray<TObjectPtr<UDynamicMesh_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDynamicMesh_const_>,TObjectPtr<UDynamicMesh_const_>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh_const_> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> @ 14e90f550

TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::
TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *param_1)

{
  TArray<TObjectPtr<UDataflowMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDataflowMesh>,TObjectPtr<UDataflowMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDataflowMesh> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> @ 14e90f640

TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::
TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *param_1)

{
  TArray<TObjectPtr<UGeometryCollection>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UGeometryCollection>,TObjectPtr<UGeometryCollection>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UGeometryCollection> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> @ 14e90f730

TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::
TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *param_1)

{
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterial> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> @ 14e90f820

TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> @ 14e90f910

TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::
TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *param_1)

{
  TArray<TObjectPtr<UStaticMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  pTVar1 = &this->ObjectPtrArray;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__FContextCacheElementBase__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  piVar2 = &(this->ObjectPtrArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectPtrArray).ArrayNum;
  pFVar5 = (param_1->ObjectPtrArray).AllocatorInstance.Data;
  (this->ObjectPtrArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UStaticMesh>,TObjectPtr<UStaticMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UStaticMesh> *)pFVar5,iVar3);
  }
  return this;
}

// AddReferencedObjects @ 14e939800

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14e939840

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14e939880

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14e9398c0

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14e939900

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14e939940

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// AddReferencedObjects @ 14e939980

void __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::AddReferencedObjects
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
  return;
}

// Clone @ 14e93d0c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93d120

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93d180

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93d1e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93d240

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93d2a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93d300

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::Clone
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e9418d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e9418f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e941910

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e941930

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e941950

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e941970

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e941990

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::CreateArrayFromElement
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e944130

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UDataflowMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UDataflowMesh_const_>_>::_vftable__for__FGCObject__
    ;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9442c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UDynamicMesh_const_>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UDynamicMesh_const_>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e944450

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UDataflowMesh>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UDataflowMesh>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9445e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UGeometryCollection>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UGeometryCollection>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e944770

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UMaterial>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UMaterial>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e944900

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UMaterialInterface>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UMaterialInterface>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e944a90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::CreateFromArrayElement
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar8;
  IContextCacheStore IVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->ObjectPtrArray).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->ObjectPtrArray).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar8.Ptr;
    }
  }
  pUVar1 = *(UObject **)((this->ObjectPtrArray).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 == (IContextCacheStore)0x0) {
    IVar9 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined ***)IVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined4 *)((longlong)IVar9 + 8) = 3;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined ***)((longlong)IVar9 + 0x38) = &___7FGCObject__6B_;
    *(undefined2 *)((longlong)IVar9 + 0x40) = 0;
    FGCObject::RegisterGCObject((FGCObject *)((longlong)IVar9 + 0x38));
    *(undefined ***)IVar9 =
         &TContextCacheElementUObject<TObjectPtr<UStaticMesh>_>::
          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    *(undefined ***)((longlong)IVar9 + 0x38) =
         &TContextCacheElementUObject<TObjectPtr<UStaticMesh>_>::_vftable__for__FGCObject__;
    *(UObject **)((longlong)IVar9 + 0x48) = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
      *param_1 = IVar9;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar9;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14e952df0

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::
GetNumArrayElements(TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14e952e00

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::
GetNumArrayElements(TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14e952e10

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14e952e20

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::
GetNumArrayElements(TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14e952e30

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14e952e40

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetNumArrayElements @ 14e952e50

int __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::GetNumArrayElements
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          IContextCacheStore *param_1)

{
  return (this->ObjectPtrArray).ArrayNum;
}

// GetReferencerName @ 14e953190

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14e9531c0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14e9531f0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14e953220

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14e953250

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14e953280

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetReferencerName @ 14e9532b0

FString * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::GetReferencerName
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TContextCacheElementUObjectArray");
  return __return_storage_ptr__;
}

// GetUntypedData @ 14e953680

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14e953690

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14e9536a0

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14e9536b0

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14e9536c0

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14e9536d0

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// GetUntypedData @ 14e9536e0

void * __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::GetUntypedData
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->ObjectPtrArray;
}

// IsArray @ 14e9556e0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9556f0

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh_const_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955700

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UDataflowMesh>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955710

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UGeometryCollection>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955720

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955730

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955740

bool __thiscall
UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_>::IsArray
          (TContextCacheElementUObjectArray<TObjectPtr<UStaticMesh>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

