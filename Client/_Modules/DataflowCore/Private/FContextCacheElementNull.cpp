// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 6

// Clone @ 14443b9e0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementNull::Clone
          (FContextCacheElementNull *this,IContextCacheStore *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  IContextCacheStore IVar6;
  longlong lVar7;
  
  uVar1 = *(undefined4 *)&this->field_0x28;
  uVar2 = *(undefined8 *)&this->field_0x20;
  IVar6 = (IContextCacheStore)::operator_new(0x38);
  if (IVar6 == (IContextCacheStore)0x0) {
    *param_1 = (IContextCacheStore)0x0;
  }
  else {
    lVar3 = *(longlong *)&this->field_0x30;
    uVar4 = *(undefined8 *)&this->field_0xc;
    uVar5 = *(undefined8 *)&this->field_0x14;
    *(undefined4 *)((longlong)IVar6 + 8) = 2;
    *(undefined8 *)((longlong)IVar6 + 0x20) = uVar2;
    *(undefined8 *)((longlong)IVar6 + 0xc) = uVar4;
    *(undefined8 *)((longlong)IVar6 + 0x14) = uVar5;
    *(undefined4 *)((longlong)IVar6 + 0x28) = uVar1;
    lVar7 = 0;
    if (lVar3 != 0) {
      lVar7 = lVar3 + -1;
    }
    *param_1 = IVar6;
    *(longlong *)((longlong)IVar6 + 0x30) = lVar7;
    *(undefined ***)IVar6 = &___7FContextCacheElementNull_Dataflow_UE__6B_;
  }
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440f00

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementNull::CreateArrayFromElement
          (FContextCacheElementNull *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443e40

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementNull::CreateFromArrayElement
          (FContextCacheElementNull *this,IContextCacheStore *param_1,int param_2,FProperty *param_3
          ,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14444c6c0

int __thiscall
UE::Dataflow::FContextCacheElementNull::GetNumArrayElements
          (FContextCacheElementNull *this,IContextCacheStore *param_1)

{
  return 0;
}

// GetUntypedData @ 14444ebd0

void * __thiscall
UE::Dataflow::FContextCacheElementNull::GetUntypedData
          (FContextCacheElementNull *this,IContextCacheStore *param_1,FProperty *param_2)

{
  return (void *)0x0;
}

// IsArray @ 144451330

bool __thiscall
UE::Dataflow::FContextCacheElementNull::IsArray
          (FContextCacheElementNull *this,IContextCacheStore *param_1)

{
  return false;
}

