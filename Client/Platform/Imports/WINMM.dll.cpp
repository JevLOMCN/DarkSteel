// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 5

// timeBeginPeriod @ 150158bb3

MMRESULT __stdcall timeBeginPeriod(UINT uPeriod)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeBeginPeriod(uPeriod);
  return MVar1;
}

// timeEndPeriod @ 150158bbf

MMRESULT __stdcall timeEndPeriod(UINT uPeriod)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeEndPeriod(uPeriod);
  return MVar1;
}

// waveOutGetNumDevs @ 150158bcb

UINT __stdcall waveOutGetNumDevs(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = waveOutGetNumDevs();
  return UVar1;
}

// timeSetEvent @ 150158bd7

MMRESULT __stdcall
timeSetEvent(UINT uDelay,UINT uResolution,LPTIMECALLBACK fptc,DWORD_PTR dwUser,UINT fuEvent)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeSetEvent(uDelay,uResolution,fptc,dwUser,fuEvent);
  return MVar1;
}

// timeGetTime @ 150158be3

DWORD __stdcall timeGetTime(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = timeGetTime();
  return DVar1;
}

