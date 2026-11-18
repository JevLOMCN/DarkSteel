// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FInputKeyEventArgs @ 147cc4470

FInputKeyEventArgs * __thiscall
FInputKeyEventArgs::FInputKeyEventArgs
          (FInputKeyEventArgs *this,FViewport *param_1,FInputDeviceId param_2,FKey *param_3,
          EInputEvent param_4,float param_5,bool param_6,ulong64 param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  IPlatformInputDeviceMapper *pIVar3;
  FPlatformUserId local_res18 [4];
  
  this->Viewport = param_1;
  (this->InputDevice).InternalId = param_2.InternalId;
  (this->Key).KeyName = param_3->KeyName;
  (this->Key).KeyDetails.Object = (param_3->KeyDetails).Object;
  pTVar1 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Event = param_4;
  this->bIsTouchEvent = param_6;
  this->EventTimestamp = param_7;
  this->AmountDepressed = param_5;
  this->DeltaTime = 0.016666668;
  this->NumSamples = 1;
  this->bIsSimulatedInput = false;
  pIVar3 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_res18,param_2.InternalId);
  iVar2 = FGenericPlatformMisc::GetUserIndexForPlatformUser(local_res18[0]);
  this->ControllerId = iVar2;
  return this;
}

// CreateSimulated @ 147ceb310

FInputKeyEventArgs * __cdecl
FInputKeyEventArgs::CreateSimulated
          (FInputKeyEventArgs *__return_storage_ptr__,FKey *param_1,EInputEvent param_2,
          float param_3,int param_4,FInputDeviceId param_5,bool param_6,FViewport *param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  FInputDeviceId FVar2;
  bool bVar3;
  int iVar4;
  IPlatformInputDeviceMapper *pIVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  FVar2 = param_5;
  __return_storage_ptr__->Viewport = param_7;
  (__return_storage_ptr__->InputDevice).InternalId = param_5.InternalId;
  (__return_storage_ptr__->Key).KeyName = param_1->KeyName;
  (__return_storage_ptr__->Key).KeyDetails.Object = (param_1->KeyDetails).Object;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->bIsTouchEvent = param_6;
  __return_storage_ptr__->EventTimestamp = (ulong64)local_res8;
  __return_storage_ptr__->AmountDepressed = param_3;
  __return_storage_ptr__->Event = param_2;
  __return_storage_ptr__->DeltaTime = 0.016666668;
  __return_storage_ptr__->NumSamples = 1;
  __return_storage_ptr__->bIsSimulatedInput = false;
  pIVar5 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar5->_padding_ + 0x68))(pIVar5,&param_5,FVar2.InternalId);
  iVar4 = FGenericPlatformMisc::GetUserIndexForPlatformUser(param_5.InternalId);
  __return_storage_ptr__->ControllerId = iVar4;
  if (param_4 == -1) {
    bVar3 = FKey::IsAnalog(param_1);
    param_4 = (int)bVar3;
  }
  __return_storage_ptr__->NumSamples = param_4;
  __return_storage_ptr__->bIsSimulatedInput = true;
  return __return_storage_ptr__;
}

// GetPlatformUser @ 147d0bc50

FPlatformUserId __thiscall FInputKeyEventArgs::GetPlatformUser(FInputKeyEventArgs *this)

{
  IPlatformInputDeviceMapper *pIVar1;
  int in_EDX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x68))(pIVar1);
  return (FPlatformUserId)in_EDX;
}

