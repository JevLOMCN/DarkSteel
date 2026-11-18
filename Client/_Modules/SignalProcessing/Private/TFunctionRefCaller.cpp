// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// Call @ 1444b7e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`BufferDiagnosticsPrivate::HandleDiagnosticsCmd'::__l2::<lambda_1>,void,Audio::FCheckedBufferState_&>
::Call(void *param_1,FCheckedBufferState *param_2)

{
  FOutputDevice *this;
  bool bVar1;
  int iVar2;
  FString *this_00;
  size_t sVar3;
  wchar_t *_Str;
  FString FStack_28;
  
  **(int **)param_1 = **(int **)param_1 + 1;
  this_00 = ::FString::FString(&FStack_28,param_2->Name);
  if ((int)(*(longlong **)((longlong)param_1 + 8))[1] == 0) {
    _Str = L"";
LAB_1444a6ccc:
    sVar3 = wcslen(_Str);
    iVar2 = ::FString::Find(this_00,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
    if (iVar2 == -1) goto LAB_1444a6cfd;
  }
  else {
    _Str = (wchar_t *)**(longlong **)((longlong)param_1 + 8);
    if (_Str != (wchar_t *)0x0) goto LAB_1444a6ccc;
LAB_1444a6cfd:
    if (1 < *(int *)(*(longlong *)((longlong)param_1 + 8) + 8)) {
      bVar1 = false;
      goto LAB_1444a6d0f;
    }
  }
  bVar1 = true;
LAB_1444a6d0f:
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    param_2->Behavior = **(EBufferCheckBehavior **)((longlong)param_1 + 0x10);
    param_2->CheckFlags = **(ECheckBufferFlags **)((longlong)param_1 + 0x18);
    if (**(char **)((longlong)param_1 + 0x20) != '\0') {
      param_2->FailFlags = None;
    }
    **(int **)((longlong)param_1 + 0x28) = **(int **)((longlong)param_1 + 0x28) + 1;
    if (**(char **)((longlong)param_1 + 0x30) != '\0') {
      this = *(FOutputDevice **)((longlong)param_1 + 0x38);
      BufferDiagnosticsPrivate::LexToString(**(EBufferCheckBehavior **)((longlong)param_1 + 0x10));
      BufferDiagnosticsPrivate::ToDelimString(&FStack_28,param_2->CheckFlags);
      FOutputDevice::LogfImpl(this,L"Check=\'%s\', File=\'%s:%d\', Flags=\'%s\', Behavior=\'%s\'");
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Call @ 1444b7e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,void,unsigned_int>::Call
          (void *param_1,uint *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x28) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined1 *)(*(longlong *)param_1 + 0x291) = 1;
  return;
}

// Call @ 1444b7e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,void,unsigned_int>::
Call(void *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (*(ushort *)((longlong)param_1 + 8) != 0) {
    uVar3 = (uint)*(ushort *)((longlong)param_1 + 8);
  }
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  *(short *)(*(longlong *)param_1 + 0x32) = 1 << ((byte)lVar2 & 0x1f);
  *(undefined1 *)(*(longlong *)param_1 + 0x291) = 1;
  return;
}

// Call @ 1444b7ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,void,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  ::Audio::FEventQuantizer::SetQuantizationSettingsInternal
            (*(FEventQuantizer **)param_1,(FEventQuantizationSettings *)((longlong)param_1 + 8));
  return;
}

