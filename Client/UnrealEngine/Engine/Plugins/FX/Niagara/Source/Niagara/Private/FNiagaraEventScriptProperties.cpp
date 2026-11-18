// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1492639c0

UScriptStruct * __cdecl FNiagaraEventScriptProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties,(UObject *)pUVar1,
                         L"NiagaraEventScriptProperties");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.OuterSingleton;
}

// FNiagaraEventScriptProperties @ 1492765e0

FNiagaraEventScriptProperties * __thiscall
FNiagaraEventScriptProperties::FNiagaraEventScriptProperties
          (FNiagaraEventScriptProperties *this,FNiagaraEventScriptProperties *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  UObject *pUVar4;
  void *_Src;
  FNiagaraEventGeneratorProperties *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pUVar4 = (UObject *)param_1->_padding_;
  this->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,_Src,(longlong)iVar3 * 0x18);
  }
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pFVar5 = (FNiagaraEventGeneratorProperties *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    ConstructItems<FNiagaraEventGeneratorProperties,FNiagaraEventGeneratorProperties,int>
              ((void *)*plVar1,pFVar5,iVar3);
  }
  this->ExecutionMode = param_1->ExecutionMode;
  this->SpawnNumber = param_1->SpawnNumber;
  this->MaxEventsPerFrame = param_1->MaxEventsPerFrame;
  uVar6 = (param_1->SourceEmitterID).B;
  uVar7 = (param_1->SourceEmitterID).C;
  uVar8 = (param_1->SourceEmitterID).D;
  (this->SourceEmitterID).A = (param_1->SourceEmitterID).A;
  (this->SourceEmitterID).B = uVar6;
  (this->SourceEmitterID).C = uVar7;
  (this->SourceEmitterID).D = uVar8;
  this->SourceEventName = param_1->SourceEventName;
  this->bRandomSpawnNumber = param_1->bRandomSpawnNumber;
  this->MinSpawnNumber = param_1->MinSpawnNumber;
  this->UpdateAttributeInitialValues = param_1->UpdateAttributeInitialValues;
  return this;
}

