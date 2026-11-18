// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 9

// CloneToEmptyStorage @ 14e2c9290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e2c92d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e2c9310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__EL___SaveAndLaunch_FRenderDocFrameCapturer__SAXPEAVFRenderDocPluginModule__IAEBVFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)((longlong)this + 0x20);
  return puVar1 + 1;
}

// Destroy @ 14e2c9500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e2c9530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e2c9560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14e2ca290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e2ca2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e2ca2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

