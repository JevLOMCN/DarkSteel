// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticStruct @ 14966cf10

UScriptStruct * __cdecl FGizmoElementMaterialAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute,(UObject *)pUVar1,
                         L"GizmoElementMaterialAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoElementMaterialAttribute.OuterSingleton;
}

// GetMaterial @ 1496a3260

UMaterialInterface * __thiscall
FGizmoElementMaterialAttribute::GetMaterial(FGizmoElementMaterialAttribute *this)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterial @ 1496a3290

UMaterialInterface * __thiscall
FGizmoElementMaterialAttribute::GetMaterial(FGizmoElementMaterialAttribute *this)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// Reset @ 1496bbb70

void __thiscall FGizmoElementMaterialAttribute::Reset(FGizmoElementMaterialAttribute *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->Value).WeakPtr = local_res8;
  this->bOverridesChildState = false;
  return;
}

// SetMaterial @ 1496bdc70

void __thiscall
FGizmoElementMaterialAttribute::SetMaterial
          (FGizmoElementMaterialAttribute *this,
          TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1,bool param_2)

{
  (this->Value).WeakPtr = param_1.WeakPtr;
  this->bOverridesChildState = param_2;
  return;
}

// UpdateState @ 1496c59c0

void __thiscall
FGizmoElementMaterialAttribute::UpdateState
          (FGizmoElementMaterialAttribute *this,FGizmoElementMaterialAttribute *param_1)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals(&param_1->Value,(void *)0x0)
  ;
  if (!bVar1) {
    if ((this->bOverridesChildState != false) &&
       (bVar1 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                          (&this->Value,(void *)0x0), !bVar1)) {
      return;
    }
    (this->Value).WeakPtr = (param_1->Value).WeakPtr;
    this->bOverridesChildState = param_1->bOverridesChildState;
  }
  return;
}

