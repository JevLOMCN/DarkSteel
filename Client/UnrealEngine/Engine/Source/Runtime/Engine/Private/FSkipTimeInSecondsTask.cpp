// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetName @ 147ae9c70

FName __thiscall FSkipTimeInSecondsTask::GetName(FSkipTimeInSecondsTask *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ReplayTaskNames::SkipTimeInSecondsTask;
  return in_RDX;
}

// StartTask @ 147b16ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkipTimeInSecondsTask::StartTask(FSkipTimeInSecondsTask *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  UDemoNetDriver *this_00;
  uint uVar8;
  
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar7[0x46].field_0x20 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Driver->IsFastForwarding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x24b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar1 = *(TReferenceControllerBase<1> **)&pUVar7[0x42].field_0x18;
    plVar2 = *(longlong **)&pUVar7[0x42].field_0x10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar2 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = (**(code **)(*plVar2 + 0x60))(plVar2);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar4 = __real_447a0000;
    uVar8 = (int)(longlong)(*(float *)&pUVar7[0x5a].field_0x18 * __real_447a0000) +
            (int)(longlong)(this->SecondsToSkip * __real_447a0000);
    if (uVar8 < uVar6) {
      uVar6 = uVar8;
    }
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar1 = *(TReferenceControllerBase<1> **)&pUVar7[0x42].field_0x18;
    plVar2 = *(longlong **)&pUVar7[0x42].field_0x10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar2 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pcVar3 = *(code **)(*plVar2 + 0x70);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (*pcVar3)(plVar2,(longlong)(*(float *)&pUVar7[0x5a].field_0x18 * fVar4),uVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    this_00 = (UDemoNetDriver *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDemoNetDriver::SkipTimeInternal(this_00,this->SecondsToSkip,true,false);
  }
  return;
}

// Tick @ 147b182c0

bool __thiscall FSkipTimeInSecondsTask::Tick(FSkipTimeInSecondsTask *this)

{
  return true;
}

