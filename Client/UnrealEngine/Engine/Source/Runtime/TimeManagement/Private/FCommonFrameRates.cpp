// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 3

// Find @ 14604bf70

FCommonFrameRateInfo * __cdecl FCommonFrameRates::Find(double param_1,double param_2)

{
  FCommonFrameRateInfo *pFVar1;
  double dVar2;
  
  pFVar1 = AllFrameRates;
  do {
    dVar2 = (double)(pFVar1->FrameRate).Numerator / (double)(pFVar1->FrameRate).Denominator -
            param_1;
    if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)
    {
      return pFVar1;
    }
    pFVar1 = pFVar1 + 1;
  } while (pFVar1 != (FCommonFrameRateInfo *)
                     Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_Statics::InterfaceParams);
  return (FCommonFrameRateInfo *)0x0;
}

// Find @ 14604bfd0

FCommonFrameRateInfo * __cdecl FCommonFrameRates::Find(FFrameRate param_1)

{
  FCommonFrameRateInfo *pFVar1;
  int iStackX_c;
  
  pFVar1 = AllFrameRates;
  iStackX_c = param_1.Denominator;
  while (((pFVar1->FrameRate).Numerator != param_1.Numerator ||
         ((pFVar1->FrameRate).Denominator != iStackX_c))) {
    pFVar1 = pFVar1 + 1;
    if (pFVar1 == (FCommonFrameRateInfo *)
                  Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_Statics::InterfaceParams) {
      return (FCommonFrameRateInfo *)0x0;
    }
  }
  return pFVar1;
}

// GetAll @ 14604c270

TArrayView<FCommonFrameRateInfo_const_,int> * __cdecl
FCommonFrameRates::GetAll(TArrayView<FCommonFrameRateInfo_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = AllFrameRates;
  __return_storage_ptr__->ArrayNum = 0xe;
  return __return_storage_ptr__;
}

