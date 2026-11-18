// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 3

// StaticStruct @ 14237a970

UScriptStruct * __cdecl FConstraintDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDescriptor.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FConstraintDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptor,(UObject *)pUVar1,
                         L"ConstraintDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintDescriptor.OuterSingleton;
}

// operator= @ 14237eae0

/* WARNING: Removing unreachable block (ram,0x00014237eb30) */

FConstraintDescriptor * __thiscall
FConstraintDescriptor::operator=(FConstraintDescriptor *this,FConstraintDescriptor *param_1)

{
  undefined2 uVar1;
  FAimConstraintDescription *pFVar2;
  FConstraintDescriptionEx *pFVar3;
  
  pFVar3 = this->ConstraintDescription;
  if (pFVar3 != (FConstraintDescriptionEx *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
    this->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
  }
  this->Type = param_1->Type;
  pFVar2 = (FAimConstraintDescription *)param_1->ConstraintDescription;
  if (pFVar2 != (FAimConstraintDescription *)0x0) {
    if (param_1->Type == Transform) {
      pFVar3 = ::operator_new(0x18);
      if (pFVar3 == (FConstraintDescriptionEx *)0x0) {
        this->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
        return this;
      }
      pFVar3->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
      uVar1 = (undefined2)pFVar2->_padding_;
      (pFVar3->AxesFilterOption).bX = (bool)(char)uVar1;
      (pFVar3->AxesFilterOption).bY = (bool)(char)((ushort)uVar1 >> 8);
      (pFVar3->AxesFilterOption).bZ = *(bool *)((longlong)&pFVar2->_padding_ + 2);
      pFVar3->_padding_ = (longlong)&___7FTransformConstraintDescription__6B_;
      *(undefined1 *)&pFVar3[1]._padding_ = *(undefined1 *)&(pFVar2->LookAt_Axis).Axis.field0_0x0;
      this->ConstraintDescription = pFVar3;
      return this;
    }
    if (param_1->Type == Aim) {
      Set(this,pFVar2);
    }
  }
  return this;
}

// Set @ 142385890

void __thiscall
FConstraintDescriptor::Set(FConstraintDescriptor *this,FAimConstraintDescription *param_1)

{
  undefined2 uVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined5 uVar6;
  FConstraintDescriptionEx *pFVar7;
  
  pFVar7 = this->ConstraintDescription;
  if (pFVar7 != (FConstraintDescriptionEx *)0x0) {
    (**(code **)pFVar7->_padding_)(pFVar7,1);
    this->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
  }
  pFVar7 = ::operator_new(0x70);
  if (pFVar7 != (FConstraintDescriptionEx *)0x0) {
    pFVar7->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
    uVar1 = (undefined2)param_1->_padding_;
    (pFVar7->AxesFilterOption).bX = (bool)(char)uVar1;
    (pFVar7->AxesFilterOption).bY = (bool)(char)((ushort)uVar1 >> 8);
    (pFVar7->AxesFilterOption).bZ = *(bool *)((longlong)&param_1->_padding_ + 2);
    pFVar7->_padding_ = (longlong)&___7FAimConstraintDescription__6B_;
    dVar2 = (param_1->LookAt_Axis).Axis.field0_0x0._s_0.Y;
    pFVar7[1]._padding_ = (longlong)(param_1->LookAt_Axis).Axis.field0_0x0._s_0.X;
    *(double *)&pFVar7[1].AxesFilterOption = dVar2;
    bVar3 = (param_1->LookAt_Axis).bInLocalSpace;
    uVar4 = (param_1->LookAt_Axis).field_0x19;
    uVar5 = (param_1->LookAt_Axis).field_0x1a;
    uVar6 = *(undefined5 *)&(param_1->LookAt_Axis).field_0x1b;
    pFVar7[2]._padding_ = (longlong)(param_1->LookAt_Axis).Axis.field0_0x0._s_0.Z;
    pFVar7[2].AxesFilterOption.bX = bVar3;
    pFVar7[2].AxesFilterOption.bY = (bool)uVar4;
    pFVar7[2].AxesFilterOption.bZ = (bool)uVar5;
    *(undefined5 *)&pFVar7[2].field_0xb = uVar6;
    dVar2 = (param_1->LookUp_Axis).Axis.field0_0x0._s_0.Y;
    pFVar7[3]._padding_ = (longlong)(param_1->LookUp_Axis).Axis.field0_0x0._s_0.X;
    *(double *)&pFVar7[3].AxesFilterOption = dVar2;
    bVar3 = (param_1->LookUp_Axis).bInLocalSpace;
    uVar4 = (param_1->LookUp_Axis).field_0x19;
    uVar5 = (param_1->LookUp_Axis).field_0x1a;
    uVar6 = *(undefined5 *)&(param_1->LookUp_Axis).field_0x1b;
    pFVar7[4]._padding_ = (longlong)(param_1->LookUp_Axis).Axis.field0_0x0._s_0.Z;
    pFVar7[4].AxesFilterOption.bX = bVar3;
    pFVar7[4].AxesFilterOption.bY = (bool)uVar4;
    pFVar7[4].AxesFilterOption.bZ = (bool)uVar5;
    *(undefined5 *)&pFVar7[4].field_0xb = uVar6;
    *(bool *)&pFVar7[5]._padding_ = param_1->bUseLookUp;
    dVar2 = (param_1->LookUpTarget).field0_0x0._s_0.Y;
    *(double *)&pFVar7[5].AxesFilterOption = (param_1->LookUpTarget).field0_0x0._s_0.X;
    pFVar7[6]._padding_ = (longlong)dVar2;
    *(double *)&pFVar7[6].AxesFilterOption = (param_1->LookUpTarget).field0_0x0._s_0.Z;
    this->ConstraintDescription = pFVar7;
    return;
  }
  this->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
  return;
}

