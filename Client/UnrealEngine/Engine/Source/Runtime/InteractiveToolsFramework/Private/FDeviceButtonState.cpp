// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// FDeviceButtonState @ 149638ac0

FDeviceButtonState * __thiscall FDeviceButtonState::FDeviceButtonState(FDeviceButtonState *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FKeyDetails,1> *pTVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar5;
  undefined8 local_20 [3];
  
  pTVar4 = &(this->Button).KeyDetails;
  uVar5 = 0;
  pTVar4->Object = (FKeyDetails *)0x0;
  (this->Button).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Button).KeyName.ComparisonIndex = 0;
  (this->Button).KeyName.Number = 0;
  if ((pTVar4 != (TSharedPtr<FKeyDetails,1> *)local_20) &&
     (pTVar3 = (this->Button).KeyDetails.SharedReferenceCount.ReferenceController,
     pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
    (this->Button).KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    LOCK();
    paVar1 = &pTVar3->SharedReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)pTVar3->_padding_)();
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1,in_R8,in_R9,uVar5);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->bPressed = false;
  this->bDown = false;
  this->bReleased = false;
  this->bDoubleClicked = false;
  return this;
}

// StaticStruct @ 14966d640

UScriptStruct * __cdecl FDeviceButtonState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDeviceButtonState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FDeviceButtonState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDeviceButtonState,(UObject *)pUVar1,
                         L"DeviceButtonState");
  }
  return Z_Registration_Info_UScriptStruct_FDeviceButtonState.OuterSingleton;
}

// operator= @ 14968ad40

FDeviceButtonState * __thiscall
FDeviceButtonState::operator=(FDeviceButtonState *this,FDeviceButtonState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->Button).KeyName = (param_1->Button).KeyName;
  pTVar1 = (param_1->Button).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Button).KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Button).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Button).KeyDetails.Object = pFVar2;
  (this->Button).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bPressed = param_1->bPressed;
  this->bDown = param_1->bDown;
  this->bReleased = param_1->bReleased;
  this->bDoubleClicked = param_1->bDoubleClicked;
  return this;
}

