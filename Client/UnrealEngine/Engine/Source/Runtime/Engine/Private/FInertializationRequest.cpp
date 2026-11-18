// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14725a1a0

UScriptStruct * __cdecl FInertializationRequest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInertializationRequest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInertializationRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInertializationRequest,(UObject *)pUVar1,
                         L"InertializationRequest");
  }
  return Z_Registration_Info_UScriptStruct_FInertializationRequest.OuterSingleton;
}

// FInertializationRequest @ 147433c40

FInertializationRequest * __thiscall
FInertializationRequest::FInertializationRequest
          (FInertializationRequest *this,FInertializationRequest *param_1)

{
  UBlendProfile *pUVar1;
  UCurveFloat *pUVar2;
  UObject *pUVar3;
  
  this->Duration = param_1->Duration;
  pUVar1 = (param_1->BlendProfile).field0_0x0.DebugPtr;
  (this->BlendProfile).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bUseBlendMode = param_1->bUseBlendMode;
  this->BlendMode = param_1->BlendMode;
  pUVar2 = (param_1->CustomBlendCurve).field0_0x0.DebugPtr;
  (this->CustomBlendCurve).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->Tag = param_1->Tag;
  FText::FText(&this->Description_DEPRECATED,&param_1->Description_DEPRECATED);
  (this->DescriptionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptionString).Data.AllocatorInstance.Data =
       (param_1->DescriptionString).Data.AllocatorInstance.Data;
  (param_1->DescriptionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptionString).Data.ArrayNum = (param_1->DescriptionString).Data.ArrayNum;
  (this->DescriptionString).Data.ArrayMax = (param_1->DescriptionString).Data.ArrayMax;
  (param_1->DescriptionString).Data.ArrayNum = 0;
  (param_1->DescriptionString).Data.ArrayMax = 0;
  this->NodeId = param_1->NodeId;
  pUVar3 = (param_1->AnimInstance).field0_0x0.DebugPtr;
  (this->AnimInstance).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return this;
}

// operator= @ 14743a190

FInertializationRequest * __thiscall
FInertializationRequest::operator=(FInertializationRequest *this,FInertializationRequest *param_1)

{
  UBlendProfile *pUVar1;
  UCurveFloat *pUVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  UObject *pUVar5;
  undefined1 local_res8 [8];
  
  this->Duration = param_1->Duration;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->BlendProfile).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->BlendProfile).field0_0x0 = (param_1->BlendProfile).field0_0x0;
  this->bUseBlendMode = param_1->bUseBlendMode;
  this->BlendMode = param_1->BlendMode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->CustomBlendCurve).field0_0x0.DebugPtr, pUVar2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->CustomBlendCurve).field0_0x0 = (param_1->CustomBlendCurve).field0_0x0;
  this->Tag = param_1->Tag;
  pIVar3 = (param_1->Description_DEPRECATED).TextData.Reference;
  pIVar4 = (this->Description_DEPRECATED).TextData.Reference;
  if (pIVar4 != pIVar3) {
    (this->Description_DEPRECATED).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (this->Description_DEPRECATED).Flags = (param_1->Description_DEPRECATED).Flags;
  ::FString::operator=(&this->DescriptionString,&param_1->DescriptionString);
  this->NodeId = param_1->NodeId;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->AnimInstance).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  (this->AnimInstance).field0_0x0 = (param_1->AnimInstance).field0_0x0;
  return this;
}

// FInertializationRequest @ 1474b2f30

FInertializationRequest * __thiscall
FInertializationRequest::FInertializationRequest
          (FInertializationRequest *this,FInertializationRequest *param_1)

{
  UBlendProfile *pUVar1;
  UCurveFloat *pUVar2;
  ITextData *pIVar3;
  UObject *pUVar4;
  undefined1 local_res8 [8];
  
  this->Duration = param_1->Duration;
  pUVar1 = (param_1->BlendProfile).field0_0x0.DebugPtr;
  (this->BlendProfile).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bUseBlendMode = param_1->bUseBlendMode;
  this->BlendMode = param_1->BlendMode;
  pUVar2 = (param_1->CustomBlendCurve).field0_0x0.DebugPtr;
  (this->CustomBlendCurve).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->Tag = param_1->Tag;
  (this->Description_DEPRECATED).TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->Description_DEPRECATED).TextData.Reference;
  (this->Description_DEPRECATED).TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  (this->Description_DEPRECATED).Flags = (param_1->Description_DEPRECATED).Flags;
  ::FString::FString(&this->DescriptionString,&param_1->DescriptionString);
  this->NodeId = param_1->NodeId;
  pUVar4 = (param_1->AnimInstance).field0_0x0.DebugPtr;
  (this->AnimInstance).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return this;
}

// FInertializationRequest @ 1474b3000

FInertializationRequest * __thiscall
FInertializationRequest::FInertializationRequest
          (FInertializationRequest *this,float param_1,UBlendProfile *param_2)

{
  this->Duration = param_1;
  (this->BlendProfile).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this->bUseBlendMode = false;
  this->BlendMode = Linear;
  (this->CustomBlendCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  FText::FText(&this->Description_DEPRECATED);
  (this->DescriptionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptionString).Data.ArrayNum = 0;
  (this->DescriptionString).Data.ArrayMax = 0;
  this->NodeId = -1;
  (this->AnimInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// FInertializationRequest @ 1474b3070

FInertializationRequest * __thiscall
FInertializationRequest::FInertializationRequest(FInertializationRequest *this)

{
  this->Duration = -1.0;
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->bUseBlendMode = false;
  this->BlendMode = Linear;
  (this->CustomBlendCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  FText::FText(&this->Description_DEPRECATED);
  (this->DescriptionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptionString).Data.ArrayNum = 0;
  (this->DescriptionString).Data.ArrayMax = 0;
  this->NodeId = -1;
  (this->AnimInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// Clear @ 1474c4570

void __thiscall FInertializationRequest::Clear(FInertializationRequest *this)

{
  this->Duration = -1.0;
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->bUseBlendMode = false;
  this->BlendMode = Linear;
  (this->CustomBlendCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  ::FString::Empty(&this->DescriptionString);
  this->NodeId = -1;
  (this->AnimInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  return;
}

