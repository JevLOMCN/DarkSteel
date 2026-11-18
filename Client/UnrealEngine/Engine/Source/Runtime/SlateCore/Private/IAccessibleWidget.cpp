// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// ~IAccessibleWidget @ 1425c1b40

void __thiscall IAccessibleWidget::~IAccessibleWidget(IAccessibleWidget *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAccessibleWidget__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001425c1b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AsActivatable @ 1425cb0d0

IAccessibleActivatable * __thiscall IAccessibleWidget::AsActivatable(IAccessibleWidget *this)

{
  return (IAccessibleActivatable *)0x0;
}

// AsProperty @ 1425cb0e0

IAccessibleProperty * __thiscall IAccessibleWidget::AsProperty(IAccessibleWidget *this)

{
  return (IAccessibleProperty *)0x0;
}

// AsTable @ 1425cb200

IAccessibleTable * __thiscall IAccessibleWidget::AsTable(IAccessibleWidget *this)

{
  return (IAccessibleTable *)0x0;
}

// AsTableRow @ 1425cb210

IAccessibleTableRow * __thiscall IAccessibleWidget::AsTableRow(IAccessibleWidget *this)

{
  return (IAccessibleTableRow *)0x0;
}

// AsText @ 1425cb220

IAccessibleText * __thiscall IAccessibleWidget::AsText(IAccessibleWidget *this)

{
  return (IAccessibleText *)0x0;
}

// AsWindow @ 1425cb250

IAccessibleWindow * __thiscall IAccessibleWidget::AsWindow(IAccessibleWidget *this)

{
  return (IAccessibleWindow *)0x0;
}

// ToString @ 142601da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
IAccessibleWidget::ToString(IAccessibleWidget *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_288 [32];
  void *local_268 [2];
  void *local_258 [2];
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_248.Base = local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  (**(code **)(*(longlong *)this + 0x68))(this,local_258);
  (**(code **)(*(longlong *)this + 0x70))(this,local_268);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_248,L"Label: %s. Role: %s.");
  if (local_268[0] != (void *)0x0) {
    FMemory::Free(local_268[0]);
  }
  if (local_258[0] != (void *)0x0) {
    FMemory::Free(local_258[0]);
  }
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  *local_248.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_248.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

