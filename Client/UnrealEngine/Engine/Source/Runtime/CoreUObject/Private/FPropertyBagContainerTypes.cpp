// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// StaticStruct @ 141f53a70

UScriptStruct * __cdecl FPropertyBagContainerTypes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagContainerTypes,(UObject *)pUVar1,
                         L"PropertyBagContainerTypes");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBagContainerTypes.OuterSingleton;
}

// operator== @ 141f6a590

bool __thiscall
FPropertyBagContainerTypes::operator==
          (FPropertyBagContainerTypes *this,FPropertyBagContainerTypes *param_1)

{
  byte bVar1;
  FPropertyBagContainerTypes *pFVar2;
  
  bVar1 = this->NumContainers;
  if (bVar1 != param_1->NumContainers) {
    return false;
  }
  if (bVar1 != 0) {
    pFVar2 = this;
    do {
      if ((pFVar2->Types).Elements[0] !=
          *(EPropertyBagContainerType *)((longlong)pFVar2 + ((longlong)param_1 - (longlong)this))) {
        return false;
      }
      pFVar2 = (FPropertyBagContainerTypes *)((pFVar2->Types).Elements + 1);
    } while ((longlong)pFVar2 - (longlong)this < (longlong)(ulonglong)bVar1);
  }
  return true;
}

// PopHead @ 141f944e0

EPropertyBagContainerType __thiscall
FPropertyBagContainerTypes::PopHead(FPropertyBagContainerTypes *this)

{
  uchar uVar1;
  EPropertyBagContainerType EVar2;
  byte bVar3;
  EPropertyBagContainerType *pEVar4;
  
  uVar1 = this->NumContainers;
  if (uVar1 != '\0') {
    EVar2 = (this->Types).Elements[0];
    (this->Types).Elements[0] = None;
    bVar3 = uVar1 - 1;
    if (bVar3 != 0) {
      pEVar4 = (this->Types).Elements + bVar3;
      do {
        (this->Types).Elements[bVar3 - 1] = *pEVar4;
        *pEVar4 = None;
        bVar3 = bVar3 - 1;
        pEVar4 = pEVar4 + -1;
      } while (bVar3 != 0);
    }
    this->NumContainers = this->NumContainers + 0xff;
    return EVar2;
  }
  return None;
}

// Serialize @ 141f9c090

void __thiscall
FPropertyBagContainerTypes::Serialize(FPropertyBagContainerTypes *this,FArchive *param_1)

{
  uchar *puVar1;
  EPropertyBagContainerType *pEVar2;
  EPropertyBagContainerType *pEVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumContainers,1);
  }
  else {
    this->NumContainers = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  uVar5 = 0;
  if (this->NumContainers != '\0') {
    do {
      pEVar3 = (this->Types).Elements + uVar5;
      pEVar2 = (EPropertyBagContainerType *)**(undefined8 **)&param_1->field_0x8;
      if ((EPropertyBagContainerType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,1);
      }
      else {
        *pEVar3 = *pEVar2;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(uint)this->NumContainers);
  }
  return;
}

