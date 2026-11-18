// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&> @ 142d1a330

void __cdecl
FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
          (TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_1->CurPos;
  if ((((int)((longlong)pwVar1 - (longlong)param_1->Base >> 1) != 0) && (pwVar1[-1] != L'/')) &&
     (pwVar1[-1] != L'\\')) {
    if (param_1->End < pwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'/';
    param_1->CurPos = param_1->CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  pwVar1 = param_1->CurPos;
  if ((((int)((longlong)pwVar1 - (longlong)param_1->Base >> 1) != 0) && (pwVar1[-1] != L'/')) &&
     (pwVar1[-1] != L'\\')) {
    if (param_1->End < pwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'/';
    param_1->CurPos = param_1->CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  return;
}

