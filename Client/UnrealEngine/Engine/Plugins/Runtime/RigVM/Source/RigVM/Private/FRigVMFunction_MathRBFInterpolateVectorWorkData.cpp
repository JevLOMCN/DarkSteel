// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a137da0

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateVectorWorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData
                           ,(UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateVectorWorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData.
         OuterSingleton;
}

// operator= @ 14a192680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMFunction_MathRBFInterpolateVectorWorkData * __thiscall
FRigVMFunction_MathRBFInterpolateVectorWorkData::operator=
          (FRigVMFunction_MathRBFInterpolateVectorWorkData *this,
          FRigVMFunction_MathRBFInterpolateVectorWorkData *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)this,
             (TArray<float,TSizedDefaultAllocator<32>_> *)param_1);
  *(char *)&(this->Interpolator)._padding_ = (char)(param_1->Interpolator)._padding_;
  uVar2 = *(undefined4 *)&(param_1->Interpolator).Nodes.DataPtr;
  uVar3 = *(undefined4 *)((longlong)&(param_1->Interpolator).Nodes.DataPtr + 4);
  iVar4 = (param_1->Interpolator).Nodes.ArrayNum;
  uVar5 = *(undefined4 *)&(param_1->Interpolator).Nodes.field_0xc;
  uStack_20 = (longlong *)0x0;
  *(undefined4 *)&(this->Interpolator).Nodes.DataPtr = uVar2;
  *(undefined4 *)((longlong)&(this->Interpolator).Nodes.DataPtr + 4) = uVar3;
  (this->Interpolator).Nodes.ArrayNum = iVar4;
  *(undefined4 *)&(this->Interpolator).Nodes.field_0xc = uVar5;
  local_48 = *(longlong *)&(param_1->Interpolator).WeightFunc;
  if (local_48 != 0) {
    puVar1 = *(undefined8 **)&(param_1->Interpolator).WeightFunc.field_0x28;
    puVar11 = (undefined8 *)&(param_1->Interpolator).WeightFunc.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar11 = puVar1;
    }
    (**(code **)*puVar11)(uVar2,&local_38);
  }
  lVar9 = *(longlong *)&(this->Interpolator).WeightFunc;
  uVar10 = *(undefined8 *)&(this->Interpolator).WeightFunc.field_0x8;
  uVar2 = *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x10;
  uVar3 = *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x14;
  uVar5 = *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x18;
  uVar6 = *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x1c;
  uVar7 = *(undefined8 *)&(this->Interpolator).WeightFunc.field_0x20;
  plVar8 = *(longlong **)&(this->Interpolator).WeightFunc.field_0x28;
  *(longlong *)&(this->Interpolator).WeightFunc = local_48;
  *(undefined8 *)&(this->Interpolator).WeightFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x10 = local_38;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x14 = uStack_34;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x18 = uStack_30;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x1c = uStack_2c;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->Interpolator).WeightFunc.field_0x2c = uStack_20._4_4_;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  local_48 = lVar9;
  uStack_40 = uVar10;
  if (lVar9 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Targets,&param_1->Targets);
  this->Hash = param_1->Hash;
  this->bAreTargetsConstant = param_1->bAreTargetsConstant;
  return this;
}

