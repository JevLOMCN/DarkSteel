// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 5

// StaticStruct @ 14e2ebd90

UScriptStruct * __cdecl FDatasmithStaticMaterialTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate,
                         (UObject *)pUVar1,L"DatasmithStaticMaterialTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.OuterSingleton;
}

// FDatasmithStaticMaterialTemplate @ 14e2f4240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDatasmithStaticMaterialTemplate * __thiscall
FDatasmithStaticMaterialTemplate::FDatasmithStaticMaterialTemplate
          (FDatasmithStaticMaterialTemplate *this)

{
  UMaterialInterface *pUVar1;
  FStaticMaterial *pFVar2;
  undefined1 auStack_68 [32];
  FStaticMaterial local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  (this->MaterialSlotName).ComparisonIndex = 0;
  (this->MaterialSlotName).Number = 0;
  (this->MaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  pFVar2 = FStaticMaterial::FStaticMaterial(&local_48);
  this->MaterialSlotName = pFVar2->MaterialSlotName;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (pFVar2->MaterialInterface).field0_0x0.DebugPtr, pUVar1 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->MaterialInterface).field0_0x0.DebugPtr =
       (UMaterialInterface *)(pFVar2->MaterialInterface).field0_0x0;
  return this;
}

// Apply @ 14e2f8460

void __thiscall
FDatasmithStaticMaterialTemplate::Apply
          (FDatasmithStaticMaterialTemplate *this,FStaticMaterial *param_1,
          FDatasmithStaticMaterialTemplate *param_2)

{
  UMaterialInterface *pUVar1;
  
  if ((((param_2 != (FDatasmithStaticMaterialTemplate *)0x0) &&
       (param_1->MaterialSlotName != param_2->MaterialSlotName)) ||
      (param_1->MaterialSlotName = this->MaterialSlotName,
      param_2 != (FDatasmithStaticMaterialTemplate *)0x0)) &&
     ((param_1->MaterialInterface).field0_0x0.DebugPtr !=
      (param_2->MaterialInterface).field0_0x0.DebugPtr)) {
    param_1->ImportedMaterialSlotName = this->MaterialSlotName;
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->MaterialInterface).field0_0x0.DebugPtr, pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->MaterialInterface).field0_0x0 = (this->MaterialInterface).field0_0x0;
  param_1->ImportedMaterialSlotName = this->MaterialSlotName;
  return;
}

// Equals @ 14e2f9280

bool __thiscall
FDatasmithStaticMaterialTemplate::Equals
          (FDatasmithStaticMaterialTemplate *this,FDatasmithStaticMaterialTemplate *param_1)

{
  if ((this->MaterialSlotName == param_1->MaterialSlotName) &&
     ((this->MaterialInterface).field0_0x0.DebugPtr ==
      (param_1->MaterialInterface).field0_0x0.DebugPtr)) {
    return true;
  }
  return false;
}

// Load @ 14e2fe050

void __thiscall
FDatasmithStaticMaterialTemplate::Load
          (FDatasmithStaticMaterialTemplate *this,FStaticMaterial *param_1)

{
  UMaterialInterface *pUVar1;
  
  this->MaterialSlotName = param_1->MaterialSlotName;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    (this->MaterialInterface).field0_0x0 = (param_1->MaterialInterface).field0_0x0;
    return;
  }
  pUVar1 = (param_1->MaterialInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->MaterialInterface).field0_0x0 = (param_1->MaterialInterface).field0_0x0;
    return;
  }
  (this->MaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return;
}

