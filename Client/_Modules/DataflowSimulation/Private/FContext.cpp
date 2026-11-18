// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 1

// SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&> @ 1462f14d0

void __thiscall
UE::Dataflow::FContext::
SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_UFDataflowSimulationProperty__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 << 3);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

