// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143248370

ISpeedRecorder * __cdecl BuildPatchServices::FSpeedRecorderFactory::Create(void)

{
  double dVar1;
  int iVar2;
  ISpeedRecorder *pIVar3;
  FTSTicker *pFVar4;
  ISpeedRecorder IVar5;
  longlong lVar6;
  
  pIVar3 = ::operator_new(0x90);
  if (pIVar3 == (ISpeedRecorder *)0x0) {
    return (ISpeedRecorder *)0x0;
  }
  *pIVar3 = (ISpeedRecorder)&___7ISpeedRecorder_BuildPatchServices__6B_;
  pFVar4 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)(pIVar3 + 1),0.0,pFVar4);
  dVar1 = __real_4014000000000000;
  *pIVar3 = (ISpeedRecorder)&FSpeedRecorder::_vftable__for__BuildPatchServices__ISpeedRecorder__;
  pIVar3[1] = (ISpeedRecorder)&FSpeedRecorder::_vftable__for__FTSTickerObjectBase__;
  dVar1 = dVar1 / FGenericPlatformTime::SecondsPerCycle64;
  if (dVar1 < __real_43f0000000000000) {
    lVar6 = 0;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar6 = -0x8000000000000000;
    }
    IVar5 = (ISpeedRecorder)((longlong)dVar1 + lVar6);
  }
  else {
    IVar5 = (ISpeedRecorder)0xffffffffffffffff;
  }
  pIVar3[4] = IVar5;
  iVar2 = FUnitConversion::Convert<int>(10,Megabytes,Bytes);
  pIVar3[5] = (ISpeedRecorder)(longlong)iVar2;
  IVar5 = (ISpeedRecorder)::operator_new(0x20);
  if (IVar5 != (ISpeedRecorder)0x0) {
    *(undefined8 *)IVar5 = 0;
    *(undefined8 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar5 + 0x18) = 0;
    *(undefined8 *)IVar5 = 0;
    *(undefined8 *)((longlong)IVar5 + 8) = 0;
    *(undefined8 *)((longlong)IVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar5 + 0x18) = 0;
  }
  pIVar3[7] = IVar5;
  pIVar3[6] = IVar5;
  pIVar3[0xc] = pIVar3[4];
  pIVar3[8] = (ISpeedRecorder)0x0;
  pIVar3[10] = (ISpeedRecorder)0x0;
  pIVar3[0x10] = (ISpeedRecorder)0x0;
  pIVar3[0xd] = pIVar3[5];
  pIVar3[9] = (ISpeedRecorder)0x0;
  pIVar3[0xb] = (ISpeedRecorder)0x0;
  pIVar3[0xe] = (ISpeedRecorder)(pIVar3 + 8);
  *(undefined1 *)(pIVar3 + 0xf) = 0;
  return pIVar3;
}

