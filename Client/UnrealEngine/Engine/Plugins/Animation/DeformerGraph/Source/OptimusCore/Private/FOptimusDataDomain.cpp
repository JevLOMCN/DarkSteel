// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 18

// StaticStruct @ 14e104330

UScriptStruct * __cdecl FOptimusDataDomain::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDataDomain.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDataDomain.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataDomain,(UObject *)pUVar1,
                         L"OptimusDataDomain");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDataDomain.OuterSingleton;
}

// FOptimusDataDomain @ 14e151100

FOptimusDataDomain * __thiscall
FOptimusDataDomain::FOptimusDataDomain(FOptimusDataDomain *this,FOptimusDataDomain *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->DimensionNames;
  this->Type = param_1->Type;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DimensionNames).ArrayMax;
  iVar3 = (param_1->DimensionNames).ArrayNum;
  pFVar4 = (param_1->DimensionNames).AllocatorInstance.Data;
  (this->DimensionNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  this->Multiplier = param_1->Multiplier;
  ::FString::FString(&this->Expression,&param_1->Expression);
  pTVar1 = &this->LevelNames_DEPRECATED;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LevelNames_DEPRECATED).ArrayMax;
  iVar3 = (param_1->LevelNames_DEPRECATED).ArrayNum;
  pFVar4 = (param_1->LevelNames_DEPRECATED).AllocatorInstance.Data;
  (this->LevelNames_DEPRECATED).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  return this;
}

// FOptimusDataDomain @ 14e151210

FOptimusDataDomain * __thiscall
FOptimusDataDomain::FOptimusDataDomain(FOptimusDataDomain *this,FOptimusExecutionDomain *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FOptimusDataDomain *pFVar7;
  FName local_res8 [2];
  
  this->Multiplier = 1;
  this->Type = Dimensional;
  pTVar1 = &this->DimensionNames;
  (this->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->LevelNames_DEPRECATED;
  (this->Expression).Data.ArrayNum = 0;
  (this->Expression).Data.ArrayMax = 0;
  piVar3 = &(this->DimensionNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DimensionNames).ArrayNum = 0;
  *piVar3 = 0;
  ::FName::FName(local_res8,"Vertex");
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LevelNames_DEPRECATED).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar2->AllocatorInstance,1,&(this->LevelNames_DEPRECATED).ArrayMax);
  *(FName *)(pTVar2->AllocatorInstance).Data = local_res8[0];
  if (param_1->Type == DomainName) {
    this->Type = Dimensional;
    FVar4 = param_1->Name;
    (this->DimensionNames).ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,*piVar3,&pTVar1->AllocatorInstance,1,piVar3);
    *(FName *)(pTVar1->AllocatorInstance).Data = FVar4;
  }
  else if (param_1->Type == Expression) {
    this->Type = Expression;
    ::FString::operator=(&this->Expression,&param_1->Expression);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataDomain.cpp"
                       ,0x30,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FOptimusDataDomain *)(*pcVar5)();
      return pFVar7;
    }
  }
  return this;
}

// FOptimusDataDomain @ 14e151360

FOptimusDataDomain * __thiscall
FOptimusDataDomain::FOptimusDataDomain
          (FOptimusDataDomain *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  
  pTVar1 = &this->DimensionNames;
  this->Type = Dimensional;
  piVar2 = &(this->DimensionNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->DimensionNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  this->Multiplier = 1;
  (this->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Expression).Data.ArrayNum = 0;
  (this->Expression).Data.ArrayMax = 0;
  pTVar1 = &this->LevelNames_DEPRECATED;
  ::FName::FName(&local_res8,"Vertex");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LevelNames_DEPRECATED).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->LevelNames_DEPRECATED).ArrayMax);
  *(FName *)(pTVar1->AllocatorInstance).Data = local_res8;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// FOptimusDataDomain @ 14e151470

FOptimusDataDomain * __thiscall
FOptimusDataDomain::FOptimusDataDomain
          (FOptimusDataDomain *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FName local_res8;
  
  pTVar1 = &this->DimensionNames;
  this->Type = Dimensional;
  piVar2 = &(this->DimensionNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  (this->DimensionNames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar3,(longlong)iVar4 << 3);
  }
  iVar4 = 1;
  if (((this->DimensionNames).ArrayNum == 1) && (iVar4 = 1, 1 < param_2)) {
    iVar4 = param_2;
  }
  this->Multiplier = iVar4;
  (this->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Expression).Data.ArrayNum = 0;
  (this->Expression).Data.ArrayMax = 0;
  pTVar1 = &this->LevelNames_DEPRECATED;
  ::FName::FName(&local_res8,"Vertex");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LevelNames_DEPRECATED).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->LevelNames_DEPRECATED).ArrayMax);
  *(FName *)(pTVar1->AllocatorInstance).Data = local_res8;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FOptimusDataDomain @ 14e151590

FOptimusDataDomain * __thiscall FOptimusDataDomain::FOptimusDataDomain(FOptimusDataDomain *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8;
  
  this->Multiplier = 1;
  this->Type = Dimensional;
  pTVar1 = &this->LevelNames_DEPRECATED;
  (this->DimensionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DimensionNames).ArrayNum = 0;
  (this->DimensionNames).ArrayMax = 0;
  (this->Expression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Expression).Data.ArrayNum = 0;
  (this->Expression).Data.ArrayMax = 0;
  ::FName::FName(&local_res8,"Vertex");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LevelNames_DEPRECATED).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->LevelNames_DEPRECATED).ArrayMax);
  *(FName *)(pTVar1->AllocatorInstance).Data = local_res8;
  return this;
}

// ~FOptimusDataDomain @ 14e161270

void __thiscall FOptimusDataDomain::~FOptimusDataDomain(FOptimusDataDomain *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LevelNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Expression).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DimensionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e165570

FOptimusDataDomain * __thiscall
FOptimusDataDomain::operator=(FOptimusDataDomain *this,FOptimusDataDomain *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->DimensionNames;
  pTVar2 = &this->DimensionNames;
  this->Type = param_1->Type;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DimensionNames).ArrayNum = (param_1->DimensionNames).ArrayNum;
    (this->DimensionNames).ArrayMax = (param_1->DimensionNames).ArrayMax;
    (param_1->DimensionNames).ArrayNum = 0;
    (param_1->DimensionNames).ArrayMax = 0;
  }
  pFVar3 = &param_1->Expression;
  pFVar4 = &this->Expression;
  this->Multiplier = param_1->Multiplier;
  if (pFVar4 != pFVar3) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Expression).Data.ArrayNum = (param_1->Expression).Data.ArrayNum;
    (this->Expression).Data.ArrayMax = (param_1->Expression).Data.ArrayMax;
    (param_1->Expression).Data.ArrayNum = 0;
    (param_1->Expression).Data.ArrayMax = 0;
  }
  pTVar1 = &param_1->LevelNames_DEPRECATED;
  pTVar2 = &this->LevelNames_DEPRECATED;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LevelNames_DEPRECATED).ArrayNum = (param_1->LevelNames_DEPRECATED).ArrayNum;
    (this->LevelNames_DEPRECATED).ArrayMax = (param_1->LevelNames_DEPRECATED).ArrayMax;
    (param_1->LevelNames_DEPRECATED).ArrayNum = 0;
    (param_1->LevelNames_DEPRECATED).ArrayMax = 0;
  }
  return this;
}

// operator== @ 14e165d10

bool __thiscall FOptimusDataDomain::operator==(FOptimusDataDomain *this,FOptimusDataDomain *param_1)

{
  EOptimusDataDomainType EVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TStringView<wchar_t> *pTVar5;
  TStringView<wchar_t> *pTVar6;
  int iVar7;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  EVar1 = this->Type;
  if (EVar1 != param_1->Type) {
    return false;
  }
  if (EVar1 != Dimensional) {
    if (EVar1 != Expression) {
      return false;
    }
    local_38.DataPtr = (wchar_t *)(this->Expression).Data.AllocatorInstance.Data;
    iVar2 = (this->Expression).Data.ArrayNum;
    local_38.Size = iVar2 + -1;
    if (iVar2 == 0) {
      local_38.Size = 0;
    }
    pTVar5 = TStringView<wchar_t>::TrimStartAndEnd(&local_38,&local_28);
    local_38.DataPtr = (wchar_t *)(param_1->Expression).Data.AllocatorInstance.Data;
    iVar2 = (param_1->Expression).Data.ArrayNum;
    local_38.Size = iVar2 + -1;
    if (iVar2 == 0) {
      local_38.Size = 0;
    }
    pTVar6 = TStringView<wchar_t>::TrimStartAndEnd(&local_38,&local_18);
    iVar2 = pTVar5->Size;
    iVar7 = (int)*(undefined8 *)&pTVar6->Size;
    if ((iVar2 != 0) && (iVar7 != 0)) {
      iVar4 = iVar7;
      if (iVar2 < iVar7) {
        iVar4 = iVar2;
      }
      iVar4 = wcsncmp(pTVar5->DataPtr,pTVar6->DataPtr,(longlong)iVar4);
      if (iVar4 != 0) {
        return iVar4 == 0;
      }
    }
    return iVar2 == iVar7;
  }
  iVar2 = (this->DimensionNames).ArrayNum;
  if (iVar2 != (param_1->DimensionNames).ArrayNum) {
    return false;
  }
  bVar3 = CompareItems<FName,int>
                    ((FName *)(this->DimensionNames).AllocatorInstance.Data,
                     (FName *)(param_1->DimensionNames).AllocatorInstance.Data,iVar2);
  if (!bVar3) {
    return false;
  }
  if (this->Multiplier != param_1->Multiplier) {
    return false;
  }
  return true;
}

// AreCompatible @ 14e17e410

bool __cdecl
FOptimusDataDomain::AreCompatible
          (FOptimusDataDomain *param_1,FOptimusDataDomain *param_2,FString *param_3)

{
  EOptimusDataDomainType EVar1;
  EOptimusDataDomainType EVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int *piVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  EVar1 = param_1->Type;
  if (((EVar1 == Expression) && ((param_1->Expression).Data.ArrayNum < 2)) ||
     ((EVar2 = param_2->Type, EVar2 == Expression && ((param_2->Expression).Data.ArrayNum < 2)))) {
    if (param_3 != (FString *)0x0) {
      ::FString::operator=(param_3,L"One of the pins has undefined datadomain");
      return false;
    }
  }
  else {
    piVar5 = &(param_1->DimensionNames).ArrayNum;
    if ((EVar1 == Dimensional) && (*piVar5 == 0)) {
      return true;
    }
    if ((EVar2 == Dimensional) && ((param_2->DimensionNames).ArrayNum == 0)) {
      if (param_3 != (FString *)0x0) {
        ::FString::operator=(param_3,L"Can\'t connect a resource output into a value input.");
        return false;
      }
    }
    else {
      if ((EVar1 == Dimensional) && (*piVar5 == 0)) {
        return true;
      }
      if ((EVar2 == Dimensional) && ((param_2->DimensionNames).ArrayNum == 0)) {
        return true;
      }
      bVar4 = operator==(param_1,param_2);
      if (bVar4) {
        return true;
      }
      if (param_3 != (FString *)0x0) {
        GetDisplayName(param_2,&local_18);
        GetDisplayName(param_1,&local_28);
        ::FString::PrintfImpl
                  (&local_38,
                   L"Can\'t connect resources with incompatible data domain types (%s vs %s).");
        if (param_3 != &local_38) {
          pFVar3 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_38.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// AsExpression @ 14e17e830

/* WARNING: Type propagation algorithm not settling */

TOptional<FString> * __thiscall
FOptimusDataDomain::AsExpression
          (FOptimusDataDomain *this,TOptional<FString> *__return_storage_ptr__)

{
  EOptimusDataDomainType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<FString> *pTVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  EVar1 = this->Type;
  if ((EVar1 == Dimensional) && ((this->DimensionNames).ArrayNum == 0)) {
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  }
  else {
    if (EVar1 == Dimensional) {
      if ((this->DimensionNames).ArrayNum < 2) {
        iVar2 = (this->DimensionNames).ArrayNum;
        if (this->Multiplier < 2) {
          if ((iVar2 < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TOptional<FString> *)(*pcVar3)();
            return pTVar5;
          }
          pFVar6 = ::FName::ToString((FName *)(this->DimensionNames).AllocatorInstance.Data,
                                     &local_18);
          (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar6->Data).ArrayNum;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
          if ((*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar5 = (TOptional<FString> *)(*pcVar3)();
            return pTVar5;
          }
          if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        if ((iVar2 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TOptional<FString> *)(*pcVar3)();
          return pTVar5;
        }
        ::FName::ToString((FName *)(this->DimensionNames).AllocatorInstance.Data,&local_28);
        ::FString::PrintfImpl(&local_38,L"%s * %d");
        (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             local_38.Data.AllocatorInstance.Data;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_38.Data.ArrayNum;
        iVar2 = local_38.Data.ArrayMax;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        if ((iVar2 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TOptional<FString> *)(*pcVar3)();
          return pTVar5;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
    }
    else if (EVar1 == Expression) {
      ::FString::FString((FString *)__return_storage_ptr__,&this->Expression);
      if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) != -1) {
        return __return_storage_ptr__;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (!bVar4) {
        return __return_storage_ptr__;
      }
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<FString> *)(*pcVar3)();
      return pTVar5;
    }
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
  }
  return __return_storage_ptr__;
}

// BackCompFixupLevels @ 14e17eac0

void __thiscall FOptimusDataDomain::BackCompFixupLevels(FOptimusDataDomain *this)

{
  if ((this->LevelNames_DEPRECATED).ArrayNum != 0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&this->DimensionNames,&this->LevelNames_DEPRECATED);
    (this->LevelNames_DEPRECATED).ArrayNum = 0;
    if ((this->LevelNames_DEPRECATED).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->LevelNames_DEPRECATED).AllocatorInstance,0,
                 &(this->LevelNames_DEPRECATED).ArrayMax);
    }
  }
  return;
}

// FromString @ 14e1b28c0

FOptimusDataDomain * __cdecl
FOptimusDataDomain::FromString(FOptimusDataDomain *__return_storage_ptr__,FString *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FName *pFVar8;
  FOptimusDataDomain *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *_Str;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined1 local_res18 [8];
  FName local_res20;
  ForAnyElementType local_138;
  uint local_130;
  uint local_12c;
  ForAnyElementType local_128;
  undefined8 local_120;
  FName local_118;
  TArray<FName,TSizedDefaultAllocator<32>_> local_110;
  FString local_100;
  ForAnyElementType *local_f0;
  undefined *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  ForAnyElementType **local_c0;
  FName local_b8 [2];
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  ::FString::TrimStartAndEnd(param_1,&local_100);
  bVar5 = ::FString::StartsWith(&local_100,L"\'",1,IgnoreCase);
  if (bVar5) {
    iVar6 = local_100.Data.ArrayNum + -3;
    if (local_100.Data.ArrayNum == 0) {
      iVar6 = -2;
    }
    pFVar7 = ::FString::Mid(&local_100,&local_78,1,iVar6);
    __return_storage_ptr__->Type = Expression;
    __return_storage_ptr__->Multiplier = 1;
    pTVar1 = &__return_storage_ptr__->LevelNames_DEPRECATED;
    (__return_storage_ptr__->Expression).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->DimensionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->DimensionNames).ArrayNum = 0;
    (__return_storage_ptr__->DimensionNames).ArrayMax = 0;
    (__return_storage_ptr__->Expression).Data.AllocatorInstance.Data =
         (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Expression).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Expression).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    ::FName::FName(&local_res20,"Vertex");
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->LevelNames_DEPRECATED).ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,&pTVar1->AllocatorInstance,1,
               &(__return_storage_ptr__->LevelNames_DEPRECATED).ArrayMax);
    *(FName *)(pTVar1->AllocatorInstance).Data = local_res20;
    FVar14.Data = (pFVar7->Data).AllocatorInstance.Data;
  }
  else {
    pFVar13 = (FScriptContainerElement *)0x0;
    uStack_e0 = 1;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_e8 = &u__;
    local_d8 = (param_1->Data).AllocatorInstance.Data;
    local_a8._12_4_ = uStack_dc;
    local_a8.Size = 1;
    iVar6 = (param_1->Data).ArrayNum;
    local_120 = 0;
    local_a8.DataPtr = L"/";
    iVar15 = 0;
    iStack_d0 = iVar6 + -1;
    if (iVar6 == 0) {
      iStack_d0 = iVar15;
    }
    local_f0 = &local_128;
    local_c0 = &local_f0;
    local_98._12_4_ = uStack_cc;
    local_98.Size = iStack_d0;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
               ::Call;
    local_98.DataPtr = (wchar_t *)local_d8;
    UE::String::ParseTokens
              (&local_98,&local_a8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_c8,
               None);
    if ((int)local_120 < 2) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      (__return_storage_ptr__->DimensionNames).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->DimensionNames).ArrayNum = 0;
      (__return_storage_ptr__->DimensionNames).ArrayMax = 0;
      *(undefined8 *)&__return_storage_ptr__->Multiplier = 0;
      (__return_storage_ptr__->Expression).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Expression).Data.ArrayNum = 0;
      (__return_storage_ptr__->Expression).Data.ArrayMax = 0;
      (__return_storage_ptr__->LevelNames_DEPRECATED).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->LevelNames_DEPRECATED).ArrayNum = 0;
      (__return_storage_ptr__->LevelNames_DEPRECATED).ArrayMax = 0;
      FOptimusDataDomain(__return_storage_ptr__);
      FVar14.Data = local_128.Data;
    }
    else {
      pFVar10 = local_128.Data + (longlong)((int)local_120 + -1) * 0x10;
      pwVar3 = *(wchar_t **)pFVar10;
      uVar4 = *(undefined8 *)(pFVar10 + 8);
      iVar6 = ((int)local_120 - ((int)local_120 + -1)) + -1;
      if (iVar6 != 0) {
        memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar6 << 4);
      }
      iVar6 = (int)local_120 + -1;
      local_120 = CONCAT44(local_120._4_4_,iVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&local_128,iVar6,(int *)((longlong)&local_120 + 4));
      pFVar7 = ::FString::ConstructFromPtrSize(&local_88,pwVar3,(int)uVar4);
      pFVar10 = pFVar13;
      if (&local_68 != pFVar7) {
        pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar15 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      _Str = (FScriptContainerElement *)L"";
      if (iVar15 != 0) {
        _Str = pFVar10;
      }
      iVar6 = _wtoi((wchar_t *)_Str);
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      iVar15 = (int)local_120;
      uVar11 = (ulonglong)(int)local_120;
      pFVar10 = local_128.Data + uVar11 * 0x10;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      local_12c = 0;
      FVar14.Data = local_128.Data;
      while( true ) {
        uVar12 = (uint)pFVar13;
        if ((int)uVar11 != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
          uVar12 = local_130;
        }
        _Src.Data = local_138.Data;
        if (FVar14.Data == pFVar10) break;
        local_58 = *(wchar_t **)FVar14.Data;
        uStack_50 = *(undefined8 *)(FVar14.Data + 8);
        pFVar8 = ::FName::FName(local_b8,(int)*(undefined8 *)(FVar14.Data + 8),local_58,FNAME_Add);
        local_118 = *pFVar8;
        if (((local_138.Data <= &local_118) &&
            (&local_118 < (FName *)(local_138.Data + (longlong)(int)local_12c * 8))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FOptimusDataDomain *)(*pcVar2)();
          return pFVar9;
        }
        if (local_130 == local_12c) {
          local_130 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_138,(int *)&local_12c);
        }
        FVar14.Data = FVar14.Data + 0x10;
        *(FName *)(local_138.Data + (longlong)(int)local_130 * 8) = local_118;
        uVar11 = local_120 & 0xffffffff;
        pFVar13 = (FScriptContainerElement *)(ulonglong)(local_130 + 1);
        local_130 = local_130 + 1;
      }
      local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.ArrayNum = uVar12;
      if (uVar12 == 0) {
        local_110.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar12,0,&local_110.AllocatorInstance,uVar12,&local_110.ArrayMax);
        memcpy(local_110.AllocatorInstance.Data,_Src.Data,(longlong)(int)uVar12 << 3);
      }
      FOptimusDataDomain(__return_storage_ptr__,&local_110,iVar6);
      FVar14.Data = local_128.Data;
      if ((FName *)local_138.Data != (FName *)0x0) {
        FMemory::Free(local_138.Data);
        FVar14.Data = local_128.Data;
      }
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDisplayName @ 14e1c3b50

FString * __thiscall
FOptimusDataDomain::GetDisplayName(FOptimusDataDomain *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  size_t sVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FName *pFVar10;
  wchar_t *_Str;
  int iVar11;
  undefined1 local_res8 [8];
  FString *local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res10 = __return_storage_ptr__;
  if (this->Type == Dimensional) {
    iVar11 = (this->DimensionNames).ArrayNum;
    if (iVar11 == 0) {
      ::FString::FString(__return_storage_ptr__,L"Parameter");
      return __return_storage_ptr__;
    }
    pFVar10 = (FName *)(this->DimensionNames).AllocatorInstance.Data;
    pFVar1 = pFVar10 + iVar11;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    while( true ) {
      if ((this->DimensionNames).ArrayNum != iVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      local_res20 = *pFVar10;
      pFVar6 = (FScriptContainerElement *)::FName::ToString(&local_res20,&local_68);
      if (((local_a8.Data <= pFVar6) && (pFVar6 < local_a8.Data + (longlong)local_a0._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = (int)local_a0;
      if ((int)local_a0 == local_a0._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 1);
      pFVar8 = local_a8.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar6;
      *(undefined8 *)pFVar6 = 0;
      *(int *)(pFVar8 + 8) = *(int *)(pFVar6 + 8);
      *(int *)(pFVar8 + 0xc) = *(int *)(pFVar6 + 0xc);
      *(undefined8 *)(pFVar6 + 8) = 0;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar10 = pFVar10 + 1;
    }
    pFVar5 = ::FString::FString(&local_58,(uchar *)::s____);
    if ((pFVar5->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    bVar3 = true;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    iVar11 = (int)local_a0;
    pFVar6 = local_a8.Data + (longlong)(int)local_a0 * 0x10;
    FVar9.Data = local_a8.Data;
    while( true ) {
      if ((int)local_a0 != iVar11) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      __return_storage_ptr__ = local_res10;
      if (FVar9.Data == pFVar6) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        sVar7 = wcslen(_Str);
        ::FString::AppendChars(&local_98,_Str,(int)sVar7);
      }
      iVar4 = *(int *)(FVar9.Data + 8) + -1;
      if (*(int *)(FVar9.Data + 8) == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_98,*(wchar_t **)FVar9.Data,iVar4);
      FVar9.Data = FVar9.Data + 0x10;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (1 < this->Multiplier) {
      ::FString::PrintfImpl(&local_88,L" x %d");
      iVar11 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AppendChars(&local_98,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar11);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
    iVar11 = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayMax = iVar11;
    DestructItems<FString,int>((FString *)local_a8.Data,(int)local_a0);
    local_78.Data.AllocatorInstance.Data = local_a8.Data;
  }
  else {
    if (this->Type != Expression) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataDomain.cpp"
                         ,0xe3,L"");
      if (!bVar3) {
        ::FString::FString(__return_storage_ptr__,L"");
        return __return_storage_ptr__;
      }
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if ((this->Expression).Data.ArrayNum < 2) {
      ::FString::FString(__return_storage_ptr__,L"Undefined");
      return __return_storage_ptr__;
    }
    ::FString::TrimStartAndEnd(&this->Expression,&local_78);
    ::FString::PrintfImpl(__return_storage_ptr__,L"\'%s\'");
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUsedConstants @ 14e1e8d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FOptimusDataDomain::GetUsedConstants
          (FOptimusDataDomain *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar10;
  undefined1 auStackY_128 [32];
  FEngine local_f8 [4];
  FName local_f4;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  TFunction<TOptional<float>___cdecl(FName)> local_c8;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_98;
  ulonglong local_20;
  bool *pbVar11;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this->Type == Expression) {
    local_e8 = (this->Expression).Data.AllocatorInstance.Data;
    uVar9 = 0;
    iVar1 = (this->Expression).Data.ArrayNum;
    local_c8._0_8_ = 0;
    local_c8._40_8_ = 0;
    iStack_e0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_e0 = 0;
    }
    local_d8._12_4_ = uStack_dc;
    local_d8.Size = iStack_e0;
    local_d8.DataPtr = (wchar_t *)local_e8;
    Optimus::Expression::FEngine::Parse(local_f8,&local_98,&local_d8,&local_c8);
    uVar8 = (ulonglong)local_98.TypeIndex;
    if ((1 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Optimus::Expression::FParseError,Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_98.TypeIndex != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
      *(undefined8 *)&__return_storage_ptr__->Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
      (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      __return_storage_ptr__->HashSize = 0;
      lVar6 = local_98._padding_;
      uVar8 = uVar9;
      if (0 < (int)local_98._padding_) {
        do {
          uVar7 = (uint)uVar9;
          uVar4 = 0;
          if ((int)uVar7 < (int)lVar6) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             lVar6 = local_98._padding_, bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
            return pTVar5;
          }
          pTVar10 = &local_98;
          if ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              local_98._padding_ !=
              (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
              0x0) {
            pTVar10 = (TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                       *)local_98._padding_;
          }
          pbVar11 = (bool *)((longlong)&pTVar10->_padding_ + uVar8);
          if (pbVar11[8] == true) {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                      (__return_storage_ptr__,&local_f4,pbVar11);
            lVar6 = local_98._padding_;
          }
          uVar9 = (ulonglong)(uVar7 + 1);
          uVar8 = uVar8 + 0xc;
        } while ((int)(uVar7 + 1) < (int)lVar6);
      }
    }
    else {
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
      (__return_storage_ptr__->Hash).InlineData[0] = '\0';
      (__return_storage_ptr__->Hash).InlineData[1] = '\0';
      (__return_storage_ptr__->Hash).InlineData[2] = '\0';
      (__return_storage_ptr__->Hash).InlineData[3] = '\0';
      (__return_storage_ptr__->Hash)._padding_ = 0;
      *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
      *(undefined8 *)&__return_storage_ptr__->Elements = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
      (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    }
    if ((1 < (ulonglong)local_98.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5091492955550646451>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataDomain.cpp"
                       ,0xb3,"Type == EOptimusDataDomainType::Expression");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
    (__return_storage_ptr__->Hash).InlineData[0] = '\0';
    (__return_storage_ptr__->Hash).InlineData[1] = '\0';
    (__return_storage_ptr__->Hash).InlineData[2] = '\0';
    (__return_storage_ptr__->Hash).InlineData[3] = '\0';
    (__return_storage_ptr__->Hash)._padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  }
  return __return_storage_ptr__;
}

// IsSingleton @ 14e1f0050

bool __thiscall FOptimusDataDomain::IsSingleton(FOptimusDataDomain *this)

{
  if ((this->Type == Dimensional) && ((this->DimensionNames).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// PostSerialize @ 14e2006b0

void __thiscall FOptimusDataDomain::PostSerialize(FOptimusDataDomain *this,FArchive *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FOptimusObjectVersion::GUID);
    if (iVar1 < 7) {
      BackCompFixupLevels(this);
      return;
    }
  }
  return;
}

// ToString @ 14e227720

FString * __thiscall
FOptimusDataDomain::ToString(FOptimusDataDomain *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (this->Type == Dimensional) {
    iVar5 = (this->DimensionNames).ArrayNum;
    if (iVar5 == 0) {
      ::FString::FString(__return_storage_ptr__,L"Empty");
      return __return_storage_ptr__;
    }
    if (iVar5 == 1) {
      pFVar3 = (FName *)(this->DimensionNames).AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      pFVar1 = pFVar3 + 1;
      while( true ) {
        if ((this->DimensionNames).ArrayNum != 1) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (pFVar3 == pFVar1) break;
        local_res8 = *pFVar3;
        pFVar2 = ::FName::ToString(&local_res8,&local_28);
        iVar5 = (pFVar2->Data).ArrayNum;
        iVar4 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        ::FString::AppendChars(&local_38,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(&local_38,L"/",1);
        pFVar3 = pFVar3 + 1;
      }
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_28,this->Multiplier);
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (this->Type == Expression) {
    if ((this->Expression).Data.ArrayNum != 0) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"\'%s\'");
      return __return_storage_ptr__;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"\'%s\'");
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

