// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 6

// Clone @ 14443ba70

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementReference::Clone
          (FContextCacheElementReference *this,IContextCacheStore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  IContextCacheStore IVar7;
  IContextCacheStore IVar8;
  undefined8 *in_R8;
  undefined4 in_XMM0_Da;
  
  plVar6 = (longlong *)(**(code **)*in_R8)(in_XMM0_Da,this->DataKey);
  if ((plVar6 != (longlong *)0x0) && (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 8))(plVar6,param_1);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  lVar5 = this->_padding_;
  lVar1 = this->_padding_;
  IVar7 = (IContextCacheStore)::operator_new(0x38);
  IVar8 = (IContextCacheStore)0x0;
  if (IVar7 != (IContextCacheStore)0x0) {
    lVar2 = this->_padding_;
    uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)((longlong)IVar7 + 8) = 2;
    *(longlong *)((longlong)IVar7 + 0x20) = lVar1;
    *(undefined8 *)((longlong)IVar7 + 0xc) = uVar3;
    *(undefined8 *)((longlong)IVar7 + 0x14) = uVar4;
    *(int *)((longlong)IVar7 + 0x28) = (int)lVar5;
    if (lVar2 != 0) {
      IVar8 = (IContextCacheStore)(lVar2 + -1);
    }
    *(undefined ***)IVar7 = &___7FContextCacheElementNull_Dataflow_UE__6B_;
    *(IContextCacheStore *)((longlong)IVar7 + 0x30) = IVar8;
    IVar8 = IVar7;
  }
  *param_1 = IVar8;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateArrayFromElement @ 144440f20

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementReference::CreateArrayFromElement
          (FContextCacheElementReference *this,IContextCacheStore *param_1,FProperty *param_2,
          FGuid *param_3,uint param_4,FTimestamp *param_5)

{
  undefined8 *puVar1;
  undefined4 in_stack_0000002c;
  undefined8 in_stack_00000038;
  
  puVar1 = (undefined8 *)(**(code **)param_2->_padding_)(param_2,this->DataKey);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)*puVar1 + 0x30))
              ((longlong *)*puVar1,param_1,param_2,param_3,CONCAT44(in_stack_0000002c,param_4),
               param_5._0_4_,in_stack_00000038);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// CreateFromArrayElement @ 144443e60

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
 __thiscall
UE::Dataflow::FContextCacheElementReference::CreateFromArrayElement
          (FContextCacheElementReference *this,IContextCacheStore *param_1,int param_2,
          FProperty *param_3,FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  undefined8 *puVar1;
  undefined4 in_register_00000084;
  undefined8 *puVar2;
  undefined4 in_stack_00000034;
  undefined8 in_stack_00000040;
  
  puVar2 = (undefined8 *)CONCAT44(in_register_00000084,param_2);
  puVar1 = (undefined8 *)(**(code **)*puVar2)(puVar2,this->DataKey);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)*puVar1 + 0x28))
              ((longlong *)*puVar1,param_1,puVar2,(ulonglong)param_3 & 0xffffffff,param_4,
               CONCAT44(in_stack_00000034,param_5),param_6._0_4_,in_stack_00000040);
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            )(FContextCacheElementBase *)param_1;
  }
  *param_1 = (IContextCacheStore)0x0;
  return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          )(FContextCacheElementBase *)param_1;
}

// GetNumArrayElements @ 14444c6d0

int __thiscall
UE::Dataflow::FContextCacheElementReference::GetNumArrayElements
          (FContextCacheElementReference *this,IContextCacheStore *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)*param_1)(param_1,this->DataKey);
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014444c6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(longlong *)*puVar2 + 0x20))((longlong *)*puVar2,param_1);
    return iVar1;
  }
  return 0;
}

// GetUntypedData @ 14444ebe0

void * __thiscall
UE::Dataflow::FContextCacheElementReference::GetUntypedData
          (FContextCacheElementReference *this,IContextCacheStore *param_1,FProperty *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)(**(code **)*param_1)(param_1,this->DataKey);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014444ec16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,param_1,param_2)
    ;
    return pvVar2;
  }
  return (void *)0x0;
}

// IsArray @ 144451340

bool __thiscall
UE::Dataflow::FContextCacheElementReference::IsArray
          (FContextCacheElementReference *this,IContextCacheStore *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)*param_1)(param_1,this->DataKey);
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144451367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,param_1);
    return (bool)uVar1;
  }
  return false;
}

