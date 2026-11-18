// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149ee0550

UScriptStruct * __cdecl FDynamicTrackedKeyInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicTrackedKeyInstanceData,(UObject *)pUVar1,
                         L"DynamicTrackedKeyInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicTrackedKeyInstanceData.OuterSingleton;
}

// FDynamicTrackedKeyInstanceData @ 149eed2c0

FDynamicTrackedKeyInstanceData * __thiscall
FDynamicTrackedKeyInstanceData::FDynamicTrackedKeyInstanceData(FDynamicTrackedKeyInstanceData *this)

{
  undefined1 *this_00;
  
  (this->SelectionKey).ActorFilter = AllWorldActors;
  (this->SelectionKey).Selection = Unknown;
  (this->SelectionKey).Tag.ComparisonIndex = 0;
  (this->SelectionKey).Tag.Number = 0;
  (this->SelectionKey).SelectionClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SelectionKey).ObjectPath.AssetPath.PackageName.ComparisonIndex = 0;
  (this->SelectionKey).ObjectPath.AssetPath.PackageName.Number = 0;
  (this->SelectionKey).ObjectPath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->SelectionKey).ObjectPath.AssetPath.AssetName.Number = 0;
  (this->SelectionKey).ObjectPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SelectionKey).ObjectPath.SubPathString.Data.ArrayNum = 0;
  (this->SelectionKey).ObjectPath.SubPathString.Data.ArrayMax = 0;
  (this->SelectionKey).OptionalExtraDependency.field0_0x0.DebugPtr = (UClass *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->SelectionKey).CustomKey.InstancedStruct);
  (this->SelectionKey).CachedTagString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &(this->Settings).SoftObjectPtr.field_0x18;
  (this->SelectionKey).CachedTagString.Data.ArrayNum = 0;
  (this->SelectionKey).CachedTagString.Data.ArrayMax = 0;
  (this->SelectionKey).bTagContainsWildcard = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Settings).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bValue = false;
  return this;
}

