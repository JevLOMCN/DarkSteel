// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticStruct @ 14e11e0f0

UScriptStruct * __cdecl FOptimusAction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusAction.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusAction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAction,(UObject *)pUVar1,L"OptimusAction"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FOptimusAction.OuterSingleton;
}

// Do @ 14e11e130

bool __thiscall FOptimusAction::Do(FOptimusAction *this,IOptimusPathResolver *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusAction.h"
             ,0x2a,L"Pure virtual not implemented (%s)");
  return false;
}

// Undo @ 14e11e160

bool __thiscall FOptimusAction::Undo(FOptimusAction *this,IOptimusPathResolver *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusAction.h"
             ,0x2d,L"Pure virtual not implemented (%s)");
  return false;
}

// SetTitlef<> @ 14e145cf0

void __thiscall
FOptimusAction::SetTitlef<>(FOptimusAction *this,TCheckedFormatStringPrivate<wchar_t> param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,param_1.FormatString);
  pFVar2 = &this->Title;
  if (pFVar2 != &local_18) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->Title).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->Title).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTitlef<wchar_t_const_*> @ 14e145d60

void __thiscall
FOptimusAction::SetTitlef<wchar_t_const_*>
          (FOptimusAction *this,TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*> param_1,
          wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,param_1.FormatString);
  pFVar2 = &this->Title;
  if (pFVar2 != &local_18) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->Title).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->Title).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FOptimusAction @ 14e14f980

FOptimusAction * __thiscall FOptimusAction::FOptimusAction(FOptimusAction *this,FString *param_1)

{
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  ::FString::FString(&this->Title,param_1);
  return this;
}

// ~FOptimusAction @ 14e1610f0

void __thiscall FOptimusAction::~FOptimusAction(FOptimusAction *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  pFVar1 = (this->Title).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

