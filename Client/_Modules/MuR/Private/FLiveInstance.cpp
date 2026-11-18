// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// ~FLiveInstance @ 14ab60210

void __thiscall UE::Mutable::Private::FLiveInstance::~FLiveInstance(FLiveInstance *this)

{
  bool bVar1;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_UE::Mutable::Private::FLiveInstance::~FLiveInstance(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1209,"Mutable_LiveInstanceDestructor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
               ,0x4b9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_UE::Mutable::Private::FLiveInstance::~FLiveInstance(void)___ptr64'::
               __l2::__CpuProfilerEventSpecId1209);
  }
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Cache != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_48) {
    (this->Cache).Object = (FProgramCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Cache).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OldParameters != (TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *)&local_38) {
    (this->OldParameters).Object = (FParameters *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OldParameters).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Instance != (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)&local_28) {
    (this->Instance).Object = (FInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Instance).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Model != (TSharedPtr<UE::Mutable::Private::FModel_const_,1> *)&local_18) {
    (this->Model).Object = (FModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Model).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExternalResourceProvider).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Cache).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OldParameters).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Model).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  return;
}

