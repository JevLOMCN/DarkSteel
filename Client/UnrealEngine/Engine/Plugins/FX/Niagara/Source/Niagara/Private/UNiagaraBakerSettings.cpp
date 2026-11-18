// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticClass @ 148fe2220

UClass * __cdecl UNiagaraBakerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerSettings",
               &Z_Registration_Info_UClass_UNiagaraBakerSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerSettings,0x1f0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Niagara",
               InternalConstructor<UNiagaraBakerSettings>,
               InternalVTableHelperCtorCaller<UNiagaraBakerSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerSettings.InnerSingleton;
}

// UNiagaraBakerSettings @ 149023960

UNiagaraBakerSettings * __thiscall
UNiagaraBakerSettings::UNiagaraBakerSettings(UNiagaraBakerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DurationSeconds = 4.0;
  this->_padding_ = (longlong)&___7UNiagaraBakerSettings__6B_;
  this->StartSeconds = 0.0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->CameraSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraSettings).ArrayNum = 0;
  (this->CameraSettings).ArrayMax = 0;
  this->CurrentCameraIndex = 0;
  (this->BakeQualityLevel).ComparisonIndex = 0;
  (this->BakeQualityLevel).Number = 0;
  (this->OutputTextures_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTextures_DEPRECATED).ArrayNum = 0;
  (this->OutputTextures_DEPRECATED).ArrayMax = 0;
  this->CameraViewportMode_DEPRECATED = Perspective;
  this->FramesPerSecond = 0x3c;
  (this->FramesPerDimension).field0_0x0._s_0.X = 8;
  (this->FramesPerDimension).field0_0x0._s_0.Y = 8;
  this->CameraOrbitDistance_DEPRECATED = 200.0;
  this->CameraFOV_DEPRECATED = 90.0;
  this->CameraOrthoWidth_DEPRECATED = 512.0;
  this->CameraAspectRatio_DEPRECATED = 1.0;
  return this;
}

// UNiagaraBakerSettings @ 149023a00

UNiagaraBakerSettings * __thiscall
UNiagaraBakerSettings::UNiagaraBakerSettings
          (UNiagaraBakerSettings *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  UClass *pUVar12;
  UNiagaraBakerSettings *pUVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FName local_res8;
  UObject *local_38 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->bLockToSimulationFrameRate = '\0';
  this->bPreviewLooping = '\x01';
  piVar1 = &(this->CameraSettings).ArrayNum;
  this->bRenderComponentOnly = '\x01';
  this->bPreviewLoopedOutput = '\x01';
  piVar3 = &(this->CameraSettings).ArrayMax;
  this->_padding_ = (longlong)&___7UNiagaraBakerSettings__6B_;
  this->DurationSeconds = 4.0;
  this->StartSeconds = 0.0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->CameraSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar3 = 0;
  this->CurrentCameraIndex = 0;
  (this->BakeQualityLevel).ComparisonIndex = 0;
  (this->BakeQualityLevel).Number = 0;
  (this->OutputTextures_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTextures_DEPRECATED).ArrayNum = 0;
  (this->OutputTextures_DEPRECATED).ArrayMax = 0;
  this->CameraViewportMode_DEPRECATED = Perspective;
  this->FramesPerSecond = 0x3c;
  (this->FramesPerDimension).field0_0x0._s_0.X = 8;
  (this->FramesPerDimension).field0_0x0._s_0.Y = 8;
  this->CameraOrbitDistance_DEPRECATED = 200.0;
  this->CameraFOV_DEPRECATED = 90.0;
  this->CameraOrthoWidth_DEPRECATED = 512.0;
  this->CameraAspectRatio_DEPRECATED = 1.0;
  pFVar11 = ::FName::FName(&local_res8,"DefaultOutput");
  FVar4 = *pFVar11;
  pUVar12 = UNiagaraBakerOutputTexture2D::StaticClass();
  local_38[0] = FObjectInitializer::CreateDefaultSubobject
                          (param_1,(UObject *)this,FVar4,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38[0]);
  }
  pFVar5 = (this->Outputs).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
     ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)(this->Outputs).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pUVar13 = (UNiagaraBakerSettings *)(*pcVar6)();
      return pUVar13;
    }
  }
  iVar10 = (this->Outputs).ArrayNum;
  if (iVar10 == (this->Outputs).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Outputs).AllocatorInstance,&(this->Outputs).ArrayMax);
  }
  (this->Outputs).ArrayNum = iVar10 + 1;
  *(UObject **)((this->Outputs).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_38[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38[0]);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x50,8,7,&(this->CameraSettings).AllocatorInstance,piVar1,piVar3);
  DefaultConstructItems<FNiagaraBakerCameraSettings,int>
            ((this->CameraSettings).AllocatorInstance.Data + (longlong)iVar10 * 0x50,7);
  uVar14 = 0;
  uVar15 = uVar14;
  do {
    iVar10 = (int)uVar15;
    if (*piVar1 <= iVar10) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pUVar13 = (UNiagaraBakerSettings *)(*pcVar6)();
        return pUVar13;
      }
    }
    *(int *)((this->CameraSettings).AllocatorInstance.Data + uVar14) = iVar10;
    if (*piVar1 <= iVar10) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pUVar13 = (UNiagaraBakerSettings *)(*pcVar6)();
        return pUVar13;
      }
    }
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pFVar5 = (this->CameraSettings).AllocatorInstance.Data;
    if (*(int *)(pFVar5 + uVar14) == 0) {
      *(undefined8 *)(pFVar5 + uVar14 + 8) = 0;
      *(undefined8 *)(pFVar5 + uVar14 + 0x10) = 0xc069000000000000;
      *(undefined8 *)(pFVar5 + uVar14 + 0x18) = 0;
      *(undefined8 *)(pFVar5 + uVar14 + 0x20) = 0x4066800000000000;
      *(undefined8 *)(pFVar5 + uVar14 + 0x28) = 0;
      *(undefined8 *)(pFVar5 + uVar14 + 0x30) = 0x4056800000000000;
    }
    else {
      *(double *)(pFVar5 + uVar14 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar5 + uVar14 + 8 + 8) = uVar7;
      *(double *)(pFVar5 + uVar14 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *(double *)(pFVar5 + uVar14 + 0x20) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      *(double *)(pFVar5 + uVar14 + 0x20 + 8) = dVar8;
      *(double *)(pFVar5 + uVar14 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    *(undefined4 *)(pFVar5 + uVar14 + 0x38) = 0x43480000;
    uVar15 = (ulonglong)(iVar10 + 1U);
    *(undefined4 *)(pFVar5 + uVar14 + 0x3c) = 0x42b40000;
    *(undefined4 *)(pFVar5 + uVar14 + 0x40) = 0x44000000;
    pFVar5[uVar14 + 0x44] = (FScriptContainerElement)0x0;
    *(undefined4 *)(pFVar5 + uVar14 + 0x48) = 0x3f800000;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar14 = uVar14 + 0x50;
  } while ((int)(iVar10 + 1U) < 7);
  this->CameraViewportLocation_DEPRECATED[0].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[0].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[0].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[0].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraViewportLocation_DEPRECATED[1].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[1].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[1].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[1].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[1].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[1].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraViewportLocation_DEPRECATED[2].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[2].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[2].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[2].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[2].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[2].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraViewportLocation_DEPRECATED[3].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[3].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[3].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[3].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[3].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[3].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraViewportLocation_DEPRECATED[4].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[4].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[4].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[4].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[4].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[4].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraViewportLocation_DEPRECATED[5].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[5].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[5].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[5].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[5].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[5].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraViewportLocation_DEPRECATED[6].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->CameraViewportLocation_DEPRECATED[6].field0_0x0._s_0.Y = (double)uVar7;
  this->CameraViewportLocation_DEPRECATED[6].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->CameraViewportRotation_DEPRECATED[6].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->CameraViewportRotation_DEPRECATED[6].Yaw = dVar8;
  this->CameraViewportRotation_DEPRECATED[6].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->CameraViewportLocation_DEPRECATED[0].field0_0x0._s_0.X = 0.0;
  this->CameraViewportLocation_DEPRECATED[0].field0_0x0._s_0.Y = -200.0;
  this->CameraViewportLocation_DEPRECATED[0].field0_0x0._s_0.Z = 0.0;
  this->CameraViewportRotation_DEPRECATED[0].Pitch = 180.0;
  this->CameraViewportRotation_DEPRECATED[0].Yaw = 0.0;
  this->CameraViewportRotation_DEPRECATED[0].Roll = 90.0;
  return this;
}

// ~UNiagaraBakerSettings @ 1490266e0

void __thiscall UNiagaraBakerSettings::~UNiagaraBakerSettings(UNiagaraBakerSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBakerSettings__6B_;
  DestructItems<FNiagaraBakerTextureSettings,int>
            ((FNiagaraBakerTextureSettings *)
             (this->OutputTextures_DEPRECATED).AllocatorInstance.Data,
             (this->OutputTextures_DEPRECATED).ArrayNum);
  pFVar1 = (this->OutputTextures_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149027660

bool __thiscall `UNiagaraBakerSettings::Equals'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)this;
  if (*(int *)(lVar11 + 0x48) == *(int *)(*(longlong *)((longlong)this + 8) + 0x48)) {
    uVar8 = 0;
    if (0 < *(int *)(lVar11 + 0x48)) {
      lVar9 = 0;
      do {
        lVar1 = *(longlong *)((longlong)this + 8);
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar1 + 0x48)) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        lVar1 = *(longlong *)(lVar1 + 0x40);
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar11 + 0x48)) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x40) + lVar9 * 8) + 0x10) !=
            *(longlong *)(*(longlong *)(lVar1 + lVar9 * 8) + 0x10)) goto LAB_14902781a;
        lVar11 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar11 + 0x48)) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        lVar1 = *(longlong *)((longlong)this + 8);
        plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x40) + lVar9 * 8);
        pcVar3 = *(code **)(*plVar2 + 0x2b0);
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar1 + 0x48)) {
          uVar7 = uVar10;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        cVar6 = (*pcVar3)(plVar2,*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + lVar9 * 8));
        if (cVar6 == '\0') goto LAB_14902781a;
        lVar11 = *(longlong *)this;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar8 < *(int *)(lVar11 + 0x48));
    }
    bVar4 = true;
  }
  else {
LAB_14902781a:
    bVar4 = false;
  }
  return bVar4;
}

// Equals @ 149040410

bool __thiscall
UNiagaraBakerSettings::Equals(UNiagaraBakerSettings *this,UNiagaraBakerSettings *param_1)

{
  int iVar1;
  bool bVar2;
  UNiagaraBakerSettings *local_18;
  UNiagaraBakerSettings *local_10;
  
  iVar1 = (this->CameraSettings).ArrayNum;
  if (iVar1 == (param_1->CameraSettings).ArrayNum) {
    local_18 = this;
    local_10 = param_1;
    bVar2 = CompareItems<FNiagaraBakerCameraSettings,int>
                      ((FNiagaraBakerCameraSettings *)(this->CameraSettings).AllocatorInstance.Data,
                       (FNiagaraBakerCameraSettings *)
                       (param_1->CameraSettings).AllocatorInstance.Data,iVar1);
    if ((bVar2) && (this->CurrentCameraIndex == param_1->CurrentCameraIndex)) {
      bVar2 = `UNiagaraBakerSettings::Equals'::__l2::<lambda_1>::operator()(&local_18);
      if (bVar2) {
        if ((((((float)((uint)(this->StartSeconds - param_1->StartSeconds) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
              ((float)((uint)(this->DurationSeconds - param_1->DurationSeconds) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
             (this->FramesPerSecond == param_1->FramesPerSecond)) &&
            (((this->FramesPerDimension).field0_0x0._s_0.X ==
              (param_1->FramesPerDimension).field0_0x0._s_0.X &&
             ((this->FramesPerDimension).field0_0x0._s_0.Y ==
              (param_1->FramesPerDimension).field0_0x0._s_0.Y)))) &&
           (((param_1->field_0x34 ^ this->field_0x34) & 2) == 0)) {
          if ((((this->bRenderComponentOnly ^ param_1->bRenderComponentOnly) & 1) == 0) &&
             (((param_1->field_0x6c ^ this->field_0x6c) & 2) == 0)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetCameraLocation @ 1490446b0

TVector<double> * __thiscall
UNiagaraBakerSettings::GetCameraLocation
          (UNiagaraBakerSettings *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  FNiagaraBakerCameraSettings *pFVar3;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  pFVar3 = GetCurrentCamera(this);
  if (pFVar3->ViewMode == Perspective) {
    local_20._s_0.X = 0.0;
    local_20._s_0.Y = 0.0;
    local_20._s_0.Z = (double)pFVar3->OrbitDistance;
    UE::Math::TRotator<double>::RotateVector
              (&pFVar3->ViewportRotation,(TVector<double> *)&local_38._s_0,
               (TVector<double> *)&local_20._s_0);
    dVar1 = (pFVar3->ViewportLocation).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (pFVar3->ViewportLocation).field0_0x0._s_0.X - local_38._s_0.X;
    dVar2 = (pFVar3->ViewportLocation).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - local_38._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 - local_38._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar2 = (pFVar3->ViewportLocation).field0_0x0._s_0.Y;
  dVar1 = (pFVar3->ViewportLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar3->ViewportLocation).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCameraRotation @ 149044760

TRotator<double> * __thiscall
UNiagaraBakerSettings::GetCameraRotation
          (UNiagaraBakerSettings *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  FNiagaraBakerCameraSettings *pFVar3;
  
  pFVar3 = GetCurrentCamera(this);
  dVar2 = (pFVar3->ViewportRotation).Yaw;
  dVar1 = (pFVar3->ViewportRotation).Roll;
  __return_storage_ptr__->Pitch = (pFVar3->ViewportRotation).Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetCurrentCamera @ 149044930

FNiagaraBakerCameraSettings * __thiscall
UNiagaraBakerSettings::GetCurrentCamera(UNiagaraBakerSettings *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNiagaraBakerCameraSettings *pFVar5;
  
  uVar1 = this->CurrentCameraIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->CameraSettings).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraBakerCameraSettings *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FNiagaraBakerCameraSettings *)
         ((this->CameraSettings).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x50);
}

// GetOutputFrameIndices @ 149047570

FNiagaraBakerOutputFrameIndices * __thiscall
UNiagaraBakerSettings::GetOutputFrameIndices
          (UNiagaraBakerSettings *this,FNiagaraBakerOutputFrameIndices *__return_storage_ptr__,
          int param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FNiagaraBakerOutputFrameIndices *pFVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int local_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  float local_38;
  int local_34 [11];
  
  if ((param_1 < 0) || ((this->Outputs).ArrayNum <= param_1)) {
    local_34[0] = 1;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_34[4] = 0;
    piVar6 = local_34;
  }
  else {
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNiagaraBakerOutputFrameIndices *)(*pcVar2)();
        return pFVar5;
      }
    }
    fVar9 = param_2 / this->DurationSeconds;
    iVar7 = (this->FramesPerDimension).field0_0x0._s_0.Y *
            (this->FramesPerDimension).field0_0x0._s_0.X;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    local_48 = iVar7;
    if (this->bPreviewLooping == '\0') {
      if (__real_3f7ff972 <= fVar9) {
        fVar9 = __real_3f7ff972;
      }
    }
    else {
      fVar8 = (float)truncf();
      fVar9 = fVar9 - fVar8;
    }
    fStack_44 = fVar9;
    fVar9 = (float)iVar7 * fVar9;
    iStack_40 = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1;
    iVar1 = iStack_40 + 1;
    if (this->bPreviewLooping == '\0') {
      iStack_3c = iVar7 + -1;
      if (iVar1 < iVar7 + -1) {
        iStack_3c = iVar1;
      }
    }
    else {
      iStack_3c = iVar1 % iVar7;
    }
    piVar6 = &local_48;
    local_38 = fVar9 - (float)iStack_40;
  }
  iVar7 = piVar6[1];
  iVar1 = piVar6[2];
  iVar3 = piVar6[3];
  fVar9 = (float)piVar6[4];
  __return_storage_ptr__->NumFrames = piVar6[0];
  __return_storage_ptr__->NormalizedTime = (float)iVar7;
  __return_storage_ptr__->FrameIndexA = iVar1;
  __return_storage_ptr__->FrameIndexB = iVar3;
  __return_storage_ptr__->Interp = fVar9;
  return __return_storage_ptr__;
}

// GetOutputFrameIndices @ 1490476d0

FNiagaraBakerOutputFrameIndices * __thiscall
UNiagaraBakerSettings::GetOutputFrameIndices
          (UNiagaraBakerSettings *this,FNiagaraBakerOutputFrameIndices *__return_storage_ptr__,
          UNiagaraBakerOutput *param_1,float param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  __return_storage_ptr__->FrameIndexA = 0;
  __return_storage_ptr__->FrameIndexB = 0;
  fVar7 = param_2 / this->DurationSeconds;
  __return_storage_ptr__->Interp = 0.0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  __return_storage_ptr__->NumFrames =
       (this->FramesPerDimension).field0_0x0._s_0.Y * (this->FramesPerDimension).field0_0x0._s_0.X;
  __return_storage_ptr__->NormalizedTime = fVar7;
  if (this->bPreviewLooping == '\0') {
    if (__real_3f7ff972 <= fVar7) {
      fVar7 = __real_3f7ff972;
    }
  }
  else {
    fVar6 = (float)truncf();
    fVar7 = fVar7 - fVar6;
  }
  iVar3 = __return_storage_ptr__->NumFrames;
  __return_storage_ptr__->NormalizedTime = fVar7;
  fVar7 = (float)iVar3 * fVar7;
  iVar4 = (int)ROUND((fVar7 + fVar7) - __real_3f000000) >> 1;
  __return_storage_ptr__->FrameIndexA = iVar4;
  iVar1 = iVar4 + 1;
  if (this->bPreviewLooping == '\0') {
    iVar5 = iVar3 + -1;
    if (iVar1 < iVar3 + -1) {
      iVar5 = iVar1;
    }
  }
  else {
    iVar5 = iVar1 % iVar3;
  }
  __return_storage_ptr__->FrameIndexB = iVar5;
  __return_storage_ptr__->Interp = fVar7 - (float)iVar4;
  return __return_storage_ptr__;
}

// GetOutputNumFrames @ 1490477a0

int __thiscall UNiagaraBakerSettings::GetOutputNumFrames(UNiagaraBakerSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Outputs).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return (this->FramesPerDimension).field0_0x0._s_0.Y *
           (this->FramesPerDimension).field0_0x0._s_0.X;
  }
  return 0;
}

// GetOutputNumFrames @ 149047810

int __thiscall
UNiagaraBakerSettings::GetOutputNumFrames(UNiagaraBakerSettings *this,UNiagaraBakerOutput *param_1)

{
  return (this->FramesPerDimension).field0_0x0._s_0.Y * (this->FramesPerDimension).field0_0x0._s_0.X
  ;
}

// GetPrivateStaticClass @ 149048180

UClass * __cdecl UNiagaraBakerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerSettings",
               &Z_Registration_Info_UClass_UNiagaraBakerSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerSettings,0x1f0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Niagara",
               InternalConstructor<UNiagaraBakerSettings>,
               InternalVTableHelperCtorCaller<UNiagaraBakerSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerSettings.InnerSingleton;
}

// GetProjectionMatrix @ 149048460

TMatrix<double> * __thiscall
UNiagaraBakerSettings::GetProjectionMatrix
          (UNiagaraBakerSettings *this,TMatrix<double> *__return_storage_ptr__)

{
  FNiagaraBakerCameraSettings *pFVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  pFVar1 = GetCurrentCamera(this);
  fVar2 = __real_3f800000;
  if (pFVar1->bUseAspectRatio != false) {
    fVar2 = pFVar1->AspectRatio;
  }
  if (pFVar1->ViewMode == Perspective) {
    fVar6 = pFVar1->FOV * __real_3c0efa35;
    dVar4 = (double)GNearClippingPlane;
    dVar3 = tan((double)fVar6);
    dVar5 = __real_3ff0000000000000;
    __return_storage_ptr__->M[0][0] = __real_3ff0000000000000 / dVar3;
    __return_storage_ptr__->M[0][1] = 0.0;
    __return_storage_ptr__->M[0][2] = 0.0;
    __return_storage_ptr__->M[0][3] = 0.0;
    __return_storage_ptr__->M[1][0] = 0.0;
    fVar6 = tanf(fVar6);
    fVar2 = atanf(fVar6 / fVar2);
    dVar3 = tan((double)fVar2);
    __return_storage_ptr__->M[1][1] = dVar5 / dVar3;
    __return_storage_ptr__->M[1][2] = 0.0;
    __return_storage_ptr__->M[1][3] = 0.0;
    __return_storage_ptr__->M[2][0] = 0.0;
    __return_storage_ptr__->M[2][1] = 0.0;
    __return_storage_ptr__->M[2][2] = 0.0;
    __return_storage_ptr__->M[2][3] = 1.0;
    __return_storage_ptr__->M[3][0] = 0.0;
    __return_storage_ptr__->M[3][1] = 0.0;
    __return_storage_ptr__->M[3][2] = dVar4;
    __return_storage_ptr__->M[3][3] = 0.0;
  }
  else {
    dVar5 = (double)(pFVar1->OrthoWidth * __real_3f000000);
    dVar3 = (double)(pFVar1->OrthoWidth * fVar2 * __real_3f000000);
    dVar4 = __real_3ff0000000000000;
    if (dVar3 != 0.0) {
      dVar4 = __real_3ff0000000000000 / dVar3;
    }
    dVar3 = __real_3ff0000000000000;
    if (dVar5 != 0.0) {
      dVar3 = __real_3ff0000000000000 / dVar5;
    }
    __return_storage_ptr__->M[0][0] = dVar3;
    __return_storage_ptr__->M[0][1] = 0.0;
    __return_storage_ptr__->M[0][2] = 0.0;
    __return_storage_ptr__->M[0][3] = 0.0;
    __return_storage_ptr__->M[1][0] = 0.0;
    __return_storage_ptr__->M[1][1] = dVar4;
    __return_storage_ptr__->M[1][2] = 0.0;
    __return_storage_ptr__->M[1][3] = 0.0;
    __return_storage_ptr__->M[2][0] = 0.0;
    __return_storage_ptr__->M[2][1] = 0.0;
    __return_storage_ptr__->M[2][2] = -2.384185791015625e-07;
    __return_storage_ptr__->M[2][3] = 0.0;
    __return_storage_ptr__->M[3][0] = 0.0;
    __return_storage_ptr__->M[3][1] = 0.0;
    __return_storage_ptr__->M[3][2] = 0.5;
    __return_storage_ptr__->M[3][3] = 1.0;
  }
  return __return_storage_ptr__;
}

// GetViewMatrix @ 14904c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
UNiagaraBakerSettings::GetViewMatrix
          (UNiagaraBakerSettings *this,TMatrix<double> *__return_storage_ptr__)

{
  FNiagaraBakerCameraSettings *pFVar1;
  TInverseRotationMatrix<double> *pTVar2;
  TMatrix<double> *pTVar3;
  undefined1 auStack_158 [32];
  TRotator<double> local_138;
  TInverseRotationMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar1 = GetCurrentCamera(this);
  local_138.Pitch = (pFVar1->ViewportRotation).Pitch;
  local_138.Yaw = (pFVar1->ViewportRotation).Yaw;
  local_138.Roll = (pFVar1->ViewportRotation).Roll;
  pTVar2 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                     (&local_118,&local_138);
  pTVar3 = GetViewportMatrix(this,&local_98);
  VectorMatrixMultiply(__return_storage_ptr__,(TMatrix<double> *)pTVar2,pTVar3);
  return __return_storage_ptr__;
}

// GetViewportMatrix @ 14904c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
UNiagaraBakerSettings::GetViewportMatrix
          (UNiagaraBakerSettings *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  FNiagaraBakerCameraSettings *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  pFVar13 = GetCurrentCamera(this);
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  uVar11 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
  uVar10 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
  uVar15 = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
  uVar14 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
  uVar19 = _UNK_15066df7c;
  uVar17 = _UNK_15066df78;
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
  uVar18 = (uint)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20);
  uVar21 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0);
  uVar22 = (uint)((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20);
  switch(pFVar13->ViewMode) {
  case OrthoFront:
    uVar21 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar22 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
    uVar20 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
    uVar16 = uVar16 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar18 = uVar18 ^ __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)__return_storage_ptr__->M[0] =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^
         (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)__return_storage_ptr__->M[0] + 4) = uVar21;
    *(uint *)(__return_storage_ptr__->M[0] + 1) = uVar22;
    *(uint *)((longlong)__return_storage_ptr__->M[0] + 0xc) = uVar20;
    uVar11 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
    uVar10 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
    __return_storage_ptr__->M[0][2] = (double)CONCAT44(uVar18,uVar16);
    *(uint *)__return_storage_ptr__->M[1] = uVar14 ^ uVar6;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 4) = uVar15 ^ uVar7;
    *(uint *)(__return_storage_ptr__->M[1] + 1) = uVar10 ^ uVar17;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 0xc) = uVar11 ^ uVar19;
    __return_storage_ptr__->M[1][2] =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar7,
                          SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0) ^ uVar6)
    ;
    break;
  case OrthoBack:
    dVar1 = (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
    dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
    dVar3 = (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
    dVar4 = (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
    __return_storage_ptr__->M[0][3] = 0.0;
    __return_storage_ptr__->M[0][0] = dVar1;
    __return_storage_ptr__->M[0][1] = dVar2;
    __return_storage_ptr__->M[1][3] = 0.0;
    __return_storage_ptr__->M[0][2] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    dVar1 = (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
    dVar2 = (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
    __return_storage_ptr__->M[2][3] = 0.0;
    __return_storage_ptr__->M[2][0] = dVar3;
    __return_storage_ptr__->M[2][1] = dVar4;
    __return_storage_ptr__->M[3][3] = 1.0;
    uVar12 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    __return_storage_ptr__->M[1][0] = dVar1;
    __return_storage_ptr__->M[1][1] = dVar2;
    __return_storage_ptr__->M[1][2] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    __return_storage_ptr__->M[2][2] = (double)uVar12;
    __return_storage_ptr__->M[3][0] = (double)uVar8;
    __return_storage_ptr__->M[3][1] = (double)uVar9;
    __return_storage_ptr__->M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case OrthoLeft:
    __return_storage_ptr__->M[0][3] = 0.0;
    __return_storage_ptr__->M[1][3] = 0.0;
    __return_storage_ptr__->M[0][2] = (double)CONCAT44(uVar22 ^ uVar7,uVar21 ^ uVar6);
    dVar1 = (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
    dVar2 = (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
    __return_storage_ptr__->M[2][3] = 0.0;
    *(uint *)__return_storage_ptr__->M[0] = uVar14 ^ uVar6;
    *(uint *)((longlong)__return_storage_ptr__->M[0] + 4) = uVar15 ^ uVar7;
    *(uint *)(__return_storage_ptr__->M[0] + 1) = uVar10 ^ uVar17;
    *(uint *)((longlong)__return_storage_ptr__->M[0] + 0xc) = uVar11 ^ uVar19;
    __return_storage_ptr__->M[3][3] = 1.0;
    dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
    dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
    __return_storage_ptr__->M[2][0] = dVar1;
    __return_storage_ptr__->M[2][1] = dVar2;
    uVar12 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    __return_storage_ptr__->M[1][0] = dVar3;
    __return_storage_ptr__->M[1][1] = dVar4;
    __return_storage_ptr__->M[1][2] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    __return_storage_ptr__->M[2][2] = (double)uVar12;
    __return_storage_ptr__->M[3][0] = (double)uVar8;
    __return_storage_ptr__->M[3][1] = (double)uVar9;
    __return_storage_ptr__->M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case OrthoRight:
    dVar1 = (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
    __return_storage_ptr__->M[0][0] =
         (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
    __return_storage_ptr__->M[0][1] = dVar1;
    __return_storage_ptr__->M[0][2] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
    uVar10 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
    __return_storage_ptr__->M[1][2] = (double)CONCAT44(uVar18 ^ uVar7,uVar16 ^ uVar6);
    *(uint *)__return_storage_ptr__->M[1] = uVar14 ^ uVar6;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 4) = uVar15 ^ uVar7;
    *(uint *)(__return_storage_ptr__->M[1] + 1) = uVar10 ^ uVar17;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 0xc) = uVar11 ^ uVar19;
    break;
  case OrthoTop:
    dVar1 = (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
    uVar16 = SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
    uVar5 = (ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20;
    __return_storage_ptr__->M[0][0] =
         (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
    __return_storage_ptr__->M[0][1] = dVar1;
    __return_storage_ptr__->M[0][2] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    uVar11 = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_;
    uVar10 = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_;
    __return_storage_ptr__->M[1][2] = (double)CONCAT44((uint)uVar5 ^ uVar7,uVar16 ^ uVar6);
    *(uint *)__return_storage_ptr__->M[1] = uVar14 ^ uVar6;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 4) = uVar15 ^ uVar7;
    *(uint *)(__return_storage_ptr__->M[1] + 1) = uVar10 ^ uVar17;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 0xc) = uVar11 ^ uVar19;
    uVar16 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar7;
    uVar17 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar17;
    uVar19 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar19;
    *(uint *)__return_storage_ptr__->M[2] =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar6;
    *(uint *)((longlong)__return_storage_ptr__->M[2] + 4) = uVar16;
    *(uint *)(__return_storage_ptr__->M[2] + 1) = uVar17;
    *(uint *)((longlong)__return_storage_ptr__->M[2] + 0xc) = uVar19;
    __return_storage_ptr__->M[2][2] =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar7,
                          SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^ uVar6)
    ;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    __return_storage_ptr__->M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    __return_storage_ptr__->M[3][1] = (double)uVar8;
    __return_storage_ptr__->M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    goto LAB_14904c523;
  case OrthoBottom:
    uVar16 = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_ ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar18 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
    uVar20 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
    uVar21 = uVar21 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar22 = uVar22 ^ __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)__return_storage_ptr__->M[0] =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_ ^
         (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)__return_storage_ptr__->M[0] + 4) = uVar16;
    *(uint *)(__return_storage_ptr__->M[0] + 1) = uVar18;
    *(uint *)((longlong)__return_storage_ptr__->M[0] + 0xc) = uVar20;
    uVar11 = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_;
    uVar10 = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_;
    __return_storage_ptr__->M[0][2] = (double)CONCAT44(uVar22,uVar21);
    *(uint *)__return_storage_ptr__->M[1] = uVar14 ^ uVar6;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 4) = uVar15 ^ uVar7;
    *(uint *)(__return_storage_ptr__->M[1] + 1) = uVar10 ^ uVar17;
    *(uint *)((longlong)__return_storage_ptr__->M[1] + 0xc) = uVar11 ^ uVar19;
    __return_storage_ptr__->M[1][2] =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar7,
                          SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0) ^ uVar6)
    ;
    dVar1 = (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
    __return_storage_ptr__->M[2][0] =
         (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
    __return_storage_ptr__->M[2][1] = dVar1;
    uVar14 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
    uVar15 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20);
    goto LAB_14904c506;
  default:
    __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    __return_storage_ptr__->M[0][1] = dVar1;
    dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
    dVar1 = UE::Math::TMatrix<double>::Identity.M[1][0];
    __return_storage_ptr__->M[0][2] = dVar2;
    __return_storage_ptr__->M[0][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[1][3];
    dVar2 = UE::Math::TMatrix<double>::Identity.M[1][2];
    __return_storage_ptr__->M[1][0] = dVar1;
    __return_storage_ptr__->M[1][1] = dVar4;
    dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
    dVar1 = UE::Math::TMatrix<double>::Identity.M[2][0];
    __return_storage_ptr__->M[1][2] = dVar2;
    __return_storage_ptr__->M[1][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[2][3];
    dVar2 = UE::Math::TMatrix<double>::Identity.M[2][2];
    __return_storage_ptr__->M[2][0] = dVar1;
    __return_storage_ptr__->M[2][1] = dVar4;
    dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
    dVar1 = UE::Math::TMatrix<double>::Identity.M[3][0];
    __return_storage_ptr__->M[2][2] = dVar2;
    __return_storage_ptr__->M[2][3] = dVar3;
    dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
    dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
    __return_storage_ptr__->M[3][0] = dVar1;
    __return_storage_ptr__->M[3][1] = dVar4;
    __return_storage_ptr__->M[3][2] = dVar2;
    __return_storage_ptr__->M[3][3] = dVar3;
    return __return_storage_ptr__;
  }
  dVar1 = (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
  __return_storage_ptr__->M[2][0] =
       (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
  __return_storage_ptr__->M[2][1] = dVar1;
  uVar14 = SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
  uVar15 = (undefined4)((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20)
  ;
LAB_14904c506:
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[2][2] = (double)CONCAT44(uVar15,uVar14);
  __return_storage_ptr__->M[3][0] = (double)uVar8;
  __return_storage_ptr__->M[3][1] = (double)uVar9;
  __return_storage_ptr__->M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_14904c523:
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  return __return_storage_ptr__;
}

// PostLoad @ 14905e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UNiagaraBakerSettings::PostLoad(UNiagaraBakerSettings *this)

{
  UObject *pUVar1;
  undefined1 *puVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  undefined8 uVar16;
  UPackage *this_00;
  FString *pFVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FName *this_01;
  longlong lVar22;
  int *piVar24;
  TRotator<double> *pTVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStackY_198 [32];
  byte local_148 [8];
  longlong local_140;
  int local_138;
  UObject *local_130;
  uint local_128;
  int local_124;
  int iStack_120;
  int local_11c;
  int iStack_118;
  undefined1 local_110 [24];
  FGuid local_f8;
  FString local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  ulonglong uVar23;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UObject::PostLoad((UObject *)this);
  local_f8 = FNiagaraCustomVersion::GUID;
  local_138 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_f8);
  if (0 < (this->OutputTextures_DEPRECATED).ArrayNum) {
    piVar24 = &(this->Outputs).ArrayMax;
    (this->Outputs).ArrayNum = 0;
    if (*piVar24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Outputs).AllocatorInstance,0,piVar24);
    }
    local_128 = (this->OutputTextures_DEPRECATED).ArrayNum;
    uVar13 = (ulonglong)(int)local_128;
    this_01 = (FName *)(this->OutputTextures_DEPRECATED).AllocatorInstance.Data;
    local_110._16_8_ = this_01 + uVar13 * 8;
    while( true ) {
      uVar16 = local_110._16_8_;
      if ((this->OutputTextures_DEPRECATED).ArrayNum != (int)uVar13) {
        local_148[0] = 0;
        `TCheckedPointerIterator<FNiagaraBakerTextureSettings,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_148);
      }
      if (this_01 == (FName *)uVar16) break;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar14 = UNiagaraBakerOutputTexture2D::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar14);
      local_d8._8_8_ = this;
      pUVar15 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar18 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar18 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      ::FString::operator=((FString *)&pUVar15[1].field_0x10,(FString *)(this_01 + 1));
      uVar21 = this_01[3].Number;
      *(uint *)&pUVar15[1].field_0x20 = this_01[3].ComparisonIndex.Value;
      *(uint *)&pUVar15[1].field_0x24 = uVar21;
      if ((this_01[4].ComparisonIndex.Value & 1) == 0) {
        local_11c = (int)this_01[5].Number / (this->FramesPerDimension).field0_0x0._s_0.X;
        iStack_118 = (int)this_01[6].ComparisonIndex.Value /
                     (this->FramesPerDimension).field0_0x0._s_0.Y;
        *(ulonglong *)&pUVar15[2].field_0x4 = CONCAT44(iStack_118,local_11c);
        uVar16 = *(undefined8 *)&this_01[5].Number;
      }
      else {
        *(undefined8 *)&pUVar15[2].field_0x4 = *(undefined8 *)&this_01[4].Number;
        local_124 = this_01[4].Number * (this->FramesPerDimension).field0_0x0._s_0.X;
        iStack_120 = this_01[5].ComparisonIndex.Value * (this->FramesPerDimension).field0_0x0._s_0.Y
        ;
        uVar16 = CONCAT44(iStack_120,local_124);
      }
      *(undefined8 *)&pUVar15[2].field_0xc = uVar16;
      if (*this_01 != (FName)0x0) {
        ::FName::ToString(this_01,(FString *)local_110);
        uVar16 = local_110._0_8_;
        iVar19 = (int)local_110._8_8_;
        iVar12 = iVar19 + -1;
        if (iVar19 == 0) {
          iVar12 = 0;
        }
        if ((0 < iVar12) && (pUVar1 = pUVar15 + 1, pUVar1 != (UObject *)local_110)) {
          *(int *)&pUVar15[1].field_0x8 = iVar19;
          if ((iVar19 == 0) && (*(int *)&pUVar15[1].field_0xc == 0)) {
            *(undefined4 *)&pUVar15[1].field_0xc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar19,*(int *)&pUVar15[1].field_0xc,(ForAnyElementType *)pUVar1,iVar19,
                       (int *)&pUVar15[1].field_0xc);
            if (iVar19 != 0) {
              memcpy(*(FScriptContainerElement **)pUVar1,(void *)uVar16,(longlong)iVar19 * 2);
            }
          }
        }
        if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_110._0_8_);
        }
      }
      piVar24 = &(this->Outputs).ArrayMax;
      if (this_01[7] != (FName)0x0) {
        this_00 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01[7]);
        pFVar17 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this_00,&local_e8,(UObject *)0x0);
        puVar2 = &pUVar15[2].field_0x20;
        if ((FString *)puVar2 != pFVar17) {
          if (*(void **)puVar2 != (void *)0x0) {
            FMemory::Free(*(void **)puVar2);
          }
          *(FScriptContainerElement **)puVar2 = (pFVar17->Data).AllocatorInstance.Data;
          (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pUVar15 + 3) = (pFVar17->Data).ArrayNum;
          *(int *)&pUVar15[3].field_0x4 = (pFVar17->Data).ArrayMax;
          (pFVar17->Data).ArrayNum = 0;
          (pFVar17->Data).ArrayMax = 0;
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      local_130 = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      pFVar6 = (this->Outputs).AllocatorInstance.Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 < pFVar6 + (longlong)*piVar24 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (this->Outputs).ArrayNum;
      if (iVar12 == *piVar24) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->Outputs).AllocatorInstance,piVar24);
      }
      (this->Outputs).ArrayNum = iVar12 + 1;
      *(UObject **)((this->Outputs).AllocatorInstance.Data + (longlong)iVar12 * 8) = local_130;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_130);
      }
      uVar13 = (ulonglong)local_128;
      this_01 = this_01 + 8;
    }
    DestructItems<FNiagaraBakerTextureSettings,int>
              ((FNiagaraBakerTextureSettings *)
               (this->OutputTextures_DEPRECATED).AllocatorInstance.Data,
               (this->OutputTextures_DEPRECATED).ArrayNum);
    piVar24 = &(this->OutputTextures_DEPRECATED).ArrayMax;
    (this->OutputTextures_DEPRECATED).ArrayNum = 0;
    if (*piVar24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->OutputTextures_DEPRECATED).AllocatorInstance,0,piVar24);
    }
  }
  lVar22 = 0;
  if (local_138 < 0x48) {
    pTVar25 = this->CameraViewportRotation_DEPRECATED;
    iVar12 = 0;
    do {
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(int *)((this->CameraSettings).AllocatorInstance.Data + lVar22) = iVar12;
      dVar4 = (((TVector<double> *)(pTVar25 + -7))->field0_0x0)._s_0.Z;
      dVar9 = (((TVector<double> *)(pTVar25 + -7))->field0_0x0)._s_0.X;
      dVar10 = (((TVector<double> *)(pTVar25 + -7))->field0_0x0)._s_0.Y;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->CameraSettings).AllocatorInstance.Data;
      pFVar6 = pFVar7 + lVar22 + 8;
      *(double *)pFVar6 = dVar9;
      *(double *)(pFVar6 + 8) = dVar10;
      *(double *)(pFVar7 + lVar22 + 0x18) = dVar4;
      dVar4 = pTVar25->Roll;
      dVar9 = pTVar25->Pitch;
      dVar10 = pTVar25->Yaw;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->CameraSettings).AllocatorInstance.Data;
      pFVar6 = pFVar7 + lVar22 + 0x20;
      *(double *)pFVar6 = dVar9;
      *(double *)(pFVar6 + 8) = dVar10;
      *(double *)(pFVar7 + lVar22 + 0x30) = dVar4;
      fVar3 = this->CameraOrbitDistance_DEPRECATED;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((this->CameraSettings).AllocatorInstance.Data + lVar22 + 0x38) = fVar3;
      fVar3 = this->CameraFOV_DEPRECATED;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((this->CameraSettings).AllocatorInstance.Data + lVar22 + 0x3c) = fVar3;
      fVar3 = this->CameraOrthoWidth_DEPRECATED;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)((this->CameraSettings).AllocatorInstance.Data + lVar22 + 0x40) = fVar3;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (this->CameraSettings).AllocatorInstance.Data[lVar22 + 0x44] =
           this->bUseCameraAspectRatio_DEPRECATED;
      fVar3 = this->CameraAspectRatio_DEPRECATED;
      if (((this->CameraSettings).ArrayNum <= iVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = iVar12 + 1;
      pTVar25 = pTVar25 + 1;
      *(float *)((this->CameraSettings).AllocatorInstance.Data + lVar22 + 0x48) = fVar3;
      lVar22 = lVar22 + 0x50;
    } while (iVar12 < 7);
    this->CurrentCameraIndex = this->CameraViewportMode_DEPRECATED;
  }
  pFVar6 = (this->Outputs).AllocatorInstance.Data;
  local_140 = 0;
  if (((pFVar6 <= (FScriptContainerElement *)&local_140) &&
      ((FScriptContainerElement *)&local_140 < pFVar6 + (longlong)(this->Outputs).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = 0;
  iVar12 = (this->Outputs).ArrayNum;
  if (iVar12 != 0) {
    pFVar6 = (this->Outputs).AllocatorInstance.Data;
    local_148[0] = *(longlong *)pFVar6 != local_140;
    lVar22 = local_140;
    uVar23 = uVar13;
    uVar27 = uVar13;
    do {
      uVar20 = (uint)uVar23;
      uVar21 = uVar20;
      do {
        uVar13 = uVar13 + 1;
        uVar21 = uVar21 + 1;
        uVar23 = (ulonglong)uVar21;
        if ((longlong)iVar12 <= (longlong)uVar13) break;
      } while ((bool)local_148[0] == (*(longlong *)(pFVar6 + uVar13 * 8) != lVar22));
      if (local_148[0] != 0) {
        uVar26 = (uint)uVar27;
        if (uVar26 != uVar20) {
          memmove(pFVar6 + (longlong)(int)uVar26 * 8,pFVar6 + (longlong)(int)uVar20 * 8,
                  (longlong)(int)(uVar21 - uVar20) << 3);
          lVar22 = local_140;
        }
        uVar27 = (ulonglong)(uVar26 + (uVar21 - uVar20));
      }
      local_148[0] = local_148[0] ^ 1;
    } while ((longlong)uVar13 < (longlong)iVar12);
    (this->Outputs).ArrayNum = (int)uVar27;
  }
  return;
}

// StaticRegisterNativesUNiagaraBakerSettings @ 14906a4b0

void __cdecl UNiagaraBakerSettings::StaticRegisterNativesUNiagaraBakerSettings(void)

{
  return;
}

