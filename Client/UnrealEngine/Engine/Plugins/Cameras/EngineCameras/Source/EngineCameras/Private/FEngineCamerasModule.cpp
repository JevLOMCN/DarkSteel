// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 2

// StartupModule @ 14ad1b070

void __thiscall FEngineCamerasModule::StartupModule(FEngineCamerasModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FCameraModularFeature *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  IModularFeatures *pIVar7;
  FName FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<FEngineCamerasModule::FCameraModularFeature,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong local_28 [2];
  
  pTVar6 = ::operator_new(0x18);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar6 = pTVar12;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = pTVar6 + 1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraModularFeature_FEngineCamerasModule___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&___7FCameraModularFeature_FEngineCamerasModule__6B_;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = &this->CameraModularFeature;
  pTVar10 = pTVar6;
  if (pTVar11 != (TSharedPtr<FEngineCamerasModule::FCameraModularFeature,1> *)local_28) {
    pTVar11->Object = (FCameraModularFeature *)pTVar9;
    pTVar9 = (this->CameraModularFeature).SharedReferenceCount.ReferenceController;
    if (pTVar6 != pTVar9) {
      (this->CameraModularFeature).SharedReferenceCount.ReferenceController = pTVar6;
      pTVar10 = pTVar12;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar9->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar9->_padding_)(pTVar9);
          LOCK();
          paVar1 = &pTVar9->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pTVar11->Object != (FCameraModularFeature *)0x0) {
    pIVar7 = IModularFeatures::Get();
    pFVar3 = pTVar11->Object;
    pcVar4 = *(code **)((longlong)*pIVar7 + 0x28);
    FVar8 = ICameraModularFeature::GetModularFeatureName();
    pTVar6 = (TReferenceControllerBase<1> *)(pFVar3 + 1);
    if (pFVar3 == (FCameraModularFeature *)0x0) {
      pTVar6 = pTVar12;
    }
    (*pcVar4)(pIVar7,*(undefined8 *)FVar8,pTVar6);
  }
  return;
}

// ShutdownModule @ 14ad1b1c0

void __thiscall FEngineCamerasModule::ShutdownModule(FEngineCamerasModule *this)

{
  FCameraModularFeature *pFVar1;
  code *pcVar2;
  IModularFeatures *pIVar3;
  FName FVar4;
  FCameraModularFeature *pFVar5;
  TSharedPtr<FEngineCamerasModule::FCameraModularFeature,1> local_18;
  
  if ((this->CameraModularFeature).Object != (FCameraModularFeature *)0x0) {
    pIVar3 = IModularFeatures::Get();
    pFVar1 = (this->CameraModularFeature).Object;
    pcVar2 = *(code **)((longlong)*pIVar3 + 0x30);
    FVar4 = ICameraModularFeature::GetModularFeatureName();
    pFVar5 = pFVar1 + 1;
    if (pFVar1 == (FCameraModularFeature *)0x0) {
      pFVar5 = (FCameraModularFeature *)0x0;
    }
    (*pcVar2)(pIVar3,*(undefined8 *)FVar4,pFVar5);
    local_18.Object = (FCameraModularFeature *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<FEngineCamerasModule::FCameraModularFeature,1>::operator=
              (&this->CameraModularFeature,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

