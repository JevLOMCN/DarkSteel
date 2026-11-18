// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FVisualLoggerTraceDevice @ 1489b60d0

FVisualLoggerTraceDevice * __thiscall
FVisualLoggerTraceDevice::FVisualLoggerTraceDevice(FVisualLoggerTraceDevice *this)

{
  this->_padding_ = (longlong)&___7FVisualLoggerTraceDevice__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->ImmediateRenderDelegate = 0;
  *(undefined8 *)&(this->ImmediateRenderDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ImmediateRenderDelegate).field_0x10 = 0;
  return this;
}

// Cleanup @ 1489cfe10

void __thiscall FVisualLoggerTraceDevice::Cleanup(FVisualLoggerTraceDevice *this,bool param_1)

{
  return;
}

// DiscardRecordingToFile @ 1489d67e0

void __thiscall FVisualLoggerTraceDevice::DiscardRecordingToFile(FVisualLoggerTraceDevice *this)

{
  return;
}

// Get @ 1489e5ab0

FVisualLoggerTraceDevice * __cdecl FVisualLoggerTraceDevice::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FVisualLoggerTraceDevice::Get'::__l2::_dynamic_atexit_destructor_for__GDevice__);
      _Init_thread_footer(&::_TSS0);
      return &GDevice;
    }
  }
  return &GDevice;
}

// HasFlags @ 1489f2390

bool __thiscall FVisualLoggerTraceDevice::HasFlags(FVisualLoggerTraceDevice *this,int param_1)

{
  return (param_1 & 3U) != 0;
}

// Serialize @ 148a13060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVisualLoggerTraceDevice::Serialize
          (FVisualLoggerTraceDevice *this,UObject *param_1,FName *param_2,FName *param_3,
          FName *param_4,FVisualLogEntry *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  FName *pFVar3;
  UWorld *pUVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_108 [2];
  FArchiveState local_f8;
  undefined8 local_68;
  ForAnyElementType *local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  LARGE_INTEGER *local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (-1 < VisualLoggerChannel->Enabled) {
    local_108[0].QuadPart = 0;
    local_f8._padding_ = 0;
    local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_f8._40_8_ = 0;
    local_f8.ArSerializingDefaults = 0;
    local_f8.ArPortFlags = 0;
    local_f8.ArMaxSerializeSize = 0;
    local_f8.ArUEVer.FileVersionUE4 = 0;
    local_f8.ArUEVer.FileVersionUE5 = 0;
    local_f8.ArLicenseeUEVer = 0;
    local_f8.ArEngineVer.Major = 0;
    local_f8.ArEngineVer.Minor = 0;
    local_f8.ArEngineVer.Patch = 0;
    local_f8.ArEngineVer._6_2_ = 0;
    local_f8.ArEngineVer.Changelist = 0;
    local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_f8.SerializedProperty = (FProperty *)0x0;
    local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_f8.bCustomVersionsAreReset = false;
    local_f8._129_7_ = 0;
    local_f8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_f8);
    local_68 = 0;
    local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_60 = &local_50;
    local_58 = 0;
    FArchiveState::SetIsSaving(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
    local_50.Data = (FScriptContainerElement *)0x0;
    local_f8._padding_ = (longlong)&___7FBufferArchive__6B_;
    local_48 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x400,&local_50,0,(int *)((longlong)&local_48 + 4));
    FArchive::UsingCustomVersion((FArchive *)&local_f8,&EVisualLoggerVersion::GUID);
    FArchive::UsingCustomVersion((FArchive *)&local_f8,&FUE5MainStreamObjectVersion::GUID);
    pFVar3 = ::FName::FName((FName *)&local_108[0].s,"UE5MainStreamObjectVersion");
    FArchiveState::SetCustomVersion(&local_f8,&FUE5MainStreamObjectVersion::GUID,0x79,*pFVar3);
    ::operator<<((FArchive *)&local_f8,param_5);
    if (-1 < VisualLoggerChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FVisualLoggerVisualLogEntryFields>
                ((TLogScope<1> *)&local_38);
      QueryPerformanceCounter(local_108);
      *local_38 = local_108[0];
      pUVar4 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      local_108[0] = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar4);
      local_38[1] = local_108[0];
      dVar5 = (double)FObjectTrace::GetObjectId(param_1);
      local_38[2].QuadPart = (LONGLONG)dVar5;
      UE::Trace::Private::Field_WriteAuxData(3,(uchar *)local_50.Data,(uint)local_48 & 0x7ffff);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
      **(undefined1 **)(lVar1 + 0x20) = 6;
      lVar6 = *(longlong *)(lVar1 + 0x20) + 1;
      *(longlong *)(lVar1 + 0x20) = lVar6;
      if (lVar1 != local_30) {
        *(longlong *)(lVar1 + 0x28) = lVar6;
      }
      *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ImmediateRenderDelegate,(FReadAccessScope *)&local_38);
  if ((*(int *)&(this->ImmediateRenderDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->ImmediateRenderDelegate).field_0x8, plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_5);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  return;
}

// SetFileName @ 148a148a0

void __thiscall
FVisualLoggerTraceDevice::SetFileName(FVisualLoggerTraceDevice *this,FString *param_1)

{
  return;
}

// StartRecordingToFile @ 148a17790

void __thiscall
FVisualLoggerTraceDevice::StartRecordingToFile(FVisualLoggerTraceDevice *this,double param_1)

{
  UE::Trace::ToggleChannel(L"VisualLogger",true);
  return;
}

// StopRecordingToFile @ 148a18d00

void __thiscall
FVisualLoggerTraceDevice::StopRecordingToFile(FVisualLoggerTraceDevice *this,double param_1)

{
  UE::Trace::ToggleChannel(L"VisualLogger",false);
  return;
}

