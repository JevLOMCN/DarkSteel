// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 5

// StaticStruct @ 14d764670

UScriptStruct * __cdecl FOpenColorIODisplayView::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenColorIO();
    Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIODisplayView,(UObject *)pUVar1,
                         L"OpenColorIODisplayView");
  }
  return Z_Registration_Info_UScriptStruct_FOpenColorIODisplayView.OuterSingleton;
}

// FOpenColorIODisplayView @ 14d768e40

FOpenColorIODisplayView * __thiscall
FOpenColorIODisplayView::FOpenColorIODisplayView
          (FOpenColorIODisplayView *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2
          ,FString *param_3)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FOpenColorIODisplayView *pFVar5;
  FString *pFVar6;
  FString local_28;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  (this->Display).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Display).Data.ArrayNum = 0;
  (this->Display).Data.ArrayMax = 0;
  pFVar5 = (FOpenColorIODisplayView *)::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (this != pFVar5) {
    pFVar4 = (this->Display).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Display).Data.AllocatorInstance.Data = (pFVar5->Display).Data.AllocatorInstance.Data;
    (pFVar5->Display).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Display).Data.ArrayNum = (pFVar5->Display).Data.ArrayNum;
    (this->Display).Data.ArrayMax = (pFVar5->Display).Data.ArrayMax;
    (pFVar5->Display).Data.ArrayNum = 0;
    (pFVar5->Display).Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  uVar2 = *(undefined8 *)&param_2->Size;
  pFVar1 = &this->View;
  pwVar3 = param_2->DataPtr;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->View).Data.ArrayNum = 0;
  (this->View).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar6) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->View).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->View).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&this->Description,param_3);
  return this;
}

// IsValid @ 14d773a80

bool __thiscall FOpenColorIODisplayView::IsValid(FOpenColorIODisplayView *this)

{
  if ((1 < (this->Display).Data.ArrayNum) && (1 < (this->View).Data.ArrayNum)) {
    return true;
  }
  return false;
}

// Reset @ 14d776260

void __thiscall FOpenColorIODisplayView::Reset(FOpenColorIODisplayView *this)

{
  ::FString::Reset(&this->Display,0);
  ::FString::Reset(&this->View,0);
  ::FString::Reset(&this->Description,0);
  return;
}

// ToString @ 14d778c60

FString * __thiscall
FOpenColorIODisplayView::ToString(FOpenColorIODisplayView *this,FString *__return_storage_ptr__)

{
  if ((1 < (this->Display).Data.ArrayNum) && (1 < (this->View).Data.ArrayNum)) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s - %s");
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

