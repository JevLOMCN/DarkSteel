// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 7

// StaticStruct @ 144343cf0

UScriptStruct * __cdecl FSubObjectLocator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubObjectLocator,(UObject *)pUVar1,
                         L"SubObjectLocator");
  }
  return Z_Registration_Info_UScriptStruct_FSubObjectLocator.OuterSingleton;
}

// ComputePriority @ 1443471f0

uint __cdecl FSubObjectLocator::ComputePriority(UObject *param_1,UObject *param_2)

{
  bool bVar1;
  
  if (param_2 != (UObject *)0x0) {
    bVar1 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,param_2);
    return -(uint)bVar1 & 1000;
  }
  return 0;
}

// Initialize @ 144348740

FInitializeResult * __thiscall
FSubObjectLocator::Initialize
          (FSubObjectLocator *this,FInitializeResult *__return_storage_ptr__,
          FInitializeParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInitializeResult *pFVar3;
  FInitializeParams *local_res8;
  UObject *local_18;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  ::FString::Reset(&this->PathWithinContext,0);
  if (param_1->Context == (UObject *)0x0) {
LAB_144348774:
    local_res8 = param_1;
    bVar2 = `FSubObjectLocator::Initialize'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      local_18 = (UObject *)0x0;
      uStack_10 = 2;
      goto LAB_1443487df;
    }
  }
  else {
    bVar2 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1->Object,param_1->Context);
    if (!bVar2) goto LAB_144348774;
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)param_1->Object,param_1->Context,&this->PathWithinContext);
  local_18 = param_1->Context;
  if (local_18 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRelativeToContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorInitializeResult.h"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInitializeResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  uStack_10 = 1;
LAB_1443487df:
  __return_storage_ptr__->RelativeToContext = local_18;
  *(ulonglong *)&__return_storage_ptr__->Type = CONCAT71(uStack_f,uStack_10);
  return __return_storage_ptr__;
}

// Resolve @ 144349b40

FResolveResult * __thiscall
FSubObjectLocator::Resolve
          (FSubObjectLocator *this,FResolveResult *__return_storage_ptr__,FResolveParams *param_1)

{
  longlong *plVar1;
  UObject *pUVar2;
  char cVar3;
  size_t sVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  wchar_t *pwVar7;
  int iVar8;
  UObject *local_res18 [2];
  TStringView<wchar_t> local_28;
  
  pUVar2 = param_1->Context;
  iVar8 = 0;
  if (pUVar2 == (UObject *)0x0) {
    plVar1 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  local_res18[0] = (UObject *)0x0;
  if ((this->PathWithinContext).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->PathWithinContext).Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)(*(longlong *)pUVar2 + 0x88))(pUVar2,pwVar7,local_res18);
  pUVar6 = local_res18[0];
  if (cVar3 != '\0') goto LAB_144349bea;
  if ((this->PathWithinContext).Data.ArrayNum == 0) {
    local_28.DataPtr = L"";
LAB_144349bb2:
    sVar4 = wcslen(local_28.DataPtr);
    iVar8 = (int)sVar4;
  }
  else {
    local_28.DataPtr = (wchar_t *)(this->PathWithinContext).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_144349bb2;
  }
  local_28.Size = iVar8;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  pUVar6 = StaticFindObject(pUVar5,pUVar2,&local_28,None);
LAB_144349bea:
  local_28._8_8_ = CONCAT71(local_28._9_7_,local_res18[0]._0_1_) & 0xfffffffffffffffc;
  (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar6;
  (__return_storage_ptr__->Value)._padding_ = local_28._8_8_;
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ToString @ 14434b720

void __thiscall
FSubObjectLocator::ToString(FSubObjectLocator *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->PathWithinContext).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,(wchar_t *)(this->PathWithinContext).Data.AllocatorInstance.Data,iVar2);
  return;
}

// TryParseString @ 14434c260

FParseStringResult * __thiscall
FSubObjectLocator::TryParseString
          (FSubObjectLocator *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  FText local_28;
  undefined8 local_18;
  
  ::FString::Reset(&this->PathWithinContext,param_1->Size);
  ::FString::AppendChars(&this->PathWithinContext,param_1->DataPtr,param_1->Size);
  local_28.TextData.Reference = (ITextData *)0x0;
  local_28.Flags = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText(&local_28);
  iVar1 = 0;
  local_18 = CONCAT35((int3)((ulonglong)local_18 >> 0x28),0x100000000);
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_28.TextData.Reference;
  uVar2 = true;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
    iVar1 = (int)local_18;
    uVar2 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Flags;
  __return_storage_ptr__->NumCharsParsed = iVar1;
  __return_storage_ptr__->bSuccess = (bool)uVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 1504bced0

bool __thiscall `FSubObjectLocator::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6251507547107229734>);
  if (bVar3) {
    bVar5 = *(longlong *)(*(longlong *)this + 8) != 0;
    if (bVar5) {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar2 = true;
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6251507547107229734>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504bcfa3;
    }
  }
  bVar3 = false;
LAB_1504bcfa3:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

