// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 27

// TArrayView<int_const_,int><int_const_> @ 14db22fe0

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::TArrayView<int_const_,int><int_const_>
          (TArrayView<int_const_,int> *this,int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<int_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<int_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<float_const_,int><float_const_> @ 14db23030

TArrayView<float_const_,int> * __thiscall
TArrayView<float_const_,int>::TArrayView<float_const_,int><float_const_>
          (TArrayView<float_const_,int> *this,float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TIntVector2<int>_const_,int><UE::Math::TIntVector2<int>_const_> @ 14db23080

TArrayView<UE::Math::TIntVector2<int>_const_,int> * __thiscall
TArrayView<UE::Math::TIntVector2<int>_const_,int>::
TArrayView<UE::Math::TIntVector2<int>_const_,int><UE::Math::TIntVector2<int>_const_>
          (TArrayView<UE::Math::TIntVector2<int>_const_,int> *this,TIntVector2<int> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TIntVector2<int>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TIntVector3<int>_const_,int><UE::Math::TIntVector3<int>_const_> @ 14db23160

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
TArrayView<UE::Math::TIntVector3<int>_const_,int>::
TArrayView<UE::Math::TIntVector3<int>_const_,int><UE::Math::TIntVector3<int>_const_>
          (TArrayView<UE::Math::TIntVector3<int>_const_,int> *this,TIntVector3<int> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TIntVector3<int>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TVector2<float>_const_,int><UE::Math::TVector2<float>_const_> @ 14db231b0

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
TArrayView<UE::Math::TVector2<float>_const_,int>::
TArrayView<UE::Math::TVector2<float>_const_,int><UE::Math::TVector2<float>_const_>
          (TArrayView<UE::Math::TVector2<float>_const_,int> *this,TVector2<float> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TVector<float>_const_,int><UE::Math::TVector<float>_const_> @ 14db23200

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
TArrayView<UE::Math::TVector<float>_const_,int>::
TArrayView<UE::Math::TVector<float>_const_,int><UE::Math::TVector<float>_const_>
          (TArrayView<UE::Math::TVector<float>_const_,int> *this,TVector<float> *param_1,int param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<FLinearColor_const_,int><FLinearColor_const_> @ 14db23250

TArrayView<FLinearColor_const_,int> * __thiscall
TArrayView<FLinearColor_const_,int>::TArrayView<FLinearColor_const_,int><FLinearColor_const_>
          (TArrayView<FLinearColor_const_,int> *this,FLinearColor *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FLinearColor_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FLinearColor_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_> @ 14db24410

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_>
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_> @ 14db24460

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int>::
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_>
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_> @ 14db244b0

TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>::
TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_>
          (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
           *this,TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,int param_2
          )

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_> @ 14db24500

TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>::
TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_>
          (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
           *this,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_> @ 14db24550

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>::
TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_>
          (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
           *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<int,int><int> @ 14db245a0

TArrayView<int,int> * __thiscall
TArrayView<int,int>::TArrayView<int,int><int>(TArrayView<int,int> *this,int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<int,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<int,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TIntVector2<int>,int><UE::Math::TIntVector2<int>_> @ 14db245f0

TArrayView<UE::Math::TIntVector2<int>,int> * __thiscall
TArrayView<UE::Math::TIntVector2<int>,int>::
TArrayView<UE::Math::TIntVector2<int>,int><UE::Math::TIntVector2<int>_>
          (TArrayView<UE::Math::TIntVector2<int>,int> *this,TIntVector2<int> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TIntVector2<int>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TIntVector2<int>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TIntVector3<int>,int><UE::Math::TIntVector3<int>_> @ 14db24640

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
TArrayView<UE::Math::TIntVector3<int>,int>::
TArrayView<UE::Math::TIntVector3<int>,int><UE::Math::TIntVector3<int>_>
          (TArrayView<UE::Math::TIntVector3<int>,int> *this,TIntVector3<int> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TVector2<float>,int><UE::Math::TVector2<float>_> @ 14db24690

TArrayView<UE::Math::TVector2<float>,int> * __thiscall
TArrayView<UE::Math::TVector2<float>,int>::
TArrayView<UE::Math::TVector2<float>,int><UE::Math::TVector2<float>_>
          (TArrayView<UE::Math::TVector2<float>,int> *this,TVector2<float> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UE::Math::TVector<float>,int><UE::Math::TVector<float>_> @ 14db246e0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
TArrayView<UE::Math::TVector<float>,int>::
TArrayView<UE::Math::TVector<float>,int><UE::Math::TVector<float>_>
          (TArrayView<UE::Math::TVector<float>,int> *this,TVector<float> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TVector<float>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<FLinearColor,int><FLinearColor> @ 14db24730

TArrayView<FLinearColor,int> * __thiscall
TArrayView<FLinearColor,int>::TArrayView<FLinearColor,int><FLinearColor>
          (TArrayView<FLinearColor,int> *this,FLinearColor *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FLinearColor,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FLinearColor,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14db258f0

TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int>::
TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14db25940

TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int>::
TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14db25990

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>::
TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// operator[] @ 14db3bc10

TIntVector3<int> * __thiscall
TArrayView<UE::Math::TIntVector3<int>_const_,int>::operator[]
          (TArrayView<UE::Math::TIntVector3<int>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TIntVector3<int> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Right @ 14db6c4e0

TArrayView<int,int> * __thiscall
TArrayView<int,int>::Right
          (TArrayView<int,int> *this,TArrayView<int,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int,int> *pTVar5;
  int iVar6;
  
  iVar1 = this->ArrayNum;
  iVar4 = iVar1;
  if (param_1 < iVar1) {
    iVar4 = param_1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = this->DataPtr + ((longlong)iVar1 - (longlong)iVar6);
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Right @ 14db6c560

TArrayView<float,int> * __thiscall
TArrayView<float,int>::Right
          (TArrayView<float,int> *this,TArrayView<float,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<float,int> *pTVar5;
  int iVar6;
  
  iVar1 = this->ArrayNum;
  iVar4 = iVar1;
  if (param_1 < iVar1) {
    iVar4 = param_1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = this->DataPtr + ((longlong)iVar1 - (longlong)iVar6);
  if (iVar6 < 0) {
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
  return __return_storage_ptr__;
}

// Right @ 14db6c5e0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
TArrayView<UE::Math::TVector<float>,int>::Right
          (TArrayView<UE::Math::TVector<float>,int> *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>,int> *pTVar5;
  int iVar6;
  
  iVar1 = this->ArrayNum;
  iVar4 = iVar1;
  if (param_1 < iVar1) {
    iVar4 = param_1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = this->DataPtr + ((longlong)iVar1 - (longlong)iVar6);
  if (iVar6 < 0) {
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
  return __return_storage_ptr__;
}

// Right @ 14db6c660

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::Right
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar5;
  int iVar6;
  
  iVar1 = this->ArrayNum;
  iVar4 = iVar1;
  if (param_1 < iVar1) {
    iVar4 = param_1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = this->DataPtr + ((longlong)iVar1 - (longlong)iVar6);
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Right @ 14db6c6e0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::Right
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar5;
  int iVar6;
  
  iVar1 = this->ArrayNum;
  iVar4 = iVar1;
  if (param_1 < iVar1) {
    iVar4 = param_1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->DataPtr = this->DataPtr + ((longlong)iVar1 - (longlong)iVar6);
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

