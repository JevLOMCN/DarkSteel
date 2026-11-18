// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ebbb0

UClass * __cdecl UDatasmithStaticMeshComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshComponentTemplate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton;
}

// UDatasmithStaticMeshComponentTemplate @ 14e2f5670

UDatasmithStaticMeshComponentTemplate * __thiscall
UDatasmithStaticMeshComponentTemplate::UDatasmithStaticMeshComponentTemplate
          (UDatasmithStaticMeshComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshComponentTemplate__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  return this;
}

// UDatasmithStaticMeshComponentTemplate @ 14e2f56b0

UDatasmithStaticMeshComponentTemplate * __thiscall
UDatasmithStaticMeshComponentTemplate::UDatasmithStaticMeshComponentTemplate
          (UDatasmithStaticMeshComponentTemplate *this)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshComponentTemplate__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  return this;
}

// ~UDatasmithStaticMeshComponentTemplate @ 14e2f6410

void __thiscall
UDatasmithStaticMeshComponentTemplate::~UDatasmithStaticMeshComponentTemplate
          (UDatasmithStaticMeshComponentTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshComponentTemplate__6B_;
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2fa150

bool __thiscall
UDatasmithStaticMeshComponentTemplate::Equals
          (UDatasmithStaticMeshComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) &&
        ((this->StaticMesh).field0_0x0.DebugPtr == (UStaticMesh *)param_1[1]._padding_)) &&
       (iVar1 = (this->OverrideMaterials).ArrayNum, iVar1 == (int)param_1[1]._padding_)) {
      bVar2 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                        ((TObjectPtr<UMaterialInterface> *)
                         (this->OverrideMaterials).AllocatorInstance.Data,
                         (TObjectPtr<UMaterialInterface> *)param_1[1]._padding_,iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fd340

UClass * __cdecl UDatasmithStaticMeshComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshComponentTemplate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe1b0

void __thiscall
UDatasmithStaticMeshComponentTemplate::Load
          (UDatasmithStaticMeshComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithStaticMeshComponentTemplate @ 14e2fee50

void __cdecl
UDatasmithStaticMeshComponentTemplate::StaticRegisterNativesUDatasmithStaticMeshComponentTemplate
          (void)

{
  return;
}

// UpdateObject @ 14e2ffec0

UObject * __thiscall
UDatasmithStaticMeshComponentTemplate::UpdateObject
          (UDatasmithStaticMeshComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}

