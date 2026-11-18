// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436cf970

UScriptStruct * __cdecl FChaosVDAABBTreeDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreeDataWrapper,(UObject *)pUVar1,
                         L"ChaosVDAABBTreeDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeDataWrapper.OuterSingleton;
}

// Serialize @ 1436da880

bool __thiscall
FChaosVDAABBTreeDataWrapper::Serialize(FChaosVDAABBTreeDataWrapper *this,FArchive *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint *puVar7;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    plVar1 = &this->_padding_;
    puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
      }
    }
    else {
      *(undefined4 *)plVar1 = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = &this->RootNodeIndex;
    puVar4 = &param_1->field_0x2a;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&this->bDynamicTree);
    TArrayPrivateFriend::Serialize<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_>
              (param_1,&this->Nodes);
    TArrayPrivateFriend::Serialize<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_>
              (param_1,&this->BoundingVolumeLeafs);
    TArrayPrivateFriend::Serialize<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_>
              (param_1,&this->TreeArrayLeafs);
    ::operator<<(param_1,&this->MaxPayloadBounds);
    piVar2 = &this->MaxTreeDepth;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = &this->MaxChildrenInLeaf;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = &this->LeavesNum;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = &this->NodesNum;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = (uint *)((longlong)&this->_padding_ + 4);
    puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

