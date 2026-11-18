// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a37b9d0

UScriptStruct * __cdecl FModuleReferenceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModuleReferenceData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModuleReferenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModuleReferenceData,(UObject *)pUVar1,
                         L"ModuleReferenceData");
  }
  return Z_Registration_Info_UScriptStruct_FModuleReferenceData.OuterSingleton;
}

// FModuleReferenceData @ 14a3b7070

FModuleReferenceData * __thiscall
FModuleReferenceData::FModuleReferenceData(FModuleReferenceData *this,FRigModuleReference *param_1)

{
  undefined1 *puVar1;
  FRigHierarchyModulePath *pFVar2;
  UClass *pUVar3;
  FSoftObjectPath local_68;
  FRigHierarchyModulePath local_48;
  
  puVar1 = &(this->ReferencedModule).field_0x10;
  (this->ModulePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulePath).Data.ArrayNum = 0;
  (this->ModulePath).Data.ArrayMax = 0;
  *(undefined8 *)&this->ReferencedModule = 0;
  *(undefined8 *)&(this->ReferencedModule).field_0x8 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ReferencedModule).field_0x18 = 0;
  if (param_1 != (FRigModuleReference *)0x0) {
    pFVar2 = FRigModuleReference::GetModulePath(param_1,&local_48);
    ::FString::operator=(&this->ModulePath,&pFVar2->ModulePath);
    if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
    }
    pUVar3 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
    if (pUVar3 != (UClass *)0x0) {
      pUVar3 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
      local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_68.AssetPath.PackageName.Number = 0;
      local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_68.AssetPath.AssetName.Number = 0;
      local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.SubPathString.Data.ArrayNum = 0;
      local_68.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_68,(UObject *)pUVar3);
      *(uint *)&(this->ReferencedModule).field_0x0 =
           local_68.AssetPath.PackageName.ComparisonIndex.Value;
      *(uint *)&(this->ReferencedModule).field_0x4 = local_68.AssetPath.PackageName.Number;
      *(uint *)&(this->ReferencedModule).field_0x8 =
           local_68.AssetPath.AssetName.ComparisonIndex.Value;
      *(uint *)&(this->ReferencedModule).field_0xc = local_68.AssetPath.AssetName.Number;
      if ((FUtf8String *)puVar1 != &local_68.SubPathString) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_68.SubPathString.Data.AllocatorInstance.Data;
        *(int *)&(this->ReferencedModule).field_0x18 = local_68.SubPathString.Data.ArrayNum;
        *(int *)&(this->ReferencedModule).field_0x1c = local_68.SubPathString.Data.ArrayMax;
        local_68.SubPathString.Data.ArrayNum = 0;
        local_68.SubPathString.Data.ArrayMax = 0;
        local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

