// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// GetStyleChecked @ 142949ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateWidgetStyle * __thiscall
USlateWidgetStyleAsset::GetStyleChecked(USlateWidgetStyleAsset *this,FName param_1)

{
  USlateWidgetStyleContainerBase *pUVar1;
  FSlateWidgetStyle *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_28;
  FString local_18;
  
  pUVar1 = (this->CustomStyle).field0_0x0.DebugPtr;
  local_res10 = param_1;
  if (pUVar1 == (USlateWidgetStyleContainerBase *)0x0) {
    if ((byte)LogSlateStyle._0_1_ < 2) {
      return (FSlateWidgetStyle *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>
              (&`public:_struct_FSlateWidgetStyle_const*___ptr64___cdecl_USlateWidgetStyleAsset::GetStyleChecked(FName)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar2 = (FSlateWidgetStyle *)
             (**(code **)(*(longlong *)&pUVar1->field_0x28 + 0x10))(&pUVar1->field_0x28);
    if (pFVar2 == (FSlateWidgetStyle *)0x0) {
      if ((byte)LogSlateStyle._0_1_ < 2) {
        return (FSlateWidgetStyle *)0x0;
      }
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<2>
                (&`public:_struct_FSlateWidgetStyle_const*___ptr64___cdecl_USlateWidgetStyleAsset::GetStyleChecked(FName)const___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
    else {
      pFVar3 = (FName *)(**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,local_res8);
      if (*pFVar3 == local_res10) {
        return pFVar2;
      }
      if ((byte)LogSlateStyle._0_1_ < 2) {
        return (FSlateWidgetStyle *)0x0;
      }
      pFVar3 = (FName *)(**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,local_res8);
      ::FName::ToString(pFVar3,&local_18);
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_struct_FSlateWidgetStyle_const*___ptr64___cdecl_USlateWidgetStyleAsset::GetStyleChecked(FName)const___ptr64'
                  ::__l48::LOG_Static,(FLogCategoryBase *)&LogSlateStyle);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FSlateWidgetStyle *)0x0;
}

