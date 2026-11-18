// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 276

// TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> @ 14e90d1e0

TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::
TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEAV__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> @ 14e90d2a0

TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::
TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEAV__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> @ 14e90d360

TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
           *this,TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
                 *param_1)

{
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEAV__TArray_U__TObjectPtr_VUDynamicMesh____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&> @ 14e90d410

TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
           *this,TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
                 *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEAV__TArray_U__TObjectPtr_VUMaterialInterface____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
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

// TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&> @ 14e90d4c0

TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
           *this,TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
                 *param_1)

{
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FGeometryCollectionSource *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEAV__TArray_UFGeometryCollectionSource__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FGeometryCollectionSource *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d580

TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
          TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d640

TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
          TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *param_1)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d700

TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x38);
  }
  return this;
}

// TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d7c0

TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TObjectPtr_VUDynamicMesh____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d870

TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TObjectPtr_VUMaterial____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
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

// TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d920

TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TObjectPtr_VUMaterialInterface____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
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

// TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90d9d0

TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TSphere_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90da90

TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90db50

TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&> @ 14e90dc10

TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
  }
  return this;
}

// TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&> @ 14e90dcd0

TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FDataflowRootProxyMesh *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_UFDataflowRootProxyMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FDataflowRootProxyMesh *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FDataflowRootProxyMesh,FDataflowRootProxyMesh,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&> @ 14e90dd90

TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
* __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FGeometryCollectionAutoInstanceMesh *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_UFGeometryCollectionAutoInstanceMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FGeometryCollectionAutoInstanceMesh *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&> @ 14e90de50

TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FGeometryCollectionSource *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_UFGeometryCollectionSource__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FGeometryCollectionSource *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> @ 14e90df10

TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this,
          TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *param_1)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&> @ 14e90dfd0

TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
           *this,TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1)

{
  TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FManagedArrayCollection *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_UFManagedArrayCollection__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FManagedArrayCollection *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 14e90e090

TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
          TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> @ 14e90e150

TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
          TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_AEBV__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> @ 14e90e200

TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *this
          ,TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUDynamicMesh____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> @ 14e90e2b0

TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUMaterial____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
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

// TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e90e360

TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUMaterialInterface____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
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

// TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e90e410

TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar7 = param_1->_padding_;
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_U__TSphere_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar5;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(int *)&this->_padding_ = (int)lVar7;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
  }
  return this;
}

// TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> @ 14e90e4d0

TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *param_1
          )

{
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FDataflowRootProxyMesh *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_UFDataflowRootProxyMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FDataflowRootProxyMesh *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FDataflowRootProxyMesh,FDataflowRootProxyMesh,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> @ 14e90e590

TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> *
__thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FGeometryCollectionAutoInstanceMesh *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_UFGeometryCollectionAutoInstanceMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FGeometryCollectionAutoInstanceMesh *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> @ 14e90e650

TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FGeometryCollectionSource *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->Data;
  lVar8 = param_1->_padding_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TContextCacheElement_V__TArray_UFGeometryCollectionSource__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FGeometryCollectionSource *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_> @ 14e90e710

TContextCacheElement<TArray<ERotationOrderEnum,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TContextCacheElement<TArray<ERotationOrderEnum,TSizedDefaultAllocator<32>_>_> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar3 = param_1->_padding_;
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x38);
  lVar6 = param_1->_padding_;
  uVar4 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar5 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(longlong *)((longlong)this + 0x20) = param_1->_padding_;
  *(undefined ***)this =
       &
       ___7__TContextCacheElement_V__TArray_W4ERotationOrderEnum__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0xc) = uVar4;
  *(undefined8 *)((longlong)this + 0x14) = uVar5;
  *(int *)((longlong)this + 0x28) = (int)lVar6;
  *(longlong *)((longlong)this + 0x30) = lVar3;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x40) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x44) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x44));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2);
  }
  return this;
}

// Clone @ 14e93b850

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double_&>::Clone
          (TContextCacheElement<double_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x40);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEAN_Dataflow_UE__6B_;
    *(double *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93b8e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::Clone
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93b940

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::Clone
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93b9a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
Clone(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93ba00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::Clone
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93ba60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::Clone(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&> *this,
       IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bac0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool_&>::Clone
          (TContextCacheElement<bool_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x40);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEA_N_Dataflow_UE__6B_;
    *(bool *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bb50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&>::Clone
          (TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  UDynamicMesh *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x40);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar4;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUDynamicMesh_____Dataflow_UE__6B_;
    pUVar3 = (this->Data).field0_0x0.DebugPtr;
    *(UDynamicMesh **)((longlong)IVar6 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDynamicMesh *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    *param_1 = IVar6;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bc00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterial>_const_&>::Clone
          (TContextCacheElement<TObjectPtr<UMaterial>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  UMaterial *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x40);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar4;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterial_____Dataflow_UE__6B_;
    pUVar3 = (this->Data).field0_0x0.DebugPtr;
    *(UMaterial **)((longlong)IVar6 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterial *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    *param_1 = IVar6;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bcb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&>::Clone
          (TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  UMaterialInterface *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x40);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar4;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterialInterface_____Dataflow_UE__6B_;
    pUVar3 = (this->Data).field0_0x0.DebugPtr;
    *(UMaterialInterface **)((longlong)IVar6 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterialInterface *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    *param_1 = IVar6;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bd60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TSphere<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TSphere<double>_const_&> *this,IContextCacheStore *param_1
          )

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x58);
  if (IVar7 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar6 = this->_padding_;
    *(undefined8 *)((longlong)IVar7 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar7 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar7 + 8) = 0;
    *(longlong *)((longlong)IVar7 + 0x20) = lVar2;
    *(int *)((longlong)IVar7 + 0x28) = (int)lVar6;
    *(longlong *)((longlong)IVar7 + 0x30) = lVar1;
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TSphere_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).Center.field0_0x0._s_0.X;
    dVar5 = (this->Data).Center.field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    dVar4 = (this->Data).W;
    *(double *)((longlong)IVar7 + 0x48) = (this->Data).Center.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x50) = dVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bdf0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FDataflowRootProxyMesh_const_&>::Clone
          (TContextCacheElement<FDataflowRootProxyMesh_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0xc0);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_AEBUFDataflowRootProxyMesh___Dataflow_UE__6B_;
    FDataflowRootProxyMesh::FDataflowRootProxyMesh
              ((FDataflowRootProxyMesh *)((longlong)IVar5 + 0x40),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93be90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&>::Clone
          (TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x68);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionAutoInstanceMesh___Dataflow_UE__6B_;
    FGeometryCollectionAutoInstanceMesh::FGeometryCollectionAutoInstanceMesh
              ((FGeometryCollectionAutoInstanceMesh *)((longlong)IVar5 + 0x38),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bf30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionSource_const_&>::Clone
          (TContextCacheElement<FGeometryCollectionSource_const_&> *this,IContextCacheStore *param_1
          )

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0xf0);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar4 = this->_padding_;
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(longlong *)((longlong)IVar5 + 0x20) = lVar2;
    *(int *)((longlong)IVar5 + 0x28) = (int)lVar4;
    *(longlong *)((longlong)IVar5 + 0x30) = lVar1;
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionSource___Dataflow_UE__6B_;
    FGeometryCollectionSource::FGeometryCollectionSource
              ((FGeometryCollectionSource *)((longlong)IVar5 + 0x40),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93bfd0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c030

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c090

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c0f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c150

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&> *)0x0
     ) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c1b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
Clone(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
      *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
       *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c210

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&> *
      )0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c270

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
Clone(TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
      *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
       *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c2d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c330

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&> *
      )0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c390

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c3f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::Clone(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
        *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
       *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c450

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&> *
      )0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c4b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c510

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&> *this_00
  ;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c570

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c5d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c630

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<enum_ERotationOrderEnum_const_&>::Clone
          (void *this,IContextCacheStore *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x40);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar4 = *(undefined8 *)((longlong)this + 0x14);
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    uVar3 = *(undefined8 *)((longlong)this + 0x20);
    uVar1 = *(undefined4 *)((longlong)this + 0x28);
    *(undefined8 *)((longlong)IVar5 + 0xc) = *(undefined8 *)((longlong)this + 0xc);
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0x20) = uVar3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = uVar1;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar2;
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBW4ERotationOrderEnum___Dataflow_UE__6B_;
    *(undefined1 *)((longlong)IVar5 + 0x38) = *(undefined1 *)((longlong)this + 0x38);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c6c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_>::Clone
          (TContextCacheElement<UE::Math::TBox<double>_> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x70);
  if (IVar7 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar6 = this->_padding_;
    *(undefined8 *)((longlong)IVar7 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar7 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar7 + 8) = 0;
    *(longlong *)((longlong)IVar7 + 0x20) = lVar2;
    *(int *)((longlong)IVar7 + 0x28) = (int)lVar6;
    *(longlong *)((longlong)IVar7 + 0x30) = lVar1;
    *(undefined ***)IVar7 = &___7__TContextCacheElement_U__TBox_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).Min.field0_0x0._s_0.X;
    dVar5 = (this->Data).Min.field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    dVar4 = (this->Data).Max.field0_0x0._s_0.X;
    *(double *)((longlong)IVar7 + 0x48) = (this->Data).Min.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x50) = dVar4;
    dVar4 = (this->Data).Max.field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x58) = (this->Data).Max.field0_0x0._s_0.Y;
    *(double *)((longlong)IVar7 + 0x60) = dVar4;
    *(undefined8 *)((longlong)IVar7 + 0x68) = *(undefined8 *)&(this->Data).IsValid;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c760

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c7c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c820

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> *this_00
  ;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> *)
      0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c880

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c8e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c940

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
      *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
  *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93c9a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14e93ca00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
Clone(void *this,IContextCacheStore *param_1)

{
  void *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (void *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93eee0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double_&>::CreateArrayFromElement
          (TContextCacheElement<double_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  dVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  *(double *)local_18.Data = dVar1;
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000038;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar5 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar2;
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_V__TArray_NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar5 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar5 + 0x40) = local_10;
    *(int *)((longlong)IVar5 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar6 = IVar5;
  }
  *param_1 = IVar6;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93eff0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f010

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f030

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f050

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f070

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::CreateArrayFromElement
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f090

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool_&>::CreateArrayFromElement
          (TContextCacheElement<bool_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined1 local_res8 [8];
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8[0] = this->Data;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_18,1,&iStack_c);
  memcpy(local_18.Data,local_res8,1);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_10;
    *(int *)((longlong)IVar4 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f1a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&>::CreateArrayFromElement
          (TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UDynamicMesh>_u_0)(this->Data).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UDynamicMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
            (local_18.Data,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUDynamicMesh____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_10;
    *(int *)((longlong)IVar4 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f2d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterial>_const_&>::CreateArrayFromElement
          (TContextCacheElement<TObjectPtr<UMaterial>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UMaterial>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UMaterial>_u_0)(this->Data).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UMaterial *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>,int>
            (local_18.Data,(TObjectPtr<UMaterial> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUMaterial____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_10;
    *(int *)((longlong)IVar4 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f400

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&>::CreateArrayFromElement
          (TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  TObjectPtr<UMaterialInterface>_u_0 local_res8;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8 = (TObjectPtr<UMaterialInterface>_u_0)(this->Data).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UMaterialInterface *)0x0))
  {
    GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  local_10 = 1;
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
            (local_18.Data,(TObjectPtr<UMaterialInterface> *)&local_res8.ObjectPtr,1);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TObjectPtr_VUMaterialInterface____V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_10;
    *(int *)((longlong)IVar4 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f530

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TSphere<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TSphere<double>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_58;
  undefined4 local_50;
  int iStack_4c;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  local_48 = (this->Data).Center.field0_0x0._s_0.X;
  dStack_40 = (this->Data).Center.field0_0x0._s_0.Y;
  local_38 = (this->Data).Center.field0_0x0._s_0.Z;
  dStack_30 = (this->Data).W;
  IVar5 = (IContextCacheStore)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_58,1,&iStack_4c);
  *(double *)local_58.Data = local_48;
  *(double *)(local_58.Data + 8) = dStack_40;
  *(double *)(local_58.Data + 0x10) = local_38;
  *(double *)(local_58.Data + 0x18) = dStack_30;
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TSphere_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_58.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_50;
    *(int *)((longlong)IVar4 + 0x44) = iStack_4c;
    local_50 = 0;
    iStack_4c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FDataflowRootProxyMesh_const_&>::CreateArrayFromElement
          (TContextCacheElement<FDataflowRootProxyMesh_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FDataflowRootProxyMesh local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FDataflowRootProxyMesh::FDataflowRootProxyMesh(&local_98,&this->Data);
  local_a0 = CONCAT44(local_a0._4_4_,1);
  IVar5 = (IContextCacheStore)0x0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x80,0x10,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  ConstructItems<FDataflowRootProxyMesh,FDataflowRootProxyMesh,int>(local_a8.Data,&local_98,1);
  if (local_98.OverrideMaterials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.OverrideMaterials.AllocatorInstance.Data);
  }
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_UFDataflowRootProxyMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_a8.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_a0;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_a0._4_4_;
    local_a0 = 0;
    IVar5 = IVar4;
    local_a0._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FDataflowRootProxyMesh,int>((FDataflowRootProxyMesh *)local_a8.Data,(int)local_a0);
  if ((FDataflowRootProxyMesh *)local_a8.Data != (FDataflowRootProxyMesh *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f7d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&>::
CreateArrayFromElement
          (TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_48;
  undefined8 local_40;
  FGeometryCollectionAutoInstanceMesh local_38;
  
  FGeometryCollectionAutoInstanceMesh::FGeometryCollectionAutoInstanceMesh(&local_38,&this->Data);
  local_40 = CONCAT44(local_40._4_4_,1);
  IVar5 = (IContextCacheStore)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&local_48,1,(int *)((longlong)&local_40 + 4));
  ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
            (local_48.Data,&local_38,1);
  if (local_38.CustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CustomData.AllocatorInstance.Data);
  }
  if (local_38.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Materials.AllocatorInstance.Data);
  }
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_UFGeometryCollectionAutoInstanceMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_40;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_40._4_4_;
    local_40 = 0;
    IVar5 = IVar4;
    local_40._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_48.Data,(int)local_40);
  if ((FGeometryCollectionAutoInstanceMesh *)local_48.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionSource_const_&>::CreateArrayFromElement
          (TContextCacheElement<FGeometryCollectionSource_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FGeometryCollectionSource local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FGeometryCollectionSource::FGeometryCollectionSource(&local_c8,&this->Data);
  local_d0 = CONCAT44(local_d0._4_4_,1);
  IVar5 = (IContextCacheStore)0x0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xb0,0x10,1,0,&local_d8,1,(int *)((longlong)&local_d0 + 4));
  ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>(local_d8.Data,&local_c8,1)
  ;
  if (local_c8.InstanceCustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.InstanceCustomData.AllocatorInstance.Data);
  }
  if (local_c8.SourceMaterial.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.SourceMaterial.AllocatorInstance.Data);
  }
  if (local_c8.SourceGeometryObject.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.SourceGeometryObject.SubPathString.Data.AllocatorInstance.Data);
  }
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_UFGeometryCollectionSource__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_d8.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_d0;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_d0._4_4_;
    local_d0 = 0;
    IVar5 = IVar4;
    local_d0._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FGeometryCollectionSource,int>
            ((FGeometryCollectionSource *)local_d8.Data,(int)local_d0);
  if ((FGeometryCollectionSource *)local_d8.Data != (FGeometryCollectionSource *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fab0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fad0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93faf0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fb10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fb30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fb50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fb70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fb90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fbb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fbd0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fbf0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fc10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::CreateArrayFromElement
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fc30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fc50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fc70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fc90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fcb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fcd0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<enum_ERotationOrderEnum_const_&>::CreateArrayFromElement
          (void *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined1 local_res8 [8];
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  local_res8[0] = *(undefined1 *)((longlong)this + 0x38);
  IVar5 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_18,1,&iStack_c);
  memcpy(local_18.Data,local_res8,1);
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_W4ERotationOrderEnum__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_18.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_10;
    *(int *)((longlong)IVar4 + 0x44) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TBox<double>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined4 local_90;
  int iStack_8c;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78 = (this->Data).Min.field0_0x0._s_0.X;
  dStack_70 = (this->Data).Min.field0_0x0._s_0.Y;
  local_68 = (this->Data).Min.field0_0x0._s_0.Z;
  dStack_60 = (this->Data).Max.field0_0x0._s_0.X;
  local_58 = (this->Data).Max.field0_0x0._s_0.Y;
  dStack_50 = (this->Data).Max.field0_0x0._s_0.Z;
  IVar5 = (IContextCacheStore)0x0;
  local_88 = *(double *)&(this->Data).IsValid;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,1,0,&local_98,1,&iStack_8c);
  *(double *)local_98.Data = local_78;
  *(double *)(local_98.Data + 8) = dStack_70;
  *(double *)(local_98.Data + 0x10) = local_68;
  *(double *)(local_98.Data + 0x18) = dStack_60;
  *(double *)(local_98.Data + 0x20) = local_58;
  *(double *)(local_98.Data + 0x28) = dStack_50;
  *(double *)(local_98.Data + 0x30) = local_88;
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_98.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_90;
    *(int *)((longlong)IVar4 + 0x44) = iStack_8c;
    local_90 = 0;
    iStack_8c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93ff60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *this
          ,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93ff80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93ffa0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93ffc0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e93ffe0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e940000

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e940020

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14e940040

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (void *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9419b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double_&>::CreateFromArrayElement
          (TContextCacheElement<double_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9419d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBH_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined4 *)((longlong)IVar9 + 0x38) = *(undefined4 *)(pFVar1 + (longlong)(int)uVar10 * 4);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941af0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBM_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined4 *)((longlong)IVar9 + 0x38) = *(undefined4 *)(pFVar1 + (longlong)(int)uVar10 * 4);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941c10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUDynamicMesh_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941d40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterialInterface_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941e70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::CreateFromArrayElement
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0xf0);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionSource___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FGeometryCollectionSource::FGeometryCollectionSource
              ((FGeometryCollectionSource *)((longlong)IVar9 + 0x40),
               (FGeometryCollectionSource *)(pFVar1 + (longlong)(int)uVar10 * 0xb0));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941fb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool_&>::CreateFromArrayElement
          (TContextCacheElement<bool_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941fd0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&>::CreateFromArrayElement
          (TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e941ff0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterial>_const_&>::CreateFromArrayElement
          (TContextCacheElement<TObjectPtr<UMaterial>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942010

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&>::CreateFromArrayElement
          (TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942030

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TSphere<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TSphere<double>_const_&> *this,IContextCacheStore *param_1
          ,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942050

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FDataflowRootProxyMesh_const_&>::CreateFromArrayElement
          (TContextCacheElement<FDataflowRootProxyMesh_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942070

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&>::
CreateFromArrayElement
          (TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942090

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionSource_const_&>::CreateFromArrayElement
          (TContextCacheElement<FGeometryCollectionSource_const_&> *this,IContextCacheStore *param_1
          ,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9420b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBM_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined4 *)((longlong)IVar9 + 0x38) = *(undefined4 *)(pFVar1 + (longlong)(int)uVar10 * 4);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9421d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBN_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9422f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar7;
  IContextCacheStore IVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar6 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar7.Ptr = (FContextCacheElementBase *)(*pcVar2)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar7.Ptr;
    }
  }
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x38;
  IVar8 = (IContextCacheStore)::operator_new(0x70);
  if (IVar8 != (IContextCacheStore)0x0) {
    *param_1 = IVar8;
    uVar1 = *in_stack_00000040;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar8 + 8) = 0;
    *(undefined8 *)((longlong)IVar8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar8 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar8 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar8 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TBox_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x38) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x40) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x48) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x50) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x28);
    *(undefined8 *)((longlong)IVar8 + 0x58) = *(undefined8 *)(pFVar9 + 0x20);
    *(undefined8 *)((longlong)IVar8 + 0x60) = uVar1;
    *(undefined8 *)((longlong)IVar8 + 0x68) = *(undefined8 *)(pFVar9 + 0x30);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942430

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUDynamicMesh_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942560

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterial_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942690

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterialInterface_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9427c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar7;
  IContextCacheStore IVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar6 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar7.Ptr = (FContextCacheElementBase *)(*pcVar2)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar7.Ptr;
    }
  }
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
  IVar8 = (IContextCacheStore)::operator_new(0x58);
  if (IVar8 != (IContextCacheStore)0x0) {
    *param_1 = IVar8;
    uVar1 = *in_stack_00000040;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar8 + 8) = 0;
    *(undefined8 *)((longlong)IVar8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar8 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar8 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar8 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TSphere_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x38) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x40) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x48) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x50) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9428f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar7;
  IContextCacheStore IVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar6 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar7.Ptr = (FContextCacheElementBase *)(*pcVar2)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar7.Ptr;
    }
  }
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x60;
  IVar8 = (IContextCacheStore)::operator_new(0xa0);
  if (IVar8 != (IContextCacheStore)0x0) {
    *param_1 = IVar8;
    uVar1 = *in_stack_00000040;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar8 + 8) = 0;
    *(undefined8 *)((longlong)IVar8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar8 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar8 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar8 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar8 =
         &___7__TContextCacheElement_AEBU__TTransform_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x40) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x50) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x28);
    *(undefined8 *)((longlong)IVar8 + 0x60) = *(undefined8 *)(pFVar9 + 0x20);
    *(undefined8 *)((longlong)IVar8 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x38);
    *(undefined8 *)((longlong)IVar8 + 0x70) = *(undefined8 *)(pFVar9 + 0x30);
    *(undefined8 *)((longlong)IVar8 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x48);
    *(undefined8 *)((longlong)IVar8 + 0x80) = *(undefined8 *)(pFVar9 + 0x40);
    *(undefined8 *)((longlong)IVar8 + 0x88) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x58);
    *(undefined8 *)((longlong)IVar8 + 0x90) = *(undefined8 *)(pFVar9 + 0x50);
    *(undefined8 *)((longlong)IVar8 + 0x98) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942a50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc;
  IVar9 = (IContextCacheStore)::operator_new(0x48);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBU__TVector_M_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)pFVar1;
    *(undefined4 *)((longlong)IVar9 + 0x40) = *(undefined4 *)(pFVar1 + 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942b80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  IVar9 = (IContextCacheStore)::operator_new(0x50);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBU__TVector_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)(pFVar1 + 8);
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)pFVar1;
    *(undefined8 *)((longlong)IVar9 + 0x40) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x48) = *(undefined8 *)(pFVar1 + 0x10);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942cb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0xc0);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFDataflowRootProxyMesh___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FDataflowRootProxyMesh::FDataflowRootProxyMesh
              ((FDataflowRootProxyMesh *)((longlong)IVar9 + 0x40),
               (FDataflowRootProxyMesh *)(pFVar1 + (longlong)(int)uVar10 * 0x80));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942df0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::CreateFromArrayElement
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x68);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionAutoInstanceMesh___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FGeometryCollectionAutoInstanceMesh::FGeometryCollectionAutoInstanceMesh
              ((FGeometryCollectionAutoInstanceMesh *)((longlong)IVar9 + 0x38),
               (FGeometryCollectionAutoInstanceMesh *)(pFVar1 + (longlong)(int)uVar10 * 0x30));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e942f30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0xf0);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionSource___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FGeometryCollectionSource::FGeometryCollectionSource
              ((FGeometryCollectionSource *)((longlong)IVar9 + 0x40),
               (FGeometryCollectionSource *)(pFVar1 + (longlong)(int)uVar10 * 0xb0));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943070

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar7;
  IContextCacheStore IVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar6 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar7.Ptr = (FContextCacheElementBase *)(*pcVar2)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar7.Ptr;
    }
  }
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  IVar8 = (IContextCacheStore)::operator_new(0x48);
  if (IVar8 != (IContextCacheStore)0x0) {
    *param_1 = IVar8;
    uVar1 = *in_stack_00000040;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar8 + 8) = 0;
    *(undefined8 *)((longlong)IVar8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar8 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar8 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar8 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBUFLinearColor___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x38) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x40) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943190

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0xe8);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFManagedArrayCollection___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FManagedArrayCollection::FManagedArrayCollection
              ((FManagedArrayCollection *)((longlong)IVar9 + 0x38),
               (FManagedArrayCollection *)(pFVar1 + (longlong)(int)uVar10 * 0xb0));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9432d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x48);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBVFString___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    ::FString::FString((FString *)((longlong)IVar9 + 0x38),
                       (FString *)(pFVar1 + (longlong)(int)uVar10 * 0x10));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943410

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEB_N_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(FScriptContainerElement *)((longlong)IVar9 + 0x38) = pFVar1[(int)uVar10];
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943530

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<enum_ERotationOrderEnum_const_&>::CreateFromArrayElement
          (void *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943550

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TBox<double>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943570

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *this
          ,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUDynamicMesh_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9436a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterial_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e9437d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar9;
  IContextCacheStore IVar10;
  uint uVar11;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar11 = (uint)param_3;
  if (((int)uVar11 < 0) || ((this->Data).ArrayNum <= (int)uVar11)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar8 = 0;
  if ((int)uVar11 < (this->Data).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FContextCacheElementBase *)(*pcVar4)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar9.Ptr;
    }
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar10 = (IContextCacheStore)::operator_new(0x40);
  if (IVar10 == (IContextCacheStore)0x0) {
    IVar10 = (IContextCacheStore)0x0;
  }
  else {
    uVar2 = *in_stack_00000040;
    uVar5 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar6 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar10 + 8) = 0;
    *(undefined8 *)((longlong)IVar10 + 0xc) = uVar5;
    *(undefined8 *)((longlong)IVar10 + 0x14) = uVar6;
    *(FGuid **)((longlong)IVar10 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar10 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar10 =
         &___7__TContextCacheElement_AEBU__TObjectPtr_VUMaterialInterface_____Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar10 + 0x30) = uVar2;
    pUVar3 = *(UObject **)(pFVar1 + (longlong)(int)uVar11 * 8);
    *(UObject **)((longlong)IVar10 + 0x38) = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
      *param_1 = IVar10;
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )(FContextCacheElementBase *)param_1;
    }
  }
  *param_1 = IVar10;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943900

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar7;
  IContextCacheStore IVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar10 = (uint)param_3;
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar6 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar7.Ptr = (FContextCacheElementBase *)(*pcVar2)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar7.Ptr;
    }
  }
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
  IVar8 = (IContextCacheStore)::operator_new(0x58);
  if (IVar8 != (IContextCacheStore)0x0) {
    *param_1 = IVar8;
    uVar1 = *in_stack_00000040;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar8 + 8) = 0;
    *(undefined8 *)((longlong)IVar8 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar8 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar8 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar8 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TSphere_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x38) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x40) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x48) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x50) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943a30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0xc0);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFDataflowRootProxyMesh___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FDataflowRootProxyMesh::FDataflowRootProxyMesh
              ((FDataflowRootProxyMesh *)((longlong)IVar9 + 0x40),
               (FDataflowRootProxyMesh *)(pFVar1 + (longlong)(int)uVar10 * 0x80));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943b70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0x68);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionAutoInstanceMesh___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FGeometryCollectionAutoInstanceMesh::FGeometryCollectionAutoInstanceMesh
              ((FGeometryCollectionAutoInstanceMesh *)((longlong)IVar9 + 0x38),
               (FGeometryCollectionAutoInstanceMesh *)(pFVar1 + (longlong)(int)uVar10 * 0x30));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943cb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  FScriptContainerElement *pFVar1;
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
  if (((int)uVar10 < 0) || ((this->Data).ArrayNum <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < (this->Data).ArrayNum) {
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
  pFVar1 = (this->Data).AllocatorInstance.Data;
  IVar9 = (IContextCacheStore)::operator_new(0xf0);
  if (IVar9 != (IContextCacheStore)0x0) {
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBUFGeometryCollectionSource___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    FGeometryCollectionSource::FGeometryCollectionSource
              ((FGeometryCollectionSource *)((longlong)IVar9 + 0x40),
               (FGeometryCollectionSource *)(pFVar1 + (longlong)(int)uVar10 * 0xb0));
    *param_1 = IVar9;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 14e943df0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (void *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong lVar1;
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
  if (((int)uVar10 < 0) || (*(int *)((longlong)this + 0x40) <= (int)uVar10)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar7 = 0;
  if ((int)uVar10 < *(int *)((longlong)this + 0x40)) {
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
  lVar1 = *(longlong *)((longlong)this + 0x38);
  IVar9 = (IContextCacheStore)::operator_new(0x40);
  if (IVar9 != (IContextCacheStore)0x0) {
    *param_1 = IVar9;
    uVar2 = *in_stack_00000040;
    uVar4 = *(undefined8 *)CONCAT44(in_stack_00000034,param_5);
    uVar5 = ((undefined8 *)CONCAT44(in_stack_00000034,param_5))[1];
    *(undefined4 *)((longlong)IVar9 + 8) = 0;
    *(undefined8 *)((longlong)IVar9 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar9 + 0x14) = uVar5;
    *(FGuid **)((longlong)IVar9 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar9 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBW4ERotationOrderEnum___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined1 *)((longlong)IVar9 + 0x38) = *(undefined1 *)((int)uVar10 + lVar1);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14e952a50

int __thiscall
UE::Dataflow::TContextCacheElement<double_&>::GetNumArrayElements
          (TContextCacheElement<double_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952a60

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::GetNumArrayElements
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952a70

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::GetNumArrayElements
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952a80

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952a90

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952aa0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::GetNumArrayElements
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952ab0

int __thiscall
UE::Dataflow::TContextCacheElement<bool_&>::GetNumArrayElements
          (TContextCacheElement<bool_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952ac0

int __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&>::GetNumArrayElements
          (TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952ad0

int __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterial>_const_&>::GetNumArrayElements
          (TContextCacheElement<TObjectPtr<UMaterial>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952ae0

int __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&>::GetNumArrayElements
          (TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952af0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TSphere<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TSphere<double>_const_&> *this,IContextCacheStore *param_1
          )

{
  return 0;
}

// GetNumArrayElements @ 14e952b00

int __thiscall
UE::Dataflow::TContextCacheElement<FDataflowRootProxyMesh_const_&>::GetNumArrayElements
          (TContextCacheElement<FDataflowRootProxyMesh_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952b10

int __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&>::GetNumArrayElements
          (TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952b20

int __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionSource_const_&>::GetNumArrayElements
          (TContextCacheElement<FGeometryCollectionSource_const_&> *this,IContextCacheStore *param_1
          )

{
  return 0;
}

// GetNumArrayElements @ 14e952b30

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952b40

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952b50

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952b60

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952b70

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952b80

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952b90

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952ba0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952bb0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952bc0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952bd0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952be0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::GetNumArrayElements
          (TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952bf0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c00

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c10

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c20

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c30

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c40

int __thiscall
UE::Dataflow::TContextCacheElement<enum_ERotationOrderEnum_const_&>::GetNumArrayElements
          (void *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952c50

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TBox<double>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14e952c60

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c70

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c80

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952c90

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952ca0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952cb0

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952cc0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14e952cd0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(void *this,IContextCacheStore *param_1)

{
  return *(int *)((longlong)this + 0x40);
}

// GetUntypedData @ 14e9532e0

void * __thiscall
UE::Dataflow::TContextCacheElement<double_&>::GetUntypedData
          (TContextCacheElement<double_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9532f0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::GetUntypedData
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953300

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::GetUntypedData
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953310

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953320

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953330

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::GetUntypedData(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953340

void * __thiscall
UE::Dataflow::TContextCacheElement<bool_&>::GetUntypedData
          (TContextCacheElement<bool_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953350

void * __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&>::GetUntypedData
          (TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953360

void * __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterial>_const_&>::GetUntypedData
          (TContextCacheElement<TObjectPtr<UMaterial>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953370

void * __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&>::GetUntypedData
          (TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953380

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TSphere<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TSphere<double>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953390

void * __thiscall
UE::Dataflow::TContextCacheElement<FDataflowRootProxyMesh_const_&>::GetUntypedData
          (TContextCacheElement<FDataflowRootProxyMesh_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9533a0

void * __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&>::GetUntypedData
          (TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9533b0

void * __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionSource_const_&>::GetUntypedData
          (TContextCacheElement<FGeometryCollectionSource_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9533c0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9533d0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9533e0

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9533f0

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953400

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953410

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953420

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953430

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953440

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953450

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953460

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953470

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::GetUntypedData(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953480

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953490

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9534a0

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9534b0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::
GetUntypedData(TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9534c0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::GetUntypedData
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9534d0

void * __thiscall
UE::Dataflow::TContextCacheElement<enum_ERotationOrderEnum_const_&>::GetUntypedData
          (void *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (void *)((longlong)this + 0x38);
}

// GetUntypedData @ 14e9534e0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_>::GetUntypedData
          (TContextCacheElement<UE::Math::TBox<double>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e9534f0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953500

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953510

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953520

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953530

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953540

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953550

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14e953560

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(void *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (void *)((longlong)this + 0x38);
}

// IsArray @ 14e955340

bool __thiscall
UE::Dataflow::TContextCacheElement<double_&>::IsArray
          (TContextCacheElement<double_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e955350

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&>::IsArray
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955360

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&>::IsArray
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955370

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&>::
IsArray(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955380

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>::IsArray
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955390

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
::IsArray(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_&>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9553a0

bool __thiscall
UE::Dataflow::TContextCacheElement<bool_&>::IsArray
          (TContextCacheElement<bool_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e9553b0

bool __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&>::IsArray
          (TContextCacheElement<TObjectPtr<UDynamicMesh>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e9553c0

bool __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterial>_const_&>::IsArray
          (TContextCacheElement<TObjectPtr<UMaterial>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e9553d0

bool __thiscall
UE::Dataflow::TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&>::IsArray
          (TContextCacheElement<TObjectPtr<UMaterialInterface>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e9553e0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TSphere<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TSphere<double>_const_&> *this,IContextCacheStore *param_1
          )

{
  return false;
}

// IsArray @ 14e9553f0

bool __thiscall
UE::Dataflow::TContextCacheElement<FDataflowRootProxyMesh_const_&>::IsArray
          (TContextCacheElement<FDataflowRootProxyMesh_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e955400

bool __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&>::IsArray
          (TContextCacheElement<FGeometryCollectionAutoInstanceMesh_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e955410

bool __thiscall
UE::Dataflow::TContextCacheElement<FGeometryCollectionSource_const_&>::IsArray
          (TContextCacheElement<FGeometryCollectionSource_const_&> *this,IContextCacheStore *param_1
          )

{
  return false;
}

// IsArray @ 14e955420

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955430

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955440

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955450

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955460

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955470

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>::
IsArray(TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
        *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955480

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955490

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>::
IsArray(TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_&>
        *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9554a0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9554b0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9554c0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9554d0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
::IsArray(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9554e0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9554f0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>::
IsArray(TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955500

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955510

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955520

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955530

bool __thiscall
UE::Dataflow::TContextCacheElement<enum_ERotationOrderEnum_const_&>::IsArray
          (void *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e955540

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TBox<double>_>::IsArray
          (TContextCacheElement<UE::Math::TBox<double>_> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 14e955550

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955560

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955570

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955580

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e955590

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9555a0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
        *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9555b0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 14e9555c0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<enum_ERotationOrderEnum,TSizedDefaultAllocator<32>_>_>::
IsArray(void *this,IContextCacheStore *param_1)

{
  return true;
}

