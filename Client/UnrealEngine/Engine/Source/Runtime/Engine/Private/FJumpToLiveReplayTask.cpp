// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetName @ 147ae9c50

FName __thiscall FJumpToLiveReplayTask::GetName(FJumpToLiveReplayTask *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ReplayTaskNames::JumpToLiveReplayTask;
  return in_RDX;
}

// StartTask @ 147b16c90

void __thiscall FJumpToLiveReplayTask::StartTask(FJumpToLiveReplayTask *this)

{
  return;
}

// Tick @ 147b18170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FJumpToLiveReplayTask::Tick(FJumpToLiveReplayTask *this)

{
  float fVar1;
  float fVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  UObject *pUVar9;
  UDemoNetDriver *this_00;
  LARGE_INTEGER local_res8;
  
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar6) {
    return true;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar3 = *(TReferenceControllerBase<1> **)&pUVar9[0x42].field_0x18;
  plVar4 = *(longlong **)&pUVar9[0x42].field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar4 == (longlong *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  cVar8 = (**(code **)(*plVar4 + 0x128))(plVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (cVar8 == '\0') {
    return true;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  fVar1 = this->InitialTotalDemoTime;
  fVar2 = *(float *)&pUVar9[0x5a].field_0x1c;
  QueryPerformanceCounter(&local_res8);
  bVar6 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - this->TaskStartTime < __real_402e000000000000;
  if (fVar1 == fVar2) {
    if (bVar6) {
      return false;
    }
  }
  else if (bVar6) goto LAB_147b18291;
  if (2 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_bool___cdecl_FJumpToLiveReplayTask::Tick(void)___ptr64'::__l15::
                LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
LAB_147b18291:
  this_00 = (UDemoNetDriver *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDemoNetDriver::JumpToEndOfLiveReplay(this_00);
  return true;
}

