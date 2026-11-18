// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FControlRigSimpleScopeSecondsCounter @ 14a21ed00

FControlRigSimpleScopeSecondsCounter * __thiscall
FControlRigSimpleScopeSecondsCounter::FControlRigSimpleScopeSecondsCounter
          (FControlRigSimpleScopeSecondsCounter *this,wchar_t *param_1)

{
  bool bVar1;
  FName *pFVar2;
  double *pdVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  FName local_res18;
  
  bVar1 = GControlRigStats.Enabled;
  ::FName::FName((FName *)&local_res8.s,param_1,FNAME_Find);
  if ((FName)local_res8.QuadPart == (FName)0x0) {
    pFVar2 = ::FName::FName(&local_res18,param_1,FNAME_Add);
    local_res8._0_4_ = (pFVar2->ComparisonIndex).Value;
    local_res8._4_4_ = pFVar2->Number;
  }
  pdVar3 = FControlRigStats::RetainCounter(&GControlRigStats,(FName *)&local_res8.s);
  if (bVar1) {
    QueryPerformanceCounter(&local_res8);
    dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
  }
  else {
    dVar4 = 0.0;
  }
  *(double **)&this->field_0x8 = pdVar3;
  *(double *)this = dVar4;
  this->field_0x10 = bVar1;
  *(undefined8 *)&this->field_0x18 = 0;
  return this;
}

// ~FControlRigSimpleScopeSecondsCounter @ 14a225900

void __thiscall
FControlRigSimpleScopeSecondsCounter::~FControlRigSimpleScopeSecondsCounter
          (FControlRigSimpleScopeSecondsCounter *this)

{
  int iVar1;
  int *piVar2;
  LARGE_INTEGER local_res8 [4];
  
  if ((GControlRigStats.Enabled) && (0 < GControlRigStats.Stack.ArrayNum)) {
    iVar1 = ~(GControlRigStats.Stack.ArrayNum - 1U) + GControlRigStats.Stack.ArrayNum;
    if (iVar1 != 0) {
      memmove(GControlRigStats.Stack.AllocatorInstance.Data +
              (longlong)(int)(GControlRigStats.Stack.ArrayNum - 1U) * 8,
              GControlRigStats.Stack.AllocatorInstance.Data +
              (longlong)(int)(GControlRigStats.Stack.ArrayNum - 1U) * 8 + 8,(longlong)iVar1 << 3);
    }
    GControlRigStats.Stack.ArrayNum = GControlRigStats.Stack.ArrayNum + -1;
  }
  if (this->field_0x10 != '\0') {
    QueryPerformanceCounter(local_res8);
    **(double **)&this->field_0x8 =
         (((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - *(double *)this) + **(double **)&this->field_0x8;
  }
  piVar2 = *(int **)&this->field_0x18;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + -1;
  }
  return;
}

