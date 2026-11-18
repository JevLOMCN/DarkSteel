// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FInputAxisKeyMapping @ 147abbce0

FInputAxisKeyMapping * __thiscall
FInputAxisKeyMapping::FInputAxisKeyMapping
          (FInputAxisKeyMapping *this,FName param_1,FKey *param_2,float param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Scale = param_3;
  this->AxisName = param_1;
  (this->Key).KeyName = param_2->KeyName;
  (this->Key).KeyDetails.Object = (param_2->KeyDetails).Object;
  pTVar1 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// StaticStruct @ 1488ee7b0

UScriptStruct * __cdecl FInputAxisKeyMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputAxisKeyMapping.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputAxisKeyMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisKeyMapping,(UObject *)pUVar1,
                         L"InputAxisKeyMapping");
  }
  return Z_Registration_Info_UScriptStruct_FInputAxisKeyMapping.OuterSingleton;
}

// operator< @ 14890fae0

bool __thiscall
FInputAxisKeyMapping::operator<(FInputAxisKeyMapping *this,FInputAxisKeyMapping *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ::FName::Compare(&this->AxisName,&param_1->AxisName);
  if (iVar2 < 0) {
    return true;
  }
  if (this->AxisName == param_1->AxisName) {
    iVar2 = ::FName::Compare(&(this->Key).KeyName,&(param_1->Key).KeyName);
    if (iVar2 < 0) {
      bVar1 = true;
    }
    else if ((this->Key).KeyName == (param_1->Key).KeyName) {
      bVar1 = this->Scale < param_1->Scale;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}

