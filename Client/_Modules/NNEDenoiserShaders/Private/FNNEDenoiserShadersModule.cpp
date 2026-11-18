// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiserShaders
// Functions: 2

// StartupModule @ 14ead3050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNNEDenoiserShadersModule::StartupModule(FNNEDenoiserShadersModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  undefined8 *puVar4;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IPluginManager::Get();
  uStack_70 = 0xb;
  local_78 = L"NNEDenoiser";
  local_48 = 0x507b7e48;
  uStack_44 = 1;
  uStack_40 = 0xb;
  uStack_3c = uStack_6c;
  (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,&local_88,&local_48);
  if (local_88 == (longlong *)0x0) {
    if (2 < (byte)LogNNEDenoiserShaders._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_FNNEDenoiserShadersModule::StartupModule(void)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiserShaders);
    }
  }
  else {
    if ((local_88 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_88 + 0x20))();
    local_10 = 7;
    local_28.DataPtr = (wchar_t *)*puVar4;
    local_28.Size = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      local_28.Size = 0;
    }
    local_18 = L"Shaders";
    FPaths::CombineInternal(&local_58,&local_28,2);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    ::FString::FString(&local_68,L"/NNEDenoiserShaders");
    AddShaderSourceDirectoryMapping(&local_68,&local_58);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  return;
}

// ShutdownModule @ 14ead31d0

void __thiscall FNNEDenoiserShadersModule::ShutdownModule(FNNEDenoiserShadersModule *this)

{
  return;
}

