// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 5

// FBinnedMovingValueBase @ 1441d11d0

FBinnedMovingValueBase * __thiscall
UE::Net::FBinnedMovingValueBase::FBinnedMovingValueBase
          (FBinnedMovingValueBase *this,
          TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int> *param_1,double param_2,
          EBinnedValueMode param_3)

{
  int iVar1;
  FBin *pFVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  iVar3 = param_1->ArrayNum;
  uVar4 = *(undefined4 *)&param_1->field_0xc;
  this->TotalSum = 0.0;
  this->TotalCount = 0;
  this->SampleMode = param_3;
  this->FirstBinIndex = -1;
  this->LastWrittenBinIndex = -1;
  this->TimePerBin = param_2;
  (this->BinsView).DataPtr = pFVar2;
  (this->BinsView).ArrayNum = iVar3;
  *(undefined4 *)&(this->BinsView).field_0xc = uVar4;
  this->BinRange = (double)iVar1 * param_2;
  return this;
}

// AddMeasurement_Implementation @ 1441d59d0

void __thiscall
UE::Net::FBinnedMovingValueBase::AddMeasurement_Implementation
          (FBinnedMovingValueBase *this,double param_1,double param_2,TOptional<double> *param_3)

{
  int iVar1;
  FBin *pFVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar5 [16];
  
  iVar1 = (this->BinsView).ArrayNum;
  iVar3 = iVar1 + -1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1 / this->BinRange;
  auVar5 = roundpd(in_XMM4,auVar5,1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (param_1 - auVar5._0_8_ * this->BinRange) / this->TimePerBin;
  auVar5 = roundpd(auVar4,auVar4,1);
  if ((int)auVar5._0_8_ < iVar3) {
    iVar3 = (int)auVar5._0_8_;
  }
  if ((-1 < iVar3) && (iVar3 < iVar1)) {
    if (iVar3 != this->LastWrittenBinIndex) {
      ResetNewAndSkippedBins(this,iVar3,param_3);
    }
    pFVar2 = TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int>::operator[]
                       (&this->BinsView,iVar3);
    pFVar2->Count = pFVar2->Count + 1;
    pFVar2->Sum = param_2 + pFVar2->Sum;
    this->TotalCount = this->TotalCount + 1;
    this->TotalSum = param_2 + this->TotalSum;
  }
  return;
}

// GetSample @ 1441dcf40

double __thiscall UE::Net::FBinnedMovingValueBase::GetSample(FBinnedMovingValueBase *this)

{
  double dVar1;
  
  dVar1 = this->TotalSum;
  if (this->SampleMode != MovingSum) {
    dVar1 = dVar1 / (double)this->TotalCount;
  }
  return dVar1;
}

// Reset @ 1441e9530

void __thiscall UE::Net::FBinnedMovingValueBase::Reset(FBinnedMovingValueBase *this)

{
  FBin *pFVar1;
  FBin *pFVar2;
  ulonglong uStack_10;
  
  pFVar1 = (this->BinsView).DataPtr;
  pFVar2 = pFVar1 + (this->BinsView).ArrayNum;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    pFVar1->Sum = 0.0;
    *(ulonglong *)&pFVar1->Count = uStack_10;
  }
  this->FirstBinIndex = -1;
  this->LastWrittenBinIndex = -1;
  this->TotalSum = 0.0;
  this->TotalCount = 0;
  return;
}

// ResetNewAndSkippedBins @ 1441e9e10

void __thiscall
UE::Net::FBinnedMovingValueBase::ResetNewAndSkippedBins
          (FBinnedMovingValueBase *this,int param_1,TOptional<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBin *pFVar4;
  uint uVar5;
  double dVar7;
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong uStack_20;
  int iVar6;
  
  if (this->LastWrittenBinIndex == 0xffffffff) {
    this->FirstBinIndex = param_1;
  }
  else {
    iVar6 = param_1;
    if (param_1 == 0) {
      iVar6 = (this->BinsView).ArrayNum;
    }
    uVar5 = iVar6 - 1;
    if (uVar5 != this->LastWrittenBinIndex) {
      do {
        if (uVar5 == this->FirstBinIndex) {
          dVar7 = this->TotalSum;
          if (this->SampleMode != MovingSum) {
            dVar7 = dVar7 / (double)this->TotalCount;
          }
          if ((TOptional<double> *)local_38 != param_2) {
            param_2->TypedValue = dVar7;
            param_2->bIsSet = true;
          }
        }
        uVar3 = 0;
        if ((int)uVar5 < (this->BinsView).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar4 = (this->BinsView).DataPtr;
        uStack_20 = uStack_20 & 0xffffffff00000000;
        this->TotalSum = this->TotalSum - pFVar4[(int)uVar5].Sum;
        this->TotalCount = this->TotalCount - pFVar4[(int)uVar5].Count;
        local_28 = 0;
        pFVar4[(int)uVar5].Sum = 0.0;
        *(ulonglong *)&pFVar4[(int)uVar5].Count = uStack_20;
        if (uVar5 == 0) {
          uVar5 = (this->BinsView).ArrayNum;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != this->LastWrittenBinIndex);
    }
    if (param_1 == this->FirstBinIndex) {
      dVar7 = this->TotalSum;
      if (this->SampleMode != MovingSum) {
        dVar7 = dVar7 / (double)this->TotalCount;
      }
      if ((TOptional<double> *)(local_38 + 8) != param_2) {
        param_2->TypedValue = dVar7;
        param_2->bIsSet = true;
      }
    }
  }
  pFVar4 = TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int>::operator[]
                     (&this->BinsView,param_1);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  this->TotalSum = this->TotalSum - pFVar4->Sum;
  this->TotalCount = this->TotalCount - pFVar4->Count;
  pFVar4->Sum = 0.0;
  *(ulonglong *)&pFVar4->Count = uStack_20;
  this->LastWrittenBinIndex = param_1;
  return;
}

