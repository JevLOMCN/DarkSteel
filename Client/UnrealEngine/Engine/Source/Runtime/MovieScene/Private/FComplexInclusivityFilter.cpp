// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// All @ 1460a9ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FComplexInclusivityFilter * __cdecl
UE::MovieScene::FComplexInclusivityFilter::All
          (FComplexInclusivityFilter *__return_storage_ptr__,
          initializer_list<UE::MovieScene::FComponentTypeID> *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  FComponentTypeID *pFVar3;
  code *pcVar4;
  bool bVar5;
  FComplexInclusivityFilter *pFVar6;
  FComponentTypeID *pFVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  TBitArray<TFixedAllocator<12>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar7 = param_1->_First;
  pFVar3 = param_1->_Last;
  local_58.NumBits = 0;
  local_58.MaxBits = 0x180;
  while( true ) {
    if (pFVar7 == pFVar3) {
      (__return_storage_ptr__->Mask).Bits.NumBits = 0;
      (__return_storage_ptr__->Mask).Bits.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)__return_storage_ptr__,&local_58);
      __return_storage_ptr__->Mode = AllOf;
      return __return_storage_ptr__;
    }
    uVar2 = pFVar7->Value;
    iVar8 = ((uint)uVar2 - local_58.NumBits) + 1;
    if (0 < iVar8) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_58,false,iVar8);
    }
    if ((local_58.NumBits <= (int)(uint)uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) break;
    pTVar1 = local_58.AllocatorInstance.InlineData + (uVar2 >> 5);
    pFVar7 = pFVar7 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  pcVar4 = (code *)swi(3);
  pFVar6 = (FComplexInclusivityFilter *)(*pcVar4)();
  return pFVar6;
}

