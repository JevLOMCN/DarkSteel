// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a876440

UScriptStruct * __cdecl FObjectContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObjectContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FObjectContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectContextProperty,(UObject *)pUVar1,
                         L"ObjectContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FObjectContextProperty.OuterSingleton;
}

// GetValue @ 14a876480

bool __thiscall
FObjectContextProperty::GetValue
          (FObjectContextProperty *this,FChooserEvaluationContext *param_1,FSoftObjectPath *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  FSoftObjectPath local_58;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar2 = UE::Chooser::ResolvePropertyChain
                    (param_1,(FChooserPropertyBinding *)&this->Binding,&local_38);
  if ((bVar2) && (local_38.Function == (UFunction *)0x0)) {
    if (local_38.PropertyType != SoftObjectRef) {
      local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_58.AssetPath.PackageName.Number = 0;
      local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_58.AssetPath.AssetName.Number = 0;
      local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.SubPathString.Data.ArrayNum = 0;
      local_58.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath
                (&local_58,*(UObject **)(local_38.Container + local_38.PropertyOffset));
      (param_2->AssetPath).PackageName = local_58.AssetPath.PackageName;
      (param_2->AssetPath).AssetName = local_58.AssetPath.AssetName;
      pFVar3 = &param_2->SubPathString;
      if (pFVar3 != &local_58.SubPathString) {
        pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar3->Data).AllocatorInstance.Data = local_58.SubPathString.Data.AllocatorInstance.Data;
        (param_2->SubPathString).Data.ArrayNum = local_58.SubPathString.Data.ArrayNum;
        (param_2->SubPathString).Data.ArrayMax = local_58.SubPathString.Data.ArrayMax;
        local_58.SubPathString.Data.ArrayNum = 0;
        local_58.SubPathString.Data.ArrayMax = 0;
        local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
      }
      return true;
    }
    FSoftObjectPath::operator=
              (param_2,(FSoftObjectPath *)
                       (local_38.Container + (ulonglong)local_38.PropertyOffset + 8));
    return true;
  }
  return false;
}

// GetValue @ 14a8765a0

bool __thiscall
FObjectContextProperty::GetValue
          (FObjectContextProperty *this,FChooserEvaluationContext *param_1,UObject **param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain
                    (param_1,(FChooserPropertyBinding *)&this->Binding,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    if (local_38.PropertyType == SoftObjectRef) {
      pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)
                          (local_38.Container + local_38.PropertyOffset));
      *param_2 = pUVar2;
      return true;
    }
    *param_2 = *(UObject **)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// SetValue @ 14a876630

bool __thiscall
FObjectContextProperty::SetValue
          (FObjectContextProperty *this,FChooserEvaluationContext *param_1,UObject *param_2)

{
  bool bVar1;
  FSoftObjectPtr *this_00;
  UObject *local_res8;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain
                    (param_1,(FChooserPropertyBinding *)&this->Binding,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    if (local_38.PropertyType == SoftObjectRef) {
      this_00 = (FSoftObjectPtr *)(local_38.Container + local_38.PropertyOffset);
      local_res8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_2);
      }
      FSoftObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
      return true;
    }
    *(UObject **)(local_38.Container + local_38.PropertyOffset) = param_2;
    return true;
  }
  return false;
}

// Compile @ 14a8766f0

void __thiscall
FObjectContextProperty::Compile(FObjectContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile((FChooserPropertyBinding *)&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a876700

bool __thiscall
FObjectContextProperty::HasCompileErrors(FObjectContextProperty *this,FText *param_1)

{
  return false;
}

