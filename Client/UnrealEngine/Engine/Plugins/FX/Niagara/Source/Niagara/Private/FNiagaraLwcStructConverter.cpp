// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FNiagaraLwcStructConverter @ 149332f20

FNiagaraLwcStructConverter * __thiscall
FNiagaraLwcStructConverter::FNiagaraLwcStructConverter
          (FNiagaraLwcStructConverter *this,FNiagaraLwcStructConverter *param_1)

{
  TArray<FNiagaraStructConversionStep,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->ConversionSteps;
  this->LWCSize = param_1->LWCSize;
  this->SWCSize = param_1->SWCSize;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ConversionSteps).ArrayMax;
  iVar3 = (param_1->ConversionSteps).ArrayNum;
  _Src = (param_1->ConversionSteps).AllocatorInstance.Data;
  (this->ConversionSteps).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x14);
  }
  return this;
}

// StaticStruct @ 14940d040

UScriptStruct * __cdecl FNiagaraLwcStructConverter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter,(UObject *)pUVar1,
                         L"NiagaraLwcStructConverter");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.OuterSingleton;
}

// AddConversionStep @ 1494306d0

void __thiscall
FNiagaraLwcStructConverter::AddConversionStep
          (FNiagaraLwcStructConverter *this,int param_1,int param_2,int param_3,int param_4,
          ENiagaraStructConversionType param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceBytes >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                       ,0x146,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceOffset >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                       ,0x147,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSimulationBytes >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                       ,0x148,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_4 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSimulationOffset >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                       ,0x149,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ConversionSteps).ArrayNum;
  piVar1 = &(this->ConversionSteps).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(this->ConversionSteps).AllocatorInstance,piVar1);
  }
  (this->ConversionSteps).ArrayNum = iVar5 + 1;
  lVar6 = (longlong)iVar5;
  pFVar2 = (this->ConversionSteps).AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar6 * 0x14 + 4) = param_2;
  *(int *)(pFVar2 + lVar6 * 0x14 + 8) = param_3;
  *(int *)(pFVar2 + lVar6 * 0x14) = param_1;
  *(int *)(pFVar2 + lVar6 * 0x14 + 0xc) = param_4;
  pFVar2[lVar6 * 0x14 + 0x10] = (FScriptContainerElement)param_5;
  this->SWCSize = param_3 + param_4;
  this->LWCSize = param_1 + param_2;
  return;
}

// ConvertDataFromSimulation @ 14943e310

void __thiscall
FNiagaraLwcStructConverter::ConvertDataFromSimulation
          (FNiagaraLwcStructConverter *this,uchar *param_1,uchar *param_2,int param_3)

{
  FNiagaraStructConversionStep *pFVar1;
  int iVar2;
  FNiagaraStructConversionStep *this_00;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ConversionSteps).ArrayNum;
  if ((((0 < iVar2) && (0 < this->LWCSize)) && (0 < this->SWCSize)) && (param_3 != 0)) {
    this_00 = (FNiagaraStructConversionStep *)(this->ConversionSteps).AllocatorInstance.Data;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if ((this->ConversionSteps).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraStructConversionStep_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      FNiagaraStructConversionStep::CopyFromSim
                (this_00,param_1,param_2,param_3,this->LWCSize,this->SWCSize);
      this_00 = this_00 + 1;
    }
  }
  return;
}

// ConvertDataToSimulation @ 14943e3b0

void __thiscall
FNiagaraLwcStructConverter::ConvertDataToSimulation
          (FNiagaraLwcStructConverter *this,uchar *param_1,uchar *param_2,int param_3)

{
  FNiagaraStructConversionStep *pFVar1;
  int iVar2;
  FNiagaraStructConversionStep *this_00;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ConversionSteps).ArrayNum;
  if ((((0 < iVar2) && (0 < this->LWCSize)) && (0 < this->SWCSize)) && (param_3 != 0)) {
    this_00 = (FNiagaraStructConversionStep *)(this->ConversionSteps).AllocatorInstance.Data;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if ((this->ConversionSteps).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraStructConversionStep_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      FNiagaraStructConversionStep::CopyToSim
                (this_00,param_2,param_1,param_3,this->LWCSize,this->SWCSize);
      this_00 = this_00 + 1;
    }
  }
  return;
}

