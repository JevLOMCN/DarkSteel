// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 4

// StaticStruct @ 14a7846c0

UScriptStruct * __cdecl FCommonInputTypeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonInputTypeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputTypeInfo,(UObject *)pUVar1,
                         L"CommonInputTypeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCommonInputTypeInfo.OuterSingleton;
}

// FCommonInputTypeInfo @ 14a7aa510

FCommonInputTypeInfo * __thiscall
FCommonInputTypeInfo::FCommonInputTypeInfo(FCommonInputTypeInfo *this)

{
  (this->Key).KeyName.ComparisonIndex = 0;
  (this->Key).KeyName.Number = 0;
  (this->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&this->OverrideBrush);
  this->OverrrideState = Enabled;
  this->bActionRequiresHold = false;
  (this->OverrideBrush).DrawAs.Value = '\0';
  this->HoldTime = 0.5;
  this->HoldRollbackTime = 0.0;
  return this;
}

// operator= @ 14a7b47b0

FCommonInputTypeInfo * __thiscall
FCommonInputTypeInfo::operator=(FCommonInputTypeInfo *this,FCommonInputTypeInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->Key).KeyName = (param_1->Key).KeyName;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Key).KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.Object = pFVar2;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->OverrrideState = param_1->OverrrideState;
  this->bActionRequiresHold = param_1->bActionRequiresHold;
  this->HoldTime = param_1->HoldTime;
  this->HoldRollbackTime = param_1->HoldRollbackTime;
  FSlateBrush::operator=(&this->OverrideBrush,&param_1->OverrideBrush);
  return this;
}

// GetKey @ 14a7e3210

FKey * __thiscall
FCommonInputTypeInfo::GetKey(FCommonInputTypeInfo *this,FKey *__return_storage_ptr__)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKeyDetails *pFVar3;
  
  FVar1 = (this->Key).KeyName;
  pTVar2 = (this->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar3 = (this->Key).KeyDetails.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->KeyName = FVar1;
  (__return_storage_ptr__->KeyDetails).Object = pFVar3;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

