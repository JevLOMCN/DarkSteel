// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 6

// GetRawArray @ 1443813a0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_>::GetRawArray
          (TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_> *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar4;
  TArrayView<UE::Math::TVector<float>,int> *pTVar5;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this->ArrayPtr;
  if ((this_00 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
     ((int)this_00->_padding_ == 0)) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,param_1)
    ;
    pTVar4 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,0);
    __return_storage_ptr__->DataPtr = pTVar4;
    iVar1 = this->ArrayPtr->NumElements;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRawArray @ 144381430

TArrayView<FVertexID,int> * __thiscall
TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_>::GetRawArray
          (TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_> *this,
          TArrayView<FVertexID,int> *__return_storage_ptr__,int param_1)

{
  TMeshAttributeArraySet<FVertexID> *this_00;
  code *pcVar1;
  bool bVar2;
  TArrayView<FVertexID,int> *pTVar3;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  FVertexID *pFVar4;
  int iVar5;
  
  if (this->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Extent > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                       ,0x484,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FVertexID,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = (TMeshAttributeArraySet<FVertexID> *)this->ArrayPtr;
  if ((this_00 == (TMeshAttributeArraySet<FVertexID> *)0x0) || ((int)this_00->_padding_ == 0)) {
    __return_storage_ptr__->DataPtr = (FVertexID *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,param_1);
    pFVar4 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,0);
    __return_storage_ptr__->DataPtr = pFVar4;
    iVar5 = this->ArrayPtr->NumElements * this->Extent;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArrayView<FVertexID,int> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRawArray @ 144381510

TArrayView<FVertexInstanceID,int> * __thiscall
TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_>::GetRawArray
          (TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_> *this,
          TArrayView<FVertexInstanceID,int> *__return_storage_ptr__,int param_1)

{
  TMeshAttributeArraySet<FVertexInstanceID> *this_00;
  code *pcVar1;
  bool bVar2;
  TArrayView<FVertexInstanceID,int> *pTVar3;
  TMeshAttributeArrayBase<FVertexInstanceID> *this_01;
  FVertexInstanceID *pFVar4;
  int iVar5;
  
  if (this->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Extent > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                       ,0x484,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FVertexInstanceID,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = (TMeshAttributeArraySet<FVertexInstanceID> *)this->ArrayPtr;
  if ((this_00 == (TMeshAttributeArraySet<FVertexInstanceID> *)0x0) ||
     ((int)this_00->_padding_ == 0)) {
    __return_storage_ptr__->DataPtr = (FVertexInstanceID *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<FVertexInstanceID>::GetArrayForChannel(this_00,param_1);
    pFVar4 = TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase(this_01,0);
    __return_storage_ptr__->DataPtr = pFVar4;
    iVar5 = this->ArrayPtr->NumElements * this->Extent;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArrayView<FVertexInstanceID,int> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRawArray @ 1443815f0

TArrayView<float,int> * __thiscall
TMeshAttributesRef<FVertexInstanceID,float>::GetRawArray
          (TMeshAttributesRef<FVertexInstanceID,float> *this,
          TArrayView<float,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TMeshAttributeArraySet<float> *this_00;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<float> *this_01;
  float *pfVar4;
  TArrayView<float,int> *pTVar5;
  
  this_00 = (TMeshAttributeArraySet<float> *)this->ArrayPtr;
  if ((this_00 == (TMeshAttributeArraySet<float> *)0x0) || ((int)this_00->_padding_ == 0)) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_00,param_1);
    pfVar4 = TMeshAttributeArrayBase<float>::GetElementBase(this_01,0);
    __return_storage_ptr__->DataPtr = pfVar4;
    iVar1 = this->ArrayPtr->NumElements;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<float,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRawArray @ 144381680

TArrayView<UE::Math::TVector2<float>,int> * __thiscall
TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_>::GetRawArray
          (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> *this,
          TArrayView<UE::Math::TVector2<float>,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float> *pTVar4;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar5;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this->ArrayPtr;
  if ((this_00 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) ||
     ((int)this_00->_padding_ == 0)) {
    __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                        (this_00,param_1);
    pTVar4 = TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_01,0);
    __return_storage_ptr__->DataPtr = pTVar4;
    iVar1 = this->ArrayPtr->NumElements;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRawArray @ 144381710

TArrayView<UE::Math::TVector<float>,int> * __thiscall
TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>::GetRawArray
          (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar4;
  TArrayView<UE::Math::TVector<float>,int> *pTVar5;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this->ArrayPtr;
  if ((this_00 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
     ((int)this_00->_padding_ == 0)) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,param_1)
    ;
    pTVar4 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,0);
    __return_storage_ptr__->DataPtr = pTVar4;
    iVar1 = this->ArrayPtr->NumElements;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

