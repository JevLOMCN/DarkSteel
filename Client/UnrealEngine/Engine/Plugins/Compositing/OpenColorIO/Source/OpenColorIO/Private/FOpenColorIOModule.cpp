// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 5

// FOpenColorIOModule @ 14d768f40

FOpenColorIOModule * __thiscall FOpenColorIOModule::FOpenColorIOModule(FOpenColorIOModule *this)

{
  FOpenColorIODisplayManager *pFVar1;
  
  this->_padding_ = (longlong)&___7FOpenColorIOModule__6B_;
  pFVar1 = ::operator_new(0x20);
  if (pFVar1 != (FOpenColorIODisplayManager *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    (pFVar1->DisplayExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DisplayExtensions).ArrayNum = 0;
    (pFVar1->DisplayExtensions).ArrayMax = 0;
    (this->DisplayManager).Ptr = pFVar1;
    return this;
  }
  (this->DisplayManager).Ptr = (FOpenColorIODisplayManager *)0x0;
  return this;
}

// ~FOpenColorIOModule @ 14d769b30

void __thiscall FOpenColorIOModule::~FOpenColorIOModule(FOpenColorIOModule *this)

{
  int *piVar1;
  int iVar2;
  FOpenColorIODisplayManager *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pFVar3 = (this->DisplayManager).Ptr;
  if (pFVar3 != (FOpenColorIODisplayManager *)0x0) {
    DestructItems<TSharedPtr<FOpenColorIODisplayExtension,1>,int>
              ((TSharedPtr<FOpenColorIODisplayExtension,1> *)
               (pFVar3->DisplayExtensions).AllocatorInstance.Data,
               (pFVar3->DisplayExtensions).ArrayNum);
    pFVar4 = (pFVar3->DisplayExtensions).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    plVar5 = (longlong *)pFVar3->_padding_;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    ::operator_delete(pFVar3,0x20);
    this->_padding_ = (longlong)IModuleInterface::vftable;
    return;
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// GetDisplayManager @ 14d770e00

FOpenColorIODisplayManager * __thiscall
FOpenColorIOModule::GetDisplayManager(FOpenColorIOModule *this)

{
  return (this->DisplayManager).Ptr;
}

// ShutdownModule @ 14d777920

void __thiscall FOpenColorIOModule::ShutdownModule(FOpenColorIOModule *this)

{
  return;
}

// StartupModule @ 14d777940

void __thiscall FOpenColorIOModule::StartupModule(FOpenColorIOModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IPluginManager::Get();
  local_58 = 0x507b6840;
  uStack_54 = 1;
  uStack_50 = 0xb;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_38,&local_58);
  if (*plVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))();
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)*puVar5;
  local_28.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_28,2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  ::FString::FString(&local_78,L"/Plugin/OpenColorIO");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

