// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 4

// ReadAndWrite @ 14268d380

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TDefaultAdapter<unsigned_short,FFloat16>::ReadAndWrite
          (TDefaultAdapter<unsigned_short,FFloat16> *this,
          TArrayView<FFloat16_const_,__int64> *param_1,long64 param_2,
          TArrayView<unsigned_short,__int64> *param_3,long64 param_4)

{
  FFloat16 *pFVar1;
  ushort *puVar2;
  float fVar3;
  double dVar4;
  ushort local_18 [8];
  
  pFVar1 = TArrayView<FFloat16_const_,__int64>::operator[](param_1,param_2);
  local_18[0] = pFVar1->Encoded;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_3,param_4);
  fVar3 = FGenericPlatformMath::LoadHalf(local_18);
  dVar4 = (double)fVar3;
  if (__real_3ff0000000000000 <= (double)fVar3) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  *puVar2 = (ushort)(int)(dVar4 * __real_40efffe000000000 + __real_3fe0000000000000);
  return;
}

// ReadAndWrite @ 14268d3f0

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TDefaultAdapter<unsigned_short,unsigned___int64>::
ReadAndWrite(TDefaultAdapter<unsigned_short,unsigned___int64> *this,
            TArrayView<unsigned___int64_const_,__int64> *param_1,long64 param_2,
            TArrayView<unsigned_short,__int64> *param_3,long64 param_4)

{
  ulong64 *puVar1;
  ushort *puVar2;
  double dVar3;
  
  puVar1 = TArrayView<unsigned___int64_const_,__int64>::operator[](param_1,param_2);
  dVar3 = (double)*puVar1 * __real_3cefffe000000000 + __real_3fe0000000000000;
  puVar2 = TArrayView<unsigned_short,__int64>::operator[](param_3,param_4);
  *puVar2 = (ushort)(int)dVar3;
  return;
}

// ReadAndWrite @ 14268d470

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TDefaultAdapter<float,unsigned___int64>::ReadAndWrite
          (TDefaultAdapter<float,unsigned___int64> *this,
          TArrayView<unsigned___int64_const_,__int64> *param_1,long64 param_2,
          TArrayView<float,__int64> *param_3,long64 param_4)

{
  ulong64 *puVar1;
  float *pfVar2;
  double dVar3;
  
  puVar1 = TArrayView<unsigned___int64_const_,__int64>::operator[](param_1,param_2);
  dVar3 = (double)*puVar1 * __real_3bf0000000000000;
  pfVar2 = TArrayView<float,__int64>::operator[](param_3,param_4);
  *pfVar2 = (float)dVar3;
  return;
}

// ReadAndWrite @ 14268d4e0

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TDefaultAdapter<FFloat16,unsigned___int64>::
ReadAndWrite(TDefaultAdapter<FFloat16,unsigned___int64> *this,
            TArrayView<unsigned___int64_const_,__int64> *param_1,long64 param_2,
            TArrayView<FFloat16,__int64> *param_3,long64 param_4)

{
  ulong64 *puVar1;
  FFloat16 *pFVar2;
  FFloat16 local_18 [8];
  
  puVar1 = TArrayView<unsigned___int64_const_,__int64>::operator[](param_1,param_2);
  local_18[0].Encoded = 0;
  FGenericPlatformMath::StoreHalf
            (&local_18[0].Encoded,(float)((double)*puVar1 * __real_3bf0000000000000));
  pFVar2 = TArrayView<FFloat16,__int64>::operator[](param_3,param_4);
  pFVar2->Encoded = local_18[0].Encoded;
  return;
}

