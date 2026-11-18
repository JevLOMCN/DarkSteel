// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 1473016f0

UClass * __cdecl UParticleSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystem",
               &Z_Registration_Info_UClass_UParticleSystem.InnerSingleton,
               StaticRegisterNativesUParticleSystem,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UParticleSystem>,InternalVTableHelperCtorCaller<UParticleSystem>
               ,aFStackX_8,UFXSystemAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystem.InnerSingleton;
}

// UParticleSystem @ 14815ef60

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystem * __thiscall
UParticleSystem::UParticleSystem(UParticleSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleSystem__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  (this->PreviewComponent).field0_0x0.DebugPtr = (UParticleSystemComponent *)0x0;
  (this->CurveEdSetup).field0_0x0.DebugPtr = (UInterpCurveEdSetup *)0x0;
  (this->LODDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODDistances).ArrayNum = 0;
  (this->LODDistances).ArrayMax = 0;
  (this->LODSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODSettings).ArrayNum = 0;
  (this->LODSettings).ArrayMax = 0;
  (this->FixedRelativeBoundingBox).IsValid = '\0';
  (this->CustomOcclusionBounds).IsValid = '\0';
  (this->SoloTracking).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoloTracking).ArrayNum = 0;
  (this->SoloTracking).ArrayMax = 0;
  (this->NamedMaterialSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedMaterialSlots).ArrayNum = 0;
  (this->NamedMaterialSlots).ArrayMax = 0;
  return this;
}

// UParticleSystem @ 14815f000

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystem * __thiscall
UParticleSystem::UParticleSystem(UParticleSystem *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->bAnyEmitterLoopsForever = '\0';
  this->bShouldManageSignificance = '\0';
  this->bWillBecomeZombie = '\0';
  this->bIsImmortal = '\0';
  this->_padding_ = 0x20;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  (this->PreviewComponent).field0_0x0.DebugPtr = (UParticleSystemComponent *)0x0;
  (this->CurveEdSetup).field0_0x0.DebugPtr = (UInterpCurveEdSetup *)0x0;
  (this->LODDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODDistances).ArrayNum = 0;
  (this->LODDistances).ArrayMax = 0;
  (this->LODSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODSettings).ArrayNum = 0;
  (this->LODSettings).ArrayMax = 0;
  this->_padding_ = (longlong)&___7UParticleSystem__6B_;
  this->InsignificantReaction = Auto;
  this->OcclusionBoundsMethod = '\x01';
  (this->CustomOcclusionBounds).IsValid = '\0';
  (this->SoloTracking).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoloTracking).ArrayNum = 0;
  (this->SoloTracking).ArrayMax = 0;
  (this->NamedMaterialSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedMaterialSlots).ArrayNum = 0;
  (this->NamedMaterialSlots).ArrayMax = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->HighestSignificance = Critical;
  this->LowestSignificance = Low;
  this->UpdateTime_FPS = 60.0;
  this->UpdateTime_Delta = 0.016666668;
  this->WarmupTime = 0.0;
  this->WarmupTickRate = 0.0;
  (this->FixedRelativeBoundingBox).Min.field0_0x0._s_0.X = -1.0;
  (this->FixedRelativeBoundingBox).Min.field0_0x0._s_0.Y = -1.0;
  (this->FixedRelativeBoundingBox).Min.field0_0x0._s_0.Z = -1.0;
  (this->FixedRelativeBoundingBox).Max.field0_0x0._s_0.X = 1.0;
  (this->FixedRelativeBoundingBox).Max.field0_0x0._s_0.Y = 1.0;
  (this->FixedRelativeBoundingBox).Max.field0_0x0._s_0.Z = 1.0;
  this->ThumbnailImageOutOfDate = '\x01';
  (this->FixedRelativeBoundingBox).IsValid = '\x01';
  (this->LODMethod).Value = '\0';
  this->LODDistanceCheckTime = 0.25;
  (this->MacroUVPosition).field0_0x0._s_0.X = 0.0;
  (this->MacroUVPosition).field0_0x0._s_0.Y = 0.0;
  (this->MacroUVPosition).field0_0x0._s_0.Z = 0.0;
  puVar2 = &this->field_0xf5;
  this->bAllowManagedTicking = '\x01';
  this->bRegenerateLODDuplicate = '\0';
  this->bAutoDeactivate = '\x01';
  this->MacroUVRadius = 200.0;
  this->MinTimeBetweenTicks = 0;
  this->InsignificanceDelay = 0.0;
  this->MaxSignificanceLevel = Critical;
  return this;
}

// ~UParticleSystem @ 148160490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::~UParticleSystem(UParticleSystem *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  
  this->_padding_ = (longlong)&___7UParticleSystem__6B_;
  pFVar3 = (this->NamedMaterialSlots).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FLODSoloTrack,int>
            ((FLODSoloTrack *)(this->SoloTracking).AllocatorInstance.Data,
             (this->SoloTracking).ArrayNum);
  pFVar3 = (this->SoloTracking).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LODSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LODDistances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7UFXSystemAsset__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BuildEmitters @ 148167810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::BuildEmitters(UParticleSystem *this)

{
  UParticleEmitter *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = (longlong)(this->Emitters).ArrayNum;
  uVar6 = 0;
  if (0 < lVar5) {
    lVar4 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Emitters).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(UParticleEmitter **)((this->Emitters).AllocatorInstance.Data + lVar4 * 8);
      if (this_00 != (UParticleEmitter *)0x0) {
        UParticleEmitter::Build(this_00);
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar5);
  }
  return;
}

// CalculateMaxActiveParticleCounts @ 148168530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::CalculateMaxActiveParticleCounts(UParticleSystem *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  
  uVar7 = 0;
  bVar8 = true;
  if (0 < (this->Emitters).ArrayNum) {
    lVar9 = 0;
    bVar8 = true;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Emitters).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar1 = *(longlong **)((this->Emitters).AllocatorInstance.Data + lVar9);
      if ((plVar1 != (longlong *)0x0) && (cVar5 = (**(code **)(*plVar1 + 0x2d8))(), cVar5 == '\0'))
      {
        bVar8 = false;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (this->Emitters).ArrayNum);
  }
  return bVar8;
}

// CanBeClusterRoot @ 148168760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::CanBeClusterRoot(UParticleSystem *this)

{
  return true;
}

// CanBePooled @ 1481687a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::CanBePooled(UParticleSystem *this)

{
  return (int)this->_padding_ != 0;
}

// ComputeCanTickInAnyThread @ 14816a570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::ComputeCanTickInAnyThread(UParticleSystem *this)

{
  undefined1 *puVar1;
  UObjectBaseUtility *this_00;
  longlong lVar2;
  UObjectBaseUtility *this_01;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res8;
  uint local_res10;
  longlong local_res18;
  longlong local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (((bool)this->bIsElligibleForAsyncTickComputed) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsElligibleForAsyncTickComputed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                         ,0x535,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bIsElligibleForAsyncTick = '\x01';
  this->bIsElligibleForAsyncTickComputed = '\x01';
  local_res8 = 0;
  if (0 < (this->Emitters).ArrayNum) {
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)local_res8 < (this->Emitters).ArrayNum) {
        uVar8 = ~local_res8 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(UObjectBaseUtility **)((this->Emitters).AllocatorInstance.Data + local_res20);
      if ((this_00 != (UObjectBaseUtility *)0x0) &&
         (local_res10 = 0, 0 < *(int *)&this_00[1].field_0x20)) {
        local_res18 = 0;
        do {
          uVar8 = 0;
          if ((int)local_res10 < *(int *)&this_00[1].field_0x20) {
            uVar8 = ~local_res10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)(local_res18 + *(longlong *)&this_00[1].field_0x18);
          if ((lVar2 != 0) && (uVar8 = 0, 0 < *(int *)(lVar2 + 0x40))) {
            lVar9 = 0;
            do {
              uVar6 = 0;
              if ((int)uVar8 < *(int *)(lVar2 + 0x40)) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              this_01 = *(UObjectBaseUtility **)(lVar9 + *(longlong *)(lVar2 + 0x38));
              if ((this_01 != (UObjectBaseUtility *)0x0) &&
                 (cVar5 = (**(code **)(*(longlong *)this_01 + 0x390))(this_01), cVar5 == '\0')) {
                this->bIsElligibleForAsyncTick = '\0';
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  pwVar7 = FCommandLine::Get();
                  bLogThreadedParticleTicking = FParse::Param(pwVar7,L"LogThreadedParticleTicking");
                  _Init_thread_footer(&::_TSS0);
                }
                if (bLogThreadedParticleTicking == false) {
                  return;
                }
                if (3 < (byte)LogParticles._0_1_) {
                  UObjectBaseUtility::GetFullName(this_00,&local_68,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName(this_01,&local_78,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this,&local_88,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                  ;
                  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88.Data.AllocatorInstance.Data);
                  }
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  }
                }
              }
              uVar8 = uVar8 + 1;
              lVar9 = lVar9 + 8;
            } while ((int)uVar8 < *(int *)(lVar2 + 0x40));
          }
          local_res10 = local_res10 + 1;
          local_res18 = local_res18 + 8;
        } while ((int)local_res10 < *(int *)&this_00[1].field_0x20);
      }
      local_res8 = local_res8 + 1;
      local_res20 = local_res20 + 8;
    } while ((int)local_res8 < (this->Emitters).ArrayNum);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar7 = FCommandLine::Get();
    bLogThreadedParticleTicking = FParse::Param(pwVar7,L"LogThreadedParticleTicking");
    _Init_thread_footer(&::_TSS0);
  }
  if (((bLogThreadedParticleTicking != false) && (this->bIsElligibleForAsyncTick != '\0')) &&
     (3 < (byte)LogParticles._0_1_)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ContainsEmitterType @ 14816b730

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::ContainsEmitterType(UParticleSystem *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (this->Emitters).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < (this->Emitters).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)((this->Emitters).AllocatorInstance.Data + uVar9);
      if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x48) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((**(longlong **)(lVar2 + 0x40) != 0) &&
           (lVar2 = *(longlong *)(**(longlong **)(lVar2 + 0x40) + 0x48), lVar2 != 0)) {
          lVar2 = *(longlong *)(lVar2 + 0x10);
          iVar1 = (int)param_1->_padding_;
          if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
              &param_1->_padding_)) {
            return true;
          }
        }
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar7 + 1) < (this->Emitters).ArrayNum);
  }
  return false;
}

// DoesAnyEmitterHaveMotionBlur @ 148170fb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::DoesAnyEmitterHaveMotionBlur(UParticleSystem *this,int param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UParticleModuleTypeDataBase *pUVar4;
  UParticleModuleRequired *pUVar5;
  TConsoleVariableData<bool> *pTVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  UParticleLODLevel *pUVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  pFVar12 = (this->Emitters).AllocatorInstance.Data;
  iVar3 = (this->Emitters).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->Emitters).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UParticleEmitter>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar2) {
      return false;
    }
    if ((*(UParticleEmitter **)pFVar12 != (UParticleEmitter *)0x0) &&
       (pUVar10 = UParticleEmitter::GetLODLevel(*(UParticleEmitter **)pFVar12,param_1),
       pUVar10 != (UParticleLODLevel *)0x0)) {
      pUVar4 = (pUVar10->TypeDataModule).field0_0x0.DebugPtr;
      if ((pUVar4 != (UParticleModuleTypeDataBase *)0x0) &&
         (cVar7 = (**(code **)(*(longlong *)pUVar4 + 0x3e0))(), cVar7 != '\0')) {
        return true;
      }
      pTVar6 = CVarFxCascadeUseVelocityForMotionBlur.Ref;
      pUVar5 = (pUVar10->RequiredModule).field0_0x0.DebugPtr;
      if (pUVar5 != (UParticleModuleRequired *)0x0) {
        if (pUVar5->bOverrideUseVelocityForMotionBlur == '\0') {
          bVar9 = IsInParallelGameThread();
          if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
          }
          bVar8 = pTVar6->ShadowedValue[lVar11];
        }
        else {
          bVar8 = pUVar5->bUseVelocityForMotionBlur;
        }
        if (bVar8 != 0) {
          return true;
        }
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetAssetRegistryTags @ 148176ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UParticleSystem::GetAssetRegistryTags
          (UParticleSystem *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UParticleSystem *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UParticleSystem **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UParticleSystem **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UParticleSystem **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 148176ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystem::GetAssetRegistryTags(UParticleSystem *this,FAssetRegistryTagsContext param_1)

{
  longlong *plVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  UParticleEmitter *this_00;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ForAnyElementType _Src;
  FAssetRegistryTagsContextData *this_01;
  bool bVar8;
  FName *pFVar9;
  FString *pFVar10;
  UClass *pUVar11;
  FAssetRegistryTagsContext FVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_408 [32];
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6 [2];
  uint local_3c4;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FAssetRegistryTag local_2e0;
  FScriptContainerElement *local_2c0;
  FAssetRegistryTagsContextData *local_2b8;
  FAssetRegistryTag local_2b0;
  FAssetRegistryTag local_290;
  FAssetRegistryTag local_270;
  FAssetRegistryTag local_250;
  FAssetRegistryTag local_230;
  FAssetRegistryTag local_210;
  FAssetRegistryTag local_1f0;
  FAssetRegistryTag local_1d0;
  FAssetRegistryTag local_1b0;
  FAssetRegistryTag local_190;
  FAssetRegistryTag local_170;
  FAssetRegistryTag local_150;
  FAssetRegistryTag local_130;
  FAssetRegistryTag local_110;
  FString local_f0;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FAssetRegistryTagsContext local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FName local_58;
  int local_50 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_3c4 = 0;
  local_2b8 = param_1.Data;
  bVar8 = HasGPUEmitter(this);
  pwVar14 = L"False";
  if (bVar8) {
    pwVar14 = L"True";
  }
  ::FString::FString(&local_390,pwVar14);
  pFVar9 = ::FName::FName(&local_80,"HasGPUEmitter");
  local_1d0.Name = *pFVar9;
  local_1d0.Value.Data.AllocatorInstance.Data = local_390.Data.AllocatorInstance.Data;
  local_1d0.Value.Data.ArrayNum = local_390.Data.ArrayNum;
  local_1d0.Value.Data.ArrayMax = local_390.Data.ArrayMax;
  local_390.Data.ArrayNum = 0;
  local_390.Data.ArrayMax = 0;
  local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Type = TT_Alphabetical;
  local_1d0.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1d0);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  bVar8 = this->bUseFixedRelativeBoundingBox == '\0';
  if (bVar8) {
    pFVar10 = ::FString::FString(&local_68,L"None");
  }
  else {
    ::FString::PrintfImpl(&local_f0,L"%.2f");
    pFVar10 = &local_f0;
  }
  pFVar9 = ::FName::FName(&local_e0,"FixedBoundsSize");
  local_1b0.Name = *pFVar9;
  local_1b0.Value.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Value.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_1b0.Value.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_1b0.Type = TT_Numerical;
  local_1b0.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_1b0);
  if ((bVar8) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((!bVar8) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_380,L"%d");
  pFVar9 = ::FName::FName(&local_d8,"NumEmitters");
  local_190.Name = *pFVar9;
  local_190.Value.Data.AllocatorInstance.Data = local_380.Data.AllocatorInstance.Data;
  local_190.Value.Data.ArrayNum = local_380.Data.ArrayNum;
  local_190.Value.Data.ArrayMax = local_380.Data.ArrayMax;
  local_380.Data.ArrayNum = 0;
  local_380.Data.ArrayMax = 0;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.Type = TT_Numerical;
  local_190.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_190);
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_370,L"%d");
  pFVar9 = ::FName::FName(&local_d0,"NumLODs");
  local_170.Name = *pFVar9;
  local_170.Value.Data.AllocatorInstance.Data = local_370.Data.AllocatorInstance.Data;
  local_170.Value.Data.ArrayNum = local_370.Data.ArrayNum;
  local_170.Value.Data.ArrayMax = local_370.Data.ArrayMax;
  local_370.Data.ArrayNum = 0;
  local_370.Data.ArrayMax = 0;
  local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Type = TT_Numerical;
  local_170.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_170);
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_360,L"%f");
  pFVar9 = ::FName::FName(&local_c8,"WarmupTime");
  local_150.Name = *pFVar9;
  local_150.Value.Data.AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
  local_150.Value.Data.ArrayNum = local_360.Data.ArrayNum;
  local_150.Value.Data.ArrayMax = local_360.Data.ArrayMax;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Type = TT_Numerical;
  local_150.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_150);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2f0,L"Unknown");
  uVar2 = (this->LODMethod).Value;
  if (uVar2 == '\0') {
    pwVar14 = L"Automatic";
  }
  else if (uVar2 == '\x01') {
    pwVar14 = L"DirectSet";
  }
  else {
    if (uVar2 != '\x02') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                         ,0x2db,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_1481772d2;
    }
    pwVar14 = L"Activate Automatic";
  }
  ::FString::operator=(&local_2f0,pwVar14);
LAB_1481772d2:
  pFVar9 = ::FName::FName(&local_c0,"LODMethod");
  _Src.Data = local_2f0.Data.AllocatorInstance.Data;
  local_2e0.Name = *pFVar9;
  local_2e0.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.Value.Data.ArrayNum = local_2f0.Data.ArrayNum;
  if (local_2f0.Data.ArrayNum == 0) {
    local_2e0.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2f0.Data.ArrayNum,0,(ForAnyElementType *)&local_2e0.Value,
               local_2f0.Data.ArrayNum,&local_2e0.Value.Data.ArrayMax);
    memcpy(local_2e0.Value.Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_2f0.Data.ArrayNum * 2);
  }
  local_2e0.Type = TT_Alphabetical;
  local_2e0.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_2e0);
  local_3c4 = (this->Emitters).ArrayNum;
  uVar13 = (ulonglong)(int)local_3c4;
  pFVar18 = (this->Emitters).AllocatorInstance.Data;
  local_2c0 = pFVar18 + uVar13 * 8;
  while( true ) {
    pFVar16 = local_2c0;
    if ((this->Emitters).ArrayNum != (int)uVar13) {
      local_3c8 = 0;
      `TCheckedPointerIterator<TObjectPtr<UParticleEmitter>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3c8);
    }
    if (pFVar18 == pFVar16) break;
    this_00 = *(UParticleEmitter **)pFVar18;
    if (((this_00 != (UParticleEmitter *)0x0) &&
        (bVar8 = UParticleEmitter::HasAnyEnabledLODs(this_00), bVar8)) &&
       (0 < (this_00->LODLevels).ArrayNum)) {
      if (((this_00->LODLevels).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)(this_00->LODLevels).AllocatorInstance.Data;
      if (lVar5 != 0) {
        plVar15 = *(longlong **)(lVar5 + 0x38);
        iVar3 = *(int *)(lVar5 + 0x40);
        plVar1 = plVar15 + iVar3;
        while( true ) {
          if (*(int *)(lVar5 + 0x40) != iVar3) {
            local_3c7 = 0;
            `TCheckedPointerIterator<TObjectPtr<UParticleModule>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3c7);
          }
          if (plVar15 == plVar1) break;
          lVar6 = *plVar15;
          if (*(char *)(lVar6 + 0x28) < '\0') {
            pUVar11 = Z_Construct_UClass_UParticleModuleCollision_NoRegister();
            lVar6 = *(longlong *)(lVar6 + 0x10);
            iVar4 = (int)pUVar11->_padding_;
            if ((iVar4 <= *(int *)(lVar6 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar11->_padding_)) {
              bVar8 = true;
              goto LAB_14817746e;
            }
          }
          plVar15 = plVar15 + 1;
        }
      }
    }
    uVar13 = (ulonglong)local_3c4;
    pFVar18 = pFVar18 + 8;
  }
  bVar8 = false;
LAB_14817746e:
  pwVar14 = L"False";
  pwVar17 = L"True";
  if (bVar8) {
    pwVar14 = L"True";
  }
  ::FString::FString(&local_3b0,pwVar14);
  pFVar9 = ::FName::FName(&local_b8,"CPUCollision");
  this_01 = local_2b8;
  local_130.Name = *pFVar9;
  local_130.Value.Data.AllocatorInstance.Data = local_3b0.Data.AllocatorInstance.Data;
  local_130.Value.Data.ArrayNum = local_3b0.Data.ArrayNum;
  local_130.Value.Data.ArrayMax = local_3b0.Data.ArrayMax;
  local_3b0.Data.ArrayNum = 0;
  local_3b0.Data.ArrayMax = 0;
  local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Type = TT_Alphabetical;
  local_130.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)local_2b8,&local_130);
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  pwVar14 = L"False";
  if (this->bAnyEmitterLoopsForever != 0) {
    pwVar14 = L"True";
  }
  ::FString::FString(&local_3a0,pwVar14);
  pFVar9 = ::FName::FName(&local_58,"Looping");
  local_110.Name = *pFVar9;
  local_110.Value.Data.AllocatorInstance.Data = local_3a0.Data.AllocatorInstance.Data;
  local_110.Value.Data.ArrayNum = local_3a0.Data.ArrayNum;
  local_110.Value.Data.ArrayMax = local_3a0.Data.ArrayMax;
  local_3a0.Data.ArrayNum = 0;
  local_3a0.Data.ArrayMax = 0;
  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Type = TT_Alphabetical;
  local_110.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_110);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  pwVar14 = L"False";
  if (this->bIsImmortal != '\0') {
    pwVar14 = L"True";
  }
  ::FString::FString(&local_300,pwVar14);
  pFVar9 = ::FName::FName(&local_70,"Immortal");
  local_1f0.Name = *pFVar9;
  local_1f0.Value.Data.AllocatorInstance.Data = local_300.Data.AllocatorInstance.Data;
  local_1f0.Value.Data.ArrayNum = local_300.Data.ArrayNum;
  local_1f0.Value.Data.ArrayMax = local_300.Data.ArrayMax;
  local_300.Data.ArrayNum = 0;
  local_300.Data.ArrayMax = 0;
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.Type = TT_Alphabetical;
  local_1f0.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_1f0);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  pwVar14 = L"False";
  if (this->bWillBecomeZombie != '\0') {
    pwVar14 = L"True";
  }
  ::FString::FString(&local_310,pwVar14);
  pFVar9 = ::FName::FName(&local_78,"Becomes Zombie");
  local_2b0.Name = *pFVar9;
  local_2b0.Value.Data.AllocatorInstance.Data = local_310.Data.AllocatorInstance.Data;
  local_2b0.Value.Data.ArrayNum = local_310.Data.ArrayNum;
  local_2b0.Value.Data.ArrayMax = local_310.Data.ArrayMax;
  local_310.Data.ArrayNum = 0;
  local_310.Data.ArrayMax = 0;
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Type = TT_Alphabetical;
  local_2b0.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_2b0);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if ((this->OcclusionBoundsMethod).Value == '\0') {
    pwVar17 = L"False";
  }
  ::FString::FString(&local_320,pwVar17);
  pFVar9 = ::FName::FName(&local_88,"CanBeOccluded");
  local_290.Name = *pFVar9;
  local_290.Value.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
  local_290.Value.Data.ArrayNum = local_320.Data.ArrayNum;
  local_290.Value.Data.ArrayMax = local_320.Data.ArrayMax;
  local_320.Data.ArrayNum = 0;
  local_320.Data.ArrayMax = 0;
  local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.Type = TT_Alphabetical;
  local_290.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_290);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  pFVar16 = (this->Emitters).AllocatorInstance.Data;
  iVar3 = (this->Emitters).ArrayNum;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  pFVar18 = pFVar16 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UParticleEmitter>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_3c6);
    }
    if (pFVar16 == pFVar18) break;
    if (*(longlong *)pFVar16 != 0) {
      local_50[*(byte *)(*(longlong *)pFVar16 + 0x35)] =
           local_50[*(byte *)(*(longlong *)pFVar16 + 0x35)] + 1;
    }
    pFVar16 = pFVar16 + 8;
  }
  ::FString::PrintfImpl(&local_330,L"%u");
  pFVar9 = ::FName::FName(&local_98,"Critical Emitters");
  local_270.Name = *pFVar9;
  local_270.Value.Data.AllocatorInstance.Data = local_330.Data.AllocatorInstance.Data;
  local_270.Value.Data.ArrayNum = local_330.Data.ArrayNum;
  local_270.Value.Data.ArrayMax = local_330.Data.ArrayMax;
  local_330.Data.ArrayNum = 0;
  local_330.Data.ArrayMax = 0;
  local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Type = TT_Numerical;
  local_270.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_270);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_3c0,L"%u");
  pFVar9 = ::FName::FName(&local_a0,"High Emitters");
  local_250.Name = *pFVar9;
  local_250.Value.Data.AllocatorInstance.Data = local_3c0.Data.AllocatorInstance.Data;
  local_250.Value.Data.ArrayNum = local_3c0.Data.ArrayNum;
  local_250.Value.Data.ArrayMax = local_3c0.Data.ArrayMax;
  local_3c0.Data.ArrayNum = 0;
  local_3c0.Data.ArrayMax = 0;
  local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Type = TT_Numerical;
  local_250.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_250);
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_340,L"%u");
  pFVar9 = ::FName::FName(&local_a8,"Medium Emitters");
  local_230.Name = *pFVar9;
  local_230.Value.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
  local_230.Value.Data.ArrayNum = local_340.Data.ArrayNum;
  local_230.Value.Data.ArrayMax = local_340.Data.ArrayMax;
  local_340.Data.ArrayNum = 0;
  local_340.Data.ArrayMax = 0;
  local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.Type = TT_Numerical;
  local_230.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_230);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_350,L"%u");
  pFVar9 = ::FName::FName(&local_b0,"Low Emitters");
  local_210.Name = *pFVar9;
  local_210.Value.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
  local_210.Value.Data.ArrayNum = local_350.Data.ArrayNum;
  local_210.Value.Data.ArrayMax = local_350.Data.ArrayMax;
  local_350.Data.ArrayNum = 0;
  local_350.Data.ArrayMax = 0;
  local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Type = TT_Numerical;
  local_210.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)this_01,&local_210);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  FVar12.Data = (FAssetRegistryTagsContextData *)
                FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_90,this_01);
  UObject::GetAssetRegistryTags((UObject *)this,FVar12);
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCurrentLODMethod @ 148178eb0

/* WARNING: Enum "Type": Some values do not have unique names */

ParticleSystemLODMethod __thiscall UParticleSystem::GetCurrentLODMethod(UParticleSystem *this)

{
  return (ParticleSystemLODMethod)(this->LODMethod).Value;
}

// GetLODDistance @ 14817a220

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UParticleSystem::GetLODDistance(UParticleSystem *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->LODDistances).ArrayNum <= param_1) {
    return __real_bf800000;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return *(float *)((this->LODDistances).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetLODLevelCount @ 14817a2c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystem::GetLODLevelCount(UParticleSystem *this)

{
  return (this->LODDistances).ArrayNum;
}

// GetParametersUtilized @ 14817b360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystem::GetParametersUtilized
          (UParticleSystem *this,
          TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  UParticleEmitter *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  longlong local_res8;
  
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  uVar5 = 0;
  if (0 < (this->Emitters).ArrayNum) {
    local_res8 = 0;
    do {
      uVar3 = param_1->ArrayNum;
      if (uVar3 == param_1->ArrayMax) {
        uVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar3 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      *(undefined8 *)pFVar4 = 0;
      *(undefined8 *)(pFVar4 + 8) = 0;
      if ((uVar3 != uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckIndex == EmitterIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                             ,0x33f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = param_2->ArrayNum;
      if (uVar3 == param_2->ArrayMax) {
        uVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = uVar3 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      *(undefined8 *)pFVar4 = 0;
      *(undefined8 *)(pFVar4 + 8) = 0;
      if ((uVar3 != uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckIndex == EmitterIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                             ,0x341,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = ~uVar5 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar5 < (this->Emitters).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(UParticleEmitter **)((this->Emitters).AllocatorInstance.Data + local_res8);
      if (this_00 != (UParticleEmitter *)0x0) {
        uVar3 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar3 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UParticleEmitter::GetParametersUtilized
                  (this_00,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                           ((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10),
                   (TArray<FString,TSizedDefaultAllocator<32>_> *)
                   (pFVar4 + (longlong)(int)uVar5 * 0x10));
      }
      local_res8 = local_res8 + 8;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->Emitters).ArrayNum);
  }
  return;
}

// GetPrivateStaticClass @ 14817d1a0

UClass * __cdecl UParticleSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSystem",
               &Z_Registration_Info_UClass_UParticleSystem.InnerSingleton,
               StaticRegisterNativesUParticleSystem,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UParticleSystem>,InternalVTableHelperCtorCaller<UParticleSystem>
               ,local_res8,UFXSystemAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSystem.InnerSingleton;
}

// HasGPUEmitter @ 148181720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::HasGPUEmitter(UParticleSystem *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (this->Emitters).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (this->Emitters).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(longlong *)((this->Emitters).AllocatorInstance.Data + uVar10) != 0) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Emitters).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar2 = *(longlong *)((this->Emitters).AllocatorInstance.Data + uVar10);
        if ((*(int *)(lVar2 + 0x48) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar2 = **(longlong **)(lVar2 + 0x40);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) {
          pUVar7 = Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
          lVar2 = *(longlong *)(lVar2 + 0x10);
          iVar1 = (int)pUVar7->_padding_;
          if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar7->_padding_)) {
            return true;
          }
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < (this->Emitters).ArrayNum);
  }
  return false;
}

// IsPostLoadThreadSafe @ 148185c30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::IsPostLoadThreadSafe(UParticleSystem *this)

{
  return false;
}

// PostLoad @ 14818c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::PostLoad(UParticleSystem *this)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int iVar4;
  UObject *this_00;
  UObject *this_01;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  EParticleSignificanceLevel EVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  FObjectPtr_u_0 *this_02;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  longlong local_res20;
  FString local_78;
  FString local_68 [2];
  
  UObject::PostLoad((UObject *)this);
  iVar16 = (this->Emitters).ArrayNum;
  this->bHasPhysics = '\0';
  this->bAnyEmitterLoopsForever = '\0';
  this->bIsImmortal = '\0';
  this->bWillBecomeZombie = '\0';
  iVar16 = iVar16 + -1;
  this->HighestSignificance = Low;
  this->LowestSignificance = Critical;
  local_res10 = iVar16;
  if (-1 < iVar16) {
    lVar14 = (longlong)iVar16;
    lVar13 = lVar14 * 8;
    do {
      local_res10 = iVar16;
      local_res20 = lVar14;
      if (((this->Emitters).ArrayNum <= iVar16) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(UObject **)((this->Emitters).AllocatorInstance.Data + lVar13);
      if (this_00 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(this_00);
        pUVar8 = Z_Construct_UClass_UParticleSpriteEmitter_NoRegister();
        iVar4 = (int)pUVar8->_padding_;
        if (((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar4) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
             &pUVar8->_padding_)) || ((this_00[1].field_0xf & 0x40) == 0)) {
          if (*(int *)&this_00[1].field_0x20 == 0) {
            if (2 < (byte)LogParticles._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_00,local_68,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_78,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if ((*(int *)&this_00[1].field_0x20 < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_01 = (UObject *)**(undefined8 **)&this_00[1].field_0x18;
            if ((this_01 == (UObject *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LODLevel",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                                   ,0x17a,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            UObject::ConditionalPostLoad(this_01);
            local_res18 = *(uint *)&this_00[1].field_0x20;
            uVar10 = (ulonglong)(int)local_res18;
            plVar17 = *(longlong **)&this_00[1].field_0x18;
            plVar3 = plVar17 + uVar10;
            while( true ) {
              if (*(int *)&this_00[1].field_0x20 != (int)uVar10) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<TObjectPtr<UParticleLODLevel>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res8);
              }
              if (plVar17 == plVar3) break;
              lVar14 = *plVar17;
              if (lVar14 != 0) {
                uVar11 = 0;
                if (0 < *(int *)&this_01[1].field_0x18) {
                  lVar15 = 0;
                  do {
                    uVar12 = 0;
                    if ((int)uVar11 < *(int *)(lVar14 + 0x40)) {
                      uVar12 = ~uVar11 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    this_02 = (FObjectPtr_u_0 *)(*(longlong *)(lVar14 + 0x38) + lVar15);
                    if (this_02->Handle != (UObject *)0x0) {
                      pUVar8 = Z_Construct_UClass_UParticleModuleCollision_NoRegister();
                      bVar7 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar8);
                      if (((bVar7) && (this_02->Handle != (UObject *)0x0)) &&
                         ((*(byte *)(this_02->Handle + 8) & 1) != 0)) {
                        this->bHasPhysics = '\x01';
                        break;
                      }
                    }
                    uVar11 = uVar11 + 1;
                    lVar15 = lVar15 + 8;
                  } while ((int)uVar11 < *(int *)&this_01[1].field_0x18);
                }
                if ((((this_01[1].field_0x4 & 1) != 0) &&
                    (lVar14 = *(longlong *)&this_01[1].field_0x8, lVar14 != 0)) &&
                   (*(int *)(lVar14 + 0x114) == 0)) {
                  this->bAnyEmitterLoopsForever = '\x01';
                  plVar5 = *(longlong **)(this_01 + 2);
                  if ((plVar5 == (longlong *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("SpawnModule",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                                         ,0x19b,L""), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (*(float *)(lVar14 + 0x74) == 0.0) {
                    this->bIsImmortal = '\x01';
                    fVar18 = (float)(**(code **)(*plVar5 + 0x3a8))(plVar5);
                    if ((fVar18 == 0.0) && (this->bAutoDeactivate == '\0')) {
                      this->bWillBecomeZombie = '\x01';
                    }
                  }
                }
              }
              uVar10 = (ulonglong)local_res18;
              plVar17 = plVar17 + 1;
            }
            EVar9 = this_00[1].field_0xd;
            if (this->MaxSignificanceLevel < (byte)this_00[1].field_0xd) {
              EVar9 = this->MaxSignificanceLevel;
            }
            if (this->HighestSignificance < EVar9) {
              this->HighestSignificance = EVar9;
            }
            lVar14 = local_res20;
            iVar16 = local_res10;
            if (EVar9 < this->LowestSignificance) {
              this->LowestSignificance = EVar9;
            }
          }
        }
      }
      iVar16 = iVar16 + -1;
      lVar14 = lVar14 + -1;
      lVar13 = lVar13 + -8;
      local_res10 = iVar16;
      local_res20 = lVar14;
    } while (-1 < iVar16);
  }
  this->bShouldManageSignificance = '\0';
  this->field_0x17a = this->field_0x17a | this->LowestSignificance != Critical;
  if ((this->LODSettings).ArrayNum == 0) {
    if ((this->Emitters).ArrayNum < 1) {
      iVar16 = (this->LODSettings).ArrayNum;
      piVar1 = &(this->LODSettings).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&(this->LODSettings).AllocatorInstance,piVar1);
      }
      (this->LODSettings).ArrayNum = iVar16 + 1;
      if ((iVar16 + 1 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if (((this->Emitters).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar13 = *(longlong *)(this->Emitters).AllocatorInstance.Data;
      if (lVar13 != 0) {
        piVar1 = &(this->LODSettings).ArrayNum;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,*(int *)(lVar13 + 0x48),&(this->LODSettings).AllocatorInstance,piVar1,
                   &(this->LODSettings).ArrayMax);
        uVar11 = 0;
        if (0 < (this->LODSettings).ArrayNum) {
          do {
            uVar12 = 0;
            if ((int)uVar11 < *piVar1) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (this->LODSettings).ArrayNum);
        }
      }
    }
  }
  if (((this->LODDistances).ArrayNum == 0) && (0 < (this->Emitters).ArrayNum)) {
    if (((this->Emitters).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar13 = *(longlong *)(this->Emitters).AllocatorInstance.Data;
    if (lVar13 != 0) {
      piVar1 = &(this->LODDistances).ArrayNum;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,*(int *)(lVar13 + 0x48),&(this->LODDistances).AllocatorInstance,piVar1,
                 &(this->LODDistances).ArrayMax);
      fVar18 = __real_451c4000;
      if (0 < (this->LODDistances).ArrayNum) {
        lVar13 = 0;
        uVar11 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar11 < *piVar1) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = uVar11 + 1;
          *(float *)((this->LODDistances).AllocatorInstance.Data + lVar13) =
               (float)(int)uVar11 * fVar18;
          lVar13 = lVar13 + 4;
          uVar11 = uVar12;
        } while ((int)uVar12 < (this->LODDistances).ArrayNum);
      }
    }
  }
  if (GCascadePSOPrecachingTime == 1) {
    PrecachePSOs(this);
  }
  (this->FixedRelativeBoundingBox).IsValid = '\x01';
  return;
}

// PreSave @ 14818cec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::PreSave(UParticleSystem *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// PrecachePSOs @ 14818d2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UParticleSystem::PrecachePSOs(UParticleSystem *this)

{
  FVertexFactoryType **ppFVar1;
  FScriptContainerElement *pFVar2;
  UParticleLODLevel *this_00;
  UParticleModuleTypeDataBase *pUVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar9;
  ulonglong uVar10;
  ForElementType<FPSOPrecacheVertexFactoryData> _Dst;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStackY_288 [32];
  undefined1 local_238 [4];
  uint local_234;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_230;
  longlong local_220;
  FVertexFactoryType *local_218;
  FVertexFactoryType *pFStack_210;
  longlong local_208;
  UParticleSystem *local_200;
  ForElementType<FPSOPrecacheVertexFactoryData> local_1f8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_1f0;
  FMaterialInterfacePSOPrecacheParams local_1e0;
  uint local_198;
  ForElementType<FPSOPrecacheVertexFactoryData> local_190;
  int local_168;
  int local_164;
  TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_160;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (((char)this->_padding_ == '\0') &&
     ((local_200 = this, bVar7 = IsComponentPSOPrecachingEnabled(), bVar7 ||
      (bVar7 = IsResourcePSOPrecachingEnabled(), bVar7)))) {
    local_160.ArrayMax = 4;
    local_1e0.PSOPrecacheParams.field0_0x0 =
         (FPSOPrecacheParams_u_0)
         ((ulonglong)(local_1e0.PSOPrecacheParams.field0_0x0.Data._0_4_ & 0x8000) | 0x413c00);
    local_160.AllocatorInstance.SecondaryData =
         (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0;
    local_160.ArrayNum = 0;
    local_1e0.Priority = Medium;
    local_1e0.MaterialInterface = (UMaterialInterface *)0x0;
    local_1e0.VertexFactoryDataList.AllocatorInstance.SecondaryData =
         (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
    local_1e0.VertexFactoryDataList.ArrayNum = 0;
    local_1e0.VertexFactoryDataList.ArrayMax = 2;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.ArrayNum = 0;
    local_230.ArrayMax = 0;
    local_234 = 0;
    if (0 < (this->Emitters).ArrayNum) {
      local_1f8 = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      do {
        FVar9 = local_1f8;
        uVar15 = 0;
        if ((int)local_234 < (this->Emitters).ArrayNum) {
          uVar15 = ~local_234 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar14 = *(longlong *)((this->Emitters).AllocatorInstance.Data + (longlong)FVar9);
        local_208 = lVar14;
        if ((lVar14 != 0) && (0 < *(int *)(lVar14 + 0x48))) {
          local_220 = 0;
          uVar15 = 0;
          do {
            lVar13 = local_220;
            uVar8 = 0;
            if ((int)uVar15 < *(int *)(lVar14 + 0x48)) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = *(UParticleLODLevel **)(lVar13 + *(longlong *)(lVar14 + 0x40));
            if ((this_00 != (UParticleLODLevel *)0x0) && (this_00->bEnabled != 0)) {
              pUVar3 = (this_00->TypeDataModule).field0_0x0.DebugPtr;
              local_190.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
              local_168 = 0;
              local_164 = 2;
              if (pUVar3 == (UParticleModuleTypeDataBase *)0x0) {
                pFStack_210 = (FVertexFactoryType *)0x0;
                local_218 = &FParticleSpriteVertexFactory::StaticType;
                pFStack_210 = (FVertexFactoryType *)
                              FParticleSpriteVertexFactory::GetPSOPrecacheVertexDeclaration
                                        (0 < *(int *)(lVar14 + 0x160));
                FVar9 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_190;
                if (local_190.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
                  FVar9 = local_190.SecondaryData;
                }
                if ((ulonglong)FVar9 <= &local_218) {
                  FVar9 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_190;
                  if (local_190.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0)
                  {
                    FVar9 = local_190.SecondaryData;
                  }
                  if ((&local_218 <
                       (FVertexFactoryType **)((longlong)local_164 * 0x10 + (longlong)FVar9)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                if (local_168 == local_164) {
                  local_168 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                                        (0x810,&local_190,&local_164);
                }
                FVar9 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_190;
                if (local_190.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
                  FVar9 = local_190.SecondaryData;
                }
                ppFVar1 = (FVertexFactoryType **)((longlong)FVar9 + (longlong)local_168 * 0x10);
                local_168 = local_168 + 1;
                *ppFVar1 = local_218;
                ppFVar1[1] = pFStack_210;
                local_198 = 0;
              }
              else {
                (**(code **)(*(longlong *)pUVar3 + 1000))(pUVar3,lVar14);
              }
              iVar5 = local_230.ArrayMax;
              local_230._8_8_ = local_230._8_8_ & 0xffffffff00000000;
              if (iVar5 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,0,&local_230.AllocatorInstance,0,&local_230.ArrayMax);
              }
              UParticleLODLevel::GetUsedMaterials
                        (this_00,&local_230,&this->NamedMaterialSlots,&local_1f0);
              iVar5 = local_230.ArrayNum;
              uVar10 = (ulonglong)local_230.ArrayNum;
              pFVar2 = local_230.AllocatorInstance.Data + uVar10 * 8;
              FVar12.Data = local_230.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar10 != iVar5) {
                  local_238[0] = 0;
                  `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_238);
                }
                iVar6 = local_168;
                if (FVar12.Data == pFVar2) break;
                local_1e0.MaterialInterface = *(UMaterialInterface **)FVar12.Data;
                lVar14 = (longlong)local_168;
                local_1e0.VertexFactoryDataList.ArrayNum = local_168;
                FVar9 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_190;
                if (local_190.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
                  FVar9 = local_190.SecondaryData;
                }
                if ((local_168 == 0) && (local_1e0.VertexFactoryDataList.ArrayMax == 0)) {
                  local_1e0.VertexFactoryDataList.ArrayMax = 2;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                            (0x10,8,local_168,local_1e0.VertexFactoryDataList.ArrayMax,
                             &local_1e0.VertexFactoryDataList.AllocatorInstance,local_168,
                             &local_1e0.VertexFactoryDataList.ArrayMax);
                  _Dst = (ForElementType<FPSOPrecacheVertexFactoryData>)
                         &local_1e0.VertexFactoryDataList;
                  if (local_1e0.VertexFactoryDataList.AllocatorInstance.SecondaryData !=
                      (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
                    _Dst = local_1e0.VertexFactoryDataList.AllocatorInstance.SecondaryData;
                  }
                  if (iVar6 != 0) {
                    memcpy((void *)_Dst,(void *)FVar9,lVar14 << 4);
                  }
                }
                local_1e0.PSOPrecacheParams.field0_0x0 =
                     (FPSOPrecacheParams_u_0)
                     ((ulonglong)(local_198 & 0x3f) |
                     (ulonglong)local_1e0.PSOPrecacheParams.field0_0x0 & 0xffffffffffffffc0);
                AddMaterialInterfacePSOPrecacheParamsToList(&local_1e0,&local_160);
                uVar10 = local_230._8_8_ & 0xffffffff;
                FVar12.Data = FVar12.Data + 8;
              }
              lVar13 = local_220;
              lVar14 = local_208;
              this = local_200;
              if (local_190.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
                FMemory::Free((void *)local_190.SecondaryData);
                lVar13 = local_220;
                lVar14 = local_208;
                this = local_200;
              }
            }
            local_220 = lVar13 + 8;
            uVar15 = uVar15 + 1;
            FVar9 = local_1f8;
          } while ((int)uVar15 < *(int *)(lVar14 + 0x48));
        }
        local_234 = local_234 + 1;
        local_1f8 = (ForElementType<FPSOPrecacheVertexFactoryData>)((longlong)FVar9 + 8);
      } while ((int)local_234 < (this->Emitters).ArrayNum);
    }
    FVar12.Data = local_1f0.AllocatorInstance.Data;
    UFXSystemAsset::LaunchPSOPrecaching((UFXSystemAsset *)this,&local_160);
    if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.AllocatorInstance.Data);
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (local_1e0.VertexFactoryDataList.AllocatorInstance.SecondaryData !=
        (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FMemory::Free((void *)local_1e0.VertexFactoryDataList.AllocatorInstance.SecondaryData);
    }
    FVar11 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)&local_160;
    if (local_160.AllocatorInstance.SecondaryData !=
        (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FVar11 = local_160.AllocatorInstance.SecondaryData;
    }
    DestructItems<FMaterialInterfacePSOPrecacheParams,int>
              ((FMaterialInterfacePSOPrecacheParams *)FVar11,local_160.ArrayNum);
    if (local_160.AllocatorInstance.SecondaryData !=
        (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
      FMemory::Free((void *)local_160.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Serialize @ 148194ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::Serialize(UParticleSystem *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FParticleSystemCustomVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 148194b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::Serialize(UParticleSystem *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FParticleSystemCustomVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetCurrentLODMethod @ 148195c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystem::SetCurrentLODMethod(UParticleSystem *this,ParticleSystemLODMethod param_1)

{
  (this->LODMethod).Value = (uchar)param_1;
  return;
}

// SetDelay @ 148195c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::SetDelay(UParticleSystem *this,float param_1)

{
  this->Delay = param_1;
  return;
}

// SetLODDistance @ 1481963c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::SetLODDistance(UParticleSystem *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->LODDistances).ArrayNum <= param_1) {
    return false;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *(float *)((this->LODDistances).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  return true;
}

// SetupLODValidity @ 148198e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::SetupLODValidity(UParticleSystem *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_res10;
  
  uVar11 = 0;
  if (0 < (this->Emitters).ArrayNum) {
    local_res10 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Emitters).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((this->Emitters).AllocatorInstance.Data + local_res10);
      if (lVar1 != 0) {
        iVar7 = *(int *)(lVar1 + 0x48);
        uVar9 = 0;
        if (0 < iVar7) {
          lVar12 = 0;
          do {
            uVar5 = 0;
            if ((int)uVar9 < *(int *)(lVar1 + 0x48)) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(lVar12 + *(longlong *)(lVar1 + 0x40));
            if (lVar2 != 0) {
              iVar7 = *(int *)(lVar2 + 0x40);
              iVar8 = -3;
              if (-3 < iVar7) {
                lVar10 = -0x18;
                do {
                  if (iVar8 == -3) {
                    lVar6 = *(longlong *)(lVar2 + 0x30);
LAB_148198fb3:
                    if (lVar6 != 0) {
                      *(undefined1 *)(lVar6 + 0x2a) = 0;
                    }
                  }
                  else {
                    if (iVar8 == -2) {
LAB_148198fa9:
                      lVar6 = *(longlong *)(lVar2 + 0x50);
                      goto LAB_148198fb3;
                    }
                    if (iVar8 == -1) {
                      lVar6 = *(longlong *)(lVar2 + 0x48);
                      goto LAB_148198fb3;
                    }
                    if (iVar8 < 0) {
                      if (iVar8 == -4) goto LAB_148198fa9;
                    }
                    else if (iVar8 < iVar7) {
                      if ((iVar8 < 0) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar4)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      lVar6 = *(longlong *)(lVar10 + *(longlong *)(lVar2 + 0x38));
                      goto LAB_148198fb3;
                    }
                  }
                  iVar7 = *(int *)(lVar2 + 0x40);
                  iVar8 = iVar8 + 1;
                  lVar10 = lVar10 + 8;
                } while (iVar8 < iVar7);
              }
            }
            iVar7 = *(int *)(lVar1 + 0x48);
            uVar9 = uVar9 + 1;
            lVar12 = lVar12 + 8;
          } while ((int)uVar9 < iVar7);
        }
        uVar9 = 0;
        if (0 < iVar7) {
          lVar12 = 0;
          do {
            uVar5 = 0;
            if ((int)uVar9 < *(int *)(lVar1 + 0x48)) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(lVar12 + *(longlong *)(lVar1 + 0x40));
            if (lVar2 != 0) {
              iVar7 = *(int *)(lVar2 + 0x40);
              iVar8 = -3;
              if (-3 < iVar7) {
                lVar10 = -0x18;
                do {
                  if (iVar8 == -3) {
                    lVar6 = *(longlong *)(lVar2 + 0x30);
LAB_1481990e3:
                    if (lVar6 != 0) {
                      *(byte *)(lVar6 + 0x2a) =
                           *(byte *)(lVar6 + 0x2a) | (byte)(1 << (uVar9 & 0x1f));
                    }
                  }
                  else {
                    if (iVar8 == -2) {
LAB_1481990d9:
                      lVar6 = *(longlong *)(lVar2 + 0x50);
                      goto LAB_1481990e3;
                    }
                    if (iVar8 == -1) {
                      lVar6 = *(longlong *)(lVar2 + 0x48);
                      goto LAB_1481990e3;
                    }
                    if (iVar8 < 0) {
                      if (iVar8 == -4) goto LAB_1481990d9;
                    }
                    else if (iVar8 < iVar7) {
                      if ((iVar8 < 0) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar4)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      lVar6 = *(longlong *)(lVar10 + *(longlong *)(lVar2 + 0x38));
                      goto LAB_1481990e3;
                    }
                  }
                  iVar7 = *(int *)(lVar2 + 0x40);
                  iVar8 = iVar8 + 1;
                  lVar10 = lVar10 + 8;
                } while (iVar8 < iVar7);
              }
            }
            uVar9 = uVar9 + 1;
            lVar12 = lVar12 + 8;
          } while ((int)uVar9 < *(int *)(lVar1 + 0x48));
        }
      }
      local_res10 = local_res10 + 8;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (this->Emitters).ArrayNum);
  }
  return;
}

// SetupSoloing @ 148199170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystem::SetupSoloing(UParticleSystem *this)

{
  return;
}

// StaticRegisterNativesUParticleSystem @ 1481a1bb0

void __cdecl UParticleSystem::StaticRegisterNativesUParticleSystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UParticleSystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToggleSoloing @ 1481a5aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::ToggleSoloing(UParticleSystem *this,UParticleEmitter *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  UParticleEmitter *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  bool local_res18;
  longlong local_58;
  longlong local_50;
  
  local_res18 = false;
  if (param_1 == (UParticleEmitter *)0x0) {
    return false;
  }
  uVar12 = 0;
  bVar7 = false;
  if (0 < (this->Emitters).ArrayNum) {
    lVar14 = 0;
    uVar13 = 0xffffffff;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->Emitters).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pUVar4 = *(UParticleEmitter **)((this->Emitters).AllocatorInstance.Data + lVar14);
      if (pUVar4 == (UParticleEmitter *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Emitter != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystem.cpp"
                           ,899,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
LAB_1481a5b80:
        uVar10 = uVar13;
        if (pUVar4->bIsSoloing != '\0') {
          bVar7 = true;
          local_res18 = true;
        }
      }
      else {
        uVar10 = uVar12;
        if (pUVar4 != param_1) goto LAB_1481a5b80;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 8;
      uVar13 = uVar10;
    } while ((int)uVar12 < (this->Emitters).ArrayNum);
    if (uVar10 != 0xffffffff) {
      param_1->field_0x37 = param_1->field_0x37 ^ 0x20;
      uVar12 = 0;
      if (0 < (this->Emitters).ArrayNum) {
        local_50 = 0;
        local_58 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar12 < (this->Emitters).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          lVar14 = *(longlong *)((this->Emitters).AllocatorInstance.Data + local_58 * 8);
          uVar13 = 0;
          if ((int)uVar12 < (this->SoloTracking).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          pFVar16 = (this->SoloTracking).AllocatorInstance.Data + local_50;
          if (local_58 == (int)uVar10) {
            uVar13 = 0;
            lVar14 = 0;
            if (0 < (param_1->LODLevels).ArrayNum) {
              do {
                uVar11 = 0;
                if ((int)uVar13 < (param_1->LODLevels).ArrayNum) {
                  uVar11 = ~uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                lVar15 = *(longlong *)((param_1->LODLevels).AllocatorInstance.Data + lVar14 * 8);
                if (param_1->bIsSoloing == '\0') {
                  if (bVar7) {
                    *(uint *)(lVar15 + 0x2c) = *(uint *)(lVar15 + 0x2c) & 0xfffffffe;
                  }
                  else {
LAB_1481a5d1e:
                    uVar11 = 0;
                    if ((int)uVar13 < *(int *)(pFVar16 + 8)) {
                      uVar11 = ~uVar13 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      uVar9 = (*pcVar6)();
                      return (bool)uVar9;
                    }
                    *(uint *)(lVar15 + 0x2c) =
                         *(uint *)(lVar15 + 0x2c) ^
                         ((uint)*(byte *)(*(longlong *)pFVar16 + lVar14) ^ *(uint *)(lVar15 + 0x2c))
                         & 1;
                  }
                }
                else if (bVar7) goto LAB_1481a5d1e;
                uVar13 = uVar13 + 1;
                lVar14 = lVar14 + 1;
              } while ((int)uVar13 < (param_1->LODLevels).ArrayNum);
            }
          }
          else if ((param_1->bIsSoloing != '\0') || (bVar7)) {
            if (((*(byte *)(lVar14 + 0x37) & 0x20) == 0) &&
               (uVar13 = 0, 0 < *(int *)(lVar14 + 0x48))) {
              lVar15 = 0;
              do {
                uVar11 = 0;
                if ((int)uVar13 < *(int *)(lVar14 + 0x48)) {
                  uVar11 = ~uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                uVar13 = uVar13 + 1;
                plVar3 = (longlong *)(lVar15 + *(longlong *)(lVar14 + 0x40));
                lVar15 = lVar15 + 8;
                puVar1 = (uint *)(*plVar3 + 0x2c);
                *puVar1 = *puVar1 & 0xfffffffe;
              } while ((int)uVar13 < *(int *)(lVar14 + 0x48));
            }
          }
          else {
            uVar13 = 0;
            lVar15 = 0;
            if (0 < *(int *)(lVar14 + 0x48)) {
              do {
                uVar11 = 0;
                if ((int)uVar13 < *(int *)(lVar14 + 0x48)) {
                  uVar11 = ~uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                lVar5 = *(longlong *)(*(longlong *)(lVar14 + 0x40) + lVar15 * 8);
                uVar11 = 0;
                if ((int)uVar13 < *(int *)(pFVar16 + 8)) {
                  uVar11 = ~uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
                uVar13 = uVar13 + 1;
                pbVar2 = (byte *)(lVar15 + *(longlong *)pFVar16);
                lVar15 = lVar15 + 1;
                puVar1 = (uint *)(lVar5 + 0x2c);
                *puVar1 = *puVar1 ^ ((uint)*pbVar2 ^ *(uint *)(lVar5 + 0x2c)) & 1;
              } while ((int)uVar13 < *(int *)(lVar14 + 0x48));
            }
          }
          uVar12 = uVar12 + 1;
          local_50 = local_50 + 0x10;
          local_58 = local_58 + 1;
        } while ((int)uVar12 < (this->Emitters).ArrayNum);
      }
    }
  }
  if (param_1->bIsSoloing != '\0') {
    local_res18 = true;
  }
  return local_res18;
}

// TurnOffSoloing @ 1481a63f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::TurnOffSoloing(UParticleSystem *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong local_res8;
  longlong local_res10;
  
  uVar10 = 0;
  if (0 < (this->Emitters).ArrayNum) {
    local_res10 = 0;
    local_res8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->Emitters).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)((this->Emitters).AllocatorInstance.Data + local_res8);
      if (lVar1 != 0) {
        uVar7 = 0;
        if ((int)uVar10 < (this->SoloTracking).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar7 = 0;
        pFVar9 = (this->SoloTracking).AllocatorInstance.Data + local_res10;
        lVar8 = 0;
        if (0 < *(int *)(lVar1 + 0x48)) {
          do {
            uVar6 = 0;
            if ((int)uVar7 < *(int *)(lVar1 + 0x48)) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + lVar8 * 8);
            if (lVar2 != 0) {
              uVar6 = 0;
              if ((int)uVar7 < *(int *)(pFVar9 + 8)) {
                uVar6 = ~uVar7 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              *(uint *)(lVar2 + 0x2c) =
                   *(uint *)(lVar2 + 0x2c) ^
                   ((uint)*(byte *)(*(longlong *)pFVar9 + lVar8) ^ *(uint *)(lVar2 + 0x2c)) & 1;
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 1;
          } while ((int)uVar7 < *(int *)(lVar1 + 0x48));
        }
        *(byte *)(lVar1 + 0x37) = *(byte *)(lVar1 + 0x37) & 0xdf;
      }
      local_res8 = local_res8 + 8;
      local_res10 = local_res10 + 0x10;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (this->Emitters).ArrayNum);
  }
  return true;
}

// UpdateColorModuleClampAlpha @ 1481b24b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystem::UpdateColorModuleClampAlpha
          (UParticleSystem *this,UParticleModuleColorBase *param_1)

{
  UInterpCurveEdSetup *this_00;
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FParticleCurvePair *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  if (param_1 != (UParticleModuleColorBase *)0x0) {
    this_00 = (this->CurveEdSetup).field0_0x0.DebugPtr;
    uVar7 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_38 = (FParticleCurvePair *)0x0;
    local_30 = 0;
    (**(code **)(*(longlong *)param_1 + 0x2f0))(param_1,&local_38);
    uVar8 = uVar7;
    iVar5 = (int)local_30;
    if (0 < (int)local_30) {
      do {
        uVar6 = (uint)uVar7;
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)local_30;
        }
        pUVar1 = *(UObject **)((longlong)&(local_38->CurveObject).field0_0x0 + uVar8);
        if (pUVar1 != (UObject *)0x0) {
          UInterpCurveEdSetup::RemoveCurve(this_00,pUVar1);
          iVar5 = (int)local_30;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar8 = uVar8 + 0x18;
      } while ((int)(uVar6 + 1) < iVar5);
    }
    DestructItems<FParticleCurvePair,int>(local_38,iVar5);
    if (local_38 != (FParticleCurvePair *)0x0) {
      FMemory::Free(local_38);
    }
    (**(code **)(*(longlong *)param_1 + 0x2f8))
              (param_1,(this->CurveEdSetup).field0_0x0.DebugPtr,&local_28);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}

// UsesCPUCollision @ 1481b4350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystem::UsesCPUCollision(UParticleSystem *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UParticleEmitter *this_00;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  UClass *pUVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  
  pFVar13 = (this->Emitters).AllocatorInstance.Data;
  iVar2 = (this->Emitters).ArrayNum;
  local_res18 = pFVar13 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar8 = local_res18;
    if ((this->Emitters).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UParticleEmitter>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar8) break;
    this_00 = *(UParticleEmitter **)pFVar13;
    if (((this_00 != (UParticleEmitter *)0x0) &&
        (bVar9 = UParticleEmitter::HasAnyEnabledLODs(this_00), bVar9)) &&
       (0 < (this_00->LODLevels).ArrayNum)) {
      if (((this_00->LODLevels).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      lVar5 = *(longlong *)(this_00->LODLevels).AllocatorInstance.Data;
      if (lVar5 != 0) {
        plVar12 = *(longlong **)(lVar5 + 0x38);
        iVar3 = *(int *)(lVar5 + 0x40);
        plVar1 = plVar12 + iVar3;
        while( true ) {
          if (*(int *)(lVar5 + 0x40) != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UParticleModule>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (plVar12 == plVar1) break;
          lVar6 = *plVar12;
          if (*(char *)(lVar6 + 0x28) < '\0') {
            pUVar11 = Z_Construct_UClass_UParticleModuleCollision_NoRegister();
            lVar6 = *(longlong *)(lVar6 + 0x10);
            iVar4 = (int)pUVar11->_padding_;
            if ((iVar4 <= *(int *)(lVar6 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar11->_padding_)) {
              return true;
            }
          }
          plVar12 = plVar12 + 1;
        }
      }
    }
    pFVar13 = pFVar13 + 8;
  }
  return false;
}

// execContainsEmitterType @ 1481b5e40

void __cdecl
UParticleSystem::execContainsEmitterType(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res8;
  
  uVar9 = 0;
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar10 = uVar9;
  if (0 < *(int *)&param_1[2].field_0x20) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_1[2].field_0x20) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(uVar10 + *(longlong *)&param_1[2].field_0x18);
      if (lVar3 != 0) {
        if ((*(int *)(lVar3 + 0x48) < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((**(longlong **)(lVar3 + 0x40) != 0) &&
           (lVar3 = *(longlong *)(**(longlong **)(lVar3 + 0x40) + 0x48), lVar3 != 0)) {
          lVar3 = *(longlong *)(lVar3 + 0x10);
          iVar1 = *(int *)(lVar5 + 0x38);
          if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar5 + 0x30)) {
            *(undefined1 *)param_3 = 1;
            return;
          }
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < *(int *)&param_1[2].field_0x20);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

