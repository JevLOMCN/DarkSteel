// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 3

// StartupModule @ 146bc4fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRadAudioDecoderModule::StartupModule(FRadAudioDecoderModule *this)

{
  IAudioInfoFactory *pIVar1;
  IAudioInfoFactoryRegistry *pIVar2;
  undefined ***pppuVar3;
  IAudioInfoFactory *pIVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pIVar4 = (IAudioInfoFactory *)0x0;
  local_58 = 0;
  pIVar1 = ::operator_new(0x50);
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFRadAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `FRadAudioDecoderModule::StartupModule'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<FRadAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    *pIVar1 = (IAudioInfoFactory)&___7FSimpleAudioInfoFactory__6B_;
    pIVar1[2] = (IAudioInfoFactory)
                UE::Core::Private::Function::
                TFunctionRefCaller<FRadAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    pIVar1[7] = (IAudioInfoFactory)0x0;
    (*(code *)
      ___7__TFunction_OwnedObject_P6APEAVFRadAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_)
              (&local_38);
    *(FName *)(pIVar1 + 8) = Audio::NAME_RADA;
    *(undefined2 *)(pIVar1 + 9) = 0x101;
    pIVar2 = IAudioInfoFactoryRegistry::Get();
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,pIVar1,pIVar1[8]);
    pIVar4 = pIVar1;
    if (local_48 != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  pIVar1 = (this->Factory).Ptr;
  (this->Factory).Ptr = pIVar4;
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return;
}

// ShutdownModule @ 146bc50d0

void __thiscall FRadAudioDecoderModule::ShutdownModule(FRadAudioDecoderModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 146bc51c0

FRadAudioInfo * __cdecl
`FRadAudioDecoderModule::StartupModule'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  FRadAudioInfo *this;
  
  this = ::operator_new(0x118);
  if (this != (FRadAudioInfo *)0x0) {
    IStreamedCompressedInfo::IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
    this->_padding_ = (longlong)&___7FRadAudioInfo__6B_;
    (this->OutputReservoir).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->OutputReservoir).ArrayNum = 0;
    (this->OutputReservoir).ArrayMax = 0;
    this->Decoder = (RadAudioDecoder *)0x0;
    (this->RawMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RawMemory).ArrayNum = 0;
    (this->RawMemory).ArrayMax = 0;
    this->bErrorStateLatch = false;
    return this;
  }
  return (FRadAudioInfo *)0x0;
}

