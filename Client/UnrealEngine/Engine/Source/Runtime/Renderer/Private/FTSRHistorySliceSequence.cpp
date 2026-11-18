// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// Check @ 1452b8160

bool __thiscall FTSRHistorySliceSequence::Check(FTSRHistorySliceSequence *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = this->FrameStorageCount;
  if ((uVar4 != 1) && (((int)uVar4 < 4 || ((uVar4 & 1) != 0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameStorageCount == 1 || ((FrameStorageCount >= 4) && (FrameStorageCount % 2) == 0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                       ,0x5f5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = this->FrameStoragePeriod & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  if (uVar4 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(FrameStoragePeriod % 2) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                       ,0x5f6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// DecrementFrameRollingIndex @ 1452ba690

int __thiscall
FTSRHistorySliceSequence::DecrementFrameRollingIndex(FTSRHistorySliceSequence *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = this->FrameStorageCount;
  iVar1 = this->FrameStoragePeriod;
  iVar5 = 1;
  if (iVar4 == 1) {
    if ((iVar1 != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameStoragePeriod == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                           ,0x5ff,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  else {
    iVar5 = iVar4;
    if (iVar1 != 1) {
      iVar5 = (iVar4 + -2) * iVar1;
    }
  }
  iVar4 = this->FrameStorageCount;
  iVar1 = this->FrameStoragePeriod;
  if (iVar4 == 1) {
    iVar4 = 1;
    if ((iVar1 != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameStoragePeriod == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                           ,0x5ff,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  else if (iVar1 != 1) {
    iVar4 = (iVar4 + -2) * iVar1;
  }
  return (param_1 + -1 + iVar5) % iVar4;
}

// GetResurrectionFrameRollingIndex @ 1452c5830

int __thiscall
FTSRHistorySliceSequence::GetResurrectionFrameRollingIndex
          (FTSRHistorySliceSequence *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = this->FrameStorageCount;
  iVar4 = this->FrameStoragePeriod;
  if (iVar3 == 1) {
    if ((iVar4 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameStoragePeriod == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                           ,0x5ff,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = 1;
  }
  else if (iVar4 != 1) {
    iVar3 = (iVar3 + -2) * iVar4;
  }
  iVar4 = this->FrameStoragePeriod;
  if (this->FrameStorageCount != 1) {
    if (iVar4 == 1) {
      iVar4 = 0;
      if (0 < param_1 + -2) {
        iVar4 = param_1 + -2;
      }
      iVar5 = param_2 + iVar3 + ((iVar4 + 1) / 2) * -2;
    }
    else {
      if (param_1 < iVar3) {
        return 0;
      }
      iVar5 = param_2 + -1 + iVar4 * 2;
      iVar5 = iVar5 - iVar5 % iVar4;
    }
    return iVar5 % iVar3;
  }
  if ((iVar4 != 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameStoragePeriod == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                         ,0x641,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetRollingIndexCount @ 1452c5950

int __thiscall FTSRHistorySliceSequence::GetRollingIndexCount(FTSRHistorySliceSequence *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = this->FrameStorageCount;
  iVar1 = this->FrameStoragePeriod;
  if (iVar4 != 1) {
    if (iVar1 != 1) {
      iVar4 = (iVar4 + -2) * iVar1;
    }
    return iVar4;
  }
  if (iVar1 != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameStoragePeriod == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                       ,0x5ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return 1;
}

// GetSRVSliceRange @ 1452c5a20

TRHIRange<unsigned_short> __thiscall
FTSRHistorySliceSequence::GetSRVSliceRange(FTSRHistorySliceSequence *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TRHIRange<unsigned_short> TVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  undefined2 *puVar5;
  uint uVar6;
  int in_R9D;
  
  puVar5 = (undefined2 *)CONCAT44(in_register_00000014,param_1);
  if ((param_2 == in_R9D) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentFrameSliceIndex != PrevFrameSliceIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                         ,0x653,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TRHIRange<unsigned_short>)(*pcVar1)();
    return TVar3;
  }
  if (param_2 < in_R9D) {
    uVar4 = ~param_2 + this->FrameStorageCount;
    uVar6 = param_2 + 1;
    puVar5[1] = (short)uVar4;
    *puVar5 = (short)uVar6;
    if (((0xfffe < uVar6) || ((0xfffe < uVar4 || (0xfffe < uVar6 + uVar4)))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar2)) {
code_r0x0001452c5af6:
      pcVar1 = (code *)swi(3);
      TVar3 = (TRHIRange<unsigned_short>)(*pcVar1)();
      return TVar3;
    }
  }
  else {
    puVar5[1] = (short)param_2;
    *puVar5 = 0;
    if ((0xfffe < (uint)param_2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa43,L""), bVar2)) goto code_r0x0001452c5af6;
  }
  return (TRHIRange<unsigned_short>)param_1;
}

// IncrementFrameRollingIndex @ 1452cdb50

int __thiscall
FTSRHistorySliceSequence::IncrementFrameRollingIndex(FTSRHistorySliceSequence *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = this->FrameStorageCount;
  iVar1 = this->FrameStoragePeriod;
  if (iVar4 != 1) {
    if (iVar1 != 1) {
      iVar4 = (iVar4 + -2) * iVar1;
    }
    return (param_1 + 1) % iVar4;
  }
  if (iVar1 != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameStoragePeriod == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                       ,0x5ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return (param_1 + 1) % 1;
}

// RollingIndexToSliceIndex @ 1452d2bf0

int __thiscall
FTSRHistorySliceSequence::RollingIndexToSliceIndex(FTSRHistorySliceSequence *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = this->FrameStorageCount;
  if (iVar4 == 1) {
    if (param_1 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameRollingIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                         ,0x61e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    if (this->FrameStoragePeriod != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameStoragePeriod == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalSuperResolution.cpp"
                         ,0x61f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return 0;
  }
  iVar1 = this->FrameStoragePeriod;
  if (iVar1 == 1) {
    return (iVar4 / 2) * (param_1 % 2) +
           (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_1 / 2) >> 0x1f) << 0x20 |
                 (longlong)param_1 / 2 & 0xffffffffU) % (longlong)(iVar4 / 2));
  }
  if (param_1 % iVar1 == 0) {
    iVar5 = (int)((longlong)param_1 / (longlong)iVar1) / 2;
    if (((longlong)param_1 / (longlong)iVar1 & 1U) != 0) {
      return iVar4 / 2 + iVar5;
    }
    return (iVar4 / 2 - iVar5) + -1;
  }
  iVar4 = iVar4 + -1;
  if ((param_1 & 1U) == 0) {
    iVar4 = 0;
  }
  return iVar4;
}

