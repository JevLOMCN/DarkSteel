// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// StartupModule @ 14f09f840

void __thiscall FSynthesisModule::StartupModule(FSynthesisModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FName local_res20;
  
  FLLMScope::FLLMScope(local_res10,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AudioSynthesis,true);
  FSynthSlateStyleSet::Initialize();
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(&local_res20,L"SignalProcessing");
  FModuleManager::LoadModuleChecked(this_00,*pFVar1);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 14f09f8c0

void __thiscall FSynthesisModule::ShutdownModule(FSynthesisModule *this)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FSharedReferencer<1> local_10 [2];
  
  FLLMScope::FLLMScope(local_res10,AudioSynthesis,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioSynthesis,true);
  if (FSynthSlateStyleSet::StyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::UnRegisterSlateStyle
            ((ISlateStyle *)FSynthSlateStyleSet::StyleInstance.Object);
  if ((FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0) ||
     ((FSynthSlateStyleSet::StyleInstance.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount != (atomic<int>)0x1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5506168358602538976>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SynthSlateStyle.cpp"
                       ,0x20,"StyleInstance.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSynthSlateStyleSet::StyleInstance.Object = (FSlateStyleSet *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FSynthSlateStyleSet::StyleInstance.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

