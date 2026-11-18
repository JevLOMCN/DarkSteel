// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FClassNetCache @ 141fbce20

FClassNetCache * __thiscall FClassNetCache::FClassNetCache(FClassNetCache *this,UClass *param_1)

{
  UClass *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Class).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Class).WeakPtr,(FObjectPtr)&local_res8);
  (this->Fields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fields).ArrayNum = 0;
  (this->Fields).ArrayMax = 0;
  *(undefined8 *)&this->FieldMap = 0;
  *(undefined8 *)&(this->FieldMap).field_0x8 = 0;
  *(undefined8 *)&(this->FieldMap).field_0x20 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x28 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FieldMap).field_0x34 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FieldMap).field_0x40 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x48 = 0;
  *(undefined8 *)&this->FieldChecksumMap = 0;
  *(undefined8 *)&(this->FieldChecksumMap).field_0x8 = 0;
  *(undefined8 *)&(this->FieldChecksumMap).field_0x20 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x28 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x34 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FieldChecksumMap).field_0x40 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x48 = 0;
  return this;
}

// FClassNetCache @ 141fbcf10

FClassNetCache * __thiscall FClassNetCache::FClassNetCache(FClassNetCache *this)

{
  (this->Class).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Fields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fields).ArrayNum = 0;
  (this->Fields).ArrayMax = 0;
  *(undefined8 *)&this->FieldMap = 0;
  *(undefined8 *)&(this->FieldMap).field_0x8 = 0;
  *(undefined8 *)&(this->FieldMap).field_0x20 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x28 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FieldMap).field_0x34 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FieldMap).field_0x40 = 0;
  *(undefined4 *)&(this->FieldMap).field_0x48 = 0;
  *(undefined8 *)&this->FieldChecksumMap = 0;
  *(undefined8 *)&(this->FieldChecksumMap).field_0x8 = 0;
  *(undefined8 *)&(this->FieldChecksumMap).field_0x20 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x28 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x34 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FieldChecksumMap).field_0x40 = 0;
  *(undefined4 *)&(this->FieldChecksumMap).field_0x48 = 0;
  return this;
}

// CountBytes @ 141fc90e0

void __thiscall FClassNetCache::CountBytes(FClassNetCache *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Fields).ArrayNum * 0x18,
             (longlong)(this->Fields).ArrayMax * 0x18);
  TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
                *)&this->FieldMap,param_1);
  TSet<TTuple<unsigned_int,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FFieldNetCache_*,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<unsigned_int,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FFieldNetCache_*,0>,FDefaultSetAllocator>
                *)&this->FieldChecksumMap,param_1);
  return;
}

