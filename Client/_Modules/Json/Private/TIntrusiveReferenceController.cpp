// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 12

// DestroyObject @ 141dd2a80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::FElement,1>
::DestroyObject(TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::FElement,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2ac0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::StackState,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonSerializerPolicy_JsonObject::StackState,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            (*(TSharedPtr<FJsonValue,1> **)((this->ObjectStorage).Pad + 0x18),
             *(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueNumberString<char8_t>,1>::
DestroyObject(TIntrusiveReferenceController<TJsonValueNumberString<char8_t>,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2b40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueNumberString<wchar_t>,1>::
DestroyObject(TIntrusiveReferenceController<TJsonValueNumberString<wchar_t>,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2b70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueString<char8_t>,1>::DestroyObject
          (TIntrusiveReferenceController<TJsonValueString<char8_t>,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2ba0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TJsonValueString<wchar_t>,1>::DestroyObject
          (TIntrusiveReferenceController<TJsonValueString<wchar_t>,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2bd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonObject,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonObject,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 141dd2c10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueArray,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonValueArray,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValueArray__6B_;
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            (*(TSharedPtr<FJsonValue,1> **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2c60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueBoolean,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonValueBoolean,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2c80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueNull,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonValueNull,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueNumber,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonValueNumber,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

// DestroyObject @ 141dd2cc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FJsonValueObject,1>::DestroyObject
          (TIntrusiveReferenceController<FJsonValueObject,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValueObject__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7FJsonValue__6B_;
  return;
}

