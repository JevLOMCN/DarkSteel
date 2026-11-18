// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~TTask<FSortedLightSetSceneInfo_*> @ 1447f62d0

void __thiscall
UE::Tasks::TTask<FSortedLightSetSceneInfo_*>::~TTask<FSortedLightSetSceneInfo_*>
          (TTask<FSortedLightSetSceneInfo_*> *this)

{
  int *piVar1;
  int iVar2;
  TTask<FSortedLightSetSceneInfo_*> TVar3;
  
  TVar3 = *this;
  if (TVar3 != (TTask<FSortedLightSetSceneInfo_*>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001447f62ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      return;
    }
  }
  return;
}

// operator= @ 1447f9130

TTask<FSortedLightSetSceneInfo_*> * __thiscall
UE::Tasks::TTask<FSortedLightSetSceneInfo_*>::operator=
          (TTask<FSortedLightSetSceneInfo_*> *this,TTask<FSortedLightSetSceneInfo_*> *param_1)

{
  int *piVar1;
  int iVar2;
  TTask<FSortedLightSetSceneInfo_*> TVar3;
  
  if (this != param_1) {
    TVar3 = *this;
    *this = *param_1;
    *param_1 = (TTask<FSortedLightSetSceneInfo_*>)0x0;
    if (TVar3 != (TTask<FSortedLightSetSceneInfo_*>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)TVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      }
    }
  }
  return this;
}

// operator= @ 1447f9180

TTask<void> * __thiscall UE::Tasks::TTask<void>::operator=(TTask<void> *this,TTask<void> *param_1)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  
  if (this != param_1) {
    TVar3 = *this;
    *this = *param_1;
    *param_1 = (TTask<void>)0x0;
    if (TVar3 != (TTask<void>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)TVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      }
    }
  }
  return this;
}

// GetResult @ 144816720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FSortedLightSetSceneInfo ** __thiscall
UE::Tasks::TTask<FSortedLightSetSceneInfo_*>::GetResult(TTask<FSortedLightSetSceneInfo_*> *this)

{
  TTask<FSortedLightSetSceneInfo_*> TVar1;
  code *pcVar2;
  bool bVar3;
  FSortedLightSetSceneInfo **ppFVar4;
  
  if (*this == (TTask<FSortedLightSetSceneInfo_*>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      ppFVar4 = (FSortedLightSetSceneInfo **)(*pcVar2)();
      return ppFVar4;
    }
  }
  if (*this != (TTask<FSortedLightSetSceneInfo_*>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)*this);
  }
  TVar1 = *this;
  if (*(char *)((longlong)TVar1 + 0xd0) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      ppFVar4 = (FSortedLightSetSceneInfo **)(*pcVar2)();
      return ppFVar4;
    }
  }
  return (FSortedLightSetSceneInfo **)((longlong)TVar1 + 0xd8);
}

