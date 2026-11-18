// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// Assign<TFixedAllocator<12>_> @ 14606b430

void __thiscall
TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
          (TBitArray<TFixedAllocator<12>_> *this,TBitArray<TFixedAllocator<12>_> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar3) || (0x180 < this->MaxBits)) {
    uVar2 = 0x180;
    if (0x180 < (int)uVar3) {
      uVar2 = uVar3;
    }
    this->MaxBits = uVar2;
    Realloc(this,0);
  }
  iVar1 = param_1->NumBits;
  this->NumBits = iVar1;
  if (iVar1 != 0) {
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// CompareSetBits<TFixedAllocator<12>_> @ 14606c0f0

bool __thiscall
TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
          (TBitArray<TFixedAllocator<12>_> *this,TBitArray<TFixedAllocator<12>_> *param_1,
          bool param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  iVar11 = this->NumBits + 0x1f;
  iVar11 = (int)((iVar11 >> 0x1f & 0x1fU) + iVar11) >> 5;
  uVar8 = this->NumBits & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  uVar2 = 0xffffffff >> ((byte)(0x20 - uVar8) & 0x1f);
  if (0x1f < (int)(0x20 - uVar8)) {
    uVar2 = 0xffffffff;
  }
  iVar9 = 0;
  uVar8 = 0xffffffff;
  if (iVar11 == 1) {
    uVar8 = uVar2;
  }
  iVar5 = param_1->NumBits + 0x1f;
  iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
  uVar7 = param_1->NumBits & 0x8000001f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
  }
  iVar1 = iVar5 + -1;
  iVar4 = iVar1;
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar7) & 0x1f);
  if (0x1f < (int)(0x20 - uVar7)) {
    uVar3 = 0xffffffff;
  }
  do {
    uVar7 = 0xffffffff;
    if (iVar4 == 0) {
      uVar7 = uVar3;
    }
    if (iVar10 < iVar11) {
      uVar6 = *(uint *)(this->AllocatorInstance).InlineData[iVar10].Pad;
      if (uVar8 != 0xffffffff) {
        if (param_2) {
          uVar6 = ~uVar8 | uVar6 & uVar8;
        }
        else {
          uVar6 = uVar6 & uVar8;
        }
      }
      uVar8 = -(uint)param_2;
      if (iVar9 < iVar5) goto LAB_14606c202;
    }
    else {
      uVar6 = -(uint)param_2;
      if (iVar5 <= iVar9) {
        return true;
      }
LAB_14606c202:
      uVar8 = *(uint *)(param_1->AllocatorInstance).InlineData[iVar9].Pad;
      if (uVar7 != 0xffffffff) {
        if (param_2) {
          uVar8 = ~uVar7 | uVar8 & uVar7;
        }
        else {
          uVar8 = uVar8 & uVar7;
        }
      }
    }
    if (uVar6 != uVar8) {
      return false;
    }
    iVar10 = iVar10 + 1;
    uVar8 = 0xffffffff;
    if (iVar10 == iVar11 + -1) {
      uVar8 = uVar2;
    }
    iVar9 = iVar9 + 1;
    iVar4 = iVar9 - iVar1;
  } while( true );
}

// Add @ 1460a5b80

int __thiscall
TBitArray<TFixedAllocator<12>_>::Add(TBitArray<TFixedAllocator<12>_> *this,bool param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 0) {
    return this->NumBits;
  }
  iVar2 = this->NumBits;
  if (0 < param_2) {
    if (iVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = (int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5;
    }
    iVar5 = iVar2 + param_2;
    if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar3) {
      this->NumBits = iVar5;
    }
    else {
      Reserve(this,iVar5);
      iVar3 = this->NumBits + param_2;
      this->NumBits = iVar3;
      uVar6 = iVar3 >> 0x1f & 0x1f;
      uVar4 = iVar3 + uVar6;
      iVar3 = (uVar4 & 0x1f) - uVar6;
      if (iVar3 != 0) {
        pTVar1 = (this->AllocatorInstance).InlineData + ((int)uVar4 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
      }
    }
  }
  SetRange(this,iVar2,param_2,param_1);
  return iVar2;
}

// CheckInvariants @ 1460b18a0

void __thiscall
TBitArray<TFixedAllocator<12>_>::CheckInvariants(TBitArray<TFixedAllocator<12>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((this->MaxBits < this->NumBits) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (((iVar4 != 0) &&
      ((*(uint *)(this->AllocatorInstance).InlineData[(int)uVar3 >> 5].Pad &
       -1 << ((byte)iVar4 & 0x1f)) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Realloc @ 1460e0e60

void __thiscall
TBitArray<TFixedAllocator<12>_>::Realloc(TBitArray<TFixedAllocator<12>_> *this,int param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (0x180 < (this->MaxBits + 0x1fU & 0xffffffe0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax >= 0 && NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x524,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  if (iVar5 != 0) {
    pTVar1 = (this->AllocatorInstance).InlineData + ((int)uVar4 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
  }
  return;
}

// Reserve @ 1460e8bc0

void __thiscall
TBitArray<TFixedAllocator<12>_>::Reserve(TBitArray<TFixedAllocator<12>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->MaxBits) {
    return;
  }
  if (0x180 < (param_1 + 0x1fU & 0xffffffe0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxBits = 0x180;
  Realloc(this,this->NumBits);
  return;
}

// SetRange @ 1460f8390

void __thiscall
TBitArray<TFixedAllocator<12>_>::SetRange
          (TBitArray<TFixedAllocator<12>_> *this,int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TTypeCompatibleBytes<unsigned_int> *pTVar8;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x379,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != 0) {
    uVar6 = param_1 >> 0x1f & 0x1f;
    iVar3 = param_1 + uVar6;
    uVar5 = iVar3 >> 5;
    iVar4 = param_1 + param_2 + 0x1f;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) - uVar5;
    uVar6 = -1 << (((byte)iVar3 & 0x1f) - (char)uVar6 & 0x1f);
    pTVar8 = (this->AllocatorInstance).InlineData + uVar5;
    uVar7 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    uVar5 = *(uint *)pTVar8->Pad;
    if (param_3) {
      if (iVar4 == 1) {
        *(uint *)pTVar8->Pad = uVar7 & uVar6 | uVar5;
      }
      else {
        *(uint *)pTVar8->Pad = uVar5 | uVar6;
        pTVar8 = pTVar8 + 1;
        uVar5 = iVar4 - 2;
        if (uVar5 != 0) {
          memset(pTVar8,-1,(ulonglong)uVar5 * 4);
          pTVar8 = pTVar8 + uVar5;
        }
        *(uint *)pTVar8->Pad = *(uint *)pTVar8->Pad | uVar7;
      }
    }
    else if (iVar4 == 1) {
      *(uint *)pTVar8->Pad = ~(uVar7 & uVar6) & uVar5;
    }
    else {
      *(uint *)pTVar8->Pad = ~uVar6 & uVar5;
      pTVar8 = pTVar8 + 1;
      uVar5 = iVar4 - 2;
      if (uVar5 != 0) {
        memset(pTVar8,0,(ulonglong)uVar5 * 4);
        pTVar8 = pTVar8 + uVar5;
      }
      *(uint *)pTVar8->Pad = *(uint *)pTVar8->Pad & ~uVar7;
    }
    CheckInvariants(this);
  }
  return;
}

// TBitArray<FDefaultBitArrayAllocator> @ 146117a40

TBitArray<FDefaultBitArrayAllocator> * __thiscall
TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
          (TBitArray<FDefaultBitArrayAllocator> *this)

{
  (this->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->NumBits = 0;
  this->MaxBits = 0x80;
  return this;
}

// ~TBitArray<FDefaultBitArrayAllocator> @ 14611bd90

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::~TBitArray<FDefaultBitArrayAllocator>
          (TBitArray<FDefaultBitArrayAllocator> *this)

{
  ForElementType<unsigned_int> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 == (ForElementType<unsigned_int>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

