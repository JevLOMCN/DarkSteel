// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// ~ISimCallbackObject @ 1436f75d0

void __thiscall Chaos::ISimCallbackObject::~ISimCallbackObject(ISimCallbackObject *this)

{
  return;
}

// ApplyCorrections_Internal @ 1436f8b50

void __thiscall
Chaos::ISimCallbackObject::ApplyCorrections_Internal
          (ISimCallbackObject *this,int param_1,FSimCallbackInput *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8052828509065707726>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0xce,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FirstPreResimStep_Internal @ 1436ff430

void __thiscall
Chaos::ISimCallbackObject::FirstPreResimStep_Internal(ISimCallbackObject *this,int param_1)

{
  return;
}

// GetFNameForStatId @ 1436ff8a0

FName __thiscall Chaos::ISimCallbackObject::GetFNameForStatId(ISimCallbackObject *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&`public:_virtual_class_FName___cdecl_Chaos::ISimCallbackObject::GetFNameForStatId(void)const___ptr64'
                      ::__l2::StaticName);
  return in_RDX;
}

// InjectInputs_External @ 143701720

void __thiscall
Chaos::ISimCallbackObject::InjectInputs_External(ISimCallbackObject *this,int param_1,int param_2)

{
  return;
}

// IsFAsyncObjectManagerCallback @ 143701870

bool __thiscall Chaos::ISimCallbackObject::IsFAsyncObjectManagerCallback(ISimCallbackObject *this)

{
  return false;
}

// OnCCDModification_Internal @ 143701e40

void __thiscall
Chaos::ISimCallbackObject::OnCCDModification_Internal
          (ISimCallbackObject *this,FCCDModifierAccessor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x138,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnContactModification_Internal @ 143701e80

void __thiscall
Chaos::ISimCallbackObject::OnContactModification_Internal
          (ISimCallbackObject *this,FCollisionContactModifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x148,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnFinalizeOutputData_Internal @ 1437027e0

void __thiscall
Chaos::ISimCallbackObject::OnFinalizeOutputData_Internal
          (ISimCallbackObject *this,FSimCallbackOutput *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x17a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnMidPhaseModification_Internal @ 143702820

void __thiscall
Chaos::ISimCallbackObject::OnMidPhaseModification_Internal
          (ISimCallbackObject *this,FMidPhaseModifierAccessor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x12e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnParticleUnregistered_Internal @ 143702860

void __thiscall
Chaos::ISimCallbackObject::OnParticleUnregistered_Internal
          (ISimCallbackObject *this,
          TArray<TTuple<Chaos::FUniqueIdx,Chaos::FSingleParticlePhysicsProxy_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x16e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnParticlesRegistered_Internal @ 1437028a0

void __thiscall
Chaos::ISimCallbackObject::OnParticlesRegistered_Internal
          (ISimCallbackObject *this,
          TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x165,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPhysicsObjectUnregistered_Internal @ 1437028e0

void __thiscall
Chaos::ISimCallbackObject::OnPhysicsObjectUnregistered_Internal
          (ISimCallbackObject *this,FPhysicsObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x174,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPostInitialize_Internal @ 143702920

void __thiscall Chaos::ISimCallbackObject::OnPostInitialize_Internal(ISimCallbackObject *this)

{
  return;
}

// OnPostIntegrate_Internal @ 143702930

void __thiscall Chaos::ISimCallbackObject::OnPostIntegrate_Internal(ISimCallbackObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x124,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPostSolve_Internal @ 143702970

void __thiscall Chaos::ISimCallbackObject::OnPostSolve_Internal(ISimCallbackObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x15c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPreIntegrate_Internal @ 1437029b0

void __thiscall Chaos::ISimCallbackObject::OnPreIntegrate_Internal(ISimCallbackObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x11a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPreSimulate_Internal @ 143702ad0

void __thiscall Chaos::ISimCallbackObject::OnPreSimulate_Internal(ISimCallbackObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x110,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPreSolve_Internal @ 143702b10

void __thiscall Chaos::ISimCallbackObject::OnPreSolve_Internal(ISimCallbackObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x152,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnStrainModification_Internal @ 143702b50

void __thiscall
Chaos::ISimCallbackObject::OnStrainModification_Internal
          (ISimCallbackObject *this,FStrainModifierAccessor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SimCallbackObject.h"
                     ,0x13d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ProcessInputs_External @ 1437030b0

void __thiscall
Chaos::ISimCallbackObject::ProcessInputs_External(ISimCallbackObject *this,int param_1)

{
  return;
}

// ProcessInputs_Internal @ 1437030c0

void __thiscall
Chaos::ISimCallbackObject::ProcessInputs_Internal(ISimCallbackObject *this,int param_1)

{
  return;
}

// TriggerRewindIfNeeded_Internal @ 143704640

int __thiscall
Chaos::ISimCallbackObject::TriggerRewindIfNeeded_Internal(ISimCallbackObject *this,int param_1)

{
  return -1;
}

// GetProducerInputData_External @ 1438bc0c0

FSimCallbackInput * __thiscall
Chaos::ISimCallbackObject::GetProducerInputData_External(ISimCallbackObject *this)

{
  int *piVar1;
  FPhysicsSolverBase *pFVar2;
  FPushPhysicsData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSimCallbackInput *pFVar8;
  TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *pTVar9;
  ISimCallbackObject *local_18;
  FSimCallbackInput *pFStack_10;
  
  if (this->CurrentExternalInput_External != (FSimCallbackInput *)0x0) {
    return this->CurrentExternalInput_External;
  }
  pFVar2 = this->Solver;
  pFStack_10 = (FSimCallbackInput *)(**(code **)(this->_padding_ + 0x58))();
  this->CurrentExternalInput_External = pFStack_10;
  pFVar3 = (pFVar2->MarshallingManager).ProducerData;
  pTVar9 = &pFVar3->SimCallbackInputs;
  pFVar4 = (pTVar9->AllocatorInstance).Data;
  local_18 = this;
  if ((pFVar4 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar4 + (longlong)(pFVar3->SimCallbackInputs).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSimCallbackInput *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (pFVar3->SimCallbackInputs).ArrayNum;
  piVar1 = &(pFVar3->SimCallbackInputs).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
  }
  (pFVar3->SimCallbackInputs).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(ISimCallbackObject **)pFVar4 = local_18;
  *(FSimCallbackInput **)(pFVar4 + 8) = pFStack_10;
  return this->CurrentExternalInput_External;
}

