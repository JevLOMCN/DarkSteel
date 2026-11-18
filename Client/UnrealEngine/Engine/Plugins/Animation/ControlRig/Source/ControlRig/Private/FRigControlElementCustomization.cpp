// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// operator= @ 14a2297f0

FRigControlElementCustomization * __thiscall
FRigControlElementCustomization::operator=
          (FRigControlElementCustomization *this,FRigControlElementCustomization *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->AvailableSpaces).ArrayMax;
    piVar1 = &(this->AvailableSpaces).ArrayMax;
    _Src = (param_1->AvailableSpaces).AllocatorInstance.Data;
    iVar3 = (param_1->AvailableSpaces).ArrayNum;
    (this->AvailableSpaces).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->AvailableSpaces).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x14);
      }
    }
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&this->RemovedSpaces,&param_1->RemovedSpaces);
  return this;
}

// StaticStruct @ 14a2bf1f0

UScriptStruct * __cdecl FRigControlElementCustomization::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElementCustomization,(UObject *)pUVar1
                         ,L"RigControlElementCustomization");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlElementCustomization.OuterSingleton;
}

