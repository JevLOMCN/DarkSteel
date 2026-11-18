// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 6

// FFragmentType @ 1443459a0

FFragmentType * __thiscall
UE::UniversalObjectLocator::FFragmentType::FFragmentType(FFragmentType *this,FFragmentType *param_1)

{
  UScriptStruct *pUVar1;
  ITextData *pIVar2;
  _func___cdecl_FResolveResult_void_ptr_FResolveParams_ptr *p_Var3;
  _func___cdecl_FParseStringResult_void_ptr_TStringView<wchar_t>_FParseStringParams_ptr *p_Var4;
  _func___cdecl_void_void_ptr *p_Var5;
  undefined1 local_res8 [8];
  
  p_Var3 = (param_1->InstanceBindings).Resolve;
  (this->InstanceBindings).Initialize = (param_1->InstanceBindings).Initialize;
  (this->InstanceBindings).Resolve = p_Var3;
  p_Var4 = (param_1->InstanceBindings).TryParseString;
  (this->InstanceBindings).ToString = (param_1->InstanceBindings).ToString;
  (this->InstanceBindings).TryParseString = p_Var4;
  p_Var5 = (param_1->StaticBindings).FragmentDebugInitializer;
  (this->StaticBindings).Priority = (param_1->StaticBindings).Priority;
  (this->StaticBindings).FragmentDebugInitializer = p_Var5;
  pUVar1 = (param_1->PayloadType).field0_0x0.DebugPtr;
  (this->PayloadType).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DisplayText).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->DisplayText).TextData.Reference;
  (this->DisplayText).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->DisplayText).Flags = (param_1->DisplayText).Flags;
  this->FragmentTypeID = param_1->FragmentTypeID;
  this->PrimaryEditorType = param_1->PrimaryEditorType;
  this->Flags = param_1->Flags;
  return this;
}

// ComputePriority @ 1443471d0

uint __thiscall
UE::UniversalObjectLocator::FFragmentType::ComputePriority
          (FFragmentType *this,UObject *param_1,UObject *param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001443471dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(this->StaticBindings).Priority)(param_1,param_2);
  return uVar1;
}

// InitializePayload @ 144348850

FInitializeResult * __thiscall
UE::UniversalObjectLocator::FFragmentType::InitializePayload
          (FFragmentType *this,FInitializeResult *__return_storage_ptr__,void *param_1,
          FInitializeParams *param_2)

{
  ELocatorType EVar1;
  undefined7 uVar2;
  FInitializeResult *pFVar3;
  FInitializeResult local_18;
  
  pFVar3 = (*(this->InstanceBindings).Initialize)(&local_18,param_1,param_2);
  EVar1 = pFVar3->Type;
  uVar2 = *(undefined7 *)&pFVar3->field_0x9;
  __return_storage_ptr__->RelativeToContext = pFVar3->RelativeToContext;
  __return_storage_ptr__->Type = EVar1;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar2;
  return __return_storage_ptr__;
}

// ResolvePayload @ 14434a0a0

FResolveResult * __thiscall
UE::UniversalObjectLocator::FFragmentType::ResolvePayload
          (FFragmentType *this,FResolveResult *__return_storage_ptr__,void *param_1,
          FResolveParams *param_2)

{
  (*(this->InstanceBindings).Resolve)(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ToString @ 14434b480

void __thiscall
UE::UniversalObjectLocator::FFragmentType::ToString
          (FFragmentType *this,void *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  wchar_t wVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pwVar1 = param_2->CurPos;
  pwVar8 = param_2->Base;
  iVar5 = (int)((longlong)pwVar1 - (longlong)pwVar8 >> 1);
  while ((iVar5 != 0 && (pwVar1[-1] == L'\0'))) {
    if (((int)((longlong)pwVar1 - (longlong)pwVar8 >> 1) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_2->CurPos = param_2->CurPos + -1;
    pwVar1 = param_2->CurPos;
    pwVar8 = param_2->Base;
    iVar5 = (int)((longlong)pwVar1 - (longlong)pwVar8 >> 1);
  }
  (*(this->InstanceBindings).ToString)(param_1,param_2);
  uVar9 = 0;
  pwVar1 = param_2->Base + (int)((longlong)pwVar1 - (longlong)pwVar8 >> 1);
  iVar5 = (int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1);
  pwVar8 = pwVar1;
  if (pwVar1 != pwVar1 + iVar5) {
    do {
      wVar6 = *pwVar8;
      uVar7 = 0;
      if ((wVar6 & 0xffc0U) == 0x40) {
        uVar7 = 0xb800000178000000;
      }
      pwVar8 = pwVar8 + 1;
      uVar9 = uVar9 | (uVar7 | -(ulonglong)((ushort)wVar6 < 0x40) & 0x5000004dffffffff) &
                      1L << ((byte)wVar6 & 0x3f);
    } while (pwVar8 != pwVar1 + iVar5);
    if (uVar9 != 0) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      for (pwVar8 = pwVar1; pwVar8 != pwVar1 + iVar5; pwVar8 = pwVar8 + 1) {
        uVar9 = 0;
        uVar3 = (ushort)*pwVar8 >> 6;
        if (uVar3 == 0) {
          uVar9 = 0x5000004dffffffff;
        }
        uVar7 = 0;
        if (uVar3 == 1) {
          uVar7 = 0xb800000178000000;
        }
        wVar6 = L'^';
        if (((uVar9 | uVar7) >> ((ushort)*pwVar8 & 0x3f) & 1) == 0) {
          wVar6 = L' ';
        }
        ::FString::AppendChar(&local_58,wVar6);
      }
      ::FString::FString(&local_38,iVar5,pwVar1);
      local_res18 = (FName)((this->PayloadType).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res18,&local_48);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FAsciiSet::HasAny(StringRepresentation, InvalidChars)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragmentType.cpp"
                         ,0x3b,L"F%s::ToString resulted in an invalid character usage:\n\t%s\n\t%s")
      ;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// TryParseString @ 14434c220

FParseStringResult * __thiscall
UE::UniversalObjectLocator::FFragmentType::TryParseString
          (FFragmentType *this,FParseStringResult *__return_storage_ptr__,void *param_1,
          TStringView<wchar_t> *param_2,FParseStringParams *param_3)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr._0_4_ = *(undefined4 *)&param_2->DataPtr;
  local_18.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  (*(this->InstanceBindings).TryParseString)(__return_storage_ptr__,param_1,&local_18,param_3);
  return __return_storage_ptr__;
}

