// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 12

// Set<Metasound::FAnyDataReference> @ 14ad34910

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set<Metasound::FAnyDataReference>
          (FOutputBinding *this,FAnyDataReference *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(param_1->_padding_ + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference
            (&(this->Data).TypedValue,param_1->AccessType,(param_1->DataRefPtr).Ptr);
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

// FOutputBinding @ 14ad3bd00

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::FOutputBinding
          (FOutputBinding *this,FOutputDataVertex *param_1)

{
  *(undefined ***)&this->Vertex = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&(this->Vertex).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->Vertex).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined4 *)&(this->Vertex).field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined ***)&this->Vertex = &___7FOutputDataVertex_Metasound__6B_;
  (this->Data).bIsSet = false;
  return this;
}

// FOutputBinding @ 14ad3bd40

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::FOutputBinding
          (FOutputBinding *this,FOutputBinding *param_1)

{
  bool bVar1;
  
  *(undefined ***)&this->Vertex = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&(this->Vertex).field_0x8 = *(undefined8 *)&(param_1->Vertex).field_0x8;
  *(undefined8 *)&(this->Vertex).field_0x10 = *(undefined8 *)&(param_1->Vertex).field_0x10;
  *(undefined4 *)&(this->Vertex).field_0x18 = *(undefined4 *)&(param_1->Vertex).field_0x18;
  *(undefined ***)&this->Vertex = &___7FOutputDataVertex_Metasound__6B_;
  (this->Data).bIsSet = false;
  bVar1 = (param_1->Data).bIsSet;
  (this->Data).bIsSet = bVar1;
  if (bVar1 != false) {
    FAnyDataReference::FAnyDataReference
              (&(this->Data).TypedValue,(param_1->Data).TypedValue.AccessType,
               (param_1->Data).TypedValue.DataRefPtr.Ptr);
    (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  }
  return this;
}

// FOutputBinding @ 14ad3bdc0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::FOutputBinding
          (FOutputBinding *this,FName *param_1,FAnyDataReference *param_2)

{
  EDataReferenceAccessType EVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  EVar1 = param_2->AccessType;
  if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 != Value)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar3 = (undefined8 *)(**(code **)(param_2->_padding_ + 8))(param_2);
  *(undefined ***)&this->Vertex = &___7FDataVertex_Metasound__6B_;
  uVar2 = param_1->Number;
  *(uint *)&(this->Vertex).field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&(this->Vertex).field_0xc = uVar2;
  *(undefined8 *)&(this->Vertex).field_0x10 = *puVar3;
  *(undefined ***)&this->Vertex = &___7FOutputDataVertex_Metasound__6B_;
  *(undefined4 *)&(this->Vertex).field_0x18 = uVar4;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  (this->Data).bIsSet = false;
  Set(this,param_2);
  return this;
}

// FOutputBinding @ 14ad3bea0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::FOutputBinding
          (FOutputBinding *this,FOutputDataVertex *param_1)

{
  *(undefined ***)&this->Vertex = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&(this->Vertex).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->Vertex).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined4 *)&(this->Vertex).field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined ***)&this->Vertex = &___7FOutputDataVertex_Metasound__6B_;
  (this->Data).bIsSet = false;
  return this;
}

// Bind @ 14ad47940

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Bind(FOutputBinding *this,FOutputBinding *param_1)

{
  TOptional<Metasound::FAnyDataReference> *this_00;
  IDataReference *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(longlong *)&(this->Vertex).field_0x10 != *(longlong *)&(param_1->Vertex).field_0x10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Vertex.DataTypeName == InBinding.GetVertex().DataTypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0xd3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->Data).bIsSet != false) {
    this_00 = &this->Data;
    if (&param_1->Data != this_00) {
      if (((this->Data).bIsSet != false) &&
         (pIVar1 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar1 != (IDataReference *)0x0)) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
      FAnyDataReference::FAnyDataReference
                (&this_00->TypedValue,(param_1->Data).TypedValue.AccessType,
                 (param_1->Data).TypedValue.DataRefPtr.Ptr);
      (this_00->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      (this->Data).bIsSet = true;
    }
    if ((this->Data).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    CheckAccessTypeCompatibility((FDataVertex *)this,&this_00->TypedValue);
  }
  return;
}

// GetAccessType @ 14ad54e30

EDataReferenceAccessType __thiscall
Metasound::VertexDataPrivate::FOutputBinding::GetAccessType(FOutputBinding *this)

{
  if ((this->Data).bIsSet != false) {
    return (this->Data).TypedValue.AccessType;
  }
  return None;
}

// GetDataReference @ 14ad54f80

FAnyDataReference * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::GetDataReference(FOutputBinding *this)

{
  FAnyDataReference *pFVar1;
  
  pFVar1 = &(this->Data).TypedValue;
  if ((this->Data).bIsSet == false) {
    pFVar1 = (FAnyDataReference *)0x0;
  }
  return pFVar1;
}

// GetDataReferenceID @ 14ad54fc0

void * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::GetDataReferenceID(FOutputBinding *this)

{
  void *pvVar1;
  
  if ((this->Data).bIsSet != false) {
                    /* WARNING: Could not recover jumptable at 0x00014ad54fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)((this->Data).TypedValue._padding_ + 0x20))(&this->Data);
    return pvVar1;
  }
  return (void *)0x0;
}

// GetVertex @ 14ad572d0

FOutputDataVertex * __thiscall
Metasound::VertexDataPrivate::FOutputBinding::GetVertex(FOutputBinding *this)

{
  return &this->Vertex;
}

// IsBound @ 14ad5a5f0

bool __thiscall Metasound::VertexDataPrivate::FOutputBinding::IsBound(FOutputBinding *this)

{
  return (this->Data).bIsSet;
}

// Set @ 14ad62e90

void __thiscall
Metasound::VertexDataPrivate::FOutputBinding::Set(FOutputBinding *this,FAnyDataReference *param_1)

{
  FName FVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pFVar5 = (FName *)(**(code **)(param_1->_padding_ + 8))(param_1);
  FVar1.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
  FVar1.Number = *(uint *)&(this->Vertex).field_0x14;
  bVar4 = IsCastable(FVar1,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastable(Vertex.DataTypeName, InAnyDataReference.GetDataTypeName())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0xa9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->Data).bIsSet != false) &&
     (pIVar2 = (this->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  FAnyDataReference::FAnyDataReference
            (&(this->Data).TypedValue,param_1->AccessType,(param_1->DataRefPtr).Ptr);
  (this->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (this->Data).bIsSet = true;
  CheckAccessTypeCompatibility((FDataVertex *)this,&(this->Data).TypedValue);
  return;
}

