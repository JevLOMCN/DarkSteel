// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// MappedValues @ 14c908f40

MappedValueEnumerable * __thiscall
UE::Geometry::FSmallListSet::MappedValues
          (FSmallListSet *this,MappedValueEnumerable *__return_storage_ptr__,int param_1,
          TFunction<int___cdecl(int)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar13 = *(longlong *)param_2;
  uStack_30 = (longlong *)0x0;
  if (lVar13 != 0) {
    puVar10 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar10)(puVar10,&local_48);
  }
  uVar8 = (undefined4)local_48;
  *(undefined8 *)&__return_storage_ptr__->MapFunc = 0;
  *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x28 = 0;
  __return_storage_ptr__->ListSet = this;
  __return_storage_ptr__->ListIndex = param_1;
  lVar6 = *(longlong *)&__return_storage_ptr__->MapFunc;
  uVar7 = *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x8;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x10;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x14;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x18;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->MapFunc).field_0x28;
  *(longlong *)&__return_storage_ptr__->MapFunc = lVar13;
  *(undefined8 *)&(__return_storage_ptr__->MapFunc).field_0x8 = in_stack_ffffffffffffffb0;
  uVar9 = (undefined4)local_38;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->MapFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar12;
  if (lVar6 != 0) {
    plVar11 = &local_48;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    (**(code **)(*plVar11 + 0x10))(uVar9,uVar8,uVar1,(int)lVar6,lVar6,uVar7);
  }
  if (*(longlong *)param_2 != 0) {
    plVar12 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  return __return_storage_ptr__;
}

