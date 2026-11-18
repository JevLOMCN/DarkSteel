// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a474060

UScriptStruct * __cdecl FRigUnit_CCDIK_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData,(UObject *)pUVar1,
                         L"RigUnit_CCDIK_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK_WorkData.OuterSingleton;
}

// operator= @ 14a519fc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_CCDIK_WorkData * __thiscall
FRigUnit_CCDIK_WorkData::operator=(FRigUnit_CCDIK_WorkData *this,FRigUnit_CCDIK_WorkData *param_1)

{
  int *piVar1;
  int iVar2;
  FCCDIKChainLink *pFVar3;
  undefined8 uVar4;
  FRigBaseElement *pFVar5;
  undefined3 uVar6;
  FNameEntryId FVar7;
  undefined4 uVar8;
  
  if (this != param_1) {
    DestructItems<FCCDIKChainLink,int>
              ((FCCDIKChainLink *)(this->Chain).AllocatorInstance.Data,(this->Chain).ArrayNum);
    iVar2 = (param_1->Chain).ArrayNum;
    piVar1 = &(this->Chain).ArrayMax;
    pFVar3 = (FCCDIKChainLink *)(param_1->Chain).AllocatorInstance.Data;
    (this->Chain).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,0x10,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FCCDIKChainLink,FCCDIKChainLink,int>
                ((this->Chain).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedItems,&param_1->CachedItems);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->RotationLimitIndex,&param_1->RotationLimitIndex);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->RotationLimitsPerItem,&param_1->RotationLimitsPerItem);
  uVar6 = *(undefined3 *)&(param_1->CachedEffector).Key.field_0x1;
  FVar7.Value = (param_1->CachedEffector).Key.Name.ComparisonIndex.Value;
  uVar4 = *(undefined8 *)&(param_1->CachedEffector).Key.Name.Number;
  (this->CachedEffector).Key.Type = (param_1->CachedEffector).Key.Type;
  *(undefined3 *)&(this->CachedEffector).Key.field_0x1 = uVar6;
  (this->CachedEffector).Key.Name.ComparisonIndex = (FNameEntryId)FVar7.Value;
  *(undefined8 *)&(this->CachedEffector).Key.Name.Number = uVar4;
  uVar8 = *(undefined4 *)&(param_1->CachedEffector).field_0x14;
  pFVar5 = (param_1->CachedEffector).Element;
  (this->CachedEffector).ContainerVersion = (param_1->CachedEffector).ContainerVersion;
  *(undefined4 *)&(this->CachedEffector).field_0x14 = uVar8;
  (this->CachedEffector).Element = pFVar5;
  return this;
}

