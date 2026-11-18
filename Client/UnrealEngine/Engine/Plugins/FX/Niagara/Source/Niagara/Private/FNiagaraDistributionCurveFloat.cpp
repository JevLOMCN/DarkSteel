// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 1494169f0

UScriptStruct * __cdecl FNiagaraDistributionCurveFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionCurveFloat,(UObject *)pUVar1,
                         L"NiagaraDistributionCurveFloat");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.OuterSingleton;
}

// FNiagaraDistributionCurveFloat @ 149425d80

FNiagaraDistributionCurveFloat * __thiscall
FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat
          (FNiagaraDistributionCurveFloat *this,initializer_list<float> *param_1)

{
  byte *pbVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  float *pfVar4;
  float *_Src;
  int iVar5;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar5;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  pfVar4 = param_1->_Last;
  pTVar2 = &this->Values;
  _Src = param_1->_First;
  this->_padding_ = (longlong)&___7FNiagaraDistributionCurveFloat__6B_;
  piVar3 = &(this->Values).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  *(undefined1 *)&this->_padding_ = 7;
  iVar5 = (int)((longlong)pfVar4 - (longlong)_Src >> 2);
  (this->Values).ArrayNum = iVar5;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
  }
  return this;
}

// FNiagaraDistributionCurveFloat @ 149425e70

FNiagaraDistributionCurveFloat * __thiscall
FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat
          (FNiagaraDistributionCurveFloat *this,ENiagaraDistributionCurveLUTMode param_1)

{
  byte *pbVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_res8;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar4;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  pTVar2 = &this->Values;
  *(undefined1 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FNiagaraDistributionCurveFloat__6B_;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Values).ArrayMax;
  *piVar3 = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  (this->Values).ArrayNum = 2;
  local_res8 = 0x3f800000;
  if (param_1 != Sample) {
    local_res8 = 0;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&pTVar2->AllocatorInstance,2,piVar3);
  *(ulonglong *)(pTVar2->AllocatorInstance).Data = CONCAT44(0x3f800000,local_res8);
  return this;
}

// FNiagaraDistributionCurveFloat @ 149425f60

FNiagaraDistributionCurveFloat * __thiscall
FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat(FNiagaraDistributionCurveFloat *this)

{
  FNiagaraDistributionCurveFloat(this,Sample);
  this->_padding_ = (longlong)&___7FNiagaraDistributionCurveFloat__6B_;
  return this;
}

