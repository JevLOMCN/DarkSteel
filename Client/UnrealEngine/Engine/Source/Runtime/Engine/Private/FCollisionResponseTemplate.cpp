// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1476d8450

UScriptStruct * __cdecl FCollisionResponseTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionResponseTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionResponseTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponseTemplate,(UObject *)pUVar1,
                         L"CollisionResponseTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionResponseTemplate.OuterSingleton;
}

// FCollisionResponseTemplate @ 1476e75c0

FCollisionResponseTemplate * __thiscall
FCollisionResponseTemplate::FCollisionResponseTemplate
          (FCollisionResponseTemplate *this,FCollisionResponseTemplate *param_1)

{
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  pTVar1 = &this->CustomResponses;
  this->Name = param_1->Name;
  (this->CollisionEnabled).Value = (param_1->CollisionEnabled).Value;
  (this->ObjectType).Value = (param_1->ObjectType).Value;
  this->bCanModify = param_1->bCanModify;
  uVar4 = *(undefined8 *)((longlong)&(param_1->ResponseToChannels).field0_0x0 + 8);
  *(undefined8 *)&(this->ResponseToChannels).field0_0x0 =
       *(undefined8 *)&(param_1->ResponseToChannels).field0_0x0;
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->ResponseToChannels).field0_0x0 + 0x18);
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x10) =
       *(undefined8 *)((longlong)&(param_1->ResponseToChannels).field0_0x0 + 0x10);
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x18) = uVar4;
  this->ObjectTypeName = param_1->ObjectTypeName;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CustomResponses).ArrayMax;
  iVar3 = (param_1->CustomResponses).ArrayNum;
  _Src = (param_1->CustomResponses).AllocatorInstance.Data;
  (this->CustomResponses).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
  }
  return this;
}

// FCollisionResponseTemplate @ 1476e7680

FCollisionResponseTemplate * __thiscall
FCollisionResponseTemplate::FCollisionResponseTemplate(FCollisionResponseTemplate *this)

{
  this->bCanModify = true;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->CollisionEnabled = '\0';
  this->ObjectType = '\0';
  FCollisionResponseContainer::FCollisionResponseContainer(&this->ResponseToChannels);
  (this->ObjectTypeName).ComparisonIndex = 0;
  (this->ObjectTypeName).Number = 0;
  (this->CustomResponses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomResponses).ArrayNum = 0;
  (this->CustomResponses).ArrayMax = 0;
  return this;
}

// IsEqual @ 147714880

bool __thiscall
FCollisionResponseTemplate::IsEqual
          (FCollisionResponseTemplate *this,TEnumAsByte<ECollisionEnabled::Type> param_1,
          TEnumAsByte<ECollisionChannel> param_2,FCollisionResponseContainer *param_3)

{
  int iVar1;
  
  if (((this->CollisionEnabled).Value == param_1.Value) &&
     ((this->ObjectType).Value == param_2.Value)) {
    iVar1 = memcmp(param_3,&this->ResponseToChannels,0x20);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

