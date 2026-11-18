// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// Reset @ 14445e770

void __thiscall
TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::Reset
          (TLazySingleton<UE::Dataflow::FNodeColorsRegistry> *this)

{
  FNodeColorsRegistry *this_00;
  void *pvVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = this->Ptr;
  if (this_00 != (FNodeColorsRegistry *)0x0) {
    bVar2 = UObjectInitialized();
    if (bVar2) {
      pUVar3 = UDataflowSettings::StaticClass();
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
        pUVar3 = UDataflowSettings::StaticClass();
        if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar3);
        }
        TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
        ::Remove((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                  *)&(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8,
                 (FDelegateHandle)(this_00->DataflowSettingsChangedDelegateHandle).ID);
      }
    }
    *(undefined4 *)&(this_00->ColorsMap).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->ColorsMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    this->Ptr = (FNodeColorsRegistry *)0x0;
  }
  return;
}

// Reset @ 14445e810

void __thiscall
TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::Reset
          (TLazySingleton<UE::Dataflow::FPinSettingsRegistry> *this)

{
  FPinSettingsRegistry *this_00;
  void *pvVar1;
  bool bVar2;
  UClass *pUVar3;
  
  this_00 = this->Ptr;
  if (this_00 != (FPinSettingsRegistry *)0x0) {
    bVar2 = UObjectInitialized();
    if (bVar2) {
      pUVar3 = UDataflowSettings::StaticClass();
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
        pUVar3 = UDataflowSettings::StaticClass();
        if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar3);
        }
        TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
        ::Remove((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                  *)&(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8,
                 (FDelegateHandle)(this_00->DataflowSettingsChangedDelegateHandle).ID);
      }
    }
    *(undefined4 *)&(this_00->SettingsMap).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->SettingsMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    this->Ptr = (FPinSettingsRegistry *)0x0;
  }
  return;
}

