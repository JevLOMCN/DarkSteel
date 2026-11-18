// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ContainsObjectReference @ 141f73620

bool __thiscall
TFObjectPropertyBase<TObjectPtr<UObject>_>::ContainsObjectReference
          (TFObjectPropertyBase<TObjectPtr<UObject>_> *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)param_2 & 1);
}

// ContainsObjectReference @ 141f73630

bool __thiscall
TFObjectPropertyBase<FSoftObjectPtr>::ContainsObjectReference
          (TFObjectPropertyBase<FSoftObjectPtr> *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  if (((param_2 & Weak) == None) && ((param_2 & Soft) == None)) {
    return false;
  }
  return true;
}

// ContainsObjectReference @ 14216d240

bool __thiscall
TFObjectPropertyBase<FLazyObjectPtr>::ContainsObjectReference
          (TFObjectPropertyBase<FLazyObjectPtr> *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)(param_2 >> 1) & 1);
}

// ContainsObjectReference @ 1421c2f10

bool __thiscall
TFObjectPropertyBase<FWeakObjectPtr>::ContainsObjectReference
          (TFObjectPropertyBase<FWeakObjectPtr> *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)(param_2 >> 1) & 1);
}

