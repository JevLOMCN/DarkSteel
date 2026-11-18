// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGExternalDataInterop
// Functions: 1

// FPCGAttributePropertyInputSelector @ 14cefb6d0

FPCGAttributePropertyInputSelector * __thiscall
FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
          (FPCGAttributePropertyInputSelector *this,FPCGAttributePropertyInputSelector *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  
  puVar1 = &this->field_0x28;
  *(undefined ***)this = &___7FPCGAttributePropertySelector__6B_;
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0xc = *(undefined8 *)&param_1->field_0xc;
  *(undefined8 *)&this->field_0x14 = *(undefined8 *)&param_1->field_0x14;
  *(undefined8 *)&this->field_0x1c = *(undefined8 *)&param_1->field_0x1c;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x30;
  pFVar3 = *(FString **)&param_1->field_0x28;
  *(int *)&this->field_0x30 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x34);
    ConstructItems<FString,FString,int>(*(void **)puVar1,pFVar3,iVar2);
  }
  this->field_0x38 = param_1->field_0x38;
  *(undefined ***)this = &___7FPCGAttributePropertyInputSelector__6B_;
  return this;
}

