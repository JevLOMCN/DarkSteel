// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureCore
// Functions: 7

// ~IAudioCaptureStream @ 14d0bc0f0

void __thiscall Audio::IAudioCaptureStream::~IAudioCaptureStream(IAudioCaptureStream *this)

{
  *this = (IAudioCaptureStream)&___7IAudioCaptureStream_Audio__6B_;
  return;
}

// operator() @ 14d0bc110

void __thiscall
`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,int param_2,int param_3,int param_4,double param_5,bool param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *local_res8;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res8 = param_1;
  local_res18[0] = param_3;
  local_res20[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res8,local_res20,local_res18,&param_4,&param_5,&param_6);
  return;
}

// GetIfHardwareFeatureIsSupported @ 14d0bc810

bool __thiscall
Audio::IAudioCaptureStream::GetIfHardwareFeatureIsSupported
          (IAudioCaptureStream *this,EHardwareInputFeature param_1)

{
  return false;
}

// OpenCaptureStream @ 14d0bcb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d0bcc3e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x00014d0bcc42 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
Audio::IAudioCaptureStream::OpenCaptureStream
          (IAudioCaptureStream *this,FAudioCaptureDeviceParams *param_1,
          TFunction<void___cdecl(float_const_*,int,int,int,double,bool)> *param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_80;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = *(code **)param_2;
  local_80 = 0;
  if (local_a8[0] != (code *)0x0) {
    puVar3 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,&local_98);
  }
  local_78 = (code *)0x0;
  local_50 = FMemory::Malloc(0x40,0x10);
  *local_50 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__OpenCaptureStream_IAudioCaptureStream_Audio__UEAA_NAEBUFAudioCaptureDeviceParams_4_V__TFunction___A6AXPEBMHHHN_N_Z__I_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar4 = local_50 + 2;
  *plVar4 = (longlong)local_a8[0];
  local_50[7] = local_80;
  local_80 = 0;
  *(undefined4 *)(local_50 + 4) = local_98;
  *(undefined4 *)((longlong)local_50 + 0x24) = uStack_94;
  *(undefined4 *)(local_50 + 5) = uStack_90;
  *(undefined4 *)((longlong)local_50 + 0x2c) = uStack_8c;
  local_50[6] = local_88;
  if (*plVar4 != 0) {
    local_a8[0] = (code *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,void,void_const_*,int,int,int,double,bool>
               ::Call;
  }
  if (local_a8[0] != (code *)0x0) {
    (**(code **)(CONCAT44(uStack_94,local_98) + 0x10))();
  }
  local_80 = 0;
  pcVar1 = *(code **)((longlong)*this + 0x28);
  local_a8[0] = local_78;
  if (local_78 != (code *)0x0) {
    plVar4 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar4 = local_50;
    }
    (**(code **)*plVar4)(plVar4,&local_98);
  }
  uVar2 = (*pcVar1)(this,param_1,local_a8,param_3);
  if (local_78 != (code *)0x0) {
    plVar4 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar4 = local_50;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return (bool)uVar2;
}

// RegisterUser @ 14d0bcee0

bool __thiscall Audio::IAudioCaptureStream::RegisterUser(IAudioCaptureStream *this,wchar_t *param_1)

{
  return true;
}

// SetHardwareFeatureEnabled @ 14d0bcf10

void __thiscall
Audio::IAudioCaptureStream::SetHardwareFeatureEnabled
          (IAudioCaptureStream *this,EHardwareInputFeature param_1,bool param_2)

{
  return;
}

// UnregisterUser @ 14d0bd120

bool __thiscall
Audio::IAudioCaptureStream::UnregisterUser(IAudioCaptureStream *this,wchar_t *param_1)

{
  return true;
}

