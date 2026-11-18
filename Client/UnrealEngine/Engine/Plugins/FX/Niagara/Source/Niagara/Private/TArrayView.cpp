// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// operator[] @ 148e573f0

TTuple<void_*,unsigned_int> * __thiscall
TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
          (TArrayView<TTuple<void_*,unsigned_int>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<void_*,unsigned_int> *pTVar4;
  
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
      pTVar4 = (TTuple<void_*,unsigned_int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 148e8b2e0

TArrayView<unsigned_int_const_,int> * __thiscall
TArrayView<unsigned_int_const_,int>::
TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<unsigned_int_const_,int> *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_int_const_,int> *pTVar4;
  
  this->DataPtr = (uint *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TTransform<float>_const_,int><TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 148ee5de0

TArrayView<UE::Math::TTransform<float>_const_,int> * __thiscall
TArrayView<UE::Math::TTransform<float>_const_,int>::
TArrayView<UE::Math::TTransform<float>_const_,int><TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TTransform<float>_const_,int> *this,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TTransform<float>_const_,int> *pTVar4;
  
  this->DataPtr = (TTransform<float> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TTransform<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_> @ 14907f400

TArrayView<float_const_,int> * __thiscall
TArrayView<float_const_,int>::
TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<float_const_,int> *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  this->DataPtr = (float *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_> @ 14907f470

TArrayView<FRHIUnorderedAccessView_*_const,int> * __thiscall
TArrayView<FRHIUnorderedAccessView_*_const,int>::
TArrayView<FRHIUnorderedAccessView_*_const,int><TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_const_&,TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FRHIUnorderedAccessView_*_const,int> *this,
          TArray<FRHIUnorderedAccessView_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRHIUnorderedAccessView_*_const,int> *pTVar4;
  
  this->DataPtr = (FRHIUnorderedAccessView **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FRHIUnorderedAccessView_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// Find @ 1491c3450

int __thiscall
TArrayView<FNiagaraVariableBase_const_,int>::Find
          (TArrayView<FNiagaraVariableBase_const_,int> *this,FNiagaraVariableBase *param_1)

{
  FNiagaraVariableBase *pFVar1;
  FNiagaraVariableBase *pFVar2;
  
  pFVar1 = this->DataPtr;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if ((pFVar2->Name == param_1->Name) &&
         ((pFVar2->TypeDefHandle).RegisteredTypeIndex ==
          (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0xc);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + this->ArrayNum);
  }
  return -1;
}

// TArrayView<FRHITransitionInfo_const_,int><TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 1491eed70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArrayView<FRHITransitionInfo_const_,int> * __thiscall
TArrayView<FRHITransitionInfo_const_,int>::
TArrayView<FRHITransitionInfo_const_,int><TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FRHITransitionInfo_const_,int> *this,
          TArray<FRHITransitionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<FRHITransitionInfo> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRHITransitionInfo_const_,int> *pTVar5;
  ForElementType<FRHITransitionInfo> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FRHITransitionInfo>)param_1;
  if (FVar2 != (ForElementType<FRHITransitionInfo>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FRHITransitionInfo *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FRHITransitionInfo_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14927c680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<FNiagaraEmitterInstance,1> * __thiscall
TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int>::operator[]
          (TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar4;
  
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
      pTVar4 = (TSharedRef<FNiagaraEmitterInstance,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FTransferResourceParams_const_,int><TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>_&,TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>_> @ 1492c71d0

TArrayView<FTransferResourceParams_const_,int> * __thiscall
TArrayView<FTransferResourceParams_const_,int>::
TArrayView<FTransferResourceParams_const_,int><TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>_&,TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FTransferResourceParams_const_,int> *this,
          TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FTransferResourceParams_const_,int> *pTVar4;
  
  this->DataPtr = (FTransferResourceParams *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FTransferResourceParams_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 1492d5370

FSceneViewFamily ** __thiscall
TArrayView<FSceneViewFamily_const_*,int>::operator[]
          (TArrayView<FSceneViewFamily_const_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSceneViewFamily **ppFVar4;
  
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
      ppFVar4 = (FSceneViewFamily **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14935f530

uint * __thiscall
TArrayView<unsigned_int_const_,int>::Last(TArrayView<unsigned_int_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14937b5d0

TArrayView<unsigned_short_const_,int> * __thiscall
TArrayView<unsigned_short_const_,int>::
TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (TArrayView<unsigned_short_const_,int> *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  this->DataPtr = (ushort *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14937b640

TArrayView<unsigned_short_const_,int> * __thiscall
TArrayView<unsigned_short_const_,int>::
TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (TArrayView<unsigned_short_const_,int> *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  
  this->DataPtr = (ushort *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_> @ 149417960

TArrayView<float_const_,int> * __thiscall
TArrayView<float_const_,int>::
TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayView<float_const_,int> *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  this->DataPtr = (float *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 1494179d0

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
TArrayView<UE::Math::TVector2<float>_const_,int>::
TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector2<float>_const_,int> *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector2<float> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::Math::TVector<float>_const_,int><TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 149417a40

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
TArrayView<UE::Math::TVector<float>_const_,int>::
TArrayView<UE::Math::TVector<float>_const_,int><TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UE::Math::TVector<float>_const_,int> *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar4;
  
  this->DataPtr = (TVector<float> *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FLinearColor_const_,int><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 149417ab0

TArrayView<FLinearColor_const_,int> * __thiscall
TArrayView<FLinearColor_const_,int>::
TArrayView<FLinearColor_const_,int><TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&,TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FLinearColor_const_,int> *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FLinearColor_const_,int> *pTVar4;
  
  this->DataPtr = (FLinearColor *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FLinearColor_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int><TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_>_const_&,TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_>_> @ 149417b20

TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> * __thiscall
TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int>::
TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int><TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_>_const_&,TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *this,
          TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *pTVar4;
  
  this->DataPtr = (FNiagaraStatelessRuntimeSpawnInfo *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

