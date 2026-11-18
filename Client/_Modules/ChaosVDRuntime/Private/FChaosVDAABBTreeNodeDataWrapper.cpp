// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436caf40

UScriptStruct * __cdecl FChaosVDAABBTreeNodeDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper,(UObject *)pUVar1
                         ,L"ChaosVDAABBTreeNodeDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDAABBTreeNodeDataWrapper.OuterSingleton;
}

// Serialize @ 1436dab50

bool __thiscall
FChaosVDAABBTreeNodeDataWrapper::Serialize(FChaosVDAABBTreeNodeDataWrapper *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  int *piVar4;
  uint *puVar5;
  longlong *plVar6;
  byte bVar7;
  FArchive *pFVar8;
  longlong lVar9;
  uchar *puVar10;
  byte local_res8 [8];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    lVar9 = 2;
    puVar10 = &this->ChildrenBounds[0].IsValid;
    do {
      pFVar8 = UE::Math::operator<<(param_1,(TVector<double> *)(puVar10 + -0x30));
      pFVar8 = UE::Math::operator<<(pFVar8,(TVector<double> *)(puVar10 + -0x18));
      puVar3 = (uchar *)**(undefined8 **)&pFVar8->field_0x8;
      if ((uchar *)(*(undefined8 **)&pFVar8->field_0x8)[1] < puVar3 + 1) {
        (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,puVar10,1);
      }
      else {
        *puVar10 = *puVar3;
        **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 1;
      }
      puVar10 = puVar10 + 0x38;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    piVar1 = this->ChildrenNodes;
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = this->ChildrenNodes + 1;
    puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->ParentNode;
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) != 0) {
      plVar6 = *(longlong **)&param_1->field_0x8;
      if ((byte *)plVar6[1] < (byte *)*plVar6 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
      }
      else {
        local_res8[0] = *(byte *)*plVar6;
        *plVar6 = *plVar6 + 1;
      }
      this->bLeaf = '\0';
      this->bDirtyNode = '\0';
      this->field_0x8c = this->field_0x8c | local_res8[0] & 3;
      return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
    }
    bVar7 = this->bLeaf;
    local_res8[0] = bVar7 != 0;
    if (this->bDirtyNode != '\0') {
      local_res8[0] = bVar7 | 2;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    if (*plVar6 + 1U <= (ulonglong)plVar6[1]) {
      *plVar6 = *plVar6 + 1;
      return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

