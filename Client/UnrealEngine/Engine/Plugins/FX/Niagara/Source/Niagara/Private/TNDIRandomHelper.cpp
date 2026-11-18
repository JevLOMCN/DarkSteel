// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// TNDIRandomHelper<FNDIRandomInfoPolicy> @ 148f7e5a0

TNDIRandomHelper<FNDIRandomInfoPolicy> * __thiscall
TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
          (TNDIRandomHelper<FNDIRandomInfoPolicy> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FVectorVMExternalFunctionContext *pFVar2;
  float *pfVar3;
  
  *(FVectorVMExternalFunctionContext **)this = param_1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  *(FVectorVMExternalFunctionContext **)&this->field_0x50 = param_1;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&this->field_0x18);
  *(float **)&this->field_0x8 = pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  *(float **)&this->field_0x8 = pfVar3 + iVar1 * *(int *)&this->field_0x18;
  *(float **)&this->field_0x10 = pfVar3 + iVar1 * *(int *)&this->field_0x18;
  pFVar2 = *(FVectorVMExternalFunctionContext **)&this->field_0x50;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(pFVar2,(int *)&this->field_0x30);
  *(float **)&this->field_0x20 = pfVar3;
  iVar1 = pFVar2->PerInstanceFnInstanceIdx;
  *(float **)&this->field_0x20 = pfVar3 + iVar1 * *(int *)&this->field_0x30;
  *(float **)&this->field_0x28 = pfVar3 + iVar1 * *(int *)&this->field_0x30;
  pFVar2 = *(FVectorVMExternalFunctionContext **)&this->field_0x50;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(pFVar2,(int *)&this->field_0x48);
  *(float **)&this->field_0x38 = pfVar3;
  iVar1 = pFVar2->PerInstanceFnInstanceIdx;
  *(float **)&this->field_0x38 = pfVar3 + iVar1 * *(int *)&this->field_0x48;
  *(float **)&this->field_0x40 = pfVar3 + iVar1 * *(int *)&this->field_0x48;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  return this;
}

// RandRange @ 14905f8a0

int __thiscall
TNDIRandomHelper<FNDIRandomInfoPolicy>::RandRange
          (TNDIRandomHelper<FNDIRandomInfoPolicy> *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  lVar1 = *(longlong *)this;
  if (*(int *)&this->field_0x60 == -1) {
    uVar3 = *(int *)(*(longlong *)(lVar1 + 0x38) + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*(longlong *)(lVar1 + 0x38) + 4) = uVar3;
    fVar8 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 0x40);
    if (*plVar2 == 0) {
      pvVar4 = FMemory::MallocZeroed((longlong)*(int *)(lVar1 + 0x1c) << 2,0);
      *plVar2 = (longlong)pvVar4;
    }
    uVar3 = *(uint *)(**(longlong **)(lVar1 + 0x40) + (longlong)param_1 * 4);
    *(uint *)(**(longlong **)(lVar1 + 0x40) + (longlong)param_1 * 4) = uVar3 + 1;
    iVar7 = *(int *)&this->field_0x5c * 0x19660d + 0x3c6ef35f;
    iVar5 = (*(int *)&this->field_0x60 << 0x10 | uVar3) * 0x19660d + 0x3c6ef35f;
    iVar6 = *(int *)&this->field_0x58 * 0x19660d + 0x3c6ef35f + iVar5 * iVar7;
    iVar7 = iVar5 * iVar6 + iVar7;
    fVar8 = (float)((iVar7 * iVar6 + iVar5) * iVar7 + iVar6 >> 8 & 0xffffff) * __real_33800000;
  }
  return (int)((float)((param_3 - param_2) + 1) * fVar8) + param_2;
}

