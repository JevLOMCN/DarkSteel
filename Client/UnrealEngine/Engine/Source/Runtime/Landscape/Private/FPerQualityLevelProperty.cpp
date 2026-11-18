// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// GetValue @ 145f14570

float __thiscall
FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::GetValue
          (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *pFVar4;
  
  if ((*(int *)&this[2].CVarName.Data.AllocatorInstance.Data == this[4].CVarName.Data.ArrayMax) ||
     (param_1 < 0)) {
    return *(float *)&this[1].CVarName.Data.AllocatorInstance.Data;
  }
  pFVar4 = *(FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> **)
            &this[5].CVarName.Data.ArrayNum;
  if (pFVar4 == (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *)0x0) {
    pFVar4 = this + 5;
  }
  iVar1 = *(int *)((longlong)&(pFVar4->CVarName).Data.AllocatorInstance.Data +
                  (ulonglong)(*(int *)&this[6].CVarName.Data.AllocatorInstance.Data - 1U & param_1)
                  * 4);
  if (iVar1 != -1) {
    do {
      piVar3 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&this[1].CVarName.Data.ArrayNum);
      if (*piVar3 == param_1) {
        pfVar2 = (float *)(piVar3 + 1);
        if (piVar3 == (int *)0x0) {
          pfVar2 = (float *)0x0;
        }
        if (pfVar2 != (float *)0x0) {
          return *pfVar2;
        }
        break;
      }
      iVar1 = piVar3[2];
    } while (iVar1 != -1);
  }
  return *(float *)&this[1].CVarName.Data.AllocatorInstance.Data;
}

// GetValue @ 145f57030

int __thiscall
FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetValue
          (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *pFVar4;
  
  if ((*(int *)&this[2].CVarName.Data.AllocatorInstance.Data == this[4].CVarName.Data.ArrayMax) ||
     (param_1 < 0)) {
    return *(int *)&this[1].CVarName.Data.AllocatorInstance.Data;
  }
  pFVar4 = *(FPerQualityLevelProperty<FPerQualityLevelInt,int,2> **)&this[5].CVarName.Data.ArrayNum;
  if (pFVar4 == (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)0x0) {
    pFVar4 = this + 5;
  }
  iVar1 = *(int *)((longlong)&(pFVar4->CVarName).Data.AllocatorInstance.Data +
                  (ulonglong)(*(int *)&this[6].CVarName.Data.AllocatorInstance.Data - 1U & param_1)
                  * 4);
  if (iVar1 != -1) {
    do {
      piVar3 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&this[1].CVarName.Data.ArrayNum);
      if (*piVar3 == param_1) {
        piVar2 = piVar3 + 1;
        if (piVar3 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        if (piVar2 != (int *)0x0) {
          return *piVar2;
        }
        break;
      }
      iVar1 = piVar3[2];
    } while (iVar1 != -1);
  }
  return *(int *)&this[1].CVarName.Data.AllocatorInstance.Data;
}

