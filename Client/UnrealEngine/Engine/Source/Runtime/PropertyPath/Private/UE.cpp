// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 25

// Construct<FPropertyPathTestBed> @ 14446dec0

void __cdecl UE::CoreUObject::Private::Construct<FPropertyPathTestBed>(void *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UPropertyPathTestObject *pUVar4;
  FString *pFVar5;
  FPropertyPathTestStruct FStack_b8;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FPropertyPathTestStruct::FPropertyPathTestStruct
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x10));
  FPropertyPathTestStruct::FPropertyPathTestStruct
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x70));
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)param_1 = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0x170) = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0xa8) = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0x108) = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0x168) = pUVar4;
  FStack_b8.Bool = false;
  FStack_b8._9_3_ = 0;
  FStack_b8._20_4_ = 0;
  FStack_b8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  FStack_b8.Integer = 0;
  FStack_b8.EnumOne.Value = '\0';
  FStack_b8.EnumTwo.Value = '\0';
  FStack_b8.EnumThree.Value = '\0';
  FStack_b8.EnumFour.Value = '\0';
  FStack_b8.String.Data.ArrayNum = 0;
  FStack_b8.String.Data.ArrayMax = 0;
  FStack_b8._40_8_ = 0;
  FStack_b8.InnerStruct._padding_ = 0;
  FStack_b8.InnerStruct.Float = 0.0;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\0';
  FStack_b8.InnerStruct.EnumTwo.Value = '\0';
  FStack_b8.InnerStruct.EnumThree.Value = '\0';
  FStack_b8.InnerStruct.EnumFour.Value = '\0';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  ::FString::FString(&FStack_b8.String,"Default");
  FStack_b8._40_8_ = FStack_b8._40_8_ & 0xffffffff00000000;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  FStack_b8.InnerStruct.Float = 0.5;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\x02';
  FStack_b8.InnerStruct.EnumTwo.Value = '\x02';
  FStack_b8.InnerStruct.EnumThree.Value = '\x02';
  FStack_b8.InnerStruct.EnumFour.Value = '\x02';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  ::FString::FString(&FStack_b8.InnerStruct.String,"Default");
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FPropertyPathTestStruct::operator=
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x10),&FStack_b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&FStack_b8);
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x1010101;
  ::FString::FString(&FStack_58,"NewValue");
  pFVar5 = (FString *)((longlong)param_1 + 0x28);
  if (pFVar5 != &FStack_58) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x30) = FStack_58.Data.ArrayNum;
    *(int *)((longlong)param_1 + 0x34) = FStack_58.Data.ArrayMax;
    FStack_58.Data.ArrayNum = 0;
    FStack_58.Data.ArrayMax = 0;
    FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3fc00000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3030303;
  ::FString::FString(&FStack_48,"NewValue");
  pFVar5 = (FString *)((longlong)param_1 + 0x58);
  if (pFVar5 != &FStack_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x60) = FStack_48.Data.ArrayNum;
    *(int *)((longlong)param_1 + 100) = FStack_48.Data.ArrayMax;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3fc00000;
  FStack_b8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  FStack_b8._20_4_ = 0;
  FStack_b8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.Bool = false;
  FStack_b8._9_3_ = 0;
  FStack_b8.Integer = 0;
  FStack_b8.EnumOne.Value = '\0';
  FStack_b8.EnumTwo.Value = '\0';
  FStack_b8.EnumThree.Value = '\0';
  FStack_b8.EnumFour.Value = '\0';
  FStack_b8.String.Data.ArrayNum = 0;
  FStack_b8.String.Data.ArrayMax = 0;
  FStack_b8._40_8_ = 0;
  FStack_b8.InnerStruct._padding_ = 0;
  FStack_b8.InnerStruct.Float = 0.0;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\0';
  FStack_b8.InnerStruct.EnumTwo.Value = '\0';
  FStack_b8.InnerStruct.EnumThree.Value = '\0';
  FStack_b8.InnerStruct.EnumFour.Value = '\0';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  ::FString::FString(&FStack_b8.String,"Default");
  FStack_b8._40_8_ = FStack_b8._40_8_ & 0xffffffff00000000;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  FStack_b8.InnerStruct.Float = 0.5;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\x02';
  FStack_b8.InnerStruct.EnumTwo.Value = '\x02';
  FStack_b8.InnerStruct.EnumThree.Value = '\x02';
  FStack_b8.InnerStruct.EnumFour.Value = '\x02';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  ::FString::FString(&FStack_b8.InnerStruct.String,"Default");
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FPropertyPathTestStruct::operator=
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x70),&FStack_b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&FStack_b8);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)((longlong)param_1 + 8) = pUVar4;
  pUVar4->Bool = true;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0x30) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x29) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2a) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2b) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2c) = 1;
  ::FString::FString(&FStack_38,"NewValue");
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  pFVar5 = (FString *)(lVar1 + 0x38);
  if (pFVar5 != &FStack_38) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar1 + 0x40) = FStack_38.Data.ArrayNum;
    *(int *)(lVar1 + 0x44) = FStack_38.Data.ArrayMax;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0x48) = 0x3fc00000;
  return;
}

// ConstructForTests<FPropertyPathTestBed> @ 14446df10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyPathTestBed>(void *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UPropertyPathTestObject *pUVar4;
  FString *pFVar5;
  FPropertyPathTestStruct FStack_b8;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FPropertyPathTestStruct::FPropertyPathTestStruct
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x10));
  FPropertyPathTestStruct::FPropertyPathTestStruct
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x70));
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)param_1 = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0x170) = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0xa8) = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0x108) = pUVar4;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)(lVar1 + 0x168) = pUVar4;
  FStack_b8.Bool = false;
  FStack_b8._9_3_ = 0;
  FStack_b8._20_4_ = 0;
  FStack_b8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  FStack_b8.Integer = 0;
  FStack_b8.EnumOne.Value = '\0';
  FStack_b8.EnumTwo.Value = '\0';
  FStack_b8.EnumThree.Value = '\0';
  FStack_b8.EnumFour.Value = '\0';
  FStack_b8.String.Data.ArrayNum = 0;
  FStack_b8.String.Data.ArrayMax = 0;
  FStack_b8._40_8_ = 0;
  FStack_b8.InnerStruct._padding_ = 0;
  FStack_b8.InnerStruct.Float = 0.0;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\0';
  FStack_b8.InnerStruct.EnumTwo.Value = '\0';
  FStack_b8.InnerStruct.EnumThree.Value = '\0';
  FStack_b8.InnerStruct.EnumFour.Value = '\0';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  ::FString::FString(&FStack_b8.String,"Default");
  FStack_b8._40_8_ = FStack_b8._40_8_ & 0xffffffff00000000;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  FStack_b8.InnerStruct.Float = 0.5;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\x02';
  FStack_b8.InnerStruct.EnumTwo.Value = '\x02';
  FStack_b8.InnerStruct.EnumThree.Value = '\x02';
  FStack_b8.InnerStruct.EnumFour.Value = '\x02';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  ::FString::FString(&FStack_b8.InnerStruct.String,"Default");
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FPropertyPathTestStruct::operator=
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x10),&FStack_b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&FStack_b8);
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x1010101;
  ::FString::FString(&FStack_58,"NewValue");
  pFVar5 = (FString *)((longlong)param_1 + 0x28);
  if (pFVar5 != &FStack_58) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x30) = FStack_58.Data.ArrayNum;
    *(int *)((longlong)param_1 + 0x34) = FStack_58.Data.ArrayMax;
    FStack_58.Data.ArrayNum = 0;
    FStack_58.Data.ArrayMax = 0;
    FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3fc00000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3030303;
  ::FString::FString(&FStack_48,"NewValue");
  pFVar5 = (FString *)((longlong)param_1 + 0x58);
  if (pFVar5 != &FStack_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x60) = FStack_48.Data.ArrayNum;
    *(int *)((longlong)param_1 + 100) = FStack_48.Data.ArrayMax;
    FStack_48.Data.ArrayNum = 0;
    FStack_48.Data.ArrayMax = 0;
    FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3fc00000;
  FStack_b8._padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  FStack_b8._20_4_ = 0;
  FStack_b8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.Bool = false;
  FStack_b8._9_3_ = 0;
  FStack_b8.Integer = 0;
  FStack_b8.EnumOne.Value = '\0';
  FStack_b8.EnumTwo.Value = '\0';
  FStack_b8.EnumThree.Value = '\0';
  FStack_b8.EnumFour.Value = '\0';
  FStack_b8.String.Data.ArrayNum = 0;
  FStack_b8.String.Data.ArrayMax = 0;
  FStack_b8._40_8_ = 0;
  FStack_b8.InnerStruct._padding_ = 0;
  FStack_b8.InnerStruct.Float = 0.0;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\0';
  FStack_b8.InnerStruct.EnumTwo.Value = '\0';
  FStack_b8.InnerStruct.EnumThree.Value = '\0';
  FStack_b8.InnerStruct.EnumFour.Value = '\0';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  ::FString::FString(&FStack_b8.String,"Default");
  FStack_b8._40_8_ = FStack_b8._40_8_ & 0xffffffff00000000;
  FStack_b8.InnerStruct.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.InnerStruct._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  FStack_b8.InnerStruct.Float = 0.5;
  FStack_b8.InnerStruct.Bool = false;
  FStack_b8.InnerStruct.EnumOne.Value = '\x02';
  FStack_b8.InnerStruct.EnumTwo.Value = '\x02';
  FStack_b8.InnerStruct.EnumThree.Value = '\x02';
  FStack_b8.InnerStruct.EnumFour.Value = '\x02';
  FStack_b8.InnerStruct._17_3_ = 0;
  FStack_b8.InnerStruct.Integer = 0;
  FStack_b8.InnerStruct.String.Data.ArrayNum = 0;
  FStack_b8.InnerStruct.String.Data.ArrayMax = 0;
  ::FString::FString(&FStack_b8.InnerStruct.String,"Default");
  FStack_b8.InnerObject.field0_0x0.DebugPtr = (TObjectPtr<UPropertyPathTestObject>_u_0)0x0;
  FPropertyPathTestStruct::operator=
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x70),&FStack_b8);
  FPropertyPathTestStruct::~FPropertyPathTestStruct(&FStack_b8);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UPropertyPathTestObject>(pUVar3);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPropertyPathTestObject *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(UPropertyPathTestObject **)((longlong)param_1 + 8) = pUVar4;
  pUVar4->Bool = true;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0x30) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x29) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2a) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2b) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2c) = 1;
  ::FString::FString(&FStack_38,"NewValue");
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  pFVar5 = (FString *)(lVar1 + 0x38);
  if (pFVar5 != &FStack_38) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar1 + 0x40) = FStack_38.Data.ArrayNum;
    *(int *)(lVar1 + 0x44) = FStack_38.Data.ArrayMax;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0x48) = 0x3fc00000;
  return;
}

// Destruct<FPropertyPathTestBed> @ 14446df20

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyPathTestBed>(void *param_1)

{
  FPropertyPathTestStruct::~FPropertyPathTestStruct
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x70));
  FPropertyPathTestStruct::~FPropertyPathTestStruct
            ((FPropertyPathTestStruct *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FPropertyPathTestBed> @ 14446df50

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyPathTestBed>(void *param_1,void *param_2,int param_3)

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
      FPropertyPathTestStruct::operator=
                ((FPropertyPathTestStruct *)(puVar2 + 2),(FPropertyPathTestStruct *)(puVar1 + 2));
      FPropertyPathTestStruct::operator=
                ((FPropertyPathTestStruct *)(puVar2 + 0xe),(FPropertyPathTestStruct *)(puVar1 + 0xe)
                );
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyPathTestStruct> @ 14446e240

void __cdecl UE::CoreUObject::Private::Construct<FPropertyPathTestStruct>(void *param_1)

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
  FPropertyPathTestStruct::FPropertyPathTestStruct(param_1);
  return;
}

// ConstructForTests<FPropertyPathTestStruct> @ 14446e270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyPathTestStruct>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPropertyPathTestStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x18),"Default");
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined ***)((longlong)param_1 + 0x30) = &___7FPropertyPathTestInnerStruct__6B_;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x2020200;
  *(undefined1 *)((longlong)param_1 + 0x40) = 2;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x48),"Default");
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FPropertyPathTestStruct> @ 14446e280

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyPathTestStruct>(void *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString FStack_18;
  
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xbfc00000;
  *(undefined ***)param_1 = &___7FPropertyPathTestStruct__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  ::FString::FString(&FStack_18,"Destructed");
  pFVar1 = (FString *)((longlong)param_1 + 0x18);
  if (pFVar1 != &FStack_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = FStack_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x20) = FStack_18.Data.ArrayNum;
    *(int *)((longlong)param_1 + 0x24) = FStack_18.Data.ArrayMax;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  FPropertyPathTestInnerStruct::~FPropertyPathTestInnerStruct
            ((FPropertyPathTestInnerStruct *)((longlong)param_1 + 0x30));
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)param_1 = &___7FPropertyPathTestBaseStruct__6B_;
  return;
}

// Copy<FPropertyPathTestStruct> @ 14446e2d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyPathTestStruct>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  pvVar2 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar3 + 8) = *(undefined1 *)((longlong)pvVar2 + 8);
    *(undefined4 *)((longlong)pvVar3 + 0xc) = *(undefined4 *)((longlong)pvVar2 + 0xc);
    *(undefined1 *)((longlong)pvVar3 + 0x10) = *(undefined1 *)((longlong)pvVar2 + 0x10);
    *(undefined1 *)((longlong)pvVar3 + 0x11) = *(undefined1 *)((longlong)pvVar2 + 0x11);
    *(undefined1 *)((longlong)pvVar3 + 0x12) = *(undefined1 *)((longlong)pvVar2 + 0x12);
    *(undefined1 *)((longlong)pvVar3 + 0x13) = *(undefined1 *)((longlong)pvVar2 + 0x13);
    ::FString::operator=((FString *)((longlong)pvVar3 + 0x18),(FString *)((longlong)pvVar2 + 0x18));
    *(undefined4 *)((longlong)pvVar3 + 0x28) = *(undefined4 *)((longlong)pvVar2 + 0x28);
    *(undefined4 *)((longlong)pvVar3 + 0x38) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x3c) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x3c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x3d) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x3d - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x3e) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x3e - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x3f) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x3f - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x40) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x44) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x44 - (longlong)param_1));
    ::FString::operator=
              ((FString *)((longlong)pvVar3 + 0x48),
               (FString *)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1)));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)pvVar2 + 0x58) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x58));
    }
    puVar1 = (undefined8 *)((longlong)pvVar2 + 0x58);
    pvVar2 = (void *)((longlong)pvVar2 + 0x60);
    *(undefined8 *)((longlong)pvVar3 + 0x58) = *puVar1;
    pvVar3 = (void *)((longlong)pvVar3 + 0x60);
  }
  return true;
}

// Construct<FPropertyPathTestInnerStruct> @ 14446e440

void __cdecl UE::CoreUObject::Private::Construct<FPropertyPathTestInnerStruct>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FPropertyPathTestInnerStruct__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x2020200;
  *(undefined1 *)((longlong)param_1 + 0x10) = 2;
  ::FString::FString((FString *)((longlong)param_1 + 0x18),"Default");
  return;
}

// ConstructForTests<FPropertyPathTestInnerStruct> @ 14446e490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPropertyPathTestInnerStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f000000;
  *(undefined ***)param_1 = &___7FPropertyPathTestInnerStruct__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x2020200;
  *(undefined1 *)((longlong)param_1 + 0x10) = 2;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x18),"Default");
  return;
}

// Destruct<FPropertyPathTestInnerStruct> @ 14446e4d0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyPathTestInnerStruct>(void *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString FStack_18;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xbfc00000;
  *(undefined ***)param_1 = &___7FPropertyPathTestInnerStruct__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3030301;
  *(undefined1 *)((longlong)param_1 + 0x10) = 3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  ::FString::FString(&FStack_18,"Destructed");
  pFVar1 = (FString *)((longlong)param_1 + 0x18);
  if (pFVar1 != &FStack_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = FStack_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x20) = FStack_18.Data.ArrayNum;
    *(int *)((longlong)param_1 + 0x24) = FStack_18.Data.ArrayMax;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)param_1 = &___7FPropertyPathTestBaseStruct__6B_;
  return;
}

// Copy<FPropertyPathTestInnerStruct> @ 14446e4e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyPathTestInnerStruct>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0xc) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0xd) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xd - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0xe) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xe - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0xf) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xf - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 0x18),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FPropertyPathTestBaseStruct> @ 14446e5b0

void __cdecl UE::CoreUObject::Private::Construct<FPropertyPathTestBaseStruct>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyPathTestBaseStruct__6B_;
  return;
}

// ConstructForTests<FPropertyPathTestBaseStruct> @ 14446e5d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyPathTestBaseStruct>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyPathTestBaseStruct__6B_;
  return;
}

// Destruct<FPropertyPathTestBaseStruct> @ 14446e5f0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyPathTestBaseStruct>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyPathTestBaseStruct__6B_;
  return;
}

// Copy<FPropertyPathTestBaseStruct> @ 14446e610

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyPathTestBaseStruct>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FCachedPropertyPath> @ 14446ee50

void __cdecl UE::CoreUObject::Private::Construct<FCachedPropertyPath>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// ConstructForTests<FCachedPropertyPath> @ 14446ee80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCachedPropertyPath>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// Destruct<FCachedPropertyPath> @ 14446eeb0

void __cdecl UE::CoreUObject::Private::Destruct<FCachedPropertyPath>(void *param_1)

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

// Copy<FCachedPropertyPath> @ 14446eed0

bool __cdecl
UE::CoreUObject::Private::Copy<FCachedPropertyPath>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FPropertyPathSegment *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FPropertyPathSegment *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPropertyPathSegment,FPropertyPathSegment,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      pFVar6[2].Data = pFVar2[2].Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[3].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[3].Data);
      }
      pFVar6[3].Data = pFVar2[3].Data;
      pFVar6[4].Data = pFVar2[4].Data;
      pFVar6[5].Data = pFVar2[5].Data;
      *(undefined4 *)&pFVar6[6].Data = *(undefined4 *)&pFVar2[6].Data;
      *(undefined1 *)((longlong)&pFVar6[6].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 4);
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyPathSegment> @ 14446fd20

void __cdecl UE::CoreUObject::Private::Construct<FPropertyPathSegment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPropertyPathSegment> @ 14446fd40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyPathSegment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPropertyPathSegment> @ 14446fd60

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyPathSegment>(void *param_1)

{
  return;
}

// PostSerialize<FPropertyPathSegment> @ 14446fd70

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPropertyPathSegment>(FArchive *param_1,void *param_2)

{
  FName FVar1;
  ulonglong uVar2;
  FFieldVariant FVar3;
  UObject *pUVar4;
  
  FVar1 = *(FName *)((longlong)param_2 + 0x10);
  if (FVar1 != (FName)0x0) {
    *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)FVar1);
    }
    *(FName *)((longlong)param_2 + 0x10) = FVar1;
    FVar3 = FindUFieldOrFProperty
                      ((UStruct *)&stack0x00000010,FVar1,
                       (EFieldIterationFlags)*(undefined8 *)param_2);
    uVar2 = *(ulonglong *)FVar3.Container;
    *(ulonglong *)((longlong)param_2 + 0x18) = uVar2;
    if ((((uVar2 & 1) != 0) && ((UObject *)(uVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)(uVar2 & 0xfffffffffffffffe));
    }
    if ((((*(ulonglong *)((longlong)param_2 + 0x18) & 1) != 0) &&
        (pUVar4 = (UObject *)(*(ulonglong *)((longlong)param_2 + 0x18) & 0xfffffffffffffffe),
        pUVar4 != (UObject *)0x0)) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar4);
    }
  }
  return;
}

// Copy<FPropertyPathSegment> @ 144470970

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyPathSegment>(void *param_1,void *param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      uVar1 = *(ulonglong *)((longlong)param_2 + 0x18);
      *(ulonglong *)((longlong)param_1 + 0x18) = uVar1;
      if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
         (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
      }
      param_2 = (void *)((longlong)param_2 + 0x20);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

