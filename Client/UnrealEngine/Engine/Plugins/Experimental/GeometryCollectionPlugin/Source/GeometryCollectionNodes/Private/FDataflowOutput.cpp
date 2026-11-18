// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// SetValue<UE::Dataflow::FContextValue> @ 14e908050

void __thiscall
FDataflowOutput::SetValue<UE::Dataflow::FContextValue>
          (FDataflowOutput *this,FContextValue *param_1,FContext *param_2)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  FContextCacheElementBase *pFVar13;
  undefined8 **ppuVar14;
  undefined8 *local_res8;
  undefined8 *local_48;
  FGuid local_40;
  
  if (this->_padding_ == 0) {
    return;
  }
  FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
  uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
  pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_40);
  pFVar1 = (FProperty *)this->_padding_;
  uVar12 = CityHash64((char *)&this->_padding_,0x10);
  local_48 = (undefined8 *)0x0;
  pFVar13 = UE::Dataflow::FContextValue::GetCacheEntry(param_1);
  if (pFVar13 == (FContextCacheElementBase *)0x0) {
LAB_14e90814c:
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar12 & 0xffffffff,&local_48);
      goto LAB_14e90817f;
    }
  }
  else {
    ppuVar14 = (undefined8 **)(**(code **)(pFVar13->_padding_ + 8))(pFVar13,&local_res8,param_2);
    puVar8 = local_48;
    puVar2 = local_48;
    if (&local_48 != ppuVar14) {
      puVar2 = *ppuVar14;
      *ppuVar14 = (undefined8 *)0x0;
      if (local_48 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_48;
        local_48 = puVar2;
        (*(code *)*puVar3)(puVar8,1);
        puVar2 = local_48;
      }
    }
    local_48 = puVar2;
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (local_48 != (undefined8 *)0x0) {
      local_48[4] = pFVar1;
      uVar4 = pFVar11->A;
      uVar5 = pFVar11->B;
      uVar6 = pFVar11->C;
      uVar7 = pFVar11->D;
      *(uint *)(local_48 + 5) = uVar9;
      *(uint *)((longlong)local_48 + 0xc) = uVar4;
      *(uint *)(local_48 + 2) = uVar5;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      *(uint *)(local_48 + 3) = uVar7;
      local_48[6] = *(undefined8 *)FVar10.Value;
      goto LAB_14e90814c;
    }
  }
  UE::Dataflow::FContext::SetNullData
            (param_2,(uint)uVar12,pFVar1,pFVar11,uVar9,(FTimestamp *)FVar10.Value);
LAB_14e90817f:
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  return;
}

