// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 149416a70

UScriptStruct * __cdecl FNiagaraDistributionCurveVector3::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionCurveVector3,
                         (UObject *)pUVar1,L"NiagaraDistributionCurveVector3");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.OuterSingleton;
}

// FNiagaraDistributionCurveVector3 @ 149425f90

FNiagaraDistributionCurveVector3 * __thiscall
FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
          (FNiagaraDistributionCurveVector3 *this,ENiagaraDistributionCurveLUTMode param_1)

{
  byte *pbVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar7 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar7;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  pTVar2 = &this->Values;
  *(undefined1 *)&this->_padding_ = 7;
  piVar3 = &(this->Values).ArrayMax;
  this->_padding_ = (longlong)&___7FNiagaraDistributionCurveVector3__6B_;
  *piVar3 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  uVar6 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_1c = (undefined4)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  uStack_18 = (undefined4)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
  if (param_1 == Sample) {
    fStack_20 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    (this->Values).ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,2,0,&pTVar2->AllocatorInstance,2,piVar3);
    local_res8 = uStack_1c;
    uStackX_c = uStack_18;
  }
  else {
    fStack_20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (this->Values).ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,2,0,&pTVar2->AllocatorInstance,2,piVar3);
    local_res8 = (undefined4)uVar5;
    uStackX_c = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(undefined4 *)pFVar4 = local_res8;
  *(undefined4 *)(pFVar4 + 4) = uStackX_c;
  *(float *)(pFVar4 + 8) = fStack_20;
  *(undefined4 *)(pFVar4 + 0xc) = uStack_1c;
  *(ulonglong *)(pFVar4 + 0x10) = CONCAT44(uVar6,uStack_18);
  return this;
}

// FNiagaraDistributionCurveVector3 @ 1494260e0

FNiagaraDistributionCurveVector3 * __thiscall
FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
          (FNiagaraDistributionCurveVector3 *this)

{
  FNiagaraDistributionCurveVector3(this,Sample);
  this->_padding_ = (longlong)&___7FNiagaraDistributionCurveVector3__6B_;
  return this;
}

