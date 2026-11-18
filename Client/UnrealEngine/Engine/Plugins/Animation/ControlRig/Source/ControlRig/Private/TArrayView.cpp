// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 33

// operator[] @ 14a22a300

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a2e24d0

FRigElementWeight * __thiscall
TArrayView<FRigElementWeight_const_,int>::operator[]
          (TArrayView<FRigElementWeight_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigElementWeight *pFVar4;
  
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
      pFVar4 = (FRigElementWeight *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FBoolParameterNameAndCurve_const_,int><TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_> @ 14a383890

TArrayView<FBoolParameterNameAndCurve_const_,int> * __thiscall
TArrayView<FBoolParameterNameAndCurve_const_,int>::
TArrayView<FBoolParameterNameAndCurve_const_,int><TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FBoolParameterNameAndCurve_const_,int> *this,
          TArray<FBoolParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FBoolParameterNameAndCurve_const_,int> *pTVar4;
  
  this->DataPtr = (FBoolParameterNameAndCurve *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FBoolParameterNameAndCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FColorParameterNameAndCurves_const_,int><TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_> @ 14a383900

TArrayView<FColorParameterNameAndCurves_const_,int> * __thiscall
TArrayView<FColorParameterNameAndCurves_const_,int>::
TArrayView<FColorParameterNameAndCurves_const_,int><TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FColorParameterNameAndCurves_const_,int> *this,
          TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FColorParameterNameAndCurves_const_,int> *pTVar4;
  
  this->DataPtr = (FColorParameterNameAndCurves *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FColorParameterNameAndCurves_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FEnumParameterNameAndCurve_const_,int><TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_> @ 14a383970

TArrayView<FEnumParameterNameAndCurve_const_,int> * __thiscall
TArrayView<FEnumParameterNameAndCurve_const_,int>::
TArrayView<FEnumParameterNameAndCurve_const_,int><TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FEnumParameterNameAndCurve_const_,int> *this,
          TArray<FEnumParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FEnumParameterNameAndCurve_const_,int> *pTVar4;
  
  this->DataPtr = (FEnumParameterNameAndCurve *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FEnumParameterNameAndCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FIntegerParameterNameAndCurve_const_,int><TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_> @ 14a3839e0

TArrayView<FIntegerParameterNameAndCurve_const_,int> * __thiscall
TArrayView<FIntegerParameterNameAndCurve_const_,int>::
TArrayView<FIntegerParameterNameAndCurve_const_,int><TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FIntegerParameterNameAndCurve_const_,int> *this,
          TArray<FIntegerParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FIntegerParameterNameAndCurve_const_,int> *pTVar4;
  
  this->DataPtr = (FIntegerParameterNameAndCurve *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FIntegerParameterNameAndCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FScalarParameterNameAndCurve_const_,int><TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_> @ 14a383a50

TArrayView<FScalarParameterNameAndCurve_const_,int> * __thiscall
TArrayView<FScalarParameterNameAndCurve_const_,int>::
TArrayView<FScalarParameterNameAndCurve_const_,int><TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_const_&,TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FScalarParameterNameAndCurve_const_,int> *this,
          TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FScalarParameterNameAndCurve_const_,int> *pTVar4;
  
  this->DataPtr = (FScalarParameterNameAndCurve *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FScalarParameterNameAndCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FTransformParameterNameAndCurves_const_,int><TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_> @ 14a383ac0

TArrayView<FTransformParameterNameAndCurves_const_,int> * __thiscall
TArrayView<FTransformParameterNameAndCurves_const_,int>::
TArrayView<FTransformParameterNameAndCurves_const_,int><TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FTransformParameterNameAndCurves_const_,int> *this,
          TArray<FTransformParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FTransformParameterNameAndCurves_const_,int> *pTVar4;
  
  this->DataPtr = (FTransformParameterNameAndCurves *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FTransformParameterNameAndCurves_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FVector2DParameterNameAndCurves_const_,int><TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_> @ 14a383b30

TArrayView<FVector2DParameterNameAndCurves_const_,int> * __thiscall
TArrayView<FVector2DParameterNameAndCurves_const_,int>::
TArrayView<FVector2DParameterNameAndCurves_const_,int><TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVector2DParameterNameAndCurves_const_,int> *this,
          TArray<FVector2DParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVector2DParameterNameAndCurves_const_,int> *pTVar4;
  
  this->DataPtr = (FVector2DParameterNameAndCurves *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FVector2DParameterNameAndCurves_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FVectorParameterNameAndCurves_const_,int><TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_> @ 14a383ba0

TArrayView<FVectorParameterNameAndCurves_const_,int> * __thiscall
TArrayView<FVectorParameterNameAndCurves_const_,int>::
TArrayView<FVectorParameterNameAndCurves_const_,int><TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_const_&,TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVectorParameterNameAndCurves_const_,int> *this,
          TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FVectorParameterNameAndCurves_const_,int> *pTVar4;
  
  this->DataPtr = (FVectorParameterNameAndCurves *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FVectorParameterNameAndCurves_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14a3beac0

TQuat<float> * __thiscall
TArrayView<UE::Math::TQuat<float>,int>::operator[]
          (TArrayView<UE::Math::TQuat<float>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TQuat<float> *pTVar4;
  
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
      pTVar4 = (TQuat<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3beb40

TTransform<float> * __thiscall
TArrayView<UE::Math::TTransform<float>,int>::operator[]
          (TArrayView<UE::Math::TTransform<float>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<float> *pTVar4;
  
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
      pTVar4 = (TTransform<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bebc0

TWeakObjectPtr<UObject,FWeakObjectPtr> * __thiscall
TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int>::operator[]
          (TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar4;
  
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
      pTVar4 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bec40

FInstancedStruct * __thiscall
TArrayView<FInstancedStruct,int>::operator[](TArrayView<FInstancedStruct,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInstancedStruct *pFVar4;
  
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
      pFVar4 = (FInstancedStruct *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3becc0

FLinearColor * __thiscall
TArrayView<FLinearColor,int>::operator[](TArrayView<FLinearColor,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLinearColor *pFVar4;
  
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
      pFVar4 = (FLinearColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bed40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigComponentKey * __thiscall
TArrayView<FRigComponentKey,int>::operator[](TArrayView<FRigComponentKey,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigComponentKey *pFVar4;
  
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
      pFVar4 = (FRigComponentKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bedc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TArrayView<FRigElementKey,int>::operator[](TArrayView<FRigElementKey,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigElementKey *pFVar4;
  
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
      pFVar4 = (FRigElementKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bee40

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3beec0

TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bef40

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3befc0

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bf040

TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bf0c0

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bf140

TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bf1c0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<FName,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<FName,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bf240

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a3bf2c0

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<bool,TSizedDefaultAllocator<32>_>,int>::operator[]
          (TArrayView<TArray<bool,TSizedDefaultAllocator<32>_>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a51af30

FAimTarget * __thiscall
TArrayView<FAimTarget_const_,int>::operator[](TArrayView<FAimTarget_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAimTarget *pFVar4;
  
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
      pFVar4 = (FAimTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a51afb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FConstraintParent * __thiscall
TArrayView<FConstraintParent_const_,int>::operator[]
          (TArrayView<FConstraintParent_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstraintParent *pFVar4;
  
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
      pFVar4 = (FConstraintParent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a51b030

FConstraintTarget * __thiscall
TArrayView<FConstraintTarget_const_,int>::operator[]
          (TArrayView<FConstraintTarget_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstraintTarget *pFVar4;
  
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
      pFVar4 = (FConstraintTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a51b0b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TArrayView<FRigElementKey_const_,int>::operator[]
          (TArrayView<FRigElementKey_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigElementKey *pFVar4;
  
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
      pFVar4 = (FRigElementKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a51b130

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_Harmonics_TargetItem * __thiscall
TArrayView<FRigUnit_Harmonics_TargetItem_const_,int>::operator[]
          (TArrayView<FRigUnit_Harmonics_TargetItem_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigUnit_Harmonics_TargetItem *pFVar4;
  
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
      pFVar4 = (FRigUnit_Harmonics_TargetItem *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14a51b1b0

FRigUnit_MultiFABRIK_EndEffector * __thiscall
TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int>::operator[]
          (TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigUnit_MultiFABRIK_EndEffector *pFVar4;
  
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
      pFVar4 = (FRigUnit_MultiFABRIK_EndEffector *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

