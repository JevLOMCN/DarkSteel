// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 1

// operator<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_> @ 148bedcc0

TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>
::
operator<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>
           *this,TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

