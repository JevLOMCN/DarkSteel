// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_><TArray<FGuid,TSizedDefaultAllocator<32>_>_const_&> @ 14ad28dc0

TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::
TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_><TArray<FGuid,TSizedDefaultAllocator<32>_>_const_&>
          (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Value;
  this->_padding_ =
       (longlong)
       &
       ___7__TMetasoundEnvironmentVariable_V__TArray_UFGuid__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  this->Name = *param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Value).ArrayMax;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// Clone @ 14ad4a6d0

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
 __thiscall
Metasound::TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::Clone
          (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *this)

{
  TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *this_00;
  IMetasoundEnvironmentVariable IVar1;
  IMetasoundEnvironmentVariable *in_RDX;
  
  this_00 = ::operator_new(0x20);
  if (this_00 != (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *)0x0) {
    IVar1 = (IMetasoundEnvironmentVariable)
            TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_><TArray<FGuid,TSizedDefaultAllocator<32>_>_const_&>
                      (this_00,&this->Name,&this->Value);
    *in_RDX = IVar1;
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            )in_RDX;
  }
  *in_RDX = (IMetasoundEnvironmentVariable)0x0;
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          )in_RDX;
}

// GetName @ 14ad56060

FName * __thiscall
Metasound::TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::GetName
          (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *this)

{
  return &this->Name;
}

// GetTypeId @ 14ad56d10

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::GetTypeId
          (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *this)

{
  return &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

