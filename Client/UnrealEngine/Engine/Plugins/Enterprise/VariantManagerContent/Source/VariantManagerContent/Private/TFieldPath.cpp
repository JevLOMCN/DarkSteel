// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 1

// TFieldPath<FProperty> @ 14e2d40d0

TFieldPath<FProperty> * __thiscall
TFieldPath<FProperty>::TFieldPath<FProperty>
          (TFieldPath<FProperty> *this,TFieldPath<FProperty> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  FFieldClass *pFVar4;
  
  puVar1 = &this->field_0x10;
  *(undefined8 *)this = 0;
  puVar2 = &this->field_0x1c;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  pFVar4 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)param_1,pFVar4,(UStruct *)0x0);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  if (puVar1 != &param_1->field_0x10) {
    iVar3 = *(int *)&param_1->field_0x18;
    _Src = *(void **)&param_1->field_0x10;
    *(int *)&this->field_0x18 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*(int *)puVar2,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
      if (iVar3 != 0) {
        memcpy(*(void **)puVar1,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  return this;
}

