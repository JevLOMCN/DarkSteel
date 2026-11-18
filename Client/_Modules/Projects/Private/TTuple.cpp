// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 141e0cab0

TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>::
TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  
  ::FString::FString((FString *)this,(FString *)param_1);
  puVar1 = &this->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x18;
  pFVar3 = *(FString **)&param_1->field_0x10;
  *(int *)&this->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x1c);
    ConstructItems<FString,FString,int>(*(void **)puVar1,pFVar3,iVar2);
  }
  return this;
}

