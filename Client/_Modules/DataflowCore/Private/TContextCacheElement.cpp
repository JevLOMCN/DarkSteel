// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 500

// TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> @ 144428410

TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
          TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *param_1)

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
       ___7__TContextCacheElement_AEBV__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<FText_const_&> @ 1444284d0

TContextCacheElement<FText_const_&> * __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::TContextCacheElement<FText_const_&>
          (TContextCacheElement<FText_const_&> *this,TContextCacheElement<FText_const_&> *param_1)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar6 = param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar7 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7__TContextCacheElement_AEBVFText___Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(int *)&this->_padding_ = (int)lVar6;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar7;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  (this->Data).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Data).TextData.Reference;
  (this->Data).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->Data).Flags = (param_1->Data).Flags;
  return this;
}

// TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 144428550

TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray_CV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 144428600

TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray_EV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> @ 1444286b0

TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray_FV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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
              (2,2,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

// TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 144428770

TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray_GV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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
              (2,2,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

// TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> @ 144428830

TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

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
       &___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 1444288f0

TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray_IV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> @ 1444289b0

TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1)

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
       &___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> @ 144428a70

TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *param_1)

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
       &___7__TContextCacheElement_V__TArray_NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 144428b30

TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this
          ,TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TIntPoint_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 144428bf0

TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> @ 144428cb0

TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TIntVector4_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 144428d70

TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *param_1
          )

{
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (0x10,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 144428e30

TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TQuat_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (0x20,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 144428ef0

TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TRotator_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 144428fb0

TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
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
       ___7__TContextCacheElement_V__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 144429070

TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 144429130

TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TVector2_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 1444291f0

TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (0x10,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 1444292b0

TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_U__TVector4_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (0x20,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
  }
  return this;
}

// TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 144429370

TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this
          ,TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
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
       ___7__TContextCacheElement_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 144429430

TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
           *this,TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
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
       ___7__TContextCacheElement_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 1444294f0

TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *param_1)

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
       ___7__TContextCacheElement_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 1444295b0

TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
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
       ___7__TContextCacheElement_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 144429670

TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_1)

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
       ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> @ 144429730

TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  FText *pFVar5;
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
       ___7__TContextCacheElement_V__TArray_VFText__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
  ;
  piVar2 = &(this->Data).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar6;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar8;
  this->_padding_ = lVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = (FText *)(param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FText,FText,int>((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_> @ 1444297f0

TContextCacheElement<TArray<EDataflowImageResolution,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TContextCacheElement<TArray<EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>
          *param_1)

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
       ___7__TContextCacheElement_V__TArray_W4EDataflowImageResolution__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
              (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x44));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 1444298b0

TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray__JV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 144429970

TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
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
       &___7__TContextCacheElement_V__TArray__KV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 144429a30

TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_1)

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
       &___7__TContextCacheElement_V__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_;
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

// TContextCacheElement<FText> @ 144429ae0

TContextCacheElement<FText> * __thiscall
UE::Dataflow::TContextCacheElement<FText>::TContextCacheElement<FText>
          (TContextCacheElement<FText> *this,TContextCacheElement<FText> *param_1)

{
  longlong lVar1;
  ITextData *pIVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar1 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar6 = param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar7 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7__TContextCacheElement_VFText___Dataflow_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  *(int *)&this->_padding_ = (int)lVar6;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
  *(int *)&this->_padding_ = (int)lVar7;
  *(int *)&this->_padding_ = (int)lVar5;
  this->_padding_ = lVar1;
  (this->Data).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Data).TextData.Reference;
  (this->Data).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->Data).Flags = (param_1->Data).Flags;
  return this;
}

// Clone @ 1444392c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int_&>::Clone
          (TContextCacheElement<int_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEAH_Dataflow_UE__6B_;
    *(int *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439350

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::Clone
          (TContextCacheElement<signed_char_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBC_Dataflow_UE__6B_;
    *(schar *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1444393e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::Clone
          (TContextCacheElement<unsigned_char_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBE_Dataflow_UE__6B_;
    *(uchar *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439470

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::Clone
          (TContextCacheElement<short_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBF_Dataflow_UE__6B_;
    *(short *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439500

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::Clone
          (TContextCacheElement<unsigned_short_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBG_Dataflow_UE__6B_;
    *(ushort *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439590

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::Clone
          (TContextCacheElement<int_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBH_Dataflow_UE__6B_;
    *(int *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439620

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::Clone
          (TContextCacheElement<unsigned_int_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBI_Dataflow_UE__6B_;
    *(uint *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1444396b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::Clone
          (TContextCacheElement<float_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBM_Dataflow_UE__6B_;
    *(float *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439740

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::Clone
          (TContextCacheElement<double_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBN_Dataflow_UE__6B_;
    *(double *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 1444397d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::Clone
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBU__TIntPoint_H_Math_UE___Dataflow_UE__6B_
    ;
    *(TIntPoint<int>_u_0 *)((longlong)IVar5 + 0x38) = (this->Data).field0_0x0;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439860

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::Clone
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x48);
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
         &___7__TContextCacheElement_AEBU__TIntVector3_H_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar5 + 0x38) = *(undefined8 *)&(this->Data).field0_0x0;
    *(int *)((longlong)IVar5 + 0x40) = (this->Data).field0_0x0._s_0.Z;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439900

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::Clone
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x48);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 =
         &___7__TContextCacheElement_AEBU__TIntVector4_H_Math_UE___Dataflow_UE__6B_;
    uVar3 = *(undefined8 *)&(this->Data).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
    *param_1 = IVar6;
    *(undefined8 *)((longlong)IVar6 + 0x38) = uVar3;
    *(undefined8 *)((longlong)IVar6 + 0x40) = uVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439990

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::Clone
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x50);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 = &___7__TContextCacheElement_AEBU__TQuat_M_Math_UE___Dataflow_UE__6B_;
    uVar3 = *(undefined8 *)&this->Data;
    uVar4 = *(undefined8 *)&(this->Data).Z;
    *param_1 = IVar6;
    *(undefined8 *)((longlong)IVar6 + 0x40) = uVar3;
    *(undefined8 *)((longlong)IVar6 + 0x48) = uVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439a20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x60);
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
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TQuat_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).X;
    dVar5 = (this->Data).Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x40) = dVar4;
    *(double *)((longlong)IVar7 + 0x48) = dVar5;
    dVar4 = (this->Data).W;
    *(double *)((longlong)IVar7 + 0x50) = (this->Data).Z;
    *(double *)((longlong)IVar7 + 0x58) = dVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439ab0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x50);
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
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TRotator_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).Pitch;
    dVar5 = (this->Data).Yaw;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    *(double *)((longlong)IVar7 + 0x48) = (this->Data).Roll;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439b40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0xa0);
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
    *(undefined ***)IVar7 =
         &___7__TContextCacheElement_AEBU__TTransform_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).Rotation.XY.m128d_f64[0];
    dVar5 = (this->Data).Rotation.XY.m128d_f64[1];
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x40) = dVar4;
    *(double *)((longlong)IVar7 + 0x48) = dVar5;
    dVar4 = (this->Data).Rotation.ZW.m128d_f64[1];
    *(double *)((longlong)IVar7 + 0x50) = (this->Data).Rotation.ZW.m128d_f64[0];
    *(double *)((longlong)IVar7 + 0x58) = dVar4;
    dVar4 = (this->Data).Translation.XY.m128d_f64[1];
    *(double *)((longlong)IVar7 + 0x60) = (this->Data).Translation.XY.m128d_f64[0];
    *(double *)((longlong)IVar7 + 0x68) = dVar4;
    dVar4 = (this->Data).Translation.ZW.m128d_f64[1];
    *(double *)((longlong)IVar7 + 0x70) = (this->Data).Translation.ZW.m128d_f64[0];
    *(double *)((longlong)IVar7 + 0x78) = dVar4;
    dVar4 = (this->Data).Scale3D.XY.m128d_f64[1];
    *(double *)((longlong)IVar7 + 0x80) = (this->Data).Scale3D.XY.m128d_f64[0];
    *(double *)((longlong)IVar7 + 0x88) = dVar4;
    dVar4 = (this->Data).Scale3D.ZW.m128d_f64[1];
    *(double *)((longlong)IVar7 + 0x90) = (this->Data).Scale3D.ZW.m128d_f64[0];
    *(double *)((longlong)IVar7 + 0x98) = dVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439c00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::Clone
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,IContextCacheStore *param_1
          )

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBU__TVector2_M_Math_UE___Dataflow_UE__6B_;
    *(TVector2<float>_u_0 *)((longlong)IVar5 + 0x38) = (this->Data).field0_0x0;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439c90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x48);
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
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TVector2_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).field0_0x0._s_0.X;
    dVar5 = (this->Data).field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439d20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::Clone
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,IContextCacheStore *param_1
          )

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x50);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 = &___7__TContextCacheElement_AEBU__TVector4_M_Math_UE___Dataflow_UE__6B_;
    uVar3 = *(undefined8 *)&(this->Data).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
    *param_1 = IVar6;
    *(undefined8 *)((longlong)IVar6 + 0x40) = uVar3;
    *(undefined8 *)((longlong)IVar6 + 0x48) = uVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439db0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x60);
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
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TVector4_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).field0_0x0._s_0.X;
    dVar5 = (this->Data).field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x40) = dVar4;
    *(double *)((longlong)IVar7 + 0x48) = dVar5;
    dVar4 = (this->Data).field0_0x0._s_0.W;
    *(double *)((longlong)IVar7 + 0x50) = (this->Data).field0_0x0._s_0.Z;
    *(double *)((longlong)IVar7 + 0x58) = dVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439e40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::Clone
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x48);
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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBU__TVector_M_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar5 + 0x38) = *(undefined8 *)&(this->Data).field0_0x0;
    *(float *)((longlong)IVar5 + 0x40) = (this->Data).field0_0x0._s_0.Z;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439ee0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::Clone
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,IContextCacheStore *param_1
          )

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  IContextCacheStore IVar7;
  
  IVar7 = (IContextCacheStore)::operator_new(0x50);
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
    *(undefined ***)IVar7 = &___7__TContextCacheElement_AEBU__TVector_N_Math_UE___Dataflow_UE__6B_;
    dVar4 = (this->Data).field0_0x0._s_0.X;
    dVar5 = (this->Data).field0_0x0._s_0.Y;
    *param_1 = IVar7;
    *(double *)((longlong)IVar7 + 0x38) = dVar4;
    *(double *)((longlong)IVar7 + 0x40) = dVar5;
    *(double *)((longlong)IVar7 + 0x48) = (this->Data).field0_0x0._s_0.Z;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 144439f70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::Clone
          (TContextCacheElement<FLinearColor_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x48);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 = &___7__TContextCacheElement_AEBUFLinearColor___Dataflow_UE__6B_;
    uVar3 = *(undefined8 *)&(this->Data).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
    *param_1 = IVar6;
    *(undefined8 *)((longlong)IVar6 + 0x38) = uVar3;
    *(undefined8 *)((longlong)IVar6 + 0x40) = uVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a000

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::Clone
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a060

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::Clone
          (TContextCacheElement<FName_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBVFName___Dataflow_UE__6B_;
    *(FName *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a0f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::Clone
          (TContextCacheElement<FString_const_&> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x48);
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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEBVFString___Dataflow_UE__6B_;
    ::FString::FString((FString *)((longlong)IVar5 + 0x38),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a190

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::Clone
          (TContextCacheElement<FText_const_&> *this,IContextCacheStore *param_1)

{
  TContextCacheElement<FText_const_&> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<FText_const_&> *)0x0) {
    IVar1 = (IContextCacheStore)TContextCacheElement<FText_const_&>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a1f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::Clone
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
    *(undefined ***)IVar5 =
         &___7__TContextCacheElement_AEBW4EDataflowImageResolution___Dataflow_UE__6B_;
    *(undefined4 *)((longlong)IVar5 + 0x38) = *(undefined4 *)((longlong)this + 0x38);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a280

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::Clone
          (TContextCacheElement<__int64_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEB_J_Dataflow_UE__6B_;
    *(long64 *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a310

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::Clone
          (TContextCacheElement<unsigned___int64_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEB_K_Dataflow_UE__6B_;
    *(ulong64 *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a3a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::Clone
          (TContextCacheElement<bool_const_&> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_AEB_N_Dataflow_UE__6B_;
    *(bool *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a430

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::Clone
          (TContextCacheElement<signed_char> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_C_Dataflow_UE__6B_;
    *(schar *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a4c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::Clone
          (TContextCacheElement<unsigned_char> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_E_Dataflow_UE__6B_;
    *(uchar *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a550

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<short>::Clone
          (TContextCacheElement<short> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_F_Dataflow_UE__6B_;
    *(short *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a5e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::Clone
          (TContextCacheElement<unsigned_short> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_G_Dataflow_UE__6B_;
    *(ushort *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a670

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int>::Clone
          (TContextCacheElement<int> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_H_Dataflow_UE__6B_;
    *(int *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a700

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::Clone
          (TContextCacheElement<unsigned_int> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_I_Dataflow_UE__6B_;
    *(uint *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a790

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float>::Clone
          (TContextCacheElement<float> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_M_Dataflow_UE__6B_;
    *(float *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a820

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double>::Clone
          (TContextCacheElement<double> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_N_Dataflow_UE__6B_;
    *(double *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a8b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::Clone
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x50);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 = &___7__TContextCacheElement_U__TQuat_M_Math_UE___Dataflow_UE__6B_;
    uVar3 = *(undefined8 *)&this->Data;
    uVar4 = *(undefined8 *)&(this->Data).Z;
    *param_1 = IVar6;
    *(undefined8 *)((longlong)IVar6 + 0x40) = uVar3;
    *(undefined8 *)((longlong)IVar6 + 0x48) = uVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a940

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::Clone
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_U__TVector2_M_Math_UE___Dataflow_UE__6B_;
    *(TVector2<float>_u_0 *)((longlong)IVar5 + 0x38) = (this->Data).field0_0x0;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443a9d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::Clone
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  IContextCacheStore IVar6;
  
  IVar6 = (IContextCacheStore)::operator_new(0x50);
  if (IVar6 != (IContextCacheStore)0x0) {
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar5 = this->_padding_;
    *(undefined8 *)((longlong)IVar6 + 0xc) = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar3;
    *(undefined4 *)((longlong)IVar6 + 8) = 0;
    *(longlong *)((longlong)IVar6 + 0x20) = lVar2;
    *(int *)((longlong)IVar6 + 0x28) = (int)lVar5;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar1;
    *(undefined ***)IVar6 = &___7__TContextCacheElement_U__TVector4_M_Math_UE___Dataflow_UE__6B_;
    uVar3 = *(undefined8 *)&(this->Data).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
    *param_1 = IVar6;
    *(undefined8 *)((longlong)IVar6 + 0x40) = uVar3;
    *(undefined8 *)((longlong)IVar6 + 0x48) = uVar4;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443aa60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::Clone
          (TContextCacheElement<UE::Math::TVector<float>_> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x48);
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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_U__TVector_M_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar5 + 0x38) = *(undefined8 *)&(this->Data).field0_0x0;
    *(float *)((longlong)IVar5 + 0x40) = (this->Data).field0_0x0._s_0.Z;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ab00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ab60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443abc0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ac20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ac80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ace0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ad40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ada0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ae00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443ae60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::Clone(TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443aec0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::Clone(TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443af20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443af80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443afe0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::Clone(TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b040

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b0a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b100

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::Clone(TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b160

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b1c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::Clone(TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b220

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b280

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
Clone(TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> *this,
     IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 !=
      (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b2e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b340

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b3a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b400

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b460

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::Clone
          (void *this,IContextCacheStore *param_1)

{
  void *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (void *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b4c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b520

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                      (this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b580

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::Clone
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IContextCacheStore)
            TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b5e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FName>::Clone
          (TContextCacheElement<FName> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_VFName___Dataflow_UE__6B_;
    *(FName *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b670

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString>::Clone
          (TContextCacheElement<FString> *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  IContextCacheStore IVar5;
  
  IVar5 = (IContextCacheStore)::operator_new(0x48);
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
    *(undefined ***)IVar5 = &___7__TContextCacheElement_VFString___Dataflow_UE__6B_;
    ::FString::FString((FString *)((longlong)IVar5 + 0x38),&this->Data);
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b710

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FText>::Clone
          (TContextCacheElement<FText> *this,IContextCacheStore *param_1)

{
  TContextCacheElement<FText> *this_00;
  IContextCacheStore IVar1;
  
  this_00 = ::operator_new(0x48);
  if (this_00 != (TContextCacheElement<FText> *)0x0) {
    IVar1 = (IContextCacheStore)TContextCacheElement<FText>(this_00,this);
    *param_1 = IVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b770

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<__int64>::Clone
          (TContextCacheElement<__int64> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement__J_Dataflow_UE__6B_;
    *(long64 *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b800

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::Clone
          (TContextCacheElement<unsigned___int64> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement__K_Dataflow_UE__6B_;
    *(ulong64 *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// Clone @ 14443b890

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool>::Clone
          (TContextCacheElement<bool> *this,IContextCacheStore *param_1)

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
    *(undefined ***)IVar5 = &___7__TContextCacheElement__N_Dataflow_UE__6B_;
    *(bool *)((longlong)IVar5 + 0x38) = this->Data;
    *param_1 = IVar5;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443d3a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int_&>::CreateArrayFromElement
          (TContextCacheElement<int_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  int iVar1;
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
  
  iVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(int *)local_18.Data = iVar1;
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
         &___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443d4b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::CreateArrayFromElement
          (TContextCacheElement<signed_char_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  schar local_res8 [8];
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
         &___7__TContextCacheElement_V__TArray_CV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443d5c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::CreateArrayFromElement
          (TContextCacheElement<unsigned_char_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  uchar local_res8 [8];
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
         &___7__TContextCacheElement_V__TArray_EV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443d6d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::CreateArrayFromElement
          (TContextCacheElement<short_const_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  short sVar1;
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
  
  sVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,1,0,&local_18,1,&iStack_c);
  *(short *)local_18.Data = sVar1;
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
         &___7__TContextCacheElement_V__TArray_FV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443d7e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::CreateArrayFromElement
          (TContextCacheElement<unsigned_short_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  ushort uVar1;
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
  
  uVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,1,0,&local_18,1,&iStack_c);
  *(ushort *)local_18.Data = uVar1;
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
         &___7__TContextCacheElement_V__TArray_GV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443d8f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::CreateArrayFromElement
          (TContextCacheElement<int_const_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  int iVar1;
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
  
  iVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(int *)local_18.Data = iVar1;
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
         &___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443da00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::CreateArrayFromElement
          (TContextCacheElement<unsigned_int_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  uint uVar1;
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
  
  uVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(uint *)local_18.Data = uVar1;
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
         &___7__TContextCacheElement_V__TArray_IV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443db10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::CreateArrayFromElement
          (TContextCacheElement<float_const_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  float fVar1;
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
  
  fVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(float *)local_18.Data = fVar1;
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
         &___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443dc20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::CreateArrayFromElement
          (TContextCacheElement<double_const_&> *this,IContextCacheStore *param_1,FProperty *param_2
          ,FGuid *param_3,uint param_4,FTimestamp *param_5)

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

// CreateArrayFromElement @ 14443dd30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  TIntPoint<int>_u_0 TVar1;
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
  
  TVar1 = (this->Data).field0_0x0;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18,1,&iStack_c);
  *(TIntPoint<int>_u_0 *)local_18.Data = TVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_U__TIntPoint_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
  if ((TIntPoint<int>_u_0 *)local_18.Data != (TIntPoint<int>_u_0 *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443de40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  iVar2 = (this->Data).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->Data).field0_0x0;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,&local_18,1,&iStack_c);
  *(undefined8 *)local_18.Data = uVar1;
  *(int *)(local_18.Data + 8) = iVar2;
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar5 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar1;
    *(undefined ***)IVar5 =
         &
         ___7__TContextCacheElement_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443df60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,
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
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *(undefined8 *)&(this->Data).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_38,1,&iStack_2c);
  *(undefined8 *)local_38.Data = local_28;
  *(undefined8 *)(local_38.Data + 8) = uStack_20;
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
         ___7__TContextCacheElement_V__TArray_U__TIntVector4_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e070

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28._0_4_ = (this->Data).X;
  local_28._4_4_ = (this->Data).Y;
  uStack_20._0_4_ = (this->Data).Z;
  uStack_20._4_4_ = (this->Data).W;
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,1,0,&local_38,1,&iStack_2c);
  *(undefined8 *)local_38.Data = local_28;
  *(undefined8 *)(local_38.Data + 8) = uStack_20;
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
         ___7__TContextCacheElement_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e180

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

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
  
  local_48 = (this->Data).X;
  dStack_40 = (this->Data).Y;
  local_38 = (this->Data).Z;
  dStack_30 = (this->Data).W;
  IVar5 = (IContextCacheStore)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,0x10,1,0,&local_58,1,&iStack_4c);
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
         ___7__TContextCacheElement_V__TArray_U__TQuat_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443e2b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_48;
  undefined4 local_40;
  int iStack_3c;
  double local_38;
  double dStack_30;
  
  local_38 = (this->Data).Pitch;
  dStack_30 = (this->Data).Yaw;
  dVar1 = (this->Data).Roll;
  IVar6 = (IContextCacheStore)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,0,&local_48,1,&iStack_3c);
  *(double *)local_48.Data = local_38;
  *(double *)(local_48.Data + 8) = dStack_30;
  *(double *)(local_48.Data + 0x10) = dVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_U__TRotator_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar5 + 0x38) = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar5 + 0x40) = local_40;
    *(int *)((longlong)IVar5 + 0x44) = iStack_3c;
    local_40 = 0;
    iStack_3c = 0;
    IVar6 = IVar5;
  }
  *param_1 = IVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,
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
  undefined1 auStackY_128 [32];
  ForAnyElementType local_e8;
  undefined4 local_e0;
  int iStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_d8 = (this->Data).Rotation.XY.m128d_f64[0];
  dStack_d0 = (this->Data).Rotation.XY.m128d_f64[1];
  local_c8 = (this->Data).Rotation.ZW.m128d_f64[0];
  dStack_c0 = (this->Data).Rotation.ZW.m128d_f64[1];
  local_b8 = (this->Data).Translation.XY.m128d_f64[0];
  dStack_b0 = (this->Data).Translation.XY.m128d_f64[1];
  IVar5 = (IContextCacheStore)0x0;
  local_a8 = (this->Data).Translation.ZW.m128d_f64[0];
  dStack_a0 = (this->Data).Translation.ZW.m128d_f64[1];
  local_98 = (this->Data).Scale3D.XY.m128d_f64[0];
  dStack_90 = (this->Data).Scale3D.XY.m128d_f64[1];
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_88 = (this->Data).Scale3D.ZW.m128d_f64[0];
  dStack_80 = (this->Data).Scale3D.ZW.m128d_f64[1];
  local_e0 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,1,0,&local_e8,1,&iStack_dc);
  *(double *)local_e8.Data = local_d8;
  *(double *)(local_e8.Data + 8) = dStack_d0;
  *(double *)(local_e8.Data + 0x10) = local_c8;
  *(double *)(local_e8.Data + 0x18) = dStack_c0;
  *(double *)(local_e8.Data + 0x20) = local_b8;
  *(double *)(local_e8.Data + 0x28) = dStack_b0;
  *(double *)(local_e8.Data + 0x30) = local_a8;
  *(double *)(local_e8.Data + 0x38) = dStack_a0;
  *(double *)(local_e8.Data + 0x40) = local_98;
  *(double *)(local_e8.Data + 0x48) = dStack_90;
  *(double *)(local_e8.Data + 0x50) = local_88;
  *(double *)(local_e8.Data + 0x58) = dStack_80;
  IVar4 = (IContextCacheStore)::operator_new(0x48);
  if (IVar4 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar2 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar3 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar4 + 0x28) = param_5._0_4_;
    *(undefined ***)IVar4 =
         &
         ___7__TContextCacheElement_V__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(undefined4 *)((longlong)IVar4 + 8) = 0;
    *(undefined8 *)((longlong)IVar4 + 0xc) = uVar2;
    *(undefined8 *)((longlong)IVar4 + 0x14) = uVar3;
    *(FGuid **)((longlong)IVar4 + 0x20) = param_3;
    *(undefined8 *)((longlong)IVar4 + 0x30) = uVar1;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_e8.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_e0;
    *(int *)((longlong)IVar4 + 0x44) = iStack_dc;
    local_e0 = 0;
    iStack_dc = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e590

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  TVector2<float>_u_0 TVar1;
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
  
  TVar1 = (this->Data).field0_0x0;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18,1,&iStack_c);
  *(TVector2<float>_u_0 *)local_18.Data = TVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
  if ((TVector2<float>_u_0 *)local_18.Data != (TVector2<float>_u_0 *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e6a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,
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
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  double local_28;
  double dStack_20;
  
  local_28 = (this->Data).field0_0x0._s_0.X;
  dStack_20 = (this->Data).field0_0x0._s_0.Y;
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_38,1,&iStack_2c);
  *(double *)local_38.Data = local_28;
  *(double *)(local_38.Data + 8) = dStack_20;
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
         ___7__TContextCacheElement_V__TArray_U__TVector2_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e7b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *(undefined8 *)&(this->Data).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,1,0,&local_38,1,&iStack_2c);
  *(undefined8 *)local_38.Data = local_28;
  *(undefined8 *)(local_38.Data + 8) = uStack_20;
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
         ___7__TContextCacheElement_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443e8c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,
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
  ForAnyElementType local_58;
  undefined4 local_50;
  int iStack_4c;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  local_48 = (this->Data).field0_0x0._s_0.X;
  dStack_40 = (this->Data).field0_0x0._s_0.Y;
  local_38 = (this->Data).field0_0x0._s_0.Z;
  dStack_30 = (this->Data).field0_0x0._s_0.W;
  IVar5 = (IContextCacheStore)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,0x10,1,0,&local_58,1,&iStack_4c);
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
         ___7__TContextCacheElement_V__TArray_U__TVector4_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443e9f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  fVar2 = (this->Data).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->Data).field0_0x0;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,&local_18,1,&iStack_c);
  *(undefined8 *)local_18.Data = uVar1;
  *(float *)(local_18.Data + 8) = fVar2;
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar5 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar1;
    *(undefined ***)IVar5 =
         &
         ___7__TContextCacheElement_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443eb10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_48;
  undefined4 local_40;
  int iStack_3c;
  double local_38;
  double dStack_30;
  
  local_38 = (this->Data).field0_0x0._s_0.X;
  dStack_30 = (this->Data).field0_0x0._s_0.Y;
  dVar1 = (this->Data).field0_0x0._s_0.Z;
  IVar6 = (IContextCacheStore)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,1,0,&local_48,1,&iStack_3c);
  *(double *)local_48.Data = local_38;
  *(double *)(local_48.Data + 8) = dStack_30;
  *(double *)(local_48.Data + 0x10) = dVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar5 + 0x38) = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar5 + 0x40) = local_40;
    *(int *)((longlong)IVar5 + 0x44) = iStack_3c;
    local_40 = 0;
    iStack_3c = 0;
    IVar6 = IVar5;
  }
  *param_1 = IVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443ec40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::CreateArrayFromElement
          (TContextCacheElement<FLinearColor_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *(undefined8 *)&(this->Data).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_38,1,&iStack_2c);
  *(undefined8 *)local_38.Data = local_28;
  *(undefined8 *)(local_38.Data + 8) = uStack_20;
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
         ___7__TContextCacheElement_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443ed50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
CreateArrayFromElement
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443ed70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::CreateArrayFromElement
          (TContextCacheElement<FName_const_&> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  FName FVar1;
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
  
  FVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18,1,&iStack_c);
  *(FName *)local_18.Data = FVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
  if ((FName *)local_18.Data != (FName *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443ee80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::CreateArrayFromElement
          (TContextCacheElement<FString_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  FScriptContainerElement *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  longlong lVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.ArrayNum = (this->Data).Data.ArrayNum;
  lVar6 = (longlong)local_18.Data.ArrayNum;
  IVar5 = (IContextCacheStore)0x0;
  _Src = (this->Data).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,1);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FString,FString,int>(local_28.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
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
         ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_20;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_20._4_4_;
    local_20 = 0;
    IVar5 = IVar4;
    local_20._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443f020

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::CreateArrayFromElement
          (TContextCacheElement<FText_const_&> *this,IContextCacheStore *param_1,FProperty *param_2,
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
  ForAnyElementType local_28;
  undefined8 local_20;
  FText local_18;
  
  local_18.TextData.Reference = (this->Data).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (this->Data).Flags;
  IVar5 = (IContextCacheStore)0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,1);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FText,FText,int>(local_28.Data,&local_18,1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
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
         ___7__TContextCacheElement_V__TArray_VFText__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_20;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_20._4_4_;
    local_20 = 0;
    IVar5 = IVar4;
    local_20._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FText,int>((FText *)local_28.Data,(int)local_20);
  if ((FText *)local_28.Data != (FText *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443f180

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::CreateArrayFromElement
          (void *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  undefined4 uVar1;
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
  
  uVar1 = *(undefined4 *)((longlong)this + 0x38);
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(undefined4 *)local_18.Data = uVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_W4EDataflowImageResolution__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443f290

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::CreateArrayFromElement
          (TContextCacheElement<__int64_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  long64 lVar1;
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
  
  lVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  *(long64 *)local_18.Data = lVar1;
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
         &
         ___7__TContextCacheElement_V__TArray__JV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443f3a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::CreateArrayFromElement
          (TContextCacheElement<unsigned___int64_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  ulong64 uVar1;
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
  
  uVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  *(ulong64 *)local_18.Data = uVar1;
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
         &
         ___7__TContextCacheElement_V__TArray__KV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443f4b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::CreateArrayFromElement
          (TContextCacheElement<bool_const_&> *this,IContextCacheStore *param_1,FProperty *param_2,
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

// CreateArrayFromElement @ 14443f5c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::CreateArrayFromElement
          (TContextCacheElement<signed_char> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  schar local_res8 [8];
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
         &___7__TContextCacheElement_V__TArray_CV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443f6d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::CreateArrayFromElement
          (TContextCacheElement<unsigned_char> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  uchar local_res8 [8];
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
         &___7__TContextCacheElement_V__TArray_EV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443f7e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<short>::CreateArrayFromElement
          (TContextCacheElement<short> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  short sVar1;
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
  
  sVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,1,0,&local_18,1,&iStack_c);
  *(short *)local_18.Data = sVar1;
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
         &___7__TContextCacheElement_V__TArray_FV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443f8f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::CreateArrayFromElement
          (TContextCacheElement<unsigned_short> *this,IContextCacheStore *param_1,FProperty *param_2
          ,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  ushort uVar1;
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
  
  uVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,1,0,&local_18,1,&iStack_c);
  *(ushort *)local_18.Data = uVar1;
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
         &___7__TContextCacheElement_V__TArray_GV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443fa00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int>::CreateArrayFromElement
          (TContextCacheElement<int> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  int iVar1;
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
  
  iVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(int *)local_18.Data = iVar1;
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
         &___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443fb10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::CreateArrayFromElement
          (TContextCacheElement<unsigned_int> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  uint uVar1;
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
  
  uVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(uint *)local_18.Data = uVar1;
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
         &___7__TContextCacheElement_V__TArray_IV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443fc20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float>::CreateArrayFromElement
          (TContextCacheElement<float> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  float fVar1;
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
  
  fVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18,1,&iStack_c);
  *(float *)local_18.Data = fVar1;
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
         &___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 14443fd30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double>::CreateArrayFromElement
          (TContextCacheElement<double> *this,IContextCacheStore *param_1,FProperty *param_2,
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

// CreateArrayFromElement @ 14443fe40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28._0_4_ = (this->Data).X;
  local_28._4_4_ = (this->Data).Y;
  uStack_20._0_4_ = (this->Data).Z;
  uStack_20._4_4_ = (this->Data).W;
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,1,0,&local_38,1,&iStack_2c);
  *(undefined8 *)local_38.Data = local_28;
  *(undefined8 *)(local_38.Data + 8) = uStack_20;
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
         ___7__TContextCacheElement_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 14443ff50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  TVector2<float>_u_0 TVar1;
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
  
  TVar1 = (this->Data).field0_0x0;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18,1,&iStack_c);
  *(TVector2<float>_u_0 *)local_18.Data = TVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
  if ((TVector2<float>_u_0 *)local_18.Data != (TVector2<float>_u_0 *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440060

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *(undefined8 *)&(this->Data).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(this->Data).field0_0x0 + 8);
  IVar5 = (IContextCacheStore)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,1,0,&local_38,1,&iStack_2c);
  *(undefined8 *)local_38.Data = local_28;
  *(undefined8 *)(local_38.Data + 8) = uStack_20;
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
         ___7__TContextCacheElement_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)IVar4 + 0x40) = local_30;
    *(int *)((longlong)IVar4 + 0x44) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    IVar5 = IVar4;
  }
  *param_1 = IVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440170

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::CreateArrayFromElement
          (TContextCacheElement<UE::Math::TVector<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IContextCacheStore IVar5;
  IContextCacheStore IVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_18;
  undefined4 local_10;
  int iStack_c;
  
  fVar2 = (this->Data).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->Data).field0_0x0;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,&local_18,1,&iStack_c);
  *(undefined8 *)local_18.Data = uVar1;
  *(float *)(local_18.Data + 8) = fVar2;
  IVar5 = (IContextCacheStore)::operator_new(0x48);
  if (IVar5 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000038;
    uVar3 = *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined4 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar5 + 0x14) = uVar4;
    *(FGuid **)((longlong)IVar5 + 0x20) = param_3;
    *(undefined4 *)((longlong)IVar5 + 0x28) = param_5._0_4_;
    *(undefined8 *)((longlong)IVar5 + 0x30) = uVar1;
    *(undefined ***)IVar5 =
         &
         ___7__TContextCacheElement_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 144440290

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444402b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444402d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444402f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440310

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateArrayFromElement
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440330

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440350

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440370

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440390

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this
          ,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444403b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444403d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444403f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440410

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440430

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440450

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440470

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440490

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444404b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444404d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444404f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this
          ,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440510

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440530

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440550

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440570

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440590

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444405b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (void *this,IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444405d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444405f0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440610

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::
CreateArrayFromElement
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440630

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FName>::CreateArrayFromElement
          (TContextCacheElement<FName> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  FName FVar1;
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
  
  FVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18,1,&iStack_c);
  *(FName *)local_18.Data = FVar1;
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
         &
         ___7__TContextCacheElement_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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
  if ((FName *)local_18.Data != (FName *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440740

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString>::CreateArrayFromElement
          (TContextCacheElement<FString> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  FScriptContainerElement *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  IContextCacheStore IVar4;
  IContextCacheStore IVar5;
  longlong lVar6;
  undefined4 in_stack_0000002c;
  undefined8 *in_stack_00000038;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.ArrayNum = (this->Data).Data.ArrayNum;
  lVar6 = (longlong)local_18.Data.ArrayNum;
  IVar5 = (IContextCacheStore)0x0;
  _Src = (this->Data).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,1);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FString,FString,int>(local_28.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
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
         ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_20;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_20._4_4_;
    local_20 = 0;
    IVar5 = IVar4;
    local_20._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 1444408e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FText>::CreateArrayFromElement
          (TContextCacheElement<FText> *this,IContextCacheStore *param_1,FProperty *param_2,
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
  ForAnyElementType local_28;
  undefined8 local_20;
  FText local_18;
  
  local_18.TextData.Reference = (this->Data).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (this->Data).Flags;
  IVar5 = (IContextCacheStore)0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,1);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_28,1,(int *)((longlong)&local_20 + 4));
  ConstructItems<FText,FText,int>(local_28.Data,&local_18,1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
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
         ___7__TContextCacheElement_V__TArray_VFText__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(FScriptContainerElement **)((longlong)IVar4 + 0x38) = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)IVar4 + 0x40) = (int)local_20;
    *(undefined4 *)((longlong)IVar4 + 0x44) = local_20._4_4_;
    local_20 = 0;
    IVar5 = IVar4;
    local_20._0_4_ = 0;
  }
  *param_1 = IVar5;
  DestructItems<FText,int>((FText *)local_28.Data,(int)local_20);
  if ((FText *)local_28.Data != (FText *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440a40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<__int64>::CreateArrayFromElement
          (TContextCacheElement<__int64> *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  long64 lVar1;
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
  
  lVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  *(long64 *)local_18.Data = lVar1;
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
         &
         ___7__TContextCacheElement_V__TArray__JV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 144440b50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::CreateArrayFromElement
          (TContextCacheElement<unsigned___int64> *this,IContextCacheStore *param_1,
          FProperty *param_2,FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  ulong64 uVar1;
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
  
  uVar1 = this->Data;
  IVar6 = (IContextCacheStore)0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18,1,&iStack_c);
  *(ulong64 *)local_18.Data = uVar1;
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
         &
         ___7__TContextCacheElement_V__TArray__KV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// CreateArrayFromElement @ 144440c60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool>::CreateArrayFromElement
          (TContextCacheElement<bool> *this,IContextCacheStore *param_1,FProperty *param_2,
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

// CreateFromArrayElement @ 1444413e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int_&>::CreateFromArrayElement
          (TContextCacheElement<int_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441400

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::CreateFromArrayElement
          (TContextCacheElement<signed_char_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441420

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::CreateFromArrayElement
          (TContextCacheElement<unsigned_char_const_&> *this,IContextCacheStore *param_1,int param_2
          ,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441440

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::CreateFromArrayElement
          (TContextCacheElement<short_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441460

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::CreateFromArrayElement
          (TContextCacheElement<unsigned_short_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441480

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::CreateFromArrayElement
          (TContextCacheElement<int_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444414a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::CreateFromArrayElement
          (TContextCacheElement<unsigned_int_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444414c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::CreateFromArrayElement
          (TContextCacheElement<float_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444414e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::CreateFromArrayElement
          (TContextCacheElement<double_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441500

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441520

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441540

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441560

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441580

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444415a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444415c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444415e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,IContextCacheStore *param_1
          ,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441600

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441620

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,IContextCacheStore *param_1
          ,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441640

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441660

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441680

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,IContextCacheStore *param_1
          ,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444416a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::CreateFromArrayElement
          (TContextCacheElement<FLinearColor_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444416c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
CreateFromArrayElement
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
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

// CreateFromArrayElement @ 1444417e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::CreateFromArrayElement
          (TContextCacheElement<FName_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441800

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::CreateFromArrayElement
          (TContextCacheElement<FString_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441820

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::CreateFromArrayElement
          (TContextCacheElement<FText_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441840

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::CreateFromArrayElement
          (void *this,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441860

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::CreateFromArrayElement
          (TContextCacheElement<__int64_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441880

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::CreateFromArrayElement
          (TContextCacheElement<unsigned___int64_const_&> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444418a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::CreateFromArrayElement
          (TContextCacheElement<bool_const_&> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444418c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::CreateFromArrayElement
          (TContextCacheElement<signed_char> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444418e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::CreateFromArrayElement
          (TContextCacheElement<unsigned_char> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441900

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<short>::CreateFromArrayElement
          (TContextCacheElement<short> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441920

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::CreateFromArrayElement
          (TContextCacheElement<unsigned_short> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441940

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<int>::CreateFromArrayElement
          (TContextCacheElement<int> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441960

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::CreateFromArrayElement
          (TContextCacheElement<unsigned_int> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441980

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<float>::CreateFromArrayElement
          (TContextCacheElement<float> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444419a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<double>::CreateFromArrayElement
          (TContextCacheElement<double> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444419c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444419e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441a00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441a20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::CreateFromArrayElement
          (TContextCacheElement<UE::Math::TVector<float>_> *this,IContextCacheStore *param_1,
          int param_2,FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441a40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBC_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(FScriptContainerElement *)((longlong)IVar9 + 0x38) = pFVar1[(int)uVar10];
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441b60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBE_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(FScriptContainerElement *)((longlong)IVar9 + 0x38) = pFVar1[(int)uVar10];
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441c80

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBF_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined2 *)((longlong)IVar9 + 0x38) = *(undefined2 *)(pFVar1 + (longlong)(int)uVar10 * 2);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441da0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBG_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined2 *)((longlong)IVar9 + 0x38) = *(undefined2 *)(pFVar1 + (longlong)(int)uVar10 * 2);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144441ec0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateFromArrayElement
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
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

// CreateFromArrayElement @ 144441fe0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBI_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined4 *)((longlong)IVar9 + 0x38) = *(undefined4 *)(pFVar1 + (longlong)(int)uVar10 * 4);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144442100

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
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

// CreateFromArrayElement @ 144442220

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
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

// CreateFromArrayElement @ 144442340

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this
          ,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBU__TIntPoint_H_Math_UE___Dataflow_UE__6B_
    ;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144442460

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
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
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBU__TIntVector3_H_Math_UE___Dataflow_UE__6B_;
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

// CreateFromArrayElement @ 144442590

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
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
    *(undefined ***)IVar8 =
         &___7__TContextCacheElement_AEBU__TIntVector4_H_Math_UE___Dataflow_UE__6B_;
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

// CreateFromArrayElement @ 1444426b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
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
  IVar8 = (IContextCacheStore)::operator_new(0x50);
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
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TQuat_M_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x40) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x48) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444427d0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this,
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
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
  IVar8 = (IContextCacheStore)::operator_new(0x60);
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
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TQuat_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x40) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x50) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x58) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144442900

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBU__TRotator_N_Math_UE___Dataflow_UE__6B_;
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

// CreateFromArrayElement @ 144442a30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
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

// CreateFromArrayElement @ 144442b90

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBU__TVector2_M_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144442cb0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
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
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TVector2_N_Math_UE___Dataflow_UE__6B_;
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

// CreateFromArrayElement @ 144442dd0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
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
  pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
  IVar8 = (IContextCacheStore)::operator_new(0x50);
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
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TVector4_M_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x40) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x48) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144442ef0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
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
  IVar8 = (IContextCacheStore)::operator_new(0x60);
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
    *(undefined ***)IVar8 = &___7__TContextCacheElement_AEBU__TVector4_N_Math_UE___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar8 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 8);
    *(undefined8 *)((longlong)IVar8 + 0x40) = *(undefined8 *)pFVar9;
    *(undefined8 *)((longlong)IVar8 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(pFVar9 + 0x18);
    *(undefined8 *)((longlong)IVar8 + 0x50) = *(undefined8 *)(pFVar9 + 0x10);
    *(undefined8 *)((longlong)IVar8 + 0x58) = uVar1;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443020

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this
          ,IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
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

// CreateFromArrayElement @ 144443150

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
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

// CreateFromArrayElement @ 144443280

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
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

// CreateFromArrayElement @ 1444433a0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEBVFName___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 1444434c0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
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

// CreateFromArrayElement @ 144443600

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,int param_2,FProperty *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint uVar10;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  TVar11;
  IContextCacheStore IVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  undefined4 in_stack_00000034;
  undefined8 *in_stack_00000040;
  
  uVar13 = (uint)param_3;
  if (((int)uVar13 < 0) || ((this->Data).ArrayNum <= (int)uVar13)) {
    *param_1 = (IContextCacheStore)0x0;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  uVar10 = 0;
  if ((int)uVar13 < (this->Data).ArrayNum) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      TVar11.Ptr = (FContextCacheElementBase *)(*pcVar3)();
      return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
              )TVar11.Ptr;
    }
  }
  pFVar14 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
  IVar12 = (IContextCacheStore)::operator_new(0x48);
  if (IVar12 != (IContextCacheStore)0x0) {
    uVar1 = *in_stack_00000040;
    puVar8 = (undefined4 *)CONCAT44(in_stack_00000034,param_5);
    uVar4 = *puVar8;
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(undefined4 *)((longlong)IVar12 + 8) = 0;
    *(undefined4 *)((longlong)IVar12 + 0xc) = uVar4;
    *(undefined4 *)((longlong)IVar12 + 0x10) = uVar5;
    *(undefined4 *)((longlong)IVar12 + 0x14) = uVar6;
    *(undefined4 *)((longlong)IVar12 + 0x18) = uVar7;
    *(FGuid **)((longlong)IVar12 + 0x20) = param_4;
    *(undefined4 *)((longlong)IVar12 + 0x28) = param_6._0_4_;
    *(undefined ***)IVar12 = &___7__TContextCacheElement_AEBVFText___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar12 + 0x30) = uVar1;
    *(undefined8 *)((longlong)IVar12 + 0x38) = 0;
    plVar2 = *(longlong **)pFVar14;
    *(longlong **)((longlong)IVar12 + 0x38) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,local_res20);
    }
    *(undefined4 *)((longlong)IVar12 + 0x40) = *(undefined4 *)(pFVar14 + 8);
    *param_1 = IVar12;
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443750

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::
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
    *(undefined ***)IVar9 =
         &___7__TContextCacheElement_AEBW4EDataflowImageResolution___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined4 *)((longlong)IVar9 + 0x38) = *(undefined4 *)(lVar1 + (longlong)(int)uVar10 * 4);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443870

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEB_J_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443990

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
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
    *(undefined ***)IVar9 = &___7__TContextCacheElement_AEB_K_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)IVar9 + 0x30) = uVar2;
    *(undefined8 *)((longlong)IVar9 + 0x38) = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 8);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443ab0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::
CreateFromArrayElement
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
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

// CreateFromArrayElement @ 144443bd0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FName>::CreateFromArrayElement
          (TContextCacheElement<FName> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443bf0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FString>::CreateFromArrayElement
          (TContextCacheElement<FString> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443c10

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<FText>::CreateFromArrayElement
          (TContextCacheElement<FText> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443c30

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<__int64>::CreateFromArrayElement
          (TContextCacheElement<__int64> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443c50

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::CreateFromArrayElement
          (TContextCacheElement<unsigned___int64> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443c70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::TContextCacheElement<bool>::CreateFromArrayElement
          (TContextCacheElement<bool> *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14444c1c0

int __thiscall
UE::Dataflow::TContextCacheElement<int_&>::GetNumArrayElements
          (TContextCacheElement<int_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c1d0

int __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::GetNumArrayElements
          (TContextCacheElement<signed_char_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c1e0

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::GetNumArrayElements
          (TContextCacheElement<unsigned_char_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c1f0

int __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::GetNumArrayElements
          (TContextCacheElement<short_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c200

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::GetNumArrayElements
          (TContextCacheElement<unsigned_short_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c210

int __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::GetNumArrayElements
          (TContextCacheElement<int_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c220

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::GetNumArrayElements
          (TContextCacheElement<unsigned_int_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c230

int __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::GetNumArrayElements
          (TContextCacheElement<float_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c240

int __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::GetNumArrayElements
          (TContextCacheElement<double_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c250

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c260

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c270

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c280

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c290

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c2a0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c2b0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c2c0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,IContextCacheStore *param_1
          )

{
  return 0;
}

// GetNumArrayElements @ 14444c2d0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c2e0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,IContextCacheStore *param_1
          )

{
  return 0;
}

// GetNumArrayElements @ 14444c2f0

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c300

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c310

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,IContextCacheStore *param_1
          )

{
  return 0;
}

// GetNumArrayElements @ 14444c320

int __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::GetNumArrayElements
          (TContextCacheElement<FLinearColor_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c330

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
GetNumArrayElements(TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c340

int __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::GetNumArrayElements
          (TContextCacheElement<FName_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c350

int __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::GetNumArrayElements
          (TContextCacheElement<FString_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c360

int __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::GetNumArrayElements
          (TContextCacheElement<FText_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c370

int __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::GetNumArrayElements
          (void *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c380

int __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::GetNumArrayElements
          (TContextCacheElement<__int64_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c390

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::GetNumArrayElements
          (TContextCacheElement<unsigned___int64_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c3a0

int __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::GetNumArrayElements
          (TContextCacheElement<bool_const_&> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c3b0

int __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::GetNumArrayElements
          (TContextCacheElement<signed_char> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c3c0

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::GetNumArrayElements
          (TContextCacheElement<unsigned_char> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c3d0

int __thiscall
UE::Dataflow::TContextCacheElement<short>::GetNumArrayElements
          (TContextCacheElement<short> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c3e0

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::GetNumArrayElements
          (TContextCacheElement<unsigned_short> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c3f0

int __thiscall
UE::Dataflow::TContextCacheElement<int>::GetNumArrayElements
          (TContextCacheElement<int> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c400

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::GetNumArrayElements
          (TContextCacheElement<unsigned_int> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c410

int __thiscall
UE::Dataflow::TContextCacheElement<float>::GetNumArrayElements
          (TContextCacheElement<float> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c420

int __thiscall
UE::Dataflow::TContextCacheElement<double>::GetNumArrayElements
          (TContextCacheElement<double> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c430

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c440

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c450

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c460

int __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::GetNumArrayElements
          (TContextCacheElement<UE::Math::TVector<float>_> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c470

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c480

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c490

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c4a0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c4b0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c4c0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c4d0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c4e0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c4f0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c500

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::GetNumArrayElements
          (TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c510

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::GetNumArrayElements
          (TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c520

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c530

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c540

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::GetNumArrayElements
          (TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c550

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c560

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c570

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::GetNumArrayElements
          (TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c580

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c590

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::GetNumArrayElements
          (TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c5a0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c5b0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c5c0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c5d0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c5e0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c5f0

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c600

int __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(void *this,IContextCacheStore *param_1)

{
  return *(int *)((longlong)this + 0x40);
}

// GetNumArrayElements @ 14444c610

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
                   IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c620

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
GetNumArrayElements(TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                    *this,IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c630

int __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNumArrayElements
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return (this->Data).ArrayNum;
}

// GetNumArrayElements @ 14444c640

int __thiscall
UE::Dataflow::TContextCacheElement<FName>::GetNumArrayElements
          (TContextCacheElement<FName> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c650

int __thiscall
UE::Dataflow::TContextCacheElement<FString>::GetNumArrayElements
          (TContextCacheElement<FString> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c660

int __thiscall
UE::Dataflow::TContextCacheElement<FText>::GetNumArrayElements
          (TContextCacheElement<FText> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c670

int __thiscall
UE::Dataflow::TContextCacheElement<__int64>::GetNumArrayElements
          (TContextCacheElement<__int64> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c680

int __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::GetNumArrayElements
          (TContextCacheElement<unsigned___int64> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetNumArrayElements @ 14444c690

int __thiscall
UE::Dataflow::TContextCacheElement<bool>::GetNumArrayElements
          (TContextCacheElement<bool> *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetUntypedData @ 14444e680

void * __thiscall
UE::Dataflow::TContextCacheElement<int_&>::GetUntypedData
          (TContextCacheElement<int_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e690

void * __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::GetUntypedData
          (TContextCacheElement<signed_char_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e6a0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::GetUntypedData
          (TContextCacheElement<unsigned_char_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e6b0

void * __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::GetUntypedData
          (TContextCacheElement<short_const_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e6c0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::GetUntypedData
          (TContextCacheElement<unsigned_short_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e6d0

void * __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::GetUntypedData
          (TContextCacheElement<int_const_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e6e0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::GetUntypedData
          (TContextCacheElement<unsigned_int_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e6f0

void * __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::GetUntypedData
          (TContextCacheElement<float_const_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e700

void * __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::GetUntypedData
          (TContextCacheElement<double_const_&> *this,IContextCacheStore *param_1,FProperty *param_2
          )

{
  return &this->Data;
}

// GetUntypedData @ 14444e710

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e720

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e730

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e740

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e750

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e760

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e770

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e780

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e790

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e7a0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e7b0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e7c0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e7d0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,IContextCacheStore *param_1
          ,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e7e0

void * __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::GetUntypedData
          (TContextCacheElement<FLinearColor_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e7f0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::GetUntypedData
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e800

void * __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::GetUntypedData
          (TContextCacheElement<FName_const_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e810

void * __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::GetUntypedData
          (TContextCacheElement<FString_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e820

void * __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::GetUntypedData
          (TContextCacheElement<FText_const_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e830

void * __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::GetUntypedData
          (void *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (void *)((longlong)this + 0x38);
}

// GetUntypedData @ 14444e840

void * __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::GetUntypedData
          (TContextCacheElement<__int64_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e850

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::GetUntypedData
          (TContextCacheElement<unsigned___int64_const_&> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e860

void * __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::GetUntypedData
          (TContextCacheElement<bool_const_&> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e870

void * __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::GetUntypedData
          (TContextCacheElement<signed_char> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e880

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::GetUntypedData
          (TContextCacheElement<unsigned_char> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e890

void * __thiscall
UE::Dataflow::TContextCacheElement<short>::GetUntypedData
          (TContextCacheElement<short> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e8a0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::GetUntypedData
          (TContextCacheElement<unsigned_short> *this,IContextCacheStore *param_1,FProperty *param_2
          )

{
  return &this->Data;
}

// GetUntypedData @ 14444e8b0

void * __thiscall
UE::Dataflow::TContextCacheElement<int>::GetUntypedData
          (TContextCacheElement<int> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e8c0

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::GetUntypedData
          (TContextCacheElement<unsigned_int> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e8d0

void * __thiscall
UE::Dataflow::TContextCacheElement<float>::GetUntypedData
          (TContextCacheElement<float> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e8e0

void * __thiscall
UE::Dataflow::TContextCacheElement<double>::GetUntypedData
          (TContextCacheElement<double> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e8f0

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::GetUntypedData
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e900

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e910

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e920

void * __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::GetUntypedData
          (TContextCacheElement<UE::Math::TVector<float>_> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e930

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e940

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e950

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e960

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e970

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e980

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e990

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e9a0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e9b0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e9c0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::GetUntypedData(TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e9d0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::GetUntypedData(TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e9e0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444e9f0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea00

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::GetUntypedData(TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea10

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea20

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea30

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea40

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea50

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                 *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea60

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea70

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
               *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea80

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444ea90

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eaa0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eab0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eac0

void * __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(void *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (void *)((longlong)this + 0x38);
}

// GetUntypedData @ 14444ead0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eae0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
GetUntypedData(TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
              IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eaf0

void * __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetUntypedData
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eb00

void * __thiscall
UE::Dataflow::TContextCacheElement<FName>::GetUntypedData
          (TContextCacheElement<FName> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eb10

void * __thiscall
UE::Dataflow::TContextCacheElement<FString>::GetUntypedData
          (TContextCacheElement<FString> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eb20

void * __thiscall
UE::Dataflow::TContextCacheElement<FText>::GetUntypedData
          (TContextCacheElement<FText> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eb30

void * __thiscall
UE::Dataflow::TContextCacheElement<__int64>::GetUntypedData
          (TContextCacheElement<__int64> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eb40

void * __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::GetUntypedData
          (TContextCacheElement<unsigned___int64> *this,IContextCacheStore *param_1,
          FProperty *param_2)

{
  return &this->Data;
}

// GetUntypedData @ 14444eb50

void * __thiscall
UE::Dataflow::TContextCacheElement<bool>::GetUntypedData
          (TContextCacheElement<bool> *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return &this->Data;
}

// IsArray @ 144450e30

bool __thiscall
UE::Dataflow::TContextCacheElement<int_&>::IsArray
          (TContextCacheElement<int_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450e40

bool __thiscall
UE::Dataflow::TContextCacheElement<signed_char_const_&>::IsArray
          (TContextCacheElement<signed_char_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450e50

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char_const_&>::IsArray
          (TContextCacheElement<unsigned_char_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450e60

bool __thiscall
UE::Dataflow::TContextCacheElement<short_const_&>::IsArray
          (TContextCacheElement<short_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450e70

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short_const_&>::IsArray
          (TContextCacheElement<unsigned_short_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450e80

bool __thiscall
UE::Dataflow::TContextCacheElement<int_const_&>::IsArray
          (TContextCacheElement<int_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450e90

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int_const_&>::IsArray
          (TContextCacheElement<unsigned_int_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450ea0

bool __thiscall
UE::Dataflow::TContextCacheElement<float_const_&>::IsArray
          (TContextCacheElement<float_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450eb0

bool __thiscall
UE::Dataflow::TContextCacheElement<double_const_&>::IsArray
          (TContextCacheElement<double_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450ec0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntPoint<int>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TIntPoint<int>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450ed0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector3<int>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TIntVector3<int>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450ee0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TIntVector4<int>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TIntVector4<int>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450ef0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TQuat<float>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f00

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TQuat<double>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f10

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TRotator<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TRotator<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f20

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TTransform<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TTransform<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f30

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TVector2<float>_const_&> *this,IContextCacheStore *param_1
          )

{
  return false;
}

// IsArray @ 144450f40

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TVector2<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f50

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TVector4<float>_const_&> *this,IContextCacheStore *param_1
          )

{
  return false;
}

// IsArray @ 144450f60

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TVector4<double>_const_&> *this,
          IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f70

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TVector<float>_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450f80

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<double>_const_&>::IsArray
          (TContextCacheElement<UE::Math::TVector<double>_const_&> *this,IContextCacheStore *param_1
          )

{
  return false;
}

// IsArray @ 144450f90

bool __thiscall
UE::Dataflow::TContextCacheElement<FLinearColor_const_&>::IsArray
          (TContextCacheElement<FLinearColor_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450fa0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::IsArray
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_const_&> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144450fb0

bool __thiscall
UE::Dataflow::TContextCacheElement<FName_const_&>::IsArray
          (TContextCacheElement<FName_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450fc0

bool __thiscall
UE::Dataflow::TContextCacheElement<FString_const_&>::IsArray
          (TContextCacheElement<FString_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450fd0

bool __thiscall
UE::Dataflow::TContextCacheElement<FText_const_&>::IsArray
          (TContextCacheElement<FText_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450fe0

bool __thiscall
UE::Dataflow::TContextCacheElement<enum_EDataflowImageResolution_const_&>::IsArray
          (void *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144450ff0

bool __thiscall
UE::Dataflow::TContextCacheElement<__int64_const_&>::IsArray
          (TContextCacheElement<__int64_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451000

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64_const_&>::IsArray
          (TContextCacheElement<unsigned___int64_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451010

bool __thiscall
UE::Dataflow::TContextCacheElement<bool_const_&>::IsArray
          (TContextCacheElement<bool_const_&> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451020

bool __thiscall
UE::Dataflow::TContextCacheElement<signed_char>::IsArray
          (TContextCacheElement<signed_char> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451030

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned_char>::IsArray
          (TContextCacheElement<unsigned_char> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451040

bool __thiscall
UE::Dataflow::TContextCacheElement<short>::IsArray
          (TContextCacheElement<short> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451050

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned_short>::IsArray
          (TContextCacheElement<unsigned_short> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451060

bool __thiscall
UE::Dataflow::TContextCacheElement<int>::IsArray
          (TContextCacheElement<int> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451070

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned_int>::IsArray
          (TContextCacheElement<unsigned_int> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451080

bool __thiscall
UE::Dataflow::TContextCacheElement<float>::IsArray
          (TContextCacheElement<float> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451090

bool __thiscall
UE::Dataflow::TContextCacheElement<double>::IsArray
          (TContextCacheElement<double> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444510a0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TQuat<float>_>::IsArray
          (TContextCacheElement<UE::Math::TQuat<float>_> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444510b0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector2<float>_>::IsArray
          (TContextCacheElement<UE::Math::TVector2<float>_> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444510c0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector4<float>_>::IsArray
          (TContextCacheElement<UE::Math::TVector4<float>_> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444510d0

bool __thiscall
UE::Dataflow::TContextCacheElement<UE::Math::TVector<float>_>::IsArray
          (TContextCacheElement<UE::Math::TVector<float>_> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444510e0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444510f0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451100

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451110

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451120

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451130

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451140

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451150

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<double,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451160

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451170

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::IsArray(TContextCacheElement<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451180

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::IsArray(TContextCacheElement<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451190

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444511a0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444511b0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::IsArray(TContextCacheElement<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444511c0

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
           *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444511d0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444511e0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::IsArray(TContextCacheElement<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444511f0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451200

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::IsArray(TContextCacheElement<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451210

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451220

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>::
IsArray(TContextCacheElement<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> *this,
       IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451230

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451240

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451250

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451260

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<FText,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451270

bool __thiscall
UE::Dataflow::
TContextCacheElement<TArray<enum_EDataflowImageResolution,TSizedDefaultAllocator<32>_>_>::IsArray
          (void *this,IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451280

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<__int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 144451290

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444512a0

bool __thiscall
UE::Dataflow::TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_>::IsArray
          (TContextCacheElement<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          IContextCacheStore *param_1)

{
  return true;
}

// IsArray @ 1444512b0

bool __thiscall
UE::Dataflow::TContextCacheElement<FName>::IsArray
          (TContextCacheElement<FName> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444512c0

bool __thiscall
UE::Dataflow::TContextCacheElement<FString>::IsArray
          (TContextCacheElement<FString> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444512d0

bool __thiscall
UE::Dataflow::TContextCacheElement<FText>::IsArray
          (TContextCacheElement<FText> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444512e0

bool __thiscall
UE::Dataflow::TContextCacheElement<__int64>::IsArray
          (TContextCacheElement<__int64> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 1444512f0

bool __thiscall
UE::Dataflow::TContextCacheElement<unsigned___int64>::IsArray
          (TContextCacheElement<unsigned___int64> *this,IContextCacheStore *param_1)

{
  return false;
}

// IsArray @ 144451300

bool __thiscall
UE::Dataflow::TContextCacheElement<bool>::IsArray
          (TContextCacheElement<bool> *this,IContextCacheStore *param_1)

{
  return false;
}

