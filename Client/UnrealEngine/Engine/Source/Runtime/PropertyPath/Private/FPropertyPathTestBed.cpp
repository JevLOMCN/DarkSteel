// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 2

// StaticStruct @ 14446dc40

UScriptStruct * __cdecl FPropertyPathTestBed::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestBed.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestBed.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestBed,(UObject *)pUVar1,
                         L"PropertyPathTestBed");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyPathTestBed.OuterSingleton;
}

// FPropertyPathTestBed @ 14448a170

FPropertyPathTestBed * __thiscall
FPropertyPathTestBed::FPropertyPathTestBed(FPropertyPathTestBed *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  UPropertyPathTestObject *pUVar3;
  UPropertyPathTestObject *pUVar4;
  FString *pFVar5;
  FPropertyPathTestStruct local_b8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (this->Object).field0_0x0.DebugPtr = (UPropertyPathTestObject *)0x0;
  (this->ModifiedObject).field0_0x0.DebugPtr = (UPropertyPathTestObject *)0x0;
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->ModifiedStruct);
  FPropertyPathTestStruct::FPropertyPathTestStruct(&this->DefaultStruct);
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPropertyPathTestObject>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Object).field0_0x0.DebugPtr = pUVar3;
  pUVar2 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar2);
  pUVar3 = (this->Object).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar3->InnerObject).field0_0x0.DebugPtr = pUVar4;
  pUVar2 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar2);
  pUVar3 = (this->Object).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar3->Struct).InnerObject.field0_0x0.DebugPtr = pUVar4;
  pUVar2 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar2);
  pUVar3 = (this->Object).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar3->StructRef).InnerObject.field0_0x0.DebugPtr = pUVar4;
  pUVar2 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar2);
  pUVar3 = (this->Object).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar3->StructConstRef).InnerObject.field0_0x0.DebugPtr = pUVar4;
  local_b8.Bool = false;
  local_b8._9_3_ = 0;
  local_b8._20_4_ = 0;
  local_b8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  local_b8.Integer = 0;
  local_b8.EnumOne.Value = '\0';
  local_b8.EnumTwo.Value = '\0';
  local_b8.EnumThree.Value = '\0';
  local_b8.EnumFour.Value = '\0';
  local_b8.String.Data.ArrayNum = 0;
  local_b8.String.Data.ArrayMax = 0;
  local_b8._40_8_ = 0;
  local_b8.InnerStruct._padding_ = 0;
  local_b8.InnerStruct.Float = 0.0;
  local_b8.InnerStruct.Bool = false;
  local_b8.InnerStruct.EnumOne.Value = '\0';
  local_b8.InnerStruct.EnumTwo.Value = '\0';
  local_b8.InnerStruct.EnumThree.Value = '\0';
  local_b8.InnerStruct.EnumFour.Value = '\0';
  local_b8.InnerStruct._17_3_ = 0;
  local_b8.InnerStruct.Integer = 0;
  local_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.InnerStruct.String.Data.ArrayNum = 0;
  local_b8.InnerStruct.String.Data.ArrayMax = 0;
  local_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  ::FString::FString(&local_b8.String,"Default");
  local_b8._40_8_ = local_b8._40_8_ & 0xffffffff00000000;
  local_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  local_b8.InnerStruct.Float = 0.5;
  local_b8.InnerStruct.Bool = false;
  local_b8.InnerStruct.EnumOne.Value = '\x02';
  local_b8.InnerStruct.EnumTwo.Value = '\x02';
  local_b8.InnerStruct.EnumThree.Value = '\x02';
  local_b8.InnerStruct.EnumFour.Value = '\x02';
  local_b8.InnerStruct._17_3_ = 0;
  local_b8.InnerStruct.Integer = 0;
  local_b8.InnerStruct.String.Data.ArrayNum = 0;
  local_b8.InnerStruct.String.Data.ArrayMax = 0;
  ::FString::FString(&local_b8.InnerStruct.String,"Default");
  local_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FPropertyPathTestStruct::operator=(&this->ModifiedStruct,&local_b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_b8);
  (this->ModifiedStruct).Bool = true;
  (this->ModifiedStruct).Integer = 1;
  (this->ModifiedStruct).EnumOne = '\x01';
  (this->ModifiedStruct).EnumTwo = '\x01';
  (this->ModifiedStruct).EnumThree = '\x01';
  (this->ModifiedStruct).EnumFour = '\x01';
  ::FString::FString(&local_58,"NewValue");
  pFVar5 = &(this->ModifiedStruct).String;
  if (pFVar5 != &local_58) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (this->ModifiedStruct).String.Data.ArrayNum = local_58.Data.ArrayNum;
    (this->ModifiedStruct).String.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  (this->ModifiedStruct).Float = 1.5;
  (this->ModifiedStruct).InnerStruct.Bool = true;
  (this->ModifiedStruct).InnerStruct.Integer = 1;
  (this->ModifiedStruct).EnumOne = '\x03';
  (this->ModifiedStruct).EnumTwo = '\x03';
  (this->ModifiedStruct).EnumThree = '\x03';
  (this->ModifiedStruct).EnumFour = '\x03';
  ::FString::FString(&local_48,"NewValue");
  pFVar5 = &(this->ModifiedStruct).InnerStruct.String;
  if (pFVar5 != &local_48) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->ModifiedStruct).InnerStruct.String.Data.ArrayNum = local_48.Data.ArrayNum;
    (this->ModifiedStruct).InnerStruct.String.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  (this->ModifiedStruct).InnerStruct.Float = 1.5;
  local_b8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  local_b8._20_4_ = 0;
  local_b8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Bool = false;
  local_b8._9_3_ = 0;
  local_b8.Integer = 0;
  local_b8.EnumOne.Value = '\0';
  local_b8.EnumTwo.Value = '\0';
  local_b8.EnumThree.Value = '\0';
  local_b8.EnumFour.Value = '\0';
  local_b8.String.Data.ArrayNum = 0;
  local_b8.String.Data.ArrayMax = 0;
  local_b8._40_8_ = 0;
  local_b8.InnerStruct._padding_ = 0;
  local_b8.InnerStruct.Float = 0.0;
  local_b8.InnerStruct.Bool = false;
  local_b8.InnerStruct.EnumOne.Value = '\0';
  local_b8.InnerStruct.EnumTwo.Value = '\0';
  local_b8.InnerStruct.EnumThree.Value = '\0';
  local_b8.InnerStruct.EnumFour.Value = '\0';
  local_b8.InnerStruct._17_3_ = 0;
  local_b8.InnerStruct.Integer = 0;
  local_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.InnerStruct.String.Data.ArrayNum = 0;
  local_b8.InnerStruct.String.Data.ArrayMax = 0;
  local_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  ::FString::FString(&local_b8.String,"Default");
  local_b8._40_8_ = local_b8._40_8_ & 0xffffffff00000000;
  local_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  local_b8.InnerStruct.Float = 0.5;
  local_b8.InnerStruct.Bool = false;
  local_b8.InnerStruct.EnumOne.Value = '\x02';
  local_b8.InnerStruct.EnumTwo.Value = '\x02';
  local_b8.InnerStruct.EnumThree.Value = '\x02';
  local_b8.InnerStruct.EnumFour.Value = '\x02';
  local_b8.InnerStruct._17_3_ = 0;
  local_b8.InnerStruct.Integer = 0;
  local_b8.InnerStruct.String.Data.ArrayNum = 0;
  local_b8.InnerStruct.String.Data.ArrayMax = 0;
  ::FString::FString(&local_b8.InnerStruct.String,"Default");
  local_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FPropertyPathTestStruct::operator=(&this->DefaultStruct,&local_b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&local_b8);
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPropertyPathTestObject>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->ModifiedObject).field0_0x0.DebugPtr = pUVar3;
  pUVar3->Bool = true;
  ((this->ModifiedObject).field0_0x0.DebugPtr)->Integer = 1;
  (((this->ModifiedObject).field0_0x0.DebugPtr)->EnumOne).Value = '\x01';
  (((this->ModifiedObject).field0_0x0.DebugPtr)->EnumTwo).Value = '\x01';
  (((this->ModifiedObject).field0_0x0.DebugPtr)->EnumThree).Value = '\x01';
  (((this->ModifiedObject).field0_0x0.DebugPtr)->EnumFour).Value = '\x01';
  ::FString::FString(&local_38,"NewValue");
  pUVar3 = (this->ModifiedObject).field0_0x0.DebugPtr;
  pFVar5 = &pUVar3->String;
  if (pFVar5 != &local_38) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar3->String).Data.ArrayNum = local_38.Data.ArrayNum;
    (pUVar3->String).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ((this->ModifiedObject).field0_0x0.DebugPtr)->Float = 1.5;
  return this;
}

