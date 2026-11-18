// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// GenerateGestures @ 1426bc010

void __thiscall
FGestureDetector::GenerateGestures
          (FGestureDetector *this,FGenericApplicationMessageHandler *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  char *pcVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool *pbVar6;
  longlong lVar7;
  LARGE_INTEGER local_res18;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((param_2->NumBits < 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_2 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
  }
  if ((*(byte *)param_2 & 0x20) != 0) {
    QueryPerformanceCounter(&local_res18);
    pbVar6 = &this->LongPressTrack[0].Time.bIsSet;
    lVar7 = 0xb;
    dVar4 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    do {
      if ((*pbVar6 != false) &&
         (LongPressSeconds <= dVar4 - ((TOptional<double> *)(pbVar6 + -8))->TypedValue)) {
        local_38 = 0;
        uStack_30 = 0;
        (**(code **)((longlong)*param_1 + 0xb0))(param_1,5,&local_38,0,0);
        if (*pbVar6 != false) {
          *pbVar6 = false;
        }
        pcVar1 = pbVar6 + 8;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1 = pbVar6 + 0x10;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
      }
      pbVar6 = pbVar6 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// IsGestureSupported @ 1426c2710

bool __cdecl FGestureDetector::IsGestureSupported(EGestureEvent param_1)

{
  return param_1 == LongPress;
}

// OnTouchEnded @ 1426c8f90

void __thiscall
FGestureDetector::OnTouchEnded(FGestureDetector *this,int param_1,TVector2<double> *param_2)

{
  if (param_1 < 0xb) {
    if (this->LongPressTrack[param_1].Time.bIsSet != false) {
      this->LongPressTrack[param_1].Time.bIsSet = false;
    }
    this->LongPressTrack[param_1].Location.field0_0x0._s_0.X = 0.0;
    this->LongPressTrack[param_1].Location.field0_0x0._s_0.Y = 0.0;
  }
  return;
}

// OnTouchMoved @ 1426c9850

void __thiscall
FGestureDetector::OnTouchMoved(FGestureDetector *this,int param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < 0xb) {
    dVar1 = (param_2->field0_0x0)._s_0.Y - this->LongPressTrack[param_1].Location.field0_0x0._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.X - this->LongPressTrack[param_1].Location.field0_0x0._s_0.X;
    auVar3._0_8_ = dVar2 * dVar2;
    auVar3._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar1 * dVar1 + auVar3._0_8_;
    auVar4 = sqrtpd(auVar3,auVar4);
    if ((double)LongPressAllowedMovement <= auVar4._0_8_) {
      if (this->LongPressTrack[param_1].Time.bIsSet != false) {
        this->LongPressTrack[param_1].Time.bIsSet = false;
      }
      this->LongPressTrack[param_1].Location.field0_0x0._s_0.X = 0.0;
      this->LongPressTrack[param_1].Location.field0_0x0._s_0.Y = 0.0;
    }
  }
  return;
}

// OnTouchStarted @ 1426c9ab0

void __thiscall
FGestureDetector::OnTouchStarted(FGestureDetector *this,int param_1,TVector2<double> *param_2)

{
  double dVar1;
  FLongPressData *pFVar2;
  LARGE_INTEGER local_res20;
  double local_18 [2];
  
  if (param_1 < 0xb) {
    pFVar2 = this->LongPressTrack + param_1;
    if ((pFVar2->Time).bIsSet != false) {
      (pFVar2->Time).bIsSet = false;
    }
    (pFVar2->Location).field0_0x0._s_0.X = 0.0;
    (pFVar2->Location).field0_0x0._s_0.Y = 0.0;
    QueryPerformanceCounter(&local_res20);
    if ((FLongPressData *)local_18 != pFVar2) {
      (pFVar2->Time).TypedValue =
           (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      (pFVar2->Time).bIsSet = true;
    }
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (pFVar2->Location).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (pFVar2->Location).field0_0x0._s_0.Y = dVar1;
  }
  return;
}

