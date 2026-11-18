// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// FWorkerPath @ 142d1c140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FWorkerPath * __thiscall
FTargetReceiptBuildWorker::FWorkerPath::FWorkerPath
          (FWorkerPath *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4)

{
  undefined1 auStack_188 [32];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [3];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  (this->LocalPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPath).Data.ArrayNum = 0;
  (this->LocalPath).Data.ArrayMax = 0;
  (this->RemotePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemotePath).Data.ArrayNum = 0;
  (this->RemotePath).Data.ArrayMax = 0;
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
            (&local_168,param_1,param_2);
  ::FString::AssignRange
            (&this->LocalPath,local_168.Base,
             (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
  if (param_4->Size == 0) {
    param_4 = param_2;
  }
  local_168.CurPos = local_168.Base;
  if (param_3->Size == 0) {
    param_3 = param_1;
  }
  FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
            (&local_168,param_3,param_4);
  ::FString::AssignRange
            (&this->RemotePath,local_168.Base,
             (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return this;
}

