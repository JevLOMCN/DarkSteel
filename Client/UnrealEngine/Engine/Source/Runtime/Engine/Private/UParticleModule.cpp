// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// StaticClass @ 1472f9080

UClass * __cdecl UParticleModule::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModule",
               &Z_Registration_Info_UClass_UParticleModule.InnerSingleton,
               StaticRegisterNativesUParticleModule,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModule>,
               InternalVTableHelperCtorCaller<UParticleModule>,local_res8,UObject::StaticClass,
               UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModule.InnerSingleton;
}

// UParticleModule @ 1472fc210

UParticleModule * __thiscall
UParticleModule::UParticleModule(UParticleModule *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  return this;
}

// ~UParticleModule @ 1472fd620

void __thiscall UParticleModule::~UParticleModule(UParticleModule *this)

{
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanTickInAnyThread @ 1472ff520

bool __thiscall UParticleModule::CanTickInAnyThread(UParticleModule *this)

{
  return true;
}

// EmitterLoopingNotify @ 1472ff560

void __thiscall
UParticleModule::EmitterLoopingNotify(UParticleModule *this,FParticleEmitterInstance *param_1)

{
  return;
}

// GetModuleType @ 1472ff840

EModuleType __thiscall UParticleModule::GetModuleType(UParticleModule *this)

{
  return EPMT_General;
}

// GetPrivateStaticClass @ 1472ff880

UClass * __cdecl UParticleModule::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModule",
               &Z_Registration_Info_UClass_UParticleModule.InnerSingleton,
               StaticRegisterNativesUParticleModule,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModule>,
               InternalVTableHelperCtorCaller<UParticleModule>,local_res8,UObject::StaticClass,
               UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModule.InnerSingleton;
}

// GetRandomSeedInfo @ 147301670

FParticleRandomSeedInfo * __thiscall UParticleModule::GetRandomSeedInfo(UParticleModule *this)

{
  return (FParticleRandomSeedInfo *)0x0;
}

// IsSizeMultiplyLife @ 1473016a0

bool __thiscall UParticleModule::IsSizeMultiplyLife(UParticleModule *this)

{
  return false;
}

// RefreshModule @ 1473016c0

void __thiscall
UParticleModule::RefreshModule
          (UParticleModule *this,UInterpCurveEdSetup *param_1,UParticleEmitter *param_2,int param_3)

{
  return;
}

// Render3DPreview @ 1473016d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UParticleModule::Render3DPreview(UParticleModule *this,FPreviewContext *param_1)

{
  return;
}

// StaticRegisterNativesUParticleModule @ 147301700

void __cdecl UParticleModule::StaticRegisterNativesUParticleModule(void)

{
  return;
}

// TouchesMeshRotation @ 147301980

bool __thiscall UParticleModule::TouchesMeshRotation(UParticleModule *this)

{
  return false;
}

// WillGeneratedModuleBeIdentical @ 147301990

bool __thiscall
UParticleModule::WillGeneratedModuleBeIdentical
          (UParticleModule *this,UParticleLODLevel *param_1,UParticleLODLevel *param_2,float param_3
          )

{
  if (param_3 != __real_42c80000) {
    return this->LODDuplicate;
  }
  return true;
}

// UParticleModule @ 14815b350

UParticleModule * __thiscall
UParticleModule::UParticleModule(UParticleModule *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  puVar2 = &this->field_0x29;
  this->bEditable = '\x01';
  this->bRequiresLoopingNotification = '\0';
  this->bSupportsRandomSeed = '\0';
  this->LODDuplicate = '\x01';
  puVar2 = &this->field_0x28;
  this->bUpdateForGPUEmitter = '\0';
  this->bEnabled = '\x01';
  this->bSupported3DDrawMode = '\0';
  this->b3DDrawMode = '\0';
  return this;
}

// AddModuleCurvesToEditor @ 148165d90

bool __thiscall
UParticleModule::AddModuleCurvesToEditor
          (UParticleModule *this,UInterpCurveEdSetup *param_1,
          TArray<FCurveEdEntry_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// AutoPopulateInstanceProperties @ 1481665c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModule::AutoPopulateInstanceProperties
          (UParticleModule *this,UParticleSystemComponent *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement FVar10;
  uint uVar11;
  uint uVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  UObject *pUVar18;
  longlong lVar19;
  UObject *pUVar20;
  uint uVar21;
  UObject *pUVar22;
  uint uVar23;
  UObject *pUVar24;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  undefined4 uVar27;
  ulonglong in_stack_ffffffffffffff48;
  TFieldIterator<FStructProperty> local_98;
  undefined1 local_80 [72];
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                         ,299,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_98.Struct = (UStruct *)this->_padding_;
  pUVar20 = (UObject *)0x0;
  if (local_98.Struct == (UStruct *)0x0) {
    local_98.Field = (FField *)0x0;
  }
  else {
    local_98.Field = (local_98.Struct)->ChildProperties;
  }
  local_98.InterfaceIndex = -1;
  local_98.bIncludeSuper = true;
  local_98.bIncludeDeprecated = true;
  local_98.bIncludeInterface = false;
  TFieldIterator<FStructProperty>::IterateToNext(&local_98);
  uVar12 = 0;
  uVar26 = 0;
  do {
    if ((FStructProperty *)local_98.Field == (FStructProperty *)0x0) {
      plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x380))(this);
      if ((plVar16 != (longlong *)0x0) && (*plVar16 != 0)) {
        pUVar13 = pUVar20;
        if (0 < (param_1->InstanceParameters).ArrayNum) {
          do {
            uVar11 = (uint)pUVar20;
            uVar12 = uVar26;
            if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)
                 ((longlong)&pUVar13->field_0x0 +
                 (longlong)(param_1->InstanceParameters).AllocatorInstance.Data) == *plVar16) {
              return;
            }
            pUVar20 = (UObject *)(ulonglong)(uVar11 + 1);
            pUVar13 = (UObject *)&pUVar13[5].field_0x18;
          } while ((int)(uVar11 + 1) < (param_1->InstanceParameters).ArrayNum);
        }
        pTVar25 = &param_1->InstanceParameters;
        uVar12 = (param_1->InstanceParameters).ArrayNum;
        piVar1 = &(param_1->InstanceParameters).ArrayMax;
        if (uVar12 == *piVar1) {
          uVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10e0,&pTVar25->AllocatorInstance,piVar1);
        }
        (param_1->InstanceParameters).ArrayNum = uVar12 + 1;
        lVar17 = (longlong)(int)uVar12 * 0xe0;
        memset((pTVar25->AllocatorInstance).Data + lVar17,0,0xe0);
        lVar19 = *plVar16;
        uVar11 = uVar26;
        if ((int)uVar12 < (param_1->InstanceParameters).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(longlong *)((pTVar25->AllocatorInstance).Data + lVar17) = lVar19;
        if ((int)uVar12 < (param_1->InstanceParameters).ArrayNum) {
          uVar26 = ~uVar12 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pTVar25->AllocatorInstance).Data[lVar17 + 8] = (FScriptContainerElement)0x1;
      }
      return;
    }
    pUVar13 = FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty
                        ((FStructProperty *)local_98.Field,(uchar *)this);
    if (pUVar13 != (UObject *)0x0) {
      pUVar14 = Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar4) ||
         (pUVar18 = pUVar13,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
         &pUVar14->_padding_)) {
        pUVar18 = pUVar20;
      }
      pUVar14 = Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar14->_padding_)) {
        pUVar13 = pUVar20;
      }
      if (pUVar18 == (UObject *)0x0) {
        if (pUVar13 == (UObject *)0x0) goto LAB_148166b19;
        lVar19 = *(longlong *)&pUVar13[2].field_0x8;
        FVar10 = (FScriptContainerElement)0x3;
      }
      else {
        lVar19 = *(longlong *)&pUVar18[1].field_0x18;
        FVar10 = (FScriptContainerElement)0x1;
      }
      pTVar25 = &param_1->InstanceParameters;
      pUVar22 = pUVar20;
      pUVar24 = pUVar20;
      if (0 < (param_1->InstanceParameters).ArrayNum) {
        do {
          uVar23 = (uint)pUVar24;
          uVar11 = uVar12;
          if ((int)uVar23 < (param_1->InstanceParameters).ArrayNum) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if (uVar11 == 0) {
            in_stack_ffffffffffffff48 = (ulonglong)(int)uVar23;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (*(longlong *)((pTVar25->AllocatorInstance).Data + (longlong)pUVar22) == lVar19)
          goto LAB_148166b19;
          pUVar22 = (UObject *)&pUVar22[5].field_0x18;
          pUVar24 = (UObject *)(ulonglong)(uVar23 + 1);
        } while ((int)(uVar23 + 1) < (param_1->InstanceParameters).ArrayNum);
      }
      uVar11 = (param_1->InstanceParameters).ArrayNum;
      piVar1 = &(param_1->InstanceParameters).ArrayMax;
      if (uVar11 == *piVar1) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10e0,&pTVar25->AllocatorInstance,piVar1);
        (param_1->InstanceParameters).ArrayNum = uVar11;
      }
      (param_1->InstanceParameters).ArrayNum = uVar11 + 1;
      lVar17 = (longlong)(int)uVar11 * 0xe0;
      memset((pTVar25->AllocatorInstance).Data + lVar17,0,0xe0);
      uVar21 = ~uVar11 >> 0x1f;
      uVar23 = uVar12;
      if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
        uVar23 = uVar21;
      }
      if (uVar23 == 0) {
        in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(longlong *)((pTVar25->AllocatorInstance).Data + lVar17) = lVar19;
      uVar23 = uVar12;
      if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
        uVar23 = uVar21;
      }
      if (uVar23 == 0) {
        in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      (pTVar25->AllocatorInstance).Data[lVar17 + 8] = FVar10;
      uVar23 = uVar26;
      if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
        uVar23 = uVar21;
      }
      if (uVar23 == 0) {
        in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)((pTVar25->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xe0 + 0x50) = 0;
      if (FVar10 == (FScriptContainerElement)0x1) {
        uVar27 = (**(code **)(*(longlong *)pUVar18 + 0x2d0))(pUVar18,0,0,0);
        uVar23 = uVar26;
        if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
          uVar23 = ~uVar11 >> 0x1f;
        }
        if (uVar23 == 0) {
          in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        *(undefined4 *)((pTVar25->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xe0 + 0xc) =
             uVar27;
        uVar27 = *(undefined4 *)(pUVar18 + 2);
        uVar23 = uVar26;
        if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
          uVar23 = ~uVar11 >> 0x1f;
        }
        if (uVar23 == 0) {
          in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        *(undefined4 *)((pTVar25->AllocatorInstance).Data + (longlong)(int)uVar11 * 0xe0 + 0x10) =
             uVar27;
      }
      else if (FVar10 == (FScriptContainerElement)0x3) {
        in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
        puVar15 = (undefined8 *)
                  (**(code **)(*(longlong *)pUVar13 + 0x2d0))
                            (pUVar13,local_80,0,0,in_stack_ffffffffffffff48,0);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        uVar3 = puVar15[2];
        uVar23 = uVar26;
        if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
          uVar23 = ~uVar11 >> 0x1f;
        }
        if (uVar23 == 0) {
          in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (pTVar25->AllocatorInstance).Data;
        pFVar2 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x18;
        *(undefined8 *)pFVar2 = uVar7;
        *(undefined8 *)(pFVar2 + 8) = uVar8;
        *(undefined8 *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x28) = uVar3;
        uVar3 = *(undefined8 *)&pUVar13[3].field_0x18;
        uVar7 = *(undefined8 *)&pUVar13[3].field_0x20;
        lVar19 = *(longlong *)(pUVar13 + 4);
        uVar23 = uVar26;
        if ((int)uVar11 < (param_1->InstanceParameters).ArrayNum) {
          uVar23 = ~uVar11 >> 0x1f;
        }
        if (uVar23 == 0) {
          in_stack_ffffffffffffff48 = (ulonglong)(int)uVar11;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (pTVar25->AllocatorInstance).Data;
        pFVar2 = pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x30;
        *(undefined8 *)pFVar2 = uVar3;
        *(undefined8 *)(pFVar2 + 8) = uVar7;
        *(longlong *)(pFVar5 + (longlong)(int)uVar11 * 0xe0 + 0x40) = lVar19;
      }
    }
LAB_148166b19:
    local_98.Field = (local_98.Field)->Next;
    TFieldIterator<FStructProperty>::IterateToNext(&local_98);
  } while( true );
}

// ChangeEditorColor @ 148168c00

void __thiscall
UParticleModule::ChangeEditorColor
          (UParticleModule *this,FColor *param_1,UInterpCurveEdSetup *param_2)

{
  return;
}

// CompileModule @ 1481693c0

void __thiscall
UParticleModule::CompileModule(UParticleModule *this,FParticleEmitterBuildInfo *param_1)

{
  TArray<UParticleModule_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UParticleModule *local_18 [2];
  
  if (this->bSpawnModule != 0) {
    pTVar1 = &param_1->SpawnModules;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    local_18[0] = this;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3 + (longlong)(param_1->SpawnModules).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (param_1->SpawnModules).ArrayNum;
    piVar2 = &(param_1->SpawnModules).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_1->SpawnModules).ArrayNum = iVar6 + 1;
    *(UParticleModule **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// ConvertFloatDistribution @ 14816b860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleModule::ConvertFloatDistribution
          (UParticleModule *this,UDistributionFloat *param_1,UDistributionFloat *param_2,
          float param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  int iVar7;
  UDistributionFloat *pUVar8;
  int iVar9;
  UDistributionFloat *pUVar10;
  UDistributionFloat *pUVar11;
  UDistributionFloat *pUVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  fVar15 = param_3 * __real_3c23d70a;
  if (param_1 == (UDistributionFloat *)0x0) {
LAB_14816b8bc:
    pUVar10 = (UDistributionFloat *)0x0;
    if (param_1 != (UDistributionFloat *)0x0) goto LAB_14816b8c3;
LAB_14816b8ee:
    pUVar12 = (UDistributionFloat *)0x0;
    if (param_1 != (UDistributionFloat *)0x0) goto LAB_14816b8f6;
LAB_14816b921:
    pUVar8 = (UDistributionFloat *)0x0;
    if (param_1 != (UDistributionFloat *)0x0) goto LAB_14816b928;
LAB_14816b953:
    pUVar11 = (UDistributionFloat *)0x0;
    if (param_1 != (UDistributionFloat *)0x0) goto LAB_14816b95b;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    lVar1 = param_1->_padding_;
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar5) ||
       (pUVar10 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
       &pUVar6->_padding_)) goto LAB_14816b8bc;
LAB_14816b8c3:
    pUVar6 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
    lVar1 = param_1->_padding_;
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar5) ||
       (pUVar12 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
       &pUVar6->_padding_)) goto LAB_14816b8ee;
LAB_14816b8f6:
    pUVar6 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       (pUVar8 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
       != &pUVar6->_padding_)) goto LAB_14816b921;
LAB_14816b928:
    pUVar6 = Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       (pUVar11 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
       != &pUVar6->_padding_)) goto LAB_14816b953;
LAB_14816b95b:
    pUVar6 = Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      fVar13 = *(float *)((longlong)&param_1[1]._padding_ + 4);
      *(float *)&param_1[1]._padding_ = fVar15 * *(float *)&param_1[1]._padding_;
      *(float *)((longlong)&param_1[1]._padding_ + 4) = fVar15 * fVar13;
      param_1->bIsDirty = '\x01';
      return true;
    }
  }
  if (pUVar11 != (UDistributionFloat *)0x0) {
    iVar7 = 0;
    iVar5 = (**(code **)pUVar11->_padding_)(&pUVar11->_padding_);
    if (0 < iVar5) {
      do {
        iVar9 = 0;
        iVar5 = (**(code **)(pUVar11->_padding_ + 8))(&pUVar11->_padding_);
        if (0 < iVar5) {
          do {
            fVar13 = (float)(**(code **)(pUVar11->_padding_ + 0x20))
                                      (&pUVar11->_padding_,iVar9,iVar7);
            (**(code **)(pUVar11->_padding_ + 0x70))
                      (&pUVar11->_padding_,iVar9,iVar7,fVar13 * fVar15);
            iVar9 = iVar9 + 1;
            iVar5 = (**(code **)(pUVar11->_padding_ + 8))(&pUVar11->_padding_);
          } while (iVar9 < iVar5);
        }
        iVar7 = iVar7 + 1;
        iVar5 = (**(code **)pUVar11->_padding_)(&pUVar11->_padding_);
      } while (iVar7 < iVar5);
      param_1->bIsDirty = '\x01';
      return true;
    }
    goto LAB_14816bbd8;
  }
  if (pUVar10 != (UDistributionFloat *)0x0) {
    if (param_2 != (UDistributionFloat *)0x0) {
      pUVar6 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) goto LAB_14816ba89;
    }
    param_2 = (UDistributionFloat *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceConstant",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                       ,0x1a9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
LAB_14816ba89:
    (**(code **)(pUVar10->_padding_ + 0x70))
              (&pUVar10->_padding_,0,0,fVar15 * *(float *)&param_2[1]._padding_);
    param_1->bIsDirty = '\x01';
    return true;
  }
  if (pUVar12 == (UDistributionFloat *)0x0) {
    if (pUVar8 == (UDistributionFloat *)0x0) {
      if (4 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      return false;
    }
    (**(code **)(pUVar8->_padding_ + 0x70))
              (&pUVar8->_padding_,0,0,fVar15 * *(float *)&pUVar8[1]._padding_);
    (**(code **)(pUVar8->_padding_ + 0x70))
              (&pUVar8->_padding_,1,0,fVar15 * *(float *)((longlong)&pUVar8[1]._padding_ + 4));
    goto LAB_14816bbd8;
  }
  if (param_2 == (UDistributionFloat *)0x0) {
LAB_14816badd:
    param_2 = (UDistributionFloat *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceConstantCurve",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                       ,0x1b0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_14816badd;
  }
  iVar7 = 0;
  iVar5 = (**(code **)param_2->_padding_)(&param_2->_padding_);
  if (0 < iVar5) {
    do {
      pcVar2 = *(code **)(pUVar12->_padding_ + 0x58);
      uVar14 = (**(code **)(param_2->_padding_ + 0x18))(&param_2->_padding_,iVar7);
      (*pcVar2)(&pUVar12->_padding_,uVar14);
      iVar9 = 0;
      iVar5 = (**(code **)(param_2->_padding_ + 8))(&param_2->_padding_);
      if (0 < iVar5) {
        do {
          fVar13 = (float)(**(code **)(param_2->_padding_ + 0x20))(&param_2->_padding_,iVar9,iVar7);
          (**(code **)(pUVar12->_padding_ + 0x70))(&pUVar12->_padding_,iVar9,iVar7,fVar13 * fVar15);
          iVar9 = iVar9 + 1;
          iVar5 = (**(code **)(param_2->_padding_ + 8))(&param_2->_padding_);
        } while (iVar9 < iVar5);
      }
      iVar7 = iVar7 + 1;
      iVar5 = (**(code **)param_2->_padding_)(&param_2->_padding_);
    } while (iVar7 < iVar5);
    param_1->bIsDirty = '\x01';
    return true;
  }
LAB_14816bbd8:
  param_1->bIsDirty = '\x01';
  return true;
}

// ConvertVectorDistribution @ 14816bc30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleModule::ConvertVectorDistribution
          (UParticleModule *this,UDistributionVector *param_1,UDistributionVector *param_2,
          float param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  int iVar11;
  UClass *pUVar12;
  int iVar13;
  UDistributionVector *pUVar14;
  int iVar15;
  UDistributionVector *pUVar16;
  UDistributionVector *pUVar17;
  UDistributionVector *pUVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  
  fVar22 = param_3 * __real_3c23d70a;
  if (param_1 == (UDistributionVector *)0x0) {
LAB_14816bc8b:
    pUVar16 = (UDistributionVector *)0x0;
    if (param_1 != (UDistributionVector *)0x0) goto LAB_14816bc92;
LAB_14816bcbd:
    pUVar17 = (UDistributionVector *)0x0;
    if (param_1 != (UDistributionVector *)0x0) goto LAB_14816bcc5;
LAB_14816bcf0:
    pUVar14 = (UDistributionVector *)0x0;
    if (param_1 != (UDistributionVector *)0x0) goto LAB_14816bcf7;
LAB_14816bd22:
    pUVar18 = (UDistributionVector *)0x0;
    if (param_1 == (UDistributionVector *)0x0) goto LAB_14816bd98;
  }
  else {
    pUVar12 = Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
    lVar1 = param_1->_padding_;
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar11) ||
       (pUVar16 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar11 * 8) !=
       &pUVar12->_padding_)) goto LAB_14816bc8b;
LAB_14816bc92:
    pUVar12 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
    lVar1 = param_1->_padding_;
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar11) ||
       (pUVar17 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar11 * 8) !=
       &pUVar12->_padding_)) goto LAB_14816bcbd;
LAB_14816bcc5:
    pUVar12 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar11) ||
       (pUVar14 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar12->_padding_)) goto LAB_14816bcf0;
LAB_14816bcf7:
    pUVar12 = Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar11) ||
       (pUVar18 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar12->_padding_)) goto LAB_14816bd22;
  }
  pUVar12 = Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
  iVar11 = (int)pUVar12->_padding_;
  if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8)
      == &pUVar12->_padding_)) {
    dVar20 = (double)fVar22;
    dVar7 = (double)param_1[2]._padding_ * dVar20;
    dVar8 = (double)param_1[2]._padding_ * dVar20;
    auVar2._8_4_ = SUB84(dVar8,0);
    auVar2._0_8_ = dVar7;
    auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    param_1[2]._padding_ = (longlong)dVar7;
    param_1[2]._padding_ = auVar2._8_8_;
    dVar7 = (double)param_1[3]._padding_ * dVar20;
    auVar3._8_4_ = SUB84(dVar7,0);
    auVar3._0_8_ = *(double *)&param_1[2].field_0x30 * dVar20;
    auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&param_1[2].field_0x30 = auVar3;
    dVar7 = (double)param_1[3]._padding_ * dVar20;
    dVar20 = (double)param_1[3]._padding_ * dVar20;
    auVar4._8_4_ = SUB84(dVar20,0);
    auVar4._0_8_ = dVar7;
    auVar4._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    param_1[3]._padding_ = (longlong)dVar7;
    param_1[3]._padding_ = auVar4._8_8_;
    param_1->bIsDirty = '\x01';
    return true;
  }
LAB_14816bd98:
  if (pUVar18 == (UDistributionVector *)0x0) {
    if (pUVar16 != (UDistributionVector *)0x0) {
      dVar20 = (double)fVar22;
      dVar7 = (double)pUVar16[1]._padding_ * dVar20;
      dVar8 = (double)pUVar16[1]._padding_ * dVar20;
      auVar5._8_4_ = SUB84(dVar8,0);
      auVar5._0_8_ = dVar7;
      auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      pUVar16[1]._padding_ = (longlong)dVar7;
      pUVar16[1]._padding_ = auVar5._8_8_;
      pUVar16[1]._padding_ = (longlong)(dVar20 * (double)pUVar16[1]._padding_);
      param_1->bIsDirty = '\x01';
      return true;
    }
    if (pUVar17 == (UDistributionVector *)0x0) {
      if (pUVar14 == (UDistributionVector *)0x0) {
        if (4 < (byte)LogParticles._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
        return false;
      }
      dVar21 = (double)fVar22;
      dVar7 = (double)pUVar14[1]._padding_ * dVar21;
      dVar8 = (double)pUVar14[1]._padding_ * dVar21;
      dVar20 = (double)pUVar14[1]._padding_ * dVar21;
      dVar10 = (double)pUVar14[1]._padding_ * dVar21;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      pUVar14[1]._padding_ = (longlong)dVar7;
      pUVar14[1]._padding_ = auVar6._8_8_;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar20;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      pUVar14[1]._padding_ = (longlong)dVar20;
      pUVar14[1]._padding_ = auVar9._8_8_;
      pUVar14[1]._padding_ = (longlong)(dVar21 * (double)pUVar14[1]._padding_);
      pUVar14[1]._padding_ = (longlong)(dVar21 * (double)pUVar14[1]._padding_);
    }
    else {
      iVar13 = 0;
      iVar11 = (**(code **)pUVar17->_padding_)(&pUVar17->_padding_);
      if (0 < iVar11) {
        do {
          iVar15 = 0;
          iVar11 = (**(code **)(pUVar17->_padding_ + 8))(&pUVar17->_padding_);
          if (0 < iVar11) {
            do {
              fVar19 = (float)(**(code **)(pUVar17->_padding_ + 0x20))
                                        (&pUVar17->_padding_,iVar15,iVar13);
              (**(code **)(pUVar17->_padding_ + 0x70))
                        (&pUVar17->_padding_,iVar15,iVar13,fVar19 * fVar22);
              iVar15 = iVar15 + 1;
              iVar11 = (**(code **)(pUVar17->_padding_ + 8))(&pUVar17->_padding_);
            } while (iVar15 < iVar11);
          }
          iVar13 = iVar13 + 1;
          iVar11 = (**(code **)pUVar17->_padding_)(&pUVar17->_padding_);
        } while (iVar13 < iVar11);
        param_1->bIsDirty = '\x01';
        return true;
      }
    }
  }
  else {
    iVar13 = 0;
    iVar11 = (**(code **)pUVar18->_padding_)(&pUVar18->_padding_);
    if (0 < iVar11) {
      do {
        iVar15 = 0;
        iVar11 = (**(code **)(pUVar18->_padding_ + 8))(&pUVar18->_padding_);
        if (0 < iVar11) {
          do {
            fVar19 = (float)(**(code **)(pUVar18->_padding_ + 0x20))
                                      (&pUVar18->_padding_,iVar15,iVar13);
            (**(code **)(pUVar18->_padding_ + 0x70))
                      (&pUVar18->_padding_,iVar15,iVar13,fVar19 * fVar22);
            iVar15 = iVar15 + 1;
            iVar11 = (**(code **)(pUVar18->_padding_ + 8))(&pUVar18->_padding_);
          } while (iVar15 < iVar11);
        }
        iVar13 = iVar13 + 1;
        iVar11 = (**(code **)pUVar18->_padding_)(&pUVar18->_padding_);
      } while (iVar13 < iVar11);
      param_1->bIsDirty = '\x01';
      return true;
    }
  }
  param_1->bIsDirty = '\x01';
  return true;
}

// FinalUpdate @ 148173640

void __thiscall UParticleModule::FinalUpdate(UParticleModule *this,FUpdateContext *param_1)

{
  return;
}

// GenerateLODModule @ 148175790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UParticleModule * __thiscall
UParticleModule::GenerateLODModule
          (UParticleModule *this,UParticleLODLevel *param_1,UParticleLODLevel *param_2,float param_3
          ,bool param_4,bool param_5)

{
  int iVar1;
  char cVar2;
  UParticleModule *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  UParticleModule *pUVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  cVar2 = (**(code **)(this->_padding_ + 0x348))();
  if ((cVar2 != '\0') && (!param_5)) {
    this->LODValidity = this->LODValidity | (byte)(1 << (param_2->Level & 0x1fU));
    return this;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pUVar3 = (UParticleModule *)
           StaticDuplicateObject
                     ((UObject *)this,(UObject *)this->_padding_,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  pUVar7 = (UParticleModule *)0x0;
  if (pUVar3 != (UParticleModule *)0x0) {
    pUVar4 = Z_Construct_UClass_UParticleModule_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UParticleModule>(&local_48);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UObject>(local_38,(UObject *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar8);
    }
    pUVar3->LODValidity = '\x01' << ((byte)param_2->Level & 0x1f);
    pUVar7 = pUVar3;
    if ((param_4) &&
       (cVar2 = (**(code **)(pUVar3->_padding_ + 0x318))(pUVar3,this,param_3,param_2), cVar2 == '\0'
       )) {
      local_res8 = (FName)this->_padding_;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      ::FName::ToString(&local_res8,&local_48);
      if (4 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      pUVar7 = (UParticleModule *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar7;
}

// GenerateLODModuleValues @ 148175970

bool __thiscall
UParticleModule::GenerateLODModuleValues
          (UParticleModule *this,UParticleModule *param_1,float param_2,UParticleLODLevel *param_3)

{
  return true;
}

// GetCurveObjects @ 148178ec0

void __thiscall
UParticleModule::GetCurveObjects
          (UParticleModule *this,TArray<FParticleCurvePair,TSizedDefaultAllocator<32>_> *param_1)

{
  FFieldClass *pFVar1;
  UClass *pUVar2;
  code *pcVar3;
  FStructProperty *this_00;
  FField *pFVar4;
  bool bVar5;
  uint uVar6;
  FFieldClass *pFVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  void *pvVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  
  local_38.Struct = (UStruct *)this->_padding_;
  if (local_38.Struct == (UStruct *)0x0) {
    local_38.Field = (FField *)0x0;
  }
  else {
    local_38.Field = (local_38.Struct)->ChildProperties;
  }
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = true;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  this_00 = (FStructProperty *)local_38.Field;
  do {
    if (this_00 == (FStructProperty *)0x0) {
      return;
    }
    local_38.Field = (FField *)this_00;
    if ((this_00 == (FStructProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Property != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                           ,0xba,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FStructProperty::StaticClass();
    if ((pFVar7 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (FFieldClass *)this_00->_padding_;
    if (pFVar7->Id == CASTCLASS_None) {
      for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
        if (pFVar1 == pFVar7) {
          bVar5 = true;
          goto LAB_148178fc0;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
LAB_148178fc0:
    if (bVar5) {
      pUVar8 = FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty
                         (this_00,(uchar *)this);
LAB_1481790a0:
      if (pUVar8 != (UObject *)0x0) {
        uVar6 = param_1->ArrayNum;
        if (uVar6 == param_1->ArrayMax) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = uVar6 + 1;
        uVar11 = 0;
        if ((int)uVar6 < (int)(uVar6 + 1)) {
          uVar11 = ~uVar6 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18;
        if (pFVar12 == (FScriptContainerElement *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewCurve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                             ,0xce,L"");
          pFVar12 = (FScriptContainerElement *)0x0;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          *(undefined8 *)pFVar12 = 0;
          *(undefined8 *)(pFVar12 + 8) = 0;
          *(undefined8 *)(pFVar12 + 0x10) = 0;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        pFVar4 = local_38.Field;
        *(UObject **)(pFVar12 + 0x10) = pUVar8;
        bVar5 = IsThisNotNull(local_38.Field,"FField::GetName");
        if (bVar5) {
          ::FName::ToString(&pFVar4->NamePrivate,&local_48);
        }
        else {
          ::FString::FString(&local_48,L"None");
        }
        if (pFVar12 == (FScriptContainerElement *)&local_48) {
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (*(void **)pFVar12 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar12);
          }
          *(FScriptContainerElement **)pFVar12 = local_48.Data.AllocatorInstance.Data;
          *(int *)(pFVar12 + 8) = local_48.Data.ArrayNum;
          *(int *)(pFVar12 + 0xc) = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      pFVar7 = FObjectPropertyBase::StaticClass();
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (FFieldClass *)this_00->_padding_;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
          if (pFVar1 == pFVar7) {
            bVar5 = true;
            goto LAB_148179036;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
LAB_148179036:
      if (bVar5) {
        pUVar9 = Z_Construct_UClass_UDistributionFloat_NoRegister();
        pUVar2 = (UClass *)(this_00->Struct).field0_0x0.DebugPtr;
        if (pUVar2 == (UClass *)0x0) {
          bVar5 = pUVar9 == (UClass *)0x0;
        }
        else {
          bVar5 = pUVar2 == pUVar9;
        }
        if (!bVar5) {
          pUVar9 = Z_Construct_UClass_UDistributionVector_NoRegister();
          pUVar2 = (UClass *)(this_00->Struct).field0_0x0.DebugPtr;
          if (pUVar2 == (UClass *)0x0) {
            bVar5 = pUVar9 == (UClass *)0x0;
          }
          else {
            bVar5 = pUVar2 == pUVar9;
          }
          if (!bVar5) goto LAB_1481791ea;
        }
        pcVar3 = *(code **)(this_00->_padding_ + 0x1f8);
        pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            ((FProperty *)this_00,(UObject *)this,0);
        pUVar8 = (UObject *)(*pcVar3)(this_00,pvVar10);
        goto LAB_1481790a0;
      }
    }
LAB_1481791ea:
    local_38.Field = (local_38.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    this_00 = (FStructProperty *)local_38.Field;
  } while( true );
}

// GetParticleParametersUtilized @ 14817c7a0

/* WARNING: Removing unreachable block (ram,0x00014817ca44) */

void __thiscall
UParticleModule::GetParticleParametersUtilized
          (UParticleModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  FStructProperty *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  FString local_148;
  FString local_138;
  TFieldIterator<FStructProperty> local_128;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90 [6];
  
  local_128.Struct = (UStruct *)this->_padding_;
  if (local_128.Struct == (UStruct *)0x0) {
    local_128.Field = (FField *)0x0;
  }
  else {
    local_128.Field = (local_128.Struct)->ChildProperties;
  }
  local_128.InterfaceIndex = -1;
  local_128.bIncludeSuper = true;
  local_128.bIncludeDeprecated = true;
  local_128.bIncludeInterface = false;
  TFieldIterator<FStructProperty>::IterateToNext(&local_128);
  pFVar2 = (FStructProperty *)local_128.Field;
  do {
    if (pFVar2 == (FStructProperty *)0x0) {
      return;
    }
    local_128.Field = (FField *)pFVar2;
    pUVar5 = FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty
                       (pFVar2,(uchar *)this);
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
         (pUVar8 = pUVar5,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
         &pUVar6->_padding_)) {
        pUVar8 = (UObject *)0x0;
      }
      pUVar6 = Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        pUVar5 = (UObject *)0x0;
      }
      iVar4 = 0;
      if (pUVar8 == (UObject *)0x0) {
        if (pUVar5 != (UObject *)0x0) {
          local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.Data.ArrayNum = 0;
          local_148.Data.ArrayMax = 0;
          ::FName::ToString((FName *)&pUVar5[2].field_0x8,local_90);
          ::FString::PrintfImpl(&local_110,L"VECTOR: %32s - ");
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          local_148.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
          local_148.Data.ArrayNum = local_110.Data.ArrayNum;
          local_148.Data.ArrayMax = local_110.Data.ArrayMax;
          local_110.Data.ArrayNum = 0;
          local_110.Data.ArrayMax = 0;
          local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_90[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90[0].Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_100,L"MinIn %10.5f,%10.5f,%10.5f, ");
          iVar10 = iVar4;
          if (local_100.Data.ArrayNum != 0) {
            iVar10 = local_100.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar10)
          ;
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_f0,L"MaxIn %10.5f,%10.5f,%10.5f, ");
          iVar10 = iVar4;
          if (local_f0.Data.ArrayNum != 0) {
            iVar10 = local_f0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar10);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_e0,L"MinOut %10.5f,%10.5f,%10.5f, ");
          iVar10 = iVar4;
          if (local_e0.Data.ArrayNum != 0) {
            iVar10 = local_e0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar10);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_d0,L"MaxOut %10.5f,%10.5f,%10.5f, ");
          iVar10 = iVar4;
          if (local_d0.Data.ArrayNum != 0) {
            iVar10 = local_d0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar10);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_c0,L"Mode %10s,%10s,%10s, ");
          iVar10 = iVar4;
          if (local_c0.Data.ArrayNum != 0) {
            iVar10 = local_c0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar10);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_b0,L"Constant %10.5f,%10.5f,%10.5f\n");
          if (local_b0.Data.ArrayNum != 0) {
            iVar4 = local_b0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar4);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          pFVar7 = (param_1->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_148) &&
              ((FScriptContainerElement *)&local_148 < pFVar7 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          _Src.Data = local_148.Data.AllocatorInstance.Data;
          pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
          param_1->ArrayNum = iVar4 + 1;
          *(undefined8 *)&pFVar7->field_0x0 = 0;
          lVar9 = (longlong)local_148.Data.ArrayNum;
          *(int *)&pFVar7[8].field_0x0 = local_148.Data.ArrayNum;
          if (local_148.Data.ArrayNum == 0) {
            *(int *)(pFVar7 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,
                       local_148.Data.ArrayNum,(int *)(pFVar7 + 0xc));
            memcpy(*(void **)&pFVar7->field_0x0,_Src.Data,lVar9 * 2);
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        ::FName::ToString((FName *)&pUVar8[1].field_0x18,&local_a0);
        ::FString::PrintfImpl
                  (&local_138,
                   L"float : %32s - MinIn %10.5f, MaxIn %10.5f, MinOut %10.5f, MaxOut %10.5f, Mode %10s, Constant %10.5f\n"
                  );
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_138) &&
            ((FScriptContainerElement *)&local_138 < pFVar7 + (longlong)param_1->ArrayMax * 0x10))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_1->ArrayNum;
        if (iVar4 == param_1->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar4 + 1;
        }
        else {
          param_1->ArrayNum = iVar4 + 1;
        }
        pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_138.Data.AllocatorInstance.Data;
        *(int *)(pFVar7 + 8) = local_138.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_138.Data.ArrayMax;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
    }
    local_128.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FStructProperty>::IterateToNext(&local_128);
    pFVar2 = (FStructProperty *)local_128.Field;
  } while( true );
}

// GetParticleSysParamsUtilized @ 14817cf30

void __thiscall
UParticleModule::GetParticleSysParamsUtilized
          (UParticleModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetRandomStream @ 14817d4d0

FRandomStream * __thiscall UParticleModule::GetRandomStream(UParticleModule *this,FContext *param_1)

{
  FRandomStream *pFVar1;
  
  pFVar1 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData(param_1->Owner,this)->
            RandomStream;
  if (pFVar1 == (FRandomStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014817d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FRandomStream *)(**(code **)((longlong)*param_1->Owner->Component + 0x120))();
    return pFVar1;
  }
  return pFVar1;
}

// IsDisplayedInCurveEd @ 148185a60

bool __thiscall
UParticleModule::IsDisplayedInCurveEd(UParticleModule *this,UInterpCurveEdSetup *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FParticleCurvePair *local_18;
  undefined8 local_10;
  
  local_18 = (FParticleCurvePair *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x2f0))(this,&local_18);
  uVar6 = 0;
  if (0 < (int)local_10) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (int)local_10) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
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
      bVar2 = UInterpCurveEdSetup::ShowingCurve
                        (param_1,*(UObject **)
                                  ((longlong)&(local_18->CurveObject).field0_0x0 + lVar7));
      if (bVar2) {
        bVar2 = true;
        iVar5 = (int)local_10;
        goto LAB_148185b0e;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar6 < (int)local_10);
  }
  bVar2 = false;
  iVar5 = (int)local_10;
LAB_148185b0e:
  DestructItems<FParticleCurvePair,int>(local_18,iVar5);
  if (local_18 != (FParticleCurvePair *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar2;
}

// IsPostLoadThreadSafe @ 148185c00

bool __thiscall UParticleModule::IsPostLoadThreadSafe(UParticleModule *this)

{
  return true;
}

// IsUsedInGPUEmitter @ 148185c80

bool __thiscall UParticleModule::IsUsedInGPUEmitter(UParticleModule *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint local_res8;
  longlong local_res10;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar10 = UParticleSystem::StaticClass();
    iVar1 = (int)pUVar10->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar10->_padding_)) && (local_res8 = 0, 0 < *(int *)(lVar2 + 0x70))) {
      local_res10 = 0;
      do {
        uVar14 = 0;
        if ((int)local_res8 < *(int *)(lVar2 + 0x70)) {
          uVar14 = ~local_res8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        lVar3 = *(longlong *)(local_res10 + *(longlong *)(lVar2 + 0x68));
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x48) != 0)) {
          bVar6 = false;
          uVar14 = 0;
          if (0 < *(int *)(lVar3 + 0x48)) {
            lVar13 = 0;
            do {
              if (bVar6) goto LAB_148185ea8;
              uVar12 = 0;
              if ((int)uVar14 < *(int *)(lVar3 + 0x48)) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + lVar13);
              if (lVar4 != 0) {
                if (*(UParticleModule **)(lVar4 + 0x30) == (UParticleModule *)0x0) {
                  bVar8 = this == (UParticleModule *)0x0;
                }
                else {
                  bVar8 = *(UParticleModule **)(lVar4 + 0x30) == this;
                }
                if (bVar8) {
                  bVar6 = true;
                }
                else {
                  uVar12 = 0;
                  if (0 < *(int *)(lVar4 + 0x40)) {
                    lVar11 = 0;
                    do {
                      if (bVar6) break;
                      uVar9 = 0;
                      if ((int)uVar12 < *(int *)(lVar4 + 0x40)) {
                        uVar9 = ~uVar12 >> 0x1f;
                      }
                      if ((uVar9 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar5 = (code *)swi(3);
                        uVar7 = (*pcVar5)();
                        return (bool)uVar7;
                      }
                      if (*(UParticleModule **)(*(longlong *)(lVar4 + 0x38) + lVar11) == this) {
                        bVar6 = true;
                      }
                      uVar12 = uVar12 + 1;
                      lVar11 = lVar11 + 8;
                    } while ((int)uVar12 < *(int *)(lVar4 + 0x40));
                  }
                }
              }
              uVar14 = uVar14 + 1;
              lVar13 = lVar13 + 8;
            } while ((int)uVar14 < *(int *)(lVar3 + 0x48));
            if (bVar6) {
LAB_148185ea8:
              if ((*(int *)(lVar3 + 0x48) < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              if ((**(longlong **)(lVar3 + 0x40) != 0) &&
                 (lVar3 = *(longlong *)(**(longlong **)(lVar3 + 0x40) + 0x48), lVar3 != 0)) {
                pUVar10 = Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
                lVar3 = *(longlong *)(lVar3 + 0x10);
                iVar1 = (int)pUVar10->_padding_;
                if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar10->_padding_)) {
                  return true;
                }
              }
            }
          }
        }
        local_res8 = local_res8 + 1;
        local_res10 = local_res10 + 8;
      } while ((int)local_res8 < *(int *)(lVar2 + 0x70));
    }
  }
  return false;
}

// IsUsedInLODLevel @ 148185f80

bool __thiscall UParticleModule::IsUsedInLODLevel(UParticleModule *this,int param_1)

{
  if ((uint)param_1 < 8) {
    return (this->LODValidity & (byte)(1 << ((byte)param_1 & 0x1f))) != 0;
  }
  return false;
}

// ModuleHasCurves @ 1481867d0

bool __thiscall UParticleModule::ModuleHasCurves(UParticleModule *this)

{
  bool bVar1;
  FParticleCurvePair *local_18;
  undefined8 local_10;
  
  local_18 = (FParticleCurvePair *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x2f0))(this,&local_18);
  bVar1 = 0 < (int)local_10;
  DestructItems<FParticleCurvePair,int>(local_18,(int)local_10);
  if (local_18 != (FParticleCurvePair *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar1;
}

// PrepPerInstanceBlock @ 14818d7e0

uint __thiscall
UParticleModule::PrepPerInstanceBlock
          (UParticleModule *this,FParticleEmitterInstance *param_1,void *param_2)

{
  return 0xffffffff;
}

// PrepRandomSeedInstancePayload @ 14818da10

uint __thiscall
UParticleModule::PrepRandomSeedInstancePayload
          (UParticleModule *this,FParticleEmitterInstance *param_1,
          FParticleRandomSeedInstancePayload *param_2,FParticleRandomSeedInfo *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float local_res10 [2];
  
  if (param_1 == (FParticleEmitterInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3979782576976953993>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                       ,0x289,"Owner != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  else if (param_2 != (FParticleRandomSeedInstancePayload *)0x0) {
    param_2->RandomStream = (FRandomStream)0x0;
    if ((param_3->bGetSeedFromInstance == 0) ||
       (cVar4 = (**(code **)((longlong)*param_1->Component + 0x70))
                          (param_1->Component,param_3->ParameterName,local_res10), cVar4 != '\x01'))
    {
      if (0 < (param_3->RandomSeeds).ArrayNum) {
        uVar5 = 0;
        if (param_3->bRandomlySelectSeedArray != '\0') {
          lVar6 = (**(code **)((longlong)*param_1->Component + 0x120))();
          iVar1 = (param_3->RandomSeeds).ArrayNum;
          uVar5 = 0;
          if (0 < iVar1) {
            uVar5 = *(int *)(lVar6 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar6 + 4) = uVar5;
            uVar5 = (uint)(((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar1);
          }
        }
        uVar7 = 0;
        if ((int)uVar5 < (param_3->RandomSeeds).ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        goto LAB_14818db2c;
      }
      if (FApp::bUseFixedSeed != false) {
        FRandomStream::Initialize(&param_2->RandomStream,(FName)this->_padding_);
        return 0;
      }
    }
    else {
      if (param_3->bInstanceSeedIsIndex == '\0') {
        uVar5 = (int)ROUND(local_res10[0] * __real_40000000 + __real_3f000000) >> 1;
        (param_2->RandomStream).InitialSeed = uVar5;
        (param_2->RandomStream).Seed = uVar5;
        return 0;
      }
      iVar1 = (param_3->RandomSeeds).ArrayNum;
      if (0 < iVar1) {
        uVar5 = (int)local_res10[0];
        if ((int)(iVar1 - 1U) < (int)local_res10[0]) {
          uVar5 = iVar1 - 1U;
        }
        uVar7 = 0;
        if ((int)uVar5 < iVar1) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
LAB_14818db2c:
        uVar5 = *(uint *)((param_3->RandomSeeds).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
        (param_2->RandomStream).InitialSeed = uVar5;
        (param_2->RandomStream).Seed = uVar5;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

// RemoveModuleCurvesFromEditor @ 14818fc70

void __thiscall
UParticleModule::RemoveModuleCurvesFromEditor(UParticleModule *this,UInterpCurveEdSetup *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FParticleCurvePair *local_18;
  undefined8 local_10;
  
  local_18 = (FParticleCurvePair *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x2f0))(this,&local_18);
  uVar6 = 0;
  iVar5 = (int)local_10;
  if (0 < (int)local_10) {
    lVar7 = 0;
    do {
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
        iVar5 = (int)local_10;
      }
      pUVar1 = *(UObject **)((longlong)&(local_18->CurveObject).field0_0x0 + lVar7);
      if (pUVar1 != (UObject *)0x0) {
        UInterpCurveEdSetup::RemoveCurve(param_1,pUVar1);
        iVar5 = (int)local_10;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar6 < iVar5);
  }
  DestructItems<FParticleCurvePair,int>(local_18,iVar5);
  if (local_18 != (FParticleCurvePair *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// RequiredBytes @ 1481917e0

uint __thiscall
UParticleModule::RequiredBytes(UParticleModule *this,UParticleModuleTypeDataBase *param_1)

{
  return 0;
}

// RequiredBytesPerInstance @ 1481918b0

uint __thiscall UParticleModule::RequiredBytesPerInstance(UParticleModule *this)

{
  return 0;
}

// SetRandomSeedEntry @ 1481970a0

bool __thiscall UParticleModule::SetRandomSeedEntry(UParticleModule *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (**(code **)(this->_padding_ + 0x380))();
  if (lVar5 == 0) {
    return false;
  }
  if (*(int *)(lVar5 + 0x18) <= param_1) {
    TArray<int,TSizedDefaultAllocator<32>_>::AddZeroed
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x10),
               (param_1 - *(int *)(lVar5 + 0x18)) + 1);
  }
  uVar4 = 0;
  if (param_1 < *(int *)(lVar5 + 0x18)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(int *)((((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x10))->AllocatorInstance).Data +
          (longlong)param_1 * 4) = param_2;
  return true;
}

// SetToSensibleDefaults @ 148197780

void __thiscall
UParticleModule::SetToSensibleDefaults(UParticleModule *this,UParticleEmitter *param_1)

{
  return;
}

// Spawn @ 1481995d0

void __thiscall UParticleModule::Spawn(UParticleModule *this,FSpawnContext *param_1)

{
  return;
}

// Update @ 1481a7570

void __thiscall UParticleModule::Update(UParticleModule *this,FUpdateContext *param_1)

{
  return;
}

