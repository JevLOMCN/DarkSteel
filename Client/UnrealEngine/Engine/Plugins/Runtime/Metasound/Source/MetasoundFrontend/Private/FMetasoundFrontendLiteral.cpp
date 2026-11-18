// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 42

// FMetasoundFrontendLiteral @ 14ad9aed0

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
          (FMetasoundFrontendLiteral *this,FMetasoundFrontendLiteral *param_1)

{
  this->Type = param_1->Type;
  this->AsNumDefault = param_1->AsNumDefault;
  (this->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsBoolean).AllocatorInstance.Data = (param_1->AsBoolean).AllocatorInstance.Data;
  (param_1->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsBoolean).ArrayNum = (param_1->AsBoolean).ArrayNum;
  (this->AsBoolean).ArrayMax = (param_1->AsBoolean).ArrayMax;
  (param_1->AsBoolean).ArrayNum = 0;
  (param_1->AsBoolean).ArrayMax = 0;
  (this->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsInteger).AllocatorInstance.Data = (param_1->AsInteger).AllocatorInstance.Data;
  (param_1->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsInteger).ArrayNum = (param_1->AsInteger).ArrayNum;
  (this->AsInteger).ArrayMax = (param_1->AsInteger).ArrayMax;
  (param_1->AsInteger).ArrayNum = 0;
  (param_1->AsInteger).ArrayMax = 0;
  (this->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsFloat).AllocatorInstance.Data = (param_1->AsFloat).AllocatorInstance.Data;
  (param_1->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsFloat).ArrayNum = (param_1->AsFloat).ArrayNum;
  (this->AsFloat).ArrayMax = (param_1->AsFloat).ArrayMax;
  (param_1->AsFloat).ArrayNum = 0;
  (param_1->AsFloat).ArrayMax = 0;
  (this->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsString).AllocatorInstance.Data = (param_1->AsString).AllocatorInstance.Data;
  (param_1->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsString).ArrayNum = (param_1->AsString).ArrayNum;
  (this->AsString).ArrayMax = (param_1->AsString).ArrayMax;
  (param_1->AsString).ArrayNum = 0;
  (param_1->AsString).ArrayMax = 0;
  (this->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsUObject).AllocatorInstance.Data = (param_1->AsUObject).AllocatorInstance.Data;
  (param_1->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsUObject).ArrayNum = (param_1->AsUObject).ArrayNum;
  (this->AsUObject).ArrayMax = (param_1->AsUObject).ArrayMax;
  (param_1->AsUObject).ArrayNum = 0;
  (param_1->AsUObject).ArrayMax = 0;
  return this;
}

// FMetasoundFrontendLiteral @ 14ad9af90

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
          (FMetasoundFrontendLiteral *this,FMetasoundFrontendLiteral *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->AsBoolean;
  this->Type = param_1->Type;
  this->AsNumDefault = param_1->AsNumDefault;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AsBoolean).ArrayMax;
  iVar7 = (param_1->AsBoolean).ArrayNum;
  pFVar8 = (param_1->AsBoolean).AllocatorInstance.Data;
  (this->AsBoolean).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar8,(longlong)iVar7);
  }
  pTVar3 = &this->AsInteger;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AsInteger).ArrayMax;
  iVar7 = (param_1->AsInteger).ArrayNum;
  pFVar8 = (param_1->AsInteger).AllocatorInstance.Data;
  (this->AsInteger).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar4 = &this->AsFloat;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AsFloat).ArrayMax;
  iVar7 = (param_1->AsFloat).ArrayNum;
  pFVar8 = (param_1->AsFloat).AllocatorInstance.Data;
  (this->AsFloat).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar5 = &this->AsString;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AsString).ArrayMax;
  iVar7 = (param_1->AsString).ArrayNum;
  pFVar8 = (param_1->AsString).AllocatorInstance.Data;
  (this->AsString).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FString,FString,int>((pTVar5->AllocatorInstance).Data,(FString *)pFVar8,iVar7);
  }
  pTVar6 = &this->AsUObject;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AsUObject).ArrayMax;
  iVar7 = (param_1->AsUObject).ArrayNum;
  pFVar8 = (param_1->AsUObject).AllocatorInstance.Data;
  (this->AsUObject).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar2);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((pTVar6->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar8,iVar7);
  }
  return this;
}

// ~FMetasoundFrontendLiteral @ 14ad9e550

void __thiscall
FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(FMetasoundFrontendLiteral *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AsUObject).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AsString).AllocatorInstance.Data,(this->AsString).ArrayNum);
  pFVar1 = (this->AsString).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsFloat).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsInteger).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsBoolean).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14ad9f8e0

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendLiteral::operator=
          (FMetasoundFrontendLiteral *this,FMetasoundFrontendLiteral *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  
  pTVar1 = &param_1->AsBoolean;
  pTVar2 = &this->AsBoolean;
  this->Type = param_1->Type;
  this->AsNumDefault = param_1->AsNumDefault;
  if (pTVar2 != pTVar1) {
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AsBoolean).ArrayNum = (param_1->AsBoolean).ArrayNum;
    (this->AsBoolean).ArrayMax = (param_1->AsBoolean).ArrayMax;
    (param_1->AsBoolean).ArrayNum = 0;
    (param_1->AsBoolean).ArrayMax = 0;
  }
  pTVar3 = &param_1->AsInteger;
  pTVar4 = &this->AsInteger;
  if (pTVar4 != pTVar3) {
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AsInteger).ArrayNum = (param_1->AsInteger).ArrayNum;
    (this->AsInteger).ArrayMax = (param_1->AsInteger).ArrayMax;
    (param_1->AsInteger).ArrayNum = 0;
    (param_1->AsInteger).ArrayMax = 0;
  }
  pTVar5 = &param_1->AsFloat;
  pTVar6 = &this->AsFloat;
  if (pTVar6 != pTVar5) {
    pFVar11 = (pTVar6->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AsFloat).ArrayNum = (param_1->AsFloat).ArrayNum;
    (this->AsFloat).ArrayMax = (param_1->AsFloat).ArrayMax;
    (param_1->AsFloat).ArrayNum = 0;
    (param_1->AsFloat).ArrayMax = 0;
  }
  pTVar7 = &param_1->AsString;
  pTVar8 = &this->AsString;
  if (pTVar8 != pTVar7) {
    DestructItems<FString,int>
              ((FString *)(pTVar8->AllocatorInstance).Data,(this->AsString).ArrayNum);
    pFVar11 = (pTVar8->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AsString).ArrayNum = (param_1->AsString).ArrayNum;
    (this->AsString).ArrayMax = (param_1->AsString).ArrayMax;
    (param_1->AsString).ArrayNum = 0;
    (param_1->AsString).ArrayMax = 0;
  }
  pTVar9 = &param_1->AsUObject;
  pTVar10 = &this->AsUObject;
  if (pTVar10 != pTVar9) {
    pFVar11 = (pTVar10->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AsUObject).ArrayNum = (param_1->AsUObject).ArrayNum;
    (this->AsUObject).ArrayMax = (param_1->AsUObject).ArrayMax;
    (param_1->AsUObject).ArrayNum = 0;
    (param_1->AsUObject).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14ad9fa40

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendLiteral::operator=
          (FMetasoundFrontendLiteral *this,FMetasoundFrontendLiteral *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  this->Type = param_1->Type;
  this->AsNumDefault = param_1->AsNumDefault;
  pTVar1 = &this->AsBoolean;
  if (pTVar1 != &param_1->AsBoolean) {
    iVar6 = (param_1->AsBoolean).ArrayNum;
    piVar2 = &(this->AsBoolean).ArrayMax;
    pFVar7 = (param_1->AsBoolean).AllocatorInstance.Data;
    (this->AsBoolean).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
      }
    }
  }
  pTVar3 = &this->AsInteger;
  if (pTVar3 != &param_1->AsInteger) {
    iVar6 = (param_1->AsInteger).ArrayNum;
    piVar2 = &(this->AsInteger).ArrayMax;
    pFVar7 = (param_1->AsInteger).AllocatorInstance.Data;
    (this->AsInteger).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->AsFloat,&param_1->AsFloat);
  pTVar4 = &this->AsString;
  if (pTVar4 != &param_1->AsString) {
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(this->AsString).ArrayNum);
    iVar6 = (param_1->AsString).ArrayNum;
    piVar2 = &(this->AsString).ArrayMax;
    pFVar7 = (param_1->AsString).AllocatorInstance.Data;
    (this->AsString).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FString,FString,int>((pTVar4->AllocatorInstance).Data,(FString *)pFVar7,iVar6);
    }
  }
  pTVar5 = &this->AsUObject;
  if (pTVar5 != &param_1->AsUObject) {
    iVar6 = (param_1->AsUObject).ArrayNum;
    piVar2 = &(this->AsUObject).ArrayMax;
    pFVar7 = (param_1->AsUObject).AllocatorInstance.Data;
    (this->AsUObject).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar5->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar7,iVar6);
    }
  }
  return this;
}

// StaticStruct @ 14ae0c6a0

UScriptStruct * __cdecl FMetasoundFrontendLiteral::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendLiteral,(UObject *)pUVar1,
                         L"MetasoundFrontendLiteral");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.OuterSingleton;
}

// FMetasoundFrontendLiteral @ 14ae1c2e0

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
          (FMetasoundFrontendLiteral *this,FAudioParameter *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  int iVar4;
  
  this->Type = None;
  this->AsNumDefault = 0;
  (this->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsBoolean).ArrayNum = 0;
  (this->AsBoolean).ArrayMax = 0;
  (this->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsInteger).ArrayNum = 0;
  (this->AsInteger).ArrayMax = 0;
  (this->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsFloat).ArrayNum = 0;
  (this->AsFloat).ArrayMax = 0;
  (this->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsString).ArrayNum = 0;
  (this->AsString).ArrayMax = 0;
  (this->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsUObject).ArrayNum = 0;
  (this->AsUObject).ArrayMax = 0;
  switch(param_1->ParamType) {
  case None:
    Empty(this);
    this->Type = None;
    this->AsNumDefault = 1;
    return this;
  case Boolean:
  case Trigger:
    Set(this,param_1->BoolParam);
    return this;
  case Integer:
    Set(this,param_1->IntParam);
    return this;
  case Float:
    Set(this,param_1->FloatParam);
    return this;
  case String:
    Set(this,&param_1->StringParam);
    return this;
  case Object:
    Set(this,(param_1->ObjectParam).field0_0x0.DebugPtr);
    return this;
  case NoneArray:
    iVar4 = param_1->IntParam;
    Empty(this);
    this->Type = NoneArray;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    this->AsNumDefault = iVar4;
    return this;
  case BooleanArray:
    Set(this,&param_1->ArrayBoolParam);
    return this;
  case IntegerArray:
    Set(this,&param_1->ArrayIntParam);
    return this;
  case FloatArray:
    Set(this,&param_1->ArrayFloatParam);
    return this;
  case StringArray:
    Set(this,&param_1->ArrayStringParam);
    return this;
  case ObjectArray:
    Set(this,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&param_1->ArrayObjectParam);
    return this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendLiteral.cpp"
                     ,0xa5,L"");
  if (!bVar2) {
    return this;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendLiteral *)(*pcVar1)();
  return pFVar3;
}

// Clear @ 14ae26260

void __thiscall FMetasoundFrontendLiteral::Clear(FMetasoundFrontendLiteral *this)

{
  Empty(this);
  this->Type = None;
  this->AsNumDefault = 1;
  return;
}

// Empty @ 14ae30a80

void __thiscall FMetasoundFrontendLiteral::Empty(FMetasoundFrontendLiteral *this)

{
  int *piVar1;
  
  this->AsNumDefault = 0;
  piVar1 = &(this->AsBoolean).ArrayMax;
  (this->AsBoolean).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->AsBoolean).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AsInteger).ArrayMax;
  (this->AsInteger).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AsInteger).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AsFloat).ArrayMax;
  (this->AsFloat).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AsFloat).AllocatorInstance,0,piVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AsString).AllocatorInstance.Data,(this->AsString).ArrayNum);
  piVar1 = &(this->AsString).ArrayMax;
  (this->AsString).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AsString).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AsUObject).ArrayMax;
  (this->AsUObject).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AsUObject).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetArrayNum @ 14ae375d0

int __thiscall FMetasoundFrontendLiteral::GetArrayNum(FMetasoundFrontendLiteral *this)

{
  switch(this->Type) {
  default:
    return -1;
  case NoneArray:
    return this->AsNumDefault;
  case BooleanArray:
    return (this->AsBoolean).ArrayNum;
  case IntegerArray:
    return (this->AsInteger).ArrayNum;
  case FloatArray:
    return (this->AsFloat).ArrayNum;
  case StringArray:
    return (this->AsString).ArrayNum;
  case UObjectArray:
    return (this->AsUObject).ArrayNum;
  }
}

// GetInvalid @ 14ae38c90

FMetasoundFrontendLiteral * __cdecl
FMetasoundFrontendLiteral::GetInvalid(FMetasoundFrontendLiteral *__return_storage_ptr__)

{
  __return_storage_ptr__->Type = Invalid;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetType @ 14ae3d7a0

EMetasoundFrontendLiteralType __thiscall
FMetasoundFrontendLiteral::GetType(FMetasoundFrontendLiteral *this)

{
  return this->Type;
}

// IsArray @ 14ae3f010

bool __thiscall FMetasoundFrontendLiteral::IsArray(FMetasoundFrontendLiteral *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(this->Type) {
  case None:
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObject:
  case Invalid:
    goto switchD_14ae3f02d_caseD_0;
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectArray:
    return true;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendLiteral.cpp"
                       ,0xc3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
switchD_14ae3f02d_caseD_0:
    return false;
  }
}

// IsEqual @ 14ae3f1c0

bool __thiscall
FMetasoundFrontendLiteral::IsEqual
          (FMetasoundFrontendLiteral *this,FMetasoundFrontendLiteral *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1->Type != this->Type) {
    return false;
  }
  switch(this->Type) {
  case None:
  case NoneArray:
    return this->AsNumDefault == param_1->AsNumDefault;
  case Boolean:
  case BooleanArray:
    iVar2 = (this->AsBoolean).ArrayNum;
    if (iVar2 == (param_1->AsBoolean).ArrayNum) {
      if (iVar2 == 0) {
        return true;
      }
      iVar2 = memcmp((this->AsBoolean).AllocatorInstance.Data,
                     (param_1->AsBoolean).AllocatorInstance.Data,(longlong)iVar2);
      if (iVar2 == 0) {
        return true;
      }
    }
    break;
  case Integer:
  case IntegerArray:
    iVar2 = (this->AsInteger).ArrayNum;
    if (iVar2 == (param_1->AsInteger).ArrayNum) {
      if (iVar2 == 0) {
        return true;
      }
      iVar2 = memcmp((this->AsInteger).AllocatorInstance.Data,
                     (param_1->AsInteger).AllocatorInstance.Data,(longlong)iVar2 << 2);
      if (iVar2 == 0) {
        return true;
      }
    }
    break;
  case Float:
  case FloatArray:
    iVar2 = (this->AsFloat).ArrayNum;
    if (iVar2 == (param_1->AsFloat).ArrayNum) {
      if (iVar2 == 0) {
        return true;
      }
      iVar2 = memcmp((this->AsFloat).AllocatorInstance.Data,
                     (param_1->AsFloat).AllocatorInstance.Data,(longlong)iVar2 << 2);
      if (iVar2 == 0) {
        return true;
      }
    }
    break;
  case String:
  case StringArray:
    iVar2 = (this->AsString).ArrayNum;
    if (iVar2 != (param_1->AsString).ArrayNum) {
      return false;
    }
    bVar1 = CompareItems<FString,int>
                      ((FString *)(this->AsString).AllocatorInstance.Data,
                       (FString *)(param_1->AsString).AllocatorInstance.Data,iVar2);
    goto LAB_14ae3f2c4;
  case UObject:
  case UObjectArray:
    iVar2 = (this->AsUObject).ArrayNum;
    if (iVar2 != (param_1->AsUObject).ArrayNum) {
      return false;
    }
    bVar1 = CompareItems<TObjectPtr<UObject>,int>
                      ((TObjectPtr<UObject> *)(this->AsUObject).AllocatorInstance.Data,
                       (TObjectPtr<UObject> *)(param_1->AsUObject).AllocatorInstance.Data,iVar2);
LAB_14ae3f2c4:
    if (bVar1 != false) {
switchD_14ae3f1ec_caseD_c:
      return true;
    }
    break;
  default:
    goto switchD_14ae3f1ec_caseD_c;
  }
  return false;
}

// IsValid @ 14ae3f8a0

bool __thiscall FMetasoundFrontendLiteral::IsValid(FMetasoundFrontendLiteral *this)

{
  return this->Type != Invalid;
}

// Set @ 14ae444d0

void __thiscall
FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,FDefaultArray *param_1)

{
  int iVar1;
  
  Empty(this);
  this->Type = NoneArray;
  iVar1 = param_1->Num;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  this->AsNumDefault = iVar1;
  return;
}

// Set @ 14ae44510

void __thiscall
FMetasoundFrontendLiteral::Set
          (FMetasoundFrontendLiteral *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  Empty(this);
  this->Type = IntegerArray;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->AsInteger,param_1);
  return;
}

// Set @ 14ae44550

void __thiscall
FMetasoundFrontendLiteral::Set
          (FMetasoundFrontendLiteral *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  Empty(this);
  this->Type = FloatArray;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->AsFloat,param_1);
  return;
}

// Set @ 14ae44590

void __thiscall
FMetasoundFrontendLiteral::Set
          (FMetasoundFrontendLiteral *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  Empty(this);
  this->Type = UObjectArray;
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->AsUObject).ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  (this->AsUObject).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&(this->AsUObject).AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UObject>,UObject_*,int>
            ((this->AsUObject).AllocatorInstance.Data,(UObject **)pFVar3,iVar2);
  return;
}

// Set @ 14ae44620

void __thiscall
FMetasoundFrontendLiteral::Set
          (FMetasoundFrontendLiteral *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  Empty(this);
  this->Type = StringArray;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->AsString,param_1);
  return;
}

// Set @ 14ae44660

void __thiscall
FMetasoundFrontendLiteral::Set
          (FMetasoundFrontendLiteral *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  Empty(this);
  this->Type = BooleanArray;
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=(&this->AsBoolean,param_1);
  return;
}

// Set @ 14ae446a0

void __thiscall FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  Empty(this);
  this->Type = String;
  pFVar2 = (this->AsString).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->AsString).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AsString).ArrayNum;
  piVar1 = &(this->AsString).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->AsString).AllocatorInstance,piVar1);
  }
  (this->AsString).ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)((this->AsString).AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                     param_1);
  return;
}

// Set @ 14ae44760

void __thiscall FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  Empty(this);
  this->Type = Integer;
  pFVar2 = (this->AsInteger).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->AsInteger).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AsInteger).ArrayNum;
  piVar1 = &(this->AsInteger).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->AsInteger).AllocatorInstance,piVar1);
  }
  (this->AsInteger).ArrayNum = iVar5 + 1;
  *(int *)((this->AsInteger).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// Set @ 14ae44820

void __thiscall FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  Empty(this);
  this->Type = Float;
  pFVar2 = (this->AsFloat).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->AsFloat).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AsFloat).ArrayNum;
  piVar1 = &(this->AsFloat).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->AsFloat).AllocatorInstance,piVar1);
  }
  (this->AsFloat).ArrayNum = iVar5 + 1;
  *(float *)((this->AsFloat).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// Set @ 14ae448e0

void __thiscall FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_18 [2];
  
  Empty(this);
  this->Type = UObject;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar2 = (this->AsUObject).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->AsUObject).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AsUObject).ArrayNum;
  piVar1 = &(this->AsUObject).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AsUObject).AllocatorInstance,piVar1);
  }
  (this->AsUObject).ArrayNum = iVar5 + 1;
  *(UObject **)((this->AsUObject).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  return;
}

// Set @ 14ae449e0

void __thiscall FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,FDefault param_1)

{
  Empty(this);
  this->Type = None;
  this->AsNumDefault = 1;
  return;
}

// Set @ 14ae44a10

void __thiscall FMetasoundFrontendLiteral::Set(FMetasoundFrontendLiteral *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement local_res10 [24];
  
  local_res10[0] = (FScriptContainerElement)param_1;
  Empty(this);
  this->Type = Boolean;
  pFVar2 = (this->AsBoolean).AllocatorInstance.Data;
  if ((pFVar2 <= local_res10) && (local_res10 < pFVar2 + (this->AsBoolean).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AsBoolean).ArrayNum;
  piVar1 = &(this->AsBoolean).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->AsBoolean).AllocatorInstance,piVar1);
  }
  (this->AsBoolean).ArrayNum = iVar5 + 1;
  (this->AsBoolean).AllocatorInstance.Data[iVar5] = local_res10[0];
  return;
}

// SetFromLiteral @ 14ae44e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMetasoundFrontendLiteral::SetFromLiteral(FMetasoundFrontendLiteral *this,FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  int iVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  Empty(this);
  this->Type = None;
  this->AsNumDefault = 1;
  EVar2 = Metasound::FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
    Empty(this);
    this->Type = None;
    this->AsNumDefault = 1;
    return;
  case Boolean:
    break;
  case Integer:
    if (((param_1->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,(int)(param_1->Value)._padding_);
    return;
  case Float:
    if (((param_1->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,*(float *)&(param_1->Value)._padding_);
    return;
  case String:
    if (((param_1->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,(FString *)param_1);
    return;
  case UObjectProxy:
    if (((param_1->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_1->Value)._padding_ != 0) && (1 < (byte)LogMetaSound._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Set(this,(UObject *)0x0);
    return;
  case NoneArray:
    if (((param_1->Value).TypeIndex != '\x06') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = (int)(param_1->Value)._padding_;
    Empty(this);
    this->Type = NoneArray;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    this->AsNumDefault = iVar4;
    return;
  case BooleanArray:
    if (((param_1->Value).TypeIndex != '\a') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,(TArray<bool,TSizedDefaultAllocator<32>_> *)param_1);
    return;
  case IntegerArray:
    if (((param_1->Value).TypeIndex != '\b') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,(TArray<int,TSizedDefaultAllocator<32>_> *)param_1);
    return;
  case FloatArray:
    if (((param_1->Value).TypeIndex != '\t') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,(TArray<float,TSizedDefaultAllocator<32>_> *)param_1);
    return;
  case StringArray:
    if (((param_1->Value).TypeIndex != '\n') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Set(this,(TArray<FString,TSizedDefaultAllocator<32>_> *)param_1);
    return;
  case UObjectProxyArray:
    if (((param_1->Value).TypeIndex != '\v') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((int)(param_1->Value)._padding_ != 0) && (1 < (byte)LogMetaSound._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    Set(this,&local_18);
  default:
    return;
  }
  if (((param_1->Value).TypeIndex != '\x01') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Set(this,SUB81((param_1->Value)._padding_,0));
  return;
}

// SetType @ 14ae45a20

void __thiscall
FMetasoundFrontendLiteral::SetType
          (FMetasoundFrontendLiteral *this,EMetasoundFrontendLiteralType param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_68;
  TArray<bool,TSizedDefaultAllocator<32>_> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  switch(this->Type) {
  case None:
  case Invalid:
    Empty(this);
    this->Type = None;
    this->AsNumDefault = 1;
    return;
  case Boolean:
    Set(this,false);
    return;
  case Integer:
    Set(this,0);
    return;
  case Float:
    Set(this,0.0);
    return;
  case String:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    Set(this,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      return;
    }
    break;
  case UObject:
    Set(this,(UObject *)0x0);
    return;
  case NoneArray:
    Empty(this);
    this->Type = NoneArray;
    this->AsNumDefault = 0;
    return;
  case BooleanArray:
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    Set(this,&local_58);
    return;
  case IntegerArray:
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    Set(this,&local_48);
    return;
  case FloatArray:
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    Set(this,&local_38);
    return;
  case StringArray:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    Set(this,&local_28);
    DestructItems<FString,int>((FString *)0x0,0);
    return;
  case UObjectArray:
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    Set(this,&local_18);
    return;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendLiteral.cpp"
                       ,0x21c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ToLiteral @ 14ae46c40

FLiteral * __thiscall
FMetasoundFrontendLiteral::ToLiteral
          (FMetasoundFrontendLiteral *this,FLiteral *__return_storage_ptr__,FName *param_1,
          IDataTypeRegistry *param_2,FProxyDataCache *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FLiteral *pFVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FLiteral *local_res10;
  ForAnyElementType local_58;
  undefined8 local_50;
  TSharedPtr<Audio::IProxyData,1> local_48;
  
  local_res10 = __return_storage_ptr__;
  if (this->Type == UObject) {
    if ((this->AsUObject).ArrayNum < 1) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6800533448483143022>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendLiteral.cpp"
                         ,0x292,"AsUObject.Num() > 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLiteral *)(*pcVar4)();
        return pFVar8;
      }
    }
    else {
      if (param_3 == (FProxyDataCache *)0x0) {
        if (param_2 == (IDataTypeRegistry *)0x0) {
          param_2 = Metasound::Frontend::IDataTypeRegistry::Get();
        }
        pcVar4 = *(code **)((longlong)*param_2 + 0x88);
        if (((this->AsUObject).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FLiteral *)(*pcVar4)();
          return pFVar8;
        }
        (*pcVar4)(param_2,__return_storage_ptr__,param_1,
                  *(undefined8 *)(this->AsUObject).AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      pTVar9 = Metasound::Frontend::FProxyDataCache::FindProxy
                         (param_3,*(UObject **)(this->AsUObject).AllocatorInstance.Data);
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      if (pTVar9 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
        (__return_storage_ptr__->Value)._padding_ = (longlong)pTVar9->Object;
        pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->Value)._padding_ = (longlong)pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        (__return_storage_ptr__->Value).TypeIndex = '\x05';
        return __return_storage_ptr__;
      }
    }
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\x05';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  if (this->Type != UObjectArray) {
    ToLiteralNoProxy(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_3 == (FProxyDataCache *)0x0) {
    if (param_2 == (IDataTypeRegistry *)0x0) {
      param_2 = Metasound::Frontend::IDataTypeRegistry::Get();
    }
    (**(code **)((longlong)*param_2 + 0x90))
              (param_2,__return_storage_ptr__,param_1,&this->AsUObject);
    return __return_storage_ptr__;
  }
  pFVar11 = (this->AsUObject).AllocatorInstance.Data;
  iVar10 = (this->AsUObject).ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pFVar2 = pFVar11 + (longlong)iVar10 * 8;
  iVar7 = 0;
LAB_14ae46d98:
  do {
    if ((this->AsUObject).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      iVar7 = (int)local_50;
    }
    FVar5.Data = local_58.Data;
    pFVar8 = local_res10;
    if (pFVar11 == pFVar2) {
      (local_res10->Value).TypeIndex = '\0';
      piVar1 = (int *)((longlong)&(local_res10->Value)._padding_ + 4);
      (local_res10->Value)._padding_ = 0;
      *(int *)&(local_res10->Value)._padding_ = iVar7;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar7,0,(ForAnyElementType *)local_res10,iVar7,piVar1);
        ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
                  ((void *)(pFVar8->Value)._padding_,(TSharedPtr<Audio::IProxyData,1> *)FVar5.Data,
                   iVar7);
        iVar10 = (int)local_50;
      }
      (pFVar8->Value).TypeIndex = '\v';
      DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                ((TSharedPtr<Audio::IProxyData,1> *)local_58.Data,iVar10);
      if ((TSharedPtr<Audio::IProxyData,1> *)local_58.Data == (TSharedPtr<Audio::IProxyData,1> *)0x0
         ) {
        return pFVar8;
      }
      FMemory::Free(local_58.Data);
      return pFVar8;
    }
    pTVar9 = Metasound::Frontend::FProxyDataCache::FindProxy(param_3,*(UObject **)pFVar11);
    if (pTVar9 == (TSharedPtr<Audio::IProxyData,1> *)0x0) {
      local_48.Object = (IProxyData *)0x0;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (((local_58.Data <= &local_48) &&
          (&local_48 <
           (TSharedPtr<Audio::IProxyData,1> *)(local_58.Data + (longlong)local_50._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLiteral *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
      *(IProxyData **)&local_58.Data[(longlong)iVar7 * 0x10].field_0x0 = local_48.Object;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar7 * 0x10 + 8) =
           local_48.SharedReferenceCount.ReferenceController;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_48.Object = (IProxyData *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      if (((local_58.Data <= pTVar9) &&
          (pTVar9 < (TSharedPtr<Audio::IProxyData,1> *)
                    (local_58.Data + (longlong)local_50._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLiteral *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
      *(IProxyData **)&local_58.Data[(longlong)iVar7 * 0x10].field_0x0 = pTVar9->Object;
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar7 * 0x10 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        pFVar11 = pFVar11 + 8;
        iVar7 = iVar7 + 1;
        goto LAB_14ae46d98;
      }
    }
    pFVar11 = pFVar11 + 8;
    iVar7 = (int)local_50;
  } while( true );
}

// ToLiteralNoProxy @ 14ae47020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLiteral * __thiscall
FMetasoundFrontendLiteral::ToLiteralNoProxy
          (FMetasoundFrontendLiteral *this,FLiteral *__return_storage_ptr__)

{
  int *piVar1;
  EMetasoundFrontendLiteralType EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  FLiteral *pFVar7;
  size_t _Size;
  TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  EVar2 = this->Type;
  if ((EVar2 == UObject) || (EVar2 == UObjectArray)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ToString(this,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
switchD_14ae47066_caseD_5:
    Metasound::FLiteral::CreateInvalid(__return_storage_ptr__);
  }
  else {
    switch(EVar2) {
    case None:
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      break;
    case Boolean:
      if (((this->AsBoolean).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FLiteral *)(*pcVar5)();
        return pFVar7;
      }
      pFVar4 = (this->AsBoolean).AllocatorInstance.Data;
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      *(FScriptContainerElement *)&(__return_storage_ptr__->Value)._padding_ = *pFVar4;
      (__return_storage_ptr__->Value).TypeIndex = '\x01';
      break;
    case Integer:
      if (((this->AsInteger).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FLiteral *)(*pcVar5)();
        return pFVar7;
      }
      pFVar4 = (this->AsInteger).AllocatorInstance.Data;
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = *(undefined4 *)pFVar4;
      (__return_storage_ptr__->Value).TypeIndex = '\x02';
      break;
    case Float:
      if (((this->AsFloat).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FLiteral *)(*pcVar5)();
        return pFVar7;
      }
      pFVar4 = (this->AsFloat).AllocatorInstance.Data;
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = *(undefined4 *)pFVar4;
      (__return_storage_ptr__->Value).TypeIndex = '\x03';
      break;
    case String:
      if (((this->AsString).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FLiteral *)(*pcVar5)();
        return pFVar7;
      }
      pFVar4 = (this->AsString).AllocatorInstance.Data;
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      ::FString::FString((FString *)__return_storage_ptr__,(FString *)pFVar4);
      (__return_storage_ptr__->Value).TypeIndex = '\x04';
      break;
    default:
      goto switchD_14ae47066_caseD_5;
    case NoneArray:
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>::SetNum
                (&local_28,this->AsNumDefault,Default);
      _Src.Data = local_28.AllocatorInstance.Data;
      _Size = (size_t)local_28.ArrayNum;
      piVar1 = (int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4);
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      (__return_storage_ptr__->Value)._padding_ = 0;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = local_28.ArrayNum;
      if (local_28.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_28.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                   local_28.ArrayNum,piVar1);
        memcpy((void *)(__return_storage_ptr__->Value)._padding_,_Src.Data,_Size);
      }
      (__return_storage_ptr__->Value).TypeIndex = '\x06';
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      break;
    case BooleanArray:
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      piVar1 = (int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4);
      (__return_storage_ptr__->Value)._padding_ = 0;
      iVar3 = (this->AsBoolean).ArrayNum;
      pFVar4 = (this->AsBoolean).AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
        (__return_storage_ptr__->Value).TypeIndex = '\a';
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
        memcpy((void *)(__return_storage_ptr__->Value)._padding_,pFVar4,(longlong)iVar3);
        (__return_storage_ptr__->Value).TypeIndex = '\a';
      }
      break;
    case IntegerArray:
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      piVar1 = (int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4);
      (__return_storage_ptr__->Value)._padding_ = 0;
      iVar3 = (this->AsInteger).ArrayNum;
      pFVar4 = (this->AsInteger).AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
        (__return_storage_ptr__->Value).TypeIndex = '\b';
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
        memcpy((void *)(__return_storage_ptr__->Value)._padding_,pFVar4,(longlong)iVar3 << 2);
        (__return_storage_ptr__->Value).TypeIndex = '\b';
      }
      break;
    case FloatArray:
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      piVar1 = (int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4);
      (__return_storage_ptr__->Value)._padding_ = 0;
      iVar3 = (this->AsFloat).ArrayNum;
      pFVar4 = (this->AsFloat).AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
        (__return_storage_ptr__->Value).TypeIndex = '\t';
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
        memcpy((void *)(__return_storage_ptr__->Value)._padding_,pFVar4,(longlong)iVar3 << 2);
        (__return_storage_ptr__->Value).TypeIndex = '\t';
      }
      break;
    case StringArray:
      (__return_storage_ptr__->Value).TypeIndex = '\0';
      piVar1 = (int *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4);
      (__return_storage_ptr__->Value)._padding_ = 0;
      iVar3 = (this->AsString).ArrayNum;
      pFVar4 = (this->AsString).AllocatorInstance.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
        (__return_storage_ptr__->Value).TypeIndex = '\n';
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
        ConstructItems<FString,FString,int>
                  ((void *)(__return_storage_ptr__->Value)._padding_,(FString *)pFVar4,iVar3);
        (__return_storage_ptr__->Value).TypeIndex = '\n';
      }
    }
  }
  return __return_storage_ptr__;
}

// ToString @ 14ae47460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FMetasoundFrontendLiteral::ToString(FMetasoundFrontendLiteral *this,FString *__return_storage_ptr__)

{
  UObject *this_00;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_> local_18;
  
  switch(this->Type) {
  case None:
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  case Boolean:
    if (((this->AsBoolean).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    pwVar4 = L"true";
    if (*(this->AsBoolean).AllocatorInstance.Data == (FScriptContainerElement)0x0) {
      pwVar4 = L"false";
    }
    ::FString::FString(__return_storage_ptr__,pwVar4);
    return __return_storage_ptr__;
  case Integer:
    if (((this->AsInteger).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
    return __return_storage_ptr__;
  case Float:
    if (((this->AsFloat).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
    return __return_storage_ptr__;
  case String:
    if (((this->AsString).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::FString(__return_storage_ptr__,(FString *)(this->AsString).AllocatorInstance.Data);
    return __return_storage_ptr__;
  case UObject:
    if (((this->AsUObject).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    this_00 = *(UObject **)(this->AsUObject).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UObject *)0x0) goto LAB_14ae476cb;
    }
    else {
      if (this_00 == (UObject *)0x0) {
LAB_14ae476cb:
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable(this_00);
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this_00,__return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  case NoneArray:
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>::SetNum
              (&local_18,this->AsNumDefault,Default);
    MetasoundFrontendLiteralPrivate::
    TLiteralValueToStringHelper<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::
    Convert(__return_storage_ptr__,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    break;
  case BooleanArray:
    MetasoundFrontendLiteralPrivate::
    TLiteralValueToStringHelper<TArray<bool,TSizedDefaultAllocator<32>_>_>::Convert
              (__return_storage_ptr__,&this->AsBoolean);
    return __return_storage_ptr__;
  case IntegerArray:
    MetasoundFrontendLiteralPrivate::
    TLiteralValueToStringHelper<TArray<int,TSizedDefaultAllocator<32>_>_>::Convert
              (__return_storage_ptr__,&this->AsInteger);
    return __return_storage_ptr__;
  case FloatArray:
    MetasoundFrontendLiteralPrivate::
    TLiteralValueToStringHelper<TArray<float,TSizedDefaultAllocator<32>_>_>::Convert
              (__return_storage_ptr__,&this->AsFloat);
    return __return_storage_ptr__;
  case StringArray:
    MetasoundFrontendLiteralPrivate::
    TLiteralValueToStringHelper<TArray<FString,TSizedDefaultAllocator<32>_>_>::Convert
              (__return_storage_ptr__,&this->AsString);
    return __return_storage_ptr__;
  case UObjectArray:
    MetasoundFrontendLiteralPrivate::
    TLiteralValueToStringHelper<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::Convert
              (__return_storage_ptr__,&this->AsUObject);
    return __return_storage_ptr__;
  default:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// TryGet @ 14ae47830

bool __thiscall FMetasoundFrontendLiteral::TryGet(FMetasoundFrontendLiteral *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Type != Integer) {
    return false;
  }
  if ((this->AsInteger).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_1 = *(int *)(this->AsInteger).AllocatorInstance.Data;
  return true;
}

// TryGet @ 14ae478b0

bool __thiscall FMetasoundFrontendLiteral::TryGet(FMetasoundFrontendLiteral *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Type != Float) {
    return false;
  }
  if ((this->AsFloat).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_1 = *(float *)(this->AsFloat).AllocatorInstance.Data;
  return true;
}

// TryGet @ 14ae47930

bool __thiscall FMetasoundFrontendLiteral::TryGet(FMetasoundFrontendLiteral *this,UObject **param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (this->Type == UObject) {
    iVar1 = (this->AsUObject).ArrayNum;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      *param_1 = *(UObject **)(this->AsUObject).AllocatorInstance.Data;
      return true;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6800533448483143130>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendLiteral.cpp"
                       ,0x226,"!AsUObject.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// TryGet @ 14ae479e0

bool __thiscall
FMetasoundFrontendLiteral::TryGet
          (FMetasoundFrontendLiteral *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  if (this->Type == IntegerArray) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->AsInteger);
    return true;
  }
  return false;
}

// TryGet @ 14ae47a10

bool __thiscall
FMetasoundFrontendLiteral::TryGet
          (FMetasoundFrontendLiteral *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  if (this->Type == FloatArray) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->AsFloat);
    return true;
  }
  return false;
}

// TryGet @ 14ae47a40

bool __thiscall
FMetasoundFrontendLiteral::TryGet
          (FMetasoundFrontendLiteral *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this->Type != UObjectArray) {
    return false;
  }
  if (param_1 != (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->AsUObject) {
    _Src = (this->AsUObject).AllocatorInstance.Data;
    iVar1 = (this->AsUObject).ArrayNum;
    param_1->ArrayNum = iVar1;
    if ((iVar1 == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,param_1->ArrayMax,&param_1->AllocatorInstance,iVar1,&param_1->ArrayMax);
    if (iVar1 != 0) {
      memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return true;
}

// TryGet @ 14ae47af0

bool __thiscall
FMetasoundFrontendLiteral::TryGet
          (FMetasoundFrontendLiteral *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  if (this->Type == StringArray) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->AsString);
    return true;
  }
  return false;
}

// TryGet @ 14ae47b20

bool __thiscall
FMetasoundFrontendLiteral::TryGet
          (FMetasoundFrontendLiteral *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  if (this->Type == BooleanArray) {
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->AsBoolean);
    return true;
  }
  return false;
}

// TryGet @ 14ae47b50

bool __thiscall FMetasoundFrontendLiteral::TryGet(FMetasoundFrontendLiteral *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  if (this->Type != String) {
    return false;
  }
  if (((this->AsString).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (this->AsString).AllocatorInstance.Data;
  if ((FScriptContainerElement *)param_1 != pFVar3) {
    iVar2 = *(int *)(pFVar3 + 8);
    piVar1 = &(param_1->Data).ArrayMax;
    _Src = *(void **)&pFVar3->field_0x0;
    (param_1->Data).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,*piVar1,(ForAnyElementType *)param_1,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((param_1->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
    }
  }
  return true;
}

// TryGet @ 14ae47c40

bool __thiscall FMetasoundFrontendLiteral::TryGet(FMetasoundFrontendLiteral *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Type != Boolean) {
    return false;
  }
  if ((this->AsBoolean).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_1 = (bool)*(this->AsBoolean).AllocatorInstance.Data;
  return true;
}

