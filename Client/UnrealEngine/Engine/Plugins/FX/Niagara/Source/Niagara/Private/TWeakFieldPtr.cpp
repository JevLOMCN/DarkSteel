// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TWeakFieldPtr<FProperty> @ 149331fc0

TWeakFieldPtr<FProperty> * __thiscall
TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
          (TWeakFieldPtr<FProperty> *this,TWeakFieldPtr<FProperty> *param_1)

{
  FFieldClass *pFVar1;
  
  (this->Owner).WeakPtr = (param_1->Owner).WeakPtr;
  *(undefined8 *)&this->Field = 0;
  *(undefined8 *)&(this->Field).field_0x8 = 0;
  *(undefined8 *)&(this->Field).field_0x10 = 0;
  *(undefined8 *)&(this->Field).field_0x18 = 0;
  pFVar1 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&param_1->Field,pFVar1,(UStruct *)0x0);
  *(undefined8 *)&this->Field = *(undefined8 *)&(param_1->Field).field_0x0;
  *(undefined8 *)&(this->Field).field_0x8 = *(undefined8 *)&(param_1->Field).field_0x8;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&(this->Field).field_0x10,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&(param_1->Field).field_0x10);
  return this;
}

