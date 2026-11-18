// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FInputActionKeyMapping @ 147abbc60

FInputActionKeyMapping * __thiscall
FInputActionKeyMapping::FInputActionKeyMapping
          (FInputActionKeyMapping *this,FName param_1,FKey *param_2,bool param_3,bool param_4,
          bool param_5,bool param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->bShift = '\0';
  this->ActionName = param_1;
  this->field_0x8 =
       ((param_5 | param_6 * '\x02') * '\x02' | param_4) * '\x02' | param_3 | this->field_0x8 & 0xf1
  ;
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

// StaticStruct @ 1488ee500

UScriptStruct * __cdecl FInputActionKeyMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputActionKeyMapping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputActionKeyMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputActionKeyMapping,(UObject *)pUVar1,
                         L"InputActionKeyMapping");
  }
  return Z_Registration_Info_UScriptStruct_FInputActionKeyMapping.OuterSingleton;
}

// FInputActionKeyMapping @ 148907920

FInputActionKeyMapping * __thiscall
FInputActionKeyMapping::FInputActionKeyMapping
          (FInputActionKeyMapping *this,FInputActionKeyMapping *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  byte bVar2;
  
  this->ActionName = param_1->ActionName;
  bVar2 = (this->bShift ^ param_1->bShift) & 1 ^ this->field_0x8;
  this->field_0x8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x8) & 2 ^ bVar2;
  this->field_0x8 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x8) & 4 ^ bVar2;
  this->field_0x8 = bVar2;
  this->field_0x8 = (bVar2 ^ param_1->field_0x8) & 8 ^ bVar2;
  (this->Key).KeyName = (param_1->Key).KeyName;
  (this->Key).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

