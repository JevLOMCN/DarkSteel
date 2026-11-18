// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 78

// CopyToEmpty<UE::Math::TBox<float>,int> @ 14e3685a0

void __thiscall
TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>::CopyToEmpty<UE::Math::TBox<float>,int>
          (TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *this,TBox<float> *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x1c);
  }
  return;
}

// CopyToEmpty<UE::Math::TBox<double>,int> @ 14e368630

void __thiscall
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::CopyToEmpty<UE::Math::TBox<double>,int>
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *this,TBox<double> *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x38);
  }
  return;
}

// CopyToEmpty<UE::Math::TBoxSphereBounds<float,float>,int> @ 14e3686c0

void __thiscall
TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TBoxSphereBounds<float,float>,int>
          (TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *this,
          TBoxSphereBounds<float,float> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x1c);
  }
  return;
}

// CopyToEmpty<UE::Math::TBoxSphereBounds<double,double>,int> @ 14e368750

void __thiscall
TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TBoxSphereBounds<double,double>,int>
          (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *this,
          TBoxSphereBounds<double,double> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x38);
  }
  return;
}

// CopyToEmpty<UE::Math::TSphere<float>,int> @ 14e3687e0

void __thiscall
TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TSphere<float>,int>
          (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *this,
          TSphere<float> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 4);
  }
  return;
}

// CopyToEmpty<UE::Math::TSphere<double>,int> @ 14e368870

void __thiscall
TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TSphere<double>,int>
          (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *this,
          TSphere<double> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 5);
  }
  return;
}

// CopyToEmpty<FOrientedBox,int> @ 14e368900

void __thiscall
TArray<FOrientedBox,TSizedDefaultAllocator<32>_>::CopyToEmpty<FOrientedBox,int>
          (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *this,FOrientedBox *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x78,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x78);
  }
  return;
}

// TArray<short,TSizedDefaultAllocator<32>_> @ 14e3e8ea0

TArray<short,TSizedDefaultAllocator<32>_> * __thiscall
TArray<short,TSizedDefaultAllocator<32>_>::TArray<short,TSizedDefaultAllocator<32>_>
          (TArray<short,TSizedDefaultAllocator<32>_> *this,initializer_list<short> *param_1)

{
  short *_Src;
  short *psVar1;
  int iVar2;
  
  _Src = param_1->_First;
  psVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)psVar1 - (longlong)_Src >> 1);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 2);
  return this;
}

// TArray<unsigned_short,TSizedDefaultAllocator<32>_> @ 14e3e8f30

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
TArray<unsigned_short,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *this,
          initializer_list<unsigned_short> *param_1)

{
  ushort *_Src;
  ushort *puVar1;
  int iVar2;
  
  _Src = param_1->_First;
  puVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)puVar1 - (longlong)_Src >> 1);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 2);
  return this;
}

// TArray<double,TSizedDefaultAllocator<32>_> @ 14e3e8fc0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
TArray<double,TSizedDefaultAllocator<32>_>::TArray<double,TSizedDefaultAllocator<32>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *this,initializer_list<double> *param_1)

{
  double *_Src;
  double *pdVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pdVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pdVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> @ 14e3e9050

TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TBox2<float>_> *param_1)

{
  TBox2<float> *_Src;
  TBox2<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(((longlong)pTVar1 - (longlong)_Src) / 0x14);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x14);
  return this;
}

// TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> @ 14e3e9110

TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TBox2<double>_> *param_1)

{
  TBox2<double> *_Src;
  TBox2<double> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(((longlong)pTVar1 - (longlong)_Src) / 0x28);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x28);
  return this;
}

// TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> @ 14e3e91d0

TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TIntPoint<int>_> *param_1)

{
  TIntPoint<int> *_Src;
  TIntPoint<int> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> @ 14e3e9270

TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TIntRect<int>_> *param_1)

{
  TIntRect<int> *pTVar1;
  TIntRect<int> *pTVar2;
  int iVar3;
  
  pTVar1 = param_1->_First;
  pTVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pTVar2 - (longlong)pTVar1 >> 4);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<UE::Math::TIntRect<int>,UE::Math::TIntRect<int>,int>
            ((this->AllocatorInstance).Data,pTVar1,iVar3);
  return this;
}

// TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> @ 14e3e9300

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TIntVector3<int>_> *param_1)

{
  TIntVector3<int> *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 1) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> @ 14e3e93b0

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TMatrix<float>_> *param_1)

{
  TMatrix<float> *_Src;
  TMatrix<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 6);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 6);
  return this;
}

// TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> @ 14e3e9450

TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TMatrix<double>_> *param_1)

{
  TMatrix<double> *_Src;
  TMatrix<double> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 7);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x80,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 7);
  return this;
}

// TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> @ 14e3e94f0

TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TPlane<float>_> *param_1)

{
  TPlane<float> *_Src;
  TPlane<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> @ 14e3e9580

TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TPlane<double>_> *param_1)

{
  TPlane<double> *_Src;
  TPlane<double> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 5);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 5);
  return this;
}

// TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> @ 14e3e9620

TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TQuat<float>_> *param_1)

{
  TQuat<float> *_Src;
  TQuat<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> @ 14e3e96b0

TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TQuat<double>_> *param_1)

{
  TQuat<double> *_Src;
  TQuat<double> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 5);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 5);
  return this;
}

// TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> @ 14e3e9750

TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TRotator<float>_> *param_1)

{
  TRotator<float> *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 1) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  return this;
}

// TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> @ 14e3e9800

TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TRotator<double>_> *param_1)

{
  TRotator<double> *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 2) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
  return this;
}

// TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> @ 14e3e98c0

TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TSphere<float>_> *param_1)

{
  TSphere<float> *_Src;
  TSphere<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> @ 14e3e9960

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TTransform<float>_> *param_1)

{
  TTransform<float> *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 3) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x30);
  return this;
}

// TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> @ 14e3e9a20

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TTransform<double>_> *param_1)

{
  TTransform<double> *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 4) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x60);
  return this;
}

// TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> @ 14e3e9ae0

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TVector2<float>_> *param_1)

{
  TVector2<float> *_Src;
  TVector2<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> @ 14e3e9b80

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TVector2<double>_> *param_1)

{
  TVector2<double> *_Src;
  TVector2<double> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> @ 14e3e9c20

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TVector4<float>_> *param_1)

{
  TVector4<float> *_Src;
  TVector4<float> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> @ 14e3e9cb0

TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UE::Math::TVector4<double>_> *param_1)

{
  TVector4<double> *_Src;
  TVector4<double> *pTVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pTVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pTVar1 - (longlong)_Src >> 5);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,0x10,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 5);
  return this;
}

// TArray<FColor,TSizedDefaultAllocator<32>_> @ 14e3e9d50

TArray<FColor,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FColor,TSizedDefaultAllocator<32>_>::TArray<FColor,TSizedDefaultAllocator<32>_>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *this,initializer_list<FColor> *param_1)

{
  FColor *_Src;
  FColor *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<FDateTime,TSizedDefaultAllocator<32>_> @ 14e3e9de0

TArray<FDateTime,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDateTime,TSizedDefaultAllocator<32>_>::TArray<FDateTime,TSizedDefaultAllocator<32>_>
          (TArray<FDateTime,TSizedDefaultAllocator<32>_> *this,initializer_list<FDateTime> *param_1)

{
  FDateTime *_Src;
  FDateTime *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<FFrameNumber,TSizedDefaultAllocator<32>_> @ 14e3e9e70

TArray<FFrameNumber,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::TArray<FFrameNumber,TSizedDefaultAllocator<32>_>
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FFrameNumber> *param_1)

{
  FFrameNumber *_Src;
  FFrameNumber *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<FFrameRate,TSizedDefaultAllocator<32>_> @ 14e3e9f00

TArray<FFrameRate,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFrameRate,TSizedDefaultAllocator<32>_>::TArray<FFrameRate,TSizedDefaultAllocator<32>_>
          (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FFrameRate> *param_1)

{
  FFrameRate *_Src;
  FFrameRate *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<FFrameTime,TSizedDefaultAllocator<32>_> @ 14e3e9fa0

TArray<FFrameTime,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFrameTime,TSizedDefaultAllocator<32>_>::TArray<FFrameTime,TSizedDefaultAllocator<32>_>
          (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FFrameTime> *param_1)

{
  FFrameTime *_Src;
  FFrameTime *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<FGuid,TSizedDefaultAllocator<32>_> @ 14e3ea040

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::TArray<FGuid,TSizedDefaultAllocator<32>_>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,initializer_list<FGuid> *param_1)

{
  FGuid *_Src;
  FGuid *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 4);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// TArray<FOrientedBox,TSizedDefaultAllocator<32>_> @ 14e3ea0e0

TArray<FOrientedBox,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOrientedBox,TSizedDefaultAllocator<32>_>::TArray<FOrientedBox,TSizedDefaultAllocator<32>_>
          (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FOrientedBox> *param_1)

{
  FOrientedBox *_Src;
  int iVar1;
  longlong lVar2;
  
  _Src = param_1->_First;
  lVar2 = (longlong)param_1->_Last - (longlong)_Src;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  lVar2 = lVar2 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8);
  iVar1 = (int)(lVar2 >> 6) - (int)(lVar2 >> 0x3f);
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x78,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x78);
  return this;
}

// TArray<FRandomStream,TSizedDefaultAllocator<32>_> @ 14e3ea190

TArray<FRandomStream,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRandomStream,TSizedDefaultAllocator<32>_>::TArray<FRandomStream,TSizedDefaultAllocator<32>_>
          (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FRandomStream> *param_1)

{
  FRandomStream *_Src;
  FRandomStream *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> @ 14e3ea230

TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FSoftObjectPath> *param_1)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 5);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// TArray<FTimespan,TSizedDefaultAllocator<32>_> @ 14e3ea2c0

TArray<FTimespan,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTimespan,TSizedDefaultAllocator<32>_>::TArray<FTimespan,TSizedDefaultAllocator<32>_>
          (TArray<FTimespan,TSizedDefaultAllocator<32>_> *this,initializer_list<FTimespan> *param_1)

{
  FTimespan *_Src;
  FTimespan *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<FTwoVectors,TSizedDefaultAllocator<32>_> @ 14e3ea350

TArray<FTwoVectors,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTwoVectors,TSizedDefaultAllocator<32>_>::TArray<FTwoVectors,TSizedDefaultAllocator<32>_>
          (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FTwoVectors> *param_1)

{
  FTwoVectors *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 3) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x30);
  return this;
}

// TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> @ 14e3ea410

TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>::TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>
          (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FVector2DHalf> *param_1)

{
  FVector2DHalf *_Src;
  FVector2DHalf *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,2,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_> @ 14e3ea4b0

TArray<TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
::
TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
          (void *this,
          initializer_list<TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type>_>
          *param_1)

{
  TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type> *_Src;
  int iVar1;
  
  _Src = param_1->_First;
  iVar1 = *(int *)&param_1->_Last - (int)_Src;
  *(undefined8 *)this = 0;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1);
  return this;
}

// TArray<FFloat16,TSizedDefaultAllocator<32>_> @ 14e3ea540

TArray<FFloat16,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFloat16,TSizedDefaultAllocator<32>_>::TArray<FFloat16,TSizedDefaultAllocator<32>_>
          (TArray<FFloat16,TSizedDefaultAllocator<32>_> *this,initializer_list<FFloat16> *param_1)

{
  FFloat16 *_Src;
  FFloat16 *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 1);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 2);
  return this;
}

// TArray<FName,TSizedDefaultAllocator<32>_> @ 14e3ea5d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::TArray<FName,TSizedDefaultAllocator<32>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,initializer_list<FName> *param_1)

{
  FName *_Src;
  FName *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pFVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<__int64,TSizedDefaultAllocator<32>_> @ 14e3ea790

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::TArray<__int64,TSizedDefaultAllocator<32>_>
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,initializer_list<__int64> *param_1)

{
  long64 *_Src;
  long64 *plVar1;
  int iVar2;
  
  _Src = param_1->_First;
  plVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)plVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TArray<unsigned___int64,TSizedDefaultAllocator<32>_> @ 14e3ea820

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          initializer_list<unsigned___int64> *param_1)

{
  ulong64 *_Src;
  ulong64 *puVar1;
  int iVar2;
  
  _Src = param_1->_First;
  puVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)puVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// ~TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> @ 14e402550

void __thiscall
TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> @ 14e402570

void __thiscall
TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> @ 14e402590

void __thiscall
TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> @ 14e4025b0

void __thiscall
TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> @ 14e4025d0

void __thiscall
TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> @ 14e4025f0

void __thiscall
TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> @ 14e402610

void __thiscall
TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> @ 14e402630

void __thiscall
TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> @ 14e402650

void __thiscall
TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> @ 14e402670

void __thiscall
TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> @ 14e402690

void __thiscall
TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> @ 14e4026b0

void __thiscall
TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> @ 14e4026d0

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> @ 14e4026f0

void __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> @ 14e402710

void __thiscall
TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FDateTime,TSizedDefaultAllocator<32>_> @ 14e402730

void __thiscall
TArray<FDateTime,TSizedDefaultAllocator<32>_>::~TArray<FDateTime,TSizedDefaultAllocator<32>_>
          (TArray<FDateTime,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FFrameNumber,TSizedDefaultAllocator<32>_> @ 14e402750

void __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::~TArray<FFrameNumber,TSizedDefaultAllocator<32>_>
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FFrameRate,TSizedDefaultAllocator<32>_> @ 14e402770

void __thiscall
TArray<FFrameRate,TSizedDefaultAllocator<32>_>::~TArray<FFrameRate,TSizedDefaultAllocator<32>_>
          (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FFrameTime,TSizedDefaultAllocator<32>_> @ 14e402790

void __thiscall
TArray<FFrameTime,TSizedDefaultAllocator<32>_>::~TArray<FFrameTime,TSizedDefaultAllocator<32>_>
          (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FGuid,TSizedDefaultAllocator<32>_> @ 14e4027b0

void __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::~TArray<FGuid,TSizedDefaultAllocator<32>_>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FOrientedBox,TSizedDefaultAllocator<32>_> @ 14e4027d0

void __thiscall
TArray<FOrientedBox,TSizedDefaultAllocator<32>_>::~TArray<FOrientedBox,TSizedDefaultAllocator<32>_>
          (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FRandomStream,TSizedDefaultAllocator<32>_> @ 14e4027f0

void __thiscall
TArray<FRandomStream,TSizedDefaultAllocator<32>_>::
~TArray<FRandomStream,TSizedDefaultAllocator<32>_>
          (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FTimespan,TSizedDefaultAllocator<32>_> @ 14e402810

void __thiscall
TArray<FTimespan,TSizedDefaultAllocator<32>_>::~TArray<FTimespan,TSizedDefaultAllocator<32>_>
          (TArray<FTimespan,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FTwoVectors,TSizedDefaultAllocator<32>_> @ 14e402830

void __thiscall
TArray<FTwoVectors,TSizedDefaultAllocator<32>_>::~TArray<FTwoVectors,TSizedDefaultAllocator<32>_>
          (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> @ 14e402850

void __thiscall
TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>::
~TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>
          (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_> @ 14e402870

void __thiscall
TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
::
~TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArray<FFloat16,TSizedDefaultAllocator<32>_> @ 14e402890

void __thiscall
TArray<FFloat16,TSizedDefaultAllocator<32>_>::~TArray<FFloat16,TSizedDefaultAllocator<32>_>
          (TArray<FFloat16,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<__int64,TSizedDefaultAllocator<32>_> @ 14e4028f0

void __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::~TArray<__int64,TSizedDefaultAllocator<32>_>
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddZeroed @ 14e40fe40

long64 __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::AddZeroed
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,long64 param_1)

{
  long64 lVar1;
  
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + lVar1,0,param_1);
  return lVar1;
}

// AddZeroed @ 14e40feb0

int __thiscall
TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// SetNum @ 14e45f4a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

