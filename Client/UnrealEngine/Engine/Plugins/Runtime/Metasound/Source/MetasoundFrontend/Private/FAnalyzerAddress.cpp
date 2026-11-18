// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// FAnalyzerAddress @ 14ad96d80

FAnalyzerAddress * __thiscall
Metasound::Frontend::FAnalyzerAddress::FAnalyzerAddress(FAnalyzerAddress *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FAnalyzerAddress *pFVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FGuid local_38;
  FGuid local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  this->InstanceID = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  (this->NodeID).A = 0;
  (this->NodeID).B = 0;
  (this->NodeID).C = 0;
  (this->NodeID).D = 0;
  (this->OutputName).ComparisonIndex = 0;
  (this->OutputName).Number = 0;
  (this->DataType).ComparisonIndex = 0;
  (this->DataType).Number = 0;
  (this->AnalyzerName).ComparisonIndex = 0;
  (this->AnalyzerName).Number = 0;
  (this->AnalyzerInstanceID).A = 0;
  (this->AnalyzerInstanceID).B = 0;
  (this->AnalyzerInstanceID).C = 0;
  (this->AnalyzerInstanceID).D = 0;
  (this->AnalyzerMemberName).ComparisonIndex = 0;
  (this->AnalyzerMemberName).Number = 0;
  this->UseDataTransmissionCenter = true;
  iVar3 = ::FString::ParseIntoArray(param_1,&local_48,L"/",true);
  if (iVar3 != 7) {
    local_res8[0] = 0;
    bVar2 = `Metasound::Frontend::FAnalyzerAddress::FAnalyzerAddress'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar2) goto LAB_14ad970ae;
  }
  if (local_48.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  pwVar7 = L"";
  if (*(int *)(local_48.AllocatorInstance.Data + 8) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)local_48.AllocatorInstance.Data;
  }
  uVar5 = _wtoi64(pwVar6);
  this->InstanceID = uVar5;
  if (local_48.ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  bVar2 = FGuid::Parse((FString *)(local_48.AllocatorInstance.Data + 0x10),&local_38);
  if (!bVar2) {
    local_38.C = 0;
    local_38.D = 0;
    local_38.A = 0;
    local_38.B = 0;
  }
  (this->NodeID).A = local_38.A;
  (this->NodeID).B = local_38.B;
  (this->NodeID).C = local_38.C;
  (this->NodeID).D = local_38.D;
  if (local_48.ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(int *)(local_48.AllocatorInstance.Data + 0x28) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)(local_48.AllocatorInstance.Data + 0x20);
  }
  ::FName::FName(&local_res18,pwVar6);
  this->OutputName = local_res18;
  if (local_48.ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(int *)(local_48.AllocatorInstance.Data + 0x38) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)(local_48.AllocatorInstance.Data + 0x30);
  }
  ::FName::FName(&local_res20,pwVar6);
  this->DataType = local_res20;
  if (local_48.ArrayNum < 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(int *)(local_48.AllocatorInstance.Data + 0x48) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)(local_48.AllocatorInstance.Data + 0x40);
  }
  ::FName::FName(&local_58,pwVar6);
  this->AnalyzerName = local_58;
  if (local_48.ArrayNum < 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  bVar2 = FGuid::Parse((FString *)(local_48.AllocatorInstance.Data + 0x50),&local_28);
  if (!bVar2) {
    local_28.C = 0;
    local_28.D = 0;
    local_28.A = 0;
    local_28.B = 0;
  }
  (this->AnalyzerInstanceID).A = local_28.A;
  (this->AnalyzerInstanceID).B = local_28.B;
  (this->AnalyzerInstanceID).C = local_28.C;
  (this->AnalyzerInstanceID).D = local_28.D;
  if (local_48.ArrayNum < 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(int *)(local_48.AllocatorInstance.Data + 0x68) != 0) {
    pwVar7 = *(wchar_t **)(local_48.AllocatorInstance.Data + 0x60);
  }
  ::FName::FName(&local_50,pwVar7);
  this->AnalyzerMemberName = local_50;
LAB_14ad970ae:
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return this;
}

// ~FAnalyzerAddress @ 14ad9db10

void __thiscall Metasound::Frontend::FAnalyzerAddress::~FAnalyzerAddress(FAnalyzerAddress *this)

{
  return;
}

// Clone @ 14ada7ad0

TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
__thiscall Metasound::Frontend::FAnalyzerAddress::Clone(FAnalyzerAddress *this)

{
  undefined8 uVar1;
  FTransmissionAddress FVar2;
  FTransmissionAddress *in_RDX;
  
  FVar2 = (FTransmissionAddress)::operator_new(0x58);
  if (FVar2 != (FTransmissionAddress)0x0) {
    *in_RDX = FVar2;
    *(undefined ***)FVar2 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    *(ulong64 *)((longlong)FVar2 + 8) = this->InstanceID;
    uVar1 = *(undefined8 *)&(this->NodeID).C;
    *(undefined8 *)((longlong)FVar2 + 0x10) = *(undefined8 *)&this->NodeID;
    *(undefined8 *)((longlong)FVar2 + 0x18) = uVar1;
    *(FName *)((longlong)FVar2 + 0x20) = this->OutputName;
    *(FName *)((longlong)FVar2 + 0x28) = this->DataType;
    *(FName *)((longlong)FVar2 + 0x30) = this->AnalyzerName;
    uVar1 = *(undefined8 *)&(this->AnalyzerInstanceID).C;
    *(undefined8 *)((longlong)FVar2 + 0x38) = *(undefined8 *)&this->AnalyzerInstanceID;
    *(undefined8 *)((longlong)FVar2 + 0x40) = uVar1;
    *(FName *)((longlong)FVar2 + 0x48) = this->AnalyzerMemberName;
    *(bool *)((longlong)FVar2 + 0x50) = this->UseDataTransmissionCenter;
    return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
            )in_RDX;
  }
  *in_RDX = (FTransmissionAddress)0x0;
  return (TUniquePtr<Metasound::FTransmissionAddress,TDefaultDelete<Metasound::FTransmissionAddress>_>
          )in_RDX;
}

// GetAddressType @ 14adbc040

FName __thiscall Metasound::Frontend::FAnalyzerAddress::GetAddressType(FAnalyzerAddress *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Analyzer");
  return in_RDX;
}

// GetDataType @ 14adbd910

FName __thiscall Metasound::Frontend::FAnalyzerAddress::GetDataType(FAnalyzerAddress *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DataType;
  return in_RDX;
}

// GetHash @ 14adbefe0

uint __thiscall Metasound::Frontend::FAnalyzerAddress::GetHash(FAnalyzerAddress *this)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = this->AnalyzerMemberName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar4 = (this->AnalyzerInstanceID).A;
  FVar2 = this->AnalyzerName;
  uVar4 = uVar4 * 0x40 + uVar3 + FVar1.Number + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar1 = this->DataType;
  uVar4 = uVar4 * 0x40 + FVar2.Number + (uVar4 >> 2) + uVar3 + 0x9e3779b9 ^ uVar4;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = this->OutputName;
  uVar4 = uVar4 * 0x40 + FVar1.Number + (uVar4 >> 2) + uVar3 + 0x9e3779b9 ^ uVar4;
  uVar4 = (int)(this->InstanceID >> 0x20) * 0x17 + uVar4 * 0x40 + (int)this->InstanceID +
          (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = (this->NodeID).A + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  return uVar3 + 0x9e3779b9 + FVar2.Number + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
}

// IsEqual @ 14adc6c40

bool __thiscall
Metasound::Frontend::FAnalyzerAddress::IsEqual(FAnalyzerAddress *this,FTransmissionAddress *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 8))(this,local_res8);
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res10);
  if (((((*plVar2 == *plVar1) &&
        (((*(uint *)&param_1[8].field_0x4 == (this->AnalyzerInstanceID).D &&
          *(uint *)(param_1 + 8) == (this->AnalyzerInstanceID).C) &&
         *(uint *)&param_1[7].field_0x4 == (this->AnalyzerInstanceID).B) &&
         *(uint *)(param_1 + 7) == (this->AnalyzerInstanceID).A)) &&
       (*(FName *)(param_1 + 9) == this->AnalyzerMemberName)) &&
      ((*(FName *)(param_1 + 6) == this->AnalyzerName && (*(FName *)(param_1 + 5) == this->DataType)
       ))) && ((param_1[1] == (FTransmissionAddress)this->InstanceID &&
               ((((*(uint *)&param_1[3].field_0x4 == (this->NodeID).D &&
                  *(uint *)(param_1 + 3) == (this->NodeID).C) &&
                 *(uint *)&param_1[2].field_0x4 == (this->NodeID).B) &&
                 (this->NodeID).A == *(uint *)(param_1 + 2) &&
                (*(FName *)(param_1 + 4) == this->OutputName)))))) {
    return true;
  }
  return false;
}

// ToString @ 14add1790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::Frontend::FAnalyzerAddress::ToString
          (FAnalyzerAddress *this,FString *__return_storage_ptr__)

{
  ulonglong *puVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_188 [32];
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  int local_138;
  int local_134;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_188;
  ::FString::PrintfImpl(&local_110,L"%lld");
  pwVar6 = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_110.Data.ArrayNum != 0) {
    FVar7.Data = local_110.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_b8,(wchar_t *)FVar7.Data);
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  FGuid::AppendString(&this->NodeID,&local_120,Digits);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar7.Data = local_120.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_a8,(wchar_t *)FVar7.Data);
  pFVar4 = ::FName::ToString(&this->OutputName,&local_d0);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_98,pwVar5);
  pFVar4 = ::FName::ToString(&this->DataType,&local_e0);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_88,pwVar5);
  pFVar4 = ::FName::ToString(&this->AnalyzerName,&local_f0);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_78,pwVar5);
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.ArrayNum = 0;
  local_130.Data.ArrayMax = 0;
  FGuid::AppendString(&this->AnalyzerInstanceID,&local_130,Digits);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar7.Data = local_130.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_68,(wchar_t *)FVar7.Data);
  pFVar4 = ::FName::ToString(&this->AnalyzerMemberName,&local_100);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_58,pwVar6);
  lVar9 = 7;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,0,&local_140,7,&local_134);
  ConstructItems<FString,FString,int>(local_140.Data,&local_b8,7);
  iVar3 = local_138;
  bVar2 = true;
  pFVar11 = local_140.Data + (longlong)local_138 * 0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FVar7.Data = local_140.Data;
  while( true ) {
    if (local_138 != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (FVar7.Data == pFVar11) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L"/",1);
    }
    iVar10 = *(int *)(FVar7.Data + 8) + -1;
    if (*(int *)(FVar7.Data + 8) == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar7.Data,iVar10);
    FVar7.Data = FVar7.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_140.Data,local_138);
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  puVar8 = local_48;
  do {
    puVar1 = puVar8 + -2;
    puVar8 = puVar8 + -2;
    lVar9 = lVar9 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar9 != 0);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 15055cf50

bool __thiscall
`Metasound::Frontend::FAnalyzerAddress::FAnalyzerAddress'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4552872020471185425>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4552872020471185425>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

