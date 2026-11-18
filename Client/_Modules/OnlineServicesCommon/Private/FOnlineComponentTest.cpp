// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// FOnlineComponentTest @ 14ee0de40

FOnlineComponentTest * __thiscall
FOnlineComponentTest::FOnlineComponentTest(FOnlineComponentTest *this,FOnlineServicesTest *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ForAnyElementType _Src;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar2;
  undefined1 *puVar3;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Test");
  *(FOnlineServicesTest **)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7__TOnlineComponent_UITestInterface_Test_Online_UE___Online_UE__6B_;
  puVar3 = &this->field_0x8;
  if (this == (FOnlineComponentTest *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  pTVar2 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined1 **)&this->field_0x10 = puVar3;
    *(undefined8 *)&this->field_0x18 = 0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    *(undefined1 **)&this->field_0x10 = puVar3;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar1;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  puVar3 = &this->field_0x20;
  *(undefined8 *)puVar3 = 0;
  *(int *)&this->field_0x28 = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *(undefined4 *)&this->field_0x2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)puVar3,local_38.Data.ArrayNum,
               (int *)&this->field_0x2c);
    memcpy(*(void **)puVar3,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 0x80;
  *(undefined4 *)&this->field_0x60 = 0xffffffff;
  *(undefined4 *)&this->field_0x64 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  UE::Online::FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->field_0x80,
             (FOnlineAsyncOpQueueParallel *)&param_1->field_0x1d0);
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined4 *)&this->field_0x128 = 0;
  *(undefined4 *)&this->field_0x12c = 0x80;
  *(undefined4 *)&this->field_0x130 = 0xffffffff;
  *(undefined4 *)&this->field_0x134 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined4 *)&this->field_0x148 = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7FOnlineComponentTest__6B_;
  return this;
}

