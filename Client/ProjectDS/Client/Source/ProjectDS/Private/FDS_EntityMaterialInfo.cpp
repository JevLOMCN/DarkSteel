// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b490260

UScriptStruct * __cdecl FDS_EntityMaterialInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_EntityMaterialInfo,(UObject *)pUVar1,
                         L"DS_EntityMaterialInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_EntityMaterialInfo.OuterSingleton;
}

// IsValidInfo @ 14bc4bd00

bool __thiscall FDS_EntityMaterialInfo::IsValidInfo(FDS_EntityMaterialInfo *this)

{
  if (this->EntityMaterialType != Default) {
    return this->EntityMaterialType != Max;
  }
  return false;
}

// ResetInfo @ 14bc5ae40

void __thiscall FDS_EntityMaterialInfo::ResetInfo(FDS_EntityMaterialInfo *this)

{
  FStreamableHandle *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->MaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MaterialPath).AssetPath.AssetName.Number = 0;
  (this->MaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MaterialPath).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&(this->MaterialPath).SubPathString,0);
  this_00 = (this->MaterialAsyncLoadHandle).Object;
  if (this_00 != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(this_00);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MaterialAsyncLoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      (this->MaterialAsyncLoadHandle).Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MaterialAsyncLoadHandle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  (this->MaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return;
}

