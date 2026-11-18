// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 734

// Construct<FStateTreeCompareFloatCondition> @ 14d499b20

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeCompareFloatCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareFloatCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// ConstructForTests<FStateTreeCompareFloatCondition> @ 14d499bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeCompareFloatCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareFloatCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// Destruct<FStateTreeCompareFloatCondition> @ 14d499c30

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeCompareFloatCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeCompareFloatCondition> @ 14d499dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeCompareFloatCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeObjectIsValidCondition> @ 14d499ef0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeObjectIsValidCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeObjectIsValidCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeObjectIsValidCondition> @ 14d499fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeObjectIsValidCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeObjectIsValidCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeObjectIsValidCondition> @ 14d49a040

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeObjectIsValidCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeObjectIsValidCondition> @ 14d49a060

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeObjectIsValidCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeAbsoluteFloatPropertyFunction> @ 14d49a130

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeAbsoluteFloatPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAbsoluteFloatPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeAbsoluteFloatPropertyFunction> @ 14d49a1e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeAbsoluteFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAbsoluteFloatPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeAbsoluteFloatPropertyFunction> @ 14d49a250

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeAbsoluteFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeAbsoluteFloatPropertyFunction> @ 14d49a270

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeAbsoluteFloatPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<UE::StateTree::InstanceData::FExecutionRuntimeData> @ 14d49a330

void __cdecl
UE::CoreUObject::Private::Construct<UE::StateTree::InstanceData::FExecutionRuntimeData>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStructContainer::FInstancedStructContainer
            ((FInstancedStructContainer *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<UE::StateTree::InstanceData::FExecutionRuntimeData> @ 14d49a3a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<UE::StateTree::InstanceData::FExecutionRuntimeData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStructContainer::FInstancedStructContainer
            ((FInstancedStructContainer *)((longlong)param_1 + 8));
  return;
}

// Destruct<UE::StateTree::InstanceData::FExecutionRuntimeData> @ 14d49a3c0

void __cdecl
UE::CoreUObject::Private::Destruct<UE::StateTree::InstanceData::FExecutionRuntimeData>
          (void *param_1)

{
  FInstancedStructContainer::Empty((FInstancedStructContainer *)((longlong)param_1 + 8));
  return;
}

// Copy<UE::StateTree::InstanceData::FExecutionRuntimeData> @ 14d49a3d0

bool __cdecl
UE::CoreUObject::Private::Copy<UE::StateTree::InstanceData::FExecutionRuntimeData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      FInstancedStructContainer::operator=
                ((FInstancedStructContainer *)(puVar1 + 1),
                 (FInstancedStructContainer *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeConsiderationCommonBase> @ 14d49a4c0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeConsiderationCommonBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeConsiderationCommonBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// ConstructForTests<FStateTreeConsiderationCommonBase> @ 14d49a540

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeConsiderationCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeConsiderationCommonBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Destruct<FStateTreeConsiderationCommonBase> @ 14d49a5b0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeConsiderationCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeConsiderationCommonBase> @ 14d49a5d0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConsiderationCommonBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeObjectIsValidConditionInstanceData> @ 14d49a6e0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeObjectIsValidConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeObjectIsValidConditionInstanceData> @ 14d49a6f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeObjectIsValidConditionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeObjectIsValidConditionInstanceData> @ 14d49a700

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeObjectIsValidConditionInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeObjectIsValidConditionInstanceData> @ 14d49a710

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeObjectIsValidConditionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeInvertFloatPropertyFunction> @ 14d49a7a0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeInvertFloatPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeInvertFloatPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeInvertFloatPropertyFunction> @ 14d49a810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeInvertFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeInvertFloatPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeInvertFloatPropertyFunction> @ 14d49a880

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeInvertFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeInvertFloatPropertyFunction> @ 14d49a8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeInvertFloatPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeCompareIntCondition> @ 14d49a9a0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeCompareIntCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareIntCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// ConstructForTests<FStateTreeCompareIntCondition> @ 14d49aa30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeCompareIntCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareIntCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// Destruct<FStateTreeCompareIntCondition> @ 14d49aab0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeCompareIntCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeCompareIntCondition> @ 14d49aad0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeCompareIntCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeDelegateListener> @ 14d49aba0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDelegateListener>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FStateTreeDelegateListener> @ 14d49abc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeDelegateListener>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FStateTreeDelegateListener> @ 14d49abe0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDelegateListener>(void *param_1)

{
  return;
}

// Copy<FStateTreeDelegateListener> @ 14d49ac30

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDelegateListener>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagQueryCondition> @ 14d49acc0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagQueryCondition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FGameplayTagQueryCondition::FGameplayTagQueryCondition(param_1);
  return;
}

// ConstructForTests<FGameplayTagQueryCondition> @ 14d49acf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagQueryCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayTagQueryCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)((longlong)param_1 + 0x28));
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FGameplayTagQueryCondition> @ 14d49adc0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagQueryCondition>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FGameplayTagQueryCondition> @ 14d49ae20

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagQueryCondition>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
    bVar2 = (*(byte *)((longlong)param_1 + 0x23) ^ *(byte *)((longlong)param_2 + 0x23)) & 1 ^
            *(byte *)((longlong)param_1 + 0x23);
    *(byte *)((longlong)param_1 + 0x23) = bVar2;
    *(byte *)((longlong)param_1 + 0x23) = (bVar2 ^ *(byte *)((longlong)param_2 + 0x23)) & 2 ^ bVar2;
    FGameplayTagQuery::operator=
              ((FGameplayTagQuery *)((longlong)param_1 + 0x28),
               (FGameplayTagQuery *)((longlong)param_2 + 0x28));
    puVar1 = (undefined1 *)((longlong)param_2 + 0x70);
    param_2 = (void *)((longlong)param_2 + 0x78);
    *(undefined1 *)((longlong)param_1 + 0x70) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x78);
  }
  return true;
}

// Construct<FStateTreeSingleFloatPropertyFunctionInstanceData> @ 14d49af00

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeSingleFloatPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeSingleFloatPropertyFunctionInstanceData> @ 14d49af10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeSingleFloatPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeSingleFloatPropertyFunctionInstanceData> @ 14d49af20

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeSingleFloatPropertyFunctionInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeSingleFloatPropertyFunctionInstanceData> @ 14d49af70

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeSingleFloatPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeConsiderationBase> @ 14d49b070

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeConsiderationBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeConsiderationBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// ConstructForTests<FStateTreeConsiderationBase> @ 14d49b0e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeConsiderationBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeConsiderationBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Destruct<FStateTreeConsiderationBase> @ 14d49b150

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeConsiderationBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeConsiderationBase> @ 14d49b170

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConsiderationBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeDelegateDispatcher> @ 14d49b1f0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDelegateDispatcher>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeDelegateDispatcher> @ 14d49b200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeDelegateDispatcher>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeDelegateDispatcher> @ 14d49b210

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDelegateDispatcher>(void *param_1)

{
  return;
}

// Copy<FStateTreeDelegateDispatcher> @ 14d49b260

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDelegateDispatcher>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagQueryConditionInstanceData> @ 14d49b2d0

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayTagQueryConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FGameplayTagQueryConditionInstanceData> @ 14d49b2f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagQueryConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FGameplayTagQueryConditionInstanceData> @ 14d49b310

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayTagQueryConditionInstanceData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayTagQueryConditionInstanceData> @ 14d49b350

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagQueryConditionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  FGameplayTagContainer *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FGameplayTagContainer::operator=
                (this,(FGameplayTagContainer *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeDivideFloatPropertyFunction> @ 14d49b3a0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeDivideFloatPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeDivideFloatPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeDivideFloatPropertyFunction> @ 14d49b410

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeDivideFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeDivideFloatPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeDivideFloatPropertyFunction> @ 14d49b480

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeDivideFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeBlueprintTaskWrapper> @ 14d49b4a0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeBlueprintTaskWrapper>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintTaskWrapper__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FStateTreeBlueprintTaskWrapper> @ 14d49b530

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBlueprintTaskWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintTaskWrapper__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FStateTreeBlueprintTaskWrapper> @ 14d49b5a0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBlueprintTaskWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeDivideFloatPropertyFunction> @ 14d49b5c0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDivideFloatPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Copy<FStateTreeBlueprintTaskWrapper> @ 14d49b630

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBlueprintTaskWrapper>
          (void *param_1,void *param_2,int param_3)

{
  byte bVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    bVar1 = (*(byte *)((longlong)param_1 + 0x20) ^ *(byte *)((longlong)param_2 + 0x20)) & 1 ^
            *(byte *)((longlong)param_1 + 0x20);
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 2 ^ bVar1;
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 4 ^ bVar1;
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 8 ^ bVar1;
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 0x10 ^ bVar1;
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 0x20 ^ bVar1;
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 0x40 ^ bVar1;
    *(byte *)((longlong)param_1 + 0x20) = bVar1;
    *(byte *)((longlong)param_1 + 0x20) =
         (bVar1 ^ *(byte *)((longlong)param_2 + 0x20)) & 0x7f ^ *(byte *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x28) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x28));
    }
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FStateTreeConditionCommonBase> @ 14d49b830

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeConditionCommonBase>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeConditionCommonBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// ConstructForTests<FStateTreeConditionCommonBase> @ 14d49b8b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeConditionCommonBase>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeConditionCommonBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// Destruct<FStateTreeConditionCommonBase> @ 14d49b930

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeConditionCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeConditionCommonBase> @ 14d49b950

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConditionCommonBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeEnumInputConsideration> @ 14d49ba10

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEnumInputConsideration>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeEnumInputConsideration__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FStateTreeEnumInputConsideration> @ 14d49baa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeEnumInputConsideration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeEnumInputConsideration__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FStateTreeEnumInputConsideration> @ 14d49bb10

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEnumInputConsideration>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeEnumInputConsideration> @ 14d49bb40

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEnumInputConsideration>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    FStateTreeEnumValueScorePairs::operator=
              ((FStateTreeEnumValueScorePairs *)((longlong)param_1 + 0x28),
               (FStateTreeEnumValueScorePairs *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x38);
  }
  return true;
}

// Construct<FGameplayTagContainerMatchCondition> @ 14d49bbe0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagContainerMatchCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayTagContainerMatchCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return;
}

// ConstructForTests<FGameplayTagContainerMatchCondition> @ 14d49bc70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainerMatchCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayTagContainerMatchCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return;
}

// Destruct<FGameplayTagContainerMatchCondition> @ 14d49bcf0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagContainerMatchCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeAnyEnum> @ 14d49bd10

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeAnyEnum>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeAnyEnum> @ 14d49bd20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeAnyEnum>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeAnyEnum> @ 14d49bd30

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeAnyEnum>(void *param_1)

{
  return;
}

// Copy<FGameplayTagContainerMatchCondition> @ 14d49bd40

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagContainerMatchCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x2a) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x2a - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeMultiplyFloatPropertyFunction> @ 14d49be20

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeMultiplyFloatPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeMultiplyFloatPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeMultiplyFloatPropertyFunction> @ 14d49be90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeMultiplyFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeMultiplyFloatPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeMultiplyFloatPropertyFunction> @ 14d49bf00

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeMultiplyFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeAnyEnum> @ 14d49bf20

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeAnyEnum>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FStateTreeMultiplyFloatPropertyFunction> @ 14d49bff0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeMultiplyFloatPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeBlueprintEvaluatorWrapper> @ 14d49c0a0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeBlueprintEvaluatorWrapper>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintEvaluatorWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FStateTreeBlueprintEvaluatorWrapper> @ 14d49c120

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBlueprintEvaluatorWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintEvaluatorWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FStateTreeBlueprintEvaluatorWrapper> @ 14d49c1d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBlueprintEvaluatorWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBlueprintEvaluatorWrapper> @ 14d49c680

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBlueprintEvaluatorWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x20) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x20));
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeConditionBase> @ 14d49ce00

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeConditionBase>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeConditionBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// ConstructForTests<FStateTreeConditionBase> @ 14d49ce80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeConditionBase>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeConditionBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// Destruct<FStateTreeConditionBase> @ 14d49cfc0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeConditionBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeConditionBase> @ 14d49d380

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConditionBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeEnumInputConsiderationInstanceData> @ 14d49d480

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeEnumInputConsiderationInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeEnumInputConsiderationInstanceData> @ 14d49d490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeEnumInputConsiderationInstanceData>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeEnumInputConsiderationInstanceData> @ 14d49d4a0

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeEnumInputConsiderationInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeEnumInputConsiderationInstanceData> @ 14d49d4b0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEnumInputConsiderationInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagContainerMatchConditionInstanceData> @ 14d49d5e0

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayTagContainerMatchConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FGameplayTagContainerMatchConditionInstanceData> @ 14d49d610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainerMatchConditionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FGameplayTagContainerMatchConditionInstanceData> @ 14d49d640

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayTagContainerMatchConditionInstanceData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayTagContainerMatchConditionInstanceData> @ 14d49d6e0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagContainerMatchConditionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  FGameplayTagContainer *pFVar1;
  FGameplayTagContainer *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FGameplayTagContainer *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FGameplayTagContainer::operator=(this,pFVar1);
      FGameplayTagContainer::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeSubtractFloatPropertyFunction> @ 14d49d760

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeSubtractFloatPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeSubtractFloatPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeSubtractFloatPropertyFunction> @ 14d49d7d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeSubtractFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeSubtractFloatPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeSubtractFloatPropertyFunction> @ 14d49d880

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeSubtractFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeSubtractFloatPropertyFunction> @ 14d49d920

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeSubtractFloatPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeBlueprintConsiderationWrapper> @ 14d49d9d0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeBlueprintConsiderationWrapper>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintConsiderationWrapper__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeBlueprintConsiderationWrapper> @ 14d49da50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBlueprintConsiderationWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintConsiderationWrapper__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeBlueprintConsiderationWrapper> @ 14d49dac0

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeBlueprintConsiderationWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBlueprintConsiderationWrapper> @ 14d49dae0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBlueprintConsiderationWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x28) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x28));
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 0x28);
    param_2 = (void *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeEnumValueScorePairs> @ 14d49dc50

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEnumValueScorePairs>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeEnumValueScorePairs> @ 14d49dc60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeEnumValueScorePairs>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeEnumValueScorePairs> @ 14d49dc70

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEnumValueScorePairs>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FStateTreeEnumValueScorePairs> @ 14d49dc90

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEnumValueScorePairs>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagMatchCondition> @ 14d49ddb0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagMatchCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayTagMatchCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGameplayTagMatchCondition> @ 14d49de40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagMatchCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayTagMatchCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGameplayTagMatchCondition> @ 14d49dec0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagMatchCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FGameplayTagMatchCondition> @ 14d49df70

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagMatchCondition>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeAddFloatPropertyFunction> @ 14d49e040

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeAddFloatPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAddFloatPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeAddFloatPropertyFunction> @ 14d49e0b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeAddFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAddFloatPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeAddFloatPropertyFunction> @ 14d49e120

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeAddFloatPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeAddFloatPropertyFunction> @ 14d49e2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeAddFloatPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeBlueprintConditionWrapper> @ 14d49e330

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeBlueprintConditionWrapper>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintConditionWrapper__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeBlueprintConditionWrapper> @ 14d49e3c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBlueprintConditionWrapper>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeBlueprintConditionWrapper__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeBlueprintConditionWrapper> @ 14d49e480

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBlueprintConditionWrapper>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBlueprintConditionWrapper> @ 14d49e4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBlueprintConditionWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
    bVar2 = (*(byte *)((longlong)param_1 + 0x23) ^ *(byte *)((longlong)param_2 + 0x23)) & 1 ^
            *(byte *)((longlong)param_1 + 0x23);
    *(byte *)((longlong)param_1 + 0x23) = bVar2;
    *(byte *)((longlong)param_1 + 0x23) = (bVar2 ^ *(byte *)((longlong)param_2 + 0x23)) & 2 ^ bVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x28) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x28));
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 0x28);
    param_2 = (void *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeEnumValueScorePair> @ 14d49e600

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEnumValueScorePair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeEnumValueScorePair> @ 14d49e610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeEnumValueScorePair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeEnumValueScorePair> @ 14d49e660

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEnumValueScorePair>(void *param_1)

{
  return;
}

// Copy<FStateTreeEnumValueScorePair> @ 14d49e670

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEnumValueScorePair>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeAbsoluteIntPropertyFunction> @ 14d49e6a0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeAbsoluteIntPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAbsoluteIntPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeAbsoluteIntPropertyFunction> @ 14d49e710

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeAbsoluteIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAbsoluteIntPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeAbsoluteIntPropertyFunction> @ 14d49e780

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeAbsoluteIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeAbsoluteIntPropertyFunction> @ 14d49e7a0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeAbsoluteIntPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FGameplayTagMatchConditionInstanceData> @ 14d49eb20

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayTagMatchConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FGameplayTagMatchConditionInstanceData> @ 14d49ec00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagMatchConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGameplayTagMatchConditionInstanceData> @ 14d49ec60

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayTagMatchConditionInstanceData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayTagMatchConditionInstanceData> @ 14d49eee0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagMatchConditionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  FGameplayTagContainer *pFVar1;
  FGameplayTagContainer *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FGameplayTagContainer *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FGameplayTagContainer::operator=(this,pFVar1);
      this[1].GameplayTags.AllocatorInstance.Data = pFVar1[1].GameplayTags.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = (FGameplayTagContainer *)&this[1].GameplayTags.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeFloatCombinaisonPropertyFunctionInstanceData> @ 14d49ef60

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeFloatCombinaisonPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeFloatCombinaisonPropertyFunctionInstanceData> @ 14d49ef70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeFloatCombinaisonPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeFloatCombinaisonPropertyFunctionInstanceData> @ 14d49f000

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeFloatCombinaisonPropertyFunctionInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FStateTreeFloatCombinaisonPropertyFunctionInstanceData> @ 14d49f450

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeFloatCombinaisonPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeBlueprintPropertyRef> @ 14d49f510

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeBlueprintPropertyRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(byte *)((longlong)param_1 + 3) = *(byte *)((longlong)param_1 + 3) & 0xfc;
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FStateTreeBlueprintPropertyRef> @ 14d49f530

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBlueprintPropertyRef>(void *param_1)

{
  *(byte *)((longlong)param_1 + 3) = *(byte *)((longlong)param_1 + 3) & 0xfc;
  *(undefined2 *)param_1 = 0xffff;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeBlueprintPropertyRef> @ 14d49f550

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBlueprintPropertyRef>(void *param_1)

{
  return;
}

// Copy<FStateTreeBlueprintPropertyRef> @ 14d49f5b0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBlueprintPropertyRef>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
    bVar2 = (*(byte *)((longlong)param_1 + 3) ^ *(byte *)((longlong)param_2 + 3)) & 1 ^
            *(byte *)((longlong)param_1 + 3);
    *(byte *)((longlong)param_1 + 3) = bVar2;
    *(byte *)((longlong)param_1 + 3) = (bVar2 ^ *(byte *)((longlong)param_2 + 3)) & 2 ^ bVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 8) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 8));
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 8);
    param_2 = (void *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *puVar1;
    param_1 = (undefined2 *)((longlong)param_1 + 0x10);
  }
  return true;
}

// Construct<FStateTreeFloatInputConsideration> @ 14d49f7b0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeFloatInputConsideration>(void *param_1)

{
  memset(param_1,0,0xb0);
  FStateTreeFloatInputConsideration::FStateTreeFloatInputConsideration(param_1);
  return;
}

// ConstructForTests<FStateTreeFloatInputConsideration> @ 14d49f820

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeFloatInputConsideration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeFloatInputConsideration__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x28));
  return;
}

// Destruct<FStateTreeFloatInputConsideration> @ 14d49f830

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeFloatInputConsideration>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x30));
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeFloatInputConsideration> @ 14d49f8c0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeFloatInputConsideration>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    FStateTreeConsiderationResponseCurve::operator=
              ((FStateTreeConsiderationResponseCurve *)((longlong)param_1 + 0x28),
               (FStateTreeConsiderationResponseCurve *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0xb0);
    param_1 = (void *)((longlong)param_1 + 0xb0);
  }
  return true;
}

// Construct<FStateTreeInvertIntPropertyFunction> @ 14d49f970

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeInvertIntPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeInvertIntPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeInvertIntPropertyFunction> @ 14d49f9e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeInvertIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeInvertIntPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeInvertIntPropertyFunction> @ 14d49fa50

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeInvertIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeInvertIntPropertyFunction> @ 14d49fb60

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeInvertIntPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeRandomCondition> @ 14d49fbd0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeRandomCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeRandomCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// ConstructForTests<FStateTreeRandomCondition> @ 14d49fc50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeRandomCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeRandomCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// Destruct<FStateTreeRandomCondition> @ 14d49fcd0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeRandomCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeBooleanNotPropertyFunction> @ 14d49fd00

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeBooleanNotPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanNotPropertyFunction__6B_;
  return;
}

// Copy<FStateTreeRandomCondition> @ 14d49fdb0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeRandomCondition>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// ConstructForTests<FStateTreeBooleanNotPropertyFunction> @ 14d49ff30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBooleanNotPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanNotPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeBooleanNotPropertyFunction> @ 14d49ffa0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBooleanNotPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBooleanNotPropertyFunction> @ 14d4a0080

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBooleanNotPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreePropertyRef> @ 14d4a00f0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreePropertyRef>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FStateTreePropertyRef> @ 14d4a0100

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyRef>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// Destruct<FStateTreePropertyRef> @ 14d4a0110

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyRef>(void *param_1)

{
  return;
}

// Copy<FStateTreePropertyRef> @ 14d4a0320

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyRef>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FStateTreePropertyRef> @ 14d4a03d0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FStateTreePropertyRef>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  UScriptStruct *this;
  FPropertyTypeName local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FStateTreePropertyRef::SerializeFromMismatchedTag(FPropertyTag_const&___ptr64,FStructuredArchiveSlot)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FStateTreePropertyRef::SerializeFromMismatchedTag(FPropertyTag_const&___ptr64,FStructuredArchiveSlot)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FStateTreePropertyRef::SerializeFromMismatchedTag(FPropertyTag_const&___ptr64,FStructuredArchiveSlot)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_bool___cdecl_FStateTreePropertyRef::SerializeFromMismatchedTag(FPropertyTag_const&___ptr64,FStructuredArchiveSlot)___ptr64'
                      ::__l2::StateTreeStructRefName,"StateTreeStructRef");
      _Init_thread_footer(&`public:_bool___cdecl_FStateTreePropertyRef::SerializeFromMismatchedTag(FPropertyTag_const&___ptr64,FStructuredArchiveSlot)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_res8[0].Index = (param_1->TypeName).Index;
  bVar1 = FPropertyTypeName::IsStruct
                    (local_res8,
                     `public:_bool___cdecl_FStateTreePropertyRef::SerializeFromMismatchedTag(FPropertyTag_const&___ptr64,FStructuredArchiveSlot)___ptr64'
                     ::__l2::StateTreeStructRefName);
  if (bVar1) {
    local_18 = 0;
    uStack_10 = 0;
    this = FStateTreeStructRef::StaticStruct();
    UScriptStruct::SerializeItem(this,param_2,&local_18,(void *)0x0);
    return true;
  }
  return false;
}

// Construct<FStateTreeFloatInputConsiderationInstanceData> @ 14d4a05f0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeFloatInputConsiderationInstanceData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeFloatInputConsiderationInstanceData> @ 14d4a0610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeFloatInputConsiderationInstanceData>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeFloatInputConsiderationInstanceData> @ 14d4a0670

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeFloatInputConsiderationInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeFloatInputConsiderationInstanceData> @ 14d4a0830

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeFloatInputConsiderationInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeSingleIntPropertyFunctionInstanceData> @ 14d4a0870

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeSingleIntPropertyFunctionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeSingleIntPropertyFunctionInstanceData> @ 14d4a0880

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeSingleIntPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeSingleIntPropertyFunctionInstanceData> @ 14d4a0910

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeSingleIntPropertyFunctionInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeSingleIntPropertyFunctionInstanceData> @ 14d4a0b70

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeSingleIntPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeBooleanNotOperationPropertyFunctionInstanceData> @ 14d4a0ef0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeBooleanNotOperationPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeBooleanNotOperationPropertyFunctionInstanceData> @ 14d4a0f00

void __cdecl
UE::CoreUObject::Private::
ConstructForTests<FStateTreeBooleanNotOperationPropertyFunctionInstanceData>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeBooleanNotOperationPropertyFunctionInstanceData> @ 14d4a0f10

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeBooleanNotOperationPropertyFunctionInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FStateTreeBooleanNotOperationPropertyFunctionInstanceData> @ 14d4a0f20

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBooleanNotOperationPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeConsiderationResponseCurve> @ 14d4a1840

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeConsiderationResponseCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1);
  return;
}

// ConstructForTests<FStateTreeConsiderationResponseCurve> @ 14d4a1880

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeConsiderationResponseCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FStateTreeConsiderationResponseCurve> @ 14d4a1890

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeConsiderationResponseCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Construct<FStateTreeCompareNameCondition> @ 14d4a1920

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeCompareNameCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareNameCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeCompareNameCondition> @ 14d4a19d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeCompareNameCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareNameCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeCompareNameCondition> @ 14d4a1a50

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeCompareNameCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeConsiderationResponseCurve> @ 14d4a1a70

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConsiderationResponseCurve>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
    *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)((longlong)param_2 + 0x6c);
    *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)param_2 + 0x6d);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x70)) {
      iVar3 = *(int *)((longlong)param_2 + 0x78);
      piVar1 = (int *)((longlong)param_1 + 0x7c);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x70))->Data;
      *(int *)((longlong)param_1 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar1,pFVar4,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy(pFVar4->Data,_Src,(longlong)iVar3 * 0x1c);
        }
      }
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x80) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x80));
    }
    puVar2 = (undefined8 *)((longlong)param_2 + 0x80);
    param_2 = (void *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *puVar2;
    param_1 = (void *)((longlong)param_1 + 0x88);
  }
  return true;
}

// Construct<FStateTreeDivideIntPropertyFunction> @ 14d4a1b90

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDivideIntPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeDivideIntPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeDivideIntPropertyFunction> @ 14d4a1c40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeDivideIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeDivideIntPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeDivideIntPropertyFunction> @ 14d4a1cb0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDivideIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeCompareNameCondition> @ 14d4a1d10

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeCompareNameCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Copy<FStateTreeDivideIntPropertyFunction> @ 14d4a2060

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDivideIntPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeBooleanXOrPropertyFunction> @ 14d4a2310

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeBooleanXOrPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanXOrPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeBooleanXOrPropertyFunction> @ 14d4a2380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBooleanXOrPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanXOrPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeBooleanXOrPropertyFunction> @ 14d4a23f0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBooleanXOrPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBooleanXOrPropertyFunction> @ 14d4a2410

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBooleanXOrPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeConstantConsideration> @ 14d4a29f0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeConstantConsideration>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeConstantConsideration__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// ConstructForTests<FStateTreeConstantConsideration> @ 14d4a2a70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeConstantConsideration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeConstantConsideration__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Destruct<FStateTreeConstantConsideration> @ 14d4a2b20

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeConstantConsideration>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeConstantConsideration> @ 14d4a2ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConstantConsideration>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeMultiplyIntPropertyFunction> @ 14d4a3040

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeMultiplyIntPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeMultiplyIntPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeMultiplyIntPropertyFunction> @ 14d4a30d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeMultiplyIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeMultiplyIntPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeMultiplyIntPropertyFunction> @ 14d4a31e0

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeMultiplyIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeMultiplyIntPropertyFunction> @ 14d4a3250

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeMultiplyIntPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeBooleanOrPropertyFunction> @ 14d4a3700

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeBooleanOrPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanOrPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeBooleanOrPropertyFunction> @ 14d4a3950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBooleanOrPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanOrPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeBooleanOrPropertyFunction> @ 14d4a3b30

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBooleanOrPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBooleanOrPropertyFunction> @ 14d4a3cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBooleanOrPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeCompareDistanceCondition> @ 14d4a4290

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeCompareDistanceCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareDistanceCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// ConstructForTests<FStateTreeCompareDistanceCondition> @ 14d4a4320

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeCompareDistanceCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareDistanceCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// Destruct<FStateTreeCompareDistanceCondition> @ 14d4a43a0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeCompareDistanceCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeCompareDistanceCondition> @ 14d4a4440

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeCompareDistanceCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeConstantConsiderationInstanceData> @ 14d4a4610

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeConstantConsiderationInstanceData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeConstantConsiderationInstanceData> @ 14d4a4620

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeConstantConsiderationInstanceData>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeConstantConsiderationInstanceData> @ 14d4a4630

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeConstantConsiderationInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeConstantConsiderationInstanceData> @ 14d4a46c0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeConstantConsiderationInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeSubtractIntPropertyFunction> @ 14d4a46f0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeSubtractIntPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeSubtractIntPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeSubtractIntPropertyFunction> @ 14d4a4760

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeSubtractIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeSubtractIntPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeSubtractIntPropertyFunction> @ 14d4a47d0

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeSubtractIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeSubtractIntPropertyFunction> @ 14d4a4830

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeSubtractIntPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeBooleanAndPropertyFunction> @ 14d4a49e0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeBooleanAndPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanAndPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeBooleanAndPropertyFunction> @ 14d4a4a50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBooleanAndPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeBooleanAndPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeBooleanAndPropertyFunction> @ 14d4a4ac0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBooleanAndPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeBooleanAndPropertyFunction> @ 14d4a4b20

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBooleanAndPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeObjectIsChildOfClassCondition> @ 14d4a4c50

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeObjectIsChildOfClassCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeObjectIsChildOfClassCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeObjectIsChildOfClassCondition> @ 14d4a4ce0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeObjectIsChildOfClassCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeObjectIsChildOfClassCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeObjectIsChildOfClassCondition> @ 14d4a4d60

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeObjectIsChildOfClassCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeObjectIsChildOfClassCondition> @ 14d4a4dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeObjectIsChildOfClassCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeAddIntPropertyFunction> @ 14d4a4e90

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeAddIntPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAddIntPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeAddIntPropertyFunction> @ 14d4a4f00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeAddIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeAddIntPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeAddIntPropertyFunction> @ 14d4a4f70

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeAddIntPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeAddIntPropertyFunction> @ 14d4a4fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeAddIntPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeCompareEnumCondition> @ 14d4a50c0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeCompareEnumCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareEnumCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeCompareEnumCondition> @ 14d4a5150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeCompareEnumCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareEnumCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeCompareEnumCondition> @ 14d4a51d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeCompareEnumCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeBooleanOperationPropertyFunctionInstanceData> @ 14d4a51f0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeBooleanOperationPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// ConstructForTests<FStateTreeBooleanOperationPropertyFunctionInstanceData> @ 14d4a5200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBooleanOperationPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FStateTreeBooleanOperationPropertyFunctionInstanceData> @ 14d4a5210

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeBooleanOperationPropertyFunctionInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FStateTreeCompareEnumCondition> @ 14d4a5260

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeCompareEnumCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Copy<FStateTreeBooleanOperationPropertyFunctionInstanceData> @ 14d4a5330

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBooleanOperationPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeObjectIsChildOfClassConditionInstanceData> @ 14d4a53f0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeObjectIsChildOfClassConditionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeObjectIsChildOfClassConditionInstanceData> @ 14d4a5400

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeObjectIsChildOfClassConditionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeObjectIsChildOfClassConditionInstanceData> @ 14d4a5410

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeObjectIsChildOfClassConditionInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FStateTreeObjectIsChildOfClassConditionInstanceData> @ 14d4a5460

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeObjectIsChildOfClassConditionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeIntCombinaisonPropertyFunctionInstanceData> @ 14d4a5500

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeIntCombinaisonPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeIntCombinaisonPropertyFunctionInstanceData> @ 14d4a5510

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeIntCombinaisonPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeIntCombinaisonPropertyFunctionInstanceData> @ 14d4a5520

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeIntCombinaisonPropertyFunctionInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FStateTreeIntCombinaisonPropertyFunctionInstanceData> @ 14d4a5530

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeIntCombinaisonPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeObjectEqualsCondition> @ 14d4a6380

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeObjectEqualsCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeObjectEqualsCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeObjectEqualsCondition> @ 14d4a6410

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeObjectEqualsCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeObjectEqualsCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeObjectEqualsCondition> @ 14d4a6490

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeObjectEqualsCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeCompareBoolCondition> @ 14d4a64b0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeCompareBoolCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareBoolCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Copy<FStateTreeObjectEqualsCondition> @ 14d4a6540

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeObjectEqualsCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FStateTreeMakeIntervalPropertyFunction> @ 14d4a6610

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeMakeIntervalPropertyFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeMakeIntervalPropertyFunction__6B_;
  return;
}

// ConstructForTests<FStateTreeCompareBoolCondition> @ 14d4a66c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeCompareBoolCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FStateTreeCompareBoolCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeMakeIntervalPropertyFunction> @ 14d4a6740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeMakeIntervalPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeMakeIntervalPropertyFunction__6B_;
  return;
}

// Destruct<FStateTreeCompareBoolCondition> @ 14d4a6b10

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeCompareBoolCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Destruct<FStateTreeMakeIntervalPropertyFunction> @ 14d4a6b30

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeMakeIntervalPropertyFunction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeCompareBoolCondition> @ 14d4a6d10

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeCompareBoolCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Copy<FStateTreeMakeIntervalPropertyFunction> @ 14d4a6de0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeMakeIntervalPropertyFunction>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeObjectEqualsConditionInstanceData> @ 14d4a8340

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeObjectEqualsConditionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeObjectEqualsConditionInstanceData> @ 14d4a8350

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeObjectEqualsConditionInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeObjectEqualsConditionInstanceData> @ 14d4a8360

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeObjectEqualsConditionInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeObjectEqualsConditionInstanceData> @ 14d4a86a0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeObjectEqualsConditionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeMakeIntervalPropertyFunctionInstanceData> @ 14d4a8740

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeMakeIntervalPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FStateTreeMakeIntervalPropertyFunctionInstanceData> @ 14d4a87a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeMakeIntervalPropertyFunctionInstanceData>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FStateTreeMakeIntervalPropertyFunctionInstanceData> @ 14d4a8800

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeMakeIntervalPropertyFunctionInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FStateTreeMakeIntervalPropertyFunctionInstanceData> @ 14d4a8810

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeMakeIntervalPropertyFunctionInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeNodeBase> @ 14d4a8840

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeNodeBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// ConstructForTests<FStateTreeNodeBase> @ 14d4a8920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeNodeBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// Destruct<FStateTreeNodeBase> @ 14d4a8980

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeNodeBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeNodeBase> @ 14d4a89e0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeNodeBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// CompareNumbers<int> @ 14d4aa740

bool __cdecl
UE::StateTree::Conditions::CompareNumbers<int>(int param_1,int param_2,EGenericAICheck param_3)

{
  EGenericAICheck local_res18 [8];
  EGenericAICheck *local_res20;
  
  switch(param_3) {
  case Less:
    return param_1 < param_2;
  case LessOrEqual:
    return param_1 <= param_2;
  case Equal:
    return param_1 == param_2;
  case NotEqual:
    return param_1 != param_2;
  case GreaterOrEqual:
    return param_2 <= param_1;
  case Greater:
    return param_2 < param_1;
  default:
    local_res20 = local_res18;
    local_res18[0] = param_3;
    `UE::StateTree::Conditions::CompareNumbers<int>'::__l4::<lambda_1>::operator()(&local_res20);
    return false;
  }
}

// CompareNumbers<double> @ 14d4aa7e0

bool __cdecl
UE::StateTree::Conditions::CompareNumbers<double>
          (double param_1,double param_2,EGenericAICheck param_3)

{
  EGenericAICheck local_res18 [8];
  EGenericAICheck *local_res20;
  
  switch(param_3) {
  case Less:
    return param_1 < param_2;
  case LessOrEqual:
    return param_1 <= param_2;
  case Equal:
    if (param_1 == param_2) {
      return true;
    }
    break;
  case NotEqual:
    if (param_1 != param_2) {
      return true;
    }
    break;
  case GreaterOrEqual:
    return param_2 <= param_1;
  case Greater:
    return param_2 < param_1;
  default:
    local_res20 = local_res18;
    local_res18[0] = param_3;
    `UE::StateTree::Conditions::CompareNumbers<double>'::__l4::<lambda_1>::operator()(&local_res20);
  }
  return false;
}

// DereferenceIfNecessary<UE::StateTree::Private::FCrashReporterHandlerImpl,UE::StateTree::Private::FCrashReporterHandlerImpl_*_&> @ 14d4aad30

FCrashReporterHandlerImpl * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::StateTree::Private::FCrashReporterHandlerImpl,UE::StateTree::Private::FCrashReporterHandlerImpl_*_&>
          (FCrashReporterHandlerImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UStateTree,UStateTree_*_&> @ 14d4aad50

UStateTree * __cdecl
UE::Core::Private::DereferenceIfNecessary<UStateTree,UStateTree_*_&>(UStateTree **param_1)

{
  return *param_1;
}

// GetMutablePtrToProperty<void> @ 14d4ada20

void * __cdecl
UE::StateTree::PropertyRefHelpers::GetMutablePtrToProperty<void>
          (FStateTreePropertyRef *param_1,FStateTreeInstanceStorage *param_2,
          FStateTreeExecutionFrame *param_3,FStateTreeExecutionFrame *param_4,FProperty **param_5)

{
  EStateTreeDataSourceType EVar1;
  int iVar2;
  UStruct *pUVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FStateTreePropertyAccess *pFVar8;
  void *pvVar9;
  UPackage *pUVar10;
  FStateTreePropertyRef *pFVar11;
  FStateTreeExecutionFrame *pFVar12;
  uchar *puVar13;
  FStateTreePropertyBindings *this;
  FStateTreeExecutionFrame *local_res18;
  undefined4 uStack_6c;
  TObjectPtr<UStruct_const_>_u_0 local_68;
  undefined8 uStack_60;
  TObjectPtr<UStruct_const_>_u_0 local_58;
  undefined8 uStack_50;
  TArrayView<FStateTreeExecutionFrame_const_,int> local_48;
  TObjectPtr<UStruct_const_>_u_0 local_38;
  undefined8 uStack_30;
  
  this = &((param_3->StateTree).field0_0x0.DebugPtr)->PropertyBindings;
  pFVar8 = FStateTreePropertyBindings::GetPropertyAccess(this,param_1);
  if (pFVar8 == (FStateTreePropertyAccess *)0x0) {
    return (void *)0x0;
  }
  InstanceData::GetDataViewOrTemporary
            ((FStateTreeDataView *)&local_68.ObjectPtr,param_2,(FStateTreeInstanceStorage *)0x0,
             param_4,param_3,&pFVar8->SourceDataHandle);
  bVar7 = IsPropertyRef(pFVar8->SourceLeafProperty);
  if (!bVar7) {
    if (param_5 != (FProperty **)0x0) {
      *param_5 = pFVar8->SourceLeafProperty;
    }
    pUVar3 = (pFVar8->SourceStructType).field0_0x0.DebugPtr;
    if (pUVar3 == (UStruct *)0x0) {
      bVar7 = local_68.DebugPtr == (UStruct *)0x0;
    }
    else {
      bVar7 = pUVar3 == local_68.DebugPtr;
    }
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceView.GetStruct() == PropertyAccess.SourceStructType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreePropertyBindings.h"
                           ,0x25c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar6)();
      return pvVar9;
    }
    local_38.DebugPtr = local_68.DebugPtr;
    uStack_30 = uStack_60;
    puVar13 = FPropertyBindingBindingCollection::GetAddress
                        ((FPropertyBindingBindingCollection *)this,
                         (FPropertyBindingDataView *)&local_38.ObjectPtr,&pFVar8->SourceIndirection,
                         pFVar8->SourceLeafProperty);
    return puVar13;
  }
  EVar1 = (pFVar8->SourceDataHandle).Source;
  if (((EVar1 != GlobalParameterData) && ((EVar1 - SubtreeParameterData & 0xfb) != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyAccess->SourceDataHandle.GetSource() == EStateTreeDataSourceType::GlobalParameterData || PropertyAccess->SourceDataHandle.GetSource() == EStateTreeDataSourceType::ExternalGlobalParameterData || PropertyAccess->SourceDataHandle.GetSource() == EStateTreeDataSourceType::SubtreeParameterData"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreePropertyRef.h"
                         ,0x27,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar6)();
    return pvVar9;
  }
  if (param_4 == (FStateTreeExecutionFrame *)0x0) {
    return (void *)0x0;
  }
  pUVar3 = (pFVar8->SourceStructType).field0_0x0.DebugPtr;
  if (pUVar3 == (UStruct *)0x0) {
    bVar7 = local_68.DebugPtr == (UStruct *)0x0;
  }
  else {
    bVar7 = pUVar3 == local_68.DebugPtr;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceView.GetStruct() == PropertyAccess.SourceStructType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreePropertyBindings.h"
                         ,0x25c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar6)();
    return pvVar9;
  }
  pFVar4 = pFVar8->SourceLeafProperty;
  if (pFVar4 == (FProperty *)0x0) {
    return (void *)0x0;
  }
  if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x14 & 1) == 0) {
    return (void *)0x0;
  }
  lVar5 = pFVar4[1]._padding_;
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyRef,(UObject *)pUVar10,
                         L"StateTreePropertyRef");
    if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d4adb75;
  }
  else {
LAB_14d4adb75:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton)->_padding_
    ;
    if ((iVar2 <= *(int *)(lVar5 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton)->_padding_)) {
      bVar7 = true;
      goto LAB_14d4adb95;
    }
  }
  bVar7 = false;
LAB_14d4adb95:
  if (bVar7) {
    local_58.DebugPtr = local_68.DebugPtr;
    uStack_50 = uStack_60;
    pFVar11 = (FStateTreePropertyRef *)
              FPropertyBindingBindingCollection::GetAddress
                        ((FPropertyBindingBindingCollection *)this,
                         (FPropertyBindingDataView *)&local_58.ObjectPtr,&pFVar8->SourceIndirection,
                         pFVar8->SourceLeafProperty);
    if (pFVar11 != (FStateTreePropertyRef *)0x0) {
      pFVar12 = (FStateTreeExecutionFrame *)
                (param_2->ExecutionState).ActiveFrames.AllocatorInstance.Data;
      iVar2 = (param_2->ExecutionState).ActiveFrames.ArrayNum;
      local_res18 = (FStateTreeExecutionFrame *)0x0;
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pvVar9 = (void *)(*pcVar6)();
        return pvVar9;
      }
      local_48._12_4_ = uStack_6c;
      local_48.ArrayNum = iVar2;
      local_48.DataPtr = pFVar12;
      pFVar12 = FStateTreeExecutionContext::FindFrame
                          ((param_4->StateTree).field0_0x0.DebugPtr,
                           (FStateTreeStateHandle)(param_4->RootState).Index,&local_48,&local_res18)
      ;
      if (pFVar12 != (FStateTreeExecutionFrame *)0x0) {
        pvVar9 = GetMutablePtrToProperty<void>(pFVar11,param_2,pFVar12,local_res18,param_5);
        return pvVar9;
      }
    }
  }
  return (void *)0x0;
}

// GetStructPtr<FStateTreeConditionBase_const_> @ 14d4addd0

/* WARNING: Removing unreachable block (ram,0x00014d4ade86) */

FStateTreeConditionBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeConditionBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeConditionBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar2,
                         L"StateTreeConditionBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar2,
                           L"StateTreeConditionBase");
      if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FStateTreeConditionBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FStateTreeConditionBase *)0x0;
  }
  return param_2;
}

// GetStructPtr<FStateTreeConditionBase_const_> @ 14d4adec0

FStateTreeConditionBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeConditionBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeConditionBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar3,
                         L"StateTreeConditionBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar3,
                           L"StateTreeConditionBase");
      if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FStateTreeConditionBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return (FStateTreeConditionBase *)0x0;
    }
  }
  return param_2;
}

// GetStructPtr<FStateTreeInstanceObjectWrapper_const_> @ 14d4adf90

/* WARNING: Removing unreachable block (ram,0x00014d4adff3) */

FStateTreeInstanceObjectWrapper * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeInstanceObjectWrapper_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FStateTreeInstanceObjectWrapper::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FStateTreeInstanceObjectWrapper::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FStateTreeInstanceObjectWrapper *)0x0;
    }
  }
  return (FStateTreeInstanceObjectWrapper *)0x0;
}

// GetStructPtr<FStateTreeInstanceObjectWrapper_const_> @ 14d4ae030

FStateTreeInstanceObjectWrapper * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeInstanceObjectWrapper_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar3 = FStateTreeInstanceObjectWrapper::StaticStruct();
    if (param_1 == pUVar3) {
      return param_2;
    }
    pUVar3 = FStateTreeInstanceObjectWrapper::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
  }
  return (FStateTreeInstanceObjectWrapper *)0x0;
}

// GetStructPtr<FStateTreeNodeBase_const_> @ 14d4ae0b0

/* WARNING: Removing unreachable block (ram,0x00014d4ae166) */

FStateTreeNodeBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeNodeBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeNodeBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar2,
                         L"StateTreeNodeBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar2,
                           L"StateTreeNodeBase");
      if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FStateTreeNodeBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FStateTreeNodeBase *)0x0;
  }
  return param_2;
}

// GetStructPtr<FStateTreeNodeBase_const_> @ 14d4ae1a0

FStateTreeNodeBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeNodeBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeNodeBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar3,
                         L"StateTreeNodeBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar3,
                           L"StateTreeNodeBase");
      if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FStateTreeNodeBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return (FStateTreeNodeBase *)0x0;
    }
  }
  return param_2;
}

// GetStructPtr<FStateTreeNodeBase> @ 14d4ae270

/* WARNING: Removing unreachable block (ram,0x00014d4ae326) */

FStateTreeNodeBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeNodeBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeNodeBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar2,
                         L"StateTreeNodeBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar2,
                           L"StateTreeNodeBase");
      if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FStateTreeNodeBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FStateTreeNodeBase *)0x0;
  }
  return param_2;
}

// GetStructRef<FStateTreeConditionBase_const_> @ 14d4ae360

FStateTreeConditionBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeConditionBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeConditionBase *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConditionBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConditionBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar5,
                         L"StateTreeConditionBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar5,
                         L"StateTreeConditionBase");
    if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d4ae45b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->_padding_
  ;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4ae45b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar5,
                         L"StateTreeConditionBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeConditionBase *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreeConsiderationBase_const_> @ 14d4ae540

FStateTreeConsiderationBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeConsiderationBase_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeConsiderationBase *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConsiderationBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConsiderationBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationBase,(UObject *)pUVar5,
                         L"StateTreeConsiderationBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationBase,(UObject *)pUVar5,
                         L"StateTreeConsiderationBase");
    if (Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d4ae63b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4ae63b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationBase,(UObject *)pUVar5,
                         L"StateTreeConsiderationBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeConsiderationBase *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreeEvaluatorBase_const_> @ 14d4ae720

FStateTreeEvaluatorBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeEvaluatorBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeEvaluatorBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeEvaluatorBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeEvaluatorBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeEvaluatorBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeEvaluatorBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeEvaluatorBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeEvaluatorBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeEvaluatorBase_const_> @ 14d4ae880

FStateTreeEvaluatorBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeEvaluatorBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeEvaluatorBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeEvaluatorBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeEvaluatorBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeEvaluatorBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeEvaluatorBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeEvaluatorBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeEvaluatorBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeInstanceObjectWrapper_const_> @ 14d4ae9e0

FStateTreeInstanceObjectWrapper * __cdecl
UE::StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeInstanceObjectWrapper *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeInstanceObjectWrapper::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeInstanceObjectWrapper::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeInstanceObjectWrapper::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeInstanceObjectWrapper_const_> @ 14d4aeb40

FStateTreeInstanceObjectWrapper * __cdecl
UE::StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeInstanceObjectWrapper *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeInstanceObjectWrapper::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeInstanceObjectWrapper::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeInstanceObjectWrapper::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeNodeBase_const_> @ 14d4aeca0

FStateTreeNodeBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeNodeBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeNodeBase *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeNodeBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeNodeBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar5,
                         L"StateTreeNodeBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar5,
                         L"StateTreeNodeBase");
    if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14d4aed9b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4aed9b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar5,
                         L"StateTreeNodeBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeNodeBase *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreeNodeBase_const_> @ 14d4aee80

FStateTreeNodeBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeNodeBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeNodeBase *pFVar4;
  UPackage *pUVar5;
  FString FStack_28;
  FString FStack_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeNodeBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeNodeBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar5,
                         L"StateTreeNodeBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar5,
                         L"StateTreeNodeBase");
    if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14d4aed9b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4aed9b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar5,
                         L"StateTreeNodeBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton,&FStack_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeNodeBase *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreePropertyFunctionBase_const_> @ 14d4aee90

FStateTreePropertyFunctionBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreePropertyFunctionBase_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreePropertyFunctionBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreePropertyFunctionBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreePropertyFunctionBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreePropertyFunctionBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreePropertyFunctionBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreePropertyFunctionBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreePropertyFunctionBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeTaskBase_const_> @ 14d4aeff0

FStateTreeTaskBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeTaskBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeTaskBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeTaskBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeTaskBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeTaskBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeTaskBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeTaskBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeTaskBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeTaskBase_const_> @ 14d4af150

FStateTreeTaskBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeTaskBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeTaskBase *pFVar4;
  UScriptStruct *pUVar5;
  FString FStack_28;
  FString FStack_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeTaskBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeTaskBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeTaskBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeTaskBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeTaskBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&FStack_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeTaskBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FCompactStateTreeParameters> @ 14d4af160

FCompactStateTreeParameters * __cdecl
UE::StructUtils::GetStructRef<FCompactStateTreeParameters>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FCompactStateTreeParameters *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCompactStateTreeParameters *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCompactStateTreeParameters *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FCompactStateTreeParameters::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FCompactStateTreeParameters::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FCompactStateTreeParameters::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCompactStateTreeParameters *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>_> @ 14d4b0060

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>_>
          (ushort param_1,
          ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>_> @ 14d4b0130

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>_>
          (uint param_1,uint param_2,
          ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// operator() @ 14d4b4750

EEventEnumerate __thiscall
`UE::StateTreeDebugger::AddEvents'::__l2::<lambda_1>::operator()
          (void *this,double param_1,double param_2,uint param_3,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  if (((*plVar1 == -1) || (param_2 < (double)plVar1[1])) ||
     ((double)plVar1[2] <= param_1 && param_1 != (double)plVar1[2])) {
    cVar4 = (**(code **)(**(longlong **)this + 0x40))(*(longlong **)this,0,SUB84(param_1,0));
    if (cVar4 == '\0') {
      puVar6 = (undefined8 *)(**(code **)(**(longlong **)this + 0x48))(*(longlong **)this,0,0);
      if ((puVar6 == (undefined8 *)0x0) || ((double)puVar6[1] <= param_2)) {
        return Continue;
      }
      puVar2 = *(undefined8 **)((longlong)this + 8);
      uVar3 = puVar6[1];
      *puVar2 = *puVar6;
      puVar2[1] = uVar3;
      uVar3 = puVar6[3];
      puVar2[2] = puVar6[2];
      puVar2[3] = uVar3;
    }
  }
  bVar5 = UE::StateTreeDebugger::ProcessEvent
                    (*(FInstanceEventCollection **)((longlong)this + 0x10),
                     *(FFrame **)((longlong)this + 8),param_4,
                     *(ITraceReader **)((longlong)this + 0x18));
  return bVar5 ^ Stop;
}

// operator() @ 14d4b5720

void __thiscall
`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>::operator()
          (void *this,EStateTreeTraceStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == TracesStarted) {
    UE::StateTreeTrace::FBufferedDataList::Reset(&UE::StateTreeTrace::GBufferedEvents);
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                         ,0x18b,
                         L"Expecting to only be called by the statetree delegate on the main thread before worker threads trace events."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (UE::StateTreeTrace::GBufferedEvents.RecordingWorldTime == __real_bff0000000000000) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                           ,0x1f7,
                           L"Expecting to only be called by the world delegate on the main thread before worker threads trace events."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UE::StateTreeTrace::GBufferedEvents.RecordingWorldTime = 0.0;
      LOCK();
      UE::StateTreeTrace::GBufferedEvents.TracedRecordingWorldTime =
           (atomic<double>)0xbff0000000000000;
      UNLOCK();
    }
    UE::StateTreeTrace::FBufferedDataList::TraceWorldTimeIfNeeded_AnyThread
              (&UE::StateTreeTrace::GBufferedEvents);
    return;
  }
  if (param_1 == StoppingTrace) {
    UE::StateTreeTrace::FBufferedDataList::OnStoppingTraces_GameThread
              (&UE::StateTreeTrace::GBufferedEvents);
    return;
  }
  if (param_1 == Cleared) {
    UE::StateTreeTrace::FBufferedDataList::Reset(&UE::StateTreeTrace::GBufferedEvents);
    return;
  }
  return;
}

// AddEvents @ 14d4b6190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeDebugger::AddEvents
          (double param_1,double param_2,IFrameProvider *param_3,FStateTreeInstanceDebugId param_4,
          ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>
          *param_5,TNotNull<UE::StateTreeDebugger::ITraceReader_*> param_6)

{
  undefined1 auStack_a8 [32];
  code *local_88;
  IFrameProvider **local_80;
  IFrameProvider *local_78;
  undefined8 *local_70;
  longlong local_68;
  ITraceReader *local_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_68 = (**(code **)((longlong)*param_6.Val + 8))(param_6.Val,param_4);
  if (local_68 != 0) {
    local_70 = local_58;
    local_80 = &local_78;
    local_58[0] = 0xffffffffffffffff;
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::StateTreeDebugger::AddEvents'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,double,double,unsigned_int,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
               ::Call;
    local_60 = param_6.Val;
    local_78 = param_3;
    (**(code **)((longlong)*param_5 + 0x58))(param_5,SUB84(param_1,0),SUB84(param_2,0),&local_88);
  }
  return;
}

// ConditionEnterState @ 14d4b7d50

void __cdecl
UE::StateTree::Debug::ConditionEnterState
          (FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeEnter(param_1,&local_18,&OnConditionEnterState_AnyThread);
  return;
}

// ConditionExitState @ 14d4b7d80

void __cdecl
UE::StateTree::Debug::ConditionExitState
          (FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeExit(param_1,&local_18,&OnConditionExitState_AnyThread);
  return;
}

// ConditionTest @ 14d4b7db0

void __cdecl
UE::StateTree::Debug::ConditionTest(FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeTick(param_1,&local_18,&OnTestCondition_AnyThread);
  return;
}

// EnterPhase @ 14d4bb1a0

void __cdecl
UE::StateTree::Debug::EnterPhase
          (FStateTreeExecutionContext *param_1,EStateTreeUpdatePhase param_2,
          FStateTreeStateHandle param_3)

{
  TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,enum_EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
  ::Broadcast(&OnBeginUpdatePhase_AnyThread,param_1,param_2,param_3);
  return;
}

// EvaluatorEnterTree @ 14d4bbac0

void __cdecl
UE::StateTree::Debug::EvaluatorEnterTree
          (FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeEnter(param_1,&local_18,&OnEvaluatorEnterTree_AnyThread);
  return;
}

// EvaluatorExitTree @ 14d4bbaf0

void __cdecl
UE::StateTree::Debug::EvaluatorExitTree(FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeExit(param_1,&local_18,&OnEvaluatorExitTree_AnyThread);
  return;
}

// EvaluatorTick @ 14d4bbb20

void __cdecl
UE::StateTree::Debug::EvaluatorTick(FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeTick(param_1,&local_18,&OnTickEvaluator_AnyThread);
  return;
}

// EventConsumed @ 14d4bbb50

void __cdecl
UE::StateTree::Debug::EventConsumed
          (FStateTreeExecutionContext *param_1,FStateTreeSharedEvent *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&OnEventConsumed_AnyThread);
  bVar3 = false;
  OnEventConsumed_AnyThread._60_4_ = OnEventConsumed_AnyThread._60_4_ + 1;
  uVar7 = OnEventConsumed_AnyThread._48_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnEventConsumed_AnyThread._48_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnEventConsumed_AnyThread._40_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnEventConsumed_AnyThread._40_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnEventConsumed_AnyThread._60_4_ = OnEventConsumed_AnyThread._60_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnEventConsumed_AnyThread,
               false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4bbc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&OnEventConsumed_AnyThread);
  return;
}

// EventSent @ 14d4bbca0

void __cdecl
UE::StateTree::Debug::EventSent
          (FStateTreeMinimalExecutionContext *param_1,TNotNull<UStateTree_const_*> param_2,
          FGameplayTag param_3,FConstStructView *param_4,FName param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  UStateTree *local_38;
  FName local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FName local_18;
  
  local_28 = *(undefined4 *)&param_4->ScriptStruct;
  uStack_24 = *(undefined4 *)((longlong)&param_4->ScriptStruct + 4);
  uStack_20 = *(undefined4 *)&param_4->StructMemory;
  uStack_1c = *(undefined4 *)((longlong)&param_4->StructMemory + 4);
  local_18 = param_5;
  local_38 = param_2.Val;
  local_30 = param_3.TagName;
  EnterCriticalSection((LPCRITICAL_SECTION)&OnEventSent_AnyThread);
  bVar3 = false;
  OnEventSent_AnyThread._60_4_ = OnEventSent_AnyThread._60_4_ + 1;
  uVar7 = OnEventSent_AnyThread._48_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnEventSent_AnyThread._48_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnEventSent_AnyThread._40_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnEventSent_AnyThread._40_8_), plVar1 == (longlong *)0x0)
          ) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,&local_38), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnEventSent_AnyThread._60_4_ = OnEventSent_AnyThread._60_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnEventSent_AnyThread,false)
    ;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&OnEventSent_AnyThread);
  return;
}

// ExitPhase @ 14d4bc220

void __cdecl
UE::StateTree::Debug::ExitPhase
          (FStateTreeExecutionContext *param_1,EStateTreeUpdatePhase param_2,
          FStateTreeStateHandle param_3)

{
  TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,enum_EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
  ::Broadcast(&OnEndUpdatePhase_AnyThread,param_1,param_2,param_3);
  return;
}

// FindCVarInstanceDataGC @ 14d4bc6a0

IConsoleVariable * __cdecl UE::StateTree::Debug::Private::FindCVarInstanceDataGC(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *pIVar3;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IConsoleVariable *)(*pcVar1)();
    return pIVar3;
  }
  pIVar3 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"StateTree.RuntimeValidation.InstanceDataGC",1);
  if ((pIVar3 == (IConsoleVariable *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundVariable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTree.cpp"
                         ,0x6cb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IConsoleVariable *)(*pcVar1)();
    return pIVar3;
  }
  return pIVar3;
}

// FindOrAddDebugIdForAsset @ 14d4bc740

FStateTreeIndex16 __cdecl UE::StateTreeTrace::FindOrAddDebugIdForAsset(UStateTree *param_1)

{
  FBufferedDataList::FindOrAddDebugIdForAsset_AnyThread(&GBufferedEvents,param_1);
  return (FStateTreeIndex16)(ushort)param_1;
}

// GetStateName @ 14d4bfef0

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FString * __cdecl
UE::StateTreeTrace::GetStateName
          (FString *__return_storage_ptr__,UStateTree *param_1,FCompactStateTreeState *param_2)

{
  UStateTree *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FCompactStateTreeState *pFVar5;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (FCompactStateTreeState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceTypes.cpp"
                         ,0x10,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  pUVar1 = (param_2->LinkedAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UStateTree *)0x0) {
    pFVar5 = UStateTree::GetStateFromHandle
                       (param_1,(FStateTreeStateHandle)(param_2->LinkedState).Index);
    if (pFVar5 == (FCompactStateTreeState *)0x0) {
      ::FName::ToString(&param_2->Name,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    ::FName::ToString(&pFVar5->Name,&local_18);
    ::FName::ToString(&param_2->Name,&local_28);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s > %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res18.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res18.Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(&local_res18,&local_48);
    ::FName::ToString(&param_2->Name,&local_38);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s > [%s]");
    local_18.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_18.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NodeEnter @ 14d4c4af0

void __cdecl
UE::StateTree::Debug::Private::NodeEnter
          (FStateTreeExecutionContext *param_1,FNodeReference *param_2,
          TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  ushort uVar2;
  UStateTree *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FStateTreeInstanceStorage *this;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ForAnyElementType *local_res10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  FNodeDelegateArgs local_68;
  
  uVar10 = 0;
  uVar2 = (param_2->Index).Value;
  if (uVar2 != 0xffff) {
    pUVar3 = (param_2->StateTree).Val;
    pFVar8 = (pUVar3->IDToNodeMappings).AllocatorInstance.Data;
    pFVar4 = pFVar8 + (longlong)(pUVar3->IDToNodeMappings).ArrayNum * 0x14;
    for (; (pFVar11 = (FScriptContainerElement *)0x0, pFVar8 != pFVar4 &&
           (pFVar11 = pFVar8, *(ushort *)(pFVar8 + 0x10) != uVar2)); pFVar8 = pFVar8 + 0x14) {
    }
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      uVar12 = *(uint *)pFVar11;
      uVar13 = *(uint *)(pFVar11 + 4);
      uVar14 = *(uint *)(pFVar11 + 8);
      uVar15 = *(uint *)(pFVar11 + 0xc);
      uVar9 = *(uint *)(pFVar11 + 8);
      goto LAB_14d4c4bad;
    }
  }
  local_a8 = (ForAnyElementType *)0x0;
  uStack_a0 = (uint *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  uVar12 = (uint)local_a8;
  uVar13 = local_a8._4_4_;
  uVar14 = (uint)uStack_a0;
  uVar15 = uStack_a0._4_4_;
  uVar9 = uVar10;
LAB_14d4c4bad:
  if (((uVar13 == 0 && uVar15 == 0) && uVar12 == 0) && uVar9 == 0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1239485092988977099>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebug.cpp"
                       ,0x35,"NodeId.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    this = FStateTreeInstanceData::GetStorage(param_1->InstanceData);
    FStateTreeInstanceStorage::GetRuntimeValidation(this);
    if (local_res10 != (ForAnyElementType *)0x0) {
      if (param_1->CurrentlyProcessedFrame != (FStateTreeExecutionFrame *)0x0) {
        uVar10 = (param_1->CurrentlyProcessedFrame->FrameID).Value;
      }
      pFVar4 = local_res10->Data;
      for (pFVar8 = pFVar4; local_98 = uVar12, uStack_94 = uVar13, uStack_90 = uVar14,
          uStack_8c = uVar15, pFVar8 != pFVar4 + (longlong)*(int *)&local_res10[1].Data * 0x18;
          pFVar8 = pFVar8 + 0x18) {
        if ((((uVar13 == *(uint *)(pFVar8 + 4) && uVar9 == *(uint *)(pFVar8 + 8)) &&
             uVar15 == *(uint *)(pFVar8 + 0xc)) && uVar12 == *(uint *)pFVar8) &&
           (*(uint *)(pFVar8 + 0x10) == uVar10)) {
          if ((bRuntimeValidationEnterExitState != false) && (((byte)pFVar8[0x14] & 1) != 0)) {
            uStack_a0 = &local_98;
            local_a8 = local_res10;
            `UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeEnterState'::__l8::<lambda_2>
            ::operator()(&local_a8);
            bRuntimeValidationEnterExitState = false;
          }
          pFVar8[0x14] = (FScriptContainerElement)((byte)pFVar8[0x14] | 1);
          goto LAB_14d4c4d74;
        }
      }
      uStack_74 = CONCAT31(uStack_74._1_3_,1);
      local_88 = uVar12;
      uStack_84 = uVar13;
      uStack_80 = uVar14;
      uStack_7c = uVar15;
      local_78 = uVar10;
      if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar4 + (longlong)*(int *)((longlong)&local_res10[1].Data + 4) * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&local_res10[1].Data;
      piVar1 = (int *)((longlong)&local_res10[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x418,local_res10,piVar1);
      }
      *(int *)&local_res10[1].Data = iVar7 + 1;
      pFVar8 = local_res10->Data;
      pFVar4 = pFVar8 + (longlong)iVar7 * 0x18;
      *(ulonglong *)pFVar4 = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(pFVar4 + 8) = CONCAT44(uStack_7c,uStack_80);
      *(ulonglong *)(pFVar8 + (longlong)iVar7 * 0x18 + 0x10) = CONCAT44(uStack_74,local_78);
    }
LAB_14d4c4d74:
    local_68.Node.StateTree.Val = (param_2->StateTree).Val;
    local_68.Node.Index.Value = (param_2->Index).Value;
    local_68.Node._10_6_ = *(undefined6 *)&param_2->field_0xa;
    local_68.NodeId.A = uVar12;
    local_68.NodeId.B = uVar13;
    local_68.NodeId.C = uVar14;
    local_68.NodeId.D = uVar15;
    TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
    ::Broadcast(param_3,param_1,&local_68);
  }
  return;
}

// NodeExit @ 14d4c4f90

void __cdecl
UE::StateTree::Debug::Private::NodeExit
          (FStateTreeExecutionContext *param_1,FNodeReference *param_2,
          TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  ushort uVar3;
  UStateTree *pUVar4;
  code *pcVar5;
  bool bVar6;
  FStateTreeInstanceStorage *this;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_res8;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78 [8];
  uint *local_70;
  FNodeDelegateArgs local_68;
  
  uVar3 = (param_2->Index).Value;
  uVar9 = 0;
  if (uVar3 != 0xffff) {
    pUVar4 = (param_2->StateTree).Val;
    pFVar10 = (pUVar4->IDToNodeMappings).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)(pUVar4->IDToNodeMappings).ArrayNum * 0x14;
    for (; (pFVar11 = (FScriptContainerElement *)0x0, pFVar10 != pFVar1 &&
           (pFVar11 = pFVar10, *(ushort *)(pFVar10 + 0x10) != uVar3)); pFVar10 = pFVar10 + 0x14) {
    }
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      uVar12 = *(uint *)pFVar11;
      uVar13 = *(uint *)(pFVar11 + 4);
      uVar14 = *(uint *)(pFVar11 + 8);
      uVar15 = *(uint *)(pFVar11 + 0xc);
      uVar8 = *(uint *)(pFVar11 + 8);
      goto LAB_14d4c5040;
    }
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = (uint *)0x0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  uVar12 = (uint)local_98;
  uVar13 = local_98._4_4_;
  uVar14 = (uint)uStack_90;
  uVar15 = uStack_90._4_4_;
  uVar8 = uVar9;
LAB_14d4c5040:
  if (((uVar13 == 0 && uVar15 == 0) && uVar12 == 0) && uVar8 == 0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1239485092988977084>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebug.cpp"
                       ,0x44,"NodeId.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    this = FStateTreeInstanceData::GetStorage(param_1->InstanceData);
    FStateTreeInstanceStorage::GetRuntimeValidation(this);
    if (local_res8 != (undefined8 *)0x0) {
      if (param_1->CurrentlyProcessedFrame != (FStateTreeExecutionFrame *)0x0) {
        uVar9 = (param_1->CurrentlyProcessedFrame->FrameID).Value;
      }
      puVar7 = (uint *)*local_res8;
      puVar2 = puVar7 + (longlong)*(int *)(local_res8 + 1) * 6;
      for (; local_88 = uVar12, uStack_84 = uVar13, uStack_80 = uVar14, uStack_7c = uVar15,
          puVar7 != puVar2; puVar7 = puVar7 + 6) {
        if ((((uVar13 == puVar7[1] && uVar8 == puVar7[2]) && uVar15 == puVar7[3]) &&
             uVar12 == *puVar7) && (puVar7[4] == uVar9)) {
          if ((bRuntimeValidationEnterExitState != false) && ((puVar7[5] & 1) == 0)) {
            local_98 = local_res8;
            uStack_90 = &local_88;
            `UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState'::__l8::<lambda_2>
            ::operator()(&local_98);
            bRuntimeValidationEnterExitState = false;
          }
          *(byte *)(puVar7 + 5) = (byte)puVar7[5] & 0xfe;
          goto LAB_14d4c515c;
        }
      }
      if (bRuntimeValidationEnterExitState != false) {
        local_70 = &local_88;
        `UE::StateTree::Debug::FRuntimeValidationInstanceData::NodeExitState'::__l12::<lambda_3>::
        operator()(local_78);
        bRuntimeValidationEnterExitState = false;
      }
    }
LAB_14d4c515c:
    local_68.Node.StateTree.Val = (param_2->StateTree).Val;
    local_68.Node.Index.Value = (param_2->Index).Value;
    local_68.Node._10_6_ = *(undefined6 *)&param_2->field_0xa;
    local_68.NodeId.A = uVar12;
    local_68.NodeId.B = uVar13;
    local_68.NodeId.C = uVar14;
    local_68.NodeId.D = uVar15;
    TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
    ::Broadcast(param_3,param_1,&local_68);
  }
  return;
}

// NodeTick @ 14d4c52c0

void __cdecl
UE::StateTree::Debug::Private::NodeTick
          (FStateTreeExecutionContext *param_1,FNodeReference *param_2,
          TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  UStateTree *pUVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FNodeDelegateArgs local_28;
  
  uVar2 = (param_2->Index).Value;
  uVar8 = 0;
  uVar10 = uVar8;
  uVar9 = uVar8;
  uVar11 = uVar8;
  if (uVar2 != 0xffff) {
    pUVar3 = (param_2->StateTree).Val;
    pFVar6 = (pUVar3->IDToNodeMappings).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)(pUVar3->IDToNodeMappings).ArrayNum * 0x14;
    for (; (pFVar7 = (FScriptContainerElement *)0x0, pFVar6 != pFVar1 &&
           (pFVar7 = pFVar6, *(ushort *)(pFVar6 + 0x10) != uVar2)); pFVar6 = pFVar6 + 0x14) {
    }
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      uVar8 = *(uint *)(pFVar7 + 8);
      uVar10 = *(uint *)pFVar7;
      uVar9 = *(uint *)(pFVar7 + 4);
      uVar11 = *(uint *)(pFVar7 + 0xc);
    }
  }
  if (((uVar10 == 0 && uVar9 == 0) && uVar8 == 0) && uVar11 == 0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1239485092988977070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebug.cpp"
                       ,0x52,"NodeId.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_28.Node.StateTree.Val = (param_2->StateTree).Val;
    local_28.Node.Index.Value = (param_2->Index).Value;
    local_28.Node._10_6_ = *(undefined6 *)&param_2->field_0xa;
    local_28.NodeId.B = uVar9;
    local_28.NodeId.A = uVar10;
    local_28.NodeId.D = uVar11;
    local_28.NodeId.C = uVar8;
    TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,UE::StateTree::Debug::FNodeDelegateArgs),FDefaultTSDelegateUserPolicy>
    ::Broadcast(param_3,param_1,&local_28);
  }
  return;
}

// NodeToString @ 14d4c53f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::StateTree::Debug::Private::NodeToString
          (FString *__return_storage_ptr__,UObject *param_1,FGuid *param_2)

{
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.Base = local_118;
  local_138.End = (wchar_t *)local_18;
  if (param_1 != (UObject *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,(UObject *)0x0,&local_138);
  }
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L':';
  local_138.CurPos = local_138.CurPos + 1;
  FGuid::AppendString(param_2,&local_138,DigitsWithHyphensLower);
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_138.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// OutputActiveStatesEventTrace @ 14d4c8170

void __cdecl
UE::StateTreeTrace::OutputActiveStatesEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_2)

{
  FStateTreeInstanceDebugId local_res8;
  TArrayView<FStateTreeExecutionFrame_const_,int> local_38;
  FActiveStates local_28;
  
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceInstance(param_1);
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    FInstanceEventBufferedData::FActiveStates::FActiveStates(&local_28,&GBufferedEvents,&local_38);
    FInstanceEventBufferedData::FActiveStates::Output(&local_28,local_res8);
    if (local_28.AssetDebugIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AssetDebugIds.AllocatorInstance.Data);
    }
    if (local_28.StatesIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StatesIndices.AllocatorInstance.Data);
    }
  }
  return;
}

// OutputActiveStatesEventTrace @ 14d4c8210

void __cdecl
UE::StateTreeTrace::OutputActiveStatesEventTrace
          (FStateTreeInstanceDebugId param_1,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_2)

{
  return;
}

// OutputAssetDebugIdEvent @ 14d4c8280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputAssetDebugIdEvent(UStateTree *param_1,FStateTreeIndex16 param_2)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  FName local_68;
  LARGE_INTEGER local_60;
  FString local_58;
  FString local_48;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (-1 < StateTreeDebugChannel->Enabled) {
    if ((param_1 == (UStateTree *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StateTree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                           ,0x2b5,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_68.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_68,&local_48);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0);
    if (-1 < StateTreeDebugChannel->Enabled) {
      Trace::Private::FLogScope::Enter<FStateTreeDebuggerAssetDebugIdEventFields>
                ((TLogScope<1> *)&local_38);
      QueryPerformanceCounter(&local_60);
      *local_38 = local_60;
      iVar10 = local_48.Data.ArrayNum + -1;
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      if (iVar10 < 0) {
        iVar10 = 0;
        wVar2 = *(wchar_t *)FVar5.Data;
        pFVar1 = FVar5.Data;
        while (wVar2 != L'\0') {
          pFVar1 = pFVar1 + 2;
          iVar10 = iVar10 + 1;
          wVar2 = *(wchar_t *)pFVar1;
        }
      }
      Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar5.Data,iVar10);
      iVar10 = local_58.Data.ArrayNum + -1;
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      if (iVar10 < 0) {
        iVar10 = 0;
        wVar2 = *(wchar_t *)FVar5.Data;
        pFVar1 = FVar5.Data;
        while (wVar2 != L'\0') {
          pFVar1 = pFVar1 + 2;
          iVar10 = iVar10 + 1;
          wVar2 = *(wchar_t *)pFVar1;
        }
      }
      Trace::Private::Field_WriteStringWide(2,(wchar_t *)FVar5.Data,iVar10);
      uVar9 = (ulonglong)_tls_index;
      local_38[1].s.LowPart = param_1->LastCompiledEditorDataHash;
      pvVar6 = ThreadLocalStoragePointer;
      *(ushort *)((longlong)local_38 + 0xc) = param_2.Value;
      lVar3 = *(longlong *)((longlong)pvVar6 + uVar9 * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      **(undefined1 **)(lVar3 + 0x20) = 6;
      lVar8 = *(longlong *)(lVar3 + 0x20) + 1;
      *(longlong *)(lVar3 + 0x20) = lVar8;
      if (lVar3 != local_30) {
        *(longlong *)(lVar3 + 0x28) = lVar8;
      }
      *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OutputConditionEventTrace @ 14d4c8490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputConditionEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,FStateTreeIndex16 param_2,
          FStateTreeDataView *param_3,EStateTreeTraceEventType param_4)

{
  longlong lVar1;
  void *pvVar2;
  LARGE_INTEGER *pLVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_158 [32];
  LARGE_INTEGER local_138;
  DWORD local_130;
  undefined4 local_12c;
  FNodeCustomDebugData local_128;
  undefined1 local_108 [16];
  uchar *local_f8;
  uchar *puStack_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long64 lStack_d0;
  FPackageFileVersion local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FCustomVersionContainer *pFStack_b0;
  FCustomPropertyListNode *local_a8;
  FArchiveSavePackageData *pFStack_a0;
  FProperty *local_98;
  FArchiveSerializedPropertyChain *pFStack_90;
  undefined8 local_88;
  FArchiveState *pFStack_80;
  undefined8 local_78;
  uchar **local_70;
  undefined8 local_68;
  uchar *local_60;
  undefined8 local_58;
  LARGE_INTEGER *local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  local_108._0_8_ = 0;
  local_108._8_8_ = (FFastPathLoadBuffer *)0x0;
  local_138.QuadPart = 0;
  local_f8 = (uchar *)0x0;
  puStack_f0 = (uchar *)0x0;
  local_e8 = (uchar *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8.FileVersionUE4 = 0;
  local_c8.FileVersionUE5 = 0;
  uStack_c0 = 0;
  local_b8._0_2_ = 0;
  local_b8._2_2_ = 0;
  local_b8._4_4_ = 0;
  pFStack_b0 = (FCustomVersionContainer *)0x0;
  local_a8 = (FCustomPropertyListNode *)0x0;
  pFStack_a0 = (FArchiveSavePackageData *)0x0;
  local_98 = (FProperty *)0x0;
  pFStack_90 = (FArchiveSerializedPropertyChain *)0x0;
  local_88 = 0;
  pFStack_80 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_108);
  local_78 = 0;
  local_108._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_70 = &local_60;
  local_68 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_108,true);
  (**(code **)(local_108._0_8_ + 0x108))(local_108);
  local_60 = (uchar *)0x0;
  local_108._0_8_ = &___7FBufferArchive__6B_;
  local_128.TraceDebuggerString.Data.AllocatorInstance.Data =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.TraceDebuggerString.Data.ArrayNum =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum;
  local_128.TraceDebuggerString.Data.ArrayMax =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum = 0;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax = 0;
  local_128.MergePolicy = ((param_1.Val)->NodeCustomDebugTraceData).MergePolicy;
  local_58 = 0;
  ::FString::Reset(&((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString,0);
  local_48 = *(LARGE_INTEGER **)param_3;
  lStack_40 = *(longlong *)&param_3->field_0x8;
  ((param_1.Val)->NodeCustomDebugTraceData).MergePolicy = Unset;
  SerializeDebugDataToArchive
            ((FBufferArchive *)local_108,&local_128,(FStateTreeDataView *)&local_48);
  if (local_128.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.TraceDebuggerString.Data.AllocatorInstance.Data);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceBufferedEvents(param_1);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerConditionEventFields>
              ((TLogScope<1> *)&local_48);
    QueryPerformanceCounter(&local_138);
    pLVar3 = local_48;
    *local_48 = local_138;
    local_48[1].s.LowPart = local_130;
    *(undefined4 *)((longlong)local_48 + 0xc) = local_12c;
    *(ushort *)(local_48 + 2) = param_2.Value;
    Trace::Private::Field_WriteAuxData(4,local_60,(uint)local_58 & 0x7ffff);
    pvVar2 = ThreadLocalStoragePointer;
    uVar5 = (ulonglong)_tls_index;
    *(EStateTreeTraceEventType *)((longlong)pLVar3 + 0x12) = param_4;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar5 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar4;
    if (lVar1 != lStack_40) {
      *(longlong *)(lVar1 + 0x28) = lVar4;
    }
    *(undefined8 *)(lStack_40 + 0x28) = *(undefined8 *)(lStack_40 + 0x20);
  }
  if (local_60 != (uchar *)0x0) {
    FMemory::Free(local_60);
  }
  FArchive::~FArchive((FArchive *)local_108);
  return;
}

// OutputConditionEventTrace @ 14d4c86e0

void __cdecl
UE::StateTreeTrace::OutputConditionEventTrace
          (FStateTreeInstanceDebugId param_1,FNodeCustomDebugData *param_2,FStateTreeIndex16 param_3
          ,FStateTreeDataView *param_4,EStateTreeTraceEventType param_5)

{
  return;
}

// OutputEvaluatorEventTrace @ 14d4c86f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputEvaluatorEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,FStateTreeIndex16 param_2,
          FStateTreeDataView *param_3,EStateTreeTraceEventType param_4)

{
  longlong lVar1;
  void *pvVar2;
  LARGE_INTEGER *pLVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_158 [32];
  LARGE_INTEGER local_138;
  DWORD local_130;
  undefined4 local_12c;
  FNodeCustomDebugData local_128;
  undefined1 local_108 [16];
  uchar *local_f8;
  uchar *puStack_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long64 lStack_d0;
  FPackageFileVersion local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FCustomVersionContainer *pFStack_b0;
  FCustomPropertyListNode *local_a8;
  FArchiveSavePackageData *pFStack_a0;
  FProperty *local_98;
  FArchiveSerializedPropertyChain *pFStack_90;
  undefined8 local_88;
  FArchiveState *pFStack_80;
  undefined8 local_78;
  uchar **local_70;
  undefined8 local_68;
  uchar *local_60;
  undefined8 local_58;
  LARGE_INTEGER *local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  local_108._0_8_ = 0;
  local_108._8_8_ = (FFastPathLoadBuffer *)0x0;
  local_138.QuadPart = 0;
  local_f8 = (uchar *)0x0;
  puStack_f0 = (uchar *)0x0;
  local_e8 = (uchar *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8.FileVersionUE4 = 0;
  local_c8.FileVersionUE5 = 0;
  uStack_c0 = 0;
  local_b8._0_2_ = 0;
  local_b8._2_2_ = 0;
  local_b8._4_4_ = 0;
  pFStack_b0 = (FCustomVersionContainer *)0x0;
  local_a8 = (FCustomPropertyListNode *)0x0;
  pFStack_a0 = (FArchiveSavePackageData *)0x0;
  local_98 = (FProperty *)0x0;
  pFStack_90 = (FArchiveSerializedPropertyChain *)0x0;
  local_88 = 0;
  pFStack_80 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_108);
  local_78 = 0;
  local_108._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_70 = &local_60;
  local_68 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_108,true);
  (**(code **)(local_108._0_8_ + 0x108))(local_108);
  local_60 = (uchar *)0x0;
  local_108._0_8_ = &___7FBufferArchive__6B_;
  local_128.TraceDebuggerString.Data.AllocatorInstance.Data =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.TraceDebuggerString.Data.ArrayNum =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum;
  local_128.TraceDebuggerString.Data.ArrayMax =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum = 0;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax = 0;
  local_128.MergePolicy = ((param_1.Val)->NodeCustomDebugTraceData).MergePolicy;
  local_58 = 0;
  ::FString::Reset(&((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString,0);
  local_48 = *(LARGE_INTEGER **)param_3;
  lStack_40 = *(longlong *)&param_3->field_0x8;
  ((param_1.Val)->NodeCustomDebugTraceData).MergePolicy = Unset;
  SerializeDebugDataToArchive
            ((FBufferArchive *)local_108,&local_128,(FStateTreeDataView *)&local_48);
  if (local_128.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.TraceDebuggerString.Data.AllocatorInstance.Data);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceBufferedEvents(param_1);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerEvaluatorEventFields>
              ((TLogScope<1> *)&local_48);
    QueryPerformanceCounter(&local_138);
    pLVar3 = local_48;
    *local_48 = local_138;
    local_48[1].s.LowPart = local_130;
    *(undefined4 *)((longlong)local_48 + 0xc) = local_12c;
    *(ushort *)(local_48 + 2) = param_2.Value;
    Trace::Private::Field_WriteAuxData(4,local_60,(uint)local_58 & 0x7ffff);
    pvVar2 = ThreadLocalStoragePointer;
    uVar5 = (ulonglong)_tls_index;
    *(EStateTreeTraceEventType *)((longlong)pLVar3 + 0x12) = param_4;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar5 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar4;
    if (lVar1 != lStack_40) {
      *(longlong *)(lVar1 + 0x28) = lVar4;
    }
    *(undefined8 *)(lStack_40 + 0x28) = *(undefined8 *)(lStack_40 + 0x20);
  }
  if (local_60 != (uchar *)0x0) {
    FMemory::Free(local_60);
  }
  FArchive::~FArchive((FArchive *)local_108);
  return;
}

// OutputEvaluatorEventTrace @ 14d4c8940

void __cdecl
UE::StateTreeTrace::OutputEvaluatorEventTrace
          (FStateTreeInstanceDebugId param_1,FNodeCustomDebugData *param_2,FStateTreeIndex16 param_3
          ,FStateTreeDataView *param_4,EStateTreeTraceEventType param_5)

{
  return;
}

// OutputInstanceAssetEvent @ 14d4c8950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputInstanceAssetEvent
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,UStateTree *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_2 == (UStateTree *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateTree != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x2d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
    if (-1 < StateTreeDebugChannel->Enabled) {
      TraceBufferedEvents(param_1);
    }
    FBufferedDataList::FindOrAddDebugIdForAsset_AnyThread(&GBufferedEvents,(UStateTree *)local_38);
    if (-1 < StateTreeDebugChannel->Enabled) {
      Trace::Private::FLogScope::Enter<FStateTreeDebuggerInstanceFrameEventFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].s.LowPart = local_38._8_4_;
      *(undefined4 *)((longlong)local_20 + 0xc) = local_38._12_4_;
      *(undefined2 *)(local_20 + 2) = local_38._0_2_;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OutputInstanceAssetEvent @ 14d4c8a70

void __cdecl
UE::StateTreeTrace::OutputInstanceAssetEvent(FStateTreeInstanceDebugId param_1,UStateTree *param_2)

{
  return;
}

// OutputInstanceFrameEvent @ 14d4c8a80

void __cdecl
UE::StateTreeTrace::OutputInstanceFrameEvent
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,
          FStateTreeExecutionFrame *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (FStateTreeExecutionFrame *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Frame != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x2ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  OutputInstanceAssetEvent(param_1,(param_2->StateTree).field0_0x0.DebugPtr);
  return;
}

// OutputInstanceFrameEvent @ 14d4c8ae0

void __cdecl
UE::StateTreeTrace::OutputInstanceFrameEvent
          (FStateTreeInstanceDebugId param_1,FStateTreeExecutionFrame *param_2)

{
  return;
}

// OutputInstanceLifetimeEvent @ 14d4c8af0

void __cdecl
UE::StateTreeTrace::OutputInstanceLifetimeEvent
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,
          EStateTreeTraceEventType param_2)

{
  UObject *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  FStateTreeInstanceDebugId FVar4;
  
  pUVar1 = (param_1.Val)->Owner;
  if (pUVar1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    if (param_2 == Push) {
      if (-1 < StateTreeDebugChannel->Enabled) {
        TraceBufferedEvents(param_1);
        return;
      }
    }
    else if (param_2 == Pop) {
      bVar2 = FTraceFilter::IsObjectTraceable<1>(pUVar1);
      if (!bVar2) {
        pUVar3 = (UObject *)(**(code **)(*(longlong *)pUVar1 + 0x180))(pUVar1);
        bVar2 = FTraceFilter::IsObjectTraceable<1>(pUVar3);
        if (!bVar2) {
          return;
        }
      }
      FVar4 = FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
      FObjectTrace::OutputInstanceLifetimeEnd
                (pUVar1,CONCAT44(*(undefined4 *)FVar4,*(undefined4 *)((longlong)FVar4 + 4)));
    }
  }
  return;
}

// OutputInstanceLifetimeEvent @ 14d4c8bb0

void __cdecl
UE::StateTreeTrace::OutputInstanceLifetimeEvent
          (FStateTreeInstanceDebugId param_1,UStateTree *param_2,wchar_t *param_3,
          EStateTreeTraceEventType param_4)

{
  return;
}

// OutputLogEventTrace @ 14d4c8bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::StateTreeTrace::OutputLogEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,Type param_2,
          wchar_t *param_3)

{
  wchar_t wVar1;
  longlong lVar2;
  ulong64 *puVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res20 [8];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  DWORD local_48;
  undefined4 local_44;
  LARGE_INTEGER local_40;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  puVar3 = __local_stdio_printf_options();
  iVar6 = 0;
  local_58 = 0;
  local_50 = local_res20;
  __stdio_common_vswprintf(*puVar3,TraceStaticBuffer,0x2000,param_3);
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceBufferedEvents(param_1);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerLogEventFields>((TLogScope<1> *)&local_38);
    QueryPerformanceCounter(&local_40);
    *local_38 = local_40;
    local_38[1].s.LowPart = local_48;
    *(undefined4 *)((longlong)local_38 + 0xc) = local_44;
    pwVar4 = TraceStaticBuffer;
    *(Type *)(local_38 + 2) = param_2;
    wVar1 = TraceStaticBuffer[0];
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar6 = iVar6 + 1;
      wVar1 = *pwVar4;
    }
    Trace::Private::Field_WriteStringWide(4,TraceStaticBuffer,iVar6);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar5;
    if (lVar2 != local_30) {
      *(longlong *)(lVar2 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  return;
}

// OutputLogEventTrace @ 14d4c8d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::StateTreeTrace::OutputLogEventTrace
          (FStateTreeInstanceDebugId param_1,Type param_2,wchar_t *param_3)

{
  return;
}

// OutputPhaseScopeEvent @ 14d4c8d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputPhaseScopeEvent
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,
          EStateTreeUpdatePhase param_2,EStateTreeTraceEventType param_3,
          FStateTreeStateHandle param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStackY_78 [32];
  undefined2 in_stack_ffffffffffffffa8;
  undefined1 uVar4;
  FStateTreeStateHandle FVar3;
  undefined1 local_48 [8];
  EStateTreeUpdatePhase local_40 [4];
  char local_3c;
  char local_3a;
  DWORD local_38;
  undefined4 uStack_34;
  LARGE_INTEGER local_30;
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  uVar4 = (undefined1)((ushort)in_stack_ffffffffffffffa8 >> 8);
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  FVar3.Index._1_1_ = uVar4;
  FVar3.Index._0_1_ = param_3;
  FBufferedDataList::UpdatePhaseScope_AnyThread
            (&GBufferedEvents,(FStateTreeInstanceDebugId)local_40,(EStateTreeUpdatePhase)local_38,
             param_2,FVar3);
  if (local_3a != '\0') {
    if (local_40[0] != param_2) {
      local_48[0] = 0;
      bVar2 = `UE::StateTreeTrace::OutputPhaseScopeEvent'::__l3::<lambda_1>::operator()(local_48);
      if (!bVar2) {
        return;
      }
    }
    if ((local_3a == '\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((local_3c != '\0') && (-1 < StateTreeDebugChannel->Enabled)) {
      Trace::Private::FLogScope::Enter<FStateTreeDebuggerPhaseEventFields>
                ((TLogScope<0> *)&local_28);
      QueryPerformanceCounter(&local_30);
      *local_28 = local_30;
      local_28[1].s.LowPart = local_38;
      *(undefined4 *)((longlong)local_28 + 0xc) = uStack_34;
      *(EStateTreeUpdatePhase *)(local_28 + 2) = param_2;
      *(ushort *)((longlong)local_28 + 0x11) = param_4.Index;
      *(undefined1 *)((longlong)local_28 + 0x13) = 6;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
  }
  return;
}

// OutputPhaseScopeEvent @ 14d4c8e90

void __cdecl
UE::StateTreeTrace::OutputPhaseScopeEvent
          (FStateTreeInstanceDebugId param_1,EStateTreeUpdatePhase param_2,
          EStateTreeTraceEventType param_3,FStateTreeStateHandle param_4)

{
  return;
}

// OutputStateEventTrace @ 14d4c8ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputStateEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,
          FStateTreeStateHandle param_2,EStateTreeTraceEventType param_3)

{
  undefined1 auStack_58 [32];
  DWORD local_38;
  undefined4 local_34;
  LARGE_INTEGER local_30;
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceBufferedEvents(param_1);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerStateEventFields>((TLogScope<0> *)&local_28);
    QueryPerformanceCounter(&local_30);
    *local_28 = local_30;
    local_28[1].s.LowPart = local_38;
    *(undefined4 *)((longlong)local_28 + 0xc) = local_34;
    *(ushort *)(local_28 + 2) = param_2.Index;
    *(EStateTreeTraceEventType *)((longlong)local_28 + 0x12) = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputStateEventTrace @ 14d4c8f70

void __cdecl
UE::StateTreeTrace::OutputStateEventTrace
          (FStateTreeInstanceDebugId param_1,FStateTreeStateHandle param_2,
          EStateTreeTraceEventType param_3)

{
  return;
}

// OutputTaskEventTrace @ 14d4c8f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputTaskEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,FStateTreeIndex16 param_2,
          FStateTreeDataView *param_3,EStateTreeTraceEventType param_4,EStateTreeRunStatus param_5)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [32];
  LARGE_INTEGER local_138;
  DWORD local_130;
  undefined4 local_12c;
  FNodeCustomDebugData local_128;
  undefined1 local_108 [16];
  uchar *local_f8;
  uchar *puStack_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long64 lStack_d0;
  FPackageFileVersion local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FCustomVersionContainer *pFStack_b0;
  FCustomPropertyListNode *local_a8;
  FArchiveSavePackageData *pFStack_a0;
  FProperty *local_98;
  FArchiveSerializedPropertyChain *pFStack_90;
  undefined8 local_88;
  FArchiveState *pFStack_80;
  undefined8 local_78;
  uchar **local_70;
  undefined8 local_68;
  uchar *local_60;
  undefined8 local_58;
  LARGE_INTEGER *local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  local_108._0_8_ = 0;
  local_108._8_8_ = (FFastPathLoadBuffer *)0x0;
  local_138.QuadPart = 0;
  local_f8 = (uchar *)0x0;
  puStack_f0 = (uchar *)0x0;
  local_e8 = (uchar *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8.FileVersionUE4 = 0;
  local_c8.FileVersionUE5 = 0;
  uStack_c0 = 0;
  local_b8._0_2_ = 0;
  local_b8._2_2_ = 0;
  local_b8._4_4_ = 0;
  pFStack_b0 = (FCustomVersionContainer *)0x0;
  local_a8 = (FCustomPropertyListNode *)0x0;
  pFStack_a0 = (FArchiveSavePackageData *)0x0;
  local_98 = (FProperty *)0x0;
  pFStack_90 = (FArchiveSerializedPropertyChain *)0x0;
  local_88 = 0;
  pFStack_80 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_108);
  local_78 = 0;
  local_108._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_70 = &local_60;
  local_68 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_108,true);
  (**(code **)(local_108._0_8_ + 0x108))(local_108);
  local_60 = (uchar *)0x0;
  local_108._0_8_ = &___7FBufferArchive__6B_;
  local_128.TraceDebuggerString.Data.AllocatorInstance.Data =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.TraceDebuggerString.Data.ArrayNum =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum;
  local_128.TraceDebuggerString.Data.ArrayMax =
       ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum = 0;
  ((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax = 0;
  local_128.MergePolicy = ((param_1.Val)->NodeCustomDebugTraceData).MergePolicy;
  local_58 = 0;
  ::FString::Reset(&((param_1.Val)->NodeCustomDebugTraceData).TraceDebuggerString,0);
  local_48 = *(LARGE_INTEGER **)param_3;
  lStack_40 = *(longlong *)&param_3->field_0x8;
  ((param_1.Val)->NodeCustomDebugTraceData).MergePolicy = Unset;
  SerializeDebugDataToArchive
            ((FBufferArchive *)local_108,&local_128,(FStateTreeDataView *)&local_48);
  if (local_128.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.TraceDebuggerString.Data.AllocatorInstance.Data);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceBufferedEvents(param_1);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerTaskEventFields>((TLogScope<1> *)&local_48);
    QueryPerformanceCounter(&local_138);
    pLVar2 = local_48;
    *local_48 = local_138;
    local_48[1].s.LowPart = local_130;
    *(undefined4 *)((longlong)local_48 + 0xc) = local_12c;
    *(ushort *)(local_48 + 2) = param_2.Value;
    Trace::Private::Field_WriteAuxData(4,local_60,(uint)local_58 & 0x7ffff);
    uVar4 = (ulonglong)_tls_index;
    *(EStateTreeTraceEventType *)((longlong)pLVar2 + 0x12) = param_4;
    *(EStateTreeRunStatus *)((longlong)pLVar2 + 0x13) = param_5;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != lStack_40) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(lStack_40 + 0x28) = *(undefined8 *)(lStack_40 + 0x20);
  }
  if (local_60 != (uchar *)0x0) {
    FMemory::Free(local_60);
  }
  FArchive::~FArchive((FArchive *)local_108);
  return;
}

// OutputTaskEventTrace @ 14d4c91e0

void __cdecl
UE::StateTreeTrace::OutputTaskEventTrace
          (FStateTreeInstanceDebugId param_1,FNodeCustomDebugData *param_2,FStateTreeIndex16 param_3
          ,FStateTreeDataView *param_4,EStateTreeTraceEventType param_5,EStateTreeRunStatus param_6)

{
  return;
}

// OutputTransitionEventTrace @ 14d4c91f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::OutputTransitionEventTrace
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1,
          FStateTreeTransitionSource *param_2,EStateTreeTraceEventType param_3)

{
  UStateTree *pUVar1;
  undefined1 auStack_138 [32];
  EStateTreeTraceEventType local_118 [8];
  LARGE_INTEGER local_110;
  DWORD local_108;
  undefined4 local_104;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_f8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_50;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118[0] = param_3;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  pUVar1 = (UStateTree *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  if (pUVar1 != (UStateTree *)0x0) {
    OutputInstanceAssetEvent(param_1,pUVar1);
  }
  local_110.QuadPart = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_f8);
  local_f8._padding_ = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_f8.Bytes = &local_50;
  local_f8.ArchiveName.ComparisonIndex.Value = 0;
  local_f8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_f8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  if (*(EStateTreeTraceEventType **)(local_f8._padding_ + 8) <
      *(EStateTreeTraceEventType **)local_f8._padding_ + 1) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_f8,local_118,1);
  }
  else {
    local_118[0] = **(EStateTreeTraceEventType **)local_f8._padding_;
    *(longlong *)local_f8._padding_ = *(longlong *)local_f8._padding_ + 1;
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceBufferedEvents(param_1);
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerTransitionEventFields>
              ((TLogScope<0> *)&local_38);
    QueryPerformanceCounter(&local_110);
    *local_38 = local_110;
    local_38[1].s.LowPart = local_108;
    *(undefined4 *)((longlong)local_38 + 0xc) = local_104;
    *(EStateTreeTransitionSourceType *)(local_38 + 2) = param_2->SourceType;
    *(ushort *)((longlong)local_38 + 0x11) = (param_2->TransitionIndex).Value;
    *(ushort *)((longlong)local_38 + 0x13) = (param_2->TargetState).Index;
    *(EStateTreeTransitionPriority *)((longlong)local_38 + 0x15) = param_2->Priority;
    *(EStateTreeTraceEventType *)((longlong)local_38 + 0x16) = local_118[0];
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_f8);
  return;
}

// OutputTransitionEventTrace @ 14d4c93d0

void __cdecl
UE::StateTreeTrace::OutputTransitionEventTrace
          (FStateTreeInstanceDebugId param_1,FStateTreeTransitionSource *param_2,
          EStateTreeTraceEventType param_3)

{
  return;
}

// ProcessEvent @ 14d4cbc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::StateTreeDebugger::ProcessEvent
          (FInstanceEventCollection *param_1,FFrame *param_2,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_3,TNotNull<UE::StateTreeDebugger::ITraceReader_*> param_4)

{
  TArray<UE::StateTreeDebugger::FInstanceEventCollection::FContiguousTraceInfo,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar16;
  undefined1 auStack_128 [32];
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  FScriptContainerElement *local_c0;
  FFrame *local_b8;
  undefined8 *local_b0;
  ulong64 local_a8;
  double dStack_a0;
  ulong64 local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_a8 = param_2->Index;
  dStack_a0 = param_2->StartTime;
  lVar12 = 0;
  dVar6 = param_2->EndTime;
  uVar7 = *(undefined8 *)&param_2->FrameType;
  iVar10 = (param_1->FrameSpans).ArrayNum;
  local_d8 = param_3;
  local_b8 = param_2;
  if (iVar10 == 0) {
LAB_14d4cbea7:
    pTVar16 = local_d8;
    local_b0 = &local_c8;
    local_c8 = 0;
    (*(code *)(&
              PTR_VisitApplyEncoded<0,0,_UE::StateTreeDebugger::ProcessEvent_::__l17::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>_152b2d0b0
              )[local_d8->TypeIndex])(&local_b0,local_d8);
    iStack_60 = (param_1->Events).ArrayNum;
    pFVar4 = (param_1->FrameSpans).AllocatorInstance.Data;
    local_88 = local_a8;
    dStack_80 = dStack_a0;
    local_68 = local_c8;
    local_78 = dVar6;
    uStack_70 = uVar7;
    if ((pFVar4 <= (FScriptContainerElement *)&local_88) &&
       (lVar12 = (longlong)(param_1->FrameSpans).ArrayMax,
       (FScriptContainerElement *)&local_88 < pFVar4 + lVar12 * 0x30)) {
      local_f0 = (longlong)(param_1->FrameSpans).ArrayNum;
      local_e8 = 0x30;
      local_108 = (FScriptContainerElement *)&local_88;
      local_100 = pFVar4;
      local_f8 = lVar12;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    iVar10 = (param_1->FrameSpans).ArrayNum;
    piVar2 = &(param_1->FrameSpans).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&(param_1->FrameSpans).AllocatorInstance,piVar2);
      (param_1->FrameSpans).ArrayNum = iVar10;
    }
    lVar12 = (longlong)iVar10;
    (param_1->FrameSpans).ArrayNum = iVar10 + 1;
    pFVar4 = (param_1->FrameSpans).AllocatorInstance.Data;
    *(ulong64 *)(pFVar4 + lVar12 * 0x30) = local_88;
    *(double *)(pFVar4 + lVar12 * 0x30 + 8) = dStack_80;
    *(double *)(pFVar4 + lVar12 * 0x30 + 0x10) = local_78;
    *(undefined8 *)(pFVar4 + lVar12 * 0x30 + 0x10 + 8) = uStack_70;
    *(undefined8 *)(pFVar4 + lVar12 * 0x30 + 0x20) = local_68;
    *(ulonglong *)(pFVar4 + lVar12 * 0x30 + 0x20 + 8) = CONCAT44(uStack_5c,iStack_60);
  }
  else {
    uVar13 = iVar10 - 1;
    uVar14 = 0;
    if ((int)uVar13 < iVar10) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if (uVar14 == 0) {
      local_108 = (FScriptContainerElement *)(longlong)(int)uVar13;
      local_100 = (FScriptContainerElement *)(longlong)iVar10;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    lVar11 = (longlong)(param_1->FrameSpans).ArrayNum;
    pTVar1 = &param_1->ContiguousTracesData;
    iVar10 = (param_1->ContiguousTracesData).ArrayNum;
    local_c0 = (param_1->FrameSpans).AllocatorInstance.Data;
    if (iVar10 != 0) {
      uVar13 = iVar10 - 1;
      uVar14 = 0;
      if ((int)uVar13 < iVar10) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_108 = (FScriptContainerElement *)(longlong)(int)uVar13;
        local_100 = (FScriptContainerElement *)(longlong)iVar10;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      iVar10 = (param_1->FrameSpans).ArrayNum;
      uVar14 = *(uint *)((pTVar1->AllocatorInstance).Data +
                        (longlong)(param_1->ContiguousTracesData).ArrayNum * 4 + -4);
      uVar13 = 0;
      if ((int)uVar14 < iVar10) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_108 = (FScriptContainerElement *)(longlong)(int)uVar14,
         local_100 = (FScriptContainerElement *)(longlong)iVar10,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      lVar12 = *(longlong *)
                ((param_1->FrameSpans).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x30) + 1;
    }
    if (*(ulonglong *)(local_c0 + lVar11 * 0x30 + -0x30) < local_b8->Index + lVar12) {
      local_a8 = local_a8 + lVar12;
      goto LAB_14d4cbea7;
    }
    pTVar16 = local_d8;
    if ((local_b8->Index < *(ulonglong *)(local_c0 + lVar11 * 0x30 + -0x30)) &&
       (*(double *)(local_c0 + lVar11 * 0x30 + -0x28) < local_b8->StartTime)) {
      piVar2 = &(param_1->ContiguousTracesData).ArrayMax;
      iVar10 = (param_1->ContiguousTracesData).ArrayNum;
      uVar14 = (param_1->FrameSpans).ArrayNum - 1;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar1->AllocatorInstance,piVar2);
        (param_1->ContiguousTracesData).ArrayNum = iVar10;
      }
      (param_1->ContiguousTracesData).ArrayNum = iVar10 + 1;
      *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4) = uVar14;
      iVar10 = (param_1->FrameSpans).ArrayNum;
      uVar13 = 0;
      if ((int)uVar14 < iVar10) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_108 = (FScriptContainerElement *)(longlong)(int)uVar14;
        local_100 = (FScriptContainerElement *)(longlong)iVar10;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      local_a8 = *(longlong *)
                  ((param_1->FrameSpans).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x30) +
                 local_a8 + 1;
      goto LAB_14d4cbea7;
    }
  }
  bVar3 = pTVar16->TypeIndex;
  if ((10 < (ulonglong)bVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTraceActiveStatesEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
    if (((param_1->FrameSpans).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InEventCollection.FrameSpans.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebugger.cpp"
                           ,0x3c9,L"Expecting to always be in a frame span at this point."), bVar8))
    {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    iVar10 = (param_1->ActiveStatesChanges).ArrayNum;
    iVar15 = (param_1->FrameSpans).ArrayNum + -1;
    if (iVar10 != 0) {
      uVar13 = iVar10 - 1;
      uVar14 = 0;
      if ((int)uVar13 < iVar10) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_108 = (FScriptContainerElement *)(longlong)(int)uVar13;
        local_100 = (FScriptContainerElement *)(longlong)iVar10;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      iVar10 = (param_1->ActiveStatesChanges).ArrayNum;
      pFVar4 = (FScriptContainerElement *)(longlong)iVar10 + -1;
      if (*(int *)((param_1->ActiveStatesChanges).AllocatorInstance.Data + (longlong)pFVar4 * 8) ==
          iVar15) {
        iVar15 = (param_1->Events).ArrayNum;
        uVar14 = 0;
        if ((int)(iVar10 - 1U) < iVar10) {
          uVar14 = ~(iVar10 - 1U) >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_108 = pFVar4, local_100 = (FScriptContainerElement *)(longlong)iVar10,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        *(int *)((param_1->ActiveStatesChanges).AllocatorInstance.Data +
                (longlong)(param_1->ActiveStatesChanges).ArrayNum * 8 + -4) = iVar15;
        pTVar16 = local_d8;
        goto LAB_14d4cc1b5;
      }
    }
    iStack_cc = (param_1->Events).ArrayNum;
    pFVar4 = (param_1->ActiveStatesChanges).AllocatorInstance.Data;
    local_d0 = iVar15;
    if ((pFVar4 <= (FScriptContainerElement *)&local_d0) &&
       (lVar12 = (longlong)(param_1->ActiveStatesChanges).ArrayMax,
       (FScriptContainerElement *)&local_d0 < pFVar4 + lVar12 * 8)) {
      local_f0 = (longlong)(param_1->ActiveStatesChanges).ArrayNum;
      local_e8 = 8;
      local_108 = (FScriptContainerElement *)&local_d0;
      local_100 = pFVar4;
      local_f8 = lVar12;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    iVar10 = (param_1->ActiveStatesChanges).ArrayNum;
    piVar2 = &(param_1->ActiveStatesChanges).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&(param_1->ActiveStatesChanges).AllocatorInstance,piVar2);
    }
    (param_1->ActiveStatesChanges).ArrayNum = iVar10 + 1;
    *(ulonglong *)((param_1->ActiveStatesChanges).AllocatorInstance.Data + (longlong)iVar10 * 8) =
         CONCAT44(iStack_cc,local_d0);
    pTVar16 = local_d8;
  }
LAB_14d4cc1b5:
  iVar10 = (param_1->Events).ArrayNum;
  piVar2 = &(param_1->Events).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,&(param_1->Events).AllocatorInstance,piVar2);
  }
  (param_1->Events).ArrayNum = iVar10 + 1;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  ::
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
            ((TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
              *)((param_1->Events).AllocatorInstance.Data + (longlong)iVar10 * 0x58),pTVar16);
  (**(code **)((longlong)*param_4.Val + 0x10))(param_4.Val,param_1->InstanceId,pTVar16);
  return true;
}

// ReadTrace @ 14d4ccae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeDebugger::ReadTrace
          (IAnalysisSession *param_1,IFrameProvider *param_2,FFrame *param_3,
          TNotNull<UE::StateTreeDebugger::ITraceReader_*> param_4,FTraceFilter *param_5,
          double *param_6)

{
  UStateTree *pUVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  code *local_88;
  double *local_80;
  double local_78;
  double local_70;
  IFrameProvider *local_68;
  ITraceReader *local_60;
  ulonglong local_58 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  cVar2 = (**(code **)((longlong)*param_2 + 0x40))(param_2,0,*param_6,local_58);
  if ((*param_6 == 0.0) || ((cVar2 != '\0' && (local_58[0] < param_3->Index)))) {
    plVar3 = (longlong *)
             (**(code **)((longlong)*param_1 + 0xf8))
                       (param_1,&FStateTreeTraceProvider::ProviderName);
    if (plVar3 != (longlong *)0x0) {
      local_68 = param_2;
      local_60 = param_4.Val;
      if (((param_5->Instance).Id == 0xffffffff) || ((param_5->Instance).SerialNumber == 0xffffffff)
         ) {
        pUVar1 = (param_5->Asset).field0_0x0.DebugPtr;
        if (pUVar1 != (UStateTree *)0x0) {
          local_78 = *param_6;
          local_80 = &local_78;
          local_70 = param_3->EndTime;
          local_88 = Core::Private::Function::
                     TFunctionRefCaller<`UE::StateTreeDebugger::ReadTrace'::__l15::<lambda_2>,void,FStateTreeInstanceDebugId,TraceServices::ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>_const_&>
                     ::Call;
          (**(code **)(*plVar3 + 0x38))(plVar3,pUVar1,&local_88);
        }
      }
      else {
        local_78 = *param_6;
        local_80 = &local_78;
        local_70 = param_3->EndTime;
        local_88 = Core::Private::Function::
                   TFunctionRefCaller<`UE::StateTreeDebugger::ReadTrace'::__l11::<lambda_1>,void,FStateTreeInstanceDebugId,TraceServices::ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>_const_&>
                   ::Call;
        (**(code **)(*plVar3 + 0x40))(plVar3,param_5->Instance,&local_88);
      }
      *param_6 = param_3->EndTime;
    }
  }
  return;
}

// ReadTrace @ 14d4ccc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeDebugger::ReadTrace
          (IAnalysisSession *param_1,double param_2,
          TNotNull<UE::StateTreeDebugger::ITraceReader_*> param_3,FTraceFilter *param_4,
          double *param_5)

{
  char cVar1;
  IFrameProvider *pIVar2;
  ulong64 *puVar3;
  undefined1 auStackY_98 [32];
  FFrame local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  (**(code **)((longlong)*param_1 + 0x88))();
  pIVar2 = TraceServices::ReadFrameProvider(param_1);
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,0,SUB84(param_2,0),&local_68);
  if (cVar1 != '\0') {
    if (local_68.EndTime == __real_7ff0000000000000) {
      puVar3 = (ulong64 *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,0,local_68.Index - 1);
      if (puVar3 == (ulong64 *)0x0) goto LAB_14d4cccf8;
      local_68.Index = *puVar3;
      local_68.StartTime = (double)puVar3[1];
      local_68.EndTime = (double)puVar3[2];
      local_68._24_8_ = puVar3[3];
    }
    ReadTrace(param_1,pIVar2,&local_68,param_3,param_4,param_5);
  }
LAB_14d4cccf8:
  (**(code **)((longlong)*param_1 + 0x90))(param_1);
  return;
}

// RegisterGlobalDelegates @ 14d4cd600

void __cdecl UE::StateTreeTrace::RegisterGlobalDelegates(void)

{
  FDelegateHandle FVar1;
  <lambda_1> local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddLambda<_UE::StateTreeTrace::RegisterGlobalDelegates_::__l2::<lambda_1>_>
                    (&FWorldDelegates::OnWorldTickStart,local_res8);
                    /* WARNING: Load size is inaccurate */
  GOnWorldTickStartDelegateHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>
          ::AddLambda<_UE::StateTreeTrace::RegisterGlobalDelegates_::__l2::<lambda_2>_>
                    (&StateTree::Delegates::OnTracingStateChanged,(<lambda_2> *)local_res8);
                    /* WARNING: Load size is inaccurate */
  GTracingStateChangedDelegateHandle.ID = *FVar1.ID;
  return;
}

// SerializeDebugDataToArchive @ 14d4cf680

void __cdecl
UE::StateTreeTrace::SerializeDebugDataToArchive
          (FBufferArchive *param_1,FNodeCustomDebugData *param_2,FStateTreeDataView *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  UScriptStruct *this;
  int iVar6;
  bool bVar7;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FOutputDevice local_48;
  FString local_38;
  
  iVar6 = 0;
  this = *(UScriptStruct **)param_3;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (this == (UScriptStruct *)0x0) goto LAB_14d4cf9d0;
  pUVar4 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    if (this == (UScriptStruct *)0x0) goto LAB_14d4cf9d0;
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14d4cf9d0;
    bVar7 = CpuChannel->Enabled < 0;
    if (!bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId615,"UE::StateTree::ExportObjectAsText",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                 ,0x267);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId615);
    }
    pFVar5 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (param_2->MergePolicy == Override) goto joined_r0x00014d4cf9c9;
    ::FString::FString(&local_38,L"");
    FOutputDevice::FOutputDevice(&local_48);
    local_48.bAutoEmitLineTerminator = false;
    local_48._padding_ = (longlong)&___7FStringOutputDevice__6B_;
    if (*(longlong *)&param_3->field_0x8 == 0) {
LAB_14d4cf900:
      this = *(UScriptStruct **)param_3;
      if (this != (UScriptStruct *)0x0) goto LAB_14d4cf909;
    }
    else {
      if (this == (UScriptStruct *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Memory || (Memory && Struct)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                           ,0x60,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_14d4cf900;
      }
LAB_14d4cf909:
      pUVar4 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)this->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14d4cf95d;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Struct || Struct->IsChildOf(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
LAB_14d4cf95d:
    UExporter::ExportToOutputDevice
              ((FExportObjectInnerContext *)0x0,*(UObject **)&param_3->field_0x8,(UExporter *)0x0,
               &local_48,L"copy",0,0xa6045,false,
               *(UObject **)&(*(UObject **)&param_3->field_0x8)->field_0x20);
    if (local_38.Data.ArrayNum != 0) {
      iVar6 = local_38.Data.ArrayNum + -1;
    }
    ::FString::AssignRange(&local_88,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
    FOutputDevice::~FOutputDevice(&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar7 = CpuChannel->Enabled < 0;
    if (!bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId605,"UE::StateTree::ExportStructAsText",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                 ,0x25d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId605);
    }
    pFVar5 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (param_2->MergePolicy != Override) {
      UScriptStruct::ExportText
                (this,&local_88,*(void **)&param_3->field_0x8,*(void **)&param_3->field_0x8,
                 (UObject *)0x0,0x10a6045,(UObject *)0x0,true);
    }
  }
joined_r0x00014d4cf9c9:
  if (!bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14d4cf9d0:
  if ((param_2->MergePolicy != Unset) &&
     (iVar6 = (param_2->TraceDebuggerString).Data.ArrayNum, 1 < iVar6)) {
    ::FString::AssignRange
              (&local_78,(wchar_t *)(param_2->TraceDebuggerString).Data.AllocatorInstance.Data,
               iVar6 + -1);
  }
  ::operator<<((FArchive *)param_1,&local_98);
  ::operator<<((FArchive *)param_1,&local_88);
  ::operator<<((FArchive *)param_1,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// StateEvent @ 14d4d0e70

void __cdecl
UE::StateTree::Debug::StateEvent
          (FStateTreeExecutionContext *param_1,FStateTreeStateHandle param_2,
          EStateTreeTraceEventType param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&OnStateEvent_AnyThread);
  bVar3 = false;
  OnStateEvent_AnyThread._60_4_ = OnStateEvent_AnyThread._60_4_ + 1;
  uVar8 = OnStateEvent_AnyThread._48_4_ - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (int)OnStateEvent_AnyThread._48_4_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + OnStateEvent_AnyThread._40_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar7 + OnStateEvent_AnyThread._40_8_), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2.Index,param_3),
                cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  OnStateEvent_AnyThread._60_4_ = OnStateEvent_AnyThread._60_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnStateEvent_AnyThread,false
              );
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4d0fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&OnStateEvent_AnyThread);
  return;
}

// TaskEnterState @ 14d4d15f0

void __cdecl
UE::StateTree::Debug::TaskEnterState(FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeEnter(param_1,&local_18,&OnTaskEnterState_AnyThread);
  return;
}

// TaskExitState @ 14d4d1620

void __cdecl
UE::StateTree::Debug::TaskExitState(FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeExit(param_1,&local_18,&OnTaskExitState_AnyThread);
  return;
}

// TaskTick @ 14d4d1650

void __cdecl
UE::StateTree::Debug::TaskTick(FStateTreeExecutionContext *param_1,FNodeReference *param_2)

{
  FNodeReference local_18;
  
  local_18.StateTree.Val = (param_2->StateTree).Val;
  local_18.Index.Value = (param_2->Index).Value;
  local_18._10_6_ = *(undefined6 *)&param_2->field_0xa;
  Private::NodeTick(param_1,&local_18,&OnTickTask_AnyThread);
  return;
}

// TraceBufferedEvents @ 14d4d2430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::TraceBufferedEvents
          (TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  UObject *pUVar3;
  UStateTree *pUVar4;
  FStateTreeExecutionFrame *pFVar5;
  undefined8 uVar6;
  FStateTreeInstanceDebugId FVar7;
  LARGE_INTEGER LVar8;
  uint uVar9;
  bool bVar10;
  UObject *pUVar11;
  longlong lVar12;
  ulong64 uVar13;
  UScriptStruct *pUVar14;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStackY_d8 [32];
  LARGE_INTEGER local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined1 local_98 [16];
  TArrayView<FStateTreeExecutionFrame_const_,int> local_88;
  FString local_78;
  FActiveStates local_68;
  undefined1 local_48 [16];
  ForAnyElementType local_38;
  
  local_38.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_d8);
  pUVar3 = (param_1.Val)->Owner;
  if (pUVar3 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  bVar10 = FTraceFilter::IsObjectTraceable<1>(pUVar3);
  if (!bVar10) {
    pUVar11 = (UObject *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
    bVar10 = FTraceFilter::IsObjectTraceable<1>(pUVar11);
    if (!bVar10) {
      return;
    }
  }
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  uVar17 = uStack_9c;
  uVar9 = local_a0;
  local_a8.s.HighPart = uStack_9c;
  local_a8.s.LowPart = local_a0;
  AcquireSRWLockShared((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  uVar18 = uVar9 - uVar17 ^ uVar17 >> 0xd;
  uVar16 = (-0x61c88647 - uVar17) - uVar18 ^ uVar18 << 8;
  uVar21 = (uVar17 - uVar16) - uVar18 ^ uVar16 >> 0xd;
  uVar18 = (uVar18 - uVar21) - uVar16 ^ uVar21 >> 0xc;
  uVar17 = (uVar16 - uVar18) - uVar21 ^ uVar18 << 0x10;
  uVar21 = (uVar21 - uVar17) - uVar18 ^ uVar17 >> 5;
  uVar16 = (uVar18 - uVar21) - uVar17 ^ uVar21 >> 3;
  uVar17 = (uVar17 - uVar16) - uVar21 ^ uVar16 << 10;
  if (GBufferedEvents.TracedInstances.Elements._8_4_ !=
      GBufferedEvents.TracedInstances.Elements._52_4_) {
    FVar19 = (ForElementType<FSetElementId>)0x154d85ae8;
    if (GBufferedEvents.TracedInstances.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar19 = GBufferedEvents.TracedInstances.Hash.SecondaryData;
    }
    iVar22 = *(int *)((longlong)FVar19 +
                     (ulonglong)
                     (GBufferedEvents.TracedInstances.HashSize - 1U &
                     ((uVar21 - uVar17) - uVar16 ^ uVar17 >> 0xf)) * 4);
    if (iVar22 != -1) {
      do {
        lVar12 = (longlong)iVar22;
        if ((*(uint *)(GBufferedEvents.TracedInstances.Elements._0_8_ + lVar12 * 0x10) == uVar9) &&
           (*(uint *)(GBufferedEvents.TracedInstances.Elements._0_8_ + 4 + lVar12 * 0x10) ==
            local_a8.s.HighPart)) {
          if (iVar22 != -1) {
            ReleaseSRWLockShared((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
            goto LAB_14d4d27d9;
          }
          break;
        }
        iVar22 = *(int *)(GBufferedEvents.TracedInstances.Elements._0_8_ + 8 + lVar12 * 0x10);
      } while (iVar22 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
  ::Emplace<FStateTreeInstanceDebugId_const_&>
            (&GBufferedEvents.TracedInstances,(FStateTreeInstanceDebugId *)local_98,
             (bool *)&local_a8);
  ReleaseSRWLockExclusive((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  pUVar4 = (param_1.Val)->RootStateTree;
  if (pUVar4 == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal(param_1.Val,&local_78);
  uVar13 = (param_1.Val)->OuterTraceId;
  if (uVar13 == 0) {
    uVar13 = FObjectTrace::GetObjectId(pUVar3);
  }
  FObjectTrace::OutputObject(pUVar3);
  local_a8 = *(LARGE_INTEGER *)&pUVar4->field_0x18;
  local_48._0_8_ = (LARGE_INTEGER *)0x0;
  local_48._8_8_ = (FWriteBuffer *)0x0;
  ::FName::ToString((FName *)&local_a8.s,(FString *)&local_88);
  pUVar14 = FStateTreeInstanceData::StaticStruct();
  FObjectTrace::OutputInstance
            (pUVar3,CONCAT44(local_a0,uStack_9c),uVar13,(UStruct *)pUVar14,(FString *)&local_88,
             (FString *)local_48);
  if (local_88.DataPtr != (FStateTreeExecutionFrame *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  if ((LARGE_INTEGER *)local_48._0_8_ != (LARGE_INTEGER *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  FBufferedDataList::FindOrAddDebugIdForAsset_AnyThread(&GBufferedEvents,(UStateTree *)local_98);
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerInstanceEventFields>
              ((TLogScope<1> *)local_48);
    QueryPerformanceCounter(&local_a8);
    uVar6 = local_48._0_8_;
    *(LARGE_INTEGER *)local_48._0_8_ = local_a8;
    (((LARGE_INTEGER *)(local_48._0_8_ + 8))->s).LowPart = local_a0;
    *(uint *)(local_48._0_8_ + 0xc) = uStack_9c;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar20.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar22 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar22 = 0;
    }
    if (iVar22 < 0) {
      wVar2 = *(wchar_t *)FVar20.Data;
      iVar22 = 0;
      pFVar1 = FVar20.Data;
      while (wVar2 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar22 = iVar22 + 1;
        wVar2 = *(wchar_t *)pFVar1;
      }
    }
    Trace::Private::Field_WriteStringWide(3,(wchar_t *)FVar20.Data,iVar22);
    *(undefined1 *)&(((LARGE_INTEGER *)(uVar6 + 0x10))->s).LowPart = 5;
    *(undefined2 *)(uVar6 + 0x11) = local_98._0_2_;
    Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)local_48,(FLogScope *)local_48);
  }
  pTVar15 = FStateTreeReadOnlyExecutionContext::GetActiveFrames
                      (param_1.Val,(TArrayView<FStateTreeExecutionFrame_const_,int> *)local_48);
  pFVar5 = pTVar15->DataPtr;
  uVar6._0_4_ = pTVar15->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&pTVar15->field_0xc;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceInstance(param_1);
    LVar8 = local_a8;
    local_88.DataPtr = pFVar5;
    local_88._8_8_ = uVar6;
    FInstanceEventBufferedData::FActiveStates::FActiveStates(&local_68,&GBufferedEvents,&local_88);
    FInstanceEventBufferedData::FActiveStates::Output(&local_68,(FStateTreeInstanceDebugId)LVar8.s);
    if (local_68.AssetDebugIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AssetDebugIds.AllocatorInstance.Data);
    }
    if (local_68.StatesIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.StatesIndices.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14d4d27d9:
  FVar7.SerialNumber = uStack_9c;
  FVar7.Id = local_a0;
  if ((local_a0 != 0xffffffff) && (uStack_9c != 0xffffffff)) {
    FBufferedDataList::TraceWorldTimeIfNeeded_AnyThread(&GBufferedEvents);
    FBufferedDataList::TraceStackedPhases_AnyThread(&GBufferedEvents,FVar7);
  }
  return;
}

// TraceInstance @ 14d4d2860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::StateTreeTrace::TraceInstance(TNotNull<FStateTreeReadOnlyExecutionContext_const_*> param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  UObject *pUVar3;
  UStateTree *pUVar4;
  FStateTreeExecutionFrame *pFVar5;
  undefined8 uVar6;
  FStateTreeInstanceDebugId FVar7;
  LARGE_INTEGER LVar8;
  uint uVar9;
  bool bVar10;
  UObject *pUVar11;
  longlong lVar12;
  ulong64 uVar13;
  UScriptStruct *pUVar14;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStackY_d8 [32];
  LARGE_INTEGER LStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 auStack_98 [16];
  TArrayView<FStateTreeExecutionFrame_const_,int> TStack_88;
  FString FStack_78;
  FActiveStates FStack_68;
  undefined1 auStack_48 [16];
  ForAnyElementType FStack_38;
  
  if (StateTreeDebugChannel->Enabled < 0) {
    return;
  }
  FStack_38.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_d8);
  pUVar3 = (param_1.Val)->Owner;
  if (pUVar3 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  bVar10 = FTraceFilter::IsObjectTraceable<1>(pUVar3);
  if (!bVar10) {
    pUVar11 = (UObject *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
    bVar10 = FTraceFilter::IsObjectTraceable<1>(pUVar11);
    if (!bVar10) {
      return;
    }
  }
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  uVar17 = uStack_9c;
  uVar9 = uStack_a0;
  LStack_a8.s.HighPart = uStack_9c;
  LStack_a8.s.LowPart = uStack_a0;
  AcquireSRWLockShared((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  uVar18 = uVar9 - uVar17 ^ uVar17 >> 0xd;
  uVar16 = (-0x61c88647 - uVar17) - uVar18 ^ uVar18 << 8;
  uVar21 = (uVar17 - uVar16) - uVar18 ^ uVar16 >> 0xd;
  uVar18 = (uVar18 - uVar21) - uVar16 ^ uVar21 >> 0xc;
  uVar17 = (uVar16 - uVar18) - uVar21 ^ uVar18 << 0x10;
  uVar21 = (uVar21 - uVar17) - uVar18 ^ uVar17 >> 5;
  uVar16 = (uVar18 - uVar21) - uVar17 ^ uVar21 >> 3;
  uVar17 = (uVar17 - uVar16) - uVar21 ^ uVar16 << 10;
  if (GBufferedEvents.TracedInstances.Elements._8_4_ !=
      GBufferedEvents.TracedInstances.Elements._52_4_) {
    FVar19 = (ForElementType<FSetElementId>)0x154d85ae8;
    if (GBufferedEvents.TracedInstances.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar19 = GBufferedEvents.TracedInstances.Hash.SecondaryData;
    }
    iVar22 = *(int *)((longlong)FVar19 +
                     (ulonglong)
                     (GBufferedEvents.TracedInstances.HashSize - 1U &
                     ((uVar21 - uVar17) - uVar16 ^ uVar17 >> 0xf)) * 4);
    if (iVar22 != -1) {
      do {
        lVar12 = (longlong)iVar22;
        if ((*(uint *)(GBufferedEvents.TracedInstances.Elements._0_8_ + lVar12 * 0x10) == uVar9) &&
           (*(uint *)(GBufferedEvents.TracedInstances.Elements._0_8_ + 4 + lVar12 * 0x10) ==
            LStack_a8.s.HighPart)) {
          if (iVar22 != -1) {
            ReleaseSRWLockShared((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
            goto LAB_14d4d27d9;
          }
          break;
        }
        iVar22 = *(int *)(GBufferedEvents.TracedInstances.Elements._0_8_ + 8 + lVar12 * 0x10);
      } while (iVar22 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
  ::Emplace<FStateTreeInstanceDebugId_const_&>
            (&GBufferedEvents.TracedInstances,(FStateTreeInstanceDebugId *)auStack_98,
             (bool *)&LStack_a8);
  ReleaseSRWLockExclusive((PSRWLOCK)&GBufferedEvents.TracedInstancesRWLock);
  pUVar4 = (param_1.Val)->RootStateTree;
  if (pUVar4 == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal(param_1.Val,&FStack_78);
  uVar13 = (param_1.Val)->OuterTraceId;
  if (uVar13 == 0) {
    uVar13 = FObjectTrace::GetObjectId(pUVar3);
  }
  FObjectTrace::OutputObject(pUVar3);
  LStack_a8 = *(LARGE_INTEGER *)&pUVar4->field_0x18;
  auStack_48._0_8_ = (LARGE_INTEGER *)0x0;
  auStack_48._8_8_ = (FWriteBuffer *)0x0;
  ::FName::ToString((FName *)&LStack_a8.s,(FString *)&TStack_88);
  pUVar14 = FStateTreeInstanceData::StaticStruct();
  FObjectTrace::OutputInstance
            (pUVar3,CONCAT44(uStack_a0,uStack_9c),uVar13,(UStruct *)pUVar14,(FString *)&TStack_88,
             (FString *)auStack_48);
  if (TStack_88.DataPtr != (FStateTreeExecutionFrame *)0x0) {
    FMemory::Free(TStack_88.DataPtr);
  }
  if ((LARGE_INTEGER *)auStack_48._0_8_ != (LARGE_INTEGER *)0x0) {
    FMemory::Free((void *)auStack_48._0_8_);
  }
  FBufferedDataList::FindOrAddDebugIdForAsset_AnyThread(&GBufferedEvents,(UStateTree *)auStack_98);
  if (-1 < StateTreeDebugChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FStateTreeDebuggerInstanceEventFields>
              ((TLogScope<1> *)auStack_48);
    QueryPerformanceCounter(&LStack_a8);
    uVar6 = auStack_48._0_8_;
    *(LARGE_INTEGER *)auStack_48._0_8_ = LStack_a8;
    (((LARGE_INTEGER *)(auStack_48._0_8_ + 8))->s).LowPart = uStack_a0;
    *(uint *)(auStack_48._0_8_ + 0xc) = uStack_9c;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (FStack_78.Data.ArrayNum != 0) {
      FVar20.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    iVar22 = FStack_78.Data.ArrayNum + -1;
    if (FStack_78.Data.ArrayNum == 0) {
      iVar22 = 0;
    }
    if (iVar22 < 0) {
      wVar2 = *(wchar_t *)FVar20.Data;
      iVar22 = 0;
      pFVar1 = FVar20.Data;
      while (wVar2 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar22 = iVar22 + 1;
        wVar2 = *(wchar_t *)pFVar1;
      }
    }
    Trace::Private::Field_WriteStringWide(3,(wchar_t *)FVar20.Data,iVar22);
    *(undefined1 *)&(((LARGE_INTEGER *)(uVar6 + 0x10))->s).LowPart = 5;
    *(undefined2 *)(uVar6 + 0x11) = auStack_98._0_2_;
    Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)auStack_48,(FLogScope *)auStack_48);
  }
  pTVar15 = FStateTreeReadOnlyExecutionContext::GetActiveFrames
                      (param_1.Val,(TArrayView<FStateTreeExecutionFrame_const_,int> *)auStack_48);
  pFVar5 = pTVar15->DataPtr;
  uVar6._0_4_ = pTVar15->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&pTVar15->field_0xc;
  FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(param_1.Val);
  if (-1 < StateTreeDebugChannel->Enabled) {
    TraceInstance(param_1);
    LVar8 = LStack_a8;
    TStack_88.DataPtr = pFVar5;
    TStack_88._8_8_ = uVar6;
    FInstanceEventBufferedData::FActiveStates::FActiveStates(&FStack_68,&GBufferedEvents,&TStack_88)
    ;
    FInstanceEventBufferedData::FActiveStates::Output(&FStack_68,(FStateTreeInstanceDebugId)LVar8.s)
    ;
    if (FStack_68.AssetDebugIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.AssetDebugIds.AllocatorInstance.Data);
    }
    if (FStack_68.StatesIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.StatesIndices.AllocatorInstance.Data);
    }
  }
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
LAB_14d4d27d9:
  FVar7.SerialNumber = uStack_9c;
  FVar7.Id = uStack_a0;
  if ((uStack_a0 != 0xffffffff) && (uStack_9c != 0xffffffff)) {
    FBufferedDataList::TraceWorldTimeIfNeeded_AnyThread(&GBufferedEvents);
    FBufferedDataList::TraceStackedPhases_AnyThread(&GBufferedEvents,FVar7);
  }
  return;
}

// TransitionEvent @ 14d4d2c20

void __cdecl
UE::StateTree::Debug::TransitionEvent
          (FStateTreeExecutionContext *param_1,FStateTreeTransitionSource *param_2,
          EStateTreeTraceEventType param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&OnTransitionEvent_AnyThread);
  bVar3 = false;
  OnTransitionEvent_AnyThread._60_4_ = OnTransitionEvent_AnyThread._60_4_ + 1;
  uVar7 = OnTransitionEvent_AnyThread._48_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnTransitionEvent_AnyThread._48_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnTransitionEvent_AnyThread._40_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnTransitionEvent_AnyThread._40_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnTransitionEvent_AnyThread._60_4_ = OnTransitionEvent_AnyThread._60_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnTransitionEvent_AnyThread,
               false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4d2d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&OnTransitionEvent_AnyThread);
  return;
}

// UnregisterGlobalDelegates @ 14d4d3d50

void __cdecl UE::StateTreeTrace::UnregisterGlobalDelegates(void)

{
  if (GOnWorldTickStartDelegateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldTickStart,GOnWorldTickStartDelegateHandle);
  }
  GOnWorldTickStartDelegateHandle.ID = 0;
  if (GTracingStateChangedDelegateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &StateTree::Delegates::OnTracingStateChanged,GTracingStateChangedDelegateHandle);
  }
  GTracingStateChangedDelegateHandle.ID = 0;
  return;
}

// UpdatePhaseEnter @ 14d4d43a0

void __cdecl
UE::StateTree::Debug::Private::UpdatePhaseEnter
          (FStateTreeExecutionContext *param_1,EStateTreeUpdatePhase param_2,
          FStateTreeStateHandle param_3,
          TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
          *param_4)

{
  TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,enum_EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
  ::Broadcast(param_4,param_1,param_2,param_3);
  return;
}

// UpdatePhaseExit @ 14d4d43c0

void __cdecl
UE::StateTree::Debug::Private::UpdatePhaseExit
          (FStateTreeExecutionContext *param_1,EStateTreeUpdatePhase param_2,
          FStateTreeStateHandle param_3,
          TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
          *param_4)

{
  TMulticastDelegate<void___cdecl(FStateTreeExecutionContext_const_&,enum_EStateTreeUpdatePhase,FStateTreeStateHandle),FDefaultTSDelegateUserPolicy>
  ::Broadcast(param_4,param_1,param_2,param_3);
  return;
}

// Construct<FStateTreeInstanceObjectWrapper> @ 14d4d8890

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeInstanceObjectWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeInstanceObjectWrapper> @ 14d4d88a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeInstanceObjectWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeInstanceObjectWrapper> @ 14d4d88b0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeInstanceObjectWrapper>(void *param_1)

{
  return;
}

// Copy<FStateTreeInstanceObjectWrapper> @ 14d4d8900

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeInstanceObjectWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRecordedStateTreeTransitionResult> @ 14d4d8b90

void __cdecl UE::CoreUObject::Private::Construct<FRecordedStateTreeTransitionResult>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRecordedStateTreeTransitionResult> @ 14d4d8bc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRecordedStateTreeTransitionResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRecordedStateTreeTransitionResult> @ 14d4d8be0

void __cdecl UE::CoreUObject::Private::Destruct<FRecordedStateTreeTransitionResult>(void *param_1)

{
  DestructItems<FStateTreeEvent,int>
            (*(FStateTreeEvent **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FRecordedStateTreeTransitionResult> @ 14d4d8c30

bool __cdecl
UE::CoreUObject::Private::Copy<FRecordedStateTreeTransitionResult>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FRecordedActiveState *pFVar6;
  FStateTreeEvent *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar6 = (FRecordedActiveState *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          ConstructItems<FRecordedActiveState,FRecordedActiveState,int>(pFVar8->Data,pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar8 + 2;
      if (pFVar2 != pFVar3 + 2) {
        DestructItems<FStateTreeEvent,int>((FStateTreeEvent *)pFVar2->Data,*(int *)&pFVar8[3].Data);
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar8[3].Data + 4);
        pFVar7 = (FStateTreeEvent *)pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FStateTreeEvent,FStateTreeEvent,int>(pFVar2->Data,pFVar7,iVar4);
        }
      }
      *(undefined1 *)&pFVar8[4].Data = *(undefined1 *)&pFVar3[4].Data;
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRecordedActiveState> @ 14d4d90b0

void __cdecl UE::CoreUObject::Private::Construct<FRecordedActiveState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}

// ConstructForTests<FRecordedActiveState> @ 14d4d90d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRecordedActiveState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}

// Destruct<FRecordedActiveState> @ 14d4d90f0

void __cdecl UE::CoreUObject::Private::Destruct<FRecordedActiveState>(void *param_1)

{
  return;
}

// Copy<FRecordedActiveState> @ 14d4d9140

bool __cdecl
UE::CoreUObject::Private::Copy<FRecordedActiveState>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRecordedStateTreeExecutionFrame> @ 14d4d9360

void __cdecl UE::CoreUObject::Private::Construct<FRecordedStateTreeExecutionFrame>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeStateHandle::Root.Index;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfe;
  return;
}

// ConstructForTests<FRecordedStateTreeExecutionFrame> @ 14d4d93c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRecordedStateTreeExecutionFrame>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeStateHandle::Root.Index;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfe;
  return;
}

// Destruct<FRecordedStateTreeExecutionFrame> @ 14d4d9400

void __cdecl UE::CoreUObject::Private::Destruct<FRecordedStateTreeExecutionFrame>(void *param_1)

{
  return;
}

// Copy<FRecordedStateTreeExecutionFrame> @ 14d4d9410

bool __cdecl
UE::CoreUObject::Private::Copy<FRecordedStateTreeExecutionFrame>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar1 + 1);
      uVar2 = *(undefined8 *)((longlong)puVar1 + 0x14);
      *(undefined8 *)((longlong)puVar3 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
      *(undefined8 *)((longlong)puVar3 + 0x14) = uVar2;
      uVar2 = *(undefined8 *)((longlong)puVar1 + 0x24);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = *(undefined8 *)((longlong)puVar1 + 0x1c);
      *(undefined8 *)((longlong)puVar3 + 0x24) = uVar2;
      uVar2 = *(undefined8 *)((longlong)puVar1 + 0x34);
      *(undefined8 *)((longlong)puVar3 + 0x2c) = *(undefined8 *)((longlong)puVar1 + 0x2c);
      *(undefined8 *)((longlong)puVar3 + 0x34) = uVar2;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(byte *)(puVar3 + 8) =
           *(byte *)(puVar3 + 8) ^ (*(byte *)(puVar3 + 8) ^ *(byte *)(puVar1 + 8)) & 1;
      *(undefined8 *)((longlong)puVar3 + 0x41) = *(undefined8 *)((longlong)puVar1 + 0x41);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTransitionResult> @ 14d4d95f0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTransitionResult>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeStateHandle::Invalid.Index;
  *(ushort *)((longlong)param_1 + 10) = FStateTreeStateHandle::Invalid.Index;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x104;
  *(ushort *)((longlong)param_1 + 0x38) = FStateTreeStateHandle::Invalid.Index;
  *(ushort *)((longlong)param_1 + 0x3a) = FStateTreeStateHandle::Invalid.Index;
  return;
}

// ConstructForTests<FStateTreeTransitionResult> @ 14d4d9650

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeStateHandle::Invalid.Index;
  *(ushort *)((longlong)param_1 + 10) = FStateTreeStateHandle::Invalid.Index;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *(ushort *)((longlong)param_1 + 0x38) = FStateTreeStateHandle::Invalid.Index;
  *(ushort *)((longlong)param_1 + 0x3a) = FStateTreeStateHandle::Invalid.Index;
  return;
}

// Destruct<FStateTreeTransitionResult> @ 14d4d96b0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTransitionResult>(void *param_1)

{
  DestructItems<FStateTreeFrameStateSelectionEvents,int>
            (*(FStateTreeFrameStateSelectionEvents **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FStateTreeExecutionFrame,int>
            (*(FStateTreeExecutionFrame **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FStateTreeTransitionResult> @ 14d4d9700

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTransitionResult>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  undefined4 *puVar6;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar6 = param_1;
    do {
      *puVar6 = *(undefined4 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      puVar6[1] = *(undefined4 *)((longlong)pvVar4 + 4);
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)((longlong)pvVar4 + 8);
      *(undefined2 *)((longlong)puVar6 + 10) = *(undefined2 *)((longlong)pvVar4 + 10);
      *(undefined1 *)(puVar6 + 3) = *(undefined1 *)((longlong)pvVar4 + 0xc);
      *(undefined1 *)((longlong)puVar6 + 0xd) = *(undefined1 *)((longlong)pvVar4 + 0xd);
      *(undefined1 *)((longlong)puVar6 + 0xe) = *(undefined1 *)((longlong)pvVar4 + 0xe);
      TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)(puVar6 + 4),
                 (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar4 + 0x10));
      pFVar5 = (ForAnyElementType *)(puVar6 + 8);
      if (pFVar5 != (ForAnyElementType *)((longlong)pvVar4 + 0x20)) {
        DestructItems<FStateTreeFrameStateSelectionEvents,int>
                  ((FStateTreeFrameStateSelectionEvents *)pFVar5->Data,puVar6[10]);
        iVar2 = *(int *)((longlong)pvVar4 + 0x28);
        piVar1 = puVar6 + 0xb;
        pFVar3 = ((ForAnyElementType *)((longlong)pvVar4 + 0x20))->Data;
        puVar6[10] = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          ConstructItems<FStateTreeFrameStateSelectionEvents,FStateTreeFrameStateSelectionEvents,int>
                    (pFVar5->Data,(FStateTreeFrameStateSelectionEvents *)pFVar3,iVar2);
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar4 + 0x30) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar4 + 0x30));
      }
      *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)((longlong)pvVar4 + 0x30);
      *(undefined2 *)(puVar6 + 0xe) = *(undefined2 *)((longlong)pvVar4 + 0x38);
      *(undefined2 *)((longlong)puVar6 + 0x3a) = *(undefined2 *)((longlong)pvVar4 + 0x3a);
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x40);
      puVar6 = puVar6 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeExecutionState> @ 14d4d9990

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeExecutionState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FStateTreeExecutionState::FStateTreeExecutionState(param_1);
  return;
}

// ConstructForTests<FStateTreeExecutionState> @ 14d4d99c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeExecutionState>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x60));
  *(undefined2 *)((longlong)param_1 + 0x70) = 0x403;
  *(undefined4 *)((longlong)param_1 + 0x72) = 4;
  *(undefined1 *)((longlong)param_1 + 0x76) = 0;
  return;
}

// Destruct<FStateTreeExecutionState> @ 14d4d99d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeExecutionState>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if ((*(uint *)((longlong)param_1 + 0x38) & 0x7fffffff) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,300,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int>
            (*(FActiveListener **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FStateTreeTransitionDelayedState,int>
            (*(FStateTreeTransitionDelayedState **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FStateTreeExecutionFrame,int>
            (*(FStateTreeExecutionFrame **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FStateTreeExecutionState> @ 14d4d9a20

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeExecutionState>(void *param_1,void *param_2,int param_3)

{
  TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FStateTreeTransitionDelayedState *pFVar4;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    pTVar1 = (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10);
    if (pTVar1 != (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x10)) {
      DestructItems<FStateTreeTransitionDelayedState,int>
                ((FStateTreeTransitionDelayedState *)(pTVar1->AllocatorInstance).Data,
                 ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x10))->ArrayNum);
      iVar3 = ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->ArrayNum;
      piVar2 = &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x10))->ArrayMax;
      pFVar4 = (FStateTreeTransitionDelayedState *)
               (((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
      ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        ConstructItems<FStateTreeTransitionDelayedState,FStateTreeTransitionDelayedState,int>
                  ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
      }
    }
    (((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    AllocatorInstance).Data =
         (((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    FStateTreeDelegateActiveListeners::operator=
              ((FStateTreeDelegateActiveListeners *)
               &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x20))->ArrayNum,
               (FStateTreeDelegateActiveListeners *)
               &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x20))->ArrayNum);
    pTVar1 = (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x40);
    if (pTVar1 != (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x40)) {
      iVar3 = ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x40))->ArrayNum;
      piVar2 = &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x40))->ArrayMax;
      _Src = (((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x40))->AllocatorInstance).Data;
      ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    (((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
    AllocatorInstance).Data =
         (((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x50))->AllocatorInstance).Data;
    iVar3 = ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x50))->ArrayMax;
    ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
    ArrayNum = ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x50))->ArrayNum;
    ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
    ArrayMax = iVar3;
    if ((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60)
        != (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
           ((longlong)param_2 + 0x60)) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)param_1 + 0x60),
                 ((TObjectPtr<UScriptStruct_const_>_u_0 *)
                 &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                   ((longlong)param_2 + 0x60))->AllocatorInstance).Data)->DebugPtr,
                 *(uchar **)
                  &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
                   ((longlong)param_2 + 0x60))->ArrayNum);
    }
    *(undefined1 *)
     &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
      ->AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x70))->AllocatorInstance).Data;
    *(undefined1 *)
     ((longlong)
      &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
       ->AllocatorInstance).Data + 1) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x70))->AllocatorInstance).Data + 1);
    *(undefined1 *)
     ((longlong)
      &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
       ->AllocatorInstance).Data + 2) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x70))->AllocatorInstance).Data + 2);
    *(undefined1 *)
     ((longlong)
      &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
       ->AllocatorInstance).Data + 3) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x70))->AllocatorInstance).Data + 3);
    *(undefined2 *)
     ((longlong)
      &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
       ->AllocatorInstance).Data + 4) =
         *(undefined2 *)
          ((longlong)
           &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x70))->AllocatorInstance).Data + 4);
    *(undefined1 *)
     ((longlong)
      &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
       ->AllocatorInstance).Data + 6) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x70))->AllocatorInstance).Data + 6);
    param_1 = &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x70))->ArrayNum;
    param_2 = &((TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x70))->ArrayNum;
  }
  return true;
}

// Construct<FStateTreeExecutionFrame> @ 14d4d9c00

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeExecutionFrame>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  FStateTreeExecutionFrame::FStateTreeExecutionFrame(param_1);
  return;
}

// ConstructForTests<FStateTreeExecutionFrame> @ 14d4d9c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeExecutionFrame>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeStateHandle::Root.Index;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(ushort *)((longlong)param_1 + 0x54) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x56) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x58) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x5a) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x5c) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x5e) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x62) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined4 *)((longlong)param_1 + 100) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x6a) = *(byte *)((longlong)param_1 + 0x6a) & 0xfc;
  *(ushort *)((longlong)param_1 + 0x68) = FVar1.Index;
  return;
}

// Destruct<FStateTreeExecutionFrame> @ 14d4d9c40

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeExecutionFrame>(void *param_1)

{
  FStateTreeTasksCompletionStatus::~FStateTreeTasksCompletionStatus
            ((FStateTreeTasksCompletionStatus *)((longlong)param_1 + 0x40));
  return;
}

// Copy<FStateTreeExecutionFrame> @ 14d4d9c50

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeExecutionFrame>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar4 = *puVar1;
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(puVar1 + 1);
      uVar2 = *(undefined8 *)((longlong)puVar1 + 0x14);
      *(undefined8 *)((longlong)puVar4 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
      *(undefined8 *)((longlong)puVar4 + 0x14) = uVar2;
      uVar2 = *(undefined8 *)((longlong)puVar1 + 0x24);
      *(undefined8 *)((longlong)puVar4 + 0x1c) = *(undefined8 *)((longlong)puVar1 + 0x1c);
      *(undefined8 *)((longlong)puVar4 + 0x24) = uVar2;
      uVar2 = *(undefined8 *)((longlong)puVar1 + 0x34);
      *(undefined8 *)((longlong)puVar4 + 0x2c) = *(undefined8 *)((longlong)puVar1 + 0x2c);
      *(undefined8 *)((longlong)puVar4 + 0x34) = uVar2;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = *(undefined4 *)((longlong)puVar1 + 0x3c);
      FStateTreeTasksCompletionStatus::operator=
                ((FStateTreeTasksCompletionStatus *)(puVar4 + 8),
                 (FStateTreeTasksCompletionStatus *)(puVar1 + 8));
      *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(puVar1 + 10);
      *(undefined2 *)((longlong)puVar4 + 0x54) = *(undefined2 *)((longlong)puVar1 + 0x54);
      *(undefined2 *)((longlong)puVar4 + 0x56) = *(undefined2 *)((longlong)puVar1 + 0x56);
      *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(puVar1 + 0xb);
      *(undefined2 *)((longlong)puVar4 + 0x5a) = *(undefined2 *)((longlong)puVar1 + 0x5a);
      *(undefined2 *)((longlong)puVar4 + 0x5c) = *(undefined2 *)((longlong)puVar1 + 0x5c);
      *(undefined4 *)((longlong)puVar4 + 0x5e) = *(undefined4 *)((longlong)puVar1 + 0x5e);
      *(undefined2 *)((longlong)puVar4 + 0x62) = *(undefined2 *)((longlong)puVar1 + 0x62);
      *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar1 + 100);
      *(undefined2 *)(puVar4 + 0xd) = *(undefined2 *)(puVar1 + 0xd);
      bVar3 = (*(byte *)((longlong)puVar4 + 0x6a) ^ *(byte *)((longlong)puVar1 + 0x6a)) & 1 ^
              *(byte *)((longlong)puVar4 + 0x6a);
      *(byte *)((longlong)puVar4 + 0x6a) = bVar3;
      *(byte *)((longlong)puVar4 + 0x6a) = (bVar3 ^ *(byte *)((longlong)puVar1 + 0x6a)) & 2 ^ bVar3;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0xe;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<UE::StateTree::FExecutionFrameHandle> @ 14d4d9d80

void __cdecl
UE::CoreUObject::Private::Construct<UE::StateTree::FExecutionFrameHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  return;
}

// ConstructForTests<UE::StateTree::FExecutionFrameHandle> @ 14d4d9da0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<UE::StateTree::FExecutionFrameHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  return;
}

// Destruct<UE::StateTree::FExecutionFrameHandle> @ 14d4d9dc0

void __cdecl UE::CoreUObject::Private::Destruct<UE::StateTree::FExecutionFrameHandle>(void *param_1)

{
  return;
}

// Copy<UE::StateTree::FExecutionFrameHandle> @ 14d4d9e90

bool __cdecl
UE::CoreUObject::Private::Copy<UE::StateTree::FExecutionFrameHandle>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar1 + 1);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeScheduledTick> @ 14d4da160

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeScheduledTick>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeScheduledTick> @ 14d4da170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeScheduledTick>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FStateTreeScheduledTick> @ 14d4da190

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeScheduledTick>(void *param_1)

{
  return;
}

// Copy<FStateTreeScheduledTick> @ 14d4da1a0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeScheduledTick>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTransitionDelayedState> @ 14d4da310

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTransitionDelayedState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(ushort *)((longlong)param_1 + 0x2a) = FStateTreeIndex16::Invalid.Value;
  return;
}

// ConstructForTests<FStateTreeTransitionDelayedState> @ 14d4da350

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionDelayedState>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x28) = 0xffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(ushort *)((longlong)param_1 + 0x2a) = FStateTreeIndex16::Invalid.Value;
  return;
}

// Destruct<FStateTreeTransitionDelayedState> @ 14d4da380

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTransitionDelayedState>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  return;
}

// Copy<FStateTreeTransitionDelayedState> @ 14d4da390

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTransitionDelayedState>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar5 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      lVar2 = *(longlong *)((longlong)param_1 + lVar5 + 0x18);
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar5 + 0x10);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(longlong *)((longlong)param_1 + 0x18) = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x24);
      *(undefined2 *)((longlong)param_1 + 0x28) = *(undefined2 *)((longlong)param_1 + lVar5 + 0x28);
      *(undefined2 *)((longlong)param_1 + 0x2a) = *(undefined2 *)((longlong)param_1 + lVar5 + 0x2a);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeEventQueue> @ 14d4da4b0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEventQueue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeEventQueue> @ 14d4da4c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeEventQueue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeEventQueue> @ 14d4da4d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEventQueue>(void *param_1)

{
  DestructItems<FStateTreeSharedEvent,int>
            (*(FStateTreeSharedEvent **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FStateTreeEventQueue> @ 14d4da550

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEventQueue>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FStateTreeSharedEvent,int>
                  ((FStateTreeSharedEvent *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FStateTreeSharedEvent,FStateTreeSharedEvent,int>
                    (pFVar6->Data,(FStateTreeSharedEvent *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTransitionSource> @ 14d4da640

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTransitionSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 0xffff;
  *(ushort *)((longlong)param_1 + 0xc) = FStateTreeStateHandle::Invalid.Index;
  return;
}

// ConstructForTests<FStateTreeTransitionSource> @ 14d4da660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionSource>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0xc) = FStateTreeStateHandle::Invalid.Index;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  return;
}

// Destruct<FStateTreeTransitionSource> @ 14d4da690

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTransitionSource>(void *param_1)

{
  return;
}

// Copy<FStateTreeTransitionSource> @ 14d4da720

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTransitionSource>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeInstanceData> @ 14d4da790

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeInstanceData>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  puVar3 = ::operator_new(0x138);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0x10;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_UFStateTreeInstanceStorage___00_SharedPointerInternals__6B_
    ;
    FStateTreeInstanceStorage::FStateTreeInstanceStorage((FStateTreeInstanceStorage *)(puVar3 + 2));
    *(undefined8 **)((longlong)param_1 + 8) = puVar3;
    *(undefined8 **)param_1 = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ConstructForTests<FStateTreeInstanceData> @ 14d4da7a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeInstanceData>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  puVar3 = ::operator_new(0x138);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0x10;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_UFStateTreeInstanceStorage___00_SharedPointerInternals__6B_
    ;
    FStateTreeInstanceStorage::FStateTreeInstanceStorage((FStateTreeInstanceStorage *)(puVar3 + 2));
    *(undefined8 **)((longlong)param_1 + 8) = puVar3;
    *(undefined8 **)param_1 = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Destruct<FStateTreeInstanceData> @ 14d4da7b0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeInstanceData>(void *param_1)

{
  FStateTreeInstanceStorage::Reset(*(FStateTreeInstanceStorage **)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// SerializeArchive<FStateTreeInstanceData> @ 14d4da7e0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FStateTreeInstanceData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  FStateTreeInstanceStorage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar5;
  UPackage *pUVar6;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FStateTreeInstanceStorageCustomVersion::GUID)
  ;
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FStateTreeInstanceStorageCustomVersion::GUID);
    if (iVar4 < 1) {
      pTVar5 = MakeShared<FStateTreeInstanceStorage,1>(&local_18);
      pFVar1 = *(FStateTreeInstanceStorage **)param_2;
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 8);
      pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
      *(FStateTreeInstanceStorage **)param_2 = pTVar5->Object;
      *(TReferenceControllerBase<1> **)((longlong)param_2 + 8) = pTVar3;
      pTVar5->Object = pFVar1;
      (pTVar5->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return true;
    }
    pTVar5 = MakeShared<FStateTreeInstanceStorage,1>(&local_18);
    pFVar1 = *(FStateTreeInstanceStorage **)param_2;
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 8);
    pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
    *(FStateTreeInstanceStorage **)param_2 = pTVar5->Object;
    *(TReferenceControllerBase<1> **)((longlong)param_2 + 8) = pTVar3;
    pTVar5->Object = pFVar1;
    (pTVar5->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar6,
                         L"StateTreeInstanceStorage");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton,param_1,
             *(void **)param_2,(void *)0x0);
  return true;
}

// GetPreloadDependencies<FStateTreeInstanceData> @ 14d4da8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::CoreUObject::Private::GetPreloadDependencies<FStateTreeInstanceData>
          (void *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  UObjectBaseUtility *this;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  UScriptStruct *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UPackage *pUVar10;
  ICppStructOps *this_01;
  FFieldClass *pFVar11;
  TTuple<FProperty_const_*,void_const_*> *pTVar12;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar13;
  uint uVar14;
  undefined1 auStackY_7a8 [32];
  UScriptStruct *pUStack_758;
  FString FStack_750;
  FPropertyValueIterator FStack_740;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar10,
                         L"StateTreeInstanceStorage");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton;
  pFVar1 = (param_2->AllocatorInstance).Data;
  pUStack_758 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton;
  if (((pFVar1 <= (FScriptContainerElement *)&pUStack_758) &&
      ((FScriptContainerElement *)&pUStack_758 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_2->ArrayNum;
  if (iVar8 == param_2->ArrayMax) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar8 + 1;
  *(UScriptStruct **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = pUStack_758;
  this_01 = UScriptStruct::GetCppStructOps(this_00);
  if (this_01 != (ICppStructOps *)0x0) {
    UScriptStruct::ICppStructOps::GetPreloadDependencies(this_01,*(void **)param_1,param_2);
  }
  pvVar2 = *(void **)param_1;
  pFVar11 = FStructProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&FStack_740,pFVar11,(UStruct *)this_00,pvVar2,FullRecursion,IncludeDeprecated);
  do {
    if (FStack_740.PropertyIteratorStack.ArrayNum < 1) {
      FVar13 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&FStack_740;
      if (FStack_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar13 = FStack_740.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar13,FStack_740.PropertyIteratorStack.ArrayNum);
      if (FStack_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)FStack_740.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      return;
    }
    pTVar12 = FPropertyValueIterator::operator->(&FStack_740);
    this = *(UObjectBaseUtility **)(*(longlong *)pTVar12 + 0x70);
    if (this[4].field_0x14 == '\0') {
      UObjectBaseUtility::GetPathName(this,&FStack_750,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrepareCppStructOpsCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x8f6,
                         L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s")
      ;
      if (FStack_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar3 = *(undefined8 **)&this[4].field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      pTVar12 = FPropertyValueIterator::operator->(&FStack_740);
      puVar4 = (uint *)*puVar3;
      uVar5 = *(undefined8 *)&pTVar12->field_0x8;
      if ((*(byte *)((longlong)puVar4 + 0x17) & 4) != 0) {
        if (((*puVar4 & 0x200) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = 0;
        for (uVar9 = *puVar4 & 0x1ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
          uVar14 = uVar14 + 1;
        }
        (**(code **)(puVar4 + (ulonglong)uVar14 * 2 + 6))(uVar5,param_2);
      }
    }
    FPropertyValueIterator::IterateToNext(&FStack_740);
  } while( true );
}

// Copy<FStateTreeInstanceData> @ 14d4da8d0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeInstanceData>(void *param_1,void *param_2,int param_3)

{
  FStateTreeInstanceStorage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  undefined8 *puVar5;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      pTVar4 = MakeShared<FStateTreeInstanceStorage,1,FStateTreeInstanceStorage_&>
                         (&local_18,
                          *(FStateTreeInstanceStorage **)
                           (((longlong)param_2 - (longlong)param_1) + (longlong)puVar5));
      pFVar1 = (FStateTreeInstanceStorage *)*puVar5;
      pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
      pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
      *puVar5 = pTVar4->Object;
      puVar5[1] = pTVar3;
      pTVar4->Object = pFVar1;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FStateTreeInstanceData> @ 14d4da950

bool __cdecl
UE::CoreUObject::Private::Identical<FStateTreeInstanceData>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  FInstancedStructContainer *this;
  FInstancedStructContainer *this_00;
  UObject *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FConstStructView *pFVar4;
  FStateTreeInstanceObjectWrapper *pFVar5;
  FStateTreeInstanceObjectWrapper *pFVar6;
  int iVar7;
  FConstStructView local_38;
  FConstStructView local_28;
  
  if (param_2 == (void *)0x0) {
    *param_4 = false;
    return true;
  }
  this = *(FInstancedStructContainer **)param_1;
  this_00 = *(FInstancedStructContainer **)param_2;
  bVar3 = FInstancedPropertyBag::Identical
                    ((FInstancedPropertyBag *)&this[0xf].AllocatedSize,
                     (FInstancedPropertyBag *)&this_00[0xf].AllocatedSize,param_3);
  if ((bVar3) && (bVar3 = FInstancedStructContainer::Identical(this,this_00,param_3), bVar3)) {
    iVar7 = 0;
    bVar3 = true;
    if (0 < this->NumItems) {
      do {
        pFVar4 = FInstancedStructContainer::operator[](this,&local_38,iVar7);
        pFVar5 = FConstStructView::GetPtr<FStateTreeInstanceObjectWrapper_const_>(pFVar4);
        pFVar4 = FInstancedStructContainer::operator[](this_00,&local_28,iVar7);
        pFVar6 = FConstStructView::GetPtr<FStateTreeInstanceObjectWrapper_const_>(pFVar4);
        if ((pFVar5 != (FStateTreeInstanceObjectWrapper *)0x0) &&
           ((pFVar6 == (FStateTreeInstanceObjectWrapper *)0x0 ||
            (((pUVar1 = (pFVar5->InstanceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0 &&
              (pUVar2 = (pFVar6->InstanceObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) &&
             (((param_3 >> 0x16 & 1) != 0 ||
              (((pUVar1 != pUVar2 && ((param_3 & 0x300) != 0)) &&
               (bVar3 = FObjectPropertyBase::StaticIdentical(pUVar1,pUVar2,param_3), !bVar3)))))))))
           ) {
          bVar3 = false;
          break;
        }
        iVar7 = iVar7 + 1;
        bVar3 = true;
      } while (iVar7 < this->NumItems);
    }
    *param_4 = bVar3;
  }
  else {
    *param_4 = false;
  }
  return true;
}

// AddStructReferencedObjects<FStateTreeInstanceData> @ 14d4daac0

_func___cdecl_void_void_ptr_FReferenceCollector_ptr * __cdecl
UE::CoreUObject::Private::AddStructReferencedObjects<FStateTreeInstanceData>(void)

{
  return AddStructReferencedObjectsOrNot<FStateTreeInstanceData>;
}

// Construct<FStateTreeSharedEvent> @ 14d4daad0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeSharedEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeSharedEvent> @ 14d4daae0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeSharedEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeSharedEvent> @ 14d4daaf0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeSharedEvent>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FStateTreeSharedEvent> @ 14d4dab00

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeSharedEvent>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// AddStructReferencedObjects<FStateTreeSharedEvent> @ 14d4dab80

_func___cdecl_void_void_ptr_FReferenceCollector_ptr * __cdecl
UE::CoreUObject::Private::AddStructReferencedObjects<FStateTreeSharedEvent>(void)

{
  return AddStructReferencedObjectsOrNot<FStateTreeSharedEvent>;
}

// Construct<FStateTreeActiveStates> @ 14d4dabd0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeActiveStates>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FStateTreeActiveStates> @ 14d4dac10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeActiveStates>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FStateTreeActiveStates> @ 14d4dac40

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeActiveStates>(void *param_1)

{
  return;
}

// Copy<FStateTreeActiveStates> @ 14d4dac50

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeActiveStates>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTransitionRequest> @ 14d4dada0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTransitionRequest>(void *param_1)

{
  *(undefined4 *)param_1 = 0x2ffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FStateTreeTransitionRequest> @ 14d4dadc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionRequest>(void *param_1)

{
  *(undefined4 *)param_1 = 0x2ffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FStateTreeTransitionRequest> @ 14d4dade0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTransitionRequest>(void *param_1)

{
  return;
}

// Copy<FStateTreeTransitionRequest> @ 14d4dadf0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTransitionRequest>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeEvent> @ 14d4dae30

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEvent>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FStateTreeEvent> @ 14d4dae70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FStateTreeEvent> @ 14d4daea0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEvent>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FStateTreeEvent> @ 14d4daeb0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEvent>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (FInstancedStruct *)((longlong)param_1 + lVar2 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((FInstancedStruct *)((longlong)param_1 + 8) != pFVar1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 8),
                   (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)((longlong)param_1 + lVar2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FStateTreeEvent> @ 14d4daf90

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FStateTreeEvent>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = (int)((ulonglong)uVar1 >> 0x20) + uVar2;
  if ((*(longlong *)((longlong)param_1 + 0x10) != 0) &&
     (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0)) {
    iVar3 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x370))();
    return iVar3 + -0x61c88647 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  }
  return uVar2;
}

// Construct<FStateTreeExternalDataDesc> @ 14d4dafa0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeExternalDataDesc>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  return;
}

// ConstructForTests<FStateTreeExternalDataDesc> @ 14d4dafd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeExternalDataDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  return;
}

// Destruct<FStateTreeExternalDataDesc> @ 14d4db000

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeExternalDataDesc>(void *param_1)

{
  return;
}

// Construct<FStateTreeInstanceStorage> @ 14d4db010

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeInstanceStorage>(void *param_1)

{
  FInstancedStructContainer::FInstancedStructContainer(param_1);
  FStateTreeExecutionState::FStateTreeExecutionState
            ((FStateTreeExecutionState *)((longlong)param_1 + 0x10));
  FInstancedStructContainer::FInstancedStructContainer
            ((FInstancedStructContainer *)((longlong)param_1 + 0x88));
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  MakeShared<FStateTreeEventQueue,1>
            ((TSharedRef<FStateTreeEventQueue,1> *)((longlong)param_1 + 200));
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>();
  return;
}

// ConstructForTests<FStateTreeInstanceStorage> @ 14d4db020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeInstanceStorage>(void *param_1)

{
  FInstancedStructContainer::FInstancedStructContainer(param_1);
  FStateTreeExecutionState::FStateTreeExecutionState
            ((FStateTreeExecutionState *)((longlong)param_1 + 0x10));
  FInstancedStructContainer::FInstancedStructContainer
            ((FInstancedStructContainer *)((longlong)param_1 + 0x88));
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  MakeShared<FStateTreeEventQueue,1>
            ((TSharedRef<FStateTreeEventQueue,1> *)((longlong)param_1 + 200));
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0xf8));
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>();
  return;
}

// Destruct<FStateTreeInstanceStorage> @ 14d4db030

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeInstanceStorage>(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x120);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x110));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0xf8));
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xd0));
  DestructItems<FStateTreeTemporaryInstanceData,int>
            (*(FStateTreeTemporaryInstanceData **)((longlong)param_1 + 0xb8),
             *(int *)((longlong)param_1 + 0xc0));
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  FInstancedStructContainer::Empty((FInstancedStructContainer *)((longlong)param_1 + 0x88));
  FStateTreeExecutionState::~FStateTreeExecutionState
            ((FStateTreeExecutionState *)((longlong)param_1 + 0x10));
  FInstancedStructContainer::Empty(param_1);
  return;
}

// Copy<FStateTreeExternalDataDesc> @ 14d4db040

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeExternalDataDesc>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined2 *)((longlong)puVar2 + 0x14) = *(undefined2 *)((longlong)puVar1 + 0x14);
      *(undefined1 *)((longlong)puVar2 + 0x16) = *(undefined1 *)((longlong)puVar1 + 0x16);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FStateTreeInstanceStorage> @ 14d4db0f0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeInstanceStorage>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FRuntimeValidationInstanceData *pFVar2;
  int iVar3;
  int iVar4;
  FStateTreeTemporaryInstanceData *pFVar5;
  void *_Src;
  FScriptContainerElement *pFVar6;
  FStateTreeEventQueue *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<FStateTreeEventQueue,1> *pTVar10;
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> TVar11;
  int *piVar12;
  int *_Src_00;
  undefined8 local_res8;
  DWORD local_res18 [2];
  ForAnyElementType local_res20;
  DWORD *local_70;
  undefined8 *local_68;
  TSharedRef<FStateTreeEventQueue,1> local_60 [2];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FInstancedStructContainer::operator=(param_1,param_2);
    FStateTreeExecutionState::operator=
              ((FStateTreeExecutionState *)((longlong)param_1 + 0x10),
               (FStateTreeExecutionState *)((longlong)param_2 + 0x10));
    FInstancedStructContainer::operator=
              ((FInstancedStructContainer *)
               &((FInstancedStructContainer *)((longlong)param_1 + 0x80))->AllocatedSize,
               (FInstancedStructContainer *)
               &((FInstancedStructContainer *)((longlong)param_2 + 0x80))->AllocatedSize);
    piVar1 = &((FInstancedStructContainer *)((longlong)param_1 + 0x90))->AllocatedSize;
    if (piVar1 != &((FInstancedStructContainer *)((longlong)param_2 + 0x90))->AllocatedSize) {
      piVar12 = (int *)((longlong)&((FInstancedStructContainer *)((longlong)param_1 + 0xb0))->Memory
                       + 4);
      iVar3 = *(int *)&((FInstancedStructContainer *)((longlong)param_2 + 0xb0))->Memory;
      iVar4 = *piVar12;
      _Src_00 = *(int **)&((FInstancedStructContainer *)((longlong)param_2 + 0xa0))->AllocatedSize;
      if (*(int **)&((FInstancedStructContainer *)((longlong)param_2 + 0xa0))->AllocatedSize ==
          (int *)0x0) {
        _Src_00 = &((FInstancedStructContainer *)((longlong)param_2 + 0x90))->AllocatedSize;
      }
      *(int *)&((FInstancedStructContainer *)((longlong)param_1 + 0xb0))->Memory = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar12 = 1;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
                  (0xc,4,iVar3,iVar4,
                   (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> *)piVar1,iVar3,
                   piVar12);
        piVar12 = *(int **)&((FInstancedStructContainer *)((longlong)param_1 + 0xa0))->AllocatedSize
        ;
        if (*(int **)&((FInstancedStructContainer *)((longlong)param_1 + 0xa0))->AllocatedSize ==
            (int *)0x0) {
          piVar12 = piVar1;
        }
        if (iVar3 != 0) {
          memcpy(piVar12,_Src_00,(longlong)iVar3 * 0xc);
        }
      }
    }
    piVar1 = &((FInstancedStructContainer *)((longlong)param_1 + 0xb0))->AllocatedSize;
    if (piVar1 != &((FInstancedStructContainer *)((longlong)param_2 + 0xb0))->AllocatedSize) {
      DestructItems<FStateTreeTemporaryInstanceData,int>
                (*(FStateTreeTemporaryInstanceData **)piVar1,
                 *(int *)&((FInstancedStructContainer *)((longlong)param_1 + 0xc0))->Memory);
      iVar3 = *(int *)&((FInstancedStructContainer *)((longlong)param_2 + 0xc0))->Memory;
      piVar12 = (int *)((longlong)&((FInstancedStructContainer *)((longlong)param_1 + 0xc0))->Memory
                       + 4);
      pFVar5 = *(FStateTreeTemporaryInstanceData **)
                &((FInstancedStructContainer *)((longlong)param_2 + 0xb0))->AllocatedSize;
      iVar4 = *piVar12;
      *(int *)&((FInstancedStructContainer *)((longlong)param_1 + 0xc0))->Memory = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar12 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,iVar4,(ForAnyElementType *)piVar1,iVar3,piVar12);
        ConstructItems<FStateTreeTemporaryInstanceData,FStateTreeTemporaryInstanceData,int>
                  (*(void **)piVar1,pFVar5,iVar3);
      }
    }
    pTVar10 = MakeShared<FStateTreeEventQueue,1,FStateTreeEventQueue_&>
                        (local_60,*(FStateTreeEventQueue **)
                                   &((FInstancedStructContainer *)((longlong)param_2 + 0xc0))->
                                    AllocatedSize);
    pFVar7 = *(FStateTreeEventQueue **)
              &((FInstancedStructContainer *)((longlong)param_1 + 0xc0))->AllocatedSize;
    pTVar8 = (TReferenceControllerBase<1> *)
             ((FInstancedStructContainer *)((longlong)param_1 + 0xd0))->Memory;
    pTVar9 = (pTVar10->SharedReferenceCount).ReferenceController;
    *(FStateTreeEventQueue **)
     &((FInstancedStructContainer *)((longlong)param_1 + 0xc0))->AllocatedSize = pTVar10->Object;
    ((FInstancedStructContainer *)((longlong)param_1 + 0xd0))->Memory = (uchar *)pTVar9;
    pTVar10->Object = pFVar7;
    (pTVar10->SharedReferenceCount).ReferenceController = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
    piVar1 = &((FInstancedStructContainer *)((longlong)param_1 + 0xe0))->AllocatedSize;
    if (piVar1 != &((FInstancedStructContainer *)((longlong)param_2 + 0xe0))->AllocatedSize) {
      iVar3 = *(int *)&((FInstancedStructContainer *)((longlong)param_2 + 0xf0))->Memory;
      piVar12 = (int *)((longlong)&((FInstancedStructContainer *)((longlong)param_1 + 0xf0))->Memory
                       + 4);
      _Src = *(void **)&((FInstancedStructContainer *)((longlong)param_2 + 0xe0))->AllocatedSize;
      iVar4 = *piVar12;
      *(int *)&((FInstancedStructContainer *)((longlong)param_1 + 0xf0))->Memory = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar12 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,iVar4,(ForAnyElementType *)piVar1,iVar3,piVar12);
        if (iVar3 != 0) {
          memcpy(*(void **)piVar1,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    if (&((FInstancedStructContainer *)((longlong)param_1 + 0xf0))->AllocatedSize !=
        &((FInstancedStructContainer *)((longlong)param_2 + 0xf0))->AllocatedSize) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)
                 &((FInstancedStructContainer *)((longlong)param_1 + 0xf0))->AllocatedSize,
                 *(UScriptStruct **)
                  &((FInstancedStructContainer *)((longlong)param_2 + 0xf0))->AllocatedSize,
                 ((FInstancedStructContainer *)((longlong)param_2 + 0x100))->Memory);
    }
    local_res8 = ((FInstancedStructContainer *)((longlong)param_2 + 0x110))->Memory;
    if (0xfffff < (uint)local_res8) {
      local_res18[0] = GetCurrentThreadId();
      if ((local_res8._4_4_ - 1U != local_res18[0]) &&
         (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
        local_70 = local_res18;
        local_68 = &local_res8;
        `FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()
                  (&local_70);
      }
    }
    *(undefined1 *)&((FInstancedStructContainer *)((longlong)param_1 + 0x110))->AllocatedSize = 1;
    TVar11 = MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0,UE::StateTree::Debug::FRuntimeValidationInstanceData_&>
                       ((FRuntimeValidationInstanceData *)&local_res20);
    pFVar2 = (FRuntimeValidationInstanceData *)((longlong)param_1 + 0x120);
    if (TVar11.Ptr != pFVar2) {
      pFVar6 = (pFVar2->NodeStates).AllocatorInstance.Data;
      (pFVar2->NodeStates).AllocatorInstance.Data =
           ((TVar11.Ptr)->NodeStates).AllocatorInstance.Data;
      ((TVar11.Ptr)->NodeStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        (**(code **)(pFVar6 + -0x10))(pFVar6 + -0x10);
      }
    }
    if (local_res20.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(local_res20.Data + -0x10))(local_res20.Data + -0x10);
    }
    param_1 = &((FInstancedStructContainer *)((longlong)param_1 + 0x120))->AllocatedSize;
    param_2 = &((FInstancedStructContainer *)((longlong)param_2 + 0x120))->AllocatedSize;
  }
  return true;
}

// Construct<FStateTreeEvaluatorCommonBase> @ 14d4db740

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEvaluatorCommonBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeEvaluatorCommonBase__6B_;
  return;
}

// ConstructForTests<FStateTreeEvaluatorCommonBase> @ 14d4db7b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeEvaluatorCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeEvaluatorCommonBase__6B_;
  return;
}

// Destruct<FStateTreeEvaluatorCommonBase> @ 14d4db820

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEvaluatorCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeExternalDataHandle> @ 14d4db840

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeExternalDataHandle>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)param_1 = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 4) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// ConstructForTests<FStateTreeExternalDataHandle> @ 14d4db870

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeExternalDataHandle>(void *param_1)

{
  *(undefined4 *)param_1 = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 4) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// Destruct<FStateTreeExternalDataHandle> @ 14d4db890

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeExternalDataHandle>(void *param_1)

{
  return;
}

// Copy<FStateTreeEvaluatorCommonBase> @ 14d4db8e0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEvaluatorCommonBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Copy<FStateTreeExternalDataHandle> @ 14d4db950

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeExternalDataHandle>
          (void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTemporaryInstanceData> @ 14d4db990

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTemporaryInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(ushort *)((longlong)param_1 + 10) = FStateTreeIndex16::Invalid.Value;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FStateTreeTemporaryInstanceData> @ 14d4db9d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeTemporaryInstanceData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 8) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(ushort *)((longlong)param_1 + 10) = FStateTreeIndex16::Invalid.Value;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FStateTreeTemporaryInstanceData> @ 14d4dba10

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTemporaryInstanceData>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FStateTreeTemporaryInstanceData> @ 14d4dba20

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTemporaryInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)((longlong)pvVar1 + 4);
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)((longlong)pvVar1 + 8);
      *(undefined2 *)((longlong)puVar2 + 10) = *(undefined2 *)((longlong)pvVar1 + 10);
      if ((FInstancedStruct *)(puVar2 + 4) != (FInstancedStruct *)((longlong)pvVar1 + 0x10)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar2 + 4),
                   (((FInstancedStruct *)((longlong)pvVar1 + 0x10))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)pvVar1 + 0x18));
      }
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeEvaluatorBase> @ 14d4dbb00

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEvaluatorBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeEvaluatorBase__6B_;
  return;
}

// ConstructForTests<FStateTreeEvaluatorBase> @ 14d4dbb70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeEvaluatorBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeEvaluatorBase__6B_;
  return;
}

// Destruct<FStateTreeEvaluatorBase> @ 14d4dbbe0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeEvaluatorBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Construct<FStateTreeExecutionExtension> @ 14d4dbc00

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeExecutionExtension>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeExecutionExtension__6B_;
  return;
}

// ConstructForTests<FStateTreeExecutionExtension> @ 14d4dbc20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeExecutionExtension>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeExecutionExtension__6B_;
  return;
}

// Destruct<FStateTreeExecutionExtension> @ 14d4dbc80

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeExecutionExtension>(void *param_1)

{
  return;
}

// Copy<FStateTreeEvaluatorBase> @ 14d4dbc90

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeEvaluatorBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Copy<FStateTreeExecutionExtension> @ 14d4dbd00

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeExecutionExtension>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<UE::StateTree::InstanceData::FInstanceContainer> @ 14d4dc1d0

void __cdecl
UE::CoreUObject::Private::Construct<UE::StateTree::InstanceData::FInstanceContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStructContainer::FInstancedStructContainer(param_1);
  return;
}

// ConstructForTests<UE::StateTree::InstanceData::FInstanceContainer> @ 14d4dc1f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<UE::StateTree::InstanceData::FInstanceContainer>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<UE::StateTree::InstanceData::FInstanceContainer> @ 14d4dc200

void __cdecl
UE::CoreUObject::Private::Destruct<UE::StateTree::InstanceData::FInstanceContainer>(void *param_1)

{
  FInstancedStructContainer::Reset(param_1);
  FMemory::Free(*(void **)param_1);
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<UE::StateTree::InstanceData::FInstanceContainer> @ 14d4dc250

bool __cdecl
UE::CoreUObject::Private::Copy<UE::StateTree::InstanceData::FInstanceContainer>
          (void *param_1,void *param_2,int param_3)

{
  FInstancedStructContainer *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FInstancedStructContainer::operator=
                (this,(FInstancedStructContainer *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// AppendToInstanceStructContainer<FConstStructView> @ 14d4dc810

int __cdecl
UE::StateTree::InstanceData::Private::AppendToInstanceStructContainer<FConstStructView>
          (FInstancedStructContainer *param_1,TNotNull<UObject_*> param_2,
          TArrayView<FConstStructView_const_,int> *param_3,bool param_4)

{
  int iVar1;
  TArrayView<FConstStructView_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  iVar1 = param_1->NumItems;
  FInstancedStructContainer::Append(param_1,&local_18);
  PostAppendToInstanceStructContainer(param_1,param_2,param_4,iVar1);
  return iVar1;
}

// AppendToInstanceStructContainer<FInstancedStruct> @ 14d4dc880

int __cdecl
UE::StateTree::InstanceData::Private::AppendToInstanceStructContainer<FInstancedStruct>
          (FInstancedStructContainer *param_1,TNotNull<UObject_*> param_2,
          TArrayView<FInstancedStruct_const_,int> *param_3,bool param_4)

{
  int iVar1;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  iVar1 = param_1->NumItems;
  FInstancedStructContainer::Append(param_1,&local_18);
  PostAppendToInstanceStructContainer(param_1,param_2,param_4,iVar1);
  return iVar1;
}

// CheckStructType<FCompactStateTreeParameters> @ 14d4dc970

void __cdecl UE::StructUtils::CheckStructType<FCompactStateTreeParameters>(void)

{
  return;
}

// CheckStructType<FStateTreeEvent> @ 14d4dc980

void __cdecl UE::StructUtils::CheckStructType<FStateTreeEvent>(void)

{
  return;
}

// DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData> @ 14d4ddd90

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData>
          (void *param_1)

{
  StateTree::Debug::FRuntimeValidationInstanceData::~FRuntimeValidationInstanceData
            ((FRuntimeValidationInstanceData *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x40);
  return;
}

// FindExecutionFrame<FStateTreeExecutionFrame_const_> @ 14d4de920

FStateTreeExecutionFrame * __cdecl
UE::StateTree::ExecutionContext::Private::FindExecutionFrame<FStateTreeExecutionFrame_const_>
          (FActiveFrameID param_1,TArrayView<FStateTreeExecutionFrame_const_,int> *param_2,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_3)

{
  FStateTreeExecutionFrame *pFVar1;
  FStateTreeExecutionFrame *pFVar2;
  
  pFVar2 = param_2->DataPtr;
  pFVar1 = pFVar2 + param_2->ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if ((pFVar2->FrameID).Value == param_1.Value) {
      return pFVar2;
    }
  }
  pFVar2 = param_3->DataPtr;
  pFVar1 = pFVar2 + param_3->ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FStateTreeExecutionFrame *)0x0;
    }
    if ((pFVar2->FrameID).Value == param_1.Value) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// FindExecutionFrame<FStateTreeExecutionFrame> @ 14d4de970

FStateTreeExecutionFrame * __cdecl
UE::StateTree::ExecutionContext::Private::FindExecutionFrame<FStateTreeExecutionFrame>
          (FActiveFrameID param_1,TArrayView<FStateTreeExecutionFrame,int> *param_2,
          TArrayView<FStateTreeExecutionFrame,int> *param_3)

{
  FStateTreeExecutionFrame *pFVar1;
  FStateTreeExecutionFrame *pFVar2;
  
  pFVar2 = param_2->DataPtr;
  pFVar1 = pFVar2 + param_2->ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if ((pFVar2->FrameID).Value == param_1.Value) {
      return pFVar2;
    }
  }
  pFVar2 = param_3->DataPtr;
  pFVar1 = pFVar2 + param_3->ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FStateTreeExecutionFrame *)0x0;
    }
    if ((pFVar2->FrameID).Value == param_1.Value) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetStructPtr<FCompactStateTreeParameters_const_> @ 14d4df040

/* WARNING: Removing unreachable block (ram,0x00014d4df0a3) */

FCompactStateTreeParameters * __cdecl
UE::StructUtils::GetStructPtr<FCompactStateTreeParameters_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FCompactStateTreeParameters::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FCompactStateTreeParameters::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FCompactStateTreeParameters *)0x0;
    }
  }
  return (FCompactStateTreeParameters *)0x0;
}

// GetStructPtr<FCompactStateTreeParameters_const_> @ 14d4df0e0

FCompactStateTreeParameters * __cdecl
UE::StructUtils::GetStructPtr<FCompactStateTreeParameters_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar3 = FCompactStateTreeParameters::StaticStruct();
    if (param_1 == pUVar3) {
      return param_2;
    }
    pUVar3 = FCompactStateTreeParameters::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
  }
  return (FCompactStateTreeParameters *)0x0;
}

// GetStructPtr<FStateTreeTaskBase_const_> @ 14d4df160

/* WARNING: Removing unreachable block (ram,0x00014d4df1c3) */

FStateTreeTaskBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeTaskBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FStateTreeTaskBase::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FStateTreeTaskBase::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FStateTreeTaskBase *)0x0;
    }
  }
  return (FStateTreeTaskBase *)0x0;
}

// GetStructPtr<FStateTreeTaskBase_const_> @ 14d4df200

FStateTreeTaskBase * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeTaskBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar3 = FStateTreeTaskBase::StaticStruct();
    if (param_1 == pUVar3) {
      return param_2;
    }
    pUVar3 = FStateTreeTaskBase::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
  }
  return (FStateTreeTaskBase *)0x0;
}

// GetStructPtr<FCompactStateTreeParameters> @ 14d4df280

/* WARNING: Removing unreachable block (ram,0x00014d4df2e3) */

FCompactStateTreeParameters * __cdecl
UE::StructUtils::GetStructPtr<FCompactStateTreeParameters>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FCompactStateTreeParameters::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FCompactStateTreeParameters::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FCompactStateTreeParameters *)0x0;
    }
  }
  return (FCompactStateTreeParameters *)0x0;
}

// GetStructPtr<FStateTreeExecutionExtension,FStateTreeExecutionExtension> @ 14d4df320

FStateTreeExecutionExtension * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeExecutionExtension,FStateTreeExecutionExtension>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  FStateTreeExecutionExtension *pFVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeExecutionExtension *)0x0;
  }
  local_res8 = param_1;
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar3,
                         L"StateTreeExecutionExtension");
  }
  if (local_res8 != Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar3,
                           L"StateTreeExecutionExtension");
      if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14d4df3d0;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton)->
                 _padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton)->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
LAB_14d4df3d0:
      local_res10[0] = &local_res8;
      bVar2 = `UE::StructUtils::
              GetStructPtr<FStateTreeExecutionExtension,FStateTreeExecutionExtension>'::__l7::
              <lambda_1>::operator()(local_res10);
      pFVar4 = (FStateTreeExecutionExtension *)0x0;
      if (bVar2) {
        pFVar4 = param_2;
      }
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructPtr<FStateTreeInstanceObjectWrapper> @ 14d4df410

/* WARNING: Removing unreachable block (ram,0x00014d4df4c6) */

FStateTreeInstanceObjectWrapper * __cdecl
UE::StructUtils::GetStructPtr<FStateTreeInstanceObjectWrapper>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FStateTreeInstanceObjectWrapper *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,(UObject *)pUVar2
                         ,L"StateTreeInstanceObjectWrapper");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                           (UObject *)pUVar2,L"StateTreeInstanceObjectWrapper");
      if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FStateTreeInstanceObjectWrapper *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)
                 ->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FStateTreeInstanceObjectWrapper *)0x0;
  }
  return param_2;
}

// GetStructRef<FStateTreeConditionBase_const_> @ 14d4df500

FStateTreeConditionBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeConditionBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeConditionBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConditionBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConditionBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeConditionBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeConditionBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeConditionBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeConditionBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeConsiderationBase_const_> @ 14d4df660

FStateTreeConsiderationBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreeConsiderationBase_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeConsiderationBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConsiderationBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeConsiderationBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeConsiderationBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeConsiderationBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeConsiderationBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeConsiderationBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreePropertyFunctionBase_const_> @ 14d4df7c0

FStateTreePropertyFunctionBase * __cdecl
UE::StructUtils::GetStructRef<FStateTreePropertyFunctionBase_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreePropertyFunctionBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreePropertyFunctionBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreePropertyFunctionBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreePropertyFunctionBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreePropertyFunctionBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreePropertyFunctionBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreePropertyFunctionBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeDataHandle> @ 14d4df920

FStateTreeDataHandle * __cdecl
UE::StructUtils::GetStructRef<FStateTreeDataHandle>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeDataHandle *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeDataHandle::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FStateTreeDataHandle::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FStateTreeDataHandle::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FStateTreeExecutionExtension> @ 14d4dfa80

FStateTreeExecutionExtension * __cdecl
UE::StructUtils::GetStructRef<FStateTreeExecutionExtension>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeExecutionExtension *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeExecutionExtension *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeExecutionExtension *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar5,
                         L"StateTreeExecutionExtension");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar5,
                         L"StateTreeExecutionExtension");
    if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d4dfb7b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton)->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4dfb7b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar5,
                         L"StateTreeExecutionExtension");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton,&local_18
             ,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeExecutionExtension *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreeInstanceObjectWrapper> @ 14d4dfc60

FStateTreeInstanceObjectWrapper * __cdecl
UE::StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeInstanceObjectWrapper *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,(UObject *)pUVar5
                         ,L"StateTreeInstanceObjectWrapper");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,(UObject *)pUVar5
                         ,L"StateTreeInstanceObjectWrapper");
    if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d4dfd5b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)->_padding_
     )) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4dfd5b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,(UObject *)pUVar5
                         ,L"StateTreeInstanceObjectWrapper");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton,
             &local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeInstanceObjectWrapper *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreeSharedEvent> @ 14d4dfe40

FStateTreeSharedEvent * __cdecl
UE::StructUtils::GetStructRef<FStateTreeSharedEvent>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeSharedEvent *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeSharedEvent *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeSharedEvent *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSharedEvent,(UObject *)pUVar5,
                         L"StateTreeSharedEvent");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSharedEvent,(UObject *)pUVar5,
                         L"StateTreeSharedEvent");
    if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d4dff3b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d4dff3b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSharedEvent,(UObject *)pUVar5,
                         L"StateTreeSharedEvent");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeSharedEvent *)(*pcVar2)();
  return pFVar4;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_> @ 14d4e0a90

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::StateTree::FActiveFrameID> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::StateTree::FActiveFrameID>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_> @ 14d4e0b30

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_> @ 14d4e0bd0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_> @ 14d4e0c70

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FStateTreeExecutionFrame> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>
  ::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<unsigned_short>_> @ 14d4e0d10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<unsigned_short>_>
          (ushort param_1,ForElementType<unsigned_short> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<unsigned_short>::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<TTuple<unsigned_short,float>_>_> @ 14d4e0dc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<TTuple<unsigned_short,float>_>_>
          (ushort param_1,ForElementType<TTuple<unsigned_short,float>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_> @ 14d4e0e70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
          (ushort param_1,ForElementType<UE::StateTree::FActiveFrameID> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::StateTree::FActiveFrameID>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<UE::StateTree::FActiveState>_> @ 14d4e0f30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<UE::StateTree::FActiveState>_>
          (ushort param_1,ForElementType<UE::StateTree::FActiveState> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x19) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<UE::StateTree::FActiveState>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FCompactStateTreeParameters>_> @ 14d4e0fe0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FCompactStateTreeParameters>_>
          (ushort param_1,ForElementType<FCompactStateTreeParameters> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<FCompactStateTreeParameters>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>_> @ 14d4e1090

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>_>
          (ushort param_1,
          ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_> @ 14d4e1150

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
          (ushort param_1,ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_> @ 14d4e1220

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_>
          (ushort param_1,ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> *param_2
          ,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_> @ 14d4e12f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_>
          (ushort param_1,
          ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_> @ 14d4e13c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_>
          (ushort param_1,ForElementType<FStateTreeExecutionFrame> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeExecutionFrame>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FStateTreeSharedEvent>_> @ 14d4e1490

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FStateTreeSharedEvent>_>
          (ushort param_1,ForElementType<FStateTreeSharedEvent> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<FStateTreeSharedEvent>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>_> @ 14d4e1540

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>_>
          (ushort param_1,ForElementType<FStateTreeSharedEvent> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>_> @ 14d4e1610

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>_>
          (ushort param_1,ForElementType<FStateTreeSharedEvent> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeSharedEvent>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeTransitionDelayedState>_> @ 14d4e16e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeTransitionDelayedState>_>
          (ushort param_1,ForElementType<FStateTreeTransitionDelayedState> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeTransitionDelayedState>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_> @ 14d4e1880

/* WARNING: Removing unreachable block (ram,0x00014d4e18c7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_>
          (ushort param_1,ForElementType<FConstStructView> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_> @ 14d4e1910

/* WARNING: Removing unreachable block (ram,0x00014d4e1957) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_>
          (ushort param_1,
          ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> *param_2,int *param_3
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>_> @ 14d4e19a0

/* WARNING: Removing unreachable block (ram,0x00014d4e19e7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>_>
          (ushort param_1,ForElementType<FStateTreeSharedEvent> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>_> @ 14d4e1a30

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FInstancedStruct_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_> @ 14d4e1ad0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FConstStructView> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<unsigned_short>_> @ 14d4e1b70

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,ForElementType<unsigned_short> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<unsigned_short>::ResizeAllocation(param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<TTuple<unsigned_short,float>_>_> @ 14d4e1c00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<TTuple<unsigned_short,float>_>_>
          (uint param_1,uint param_2,ForElementType<TTuple<unsigned_short,float>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
    ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation
              (param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_> @ 14d4e1c90

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
          (uint param_1,uint param_2,ForElementType<UE::StateTree::FActiveFrameID> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::StateTree::FActiveFrameID>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>_> @ 14d4e1d50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>_>
          (uint param_1,uint param_2,
          ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeExecutionContext::FEvaluationScopeDataCache>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_> @ 14d4e1e10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_>
          (uint param_1,uint param_2,
          ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<unsigned_short>_> @ 14d4e1ed0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_short> *param_4,int param_5
          ,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x10, 0x10 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
  ForElementType<unsigned_short>::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<TTuple<unsigned_short,float>_>_> @ 14d4e1f10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<TTuple<unsigned_short,float>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<unsigned_short,float>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x10, 0x10 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::
  ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_> @ 14d4e1f50

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::StateTree::FActiveFrameID> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::StateTree::FActiveFrameID>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_> @ 14d4e1fd0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>_> @ 14d4e2050

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FInstancedStruct_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_> @ 14d4e2080

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FConstStructView> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_> @ 14d4e20b0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
    ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>_> @ 14d4e20e0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FStateTreeSharedEvent> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// Add @ 14d4eef20

void __cdecl
UE::StateTree::InstanceData::Private::Add
          (FEvaluationScopeMemoryRequirement *param_1,TNotNull<UScriptStruct_const_*> param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)*(short *)((longlong)&(param_2.Val)->_padding_ + 4);
  lVar1 = (param_2.Val)->_padding_;
  iVar2 = param_1->Alignment;
  if (param_1->Alignment < iVar3) {
    iVar2 = iVar3;
  }
  param_1->Alignment = iVar2;
  param_1->Size = ((int)lVar1 + -1 + iVar3 & -iVar3) + 4U + (iVar3 + -1 + param_1->Size & -iVar3);
  return;
}

// AreAllInstancesValid @ 14d4f0720

bool __cdecl
UE::StateTree::InstanceData::Private::AreAllInstancesValid(FInstancedStructContainer *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong lVar9;
  UPackage *pUVar10;
  UScriptStruct *pUVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = param_1->NumItems;
  iVar13 = 0;
  if (iVar1 != 0) {
    iVar12 = 0;
    pUVar11 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton;
    do {
      if (((param_1->NumItems < 1) || (param_1->NumItems <= iVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""),
         pUVar11 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton,
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      puVar4 = param_1->Memory;
      lVar9 = (longlong)(param_1->AllocatedSize - iVar12);
      iVar2 = *(int *)(puVar4 + lVar9 + -8);
      pUVar5 = *(UScriptStruct **)(puVar4 + lVar9 + -0x10);
      if ((longlong *)(puVar4 + iVar2) == (longlong *)0x0) {
        return false;
      }
      if (pUVar5 == (UScriptStruct *)0x0) {
        return false;
      }
      if (pUVar11 == (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
        pUVar11 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                  (UObject *)pUVar10,L"StateTreeInstanceObjectWrapper");
        Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton = pUVar11;
      }
      if (pUVar5 == pUVar11) {
LAB_14d4f0835:
        if (*(longlong *)(puVar4 + iVar2) == 0) {
          return false;
        }
      }
      else if (pUVar11 == (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
        pUVar11 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                  (UObject *)pUVar10,L"StateTreeInstanceObjectWrapper");
        Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton = pUVar11;
        if (pUVar11 != (UScriptStruct *)0x0) goto LAB_14d4f0811;
      }
      else {
LAB_14d4f0811:
        iVar3 = (int)pUVar11->_padding_;
        if (((int)pUVar5->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar11->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) goto LAB_14d4f0835;
      }
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar13 != iVar1);
  }
  return true;
}

// CastToRunStatus @ 14d4f1c70

EStateTreeRunStatus __cdecl
UE::StateTree::ExecutionContext::CastToRunStatus(EStateTreeFinishTaskType param_1)

{
  return (param_1 != Succeeded) + Succeeded;
}

// CastToRunStatus @ 14d4f1c80

EStateTreeRunStatus __cdecl
UE::StateTree::ExecutionContext::CastToRunStatus(ETaskCompletionStatus param_1)

{
  return param_1;
}

// CastToTaskStatus @ 14d4f1c90

ETaskCompletionStatus __cdecl
UE::StateTree::ExecutionContext::CastToTaskStatus(EStateTreeFinishTaskType param_1)

{
  return (param_1 != Succeeded) + Succeeded;
}

// CastToTaskStatus @ 14d4f1ca0

ETaskCompletionStatus __cdecl
UE::StateTree::ExecutionContext::CastToTaskStatus(EStateTreeRunStatus param_1)

{
  ETaskCompletionStatus EVar1;
  
  EVar1 = Running;
  if (param_1 != Unset) {
    EVar1 = param_1;
  }
  return EVar1;
}

// CleanFrame @ 14d4f1cc0

void __cdecl
UE::StateTree::ExecutionContext::Private::CleanFrame
          (FStateTreeExecutionState *param_1,FActiveFrameID param_2)

{
  FStateTreeDelegateActiveListeners *this;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  this = &param_1->DelegateActiveListeners;
  if ((param_1->DelegateActiveListeners).BroadcastingLockCount != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,0x151,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar6 = (param_1->DelegateActiveListeners).Listeners.ArrayNum;
  bVar2 = false;
  uVar5 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar6) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(uint *)((this->Listeners).AllocatorInstance.Data + lVar7 + 0x30) == param_2.Value) {
        bVar2 = true;
        uVar4 = 0;
        if ((int)uVar5 < (param_1->DelegateActiveListeners).Listeners.ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->Listeners,uVar5);
      }
      else {
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x40;
      }
      iVar6 = (param_1->DelegateActiveListeners).Listeners.ArrayNum;
    } while ((int)uVar5 < iVar6);
    if (bVar2) {
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,(ForAnyElementType *)this,iVar6,
                 &(param_1->DelegateActiveListeners).Listeners.ArrayMax);
    }
  }
  return;
}

// CleanState @ 14d4f1e20

void __cdecl
UE::StateTree::ExecutionContext::Private::CleanState
          (FStateTreeExecutionState *param_1,FActiveStateID param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if ((param_1->DelegateActiveListeners).BroadcastingLockCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BroadcastingLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                       ,0x15a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar11 = (param_1->DelegateActiveListeners).Listeners.ArrayNum;
  bVar3 = false;
  uVar9 = 0;
  if (0 < iVar11) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar11) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(uint *)((param_1->DelegateActiveListeners).Listeners.AllocatorInstance.Data +
                   lVar6 + 0x34) == param_2.Value) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar9 < (param_1->DelegateActiveListeners).Listeners.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&(param_1->DelegateActiveListeners).Listeners,uVar9);
      }
      else {
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x40;
      }
      iVar11 = (param_1->DelegateActiveListeners).Listeners.ArrayNum;
    } while ((int)uVar9 < iVar11);
    if (bVar3) {
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,(ForAnyElementType *)&param_1->DelegateActiveListeners,iVar11,
                 &(param_1->DelegateActiveListeners).Listeners.ArrayMax);
    }
  }
  iVar11 = (param_1->DelayedTransitions).ArrayNum;
  lVar6 = (longlong)iVar11;
  if (iVar11 != 0) {
    pFVar1 = (param_1->DelayedTransitions).AllocatorInstance.Data;
    iVar12 = 0;
    bVar3 = *(uint *)pFVar1 != param_2.Value;
    lVar10 = 0;
    iVar11 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar8 = iVar11 + 1;
      if (lVar10 < lVar6) {
        pFVar7 = pFVar1 + lVar10 * 0x30;
        do {
          if (bVar3 != (*(uint *)pFVar7 != param_2.Value)) break;
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
          pFVar7 = pFVar7 + 0x30;
        } while (lVar10 < lVar6);
      }
      iVar13 = iVar8 - iVar11;
      if (bVar3 == false) {
        DestructItems<FStateTreeTransitionDelayedState,int>
                  ((FStateTreeTransitionDelayedState *)(pFVar1 + (longlong)iVar11 * 0x30),iVar13);
      }
      else {
        if (iVar12 != iVar11) {
          memmove(pFVar1 + (longlong)iVar12 * 0x30,pFVar1 + (longlong)iVar11 * 0x30,
                  (longlong)iVar13 * 0x30);
        }
        iVar12 = iVar12 + iVar13;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar11 = iVar8;
    } while (lVar10 < lVar6);
    (param_1->DelayedTransitions).ArrayNum = iVar12;
  }
  return;
}

// CopyNodeInstance @ 14d4f36b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TNotNull<UObject_*> __cdecl
UE::StateTree::InstanceData::Private::CopyNodeInstance
          (TNotNull<UObject_*> param_1,TNotNull<UObject_*> param_2,bool param_3)

{
  longlong *plVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UObject *this;
  longlong *plVar5;
  ForAnyElementType FVar6;
  undefined7 in_register_00000081;
  char in_R9B;
  ForAnyElementType FVar7;
  undefined1 auStack_3e8 [32];
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  FName local_3b8;
  UObject *local_3b0;
  void *local_3a8;
  undefined8 local_3a0;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FArchiveState local_358;
  undefined8 local_2c8;
  void **local_2c0;
  undefined8 local_2b8;
  FArchiveState local_2a8;
  undefined8 local_218;
  void **local_210;
  undefined8 local_208;
  FObjectAndNameAsStringProxyArchive local_1f8;
  FObjectAndNameAsStringProxyArchive local_158;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  pUVar4 = (UObject *)CONCAT71(in_register_00000081,param_3);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  plVar1 = *(longlong **)&(param_2.Val)->field_0x10;
  if (*(int *)((longlong)plVar1 + 0xd4) < 0) {
    pUVar2 = (UClass *)(**(code **)(*plVar1 + 0x368))(plVar1);
    local_3b8.ComparisonIndex.Value = 0;
    local_3b8.Number = 0;
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UObject_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar2);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    local_3b0 = pUVar4;
    if (local_b8._64_8_ != 0) {
      plVar5 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    local_3a8 = (void *)0x0;
    local_3a0 = 0;
    local_358._padding_ = 0;
    local_358.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_3b8.ComparisonIndex.Value = 0;
    local_3b8.Number = 0;
    local_358.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_358.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_358.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_358._40_8_ = 0;
    local_358.ArSerializingDefaults = 0;
    local_358.ArPortFlags = 0;
    local_358.ArMaxSerializeSize = 0;
    local_358.ArUEVer.FileVersionUE4 = 0;
    local_358.ArUEVer.FileVersionUE5 = 0;
    local_358.ArLicenseeUEVer = 0;
    local_358.ArEngineVer.Major = 0;
    local_358.ArEngineVer.Minor = 0;
    local_358.ArEngineVer.Patch = 0;
    local_358.ArEngineVer._6_2_ = 0;
    local_358.ArEngineVer.Changelist = 0;
    local_358.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_358.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_358.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_358.SerializedProperty = (FProperty *)0x0;
    local_358.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_358.bCustomVersionsAreReset = false;
    local_358._129_7_ = 0;
    local_358.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_358);
    local_2c8 = 0;
    local_358._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_2c0 = &local_3a8;
    local_2b8 = 0;
    FArchiveState::SetIsSaving(&local_358,true);
    (**(code **)(local_358._padding_ + 0x108))(&local_358,0);
    local_358._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
              (&local_158,(FArchive *)&local_358,true);
    (**(code **)(*(longlong *)param_2.Val + 200))(param_2.Val,&local_158);
    local_2a8._padding_ = 0;
    local_2a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_2a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_2a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_2a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_2a8._40_8_ = 0;
    local_2a8.ArSerializingDefaults = 0;
    local_2a8.ArPortFlags = 0;
    local_2a8.ArMaxSerializeSize = 0;
    local_2a8.ArUEVer.FileVersionUE4 = 0;
    local_2a8.ArUEVer.FileVersionUE5 = 0;
    local_2a8.ArLicenseeUEVer = 0;
    local_2a8.ArEngineVer.Major = 0;
    local_2a8.ArEngineVer.Minor = 0;
    local_2a8.ArEngineVer.Patch = 0;
    local_2a8.ArEngineVer._6_2_ = 0;
    local_2a8.ArEngineVer.Changelist = 0;
    local_2a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_2a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_2a8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_2a8.SerializedProperty = (FProperty *)0x0;
    local_2a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_2a8.bCustomVersionsAreReset = false;
    local_2a8._129_7_ = 0;
    local_2a8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_2a8);
    local_218 = 0;
    local_2a8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_210 = &local_3a8;
    local_208 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_2a8,true);
    (**(code **)(local_2a8._padding_ + 0x108))(&local_2a8,0);
    FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
              (&local_1f8,(FArchive *)&local_2a8,true);
    (**(code **)(*(longlong *)pUVar4 + 200))(pUVar4,&local_1f8);
    pUVar3 = Z_Construct_UClass_UStateTree_NoRegister();
    this = UObjectBaseUtility::GetTypedOuter(param_2.Val,pUVar3);
    if (3 < (byte)LogStateTree._0_1_) {
      if ((this == (UObject *)0x0) || (*(longlong *)&this->field_0x10 == 0)) {
        ::FString::FString(&local_378,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_378,(UObject *)0x0,None);
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_378.Data.ArrayNum != 0) {
        FVar6.Data = local_378.Data.AllocatorInstance.Data;
      }
      if (pUVar2 == (UClass *)0x0) {
        ::FString::FString(&local_388,L"None");
      }
      else {
        local_3b8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_3b8,&local_388);
      }
      local_3b8 = *(FName *)(plVar1 + 3);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_388.Data.ArrayNum != 0) {
        FVar7.Data = local_388.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&local_3b8,&local_368);
      if (*(longlong *)&(param_2.Val)->field_0x10 == 0) {
        ::FString::FString(&local_398,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2.Val,&local_398,(UObject *)0x0,None);
      }
      local_3c8 = FVar7.Data;
      local_3c0 = FVar6.Data;
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      pUVar4 = local_3b0;
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
        pUVar4 = local_3b0;
      }
    }
    *(UObject **)param_1.Val = pUVar4;
    FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_1f8);
    FArchive::~FArchive((FArchive *)&local_2a8);
    FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_158);
    FArchive::~FArchive((FArchive *)&local_358);
    if (local_3a8 != (void *)0x0) {
      FMemory::Free(local_3a8);
    }
  }
  else if (in_R9B == '\0') {
    *(UObject **)param_1.Val = param_2.Val;
  }
  else {
    local_3b0 = (UObject *)0x0;
    pUVar2 = Z_Construct_UClass_UObject_NoRegister();
    pUVar4 = DuplicateObject_Internal(pUVar2,param_2.Val,pUVar4,(FName)0x0);
    *(UObject **)param_1.Val = pUVar4;
    if (pUVar4 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
  }
  return (TNotNull<UObject_*>)param_1.Val;
}

// FindStateTreeFrame @ 14d4f8f10

FCompactStateTreeFrame * __cdecl
UE::StateTree::ExecutionContext::Private::FindStateTreeFrame(FExecutionFrameHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCompactStateTreeFrame *pFVar3;
  undefined1 local_res8 [32];
  
  if (((param_1->RootState).Index == 0xffff) ||
     ((param_1->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                       ,0x86,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCompactStateTreeFrame *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = UStateTree::GetFrameFromHandle
                     ((param_1->StateTree).field0_0x0.DebugPtr,
                      (FStateTreeStateHandle)(param_1->RootState).Index);
  if (pFVar3 == (FCompactStateTreeFrame *)0x0) {
    `UE::StateTree::ExecutionContext::Private::FindStateTreeFrame'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  return pFVar3;
}

// GetActiveStatePath @ 14d4fbd60

void __cdecl
UE::StateTree::ExecutionContext::Private::GetActiveStatePath
          (TArrayView<FStateTreeExecutionFrame_const_,int> *param_1,
          TArray<UE::StateTree::FActiveState,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
          *param_2)

{
  uchar *puVar1;
  ushort uVar2;
  uint uVar3;
  TArray<UE::StateTree::FActiveState,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
  *pTVar4;
  int iVar5;
  FStateTreeExecutionFrame *pFVar6;
  int iVar7;
  TArray<UE::StateTree::FActiveState,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
  *pTVar8;
  FStateTreeExecutionFrame *pFVar9;
  FStateTreeActiveStates *pFVar10;
  FStateTreeStateHandle *pFVar11;
  
  iVar7 = param_1->ArrayNum;
  if ((iVar7 != 0) &&
     (pFVar6 = TArrayView<FStateTreeExecutionFrame_const_,int>::operator[](param_1,0),
     (pFVar6->StateTree).field0_0x0.DebugPtr != (UStateTree *)0x0)) {
    pFVar6 = param_1->DataPtr;
    pFVar9 = pFVar6 + iVar7;
    for (; pFVar6 != pFVar9; pFVar6 = pFVar6 + 1) {
      iVar7 = 0;
      if ((pFVar6->ActiveStates).NumStates != '\0') {
        pFVar10 = &pFVar6->ActiveStates;
        pFVar11 = (pFVar6->ActiveStates).States;
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == param_2->ArrayMax) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<UE::StateTree::FActiveState>_>
                              (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar4 = (TArray<UE::StateTree::FActiveState,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                    *)(param_2->AllocatorInstance).SecondaryData.Data;
          uVar2 = pFVar11->Index;
          uVar3 = pFVar10->StateIDs[0].Value;
          pTVar8 = param_2;
          if (pTVar4 != (TArray<UE::StateTree::FActiveState,TSizedInlineAllocator<24,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                         *)0x0) {
            pTVar8 = pTVar4;
          }
          iVar7 = iVar7 + 1;
          pFVar11 = pFVar11 + 1;
          pFVar10 = (FStateTreeActiveStates *)(pFVar10->StateIDs + 1);
          puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar5 * 0xc;
          *(uint *)puVar1 = (pFVar6->FrameID).Value;
          *(uint *)(puVar1 + 4) = uVar3;
          *(ushort *)(puVar1 + 8) = uVar2;
        } while (iVar7 < (int)(uint)(pFVar6->ActiveStates).NumStates);
      }
    }
  }
  return;
}

// GetAllocatedMemory @ 14d4fbe70

int __cdecl
UE::StateTree::InstanceData::Private::GetAllocatedMemory(FInstancedStructContainer *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  UScriptStruct *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = param_1->NumItems;
  iVar11 = 0;
  iVar13 = param_1->AllocatedSize;
  if (iVar6 != 0) {
    iVar10 = 0;
    pUVar8 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton;
    do {
      if (((param_1->NumItems < 1) || (param_1->NumItems <= iVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""),
         pUVar8 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton,
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      puVar2 = param_1->Memory;
      lVar9 = (longlong)(param_1->AllocatedSize - iVar10);
      iVar12 = *(int *)(puVar2 + lVar9 + -8);
      if (((longlong *)(puVar2 + iVar12) != (longlong *)0x0) &&
         (pUVar3 = *(UScriptStruct **)(puVar2 + lVar9 + -0x10), pUVar3 != (UScriptStruct *)0x0)) {
        if (pUVar8 == (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
          pUVar8 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                   (UObject *)pUVar7,L"StateTreeInstanceObjectWrapper");
          Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton = pUVar8;
        }
        if (pUVar3 != pUVar8) {
          if (pUVar8 == (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
            pUVar8 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                     (UObject *)pUVar7,L"StateTreeInstanceObjectWrapper");
            Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                 pUVar8;
            if (pUVar8 == (UScriptStruct *)0x0) goto LAB_14d4fbfb4;
          }
          iVar1 = (int)pUVar8->_padding_;
          if (((int)pUVar3->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_14d4fbfb4;
        }
        lVar9 = *(longlong *)(puVar2 + iVar12);
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x10);
          iVar12 = (int)*(short *)(lVar9 + 0x5c);
          iVar13 = iVar13 + (iVar12 + -1 + *(int *)(lVar9 + 0x58) & -iVar12);
        }
      }
LAB_14d4fbfb4:
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar11 != iVar6);
  }
  return iVar13;
}

// GetDataView @ 14d4fc8b0

/* WARNING: Type propagation algorithm not settling */

FStateTreeDataView * __cdecl
UE::StateTree::InstanceData::GetDataView
          (FStateTreeDataView *__return_storage_ptr__,FStateTreeInstanceStorage *param_1,
          FStateTreeInstanceStorage *param_2,FStateTreeExecutionFrame *param_3,
          FStateTreeExecutionFrame *param_4,FStateTreeDataHandle *param_5)

{
  UObject *pUVar1;
  longlong lVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  FStateTreeEvent *pFVar5;
  code *pcVar6;
  bool bVar7;
  FConstStructView *pFVar8;
  FStateTreeInstanceObjectWrapper *pFVar9;
  FStateTreeDataHandle *pFVar10;
  FCompactStateTreeParameters *pFVar11;
  FStateTreeSharedEvent *pFVar12;
  UPackage *pUVar13;
  UEnum *this;
  FStateTreeDataView *pFVar14;
  FStructView *this_00;
  int iVar15;
  FString local_b8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_a8;
  uchar *local_a0;
  TObjectPtr<UScriptStruct_const_>_u_0 local_98;
  uchar *local_90;
  FStructView local_88;
  FStructView local_78;
  FStructView local_68;
  FStructView local_58;
  FConstStructView local_48;
  FConstStructView local_38;
  FConstStructView local_28;
  
  pFVar10 = param_5;
  switch(param_5->Source) {
  case GlobalInstanceData:
    FInstancedStructContainer::operator[]
              (&param_1->InstanceStructs,(FStructView *)&local_a8.ObjectPtr,
               (uint)(param_4->GlobalInstanceIndexBase).Value + (uint)param_5->Index);
    local_90 = local_a0;
    local_98 = local_a8;
    break;
  case GlobalInstanceDataObject:
    pFVar8 = FInstancedStructContainer::operator[]
                       (&param_1->InstanceStructs,&local_48,
                        (uint)(param_4->GlobalInstanceIndexBase).Value + (uint)param_5->Index);
    pFVar9 = StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper_const_>
                       (pFVar8->ScriptStruct,pFVar8->StructMemory);
    pUVar1 = (pFVar9->InstanceObject).field0_0x0.DebugPtr;
    if (pUVar1 != (UObject *)0x0) {
      lVar2 = *(longlong *)&pUVar1->field_0x10;
      *(longlong *)__return_storage_ptr__ = lVar2;
      *(UObject **)&__return_storage_ptr__->field_0x8 = pUVar1;
      if (lVar2 != 0) {
        return __return_storage_ptr__;
      }
      iVar15 = 0x24;
      goto LAB_14d4fcc50;
    }
    goto LAB_14d4fc98e;
  case ActiveInstanceData:
    FInstancedStructContainer::operator[]
              (&param_1->InstanceStructs,(FStructView *)&local_98.ObjectPtr,
               (uint)(param_4->ActiveInstanceIndexBase).Value + (uint)param_5->Index);
    break;
  case ActiveInstanceDataObject:
    pFVar8 = FInstancedStructContainer::operator[]
                       (&param_1->InstanceStructs,&local_38,
                        (uint)(param_4->ActiveInstanceIndexBase).Value + (uint)param_5->Index);
    pFVar9 = StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper_const_>
                       (pFVar8->ScriptStruct,pFVar8->StructMemory);
    pUVar1 = (pFVar9->InstanceObject).field0_0x0.DebugPtr;
    if (pUVar1 != (UObject *)0x0) {
      lVar2 = *(longlong *)&pUVar1->field_0x10;
      *(longlong *)__return_storage_ptr__ = lVar2;
      *(UObject **)&__return_storage_ptr__->field_0x8 = pUVar1;
      if (lVar2 != 0) {
        return __return_storage_ptr__;
      }
      iVar15 = 0x24;
      goto LAB_14d4fcc50;
    }
    goto LAB_14d4fc98e;
  case SharedInstanceData:
    if ((param_2 == (FStateTreeInstanceStorage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedInstanceStorage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                           ,0x12e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FStateTreeDataView *)(*pcVar6)();
      return pFVar14;
    }
    FInstancedStructContainer::operator[](&param_2->InstanceStructs,&local_88,(uint)pFVar10->Index);
    *(UScriptStruct **)__return_storage_ptr__ = local_88.ScriptStruct;
    *(uchar **)&__return_storage_ptr__->field_0x8 = local_88.StructMemory;
    if (local_88.StructMemory == (uchar *)0x0) {
      return __return_storage_ptr__;
    }
    if (local_88.ScriptStruct != (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
    iVar15 = 0x2b;
    goto LAB_14d4fcc50;
  case SharedInstanceDataObject:
    if ((param_2 == (FStateTreeInstanceStorage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedInstanceStorage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                           ,0x131,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FStateTreeDataView *)(*pcVar6)();
      return pFVar14;
    }
    pFVar8 = FInstancedStructContainer::operator[]
                       (&param_2->InstanceStructs,&local_28,(uint)pFVar10->Index);
    pFVar9 = StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper_const_>
                       (pFVar8->ScriptStruct,pFVar8->StructMemory);
    pUVar1 = (pFVar9->InstanceObject).field0_0x0.DebugPtr;
    if (pUVar1 != (UObject *)0x0) {
      lVar2 = *(longlong *)&pUVar1->field_0x10;
      *(longlong *)__return_storage_ptr__ = lVar2;
      *(UObject **)&__return_storage_ptr__->field_0x8 = pUVar1;
      if (lVar2 != 0) {
        return __return_storage_ptr__;
      }
      iVar15 = 0x24;
      goto LAB_14d4fcc50;
    }
LAB_14d4fc98e:
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
LAB_14d4fcd10:
    *(undefined8 *)__return_storage_ptr__ = 0;
    return __return_storage_ptr__;
  default:
    this = StaticEnum<enum_EStateTreeDataSourceType>();
    if ((this == (UEnum *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FStateTreeDataView *)(*pcVar6)();
      return pFVar14;
    }
    UEnum::GetNameByValue(this,(long64)&param_5);
    ::FName::ToString((FName *)&param_5,&local_b8);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                       ,0x15c,L"Unhandled case or unsupported type for InstanceDataStorage %s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
LAB_14d4fcd06:
    if (bVar7 != false) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FStateTreeDataView *)(*pcVar6)();
      return pFVar14;
    }
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    goto LAB_14d4fcd10;
  case GlobalParameterData:
    if (param_3 != (FStateTreeExecutionFrame *)0x0) {
      pFVar10 = &param_4->GlobalParameterDataHandle;
LAB_14d4fcb05:
      GetDataView(__return_storage_ptr__,param_1,param_2,(FStateTreeExecutionFrame *)0x0,param_3,
                  pFVar10);
      return __return_storage_ptr__;
    }
    local_98 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (param_1->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr;
    local_90 = (param_1->GlobalParameters).Value.StructMemory;
    break;
  case SubtreeParameterData:
    if (param_3 != (FStateTreeExecutionFrame *)0x0) {
      pFVar10 = &param_4->StateParameterDataHandle;
      goto LAB_14d4fcb05;
    }
    FInstancedStructContainer::operator[]
              (&param_1->InstanceStructs,&local_68,
               (uint)(param_4->ActiveInstanceIndexBase).Value + (uint)param_5->Index);
    this_00 = &local_68;
    goto LAB_14d4fcb60;
  case StateParameterData:
    FInstancedStructContainer::operator[]
              (&param_1->InstanceStructs,&local_58,
               (uint)(param_4->ActiveInstanceIndexBase).Value + (uint)param_5->Index);
    this_00 = &local_58;
LAB_14d4fcb60:
    pFVar11 = FStructView::Get<FCompactStateTreeParameters>(this_00);
    puVar3 = (pFVar11->Parameters).Value.StructMemory;
    pUVar4 = (pFVar11->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr;
    *(UScriptStruct **)__return_storage_ptr__ = pUVar4;
    *(uchar **)&__return_storage_ptr__->field_0x8 = puVar3;
    if (puVar3 == (uchar *)0x0) {
      return __return_storage_ptr__;
    }
    bVar7 = pUVar4 == (UScriptStruct *)0x0;
    goto LAB_14d4fcc3d;
  case StateEvent:
    FInstancedStructContainer::operator[]
              (&param_1->InstanceStructs,&local_78,
               (uint)(param_4->ActiveInstanceIndexBase).Value + (uint)param_5->Index);
    pFVar12 = StructUtils::GetStructRef<FStateTreeSharedEvent>
                        (local_78.ScriptStruct,local_78.StructMemory);
    pFVar5 = (pFVar12->Event).Object;
    if (pFVar5 == (FStateTreeEvent *)0x0) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8229051893393915565>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                         ,0x153,"SharedEvent.IsValid()");
      goto LAB_14d4fcd06;
    }
    if (Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvent,(UObject *)pUVar13,
                           L"StateTreeEvent");
    }
    pUVar4 = Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton;
    *(UScriptStruct **)__return_storage_ptr__ =
         Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton;
    bVar7 = pUVar4 == (UScriptStruct *)0x0;
    *(FStateTreeEvent **)&__return_storage_ptr__->field_0x8 = pFVar5;
    goto LAB_14d4fcc3d;
  }
  *(TObjectPtr<UScriptStruct_const_>_u_0 *)__return_storage_ptr__ = local_98;
  *(uchar **)&__return_storage_ptr__->field_0x8 = local_90;
  if (local_90 == (uchar *)0x0) {
    return __return_storage_ptr__;
  }
  bVar7 = local_98.DebugPtr == (UScriptStruct *)0x0;
LAB_14d4fcc3d:
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  iVar15 = 0x2b;
LAB_14d4fcc50:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Memory || (Memory && Struct)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,iVar15,L"");
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  pcVar6 = (code *)swi(3);
  pFVar14 = (FStateTreeDataView *)(*pcVar6)();
  return pFVar14;
}

// GetDataViewOrTemporary @ 14d4fcf80

FStateTreeDataView * __cdecl
UE::StateTree::InstanceData::GetDataViewOrTemporary
          (FStateTreeDataView *__return_storage_ptr__,FStateTreeInstanceStorage *param_1,
          FStateTreeInstanceStorage *param_2,FStateTreeExecutionFrame *param_3,
          FStateTreeExecutionFrame *param_4,FStateTreeDataHandle *param_5)

{
  bool bVar1;
  
  bVar1 = Private::IsHandleSourceValid(param_1,param_3,param_4,param_5);
  if (bVar1) {
    GetDataView(__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    Private::GetTemporaryDataView(__return_storage_ptr__,param_1,param_3,param_4,param_5);
  }
  return __return_storage_ptr__;
}

// GetPriorityRunStatus @ 14d4ff260

EStateTreeRunStatus __cdecl
UE::StateTree::ExecutionContext::GetPriorityRunStatus
          (EStateTreeRunStatus param_1,EStateTreeRunStatus param_2)

{
  if (PriorityMatrix[param_2] < PriorityMatrix[param_1]) {
    param_2 = param_1;
  }
  return param_2;
}

// GetStatePathAsString @ 14d4ff930

FString * __cdecl
UE::StateTree::ExecutionContext::Private::GetStatePathAsString
          (FString *__return_storage_ptr__,TNotNull<UStateTree_const_*> param_1,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_2)

{
  TOptional<FString>_u_0 local_18;
  
  FActiveStatePath::Describe((TValueOrError<FString,void> *)&local_18.TypedValue,param_1,param_2);
  if (local_18.TypedValue.Data.ArrayMax != -1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)local_18.TypedValue.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.TypedValue.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.TypedValue.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatesListToState @ 14d4ffe00

bool __cdecl
UE::StateTree::ExecutionContext::Private::GetStatesListToState
          (FStateHandleContext *param_1,
          TArray<UE::StateTree::ExecutionContext::FStateHandleContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> FVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> FVar12;
  ulonglong uVar13;
  UStateTree *local_28;
  ulonglong uStack_20;
  UStateTree *local_18;
  undefined2 uStack_10;
  undefined6 uStack_e;
  
  local_28 = param_1->StateTree;
  uStack_20 = *(ulonglong *)&param_1->StateHandle;
  while( true ) {
    if ((local_28 == (UStateTree *)0x0) || ((ushort)uStack_20 == -1)) {
      FVar9 = (param_2->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)param_2;
      if (FVar9 != (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)0x0) {
        FVar12 = FVar9;
      }
      iVar8 = param_2->ArrayNum / 2;
      lVar11 = (longlong)iVar8;
      if (0 < iVar8) {
        puVar10 = (undefined8 *)((longlong)(param_2->ArrayNum + -1) * 0x10 + (longlong)FVar12);
        do {
          uVar3 = puVar10[1];
          uVar4 = *(undefined8 *)FVar12;
          uVar5 = *(undefined8 *)((longlong)FVar12 + 8);
          *(undefined8 *)FVar12 = *puVar10;
          *(undefined8 *)((longlong)FVar12 + 8) = uVar3;
          FVar12 = (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)
                   ((longlong)FVar12 + 0x10);
          *puVar10 = uVar4;
          puVar10[1] = uVar5;
          lVar11 = lVar11 + -1;
          puVar10 = puVar10 + -2;
        } while (lVar11 != 0);
      }
      return true;
    }
    if (param_2->ArrayNum == 8) {
      return false;
    }
    FVar12 = (param_2->AllocatorInstance).SecondaryData;
    FVar9 = (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)param_2;
    if (FVar12 != (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)0x0) {
      FVar9 = FVar12;
    }
    if ((ulonglong)FVar9 <= &local_28) {
      FVar9 = (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)param_2;
      if (FVar12 != (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)0x0) {
        FVar9 = FVar12;
      }
      if ((&local_28 < (UStateTree **)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>_>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    FVar12 = (param_2->AllocatorInstance).SecondaryData;
    FVar9 = (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)param_2;
    if (FVar12 != (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>)0x0) {
      FVar9 = FVar12;
    }
    puVar10 = (undefined8 *)((longlong)FVar9 + (longlong)iVar8 * 0x10);
    *puVar10 = local_28;
    puVar10[1] = uStack_20;
    iVar8 = (local_28->States).ArrayNum;
    pFVar1 = (local_28->States).AllocatorInstance.Data;
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) break;
    uVar13 = uStack_20 & 0xffff;
    if ((iVar8 <= (int)(uint)(ushort)uStack_20) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (local_28 == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    uStack_10 = *(undefined2 *)(pFVar1 + uVar13 * 0x78 + 0x42);
    uStack_20 = CONCAT62(uStack_e,uStack_10);
    local_18 = local_28;
  }
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return (bool)uVar7;
}

// GetTemporaryDataView @ 14d500120

FStateTreeDataView * __cdecl
UE::StateTree::InstanceData::Private::GetTemporaryDataView
          (FStateTreeDataView *__return_storage_ptr__,FStateTreeInstanceStorage *param_1,
          FStateTreeExecutionFrame *param_2,FStateTreeExecutionFrame *param_3,
          FStateTreeDataHandle *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  UObject *pUVar13;
  longlong *plVar14;
  UScriptStruct *pUVar15;
  code *pcVar16;
  bool bVar17;
  FScriptContainerElement *pFVar18;
  FStateTreeInstanceObjectWrapper *pFVar19;
  FScriptContainerElement *pFVar20;
  UScriptStruct *pUVar21;
  longlong lVar22;
  UEnum *this;
  FStateTreeDataView *pFVar23;
  longlong lVar24;
  int iVar25;
  FScriptContainerElement local_88;
  short sStack_86;
  FScriptContainerElement local_78;
  short sStack_76;
  FScriptContainerElement local_68;
  short sStack_66;
  FScriptContainerElement local_58;
  short sStack_56;
  FScriptContainerElement local_48;
  short sStack_46;
  FName local_38;
  FString local_30;
  
  switch(param_4->Source) {
  case GlobalInstanceData:
  case ActiveInstanceData:
    uVar1 = param_4->Source;
    uVar7 = param_4->Index;
    pFVar20 = (param_1->TemporaryInstances).AllocatorInstance.Data;
    pFVar18 = pFVar20 + (longlong)(param_1->TemporaryInstances).ArrayNum * 0x20;
    if (pFVar20 != pFVar18) {
      do {
        if (((*(uint *)pFVar20 == (param_3->FrameID).Value) &&
            (pFVar20[4] == (FScriptContainerElement)uVar1)) &&
           ((*(short *)(pFVar20 + 6) == uVar7 &&
            (*(ushort *)(pFVar20 + 8) == (param_4->StateHandle).Index)))) {
          lVar22 = *(longlong *)(pFVar20 + 0x18);
          lVar24 = *(longlong *)(pFVar20 + 0x10);
          *(longlong *)__return_storage_ptr__ = lVar24;
          *(longlong *)&__return_storage_ptr__->field_0x8 = lVar22;
          if (lVar22 == 0) {
            return __return_storage_ptr__;
          }
          goto LAB_14d50050f;
        }
        pFVar20 = pFVar20 + 0x20;
      } while (pFVar20 != pFVar18);
    }
    break;
  case GlobalInstanceDataObject:
  case ActiveInstanceDataObject:
    pFVar20 = (param_1->TemporaryInstances).AllocatorInstance.Data;
    uVar2 = param_4->Source;
    uVar8 = param_4->Index;
    pFVar18 = pFVar20 + (longlong)(param_1->TemporaryInstances).ArrayNum * 0x20;
    if (pFVar20 != pFVar18) {
      do {
        if ((((*(uint *)pFVar20 == (param_3->FrameID).Value) &&
             (pFVar20[4] == (FScriptContainerElement)uVar2)) && (*(short *)(pFVar20 + 6) == uVar8))
           && (*(ushort *)(pFVar20 + 8) == (param_4->StateHandle).Index)) {
          pFVar19 = StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper>
                              (*(UScriptStruct **)(pFVar20 + 0x10),*(void **)(pFVar20 + 0x18));
          pUVar13 = (pFVar19->InstanceObject).field0_0x0.DebugPtr;
          if (pUVar13 != (UObject *)0x0) {
            lVar24 = *(longlong *)&pUVar13->field_0x10;
            *(longlong *)__return_storage_ptr__ = lVar24;
            *(UObject **)&__return_storage_ptr__->field_0x8 = pUVar13;
            if (lVar24 != 0) {
              return __return_storage_ptr__;
            }
            iVar25 = 0x24;
            goto LAB_14d50051b;
          }
          break;
        }
        pFVar20 = pFVar20 + 0x20;
      } while (pFVar20 != pFVar18);
    }
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    goto LAB_14d5005e1;
  default:
    this = StaticEnum<enum_EStateTreeDataSourceType>();
    if ((this == (UEnum *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumClass != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xca4,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      pFVar23 = (FStateTreeDataView *)(*pcVar16)();
      return pFVar23;
    }
    UEnum::GetNameByValue(this,(long64)&local_38);
    ::FName::ToString(&local_38,&local_30);
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                        ,0x110,L"Unhandled case or unsupported type for InstanceDataStorage %s");
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      pFVar23 = (FStateTreeDataView *)(*pcVar16)();
      return pFVar23;
    }
    break;
  case GlobalParameterData:
    if (param_2 != (FStateTreeExecutionFrame *)0x0) {
      uVar3 = (param_3->GlobalParameterDataHandle).Source;
      uVar9 = (param_3->GlobalParameterDataHandle).Index;
      pFVar20 = (param_1->TemporaryInstances).AllocatorInstance.Data;
      pFVar18 = pFVar20 + (longlong)(param_1->TemporaryInstances).ArrayNum * 0x20;
      if (pFVar20 != pFVar18) {
        do {
          if (((*(uint *)pFVar20 == (param_2->FrameID).Value) &&
              (pFVar20[4] == (FScriptContainerElement)uVar3)) &&
             ((*(short *)(pFVar20 + 6) == uVar9 &&
              (*(ushort *)(pFVar20 + 8) == (param_3->GlobalParameterDataHandle).StateHandle.Index)))
             ) goto LAB_14d50049b;
          pFVar20 = pFVar20 + 0x20;
        } while (pFVar20 != pFVar18);
      }
    }
    break;
  case SubtreeParameterData:
    if (param_2 != (FStateTreeExecutionFrame *)0x0) {
      uVar4 = (param_3->StateParameterDataHandle).Source;
      uVar10 = (param_3->StateParameterDataHandle).Index;
      pFVar20 = (param_1->TemporaryInstances).AllocatorInstance.Data;
      pFVar18 = pFVar20 + (longlong)(param_1->TemporaryInstances).ArrayNum * 0x20;
      if (pFVar20 != pFVar18) {
        do {
          if (((*(uint *)pFVar20 == (param_2->FrameID).Value) &&
              (pFVar20[4] == (FScriptContainerElement)uVar4)) &&
             ((*(short *)(pFVar20 + 6) == uVar10 &&
              (*(ushort *)(pFVar20 + 8) == (param_3->StateParameterDataHandle).StateHandle.Index))))
          {
            plVar14 = *(longlong **)(pFVar20 + 0x18);
            pUVar15 = *(UScriptStruct **)(pFVar20 + 0x10);
            if ((plVar14 == (longlong *)0x0) || (pUVar15 == (UScriptStruct *)0x0)) break;
            pUVar21 = FCompactStateTreeParameters::StaticStruct();
            if (pUVar15 != pUVar21) {
              pUVar21 = FCompactStateTreeParameters::StaticStruct();
              if (pUVar21 == (UScriptStruct *)0x0) break;
              iVar25 = (int)pUVar21->_padding_;
              if (((int)pUVar15->_padding_ < iVar25) ||
                 ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar25 * 8) !=
                  &pUVar21->_padding_)) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if (!bVar17) break;
            }
            lVar24 = *plVar14;
            lVar22 = plVar14[1];
            goto LAB_14d5004fc;
          }
          pFVar20 = pFVar20 + 0x20;
        } while (pFVar20 != pFVar18);
      }
    }
    uVar5 = param_4->Source;
    uVar11 = param_4->Index;
    pFVar20 = (param_1->TemporaryInstances).AllocatorInstance.Data;
    pFVar18 = pFVar20 + (longlong)(param_1->TemporaryInstances).ArrayNum * 0x20;
    if (pFVar20 != pFVar18) {
      do {
        if ((((*(uint *)pFVar20 == (param_3->FrameID).Value) &&
             (pFVar20[4] == (FScriptContainerElement)uVar5)) && (*(short *)(pFVar20 + 6) == uVar11))
           && (*(ushort *)(pFVar20 + 8) == (param_4->StateHandle).Index)) goto LAB_14d50049b;
        pFVar20 = pFVar20 + 0x20;
      } while (pFVar20 != pFVar18);
    }
    break;
  case StateParameterData:
    uVar6 = param_4->Source;
    uVar12 = param_4->Index;
    pFVar20 = (param_1->TemporaryInstances).AllocatorInstance.Data;
    pFVar18 = pFVar20 + (longlong)(param_1->TemporaryInstances).ArrayNum * 0x20;
    if (pFVar20 != pFVar18) {
      do {
        if ((((*(uint *)pFVar20 == (param_3->FrameID).Value) &&
             (pFVar20[4] == (FScriptContainerElement)uVar6)) && (*(short *)(pFVar20 + 6) == uVar12))
           && (*(ushort *)(pFVar20 + 8) == (param_4->StateHandle).Index)) goto LAB_14d50049b;
        pFVar20 = pFVar20 + 0x20;
      } while (pFVar20 != pFVar18);
    }
  }
  goto LAB_14d5005db;
LAB_14d50049b:
  plVar14 = *(longlong **)(pFVar20 + 0x18);
  pUVar15 = *(UScriptStruct **)(pFVar20 + 0x10);
  if ((plVar14 != (longlong *)0x0) && (pUVar15 != (UScriptStruct *)0x0)) {
    pUVar21 = FCompactStateTreeParameters::StaticStruct();
    if (pUVar15 == pUVar21) {
LAB_14d5004f5:
      lVar24 = *plVar14;
      lVar22 = plVar14[1];
LAB_14d5004fc:
      *(longlong *)&__return_storage_ptr__->field_0x8 = lVar22;
      *(longlong *)__return_storage_ptr__ = lVar24;
      if (lVar22 == 0) {
        return __return_storage_ptr__;
      }
LAB_14d50050f:
      if (lVar24 != 0) {
        return __return_storage_ptr__;
      }
      iVar25 = 0x2b;
LAB_14d50051b:
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Memory || (Memory && Struct)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                          ,iVar25,L"");
      if (!bVar17) {
        return __return_storage_ptr__;
      }
      pcVar16 = (code *)swi(3);
      pFVar23 = (FStateTreeDataView *)(*pcVar16)();
      return pFVar23;
    }
    pUVar21 = FCompactStateTreeParameters::StaticStruct();
    if (pUVar21 != (UScriptStruct *)0x0) {
      iVar25 = (int)pUVar21->_padding_;
      if (((int)pUVar15->_padding_ < iVar25) ||
         ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar25 * 8) !=
          &pUVar21->_padding_)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) goto LAB_14d5004f5;
    }
  }
LAB_14d5005db:
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
LAB_14d5005e1:
  *(undefined8 *)__return_storage_ptr__ = 0;
  return __return_storage_ptr__;
}

// GetTriggerTransitionEvent @ 14d5006f0

void __cdecl
UE::StateTree::ExecutionContext::Private::GetTriggerTransitionEvent
          (FCompactStateTransition *param_1,FStateTreeInstanceStorage *param_2,
          FStateTreeSharedEvent *param_3,TArrayView<FStateTreeSharedEvent_const_,int> *param_4,
          TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
          *param_5)

{
  uchar *puVar1;
  EStateTreeTransitionTrigger EVar2;
  TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
  *pTVar8;
  FScriptContainerElement *pFVar9;
  FStateTreeSharedEvent *pFVar10;
  FStateTreeSharedEvent *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  EVar2 = param_1->Trigger;
  if (EVar2 != OnEvent) {
    if ((EVar2 & OnTick) == None) {
      if ((EVar2 & OnDelegate) == None) {
        `UE::StateTree::ExecutionContext::Private::GetTriggerTransitionEvent'::__l44::<lambda_1>::
        operator()(local_res8);
        return;
      }
      pFVar9 = (param_2->BroadcastedDelegates).AllocatorInstance.Data;
      pFVar12 = pFVar9 + (longlong)(param_2->BroadcastedDelegates).ArrayNum * 0x10;
      if (pFVar9 == pFVar12) {
        return;
      }
      while ((((param_1->RequiredDelegateDispatcher).ID.D != *(uint *)(pFVar9 + 0xc) ||
              (param_1->RequiredDelegateDispatcher).ID.C != *(uint *)(pFVar9 + 8)) ||
             (param_1->RequiredDelegateDispatcher).ID.B != *(uint *)(pFVar9 + 4)) ||
             (param_1->RequiredDelegateDispatcher).ID.A != *(uint *)pFVar9) {
        pFVar9 = pFVar9 + 0x10;
        if (pFVar9 == pFVar12) {
          return;
        }
      }
    }
    iVar7 = param_5->ArrayNum;
    if (iVar7 == param_5->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FStateTreeSharedEvent>_>
                        (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar7 + 1;
    pTVar3 = (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
              *)(param_5->AllocatorInstance).SecondaryData.Data;
    if (pTVar3 != (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                   *)0x0) {
      param_5 = pTVar3;
    }
    puVar1 = (param_5->AllocatorInstance).InlineData + (longlong)iVar7 * 0x10;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = (param_5->AllocatorInstance).InlineData + (longlong)iVar7 * 0x10 + 8;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  if ((((param_1->RequiredEvent).Tag.TagName == (FName)0x0) &&
      ((param_1->RequiredEvent).PayloadStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Transition.RequiredEvent.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                         ,0xb8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3->Event).Object == (FStateTreeEvent *)0x0) {
    pFVar10 = param_4->DataPtr;
    pFVar11 = pFVar10 + param_4->ArrayNum;
    for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 1) {
      if ((pFVar10->Event).Object == (FStateTreeEvent *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Event.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                           ,0xc2,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((pFVar10->Event).Object == (FStateTreeEvent *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Event.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeEvents.h"
                               ,0x77,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      bVar6 = FCompactEventDesc::DoesEventMatchDesc(&param_1->RequiredEvent,(pFVar10->Event).Object)
      ;
      if (bVar6) {
        iVar7 = param_5->ArrayNum;
        if (iVar7 == param_5->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FStateTreeSharedEvent>_>
                            (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar7 + 1;
        pTVar3 = (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                  *)(param_5->AllocatorInstance).SecondaryData.Data;
        pTVar8 = param_5;
        if (pTVar3 != (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                       *)0x0) {
          pTVar8 = pTVar3;
        }
        *(FStateTreeEvent **)((pTVar8->AllocatorInstance).InlineData + (longlong)iVar7 * 0x10) =
             (pFVar10->Event).Object;
        pTVar4 = (pFVar10->Event).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         ((pTVar8->AllocatorInstance).InlineData + (longlong)iVar7 * 0x10 + 8) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
    }
  }
  else {
    pTVar3 = (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
              *)(param_5->AllocatorInstance).SecondaryData.Data;
    pTVar8 = param_5;
    if (pTVar3 != (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                   *)0x0) {
      pTVar8 = pTVar3;
    }
    if (pTVar8 <= param_3) {
      pTVar8 = param_5;
      if (pTVar3 != (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                     *)0x0) {
        pTVar8 = pTVar3;
      }
      if ((param_3 < (FStateTreeEvent **)
                     ((longlong)(pTVar8->AllocatorInstance).InlineData +
                     (longlong)param_5->ArrayMax * 2 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_5->ArrayNum;
    if (iVar7 == param_5->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>::ForElementType<FStateTreeSharedEvent>_>
                        (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar7 + 1;
    pTVar3 = (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
              *)(param_5->AllocatorInstance).SecondaryData.Data;
    if (pTVar3 != (TArray<FStateTreeSharedEvent,TSizedInlineAllocator<8,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>_>_>
                   *)0x0) {
      param_5 = pTVar3;
    }
    *(FStateTreeEvent **)((param_5->AllocatorInstance).InlineData + (longlong)iVar7 * 0x10) =
         (param_3->Event).Object;
    pTVar4 = (param_3->Event).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)
     ((param_5->AllocatorInstance).InlineData + (longlong)iVar7 * 0x10 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      return;
    }
  }
  return;
}

// InitEvaluationScopeInstanceData @ 14d500f90

void __cdecl
UE::StateTree::ExecutionContext::Private::InitEvaluationScopeInstanceData
          (FEvaluationScopeInstanceContainer *param_1,TNotNull<UStateTree_const_*> param_2,
          int param_3,int param_4)

{
  int iVar1;
  UScriptStruct *this;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  longlong lVar5;
  uchar *puVar6;
  int iVar7;
  undefined4 local_78;
  undefined2 local_74;
  FString local_68;
  FString local_58;
  FConstStructView local_48;
  FConstStructView local_38;
  
  if (param_3 != param_4) {
    iVar7 = param_3 << 4;
    do {
      iVar1 = ((param_2.Val)->Nodes).NumItems;
      if ((((iVar1 < 1) || (param_3 < 0)) || (iVar1 <= param_3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x7c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = ((param_2.Val)->Nodes).NumItems;
      if (((iVar1 < 1) || (iVar1 <= param_3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar6 = ((param_2.Val)->Nodes).Memory;
      lVar5 = (longlong)(((param_2.Val)->Nodes).AllocatedSize - iVar7);
      this = *(UScriptStruct **)(puVar6 + lVar5 + -0x10);
      puVar6 = puVar6 + *(int *)(puVar6 + lVar5 + -8);
      if ((puVar6 == (uchar *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this == (UScriptStruct *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar4 = FStateTreeNodeBase::StaticStruct();
      if (this != pUVar4) {
        pUVar4 = FStateTreeNodeBase::StaticStruct();
        if (pUVar4 != (UScriptStruct *)0x0) {
          iVar1 = (int)pUVar4->_padding_;
          if (((int)this->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_14d50117e;
        }
        pUVar4 = FStateTreeNodeBase::StaticStruct();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar4,&local_58,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                           ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_14d50117e:
      if ((puVar6[0x18] == '\a') || (puVar6[0x18] == '\b')) {
        FInstancedStructContainer::operator[]
                  (&((param_2.Val)->DefaultEvaluationScopeInstanceData).InstanceStructs,&local_48,
                   (uint)*(ushort *)(puVar6 + 0x14));
        local_78 = *(undefined4 *)(puVar6 + 0x18);
        local_74 = *(undefined2 *)(puVar6 + 0x1c);
        local_38.ScriptStruct = local_48.ScriptStruct;
        local_38.StructMemory = local_48.StructMemory;
        InstanceData::FEvaluationScopeInstanceContainer::Add(param_1,SUB86(&local_78,0),&local_38);
      }
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 0x10;
    } while (param_3 != param_4);
  }
  return;
}

// IsActiveInstanceHandleSourceValid @ 14d501220

bool __cdecl
UE::StateTree::InstanceData::Private::IsActiveInstanceHandleSourceValid
          (FStateTreeInstanceStorage *param_1,FStateTreeExecutionFrame *param_2,
          FStateTreeDataHandle *param_3)

{
  ushort uVar1;
  FStateTreeStateHandle *pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = (param_2->ActiveInstanceIndexBase).Value;
  if (uVar1 != 0xffff) {
    uVar4 = (ulonglong)(param_2->ActiveStates).NumStates;
    if (uVar4 != 0) {
      lVar3 = 0;
      pFVar2 = (param_2->ActiveStates).States;
      do {
        if (pFVar2->Index == (param_3->StateHandle).Index) {
          if ((param_1->InstanceStructs).NumItems <= (int)((uint)param_3->Index + (uint)uVar1)) {
            return false;
          }
          return true;
        }
        lVar3 = lVar3 + 1;
        pFVar2 = pFVar2 + 1;
      } while (lVar3 < (longlong)uVar4);
    }
  }
  return false;
}

// IsHandleSourceValid @ 14d501820

bool __cdecl
UE::StateTree::InstanceData::Private::IsHandleSourceValid
          (FStateTreeInstanceStorage *param_1,FStateTreeExecutionFrame *param_2,
          FStateTreeExecutionFrame *param_3,FStateTreeDataHandle *param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UEnum *this;
  FStateTreeStateHandle *pFVar6;
  ulonglong uVar7;
  FStateTreeExecutionFrame *pFVar8;
  FStateTreeExecutionFrame *pFVar9;
  FName local_res20;
  FString local_18;
  
code_r0x00014d501820:
  uVar5 = (uint)param_4->Source;
  if (StateParameterData < param_4->Source) {
switchD_14d50185c_caseD_4d501886:
    this = StaticEnum<enum_EStateTreeDataSourceType>();
    if ((this == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    UEnum::GetNameByValue(this,(long64)&local_res20);
    ::FName::ToString(&local_res20,&local_18);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                       ,0xd8,L"Unhandled case or unsupported type for InstanceDataStorage %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar9 = (FStateTreeExecutionFrame *)0x0;
  pFVar8 = param_3;
  do {
    param_3 = param_2;
    switch(switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_14d50185c::switchdataD_14d501a34)[(int)uVar5]) {
    case (char *)0x14d50185e:
      if (param_3 == (FStateTreeExecutionFrame *)0x0) {
        uVar1 = (pFVar8->ActiveInstanceIndexBase).Value;
        if (uVar1 == 0xffff) {
          return false;
        }
        uVar7 = (ulonglong)(pFVar8->ActiveStates).NumStates;
        if (uVar7 == 0) {
          return false;
        }
        pFVar6 = (pFVar8->ActiveStates).States;
        while (pFVar6->Index != (param_4->StateHandle).Index) {
          pFVar9 = (FStateTreeExecutionFrame *)((longlong)&(pFVar9->StateTree).field0_0x0 + 1);
          pFVar6 = pFVar6 + 1;
          if ((longlong)uVar7 <= (longlong)pFVar9) {
            return false;
          }
        }
        goto LAB_14d50197e;
      }
      if ((pFVar8->ActiveInstanceIndexBase).Value == 0xffff) {
        return false;
      }
      uVar5 = (uint)(pFVar8->StateParameterDataHandle).Source;
      param_4 = &pFVar8->StateParameterDataHandle;
      param_2 = pFVar9;
      pFVar8 = param_3;
      if (0xf < uVar5) goto switchD_14d50185c_caseD_4d501886;
      break;
    case (char *)0x14d501886:
      goto switchD_14d50185c_caseD_4d501886;
    case (char *)0x14d50198b:
      return true;
    case (char *)0x14d501998:
      uVar1 = (pFVar8->GlobalInstanceIndexBase).Value;
      if (uVar1 == 0xffff) {
        return false;
      }
      if ((param_1->InstanceStructs).NumItems <= (int)((uint)param_4->Index + (uint)uVar1)) {
        return false;
      }
      return true;
    case (char *)0x14d5019bc:
      uVar1 = (pFVar8->ActiveInstanceIndexBase).Value;
      if (uVar1 == 0xffff) {
        return false;
      }
      uVar7 = (ulonglong)(pFVar8->ActiveStates).NumStates;
      if (uVar7 == 0) {
        return false;
      }
      pFVar6 = (pFVar8->ActiveStates).States;
      while (pFVar6->Index != (param_4->StateHandle).Index) {
        pFVar9 = (FStateTreeExecutionFrame *)((longlong)&(pFVar9->StateTree).field0_0x0 + 1);
        pFVar6 = pFVar6 + 1;
        if ((longlong)uVar7 <= (longlong)pFVar9) {
          return false;
        }
      }
LAB_14d50197e:
      if ((int)((uint)param_4->Index + (uint)uVar1) < (param_1->InstanceStructs).NumItems) {
        return true;
      }
      return false;
    case (char *)0x14d5019ff:
      goto switchD_14d50185c_caseD_4d5019ff;
    }
  } while( true );
switchD_14d50185c_caseD_4d5019ff:
  if (param_3 == (FStateTreeExecutionFrame *)0x0) {
    return (pFVar8->GlobalParameterDataHandle).Source != None;
  }
  param_4 = &pFVar8->GlobalParameterDataHandle;
  param_2 = (FStateTreeExecutionFrame *)0x0;
  goto code_r0x00014d501820;
}

// MarkDelegateAsBroadcasted @ 14d5029c0

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

bool __cdecl
UE::StateTree::ExecutionContext::MarkDelegateAsBroadcasted
          (FStateTreeDelegateDispatcher *param_1,FStateTreeExecutionFrame *param_2,
          FStateTreeInstanceStorage *param_3)

{
  byte bVar1;
  ushort uVar2;
  UStateTree *this;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FCompactStateTreeState *pFVar6;
  FCompactStateTransition *pFVar7;
  FStateTreeIndex16 FVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FStateTreeStateHandle *pFVar12;
  undefined1 local_res10 [8];
  FStateTreeInstanceStorage *local_res18;
  
  this = (param_2->StateTree).field0_0x0.DebugPtr;
  local_res18 = param_3;
  if ((this == (UStateTree *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StateTree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                         ,0x108,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar1 = (param_2->ActiveStates).NumStates;
  pFVar12 = (param_2->ActiveStates).States;
  do {
    if (pFVar12 == (param_2->ActiveStates).States + bVar1) {
      return false;
    }
    pFVar6 = UStateTree::GetStateFromHandle(this,(FStateTreeStateHandle)pFVar12->Index);
    if ((pFVar6 == (FCompactStateTreeState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("State",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                           ,0x10d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (pFVar6->bHasDelegateTriggerTransitions != 0) {
      uVar2 = pFVar6->TransitionsBegin;
      uVar9 = (uint)uVar2;
      uVar10 = (uint)pFVar6->TransitionsNum + (uint)uVar2;
      if (uVar2 < uVar10) {
        uVar11 = (uint)uVar2;
        do {
          if (((uVar9 != 0xffffffff) && (0xfffe < uVar11)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeIndexTypes.h"
                                 ,0x2e,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FVar8.Value = (ushort)uVar9;
          if (uVar9 == 0xffffffff) {
            FVar8.Value = 0xffff;
          }
          pFVar7 = UStateTree::GetTransitionFromIndex(this,FVar8);
          if ((pFVar7 == (FCompactStateTransition *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Transition",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                                 ,0x118,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((((pFVar7->RequiredDelegateDispatcher).ID.A == (param_1->ID).A &&
               (pFVar7->RequiredDelegateDispatcher).ID.D == (param_1->ID).D) &&
              (pFVar7->RequiredDelegateDispatcher).ID.C == (param_1->ID).C) &&
              (pFVar7->RequiredDelegateDispatcher).ID.B == (param_1->ID).B) {
            if ((pFVar7->Trigger & OnDelegate) == None) {
              `UE::StateTree::ExecutionContext::MarkDelegateAsBroadcasted'::__l35::<lambda_1>::
              operator()(local_res10);
            }
            TArray<FStateTreeDelegateDispatcher,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FStateTreeDelegateDispatcher_const_&>
                      (&local_res18->BroadcastedDelegates,param_1);
            return true;
          }
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 + 1;
        } while ((int)uVar9 < (int)uVar10);
      }
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// PostAppendToInstanceStructContainer @ 14d502e20

void __cdecl
UE::StateTree::InstanceData::Private::PostAppendToInstanceStructContainer
          (FInstancedStructContainer *param_1,TNotNull<UObject_*> param_2,bool param_3,int param_4)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  TNotNull<UObject_*> TVar8;
  int iVar9;
  longlong lVar10;
  uchar *puVar11;
  undefined1 local_res8 [8];
  
  iVar6 = param_1->NumItems;
  if (param_4 < iVar6) {
    iVar9 = param_4 << 4;
    do {
      if ((((iVar6 < 1) || (param_4 < 0)) || (iVar6 <= param_4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x84,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((param_1->NumItems < 1) || (param_1->NumItems <= param_4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = param_1->Memory;
      lVar10 = (longlong)(param_1->AllocatedSize - iVar9);
      puVar11 = puVar1 + *(int *)(puVar1 + lVar10 + -8);
      if ((puVar11 != (uchar *)0x0) &&
         (pUVar2 = *(UScriptStruct **)(puVar1 + lVar10 + -0x10), pUVar2 != (UScriptStruct *)0x0)) {
        if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
          Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                               (UObject *)pUVar7,L"StateTreeInstanceObjectWrapper");
        }
        if (pUVar2 == Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.
                      OuterSingleton) {
LAB_14d502f7b:
          if (*(UObject **)puVar11 != (UObject *)0x0) {
            TVar8 = CopyNodeInstance((UObject *)local_res8,*(UObject **)puVar11,SUB81(param_2.Val,0)
                                    );
                    /* WARNING: Load size is inaccurate */
            pUVar3 = *TVar8.Val;
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar3);
            }
            *(UObject **)puVar11 = pUVar3;
          }
        }
        else {
          if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
            Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                 (UObject *)pUVar7,L"StateTreeInstanceObjectWrapper");
          }
          if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton !=
              (UScriptStruct *)0x0) {
            iVar6 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.
                         OuterSingleton)->_padding_;
            if (((int)pUVar2->_padding_ < iVar6) ||
               ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar6 * 8) !=
                &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)
                 ->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) goto LAB_14d502f7b;
          }
        }
      }
      iVar6 = param_1->NumItems;
      param_4 = param_4 + 1;
      iVar9 = iVar9 + 0x10;
    } while (param_4 < iVar6);
  }
  return;
}

// PreventRecursionCheck @ 14d502ff0

bool __cdecl
UE::StateTree::ExecutionContext::Private::PreventRecursionCheck
          (FExecutionFrameHandle *param_1,
          TArrayView<UE::StateTree::FActiveFrameID_const_,int> *param_2,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_3,
          TArrayView<FStateTreeExecutionFrame_const_,int> *param_4)

{
  FActiveFrameID *pFVar1;
  UStateTree *pUVar2;
  UStateTree *pUVar3;
  FStateTreeExecutionFrame *pFVar4;
  FActiveFrameID *pFVar5;
  bool bVar6;
  int iStack_10;
  
  pFVar5 = param_2->DataPtr;
  pFVar1 = pFVar5 + param_2->ArrayNum;
  if (pFVar5 != pFVar1) {
    iStack_10 = (int)*(undefined8 *)&param_4->ArrayNum;
    do {
      for (pFVar4 = param_3->DataPtr; pFVar4 != param_3->DataPtr + param_3->ArrayNum;
          pFVar4 = pFVar4 + 1) {
        if ((pFVar4->FrameID).Value == pFVar5->Value) goto LAB_14d503080;
      }
      for (pFVar4 = param_4->DataPtr; pFVar4 != param_4->DataPtr + iStack_10; pFVar4 = pFVar4 + 1) {
        if ((pFVar4->FrameID).Value == pFVar5->Value) goto LAB_14d503080;
      }
      pFVar4 = (FStateTreeExecutionFrame *)0x0;
LAB_14d503080:
      if (pFVar4 != (FStateTreeExecutionFrame *)0x0) {
        pUVar2 = (pFVar4->StateTree).field0_0x0.DebugPtr;
        pUVar3 = (param_1->StateTree).field0_0x0.DebugPtr;
        if (pUVar2 == (UStateTree *)0x0) {
          bVar6 = pUVar3 == (UStateTree *)0x0;
        }
        else {
          bVar6 = pUVar2 == pUVar3;
        }
        if ((bVar6) && ((pFVar4->RootState).Index == (param_1->RootState).Index))
        goto LAB_14d5030b6;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1);
  }
  pFVar5 = (FActiveFrameID *)0x0;
LAB_14d5030b6:
  return pFVar5 != (FActiveFrameID *)0x0;
}

// SelectedFrameLinkedFrame @ 14d512e60

FStateTreeExecutionFrame * __cdecl
UE::StateTree::ExecutionContext::Private::SelectedFrameLinkedFrame
          (FStateTreeExecutionState *param_1,bool param_2,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_3,FExecutionFrameHandle *param_4
          ,EStateTreeStateSelectionRules param_5)

{
  TNotNull<UStateTree_const_*> TVar1;
  UStateTree *pUVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeExecutionFrame *pFVar5;
  FActiveState *pFVar6;
  TTasksCompletionStatus<unsigned_int> *this;
  FStateTreeExecutionFrame *pFVar7;
  FStateTreeExecutionFrame *pFVar8;
  TTasksCompletionStatus<unsigned_int> local_38;
  
  if ((((param_4->RootState).Index == 0xffff) ||
      ((param_4->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkStateFrameHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                         ,0x1be1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FStateTreeExecutionFrame *)(*pcVar3)();
    return pFVar5;
  }
  pFVar5 = (FStateTreeExecutionFrame *)0x0;
  if (!param_2) {
    if (param_3->ArrayNum < 1) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_244450361459336217>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                         ,0x1be7,"MatchingActiveStates.Num() >= 1");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FStateTreeExecutionFrame *)(*pcVar3)();
        return pFVar5;
      }
    }
    else {
      pFVar6 = TArrayView<UE::StateTree::FActiveState_const_,int>::operator[](param_3,0);
      pFVar7 = (FStateTreeExecutionFrame *)(param_1->ActiveFrames).AllocatorInstance.Data;
      pFVar8 = pFVar7 + (param_1->ActiveFrames).ArrayNum;
      for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 1) {
        if ((pFVar7->FrameID).Value == (pFVar6->FrameID).Value) {
          pFVar5 = pFVar7;
          if (pFVar7 != (FStateTreeExecutionFrame *)0x0) goto LAB_14d512f5a;
          break;
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                         ,0x1beb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FStateTreeExecutionFrame *)(*pcVar3)();
        return pFVar5;
      }
LAB_14d512f5a:
      TVar1.Val = (UStateTree *)(pFVar5->StateTree).field0_0x0.ObjectPtr.field0_0x0.Handle;
      pUVar2 = (param_4->StateTree).field0_0x0.DebugPtr;
      if (TVar1.Val == (UStateTree *)0x0) {
        bVar4 = pUVar2 == (UStateTree *)0x0;
      }
      else {
        bVar4 = TVar1.Val == pUVar2;
      }
      if (((bVar4) && ((pFVar5->RootState).Index == (param_4->RootState).Index)) &&
         ((param_5 & CompletedTransitionStatesCreateNewStates) != None)) {
        if (TVar1.Val == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::ReportNotNullPtr();
        }
        this = FStateTreeTasksCompletionStatus::GetStatus
                         (&pFVar5->ActiveTasksStatus,&local_38,TVar1);
        bVar4 = TTasksCompletionStatus<unsigned_int>::IsCompleted(this);
        if (bVar4) {
          pFVar5 = (FStateTreeExecutionFrame *)0x0;
        }
      }
    }
  }
  return pFVar5;
}

// TestStateContextPath @ 14d519c00

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

bool __cdecl
UE::StateTree::ExecutionContext::Private::TestStateContextPath
          (TNotNull<FStateTreeExecutionContext_const_*> param_1,
          TArrayView<UE::StateTree::ExecutionContext::FStateHandleContext_const_,int> *param_2)

{
  UStateTree *this;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  FCompactStateTreeState *pFVar7;
  FCompactStateTreeFrame *pFVar8;
  FStateHandleContext *pFVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  UStateTree *pUVar13;
  longlong local_res8;
  
  pUVar13 = (UStateTree *)(param_1.Val)->_padding_;
  if (pUVar13 != (UStateTree *)0x0) {
    iVar10 = param_2->ArrayNum;
    uVar11 = 0;
    bVar2 = true;
    bVar5 = true;
    if (0 < iVar10) {
      local_res8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < iVar10) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        puVar12 = (undefined8 *)((longlong)&param_2->DataPtr->StateTree + local_res8);
        this = (UStateTree *)*puVar12;
        if (this == (UStateTree *)0x0) {
          return false;
        }
        if (this != pUVar13) {
          return false;
        }
        pFVar7 = UStateTree::GetStateFromHandle
                           (this,(FStateTreeStateHandle)*(ushort *)(puVar12 + 1));
        if (pFVar7 == (FCompactStateTreeState *)0x0) {
          return false;
        }
        if ((bVar5) || (bVar2)) {
          pFVar8 = UStateTree::GetFrameFromHandle
                             ((UStateTree *)*puVar12,(FStateTreeStateHandle)*(ushort *)(puVar12 + 1)
                             );
          if (pFVar8 == (FCompactStateTreeFrame *)0x0) {
            return false;
          }
          if (!bVar5) goto LAB_14d519cea;
        }
        else {
LAB_14d519cea:
          pFVar9 = TArrayView<UE::StateTree::ExecutionContext::FStateHandleContext_const_,int>::
                   operator[](param_2,uVar11 - 1);
          if ((pFVar7->Parent).Index != (pFVar9->StateHandle).Index) {
            return false;
          }
        }
        bVar2 = false;
        if (pFVar7->Type == LinkedAsset) {
          bVar2 = true;
          if (param_2->ArrayNum <= (int)(uVar11 + 1)) {
            return false;
          }
          pFVar9 = TArrayView<UE::StateTree::ExecutionContext::FStateHandleContext_const_,int>::
                   operator[](param_2,uVar11 + 1);
          if (pFVar9->StateTree == (UStateTree *)0x0) {
            return false;
          }
          bVar5 = UStateTree::IsReadyToRun(pFVar9->StateTree);
          if (!bVar5) {
            return false;
          }
          if ((UStateTree *)(param_1.Val)->_padding_ == (UStateTree *)0x0) goto LAB_14d519dd4;
          bVar5 = UStateTree::HasCompatibleContextData
                            (pFVar9->StateTree,(UStateTree *)(param_1.Val)->_padding_);
          if (!bVar5) {
            return false;
          }
          if ((param_1.Val)->_padding_ == 0) goto LAB_14d519dd4;
          pUVar13 = pFVar9->StateTree;
          if (*(longlong *)&((pUVar13->Schema).field0_0x0.DebugPtr)->field_0x10 !=
              *(longlong *)(*(longlong *)((param_1.Val)->_padding_ + 0x38) + 0x10)) {
            return false;
          }
        }
        iVar10 = param_2->ArrayNum;
        bVar5 = bVar2;
        if (pFVar7->Type == Linked) {
          bVar5 = true;
        }
        local_res8 = local_res8 + 0x10;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar10);
      if (!bVar5) {
        return !bVar2;
      }
    }
    return false;
  }
LAB_14d519dd4:
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Construct<FStateTreeRandomTimeDuration> @ 14d5251b0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeRandomTimeDuration>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FStateTreeRandomTimeDuration> @ 14d5251c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeRandomTimeDuration>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FStateTreeRandomTimeDuration> @ 14d5251d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeRandomTimeDuration>(void *param_1)

{
  return;
}

// Construct<FStateTreeRunParallelStateTreeTaskInstanceData> @ 14d5251e0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeRunParallelStateTreeTaskInstanceData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FStateTreeInstanceData::FStateTreeInstanceData
            ((FStateTreeInstanceData *)((longlong)param_1 + 0x28));
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FStateTreeRunParallelStateTreeTaskInstanceData> @ 14d525250

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeRunParallelStateTreeTaskInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FStateTreeInstanceData::FStateTreeInstanceData
            ((FStateTreeInstanceData *)((longlong)param_1 + 0x28));
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FStateTreeRunParallelStateTreeTaskInstanceData> @ 14d5252a0

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeRunParallelStateTreeTaskInstanceData>(void *param_1)

{
  FStateTreeInstanceData::~FStateTreeInstanceData
            ((FStateTreeInstanceData *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FStateTreeRandomTimeDuration> @ 14d525320

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeRandomTimeDuration>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeEditorPropertyPath> @ 14d525350

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeEditorPropertyPath>(void *param_1)

{
  return;
}

// ConstructForTests<FStateTreeEditorPropertyPath> @ 14d525360

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeEditorPropertyPath>(void *param_1)

{
  return;
}

// Copy<FStateTreeRunParallelStateTreeTaskInstanceData> @ 14d525370

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeRunParallelStateTreeTaskInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FStateTreeReference::operator=(param_1,param_2);
    FStateTreeInstanceData::operator=
              ((FStateTreeInstanceData *)((longlong)param_1 + 0x28),
               (FStateTreeInstanceData *)((longlong)param_2 + 0x28));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)
                 (((FStateTreeReference *)((longlong)param_2 + 0x28))->Parameters).Value.
                 StructMemory, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((FStateTreeReference *)((longlong)param_1 + 0x28))->Parameters).Value.StructMemory =
         (((FStateTreeReference *)((longlong)param_2 + 0x28))->Parameters).Value.StructMemory;
    *(undefined4 *)
     &(((FStateTreeReference *)((longlong)param_1 + 0x28))->PropertyOverrides).AllocatorInstance.
      Data = *(undefined4 *)
              &(((FStateTreeReference *)((longlong)param_2 + 0x28))->PropertyOverrides).
               AllocatorInstance.Data;
    param_1 = &(((FStateTreeReference *)((longlong)param_1 + 0x28))->PropertyOverrides).ArrayNum;
    param_2 = &(((FStateTreeReference *)((longlong)param_2 + 0x28))->PropertyOverrides).ArrayNum;
  }
  return true;
}

// Construct<FStateTreeDataHandle> @ 14d5255e0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDataHandle>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffff0000;
  *(undefined2 *)((longlong)param_1 + 4) = 0xffff;
  return;
}

// ConstructForTests<FStateTreeDataHandle> @ 14d525600

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeDataHandle>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 2) = 0xffffffff;
  return;
}

// Destruct<FStateTreeDataHandle> @ 14d525620

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDataHandle>(void *param_1)

{
  return;
}

// Construct<FStateTreeDelayTask> @ 14d525630

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDelayTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeDelayTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x283;
  return;
}

// ConstructForTests<FStateTreeDelayTask> @ 14d525680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeDelayTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeDelayTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x283;
  return;
}

// Destruct<FStateTreeDelayTask> @ 14d5256d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDelayTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeDataHandle> @ 14d5256f0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDataHandle>(void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FStateTreeDelayTask> @ 14d525730

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDelayTask>(void *param_1,void *param_2,int param_3)

{
  FStateTreeTaskBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FStateTreeTaskBase::operator=
                (this,(FStateTreeTaskBase *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FStateTreeDataHandle> @ 14d525780

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FStateTreeDataHandle>(void *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)((longlong)param_1 + 2);
  uVar2 = *(byte *)param_1 + 0x9e3779b9 + (uint)uVar1 * 0x40 + (uint)(uVar1 >> 2) ^ (uint)uVar1;
  return (uVar2 >> 2) + 0x9e3779b9 + (uint)*(ushort *)((longlong)param_1 + 4) + uVar2 * 0x40 ^ uVar2
  ;
}

// Construct<FStateTreeBindableStructDesc> @ 14d525850

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeBindableStructDesc>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FStateTreeBindableStructDesc__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  return;
}

// ConstructForTests<FStateTreeBindableStructDesc> @ 14d525890

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeBindableStructDesc>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FStateTreeBindableStructDesc__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  return;
}

// Destruct<FStateTreeBindableStructDesc> @ 14d5258d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeBindableStructDesc>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBindableStructDescriptor__6B_;
  return;
}

// Copy<FStateTreeBindableStructDesc> @ 14d5258e0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeBindableStructDesc>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x18) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar2 + 0x1c) =
         *(undefined2 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x1e) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x1e - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x20);
  }
  return true;
}

// Construct<FStateTreeDelayTaskInstanceData> @ 14d525990

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDelayTaskInstanceData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FStateTreeDelayTaskInstanceData> @ 14d5259b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeDelayTaskInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FStateTreeDelayTaskInstanceData> @ 14d5259d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDelayTaskInstanceData>(void *param_1)

{
  return;
}

// Copy<FStateTreeDelayTaskInstanceData> @ 14d5259e0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDelayTaskInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeStateHandle> @ 14d525a60

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeStateHandle>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FStateTreeStateHandle> @ 14d525a70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeStateHandle>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// Destruct<FStateTreeStateHandle> @ 14d525a80

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeStateHandle>(void *param_1)

{
  return;
}

// Copy<FStateTreeStateHandle> @ 14d525a90

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeStateHandle>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FStateTreeStateHandle> @ 14d525ac0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FStateTreeStateHandle>(void *param_1)

{
  return (uint)*(ushort *)param_1;
}

// Construct<FStateTreeDebugTextTask> @ 14d525ad0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDebugTextTask>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FStateTreeDebugTextTask__6B_;
  ((FColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) & 0xe5;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// ConstructForTests<FStateTreeDebugTextTask> @ 14d525b50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeDebugTextTask>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FStateTreeDebugTextTask__6B_;
  ((FColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) & 0xe5;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Destruct<FStateTreeDebugTextTask> @ 14d525bd0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDebugTextTask>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeDebugTextTask> @ 14d525c00

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDebugTextTask>(void *param_1,void *param_2,int param_3)

{
  FStateTreeTaskBase *pFVar1;
  undefined1 uVar2;
  EStateTreeTransitionPriority EVar3;
  undefined6 uVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FStateTreeTaskBase::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    *(int *)&((FStateTreeTaskBase *)((longlong)param_1 + 0x28))->_padding_ =
         (int)((FStateTreeTaskBase *)((longlong)param_2 + 0x28))->_padding_;
    *(undefined4 *)((longlong)&((FStateTreeTaskBase *)((longlong)param_1 + 0x28))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FStateTreeTaskBase *)((longlong)param_2 + 0x28))->_padding_ + 4);
    uVar2 = ((FStateTreeTaskBase *)((longlong)param_2 + 0x28))->field_0x20;
    EVar3 = ((FStateTreeTaskBase *)((longlong)param_2 + 0x28))->TransitionHandlingPriority;
    uVar4 = *(undefined6 *)&((FStateTreeTaskBase *)((longlong)param_2 + 0x28))->field_0x22;
    ((FStateTreeTaskBase *)((longlong)param_1 + 0x28))->_padding_ =
         ((FStateTreeTaskBase *)((longlong)param_2 + 0x28))->_padding_;
    ((FStateTreeTaskBase *)((longlong)param_1 + 0x28))->field_0x20 = uVar2;
    ((FStateTreeTaskBase *)((longlong)param_1 + 0x28))->TransitionHandlingPriority = EVar3;
    *(undefined6 *)&((FStateTreeTaskBase *)((longlong)param_1 + 0x28))->field_0x22 = uVar4;
    ((FStateTreeTaskBase *)((longlong)param_1 + 0x50))->_padding_ =
         ((FStateTreeTaskBase *)((longlong)param_2 + 0x50))->_padding_;
    pFVar1 = (FStateTreeTaskBase *)((longlong)param_2 + 0x50);
    param_2 = &((FStateTreeTaskBase *)((longlong)param_2 + 0x50))->_padding_;
    *(char *)&((FStateTreeTaskBase *)((longlong)param_1 + 0x50))->_padding_ =
         (char)pFVar1->_padding_;
    param_1 = &((FStateTreeTaskBase *)((longlong)param_1 + 0x50))->_padding_;
  }
  return true;
}

// Construct<FStateTreeTasksCompletionStatus> @ 14d525cb0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTasksCompletionStatus>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeTasksCompletionStatus> @ 14d525cc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeTasksCompletionStatus>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeTasksCompletionStatus> @ 14d525ce0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTasksCompletionStatus>(void *param_1)

{
  if (1 < *(byte *)((longlong)param_1 + 8)) {
    FMemory::Free(*(void **)param_1);
    *(undefined8 *)param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 8) = 0;
    return;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// SerializeArchive<FStateTreeTasksCompletionStatus> @ 14d525d20

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FStateTreeTasksCompletionStatus>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FStateTreeTasksCompletionStatus::Serialize(param_2,param_1);
  return bVar1;
}

// NetSerialize<FStateTreeTasksCompletionStatus> @ 14d525d40

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FStateTreeTasksCompletionStatus>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  *param_3 = true;
  bVar1 = FStateTreeTasksCompletionStatus::Serialize(param_4,param_1);
  return bVar1;
}

// Copy<FStateTreeTasksCompletionStatus> @ 14d525d60

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTasksCompletionStatus>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  void *_Dst;
  ulong64 _Size;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    puVar7 = param_2;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      if ((puVar6 == puVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("this != &Other",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeTasksStatus.cpp"
                             ,0x31,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (1 < *(byte *)(puVar6 + 1)) {
        FMemory::Free((void *)*puVar6);
      }
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar6 = 0;
      bVar2 = *(byte *)(puVar1 + 1);
      *(byte *)(puVar6 + 1) = bVar2;
      if (*(byte *)(puVar1 + 1) < 2) {
        *puVar6 = *puVar7;
      }
      else {
        _Size = (ulonglong)bVar2 << 3;
        _Dst = FMemory::Malloc(_Size,0);
        *puVar6 = _Dst;
        memcpy(_Dst,(void *)*puVar7,_Size);
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeDebugTextTaskInstanceData> @ 14d525e80

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeDebugTextTaskInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FStateTreeDebugTextTaskInstanceData> @ 14d525ea0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeDebugTextTaskInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FStateTreeDebugTextTaskInstanceData> @ 14d525ec0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeDebugTextTaskInstanceData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FStateTreeDebugTextTaskInstanceData> @ 14d525ee0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeDebugTextTaskInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      ::FString::operator=((FString *)(puVar2 + 1),(FString *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeStateLink> @ 14d525f70

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeStateLink>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FStateTreeStateLink> @ 14d525f80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeStateLink>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FStateTreeStateLink> @ 14d525f90

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeStateLink>(void *param_1)

{
  return;
}

// SerializeSlot<FStateTreeStateLink> @ 14d525fa0

bool __cdecl
UE::CoreUObject::Private::SerializeSlot<FStateTreeStateLink>
          (FStructuredArchiveSlot param_1,void *param_2,UStruct *param_3,void *param_4)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  FGuid local_18;
  
  local_18 = FStateTreeCustomVersion::GUID;
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&local_18);
  return false;
}

// PostSerialize<FStateTreeStateLink> @ 14d525ff0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FStateTreeStateLink>(FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FStateTreeStateLink> @ 14d526000

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeStateLink>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTaskCommonBase> @ 14d5261c0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTaskCommonBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeTaskCommonBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  return;
}

// ConstructForTests<FStateTreeTaskCommonBase> @ 14d526210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeTaskCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeTaskCommonBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  return;
}

// Destruct<FStateTreeTaskCommonBase> @ 14d526260

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTaskCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeTaskCommonBase> @ 14d526280

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTaskCommonBase>(void *param_1,void *param_2,int param_3)

{
  FStateTreeTaskBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FStateTreeTaskBase::operator=
                (this,(FStateTreeTaskBase *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeTaskBase> @ 14d5264d0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTaskBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeTaskBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  return;
}

// ConstructForTests<FStateTreeTaskBase> @ 14d526520

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeTaskBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeTaskBase__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  return;
}

// Destruct<FStateTreeTaskBase> @ 14d526570

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTaskBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeTaskBase> @ 14d526590

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTaskBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x20) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x20);
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            2 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            4 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            8 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            0x10 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            0x20 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            0x40 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
         0x7f ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FStateTreeStructRef> @ 14d526a20

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeStructRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeStructRef> @ 14d526a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeStructRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeStructRef> @ 14d526a40

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeStructRef>(void *param_1)

{
  return;
}

// Copy<FStateTreeStructRef> @ 14d526b10

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeStructRef>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ExportTextItem<FStateTreeStructRef> @ 14d526b40

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FStateTreeStructRef>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_2 + 8);
  if ((pvVar1 != (void *)0x0) && (*(UScriptStruct **)param_2 != (UScriptStruct *)0x0)) {
    UScriptStruct::ExportText
              (*(UScriptStruct **)param_2,param_1,pvVar1,pvVar1,param_4,param_5,param_6,true);
  }
  return true;
}

// Construct<FStateTreeReferenceOverrides> @ 14d527010

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeReferenceOverrides>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeReferenceOverrides> @ 14d527060

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeReferenceOverrides>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeReferenceOverrides> @ 14d527070

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeReferenceOverrides>(void *param_1)

{
  DestructItems<FStateTreeReferenceOverrideItem,int>
            (*(FStateTreeReferenceOverrideItem **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FStateTreeReferenceOverrides> @ 14d5270b0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeReferenceOverrides>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FStateTreeReferenceOverrideItem *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FStateTreeReferenceOverrideItem,int>
                  ((FStateTreeReferenceOverrideItem *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FStateTreeReferenceOverrideItem *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FStateTreeReferenceOverrideItem,FStateTreeReferenceOverrideItem,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FStateTreeReferenceOverrides> @ 14d527260

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FStateTreeReferenceOverrides>(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStackX_8 [8];
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  uVar8 = 0;
  puVar9 = *(undefined8 **)param_1;
  puVar6 = puVar9 + (longlong)iVar1 * 6;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<FStateTreeReferenceOverrideItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar9 == puVar6) break;
    uVar2 = *puVar9;
    uVar3 = ((uint)((ulonglong)puVar9[1] >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar9[1] >> 4)) *
            -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    uVar5 = ((int)((ulonglong)uVar2 >> 0x20) - uVar4) + uVar3 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar7 = (uVar4 - uVar5) - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar5 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar8 = uVar8 ^ (uVar8 >> 2) +
                    ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) + uVar8 * 0x40 + -0x61c88647;
    puVar9 = puVar9 + 6;
  }
  return uVar8;
}

// Construct<FStateTreeReferenceOverrideItem> @ 14d527430

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeReferenceOverrideItem>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeReferenceOverrideItem> @ 14d527480

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeReferenceOverrideItem>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeReferenceOverrideItem> @ 14d5274c0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeReferenceOverrideItem>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Construct<FStateTreeTransitionIdToIndex> @ 14d527530

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeTransitionIdToIndex>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FStateTreeReferenceOverrideItem> @ 14d527550

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeReferenceOverrideItem>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      FStateTreeReference::operator=
                ((FStateTreeReference *)(puVar1 + 1),
                 (FStateTreeReference *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FStateTreeTransitionIdToIndex> @ 14d5275b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionIdToIndex>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeTransitionIdToIndex> @ 14d527610

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeTransitionIdToIndex>(void *param_1)

{
  return;
}

// Copy<FStateTreeTransitionIdToIndex> @ 14d527620

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeTransitionIdToIndex>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FStateTreeReferenceOverrideItem> @ 14d527660

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FStateTreeReferenceOverrideItem>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ((uint)(*(ulonglong *)((longlong)param_1 + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 8) >> 4)) * -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = ((int)((ulonglong)uVar1 >> 0x20) - uVar3) + uVar2 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// Construct<FStateTreeReference> @ 14d5279e0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeReference>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FStateTreeReference> @ 14d527a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FStateTreeReference> @ 14d527a70

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeReference>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Construct<FStateTreeNodeIdToIndex> @ 14d527aa0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeNodeIdToIndex>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeNodeIdToIndex> @ 14d527ac0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeNodeIdToIndex>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// SerializeSlot<FStateTreeReference> @ 14d527ae0

bool __cdecl
UE::CoreUObject::Private::SerializeSlot<FStateTreeReference>
          (FStructuredArchiveSlot param_1,void *param_2,UStruct *param_3,void *param_4)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  FGuid local_18;
  
  local_18 = FStateTreeCustomVersion::GUID;
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&local_18);
  return false;
}

// Destruct<FStateTreeNodeIdToIndex> @ 14d527b30

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeNodeIdToIndex>(void *param_1)

{
  return;
}

// PostSerialize<FStateTreeReference> @ 14d527b40

void __cdecl
UE::CoreUObject::Private::PostSerialize<FStateTreeReference>(FArchive *param_1,void *param_2)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UPropertyBag *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FStateTreeCustomVersion::GUID);
  if ((iVar7 < 0xe) &&
     (pUVar8 = FInstancedPropertyBag::GetPropertyBagStruct
                         ((FInstancedPropertyBag *)((longlong)param_2 + 8)),
     pUVar8 != (UPropertyBag *)0x0)) {
    iVar7 = (pUVar8->PropertyDescs).ArrayNum;
    pFVar9 = (pUVar8->PropertyDescs).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = pFVar9 + (longlong)iVar7 * 0x40;
    if (pFVar9 != pFVar10) {
      pFVar1 = (ForAnyElementType *)((longlong)param_2 + 0x18);
      pFVar11 = pFVar9 + 8;
      do {
        if (((pFVar1->Data <= pFVar11) &&
            (pFVar11 < pFVar1->Data + (longlong)*(int *)((longlong)param_2 + 0x24) * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)((longlong)param_2 + 0x20);
        if (iVar7 == *(int *)((longlong)param_2 + 0x24)) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,pFVar1,(int *)((longlong)param_2 + 0x24));
        }
        pFVar9 = pFVar9 + 0x40;
        *(int *)((longlong)param_2 + 0x20) = iVar7 + 1;
        uVar4 = *(undefined8 *)pFVar11;
        uVar5 = *(undefined8 *)(pFVar11 + 8);
        pFVar11 = pFVar11 + 0x40;
        pFVar2 = pFVar1->Data;
        *(undefined8 *)(pFVar2 + (longlong)iVar7 * 0x10) = uVar4;
        *(undefined8 *)(pFVar2 + (longlong)iVar7 * 0x10 + 8) = uVar5;
      } while (pFVar9 != pFVar10);
    }
  }
  return;
}

// Copy<FStateTreeReference> @ 14d527ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeReference>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 *puVar4;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar2 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar2 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar2);
      }
      *puVar4 = *puVar2;
      if ((FInstancedStruct *)(puVar4 + 1) != (FInstancedStruct *)(puVar2 + 1)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar4 + 1),
                   (((FInstancedStruct *)(puVar2 + 1))->ScriptStruct).field0_0x0.DebugPtr,
                   (uchar *)puVar2[2]);
      }
      pFVar5 = (ForAnyElementType *)(puVar4 + 3);
      if (pFVar5 != (ForAnyElementType *)(puVar2 + 3)) {
        iVar3 = *(int *)(puVar2 + 4);
        piVar1 = (int *)((longlong)puVar4 + 0x24);
        _Src = ((ForAnyElementType *)(puVar2 + 3))->Data;
        *(int *)(puVar4 + 4) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,*piVar1,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FStateTreeNodeIdToIndex> @ 14d527dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeNodeIdToIndex>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeIndex8> @ 14d527e80

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeIndex8>(void *param_1)

{
  *(undefined1 *)param_1 = 0xff;
  return;
}

// ConstructForTests<FStateTreeIndex8> @ 14d527e90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeIndex8>(void *param_1)

{
  *(undefined1 *)param_1 = 0xff;
  return;
}

// Destruct<FStateTreeIndex8> @ 14d527ea0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeIndex8>(void *param_1)

{
  return;
}

// Copy<FStateTreeIndex8> @ 14d527eb0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeIndex8>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FStateTreeIndex8> @ 14d527ee0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FStateTreeIndex8>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  UPackage *pUVar4;
  FPropertyTypeName local_res8 [2];
  
  local_res8[0].Index = (param_1->TypeName).Index;
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16,(UObject *)pUVar4,
                         L"StateTreeIndex16");
  }
  bVar1 = FPropertyTypeName::IsStruct
                    (local_res8,
                     (FName)(Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton)->
                            _padding_);
  if (bVar1) {
    local_res8[0].Index._0_2_ = 0xffff;
    if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16,(UObject *)pUVar4,
                           L"StateTreeIndex16");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton,param_2,local_res8
               ,(void *)0x0);
    if (((short)local_res8[0].Index == -1) || (uVar3 = local_res8[0].Index & 0xffff, 0xfe < uVar3))
    {
      uVar3 = 0xffffffff;
    }
    uVar2 = (undefined1)uVar3;
    if (uVar3 == 0xffffffff) {
      uVar2 = 0xff;
    }
    *(undefined1 *)param_3 = uVar2;
    return true;
  }
  return false;
}

// Construct<FStateTreeStateIdToHandle> @ 14d5280e0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeStateIdToHandle>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FStateTreeStateIdToHandle> @ 14d528100

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeStateIdToHandle>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 0xffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FStateTreeStateIdToHandle> @ 14d528120

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeStateIdToHandle>(void *param_1)

{
  return;
}

// Copy<FStateTreeStateIdToHandle> @ 14d528130

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeStateIdToHandle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreePropertyFunctionCommonBase> @ 14d528170

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreePropertyFunctionCommonBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreePropertyFunctionCommonBase__6B_;
  return;
}

// ConstructForTests<FStateTreePropertyFunctionCommonBase> @ 14d5281c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyFunctionCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreePropertyFunctionCommonBase__6B_;
  return;
}

// Destruct<FStateTreePropertyFunctionCommonBase> @ 14d528200

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyFunctionCommonBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreePropertyFunctionCommonBase> @ 14d528220

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyFunctionCommonBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FCompactStateTreeParameters> @ 14d528400

void __cdecl UE::CoreUObject::Private::Construct<FCompactStateTreeParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct(param_1);
  return;
}

// ConstructForTests<FCompactStateTreeParameters> @ 14d5285e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompactStateTreeParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCompactStateTreeParameters> @ 14d528770

void __cdecl UE::CoreUObject::Private::Destruct<FCompactStateTreeParameters>(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    if ((*(longlong *)param_1 != 0) && ((*(uint *)(*(longlong *)param_1 + 8) & 0x40018000) == 0)) {
      (**(code **)(**(longlong **)param_1 + 0x300))
                (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),1);
    }
    FMemory::Free(pvVar1);
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
    return;
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// Copy<FCompactStateTreeParameters> @ 14d528780

bool __cdecl
UE::CoreUObject::Private::Copy<FCompactStateTreeParameters>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  FInstancedStruct *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FInstancedStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pFVar1) {
        FInstancedStruct::InitializeAs
                  (this,(pFVar1->ScriptStruct).field0_0x0.DebugPtr,pFVar1->StructMemory);
      }
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreePropertyFunctionBase> @ 14d5287e0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreePropertyFunctionBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreePropertyFunctionBase__6B_;
  return;
}

// ConstructForTests<FStateTreePropertyFunctionBase> @ 14d528830

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyFunctionBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreePropertyFunctionBase__6B_;
  return;
}

// Destruct<FStateTreePropertyFunctionBase> @ 14d528870

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyFunctionBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreePropertyFunctionBase> @ 14d5288d0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyFunctionBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FStateTreeIndex16> @ 14d528980

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeIndex16>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FStateTreeIndex16> @ 14d528990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreeIndex16>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// Destruct<FStateTreeIndex16> @ 14d5289a0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeIndex16>(void *param_1)

{
  return;
}

// Copy<FStateTreeIndex16> @ 14d5289f0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeIndex16>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FStateTreeIndex16> @ 14d528a60

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FStateTreeIndex16>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  undefined2 uVar1;
  FName FVar2;
  FArchive *this;
  undefined2 *puVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  UPackage *pUVar6;
  uint uVar7;
  FName FVar8;
  FPropertyTypeName local_res8 [2];
  
  FVar2 = param_1->Type;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (FVar2 == FVar8) {
    local_res8[0].Index = (uint)local_res8[0].Index._2_2_ << 0x10;
    this = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar3 = (undefined2 *)**(undefined8 **)&this->field_0x8;
    if ((undefined2 *)(*(undefined8 **)&this->field_0x8)[1] < puVar3 + 1) {
      if ((this->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this + 0x188))(this,local_res8,2);
        *(undefined2 *)param_3 = (undefined2)local_res8[0].Index;
        bVar4 = true;
      }
      else {
        FArchive::SerializeByteOrderSwapped(this,(ushort *)local_res8);
        *(undefined2 *)param_3 = (undefined2)local_res8[0].Index;
        bVar4 = true;
      }
    }
    else {
      uVar1 = *puVar3;
      **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 2;
      *(undefined2 *)param_3 = uVar1;
      bVar4 = true;
    }
  }
  else {
    local_res8[0].Index = (param_1->TypeName).Index;
    if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8,(UObject *)pUVar6,
                           L"StateTreeIndex8");
    }
    bVar4 = FPropertyTypeName::IsStruct
                      (local_res8,
                       (FName)(Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton)->
                              _padding_);
    if (bVar4) {
      local_res8[0].Index._0_1_ = 0xff;
      if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
        Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8,(UObject *)pUVar6,
                             L"StateTreeIndex8");
      }
      UScriptStruct::SerializeItem
                (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton,param_2,
                 local_res8,(void *)0x0);
      uVar7 = local_res8[0].Index & 0xff;
      if ((char)local_res8[0].Index == -1) {
        uVar7 = 0xffffffff;
      }
      if (uVar7 == 0xffffffff) {
        uVar7 = 0xffff;
      }
      bVar4 = true;
      *(short *)param_3 = (short)uVar7;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

// GetStructTypeHash<FStateTreeIndex16> @ 14d528bf0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FStateTreeIndex16>(void *param_1)

{
  return (uint)*(ushort *)param_1;
}

// Construct<FCompactStateTreeState> @ 14d528cd0

void __cdecl UE::CoreUObject::Private::Construct<FCompactStateTreeState>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x52) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x72) = 0;
  *(undefined2 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x52) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x56) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x2000000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x6000;
  return;
}

// ConstructForTests<FCompactStateTreeState> @ 14d528d70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompactStateTreeState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x52) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x56) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x2000000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x6000;
  return;
}

// Destruct<FCompactStateTreeState> @ 14d528df0

void __cdecl UE::CoreUObject::Private::Destruct<FCompactStateTreeState>(void *param_1)

{
  return;
}

// Copy<FCompactStateTreeState> @ 14d528e00

bool __cdecl
UE::CoreUObject::Private::Copy<FCompactStateTreeState>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      puVar3[4] = puVar1[4];
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar1 + 5);
      *(undefined8 *)((longlong)puVar3 + 0x2c) = *(undefined8 *)((longlong)puVar1 + 0x2c);
      *(undefined4 *)((longlong)puVar3 + 0x34) = *(undefined4 *)((longlong)puVar1 + 0x34);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[7] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[7]);
      }
      puVar3[7] = puVar1[7];
      *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(puVar1 + 8);
      *(undefined2 *)((longlong)puVar3 + 0x42) = *(undefined2 *)((longlong)puVar1 + 0x42);
      *(undefined2 *)((longlong)puVar3 + 0x44) = *(undefined2 *)((longlong)puVar1 + 0x44);
      *(undefined2 *)((longlong)puVar3 + 0x46) = *(undefined2 *)((longlong)puVar1 + 0x46);
      *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar1 + 9);
      *(undefined2 *)((longlong)puVar3 + 0x4a) = *(undefined2 *)((longlong)puVar1 + 0x4a);
      *(undefined2 *)((longlong)puVar3 + 0x4c) = *(undefined2 *)((longlong)puVar1 + 0x4c);
      *(undefined2 *)((longlong)puVar3 + 0x4e) = *(undefined2 *)((longlong)puVar1 + 0x4e);
      *(undefined2 *)(puVar3 + 10) = *(undefined2 *)(puVar1 + 10);
      *(undefined4 *)((longlong)puVar3 + 0x52) = *(undefined4 *)((longlong)puVar1 + 0x52);
      *(undefined2 *)((longlong)puVar3 + 0x56) = *(undefined2 *)((longlong)puVar1 + 0x56);
      *(undefined2 *)(puVar3 + 0xb) = *(undefined2 *)(puVar1 + 0xb);
      *(undefined2 *)((longlong)puVar3 + 0x5a) = *(undefined2 *)((longlong)puVar1 + 0x5a);
      *(undefined4 *)((longlong)puVar3 + 0x5c) = *(undefined4 *)((longlong)puVar1 + 0x5c);
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar1 + 0xc);
      *(undefined4 *)((longlong)puVar3 + 100) = *(undefined4 *)((longlong)puVar1 + 100);
      *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar1 + 0xd);
      *(undefined1 *)((longlong)puVar3 + 0x69) = *(undefined1 *)((longlong)puVar1 + 0x69);
      *(undefined1 *)((longlong)puVar3 + 0x6a) = *(undefined1 *)((longlong)puVar1 + 0x6a);
      *(undefined1 *)((longlong)puVar3 + 0x6b) = *(undefined1 *)((longlong)puVar1 + 0x6b);
      *(undefined1 *)((longlong)puVar3 + 0x6c) = *(undefined1 *)((longlong)puVar1 + 0x6c);
      *(undefined1 *)((longlong)puVar3 + 0x6d) = *(undefined1 *)((longlong)puVar1 + 0x6d);
      *(undefined1 *)((longlong)puVar3 + 0x6e) = *(undefined1 *)((longlong)puVar1 + 0x6e);
      *(undefined1 *)((longlong)puVar3 + 0x6f) = *(undefined1 *)((longlong)puVar1 + 0x6f);
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(puVar1 + 0xe);
      *(undefined1 *)((longlong)puVar3 + 0x71) = *(undefined1 *)((longlong)puVar1 + 0x71);
      *(undefined1 *)((longlong)puVar3 + 0x72) = *(undefined1 *)((longlong)puVar1 + 0x72);
      *(undefined1 *)((longlong)puVar3 + 0x73) = *(undefined1 *)((longlong)puVar1 + 0x73);
      bVar2 = (*(byte *)((longlong)puVar3 + 0x74) ^ *(byte *)((longlong)puVar1 + 0x74)) & 1 ^
              *(byte *)((longlong)puVar3 + 0x74);
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 2 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 4 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 8 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 0x10 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 0x20 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 0x40 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x74) = bVar2;
      *(byte *)((longlong)puVar3 + 0x74) =
           (bVar2 ^ *(byte *)((longlong)puVar1 + 0x74)) & 0x7f ^ *(byte *)((longlong)puVar1 + 0x74);
      bVar2 = (*(byte *)((longlong)puVar3 + 0x75) ^ *(byte *)((longlong)puVar1 + 0x75)) & 1 ^
              *(byte *)((longlong)puVar3 + 0x75);
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 2 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 4 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 8 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 0x10 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 0x20 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      bVar2 = (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 0x40 ^ bVar2;
      *(byte *)((longlong)puVar3 + 0x75) = bVar2;
      *(byte *)((longlong)puVar3 + 0x75) =
           (bVar2 ^ *(byte *)((longlong)puVar1 + 0x75)) & 0x7f ^ *(byte *)((longlong)puVar1 + 0x75);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0xf;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreePropertyBindings> @ 14d529090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::Construct<FStateTreePropertyBindings>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong lStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined ***)param_1 = &___7FStateTreePropertyBindings__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  if (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStructRef,(UObject *)pUVar4,
                         L"StateTreeStructRef");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton != (UScriptStruct *)0x0))
  {
    GC::MarkAsReachable((UObject *)
                        Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton);
  }
  *(UScriptStruct **)((longlong)param_1 + 0x58) = pUVar3;
  lStack_48 = *(longlong *)((longlong)param_1 + 0x60);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x68);
  lStack_38 = *(longlong *)((longlong)param_1 + 0x70);
  uStack_30 = *(undefined8 *)((longlong)param_1 + 0x78);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x80);
  plStack_20 = *(longlong **)((longlong)param_1 + 0x88);
  *(code **)((longlong)param_1 + 0x60) =
       Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),void,FStructProperty_const_&,unsigned_char_*,unsigned_char_*>
       ::Call;
  *(undefined8 *)((longlong)param_1 + 0x68) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x52b48440;
  *(undefined4 *)((longlong)param_1 + 0x74) = 1;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x4d52a2d0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x80) = (undefined4)uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  uStack_28 = uVar1;
  uStack_40 = uVar2;
  if (lStack_48 != 0) {
    plVar5 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  lStack_48 = *(longlong *)((longlong)param_1 + 0x90);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x98);
  lStack_38 = *(longlong *)((longlong)param_1 + 0xa0);
  uStack_30 = *(undefined8 *)((longlong)param_1 + 0xa8);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb0);
  plStack_20 = *(longlong **)((longlong)param_1 + 0xb8);
  *(code **)((longlong)param_1 + 0x90) =
       Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(unsigned_char_*),void,unsigned_char_*>::Call;
  *(undefined8 *)((longlong)param_1 + 0x98) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x52b48460;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x4d52a3e0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb0) = (undefined4)uStack_28;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  uStack_28 = uVar1;
  if (lStack_48 != 0) {
    plVar5 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// ConstructForTests<FStateTreePropertyBindings> @ 14d5290a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyBindings>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong lStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined ***)param_1 = &___7FStateTreePropertyBindings__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  if (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStructRef,(UObject *)pUVar4,
                         L"StateTreeStructRef");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton != (UScriptStruct *)0x0))
  {
    GC::MarkAsReachable((UObject *)
                        Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton);
  }
  *(UScriptStruct **)((longlong)param_1 + 0x58) = pUVar3;
  lStack_48 = *(longlong *)((longlong)param_1 + 0x60);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x68);
  lStack_38 = *(longlong *)((longlong)param_1 + 0x70);
  uStack_30 = *(undefined8 *)((longlong)param_1 + 0x78);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x80);
  plStack_20 = *(longlong **)((longlong)param_1 + 0x88);
  *(code **)((longlong)param_1 + 0x60) =
       Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),void,FStructProperty_const_&,unsigned_char_*,unsigned_char_*>
       ::Call;
  *(undefined8 *)((longlong)param_1 + 0x68) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x52b48440;
  *(undefined4 *)((longlong)param_1 + 0x74) = 1;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x4d52a2d0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x80) = (undefined4)uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  uStack_28 = uVar1;
  uStack_40 = uVar2;
  if (lStack_48 != 0) {
    plVar5 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  lStack_48 = *(longlong *)((longlong)param_1 + 0x90);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x98);
  lStack_38 = *(longlong *)((longlong)param_1 + 0xa0);
  uStack_30 = *(undefined8 *)((longlong)param_1 + 0xa8);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb0);
  plStack_20 = *(longlong **)((longlong)param_1 + 0xb8);
  *(code **)((longlong)param_1 + 0x90) =
       Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(unsigned_char_*),void,unsigned_char_*>::Call;
  *(undefined8 *)((longlong)param_1 + 0x98) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x52b48460;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x4d52a3e0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb0) = (undefined4)uStack_28;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  uStack_28 = uVar1;
  if (lStack_48 != 0) {
    plVar5 = &lStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// Destruct<FStateTreePropertyBindings> @ 14d5290b0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyBindings>(void *param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  DestructItems<FStateTreePropertyRefPath,int>
            (*(FStateTreePropertyRefPath **)((longlong)param_1 + 0xe0),
             *(int *)((longlong)param_1 + 0xe8));
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  DestructItems<FStateTreePropertyPathBinding,int>
            (*(FStateTreePropertyPathBinding **)((longlong)param_1 + 0xd0),
             *(int *)((longlong)param_1 + 0xd8));
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  DestructItems<FStateTreeBindableStructDesc,int>
            (*(FStateTreeBindableStructDesc **)((longlong)param_1 + 0xc0),
             *(int *)((longlong)param_1 + 200));
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0xa0);
    if (*(longlong **)((longlong)param_1 + 0xb8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0xb8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x70);
    if (*(longlong **)((longlong)param_1 + 0x88) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x88);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FPropertyBindingCopyInfo,int>
            (*(FPropertyBindingCopyInfo **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FPropertyBindingCopyInfoBatch,int>
            (*(FPropertyBindingCopyInfoBatch **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FStateTreePropertyBindings> @ 14d529100

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyBindings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FPropertyBindingBindingCollection *pFVar2;
  TArray<FPropertyBindingCopyInfoBatch,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPropertyBindingCopyInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FPropertyBindingPropertyIndirection,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  FStateTreeBindableStructDesc *pFVar8;
  FStateTreePropertyPathBinding *pFVar9;
  FStateTreePropertyRefPath *pFVar10;
  FStateTreePropertyAccess *pFVar11;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FPropertyBindingBindingCollection::operator=(param_1,param_2);
    pFVar2 = (FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0);
    if (pFVar2 != (FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0)) {
      DestructItems<FStateTreeBindableStructDesc,int>
                ((FStateTreeBindableStructDesc *)pFVar2->_padding_,
                 (int)((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->_padding_);
      iVar7 = (int)((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->_padding_;
      piVar1 = (int *)((longlong)
                       &((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->_padding_
                      + 4);
      pFVar8 = (FStateTreeBindableStructDesc *)
               ((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->_padding_;
      iVar6 = *piVar1;
      *(int *)&((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->_padding_ = iVar7;
      if ((iVar7 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar7,iVar6,(ForAnyElementType *)pFVar2,iVar7,piVar1);
        ConstructItems<FStateTreeBindableStructDesc,FStateTreeBindableStructDesc,int>
                  ((FScriptContainerElement *)pFVar2->_padding_,pFVar8,iVar7);
      }
    }
    pTVar3 = &((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->CopyBatches;
    if (pTVar3 != &((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->CopyBatches) {
      DestructItems<FStateTreePropertyPathBinding,int>
                ((FStateTreePropertyPathBinding *)(pTVar3->AllocatorInstance).Data,
                 (((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->CopyBatches).
                 ArrayNum);
      iVar7 = (((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->CopyBatches).
              ArrayNum;
      piVar1 = &(((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->CopyBatches).
                ArrayMax;
      pFVar9 = (FStateTreePropertyPathBinding *)
               (((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->CopyBatches).
               AllocatorInstance.Data;
      iVar6 = *piVar1;
      (((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->CopyBatches).ArrayNum =
           iVar7;
      if ((iVar7 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar7,iVar6,&pTVar3->AllocatorInstance,iVar7,piVar1);
        ConstructItems<FStateTreePropertyPathBinding,FStateTreePropertyPathBinding,int>
                  ((pTVar3->AllocatorInstance).Data,pFVar9,iVar7);
      }
    }
    pTVar4 = &((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->PropertyCopies;
    if (pTVar4 != &((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->PropertyCopies
       ) {
      DestructItems<FStateTreePropertyRefPath,int>
                ((FStateTreePropertyRefPath *)(pTVar4->AllocatorInstance).Data,
                 (((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->PropertyCopies)
                 .ArrayNum);
      iVar7 = (((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->PropertyCopies).
              ArrayNum;
      piVar1 = &(((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->PropertyCopies).
                ArrayMax;
      pFVar10 = (FStateTreePropertyRefPath *)
                (((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->PropertyCopies).
                AllocatorInstance.Data;
      iVar6 = *piVar1;
      (((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->PropertyCopies).ArrayNum =
           iVar7;
      if ((iVar7 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar7,iVar6,&pTVar4->AllocatorInstance,iVar7,piVar1);
        ConstructItems<FStateTreePropertyRefPath,FStateTreePropertyRefPath,int>
                  ((pTVar4->AllocatorInstance).Data,pFVar10,iVar7);
      }
    }
    pTVar5 = &((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->
              PropertyIndirections;
    if (pTVar5 != &((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->
                   PropertyIndirections) {
      iVar7 = (((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->
              PropertyIndirections).ArrayNum;
      piVar1 = &(((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->
                PropertyIndirections).ArrayMax;
      pFVar11 = (FStateTreePropertyAccess *)
                (((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->
                PropertyIndirections).AllocatorInstance.Data;
      iVar6 = *piVar1;
      (((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->PropertyIndirections).
      ArrayNum = iVar7;
      if ((iVar7 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar7,iVar6,&pTVar5->AllocatorInstance,iVar7,piVar1);
        ConstructItems<FStateTreePropertyAccess,FStateTreePropertyAccess,int>
                  ((pTVar5->AllocatorInstance).Data,pFVar11,iVar7);
      }
    }
    param_1 = &((FPropertyBindingBindingCollection *)((longlong)param_1 + 0xc0))->bBindingsResolved;
    param_2 = &((FPropertyBindingBindingCollection *)((longlong)param_2 + 0xc0))->bBindingsResolved;
  }
  return true;
}

// Construct<FCompactStateTreeFrame> @ 14d529480

void __cdecl UE::CoreUObject::Private::Construct<FCompactStateTreeFrame>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FCompactStateTreeFrame> @ 14d529490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompactStateTreeFrame>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FCompactStateTreeFrame> @ 14d5294a0

void __cdecl UE::CoreUObject::Private::Destruct<FCompactStateTreeFrame>(void *param_1)

{
  return;
}

// Copy<FCompactStateTreeFrame> @ 14d5294b0

bool __cdecl
UE::CoreUObject::Private::Copy<FCompactStateTreeFrame>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreePropertyAccess> @ 14d5294e0

void __cdecl UE::CoreUObject::Private::Construct<FStateTreePropertyAccess>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)param_1 = 0xffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// ConstructForTests<FStateTreePropertyAccess> @ 14d529520

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyAccess>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffff;
  *(undefined2 *)((longlong)param_1 + 4) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// Destruct<FStateTreePropertyAccess> @ 14d529560

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyAccess>(void *param_1)

{
  return;
}

// Copy<FStateTreePropertyAccess> @ 14d5295b0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyAccess>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined2 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined2 *)((longlong)pvVar1 + 2);
      puVar2[2] = *(undefined2 *)((longlong)pvVar1 + 4);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 6);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 8));
      }
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)pvVar1 + 8);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)((longlong)pvVar1 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x20));
      }
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)((longlong)pvVar1 + 0x20);
      *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)((longlong)pvVar1 + 0x28);
      puVar2[0x16] = *(undefined2 *)((longlong)pvVar1 + 0x2c);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x30);
      puVar2 = puVar2 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreeRunParallelStateTreeTask> @ 14d529730

void __cdecl UE::CoreUObject::Private::Construct<FStateTreeRunParallelStateTreeTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeRunParallelStateTreeTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2a3;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FStateTreeRunParallelStateTreeTask> @ 14d529780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeRunParallelStateTreeTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FStateTreeRunParallelStateTreeTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2a3;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FStateTreeRunParallelStateTreeTask> @ 14d5297d0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreeRunParallelStateTreeTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FStateTreeRunParallelStateTreeTask> @ 14d5297f0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeRunParallelStateTreeTask>
          (void *param_1,void *param_2,int param_3)

{
  FStateTreeTaskBase *pFVar1;
  FStateTreeTaskBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FStateTreeTaskBase *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FStateTreeTaskBase::operator=(this,pFVar1);
      this[1]._padding_ = pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FStateTreeTaskBase *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCompactStateTransition> @ 14d5298c0

void __cdecl UE::CoreUObject::Private::Construct<FCompactStateTransition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffff0000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x200;
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) & 0xfd | 5;
  return;
}

// ConstructForTests<FCompactStateTransition> @ 14d529900

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompactStateTransition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffff0000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x200;
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) & 0xfd | 5;
  return;
}

// Destruct<FCompactStateTransition> @ 14d529940

void __cdecl UE::CoreUObject::Private::Destruct<FCompactStateTransition>(void *param_1)

{
  return;
}

// Copy<FCompactStateTransition> @ 14d529950

bool __cdecl
UE::CoreUObject::Private::Copy<FCompactStateTransition>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      uVar2 = puVar1[3];
      puVar4[2] = puVar1[2];
      puVar4[3] = uVar2;
      puVar4[4] = puVar1[4];
      *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar1 + 5);
      *(undefined2 *)((longlong)puVar4 + 0x2c) = *(undefined2 *)((longlong)puVar1 + 0x2c);
      *(undefined2 *)((longlong)puVar4 + 0x2e) = *(undefined2 *)((longlong)puVar1 + 0x2e);
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar1 + 6);
      *(undefined1 *)((longlong)puVar4 + 0x34) = *(undefined1 *)((longlong)puVar1 + 0x34);
      *(undefined1 *)((longlong)puVar4 + 0x35) = *(undefined1 *)((longlong)puVar1 + 0x35);
      *(undefined1 *)((longlong)puVar4 + 0x36) = *(undefined1 *)((longlong)puVar1 + 0x36);
      *(undefined1 *)((longlong)puVar4 + 0x37) = *(undefined1 *)((longlong)puVar1 + 0x37);
      bVar3 = (*(byte *)(puVar4 + 7) ^ *(byte *)(puVar1 + 7)) & 1 ^ *(byte *)(puVar4 + 7);
      *(byte *)(puVar4 + 7) = bVar3;
      bVar3 = (bVar3 ^ *(byte *)(puVar1 + 7)) & 2 ^ bVar3;
      *(byte *)(puVar4 + 7) = bVar3;
      *(byte *)(puVar4 + 7) = (bVar3 ^ *(byte *)(puVar1 + 7)) & 4 ^ bVar3;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreePropertyRefPath> @ 14d529a60

void __cdecl UE::CoreUObject::Private::Construct<FStateTreePropertyRefPath>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// ConstructForTests<FStateTreePropertyRefPath> @ 14d529a90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyRefPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  return;
}

// Destruct<FStateTreePropertyRefPath> @ 14d529ac0

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyRefPath>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FStateTreePropertyRefPath> @ 14d529ae0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyRefPath>(void *param_1,void *param_2,int param_3)

{
  FPropertyBindingPath *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPropertyBindingPath *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPropertyBindingPath::operator=((FPropertyBindingPath *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Segments.AllocatorInstance.Data;
      *(undefined2 *)(this + 5) =
           *(undefined2 *)((longlong)&pFVar1[1].Segments.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCompactEventDesc> @ 14d529c70

void __cdecl UE::CoreUObject::Private::Construct<FCompactEventDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCompactEventDesc> @ 14d529c80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompactEventDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCompactEventDesc> @ 14d529c90

void __cdecl UE::CoreUObject::Private::Destruct<FCompactEventDesc>(void *param_1)

{
  return;
}

// Construct<FStateTreeRunParallelStateTreeExecutionExtension> @ 14d529ca0

void __cdecl
UE::CoreUObject::Private::Construct<FStateTreeRunParallelStateTreeExecutionExtension>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x42) = 0;
  *(undefined2 *)((longlong)param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &___7FStateTreeRunParallelStateTreeExecutionExtension__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0xffff;
  return;
}

// ConstructForTests<FStateTreeRunParallelStateTreeExecutionExtension> @ 14d529ce0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreeRunParallelStateTreeExecutionExtension>
          (void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x40) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FStateTreeRunParallelStateTreeExecutionExtension__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FStateTreeRunParallelStateTreeExecutionExtension> @ 14d529d20

void __cdecl
UE::CoreUObject::Private::Destruct<FStateTreeRunParallelStateTreeExecutionExtension>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FCompactEventDesc> @ 14d529d80

bool __cdecl
UE::CoreUObject::Private::Copy<FCompactEventDesc>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FStateTreePropertyPathBinding> @ 14d529e10

void __cdecl UE::CoreUObject::Private::Construct<FStateTreePropertyPathBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreePropertyPathBinding__6B_;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  return;
}

// ConstructForTests<FStateTreePropertyPathBinding> @ 14d529e50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStateTreePropertyPathBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreePropertyPathBinding__6B_;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  return;
}

// Destruct<FStateTreePropertyPathBinding> @ 14d529e90

void __cdecl UE::CoreUObject::Private::Destruct<FStateTreePropertyPathBinding>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FStateTreeRunParallelStateTreeExecutionExtension> @ 14d529ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreeRunParallelStateTreeExecutionExtension>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *pvVar6;
  
  pvVar6 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar6 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar6);
    *(undefined8 *)((longlong)pvVar6 + 0x10) =
         *(undefined8 *)((longlong)pvVar6 + (longlong)param_2 + (0x10 - (longlong)param_1));
    lVar3 = *(longlong *)((longlong)pvVar6 + (longlong)param_2 + (0x20 - (longlong)param_1));
    uVar4 = *(undefined8 *)((longlong)pvVar6 + (longlong)param_2 + (0x18 - (longlong)param_1));
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)((longlong)pvVar6 + 0x20);
    *(undefined8 *)((longlong)pvVar6 + 0x18) = uVar4;
    *(longlong *)((longlong)pvVar6 + 0x20) = lVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    lVar3 = *(longlong *)((longlong)pvVar6 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar4 = *(undefined8 *)((longlong)pvVar6 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)((longlong)pvVar6 + 0x30);
    *(undefined8 *)((longlong)pvVar6 + 0x28) = uVar4;
    *(longlong *)((longlong)pvVar6 + 0x30) = lVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(undefined4 *)((longlong)pvVar6 + 0x38) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x3c) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x3c - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar6 + 0x40) =
         *(undefined2 *)((longlong)pvVar6 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x48) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x48 - (longlong)param_1));
    pvVar6 = (void *)((longlong)pvVar6 + 0x50);
  }
  return true;
}

// Copy<FStateTreePropertyPathBinding> @ 14d529ff0

bool __cdecl
UE::CoreUObject::Private::Copy<FStateTreePropertyPathBinding>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      pvVar1 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar2);
      if (pvVar2 != pvVar1) {
        FPropertyBindingPath::operator=
                  ((FPropertyBindingPath *)((longlong)pvVar2 + 8),
                   (FPropertyBindingPath *)((longlong)pvVar1 + 8));
        FPropertyBindingPath::operator=
                  ((FPropertyBindingPath *)((longlong)pvVar2 + 0x18),
                   (FPropertyBindingPath *)((longlong)pvVar1 + 0x18));
      }
      *(undefined4 *)((longlong)pvVar2 + 0x28) = *(undefined4 *)((longlong)pvVar1 + 0x28);
      *(undefined2 *)((longlong)pvVar2 + 0x2c) = *(undefined2 *)((longlong)pvVar1 + 0x2c);
      *(undefined1 *)((longlong)pvVar2 + 0x2e) = *(undefined1 *)((longlong)pvVar1 + 0x2e);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// CheckStructType<FStateTreeDataHandle> @ 14d52a880

void __cdecl UE::StructUtils::CheckStructType<FStateTreeDataHandle>(void)

{
  return;
}

// CheckStructType<FStateTreeRunParallelStateTreeExecutionExtension> @ 14d52a890

void __cdecl
UE::StructUtils::CheckStructType<FStateTreeRunParallelStateTreeExecutionExtension>(void)

{
  return;
}

// DereferenceIfNecessary<FStateTreeModule,FStateTreeModule_*_&> @ 14d52ab90

FStateTreeModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FStateTreeModule,FStateTreeModule_*_&>
          (FStateTreeModule **param_1)

{
  return *param_1;
}

// GetStructRef<FStateTreeDataHandle_const_> @ 14d52b960

FStateTreeDataHandle * __cdecl
UE::StructUtils::GetStructRef<FStateTreeDataHandle_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeDataHandle *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
    if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d52ba5b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d52ba5b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FStateTreeDataHandle_const_> @ 14d52bb40

FStateTreeDataHandle * __cdecl
UE::StructUtils::GetStructRef<FStateTreeDataHandle_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeDataHandle *pFVar4;
  UPackage *pUVar5;
  FString FStack_28;
  FString FStack_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
    if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d52ba5b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d52ba5b:
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton,&FStack_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
  return pFVar4;
}

// AcceptTaskInstanceData @ 14d52d900

bool __cdecl UE::StateTree::AcceptTaskInstanceData(EStateTreeBindableStructSource param_1)

{
  if (((param_1 - StateParameter & 0xfc) == 0) && (param_1 != Task)) {
    return false;
  }
  return true;
}

// Darken @ 14d52e270

FColor __cdecl UE::StateTree::Colors::Darken(FColor param_1,float param_2)

{
  undefined4 in_register_0000000c;
  char *pcVar1;
  uint in_EDX;
  int iVar2;
  int iVar3;
  float in_XMM2_Da;
  float fVar4;
  
  pcVar1 = (char *)CONCAT44(in_register_0000000c,param_1.field0_0x0);
  fVar4 = in_XMM2_Da * __real_437f0000;
  if (__real_437f0000 <= in_XMM2_Da * __real_437f0000) {
    fVar4 = __real_437f0000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  iVar3 = (int)fVar4;
  iVar2 = (in_EDX & 0xff) * iVar3;
  *pcVar1 = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
            (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  iVar2 = (in_EDX >> 8 & 0xff) * iVar3;
  pcVar1[1] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
              (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
  iVar3 = (in_EDX >> 0x10 & 0xff) * iVar3;
  pcVar1[3] = (char)(in_EDX >> 0x18);
  pcVar1[2] = ((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
              (char)((longlong)iVar3 * 0x80808081 >> 0x3f);
  return (FColor)param_1.field0_0x0;
}

// GetBoolText @ 14d52fcf0

FText * __cdecl
UE::StateTree::DescHelpers::GetBoolText
          (FText *__return_storage_ptr__,bool param_1,EStateTreeNodeFormatting param_2)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  FText local_28;
  FText local_18;
  
  pwVar2 = L"True";
  if (!param_1) {
    pwVar2 = L"False";
  }
  pFVar1 = &local_28;
  if (param_1) {
    pFVar1 = &local_18;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(pFVar1,L"StateTree",pwVar2,pwVar2);
  FText::FText(__return_storage_ptr__,pFVar1);
  if ((!param_1 + 1U & 2) != 0) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((param_1) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDescAndPathAsString @ 14d52fee0

FString * __cdecl
UE::StateTree::GetDescAndPathAsString
          (FString *__return_storage_ptr__,FStateTreeBindableStructDesc *param_1,
          FPropertyBindingPath *param_2)

{
  PropertyBinding::GetDescriptorAndPathAsString
            (__return_storage_ptr__,(FPropertyBindingBindableStructDescriptor *)param_1,param_2);
  return __return_storage_ptr__;
}

// GetExactMatchText @ 14d52ff00

FText * __cdecl
UE::StateTree::DescHelpers::GetExactMatchText
          (FText *__return_storage_ptr__,bool param_1,EStateTreeNodeFormatting param_2)

{
  ITextData *pIVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  int iVar5;
  TRefCountPtr<ITextData> TVar6;
  undefined4 local_res18 [2];
  FText local_28;
  FText local_18;
  
  local_res18[0] = 0;
  if (param_2 == RichText) {
    if (param_1) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"StateTree",L"ExactlyRich",L"<s>exactly</> ");
      iVar5 = 1;
      bVar2 = false;
      TVar6.Reference = local_28.TextData.Reference;
    }
    else {
      pFVar4 = FText::GetEmpty();
      TVar6.Reference = (pFVar4->TextData).Reference;
      local_28.TextData.Reference = TVar6.Reference;
      if (TVar6.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res18);
      }
      pFVar3 = &local_28;
      local_28.Flags = pFVar4->Flags;
      iVar5 = 0;
      bVar2 = true;
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    if ((bVar2) && (TVar6.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
    }
  }
  else {
    if (param_1) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_18,L"StateTree",L"Exactly",L"exactly ");
      iVar5 = 4;
      bVar2 = false;
      TVar6.Reference = local_28.TextData.Reference;
    }
    else {
      pFVar4 = FText::GetEmpty();
      TVar6.Reference = (pFVar4->TextData).Reference;
      local_28.TextData.Reference = TVar6.Reference;
      if (TVar6.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res18);
      }
      pFVar3 = &local_28;
      local_28.Flags = pFVar4->Flags;
      iVar5 = 0;
      bVar2 = true;
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    if ((bVar2) && (TVar6.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
    }
  }
  if ((iVar5 != 0) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetGameplayTagContainerAsText @ 14d5300c0

FText * __cdecl
UE::StateTree::DescHelpers::GetGameplayTagContainerAsText
          (FText *__return_storage_ptr__,FGameplayTagContainer *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FText *pFVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar9 = (param_1->GameplayTags).ArrayNum;
  if (uVar9 == 0) {
    FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"StateTree",L"Empty",L"Empty");
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar11 = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    for (uVar7 = 0; uVar7 != uVar9; uVar7 = uVar7 + 1) {
      uVar3 = uVar11;
      if ((int)uVar7 < (param_1->GameplayTags).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar1)();
          return pFVar5;
        }
      }
      ::FName::ToString((FName *)((param_1->GameplayTags).AllocatorInstance.Data +
                                 (longlong)(int)uVar7 * 8),&local_38);
      uVar4 = 0;
      uVar3 = local_48.Data.ArrayNum - 1;
      if (local_48.Data.ArrayNum == 0) {
        uVar3 = uVar4;
      }
      if (0 < (int)uVar3) {
        ::FString::AppendChars(&local_48,L", ",2);
      }
      iVar10 = local_38.Data.ArrayNum;
      uVar3 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar3 = uVar11;
      }
      uVar8 = local_48.Data.ArrayNum - 1;
      if (local_48.Data.ArrayNum == 0) {
        uVar8 = uVar11;
      }
      if (param_2 < (int)(uVar3 + uVar8)) {
        if (uVar8 == 0) {
          if (param_2 < (int)uVar3) {
            uVar3 = param_2;
          }
          uVar9 = uVar4;
          if (0 < (int)uVar3) {
            uVar9 = uVar3;
          }
          FVar6.Data = (FScriptContainerElement *)L"";
          if (iVar10 != 0) {
            FVar6.Data = local_38.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar6.Data,uVar9);
          uVar9 = local_28.Data.ArrayNum - 1;
          if (local_28.Data.ArrayNum == 0) {
            uVar9 = uVar4;
          }
          ::FString::AppendChars(&local_48,(wchar_t *)local_28.Data.AllocatorInstance.Data,uVar9);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        ::FString::AppendChars(&local_48,L"...",3);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        break;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar3);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FText::FromString(__return_storage_ptr__,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetGameplayTagQueryAsText @ 14d5302d0

FText * __cdecl
UE::StateTree::DescHelpers::GetGameplayTagQueryAsText
          (FText *__return_storage_ptr__,FGameplayTagQuery *param_1,int param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  FText *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FString local_28;
  FText local_18;
  
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"StateTree",L"Empty",L"Empty");
  lVar2 = 0x38;
  if (1 < (param_1->UserDescription).Data.ArrayNum) {
    lVar2 = 0x28;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum =
       *(uint *)((longlong)&(param_1->TagDictionary).AllocatorInstance.Data + lVar2);
  lVar5 = (longlong)local_28.Data.ArrayNum;
  _Src = *(void **)((longlong)&param_1->TokenStreamVersion + lVar2);
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  if (1 < local_28.Data.ArrayNum) {
    iVar1 = local_28.Data.ArrayNum - 1;
    if (local_28.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    if (0x78 < iVar1) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar4.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize((FString *)&local_18,(wchar_t *)FVar4.Data,0x78);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_18.TextData.Reference;
      local_28.Data.ArrayNum = local_18.Flags;
      local_28.Data.ArrayMax = local_18._12_4_;
      ::FString::AppendChars(&local_28,L"...",3);
    }
    pFVar3 = FText::FromString(&local_18,&local_28);
    FText::operator=(__return_storage_ptr__,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetIntervalText @ 14d530520

FText * __cdecl
UE::StateTree::DescHelpers::GetIntervalText
          (FText *__return_storage_ptr__,FFloatInterval *param_1,EStateTreeNodeFormatting param_2)

{
  GetIntervalText(__return_storage_ptr__,*(float *)param_1,*(float *)&param_1->field_0x4,param_2);
  return __return_storage_ptr__;
}

// GetIntervalText @ 14d530550

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::StateTree::DescHelpers::GetIntervalText
          (FText *__return_storage_ptr__,FText *param_1,FText *param_2,
          EStateTreeNodeFormatting param_3)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TRefCountPtr<ITextData> TVar3;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  FText::FText(__return_storage_ptr__);
  if (param_3 == RichText) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"StateTree",L"IntervalRich",L"[{Min}<s>,</> {Max}]");
    pFVar2 = FTextFormat::FTextFormat(&local_18,pFVar1,Default);
    pFVar1 = FText::
             FormatNamed<wchar_t_const_(&)[4],FText_const_&,wchar_t_const_(&)[4],FText_const_&>
                       (&local_38,pFVar2,(wchar_t (*) [4])L"Min",param_1,(wchar_t (*) [4])L"Max",
                        param_2);
    FText::operator=(__return_storage_ptr__,pFVar1);
    TVar3.Reference = local_28.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      TVar3.Reference = local_28.TextData.Reference;
    }
  }
  else {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"StateTree",L"Interval",L"[{Min}, {Max}]");
    pFVar2 = FTextFormat::FTextFormat(&local_18,pFVar1,Default);
    pFVar1 = FText::
             FormatNamed<wchar_t_const_(&)[4],FText_const_&,wchar_t_const_(&)[4],FText_const_&>
                       (&local_28,pFVar2,(wchar_t (*) [4])L"Min",param_1,(wchar_t (*) [4])L"Max",
                        param_2);
    FText::operator=(__return_storage_ptr__,pFVar1);
    TVar3.Reference = local_38.TextData.Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      TVar3.Reference = local_38.TextData.Reference;
    }
  }
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetIntervalText @ 14d530690

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::StateTree::DescHelpers::GetIntervalText
          (FText *__return_storage_ptr__,float param_1,float param_2,
          EStateTreeNodeFormatting param_3)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  TSharedPtr<FCulture,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FNumberFormattingOptions local_48 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(local_48);
  local_48[0].MinimumFractionalDigits = 1;
  local_48[0].MaximumFractionalDigits = 2;
  local_a8.Object = (FCulture *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(&local_88,param_1,local_48,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  local_a8.Object = (FCulture *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(&local_98,param_2,local_48,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  FText::FText(__return_storage_ptr__);
  if (param_3 == RichText) {
    pwVar5 = L"[{Min}<s>,</> {Max}]";
    pwVar4 = L"IntervalRich";
  }
  else {
    pwVar5 = L"[{Min}, {Max}]";
    pwVar4 = L"Interval";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(&local_68,L"StateTree",pwVar4,pwVar5);
  pFVar2 = FTextFormat::FTextFormat(&local_58,pFVar1,Default);
  local_a8.Object = (FCulture *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_a8,0,
             (int *)((longlong)&local_a8.SharedReferenceCount.ReferenceController + 4));
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[4]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_a8,(wchar_t (*) [4])L"Min");
  ::FString::FString((FString *)pTVar3,L"Min");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,&local_88);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[4]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_a8,(wchar_t (*) [4])L"Max");
  ::FString::FString((FString *)pTVar3,L"Max");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,&local_98);
  FText::FormatNamedImpl
            (&local_78,pFVar2,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_a8);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_a8.Object,
             (int)local_a8.SharedReferenceCount.ReferenceController);
  if (local_a8.Object != (FCulture *)0x0) {
    FMemory::Free(local_a8.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->TextFormatData).SharedReferenceCount.ReferenceController);
  FText::operator=(__return_storage_ptr__,&local_78);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInvertText @ 14d5308c0

FText * __cdecl
UE::StateTree::DescHelpers::GetInvertText
          (FText *__return_storage_ptr__,bool param_1,EStateTreeNodeFormatting param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 local_res10 [8];
  FText local_18;
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  if (param_1) {
    if (param_2 == RichText) {
      pwVar4 = L"<s>Not</>  ";
      pwVar3 = L"InvertRich";
    }
    else {
      pwVar4 = L"Not  ";
      pwVar3 = L"Invert";
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_18,L"StateTree",pwVar3,pwVar4);
    FText::operator=(__return_storage_ptr__,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetMathOperationText @ 14d530980

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::StateTree::DescHelpers::GetMathOperationText
          (FText *__return_storage_ptr__,FText *param_1,FText *param_2,FText *param_3,
          EStateTreeNodeFormatting param_4)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_58;
  FText local_48;
  FText local_38;
  
  pwVar5 = L"({Left} <s>{Operation}</> {Right})";
  pFVar1 = &local_38;
  pwVar4 = L"MathFuncRich";
  if (param_4 != RichText) {
    pwVar5 = L"({Left} {Operation} {Right})";
    pwVar4 = L"MathFunc";
    pFVar1 = &local_58;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(pFVar1,L"StateTree",pwVar4,pwVar5);
  FText::FText(&local_48,pFVar1);
  if ((((param_4 != RichText) + 1U & 2) != 0) && (local_58.TextData.Reference != (ITextData *)0x0))
  {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if ((param_4 == RichText) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar2 = FTextFormat::FTextFormat((FTextFormat *)&local_38,&local_48,Default);
  local_58.TextData.Reference = (ITextData *)0x0;
  local_58.Flags = 0;
  local_58._12_4_ = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,3,(ForAnyElementType *)&local_58,0,(int *)&local_58.field_0xc);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[5]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_58,(wchar_t (*) [5])L"Left");
  ::FString::FString((FString *)pTVar3,L"Left");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,param_2);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[10]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_58,(wchar_t (*) [10])L"Operation");
  ::FString::FString((FString *)pTVar3,L"Operation");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,param_1);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_58,(wchar_t (*) [6])L"Right");
  ::FString::FString((FString *)pTVar3,L"Right");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,param_3);
  FText::FormatNamedImpl
            (__return_storage_ptr__,pFVar2,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_58);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_58.TextData.Reference,local_58.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_58.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_58.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOperatorText @ 14d530bd0

FText * __cdecl
UE::StateTree::DescHelpers::GetOperatorText
          (FText *__return_storage_ptr__,EGenericAICheck param_1,EStateTreeNodeFormatting param_2)

{
  if (Greater < param_1) {
    FText::FromString(__return_storage_ptr__,L"??");
    return __return_storage_ptr__;
  }
  if (param_2 == RichText) {
    switch(param_1) {
    case Less:
      FText::FromString(__return_storage_ptr__,L"<s>&lt;</>");
      return __return_storage_ptr__;
    case LessOrEqual:
      FText::FromString(__return_storage_ptr__,L"<s>&lt;=</>");
      return __return_storage_ptr__;
    case Equal:
      FText::FromString(__return_storage_ptr__,L"<s>==</>");
      return __return_storage_ptr__;
    case NotEqual:
      FText::FromString(__return_storage_ptr__,L"<s>!=</>");
      return __return_storage_ptr__;
    case GreaterOrEqual:
      FText::FromString(__return_storage_ptr__,L"<s>&gt;=</>");
      return __return_storage_ptr__;
    case Greater:
      FText::FromString(__return_storage_ptr__,L"<s>&gt;</>");
      return __return_storage_ptr__;
    }
  }
  switch(param_1) {
  case Less:
    FText::FromString(__return_storage_ptr__,L"<");
    return __return_storage_ptr__;
  case LessOrEqual:
    FText::FromString(__return_storage_ptr__,L"<=");
    return __return_storage_ptr__;
  case Equal:
    FText::FromString(__return_storage_ptr__,L"==");
    return __return_storage_ptr__;
  case NotEqual:
    FText::FromString(__return_storage_ptr__,L"!=");
    return __return_storage_ptr__;
  case GreaterOrEqual:
    FText::FromString(__return_storage_ptr__,L">=");
    return __return_storage_ptr__;
  case Greater:
    FText::FromString(__return_storage_ptr__,L">");
    return __return_storage_ptr__;
  }
}

// GetSingleParamFunctionText @ 14d530f00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::StateTree::DescHelpers::GetSingleParamFunctionText
          (FText *__return_storage_ptr__,FText *param_1,FText *param_2,
          EStateTreeNodeFormatting param_3)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_48;
  FText local_38;
  FText local_28;
  
  pwVar5 = L"<s>{Function}</>({Input})";
  pwVar4 = L"SingleParamFuncRich";
  pFVar1 = &local_28;
  if (param_3 != RichText) {
    pwVar5 = L"{Function}({Input})";
    pwVar4 = L"SingleParamFunc";
    pFVar1 = &local_48;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(pFVar1,L"StateTree",pwVar4,pwVar5);
  FText::FText(&local_38,pFVar1);
  if ((((param_3 != RichText) + 1U & 2) != 0) && (local_48.TextData.Reference != (ITextData *)0x0))
  {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if ((param_3 == RichText) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar2 = FTextFormat::FTextFormat((FTextFormat *)&local_28,&local_38,Default);
  local_48.TextData.Reference = (ITextData *)0x0;
  local_48.Flags = 0;
  local_48._12_4_ = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_48,0,(int *)&local_48.field_0xc);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[9]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_48,(wchar_t (*) [9])L"Function");
  ::FString::FString((FString *)pTVar3,L"Function");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,param_1);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>
                     ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                       *)&local_48,(wchar_t (*) [6])L"Input");
  ::FString::FString((FString *)pTVar3,L"Input");
  Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar3->field_0x10,
             ForwardingConstructor,param_2);
  FText::FormatNamedImpl
            (__return_storage_ptr__,pFVar2,
             (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              *)&local_48);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.TextData.Reference,local_48.Flags);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.TextData.Reference !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.TextData.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar2->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetText @ 14d531320

FText * __cdecl
UE::StateTree::DescHelpers::GetText
          (FText *__return_storage_ptr__,TVector<double> *param_1,EStateTreeNodeFormatting param_2)

{
  UE::Math::TVector<double>::ToCompactText(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetText @ 14d531350

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UE::StateTree::DescHelpers::GetText
          (FText *__return_storage_ptr__,int param_1,EStateTreeNodeFormatting param_2)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,param_1,(FNumberFormattingOptions *)0x0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetText @ 14d531390

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
UE::StateTree::DescHelpers::GetText
          (FText *__return_storage_ptr__,float param_1,EStateTreeNodeFormatting param_2)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,param_1,(FNumberFormattingOptions *)0x0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetText @ 14d5313d0

FText * __cdecl
UE::StateTree::DescHelpers::GetText
          (FText *__return_storage_ptr__,UObject *param_1,EStateTreeNodeFormatting param_2)

{
  FName local_res8 [4];
  
  if (param_1 == (UObject *)0x0) {
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
  }
  else {
    local_res8[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8[0].Number = *(uint *)&param_1->field_0x1c;
  }
  FText::FromName(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// IsBlueprintPropertyRefCompatibleWithProperty @ 14d531c00

bool __cdecl
UE::StateTree::PropertyRefHelpers::IsBlueprintPropertyRefCompatibleWithProperty
          (FProperty *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  if ((*(byte *)((longlong)param_2 + 3) & 1) != 0) {
    if (param_1 == (FProperty *)0x0) {
      return false;
    }
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0) {
      return false;
    }
    param_1 = (FProperty *)param_1[1]._padding_;
  }
  switch(*(undefined1 *)((longlong)param_2 + 2)) {
  case 0:
    break;
  case 1:
    return (bool)((byte)(*(uint *)(param_1->_padding_ + 0x18) >> 0x11) & 1);
  case 2:
    return (bool)(*(byte *)(param_1->_padding_ + 0x18) >> 6 & 1);
  case 3:
    return (bool)(*(byte *)(param_1->_padding_ + 0x18) >> 7);
  case 4:
    return (bool)((byte)(*(uint *)(param_1->_padding_ + 0x18) >> 0x16) & 1);
  case 5:
    return (bool)((byte)((uint)*(undefined4 *)(param_1->_padding_ + 0x18) >> 8) & 1);
  case 6:
    return (bool)((byte)((ulonglong)*(undefined8 *)(param_1->_padding_ + 0x18) >> 0x20) & 1);
  case 7:
    return (bool)((byte)(*(uint *)(param_1->_padding_ + 0x18) >> 0xd) & 1);
  case 8:
    return (bool)((byte)(*(uint *)(param_1->_padding_ + 0x18) >> 0xe) & 1);
  case 9:
    return (bool)((byte)((uint)*(undefined4 *)(param_1->_padding_ + 0x18) >> 0x1e) & 1);
  case 10:
    lVar7 = *(longlong *)((longlong)param_2 + 8);
    if (lVar7 != 0) {
      pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) && (param_1 != (FProperty *)0x0)) &&
         ((*(byte *)(param_1->_padding_ + 0x1e) & 1) != 0)) {
        return param_1[1]._padding_ == lVar7;
      }
    }
    break;
  case 0xb:
    lVar7 = *(longlong *)((longlong)param_2 + 8);
    if (lVar7 == 0) {
      return false;
    }
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_) {
      return false;
    }
    if (param_1 == (FProperty *)0x0) {
      return false;
    }
    uVar3 = *(uint *)(param_1->_padding_ + 0x18) >> 0x14;
    goto LAB_14d531ddd;
  case 0xc:
    lVar7 = *(longlong *)((longlong)param_2 + 8);
    if (lVar7 == 0) {
      return false;
    }
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_) {
      return false;
    }
    if (param_1 == (FProperty *)0x0) {
      return false;
    }
    uVar3 = *(uint *)(param_1->_padding_ + 0x18) >> 0x10;
LAB_14d531ddd:
    if ((uVar3 & 1) != 0) {
      if (param_1[1]._padding_ == 0) {
        return lVar7 == 0;
      }
      return param_1[1]._padding_ == lVar7;
    }
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreePropertyRefHelpers.cpp"
                       ,0x2c3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// IsPropertyCompatibleWithClass @ 14d531f50

bool __cdecl
UE::StateTree::PropertyRefHelpers::IsPropertyCompatibleWithClass(FProperty *param_1,UClass *param_2)

{
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
    if ((UClass *)param_1[1]._padding_ == (UClass *)0x0) {
      return param_2 == (UClass *)0x0;
    }
    return (UClass *)param_1[1]._padding_ == param_2;
  }
  return false;
}

// IsPropertyCompatibleWithEnum @ 14d531f90

bool __cdecl
UE::StateTree::PropertyRefHelpers::IsPropertyCompatibleWithEnum(FProperty *param_1,UEnum *param_2)

{
  if ((param_1 != (FProperty *)0x0) &&
     ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0)) {
    return (UEnum *)param_1[1]._padding_ == param_2;
  }
  return false;
}

// IsPropertyCompatibleWithStruct @ 14d531fc0

bool __cdecl
UE::StateTree::PropertyRefHelpers::IsPropertyCompatibleWithStruct
          (FProperty *param_1,UScriptStruct *param_2)

{
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return param_2 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == param_2;
  }
  return false;
}

// IsPropertyRef @ 14d532000

bool __cdecl UE::StateTree::PropertyRefHelpers::IsPropertyRef(FProperty *param_1)

{
  int iVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    return false;
  }
  lVar2 = param_1[1]._padding_;
  pUVar3 = FStateTreePropertyRef::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// operator() @ 15057dc20

bool __thiscall
`UE::StateTreeTrace::OutputPhaseScopeEvent'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4697239808458620402>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4697239808458620402>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057dc60

bool __thiscall
`UE::StateTree::Conditions::CompareNumbers<int>'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1779134681325764647>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1779134681325764647>,
                       &`public:___cdecl_`bool___cdecl_UE::StateTree::Conditions::CompareNumbers<int>(int,int,EGenericAICheck)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15057dcb0

bool __thiscall
`UE::StateTree::Conditions::CompareNumbers<double>'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1779134681325764647>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1779134681325764647>,
                       &`public:___cdecl_`bool___cdecl_UE::StateTree::Conditions::CompareNumbers<double>(double,double,EGenericAICheck)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15057ef60

bool __thiscall
`UE::StateTree::ExecutionContext::Private::FindStateTreeFrame'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_244450361459343224>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_244450361459343224>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057f130

bool __thiscall
`UE::StructUtils::GetStructPtr<FStateTreeExecutionExtension,FStateTreeExecutionExtension>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1997345562860453820>);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar6,
                           L"StateTreeExecutionExtension");
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)
               Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton,
               &local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1997345562860453820>,
                       &`public:___cdecl_`struct_FStateTreeExecutionExtension*___ptr64___cdecl_UE::StructUtils::GetStructPtr<FStateTreeExecutionExtension,FStateTreeExecutionExtension>(UScriptStruct_const*___ptr64,void*___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15057f203;
    }
  }
  bVar4 = false;
LAB_15057f203:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15057f910

bool __thiscall
`UE::StateTree::ExecutionContext::MarkDelegateAsBroadcasted'::__l35::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_244450361459343077>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_244450361459343077>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057f950

bool __thiscall
`UE::StateTree::ExecutionContext::Private::GetTriggerTransitionEvent'::__l44::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_244450361459343143>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_244450361459343143>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

