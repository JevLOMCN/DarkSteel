// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 6

// CloneToEmptyStorage @ 14ddb3260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14ddb32a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// Destroy @ 14ddb33f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ddb3420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14ddb3ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ddb4000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

