// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 147315000

UClass * __cdecl UParticleModuleTypeDataBeam2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataBeam2",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataBeam2,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataBeam2>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataBeam2>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.InnerSingleton;
}

// UParticleModuleTypeDataBeam2 @ 147318d70

UParticleModuleTypeDataBeam2 * __thiscall
UParticleModuleTypeDataBeam2::UParticleModuleTypeDataBeam2
          (UParticleModuleTypeDataBeam2 *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBeam2__6B_;
  (this->BranchParentName).ComparisonIndex = 0;
  (this->BranchParentName).Number = 0;
  (this->Distance)._padding_ = 0;
  (this->Distance)._padding_ = 0;
  (this->Distance)._padding_ = 0;
  *(undefined4 *)&(this->Distance)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Distance)._padding_ + 4) = 0;
  (this->Distance).MinValue = 0.0;
  (this->Distance).MaxValue = 0.0;
  (this->Distance).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->TaperFactor)._padding_ = 0;
  (this->TaperFactor)._padding_ = 0;
  (this->TaperFactor)._padding_ = 0;
  *(undefined4 *)&(this->TaperFactor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TaperFactor)._padding_ + 4) = 0;
  (this->TaperFactor).MinValue = 0.0;
  (this->TaperFactor).MaxValue = 0.0;
  (this->TaperFactor).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->TaperScale)._padding_ = 0;
  (this->TaperScale)._padding_ = 0;
  (this->TaperScale)._padding_ = 0;
  *(undefined4 *)&(this->TaperScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TaperScale)._padding_ + 4) = 0;
  (this->TaperScale).MinValue = 0.0;
  (this->TaperScale).MaxValue = 0.0;
  (this->TaperScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->LOD_BeamModule_Source).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_Source).ArrayNum = 0;
  (this->LOD_BeamModule_Source).ArrayMax = 0;
  (this->LOD_BeamModule_Target).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_Target).ArrayNum = 0;
  (this->LOD_BeamModule_Target).ArrayMax = 0;
  (this->LOD_BeamModule_Noise).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_Noise).ArrayNum = 0;
  (this->LOD_BeamModule_Noise).ArrayMax = 0;
  (this->LOD_BeamModule_SourceModifier).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_SourceModifier).ArrayNum = 0;
  (this->LOD_BeamModule_SourceModifier).ArrayMax = 0;
  (this->LOD_BeamModule_TargetModifier).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_TargetModifier).ArrayNum = 0;
  (this->LOD_BeamModule_TargetModifier).ArrayMax = 0;
  return this;
}

// ~UParticleModuleTypeDataBeam2 @ 147319840

void __thiscall
UParticleModuleTypeDataBeam2::~UParticleModuleTypeDataBeam2(UParticleModuleTypeDataBeam2 *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBeam2__6B_;
  pFVar1 = (this->LOD_BeamModule_TargetModifier).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LOD_BeamModule_SourceModifier).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LOD_BeamModule_Noise).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LOD_BeamModule_Target).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LOD_BeamModule_Source).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->TaperScale)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->TaperFactor)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Distance)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14731b090

bool __thiscall UParticleModuleTypeDataBeam2::CanTickInAnyThread(UParticleModuleTypeDataBeam2 *this)

{
  return true;
}

// GetPrimitiveType @ 14731b390

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

EPrimitiveType __thiscall
UParticleModuleTypeDataBeam2::GetPrimitiveType(UParticleModuleTypeDataBeam2 *this)

{
  return PT_TriangleStrip;
}

// GetPrivateStaticClass @ 14731bfb0

UClass * __cdecl UParticleModuleTypeDataBeam2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataBeam2",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataBeam2,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTypeDataBeam2>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataBeam2>,local_res8,
               UParticleModuleTypeDataBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleTypeDataBeam2 @ 14731d040

void __cdecl UParticleModuleTypeDataBeam2::StaticRegisterNativesUParticleModuleTypeDataBeam2(void)

{
  return;
}

// UParticleModuleTypeDataBeam2 @ 1480f5950

UParticleModuleTypeDataBeam2 * __thiscall
UParticleModuleTypeDataBeam2::UParticleModuleTypeDataBeam2
          (UParticleModuleTypeDataBeam2 *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  UParticleModuleTypeDataBase::UParticleModuleTypeDataBase
            ((UParticleModuleTypeDataBase *)this,param_1);
  uVar6 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UParticleModuleTypeDataBeam2__6B_;
  pvVar5 = ThreadLocalStoragePointer;
  (this->BranchParentName).ComparisonIndex = 0;
  (this->BranchParentName).Number = 0;
  (this->Distance)._padding_ = 0;
  (this->Distance)._padding_ = 0;
  lVar4 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  (this->Distance)._padding_ = 0;
  *(undefined4 *)&(this->Distance)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Distance)._padding_ + 4) = 0;
  (this->Distance).MinValue = 0.0;
  (this->Distance).MaxValue = 0.0;
  (this->Distance).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->TaperFactor)._padding_ = 0;
  (this->TaperFactor)._padding_ = 0;
  (this->TaperFactor)._padding_ = 0;
  *(undefined4 *)&(this->TaperFactor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TaperFactor)._padding_ + 4) = 0;
  (this->TaperFactor).MinValue = 0.0;
  (this->TaperFactor).MaxValue = 0.0;
  (this->TaperFactor).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->TaperScale)._padding_ = 0;
  (this->TaperScale)._padding_ = 0;
  (this->TaperScale)._padding_ = 0;
  *(undefined4 *)&(this->TaperScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TaperScale)._padding_ + 4) = 0;
  (this->TaperScale).MinValue = 0.0;
  (this->TaperScale).MaxValue = 0.0;
  (this->TaperScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->LOD_BeamModule_Source).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_Source).ArrayNum = 0;
  (this->LOD_BeamModule_Source).ArrayMax = 0;
  (this->LOD_BeamModule_Target).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_Target).ArrayNum = 0;
  (this->LOD_BeamModule_Target).ArrayMax = 0;
  (this->LOD_BeamModule_Noise).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_Noise).ArrayNum = 0;
  (this->LOD_BeamModule_Noise).ArrayMax = 0;
  (this->LOD_BeamModule_SourceModifier).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_SourceModifier).ArrayNum = 0;
  (this->LOD_BeamModule_SourceModifier).ArrayMax = 0;
  (this->LOD_BeamModule_TargetModifier).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LOD_BeamModule_TargetModifier).ArrayNum = 0;
  (this->LOD_BeamModule_TargetModifier).ArrayMax = 0;
  if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->bAlwaysOn = 0;
  (this->BeamMethod).Value = '\x01';
  this->TextureTile = 1;
  this->TextureTileDistance = 0.0;
  this->Sheets = 1;
  this->Speed = 10.0;
  this->InterpolationPoints = 0;
  this->BranchParentName = ::ConstructorStatics.NAME_None;
  (this->TaperMethod).Value = '\0';
  puVar2 = &this->field_0xf8;
  this->RenderGeometry = 1;
  this->RenderTessellation = 0;
  this->RenderLines = 0;
  this->RenderDirectLine = 0;
  return this;
}

// AddModuleCurvesToEditor @ 1480fc7e0

bool __thiscall
UParticleModuleTypeDataBeam2::AddModuleCurvesToEditor
          (UParticleModuleTypeDataBeam2 *this,UInterpCurveEdSetup *param_1,
          TArray<FCurveEdEntry_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// CacheModuleInfo @ 148100950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleTypeDataBeam2::CacheModuleInfo
          (UParticleModuleTypeDataBeam2 *this,UParticleEmitter *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  TArray<UParticleModuleBeamSource_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UParticleModuleBeamTarget_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<UParticleModuleBeamNoise_*,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UParticleModuleBeamModifier_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UParticleModuleBeamModifier_*,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined8 *puVar12;
  size_t _Size;
  uint uVar13;
  longlong *plVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  UClass *pUVar19;
  TArray<UParticleModuleBeamTarget_*,TSizedDefaultAllocator<32>_> *pTVar20;
  FString *pFVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  longlong *plVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar13 = (param_1->LODLevels).ArrayNum;
  pTVar7 = &this->LOD_BeamModule_Source;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->LOD_BeamModule_Source).ArrayMax;
  lVar27 = 0;
  piVar2 = &(this->LOD_BeamModule_Source).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar7->AllocatorInstance,0,piVar1);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar13,&pTVar7->AllocatorInstance,piVar2,piVar1);
  _Size = (longlong)(int)uVar13 * 8;
  memset((pTVar7->AllocatorInstance).Data + (longlong)iVar17 * 8,0,_Size);
  pTVar8 = &this->LOD_BeamModule_Target;
  piVar1 = &(this->LOD_BeamModule_Target).ArrayNum;
  piVar3 = &(this->LOD_BeamModule_Target).ArrayMax;
  *piVar1 = 0;
  if (*piVar3 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar8->AllocatorInstance,0,piVar3);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar13,&pTVar8->AllocatorInstance,piVar1,piVar3);
  memset((pTVar8->AllocatorInstance).Data + (longlong)iVar17 * 8,0,_Size);
  pTVar9 = &this->LOD_BeamModule_Noise;
  piVar3 = &(this->LOD_BeamModule_Noise).ArrayNum;
  piVar4 = &(this->LOD_BeamModule_Noise).ArrayMax;
  *piVar3 = 0;
  if (*piVar4 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar9->AllocatorInstance,0,piVar4);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar13,&pTVar9->AllocatorInstance,piVar3,piVar4);
  memset((pTVar9->AllocatorInstance).Data + (longlong)iVar17 * 8,0,_Size);
  pTVar10 = &this->LOD_BeamModule_SourceModifier;
  piVar4 = &(this->LOD_BeamModule_SourceModifier).ArrayNum;
  piVar5 = &(this->LOD_BeamModule_SourceModifier).ArrayMax;
  *piVar4 = 0;
  if (*piVar5 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar10->AllocatorInstance,0,piVar5);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar13,&pTVar10->AllocatorInstance,piVar4,piVar5);
  memset((pTVar10->AllocatorInstance).Data + (longlong)iVar17 * 8,0,_Size);
  pTVar11 = &this->LOD_BeamModule_TargetModifier;
  piVar5 = &(this->LOD_BeamModule_TargetModifier).ArrayNum;
  piVar6 = &(this->LOD_BeamModule_TargetModifier).ArrayMax;
  *piVar5 = 0;
  if (*piVar6 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar11->AllocatorInstance,0,piVar6);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,uVar13,&pTVar11->AllocatorInstance,piVar5,piVar6);
  memset((pTVar11->AllocatorInstance).Data + (longlong)iVar17 * 8,0,_Size);
  uVar29 = 0;
  if (0 < (int)uVar13) {
    do {
      pwVar26 = L"";
      if ((int)uVar29 < (param_1->LODLevels).ArrayNum) {
        uVar30 = 0;
        if ((int)uVar29 < (param_1->LODLevels).ArrayNum) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar25 = *(longlong *)((param_1->LODLevels).AllocatorInstance.Data + lVar27 * 8);
        if (lVar25 == 0) goto LAB_148100c32;
      }
      else {
        lVar25 = 0;
LAB_148100c32:
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                            ,0x2e2,L"");
        if (bVar16) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      if (uVar29 == 0) {
        if (*(longlong *)(lVar25 + 0x48) == 0) {
          pFVar21 = GetTypeName<UParticleModuleTypeDataBeam2>(&local_58);
          if ((pFVar21->Data).ArrayNum != 0) {
            pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar26);
        }
        pUVar19 = Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
        bVar16 = FObjectPtr::IsA((FObjectPtr *)(lVar25 + 0x48),pUVar19);
        if ((!bVar16) || (*(longlong *)(lVar25 + 0x48) == 0)) {
          pFVar21 = GetTypeName<UParticleModuleTypeDataBeam2>(&local_78);
          if ((pFVar21->Data).ArrayNum != 0) {
            pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
          pFVar21 = GetFullNameForCastLogError<UParticleModuleTypeDataBase>
                              (&local_68,*(UParticleModuleTypeDataBase **)(lVar25 + 0x48));
          if ((pFVar21->Data).ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar23,pwVar26);
        }
      }
      uVar30 = 0;
      if (0 < *(int *)(lVar25 + 0x40)) {
        lVar28 = 0;
        do {
          uVar18 = 0;
          if ((int)uVar30 < *(int *)(lVar25 + 0x40)) {
            uVar18 = ~uVar30 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          plVar14 = *(longlong **)(*(longlong *)(lVar25 + 0x38) + lVar28);
          iVar17 = (**(code **)(*plVar14 + 0x308))(plVar14);
          if ((iVar17 != 2) || ((*(byte *)(plVar14 + 5) & 0x80) == 0)) goto LAB_1481012c9;
          pUVar19 = Z_Construct_UClass_UParticleModuleBeamSource_NoRegister();
          iVar17 = (int)pUVar19->_padding_;
          plVar24 = plVar14;
          if ((*(int *)(plVar14[2] + 0x38) < iVar17) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8)
              != &pUVar19->_padding_)) {
            pUVar19 = Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister();
            iVar17 = (int)pUVar19->_padding_;
            if ((iVar17 <= *(int *)(plVar14[2] + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) ==
                &pUVar19->_padding_)) {
              uVar18 = 0;
              if ((int)uVar29 < *piVar1) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              if (*(longlong *)((pTVar8->AllocatorInstance).Data + lVar27 * 8) == 0) {
                pUVar19 = Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister();
                iVar17 = (int)pUVar19->_padding_;
                if ((*(int *)(plVar14[2] + 0x38) < iVar17) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) !=
                    &pUVar19->_padding_)) {
                  plVar24 = (longlong *)0x0;
                }
                uVar18 = 0;
                if ((int)uVar29 < *piVar1) {
                  uVar18 = ~uVar29 >> 0x1f;
                }
                pTVar20 = pTVar8;
                if ((uVar18 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                goto LAB_148101211;
              }
              if (4 < (byte)LogParticles._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
              }
              goto LAB_148101218;
            }
            pUVar19 = Z_Construct_UClass_UParticleModuleBeamNoise_NoRegister();
            iVar17 = (int)pUVar19->_padding_;
            if ((iVar17 <= *(int *)(plVar14[2] + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) ==
                &pUVar19->_padding_)) {
              uVar18 = 0;
              if ((int)uVar29 < *piVar3) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              if (*(longlong *)((pTVar9->AllocatorInstance).Data + lVar27 * 8) == 0) {
                pUVar19 = Z_Construct_UClass_UParticleModuleBeamNoise_NoRegister();
                iVar17 = (int)pUVar19->_padding_;
                if ((*(int *)(plVar14[2] + 0x38) < iVar17) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) !=
                    &pUVar19->_padding_)) {
                  plVar24 = (longlong *)0x0;
                }
                uVar18 = 0;
                if ((int)uVar29 < *piVar3) {
                  uVar18 = ~uVar29 >> 0x1f;
                }
                pTVar20 = (TArray<UParticleModuleBeamTarget_*,TSizedDefaultAllocator<32>_> *)pTVar9;
                if ((uVar18 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                goto LAB_148101211;
              }
              if (4 < (byte)LogParticles._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
              }
              goto LAB_148101218;
            }
            pUVar19 = Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();
            iVar17 = (int)pUVar19->_padding_;
            if ((iVar17 <= *(int *)(plVar14[2] + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) ==
                &pUVar19->_padding_)) {
              pUVar19 = Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();
              iVar17 = (int)pUVar19->_padding_;
              if ((*(int *)(plVar14[2] + 0x38) < iVar17) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) !=
                  &pUVar19->_padding_)) {
                plVar24 = (longlong *)0x0;
              }
              if ((((*(byte *)((longlong)plVar24 + 0x34) & 1) != 0) ||
                  ((*(byte *)(plVar24 + 0x13) & 1) != 0)) ||
                 ((*(byte *)((longlong)plVar24 + 0x104) & 1) != 0)) {
                if ((char)plVar24[6] == '\0') {
                  uVar18 = 0;
                  if ((int)uVar29 < *piVar4) {
                    uVar18 = ~uVar29 >> 0x1f;
                  }
                  pTVar20 = (TArray<UParticleModuleBeamTarget_*,TSizedDefaultAllocator<32>_> *)
                            pTVar10;
                  if ((uVar18 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                }
                else {
                  if ((char)plVar24[6] != '\x01') goto LAB_1481012c9;
                  uVar18 = 0;
                  if ((int)uVar29 < *piVar5) {
                    uVar18 = ~uVar29 >> 0x1f;
                  }
                  pTVar20 = (TArray<UParticleModuleBeamTarget_*,TSizedDefaultAllocator<32>_> *)
                            pTVar11;
                  if ((uVar18 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                }
LAB_148101211:
                *(longlong **)
                 ((((TArray<UParticleModuleBeamSource_*,TSizedDefaultAllocator<32>_> *)pTVar20)->
                  AllocatorInstance).Data + lVar27 * 8) = plVar24;
                goto LAB_148101218;
              }
            }
          }
          else {
            uVar18 = 0;
            if ((int)uVar29 < *piVar2) {
              uVar18 = ~uVar29 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if (*(longlong *)((pTVar7->AllocatorInstance).Data + lVar27 * 8) == 0) {
              pUVar19 = Z_Construct_UClass_UParticleModuleBeamSource_NoRegister();
              iVar17 = (int)pUVar19->_padding_;
              if ((*(int *)(plVar14[2] + 0x38) < iVar17) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(plVar14[2] + 0x30) + (longlong)iVar17 * 8) !=
                  &pUVar19->_padding_)) {
                plVar24 = (longlong *)0x0;
              }
              uVar18 = 0;
              if ((int)uVar29 < *piVar2) {
                uVar18 = ~uVar29 >> 0x1f;
              }
              pTVar20 = (TArray<UParticleModuleBeamTarget_*,TSizedDefaultAllocator<32>_> *)pTVar7;
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              goto LAB_148101211;
            }
            if (4 < (byte)LogParticles._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
            }
LAB_148101218:
            puVar22 = *(undefined8 **)(lVar25 + 0x80);
            puVar12 = puVar22 + *(int *)(lVar25 + 0x88);
            for (; puVar22 != puVar12; puVar22 = puVar22 + 1) {
              if ((longlong *)*puVar22 == (longlong *)0x0) {
                bVar16 = plVar14 == (longlong *)0x0;
              }
              else {
                bVar16 = (longlong *)*puVar22 == plVar14;
              }
              if (bVar16) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!LODLevel->UpdateModules.Contains(CheckModule)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                                    ,0x333,L"");
                if (bVar16) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                break;
              }
            }
            puVar22 = *(undefined8 **)(lVar25 + 0x70);
            puVar12 = puVar22 + *(int *)(lVar25 + 0x78);
            for (; puVar22 != puVar12; puVar22 = puVar22 + 1) {
              if ((longlong *)*puVar22 == (longlong *)0x0) {
                bVar16 = plVar14 == (longlong *)0x0;
              }
              else {
                bVar16 = (longlong *)*puVar22 == plVar14;
              }
              if (bVar16) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!LODLevel->SpawnModules.Contains(CheckModule)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                                    ,0x334,L"");
                if (bVar16) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                break;
              }
            }
          }
LAB_1481012c9:
          uVar30 = uVar30 + 1;
          lVar28 = lVar28 + 8;
        } while ((int)uVar30 < *(int *)(lVar25 + 0x40));
      }
      uVar29 = uVar29 + 1;
      lVar27 = lVar27 + 1;
    } while (lVar27 < (int)uVar13);
  }
  return;
}

// CollectPSOPrecacheData @ 148103140

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UParticleModuleTypeDataBeam2::CollectPSOPrecacheData
          (UParticleModuleTypeDataBeam2 *this,UParticleEmitter *param_1,FPSOPrecacheParams *param_2)

{
  TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EPrimitiveType EVar7;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar8;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FVar8 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
  pTVar1 = &param_2->VertexFactoryDataList;
  local_18 = &FParticleBeamTrailVertexFactory::StaticType;
  _uStack_10 = GParticleBeamTrailVertexDeclaration._32_8_;
  if (0 < param_1->DynamicParameterDataOffset) {
    _uStack_10 = GParticleBeamTrailVertexDeclarationDynamic._32_8_;
  }
  if (FVar8 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    FVar8 = (ForElementType<FPSOPrecacheVertexFactoryData>)pTVar1;
  }
  if (((ulonglong)FVar8 <= &local_18) &&
     (&local_18 <
      (undefined8 *)((longlong)(param_2->VertexFactoryDataList).ArrayMax * 0x10 + (longlong)FVar8)))
  {
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
  iVar6 = (param_2->VertexFactoryDataList).ArrayNum;
  piVar2 = &(param_2->VertexFactoryDataList).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_2->VertexFactoryDataList).ArrayNum = iVar6 + 1;
  FVar8 = (param_2->VertexFactoryDataList).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
    FVar8 = (ForElementType<FPSOPrecacheVertexFactoryData>)pTVar1;
  }
  puVar3 = (undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
  *puVar3 = (undefined4)local_18;
  puVar3[1] = local_18._4_4_;
  puVar3[2] = uStack_10;
  puVar3[3] = uStack_c;
  EVar7 = (**(code **)(this->_padding_ + 0x3b8))(this);
  param_2->PrimitiveType = EVar7;
  return;
}

// CreateInstance @ 148104ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParticleEmitterInstance * __thiscall
UParticleModuleTypeDataBeam2::CreateInstance
          (UParticleModuleTypeDataBeam2 *this,UParticleEmitter *param_1,
          IParticleEmitterInstanceOwner *param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleBeam2EmitterInstance *pFVar3;
  FParticleEmitterInstance *pFVar4;
  
  (**(code **)(this->_padding_ + 0x2e8))();
  pFVar3 = ::operator_new(0x3c0);
  if (pFVar3 == (FParticleBeam2EmitterInstance *)0x0) {
    pFVar3 = (FParticleBeam2EmitterInstance *)0x0;
  }
  else {
    pFVar3 = FParticleBeam2EmitterInstance::FParticleBeam2EmitterInstance(pFVar3,param_2);
    if (pFVar3 != (FParticleBeam2EmitterInstance *)0x0) goto LAB_148104f35;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Instance",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                     ,0x2b6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FParticleEmitterInstance *)(*pcVar1)();
    return pFVar4;
  }
LAB_148104f35:
  (**(code **)(pFVar3->_padding_ + 8))(pFVar3,param_1);
  return (FParticleEmitterInstance *)pFVar3;
}

// GetDataPointerOffsets @ 1481110b0

void __thiscall
UParticleModuleTypeDataBeam2::GetDataPointerOffsets
          (UParticleModuleTypeDataBeam2 *this,FParticleEmitterInstance *param_1,uchar *param_2,
          int *param_3,int *param_4,int *param_5,int *param_6,int *param_7,int *param_8,int *param_9
          ,int *param_10,int *param_11,int *param_12)

{
  int iVar1;
  UParticleLODLevel *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1->bIsBeam == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner->bIsBeam",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                       ,0x3ae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = param_1[1].CurrentLODLevel;
  iVar7 = 2;
  iVar6 = 0xa8;
  *param_6 = -1;
  *param_7 = -1;
  *param_8 = -1;
  *param_9 = -1;
  *param_5 = -1;
  *param_10 = 2;
  *param_11 = -1;
  *param_12 = -1;
  *param_4 = *param_3;
  if (0 < this->InterpolationPoints) {
    *param_5 = *param_3 + 0xa8;
    iVar1 = this->InterpolationPoints;
    iVar6 = (iVar1 + 7) * 0x18;
    if (iVar1 != 0) {
      iVar7 = iVar1 + 1;
    }
    *param_10 = iVar7;
  }
  if ((pUVar2 != (UParticleLODLevel *)0x0) &&
     ((*(byte *)&(pUVar2->RequiredModule).field0_0x0 & 1) != 0)) {
    iVar1 = *(int *)((longlong)&(pUVar2->RequiredModule).field0_0x0 + 4);
    *param_6 = *param_3 + iVar6;
    *param_7 = *param_3 + iVar6 + 4;
    *param_8 = *param_3 + iVar6 + 8;
    iVar7 = (iVar1 + 1) * 0x18;
    iVar6 = iVar6 + 8 + iVar7;
    if (((ulonglong)pUVar2[1].UpdateModules.AllocatorInstance.Data & 1) != 0) {
      *param_9 = *param_3 + iVar6;
      iVar6 = iVar6 + iVar7;
    }
    iVar7 = (int)pUVar2[2]._padding_;
    iVar5 = 1;
    if (iVar7 != 0) {
      iVar5 = iVar7;
    }
    *param_10 = (iVar1 + 2) * iVar5;
    if ((pUVar2[2]._padding_ & 0x100000000) != 0) {
      *param_12 = *param_3 + iVar6;
      iVar6 = iVar6 + 4;
    }
  }
  if ((this->TaperMethod).Value != '\0') {
    *param_11 = *param_3 + iVar6;
  }
  return;
}

// GetDataPointers @ 148111370

void __thiscall
UParticleModuleTypeDataBeam2::GetDataPointers
          (UParticleModuleTypeDataBeam2 *this,FParticleEmitterInstance *param_1,uchar *param_2,
          int *param_3,FBeam2TypeDataPayload **param_4,TVector<double> **param_5,float **param_6,
          float **param_7,TVector<double> **param_8,TVector<double> **param_9,float **param_10,
          float **param_11,FBeamParticleModifierPayloadData **param_12,
          FBeamParticleModifierPayloadData **param_13)

{
  int iVar1;
  int iVar2;
  UParticleLODLevel *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  if (param_1->bIsBeam == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner->bIsBeam",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                       ,0x355,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *param_3;
  iVar7 = 2;
  pUVar3 = param_1[1].CurrentLODLevel;
  *param_3 = iVar1 + 0xa8;
  *param_4 = (FBeam2TypeDataPayload *)(param_2 + iVar1);
  if (0 < this->InterpolationPoints) {
    iVar1 = *param_3;
    *param_3 = iVar1 + 0x18;
    *param_5 = (TVector<double> *)(param_2 + iVar1);
    *param_3 = *param_3 + this->InterpolationPoints * 0x18 + -0x18;
    if (this->InterpolationPoints != 0) {
      iVar7 = this->InterpolationPoints + 1;
    }
  }
  if ((pUVar3 != (UParticleLODLevel *)0x0) &&
     ((*(byte *)&(pUVar3->RequiredModule).field0_0x0 & 1) != 0)) {
    iVar7 = *param_3;
    iVar1 = *(int *)((longlong)&(pUVar3->RequiredModule).field0_0x0 + 4);
    *param_3 = iVar7 + 4;
    *param_6 = (float *)(param_2 + iVar7);
    iVar7 = *param_3;
    *param_3 = iVar7 + 4;
    *param_7 = (float *)(param_2 + iVar7);
    iVar7 = *param_3;
    *param_3 = iVar7 + 0x18;
    *param_8 = (TVector<double> *)(param_2 + iVar7);
    iVar7 = iVar1 * 0x18;
    iVar6 = *param_3 + iVar7;
    *param_3 = iVar6;
    if (((ulonglong)pUVar3[1].UpdateModules.AllocatorInstance.Data & 1) != 0) {
      *param_3 = iVar6 + 0x18;
      *param_9 = (TVector<double> *)(param_2 + iVar6);
      *param_3 = *param_3 + iVar7;
      iVar6 = *param_3;
    }
    iVar2 = (int)pUVar3[2]._padding_;
    iVar7 = 1;
    if (iVar2 != 0) {
      iVar7 = iVar2;
    }
    iVar7 = (iVar1 + 2) * iVar7;
    if ((pUVar3[2]._padding_ & 0x100000000) != 0) {
      *param_3 = iVar6 + 4;
      *param_11 = (float *)(param_2 + iVar6);
    }
  }
  if ((this->TaperMethod).Value != '\0') {
    iVar1 = *param_3;
    *param_3 = iVar1 + 4;
    *param_10 = (float *)(param_2 + iVar1);
    *param_3 = *param_3 + iVar7 * 4 + -4;
  }
  if (param_1[1].TypeDataInstanceOffset != -1) {
    iVar7 = *param_3;
    *param_12 = (FBeamParticleModifierPayloadData *)(param_2 + param_1[1].TypeDataInstanceOffset);
    *param_3 = iVar7;
  }
  if (param_1[1].LightVolumetricScatteringIntensity != -NAN) {
    iVar7 = *param_3;
    *param_13 = (FBeamParticleModifierPayloadData *)
                (param_2 + (int)param_1[1].LightVolumetricScatteringIntensity);
    *param_3 = iVar7;
  }
  return;
}

// GetNoiseRange @ 148116a50

void __thiscall
UParticleModuleTypeDataBeam2::GetNoiseRange
          (UParticleModuleTypeDataBeam2 *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)uVar1;
  (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar1;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetVertexFactoryType @ 14811c720

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
UParticleModuleTypeDataBeam2::GetVertexFactoryType(UParticleModuleTypeDataBeam2 *this)

{
  return &FParticleBeamTrailVertexFactory::StaticType;
}

// InitializeDefaults @ 148121d80

void __thiscall UParticleModuleTypeDataBeam2::InitializeDefaults(UParticleModuleTypeDataBeam2 *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Distance);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionDistance");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 25.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Distance).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->TaperFactor);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionTaperFactor");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->TaperFactor).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->TaperScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionTaperScale");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->TaperScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148125f10

void __thiscall UParticleModuleTypeDataBeam2::PostInitProperties(UParticleModuleTypeDataBeam2 *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Distance);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionDistance");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 25.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Distance).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->TaperFactor);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionTaperFactor");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->TaperFactor).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->TaperScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionTaperScale");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->TaperScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// RequiredBytes @ 14812a240

uint __thiscall
UParticleModuleTypeDataBeam2::RequiredBytes
          (UParticleModuleTypeDataBeam2 *this,UParticleModuleTypeDataBase *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 2;
  iVar1 = this->InterpolationPoints;
  uVar5 = 0xa8;
  if ((-1 < iVar1) && (uVar5 = (iVar1 + 7) * 0x18, iVar1 != 0)) {
    iVar4 = iVar1 + 1;
  }
  if (((0 < (this->LOD_BeamModule_Noise).ArrayNum) &&
      (lVar2 = *(longlong *)(this->LOD_BeamModule_Noise).AllocatorInstance.Data, lVar2 != 0)) &&
     ((*(byte *)(lVar2 + 0x30) & 1) != 0)) {
    iVar4 = (*(int *)(lVar2 + 0x34) + 1) * 0x18;
    uVar3 = iVar4 + 8 + uVar5;
    uVar5 = uVar3 + iVar4;
    if ((*(byte *)(lVar2 + 0x138) & 1) == 0) {
      uVar5 = uVar3;
    }
    iVar4 = 1;
    if (*(int *)(lVar2 + 0x180) != 0) {
      iVar4 = *(int *)(lVar2 + 0x180);
    }
    iVar4 = (*(int *)(lVar2 + 0x34) + 2) * iVar4;
    if ((*(byte *)(lVar2 + 0x18c) & 1) != 0) {
      uVar5 = uVar5 + 4;
    }
  }
  uVar3 = uVar5 + iVar4 * 4;
  if ((this->TaperMethod).Value == '\0') {
    uVar3 = uVar5;
  }
  return uVar3;
}

// Spawn @ 1481357c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleTypeDataBeam2::Spawn(UParticleModuleTypeDataBeam2 *this,FSpawnContext *param_1)

{
  double dVar1;
  longlong lVar2;
  FBaseParticle *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  longlong lVar11;
  TTransform<double> *pTVar12;
  UObject *pUVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  uint uVar24;
  uint uVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar26;
  uint uVar27;
  uint uVar29;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  int local_res8 [2];
  double *local_res10;
  FBeamParticleModifierPayloadData *local_res18;
  FBeamParticleModifierPayloadData *local_res20;
  longlong local_148;
  TVector<double>_u_0 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100 [25];
  
  lVar2 = param_1->_padding_;
  if (((*(byte *)(lVar2 + 0x161) & 1) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner->bIsBeam",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                          ,0x68,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8[0] = param_1->Offset;
  pFVar3 = param_1->ParticleBase;
  uVar15 = 0;
  local_res10 = (double *)0x0;
  local_100[0] = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_148 = 0;
  local_128 = 0;
  local_res18 = (FBeamParticleModifierPayloadData *)0x0;
  local_res20 = (FBeamParticleModifierPayloadData *)0x0;
  (**(code **)(this->_padding_ + 0x3f0))
            (this,lVar2,pFVar3,local_res8,&local_res10,local_100,&local_108,&local_110,&local_118,
             &local_120,&local_148,&local_128,&local_res18,&local_res20);
  if (*(longlong *)(lVar2 + 0x288) == 0) {
    lVar11 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x10))();
    dVar8 = *(double *)(lVar11 + 0x28);
    dVar1 = *(double *)(lVar11 + 0x30);
    *local_res10 = *(double *)(lVar11 + 0x20);
    local_res10[1] = dVar8;
    local_res10[2] = dVar1;
    pTVar12 = UParticleModule::FContext::GetTransform((FContext *)param_1);
    auVar39 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
    dVar7 = (pTVar12->Scale3D).ZW.m128d_f64[0] * 0.0;
    dVar8 = (pTVar12->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar20 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
    dVar49 = (pTVar12->Scale3D).XY.m128d_f64[0] * ___xmm_00000000000000003ff0000000000000;
    dVar50 = (pTVar12->Scale3D).XY.m128d_f64[1] * _UNK_150689518;
    dVar9 = (pTVar12->Rotation).ZW.m128d_f64[1];
    auVar28 = blendpd(auVar20,auVar39,2);
    auVar42._8_4_ = SUB84(dVar50,0);
    auVar42._0_8_ = dVar49;
    uVar40 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar42._12_4_ = uVar40;
    dVar1 = auVar39._0_8_;
    auVar43._0_8_ = auVar42._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar49;
    auVar43._8_8_ = dVar7 * auVar20._8_8_ - dVar1 * dVar50;
    auVar44._8_4_ = SUB84(dVar50,0);
    auVar44._0_8_ = dVar49;
    auVar44._12_4_ = uVar40;
    auVar20._8_4_ = SUB84(dVar8,0);
    auVar20._0_8_ = dVar7;
    auVar20._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar20 = blendpd(auVar44,auVar20,2);
    auVar33._0_8_ = auVar20._0_8_ * dVar1 - auVar28._0_8_ * dVar7;
    auVar33._8_8_ = auVar20._8_8_ * auVar39._8_8_ - auVar28._8_8_ * dVar8;
    auVar20 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
    auVar44 = blendpd(auVar43,auVar33,2);
    dVar8 = auVar43._8_8_ + auVar43._8_8_;
    dVar5 = auVar33._0_8_ + auVar33._0_8_;
    uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar45._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar45._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar35._8_4_ = SUB84(dVar5,0);
    auVar35._0_8_ = dVar8;
    auVar35._12_4_ = uVar40;
    auVar30._8_4_ = SUB84(dVar5,0);
    auVar30._0_8_ = dVar8;
    auVar30._12_4_ = uVar40;
    auVar44 = blendpd(auVar30,auVar45,2);
    auVar36._0_8_ = auVar35._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar8;
    auVar36._8_8_ = auVar45._0_8_ * auVar20._8_8_ - dVar1 * dVar5;
    auVar20 = blendpd(auVar20,auVar39,2);
    auVar28._8_4_ = SUB84(auVar36._8_8_,0);
    auVar28._0_8_ = auVar36._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
    auVar31._0_8_ = auVar44._0_8_ * dVar1 - auVar20._0_8_ * auVar45._0_8_;
    auVar31._8_8_ = auVar44._8_8_ * auVar39._8_8_ - auVar20._8_8_ * auVar45._8_8_;
    auVar20 = blendpd(auVar36,auVar31,2);
    dVar1 = dVar5 * dVar9 + dVar50 + auVar31._0_8_;
    auVar39._8_4_ = SUB84(dVar1,0);
    auVar39._0_8_ = dVar8 * dVar9 + dVar49 + auVar28._8_8_;
    auVar39._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(local_res10 + 3) = auVar39;
    local_res10[5] = auVar45._0_8_ * dVar9 + dVar7 + auVar20._0_8_;
    *(undefined4 *)(local_res10 + 6) = 0x3f800000;
  }
  bVar10 = false;
  if ((*(longlong *)(lVar2 + 0x290) == 0) && (*(int *)(lVar2 + 0x2c8) == 0)) {
    pUVar13 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
    fVar18 = FRawDistributionFloat::GetValue
                       (&this->Distance,pFVar3->RelativeTime,pUVar13,(FRandomStream *)0x0);
    dVar9 = (double)fVar18;
    pTVar12 = UParticleModule::FContext::GetTransform((FContext *)param_1);
    auVar39 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
    dVar50 = ___xmm_00000000000000003ff0000000000000 * (pTVar12->Scale3D).XY.m128d_f64[0];
    dVar51 = _UNK_150689518 * (pTVar12->Scale3D).XY.m128d_f64[1];
    dVar7 = (pTVar12->Scale3D).ZW.m128d_f64[0] * 0.0;
    dVar8 = (pTVar12->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar20 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
    auVar46._8_4_ = SUB84(dVar51,0);
    auVar46._0_8_ = dVar50;
    uVar40 = (undefined4)((ulonglong)dVar51 >> 0x20);
    auVar46._12_4_ = uVar40;
    dVar49 = (pTVar12->Rotation).ZW.m128d_f64[1];
    dVar1 = auVar39._0_8_;
    auVar44 = blendpd(auVar20,auVar39,2);
    auVar47._0_8_ = auVar46._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar50;
    auVar47._8_8_ = dVar7 * auVar20._8_8_ - dVar1 * dVar51;
    auVar21._8_4_ = SUB84(dVar51,0);
    auVar21._0_8_ = dVar50;
    auVar21._12_4_ = uVar40;
    auVar6._8_4_ = SUB84(dVar8,0);
    auVar6._0_8_ = dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar20 = blendpd(auVar21,auVar6,2);
    auVar22._0_8_ = auVar20._0_8_ * dVar1 - auVar44._0_8_ * dVar7;
    auVar22._8_8_ = auVar20._8_8_ * auVar39._8_8_ - auVar44._8_8_ * dVar8;
    auVar20 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
    auVar44 = blendpd(auVar47,auVar22,2);
    dVar8 = auVar47._8_8_ + auVar47._8_8_;
    dVar5 = auVar22._0_8_ + auVar22._0_8_;
    uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar48._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar48._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar37._8_4_ = SUB84(dVar5,0);
    auVar37._0_8_ = dVar8;
    auVar37._12_4_ = uVar40;
    auVar32._8_4_ = SUB84(dVar5,0);
    auVar32._0_8_ = dVar8;
    auVar32._12_4_ = uVar40;
    auVar33 = blendpd(auVar32,auVar48,2);
    auVar44 = blendpd(auVar20,auVar39,2);
    auVar38._0_8_ = auVar37._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar8;
    auVar38._8_8_ = auVar48._0_8_ * auVar20._8_8_ - dVar1 * dVar5;
    auVar23._8_4_ = SUB84(auVar38._8_8_,0);
    auVar23._0_8_ = auVar38._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar34._0_8_ = auVar33._0_8_ * dVar1 - auVar44._0_8_ * auVar48._0_8_;
    auVar34._8_8_ = auVar33._8_8_ * auVar39._8_8_ - auVar44._8_8_ * auVar48._8_8_;
    auVar39 = blendpd(auVar38,auVar34,2);
    dVar1 = dVar5 * dVar49 + dVar51 + auVar34._0_8_;
    local_140._s_0.Z = auVar48._0_8_ * dVar49 + dVar7 + auVar39._0_8_;
    local_140._8_4_ = SUB84(dVar1,0);
    local_140._s_0.X = dVar8 * dVar49 + dVar50 + auVar23._8_8_;
    local_140._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_140._s_0,__real_3e45798ee0000000)
    ;
    local_res10[7] = dVar9 * local_140._s_0.X + *local_res10;
    local_res10[8] = dVar9 * local_140._s_0.Y + local_res10[1];
    local_res10[9] = dVar9 * local_140._s_0.Z + local_res10[2];
    uVar24 = local_140._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar25 = local_140._8_4_ ^ _UNK_15066df78;
    uVar26 = local_140._12_4_ ^ _UNK_15066df7c;
    uVar27 = SUB84(local_140._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar29 = (uint)((ulonglong)local_140._16_8_ >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)(local_res10 + 10) = local_140._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)local_res10 + 0x54) = uVar24;
    *(uint *)(local_res10 + 0xb) = uVar25;
    *(uint *)((longlong)local_res10 + 0x5c) = uVar26;
    local_res10[0xc] = (double)CONCAT44(uVar29,uVar27);
    *(undefined4 *)(local_res10 + 0xd) = 0x3f800000;
  }
  if (local_res18 != (FBeamParticleModifierPayloadData *)0x0) {
    if (local_res18->bModifyPosition != 0) {
      dVar1 = (local_res18->Position).field0_0x0._s_0.X;
      if (local_res18->bScalePosition == 0) {
        *local_res10 = dVar1 + *local_res10;
        local_res10[1] = (local_res18->Position).field0_0x0._s_0.Y + local_res10[1];
        dVar1 = (local_res18->Position).field0_0x0._s_0.Z + local_res10[2];
      }
      else {
        *local_res10 = dVar1 * *local_res10;
        local_res10[1] = (local_res18->Position).field0_0x0._s_0.Y * local_res10[1];
        dVar1 = (local_res18->Position).field0_0x0._s_0.Z * local_res10[2];
      }
      local_res10[2] = dVar1;
    }
    bVar17 = bVar10;
    if (*(longlong *)(lVar2 + 0x2a0) != 0) {
      bVar17 = (bool)((byte)*(undefined4 *)(*(longlong *)(lVar2 + 0x2a0) + 0x100) & 1);
    }
    FBeamParticleModifierPayloadData::UpdateTangent
              (local_res18,(TVector<double> *)(local_res10 + 3),bVar17);
    if (local_res18->bModifyStrength != 0) {
      if (local_res18->bScaleStrength == 0) {
        fVar18 = local_res18->Strength + *(float *)(local_res10 + 6);
      }
      else {
        fVar18 = local_res18->Strength * *(float *)(local_res10 + 6);
      }
      *(float *)(local_res10 + 6) = fVar18;
    }
  }
  if (local_res20 != (FBeamParticleModifierPayloadData *)0x0) {
    if (local_res20->bModifyPosition != 0) {
      dVar1 = (local_res20->Position).field0_0x0._s_0.X;
      if (local_res20->bScalePosition == 0) {
        local_res10[7] = dVar1 + local_res10[7];
        local_res10[8] = local_res10[8] + (local_res20->Position).field0_0x0._s_0.Y;
        dVar1 = (local_res20->Position).field0_0x0._s_0.Z + local_res10[9];
      }
      else {
        local_res10[7] = dVar1 * local_res10[7];
        local_res10[8] = local_res10[8] * (local_res20->Position).field0_0x0._s_0.Y;
        dVar1 = (local_res20->Position).field0_0x0._s_0.Z * local_res10[9];
      }
      local_res10[9] = dVar1;
    }
    if (*(longlong *)(lVar2 + 0x2b0) != 0) {
      bVar10 = (bool)((byte)*(undefined4 *)(*(longlong *)(lVar2 + 0x2b0) + 0x100) & 1);
    }
    FBeamParticleModifierPayloadData::UpdateTangent
              (local_res20,(TVector<double> *)(local_res10 + 10),bVar10);
    if (local_res20->bModifyStrength != 0) {
      if (local_res20->bScaleStrength == 0) {
        fVar18 = local_res20->Strength + *(float *)(local_res10 + 0xd);
      }
      else {
        fVar18 = local_res20->Strength * *(float *)(local_res10 + 0xd);
      }
      *(float *)(local_res10 + 0xd) = fVar18;
    }
  }
  if ((this->TaperMethod).Value != '\0') {
    lVar2 = *(longlong *)(lVar2 + 0x298);
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x30) & 1) == 0)) {
      if (this->InterpolationPoints == 0) {
        iVar14 = 2;
      }
      else {
        iVar14 = this->InterpolationPoints + 1;
      }
    }
    else {
      iVar14 = 1;
      if (*(int *)(lVar2 + 0x180) != 0) {
        iVar14 = *(int *)(lVar2 + 0x180);
      }
      iVar14 = ((*(int *)((longlong)local_res10 + 0x6c) >> 0xc & 0xfffU) + 1) * iVar14;
    }
    fVar18 = __real_3f800000 / (float)(iVar14 + -1);
    uVar16 = uVar15;
    if (0 < iVar14) {
      do {
        fVar41 = (float)(int)uVar15 * fVar18;
        pUVar13 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
        fVar19 = FRawDistributionFloat::GetValue
                           (&this->TaperFactor,fVar41,pUVar13,(FRandomStream *)0x0);
        pUVar13 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
        fVar41 = FRawDistributionFloat::GetValue
                           (&this->TaperScale,fVar41,pUVar13,(FRandomStream *)0x0);
        uVar15 = (ulonglong)((int)uVar15 + 1);
        *(float *)(local_148 + uVar16 * 4) = fVar19 * fVar41;
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < (longlong)iVar14);
    }
  }
  return;
}

// Update @ 14813d380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModuleTypeDataBeam2::Update(UParticleModuleTypeDataBeam2 *this,FUpdateContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  double *pdVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  TTransform<double> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  uint uVar29;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar30;
  uint uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint uVar39;
  double dVar35;
  uint uVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 in_XMM3 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 in_XMM4 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  float fVar70;
  uint uVar71;
  uint uVar72;
  double *local_2a8;
  int local_2a0;
  int local_29c;
  double local_298;
  float *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  double local_270;
  double dStack_268;
  float local_260;
  FBeamParticleModifierPayloadData *local_258;
  FBeamParticleModifierPayloadData *local_250;
  TVector<double>_u_0 local_248;
  int local_230 [2];
  longlong local_228;
  TVector<double>_u_0 local_220;
  double local_208;
  double local_200;
  longlong local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  TVector<double>_u_0 local_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8 [2];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_138;
  TVector<double> local_120 [9];
  
  lVar15 = param_1->_padding_;
  local_288 = lVar15;
  if (((*(byte *)(lVar15 + 0x161) & 1) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->bIsBeam",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                         ,0xd2,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(lVar15 + 0x298);
  local_260 = __real_3f800000;
  if (*(longlong *)(lVar15 + 0x290) != 0) {
    local_260 = *(float *)(*(longlong *)(lVar15 + 0x290) + 0x144);
  }
  if (*(longlong *)(lVar15 + 0x2a0) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = (bool)(*(byte *)(*(longlong *)(lVar15 + 0x2a0) + 0x100) & 1);
  }
  if (*(longlong *)(lVar15 + 0x2b0) == 0) {
    bVar19 = false;
  }
  else {
    bVar19 = (bool)(*(byte *)(*(longlong *)(lVar15 + 0x2b0) + 0x100) & 1);
  }
  lVar16 = param_1->_padding_;
  local_230[0] = param_1->Offset;
  lVar10 = *(longlong *)(lVar16 + 0x168);
  iVar14 = *(int *)(lVar16 + 0x188);
  lVar13 = *(longlong *)(lVar16 + 0x170);
  iVar8 = *(int *)(lVar16 + 0x18c) + -1;
  local_1f8 = (longlong)iVar8;
  if (-1 < iVar8) {
    dVar21 = 0.0;
    uVar55 = SUB84(__real_3e45798ee0000000,0);
    uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar66 = SUB84(__real_3ff0000000000000,0);
    uVar67 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar68 = SUB84(__real_3f1a36e2e0000000,0);
    uVar69 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    local_298 = 0.0;
    local_270 = ___xmm_00000000000000003ff0000000000000;
    dStack_268 = _UNK_150689518;
    fVar70 = __real_3f000000;
    dVar32 = ___xmm_00000000000000003ff0000000000000;
    dVar34 = _UNK_150689518;
    uVar71 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar72 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_2a0 = iVar14;
    local_29c = local_230[0];
    local_280 = lVar10;
    local_278 = lVar13;
    do {
      lVar16 = (ulonglong)((uint)*(ushort *)(lVar13 + local_1f8 * 2) * iVar14) + lVar10;
      if ((*(uint *)(lVar16 + 0x6c) & 0x4000000) == 0) {
        local_2a8 = (double *)0x0;
        local_228 = 0;
        local_1b8[0] = 0;
        local_1c0 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = 0;
        local_290 = (float *)0x0;
        local_258 = (FBeamParticleModifierPayloadData *)0x0;
        local_250 = (FBeamParticleModifierPayloadData *)0x0;
        (**(code **)(this->_padding_ + 0x3f0))
                  (this,lVar15,lVar16,local_230,&local_2a8,&local_228,local_1b8,&local_1c0,
                   &local_198,&local_1a0,&local_1a8,&local_290,&local_258,&local_250);
        dVar47 = dVar21;
        if (*(longlong *)(lVar15 + 0x288) == 0) {
          lVar10 = (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x10))();
          dVar22 = *(double *)(lVar10 + 0x28);
          dVar47 = *(double *)(lVar10 + 0x30);
          *local_2a8 = *(double *)(lVar10 + 0x20);
          local_2a8[1] = dVar22;
          local_2a8[2] = dVar47;
          pTVar11 = UParticleModule::FContext::GetTransform((FContext *)param_1);
          auVar49 = *(undefined1 (*) [16])(pTVar11->Rotation).ZW.m128d_f64;
          dVar33 = auVar49._0_8_;
          dVar32 = dVar32 * (pTVar11->Scale3D).XY.m128d_f64[0];
          dVar34 = dVar34 * (pTVar11->Scale3D).XY.m128d_f64[1];
          uVar55 = (undefined4)((ulonglong)dVar34 >> 0x20);
          dVar4 = dVar21 * (pTVar11->Scale3D).ZW.m128d_f64[0];
          dVar47 = (pTVar11->Scale3D).ZW.m128d_f64[1] * 0.0;
          _local_158 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
          auVar56._8_4_ = SUB84(dVar34,0);
          auVar56._0_8_ = dVar32;
          auVar56._12_4_ = uVar55;
          auVar48 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
          dVar23 = (pTVar11->Rotation).ZW.m128d_f64[1];
          auVar42 = blendpd(_local_158,auVar49,2);
          auVar57._0_8_ = auVar56._8_8_ * local_158 - local_158._8_8_ * dVar32;
          auVar57._8_8_ = dVar4 * local_158._8_8_ - dVar33 * dVar34;
          auVar43._8_4_ = SUB84(dVar34,0);
          auVar43._0_8_ = dVar32;
          auVar43._12_4_ = uVar55;
          auVar24._8_4_ = SUB84(dVar47,0);
          auVar24._0_8_ = dVar4;
          auVar24._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          auVar24 = blendpd(auVar43,auVar24,2);
          auVar25._0_8_ = auVar24._0_8_ * dVar33 - auVar42._0_8_ * dVar4;
          auVar25._8_8_ = auVar24._8_8_ * auVar49._8_8_ - auVar42._8_8_ * dVar47;
          auVar24 = blendpd(auVar57,auVar25,2);
          auVar58._0_8_ = auVar24._0_8_ + auVar24._0_8_;
          auVar58._8_8_ = auVar24._8_8_ + auVar24._8_8_;
          dVar47 = auVar57._8_8_ + auVar57._8_8_;
          dVar22 = auVar25._0_8_ + auVar25._0_8_;
          uVar55 = (undefined4)((ulonglong)dVar22 >> 0x20);
          auVar51._8_4_ = SUB84(dVar22,0);
          auVar51._0_8_ = dVar47;
          auVar51._12_4_ = uVar55;
          auVar36._8_4_ = SUB84(dVar22,0);
          auVar36._0_8_ = dVar47;
          auVar36._12_4_ = uVar55;
          auVar24 = blendpd(auVar36,auVar58,2);
          auVar52._0_8_ = auVar51._8_8_ * auVar48._0_8_ - auVar48._8_8_ * dVar47;
          auVar52._8_8_ = auVar58._0_8_ * auVar48._8_8_ - dVar33 * dVar22;
          uVar55 = SUB84(__real_3e45798ee0000000,0);
          uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          auVar42._8_4_ = SUB84(auVar52._8_8_,0);
          auVar42._0_8_ = auVar52._0_8_;
          auVar42._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
          auVar48 = blendpd(auVar48,auVar49,2);
          in_XMM3._0_8_ = auVar48._0_8_ * auVar58._0_8_;
          in_XMM3._8_8_ = auVar48._8_8_ * auVar58._8_8_;
          auVar48._0_8_ = auVar24._0_8_ * dVar33 - in_XMM3._0_8_;
          auVar48._8_8_ = auVar24._8_8_ * auVar49._8_8_ - in_XMM3._8_8_;
          in_XMM4 = blendpd(auVar52,auVar48,2);
          dVar34 = dVar22 * dVar23 + dVar34 + auVar48._0_8_;
          auVar49._8_4_ = SUB84(dVar34,0);
          auVar49._0_8_ = dVar47 * dVar23 + dVar32 + auVar42._8_8_;
          auVar49._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          *(undefined1 (*) [16])(local_2a8 + 3) = auVar49;
          local_2a8[5] = auVar58._0_8_ * dVar23 + dVar4 + in_XMM4._0_8_;
          dVar47 = local_298;
          dVar32 = local_270;
          dVar34 = dStack_268;
          local_168 = dVar21;
        }
        if ((*(longlong *)(lVar15 + 0x290) == 0) && (*(int *)(lVar15 + 0x2c8) == 0)) {
          pUVar12 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
          fVar20 = FRawDistributionFloat::GetValue
                             (&this->Distance,*(float *)(lVar16 + 0x90),pUVar12,(FRandomStream *)0x0
                             );
          dVar23 = (double)fVar20;
          pTVar11 = UParticleModule::FContext::GetTransform((FContext *)param_1);
          auVar49 = *(undefined1 (*) [16])(pTVar11->Rotation).ZW.m128d_f64;
          dVar35 = auVar49._0_8_;
          dVar32 = dVar32 * (pTVar11->Scale3D).XY.m128d_f64[0];
          dVar34 = dVar34 * (pTVar11->Scale3D).XY.m128d_f64[1];
          uVar55 = (undefined4)((ulonglong)dVar34 >> 0x20);
          auVar48 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
          dVar4 = dVar47 * (pTVar11->Scale3D).ZW.m128d_f64[0];
          dVar21 = (pTVar11->Scale3D).ZW.m128d_f64[1] * 0.0;
          auVar24 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
          dVar33 = (pTVar11->Rotation).ZW.m128d_f64[1];
          auVar59._8_4_ = SUB84(dVar34,0);
          auVar59._0_8_ = dVar32;
          auVar59._12_4_ = uVar55;
          auVar43 = blendpd(auVar48,auVar49,2);
          auVar60._0_8_ = auVar59._8_8_ * auVar48._0_8_ - auVar48._8_8_ * dVar32;
          auVar60._8_8_ = dVar4 * auVar48._8_8_ - dVar35 * dVar34;
          auVar26._8_4_ = SUB84(dVar34,0);
          auVar26._0_8_ = dVar32;
          auVar26._12_4_ = uVar55;
          auVar3._8_4_ = SUB84(dVar21,0);
          auVar3._0_8_ = dVar4;
          auVar3._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          auVar48 = blendpd(auVar26,auVar3,2);
          auVar27._0_8_ = auVar48._0_8_ * dVar35 - auVar43._0_8_ * dVar4;
          auVar27._8_8_ = auVar48._8_8_ * auVar49._8_8_ - auVar43._8_8_ * dVar21;
          auVar48 = blendpd(auVar60,auVar27,2);
          dVar21 = auVar60._8_8_ + auVar60._8_8_;
          dVar22 = auVar27._0_8_ + auVar27._0_8_;
          uVar55 = (undefined4)((ulonglong)dVar22 >> 0x20);
          auVar61._0_8_ = auVar48._0_8_ + auVar48._0_8_;
          auVar61._8_8_ = auVar48._8_8_ + auVar48._8_8_;
          auVar53._8_4_ = SUB84(dVar22,0);
          auVar53._0_8_ = dVar21;
          auVar53._12_4_ = uVar55;
          auVar37._8_4_ = SUB84(dVar22,0);
          auVar37._0_8_ = dVar21;
          auVar37._12_4_ = uVar55;
          auVar48 = blendpd(auVar37,auVar61,2);
          auVar54._0_8_ = auVar53._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar21;
          auVar54._8_8_ = auVar61._0_8_ * auVar24._8_8_ - dVar35 * dVar22;
          auVar28._8_4_ = SUB84(auVar54._8_8_,0);
          auVar28._0_8_ = auVar54._0_8_;
          auVar28._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
          uVar55 = SUB84(__real_3e45798ee0000000,0);
          uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          auVar24 = blendpd(auVar24,auVar49,2);
          in_XMM3._0_8_ = auVar24._0_8_ * auVar61._0_8_;
          in_XMM3._8_8_ = auVar24._8_8_ * auVar61._8_8_;
          auVar38._0_8_ = auVar48._0_8_ * dVar35 - in_XMM3._0_8_;
          auVar38._8_8_ = auVar48._8_8_ * auVar49._8_8_ - in_XMM3._8_8_;
          in_XMM4 = blendpd(auVar54,auVar38,2);
          dVar34 = dVar22 * dVar33 + dVar34 + auVar38._0_8_;
          local_248._s_0.Z = auVar61._0_8_ * dVar33 + dVar4 + in_XMM4._0_8_;
          local_248._8_4_ = SUB84(dVar34,0);
          local_248._s_0.X = dVar21 * dVar33 + dVar32 + auVar28._8_8_;
          local_248._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          local_180 = dVar47;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_248._s_0,__real_3e45798ee0000000);
          local_2a8[7] = dVar23 * local_248._s_0.X + *local_2a8;
          local_2a8[8] = dVar23 * local_248._s_0.Y + local_2a8[1];
          local_2a8[9] = dVar23 * local_248._s_0.Z + local_2a8[2];
          uVar17 = (uint)__xmm_80000000000000008000000000000000;
          uVar29 = __xmm_80000000000000008000000000000000._4_4_;
          uVar9 = __xmm_80000000000000008000000000000000._8_4_;
          uVar31 = __xmm_80000000000000008000000000000000._12_4_;
          *(uint *)(local_2a8 + 10) = local_248._0_4_ ^ uVar17;
          *(uint *)((longlong)local_2a8 + 0x54) = local_248._4_4_ ^ uVar29;
          *(uint *)(local_2a8 + 0xb) = local_248._8_4_ ^ uVar9;
          *(uint *)((longlong)local_2a8 + 0x5c) = local_248._12_4_ ^ uVar31;
          local_2a8[0xc] =
               (double)CONCAT44((uint)((ulonglong)local_248._16_8_ >> 0x20) ^ uVar29,
                                SUB84(local_248._s_0.Z,0) ^ uVar17);
        }
        if (local_258 != (FBeamParticleModifierPayloadData *)0x0) {
          if (local_258->bModifyPosition != 0) {
            dVar32 = (local_258->Position).field0_0x0._s_0.X;
            if (local_258->bScalePosition == 0) {
              *local_2a8 = dVar32 + *local_2a8;
              local_2a8[1] = (local_258->Position).field0_0x0._s_0.Y + local_2a8[1];
              dVar32 = (local_258->Position).field0_0x0._s_0.Z + local_2a8[2];
            }
            else {
              *local_2a8 = dVar32 * *local_2a8;
              local_2a8[1] = (local_258->Position).field0_0x0._s_0.Y * local_2a8[1];
              dVar32 = (local_258->Position).field0_0x0._s_0.Z * local_2a8[2];
            }
            local_2a8[2] = dVar32;
          }
          FBeamParticleModifierPayloadData::UpdateTangent
                    (local_258,(TVector<double> *)(local_2a8 + 3),bVar7);
          if (local_258->bModifyStrength != 0) {
            if (local_258->bScaleStrength == 0) {
              fVar20 = local_258->Strength + *(float *)(local_2a8 + 6);
            }
            else {
              fVar20 = local_258->Strength * *(float *)(local_2a8 + 6);
            }
            *(float *)(local_2a8 + 6) = fVar20;
          }
        }
        if (local_250 != (FBeamParticleModifierPayloadData *)0x0) {
          if (local_250->bModifyPosition != 0) {
            dVar32 = (local_250->Position).field0_0x0._s_0.X;
            if (local_250->bScalePosition == 0) {
              local_2a8[7] = local_2a8[7] + dVar32;
              local_2a8[8] = local_2a8[8] + (local_250->Position).field0_0x0._s_0.Y;
              dVar32 = (local_250->Position).field0_0x0._s_0.Z + local_2a8[9];
            }
            else {
              local_2a8[7] = local_2a8[7] * dVar32;
              local_2a8[8] = local_2a8[8] * (local_250->Position).field0_0x0._s_0.Y;
              dVar32 = (local_250->Position).field0_0x0._s_0.Z * local_2a8[9];
            }
            local_2a8[9] = dVar32;
          }
          FBeamParticleModifierPayloadData::UpdateTangent
                    (local_250,(TVector<double> *)(local_2a8 + 10),bVar19);
          if (local_250->bModifyStrength != 0) {
            if (local_250->bScaleStrength == 0) {
              fVar20 = local_250->Strength + *(float *)(local_2a8 + 0xd);
            }
            else {
              fVar20 = local_250->Strength * *(float *)(local_2a8 + 0xd);
            }
            *(float *)(local_2a8 + 0xd) = fVar20;
          }
        }
        pdVar6 = local_2a8;
        iVar14 = 1;
        if (this->InterpolationPoints != 0) {
          iVar14 = this->InterpolationPoints;
        }
        if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x30) & 1) == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        fVar20 = this->Speed;
        if ((fVar20 == 0.0) || (*(int *)((longlong)local_2a8 + 0x6c) < 0)) {
LAB_14813dc1a:
          dVar32 = pdVar6[8];
          *(double *)(lVar16 + 0x18) = pdVar6[7];
          *(double *)(lVar16 + 0x20) = dVar32;
          *(double *)(lVar16 + 0x28) = pdVar6[9];
          *(uint *)((longlong)pdVar6 + 0x6c) = *(uint *)((longlong)pdVar6 + 0x6c) | 0x80000000;
        }
        else {
          dVar32 = local_2a8[7];
          dVar34 = *(double *)(lVar16 + 0x18);
          if ((dVar34 != dVar32) ||
             ((local_2a8[8] != *(double *)(lVar16 + 0x20) ||
              (local_2a8[9] != *(double *)(lVar16 + 0x28))))) {
            dVar21 = local_2a8[8];
            dVar47 = *(double *)(lVar16 + 0x20);
            dVar22 = local_2a8[9];
            dVar4 = *(double *)(lVar16 + 0x28);
            local_1d8._s_0.X = dVar32 - dVar34;
            local_1d8._s_0.Y = dVar21 - dVar47;
            local_1d8._s_0.Z = dVar22 - dVar4;
            UE::Math::TVector<double>::Normalize
                      ((TVector<double> *)&local_1d8._s_0,__real_3e45798ee0000000);
            dVar33 = (double)fVar20;
            in_XMM3._0_8_ = dVar33 * local_1d8._s_0.Y;
            in_XMM3._8_8_ = 0.0;
            in_XMM4._0_8_ = (double)param_1->DeltaTime;
            in_XMM4._8_8_ = 0;
            dVar23 = (double)local_260;
            dVar34 = dVar33 * local_1d8._s_0.X * in_XMM4._0_8_ + dVar34;
            dVar32 = dVar34 - dVar32;
            if (((double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar72,
                                  SUB84(dVar32,0) & uVar71) < dVar23) &&
               ((dVar21 = (in_XMM4._0_8_ * in_XMM3._0_8_ + dVar47) - dVar21,
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar72,SUB84(dVar21,0) & uVar71
                                ) < dVar23 &&
                (dVar22 = (in_XMM4._0_8_ * dVar33 * local_1d8._s_0.Z + dVar4) - dVar22,
                (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar72,SUB84(dVar22,0) & uVar71
                                ) < dVar23)))) {
              uVar66 = SUB84(__real_3ff0000000000000,0);
              uVar67 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              uVar68 = SUB84(__real_3f1a36e2e0000000,0);
              uVar69 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
              uVar55 = SUB84(__real_3e45798ee0000000,0);
              uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              goto LAB_14813dc1a;
            }
            *(double *)(lVar16 + 0x18) = dVar34;
            in_XMM3._0_8_ = in_XMM3._0_8_ * in_XMM4._0_8_ + dVar47;
            in_XMM3._8_8_ = 0.0;
            *(double *)(lVar16 + 0x20) = in_XMM3._0_8_;
            *(double *)(lVar16 + 0x28) = dVar33 * local_1d8._s_0.Z * in_XMM4._0_8_ + dVar4;
            uVar66 = SUB84(__real_3ff0000000000000,0);
            uVar67 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            uVar68 = SUB84(__real_3f1a36e2e0000000,0);
            uVar69 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
            uVar55 = SUB84(__real_3e45798ee0000000,0);
            uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          }
        }
        local_2a8[0xf] = local_2a8[7] - *local_2a8;
        local_2a8[0x10] = local_2a8[8] - local_2a8[1];
        local_2a8[0x11] = local_2a8[9] - local_2a8[2];
        dVar32 = local_2a8[0xf];
        dVar34 = local_2a8[0x10];
        dVar21 = local_2a8[0x11];
        auVar44._0_8_ = dVar34 * dVar34 + dVar32 * dVar32 + dVar21 * dVar21;
        auVar44._8_8_ = 0;
        in_XMM4 = sqrtpd(in_XMM4,auVar44);
        if (in_XMM4._0_8_ <= __real_3f50624dd2f1a9fc) {
          in_XMM4._0_8_ = __real_3f50624dd2f1a9fc;
        }
        if ((double)CONCAT44(uVar63,uVar55) <= auVar44._0_8_ &&
            auVar44._0_8_ != (double)CONCAT44(uVar63,uVar55)) {
          dVar47 = (double)CONCAT44(uVar67,uVar66) / SQRT(auVar44._0_8_);
          in_XMM3._0_8_ = dVar47 * dVar21;
          in_XMM3._8_8_ = 0.0;
          local_2a8[0xf] = dVar47 * dVar32;
          local_2a8[0x10] = dVar47 * dVar34;
          local_2a8[0x11] = in_XMM3._0_8_;
        }
        dVar32 = in_XMM4._0_8_;
        if (bVar5) {
          uVar17 = *(int *)((longlong)local_2a8 + 0x6c) >> 0xc & 0xfff;
          if (*(int *)((longlong)local_2a8 + 0x6c) < 0) {
            if (0.0 < *(float *)(lVar1 + 0x188)) {
              uVar9 = (uint)(longlong)(dVar32 / (double)*(float *)(lVar1 + 0x188));
              uVar29 = uVar17;
              if ((int)uVar9 < (int)uVar17) {
                uVar29 = uVar9;
              }
              in_XMM4._0_8_ = dVar32 / (double)(int)(uVar29 + 1);
              local_2a8[0x12] = in_XMM4._0_8_;
              *(uint *)(local_2a8 + 0x13) = uVar29;
              *(undefined4 *)((longlong)local_2a8 + 0x9c) = 0;
              if (local_290 != (float *)0x0) {
                fVar20 = FRawDistributionFloat::GetValue
                                   ((FRawDistributionFloat *)(lVar1 + 400),
                                    (float)(int)uVar29 / (float)uVar17,(UObject *)0x0,
                                    (FRandomStream *)0x0);
                *local_290 = fVar20;
              }
            }
            else {
              in_XMM4._0_8_ = dVar32 / (double)(uVar17 + 1);
              local_2a8[0x12] = in_XMM4._0_8_;
              *(uint *)(local_2a8 + 0x13) = uVar17;
              *(undefined4 *)((longlong)local_2a8 + 0x9c) = 0;
              if (local_290 != (float *)0x0) {
                *local_290 = 1.0;
              }
            }
          }
          else {
            dVar47 = *(double *)(lVar16 + 0x20) - local_2a8[1];
            dVar21 = *(double *)(lVar16 + 0x18) - *local_2a8;
            dVar34 = *(double *)(lVar16 + 0x28) - local_2a8[2];
            auVar46._0_8_ = dVar47 * dVar47 + dVar21 * dVar21 + dVar34 * dVar34;
            auVar46._8_8_ = 0;
            auVar49 = sqrtpd(in_XMM3,auVar46);
            dVar34 = auVar49._0_8_;
            fVar20 = (float)(dVar34 / dVar32);
            if (*(float *)(lVar1 + 0x188) <= 0.0) {
              local_2a8[0x12] = dVar32 / (double)(uVar17 + 1);
              *(float *)((longlong)local_2a8 + 0x9c) = fVar20;
              *(int *)(local_2a8 + 0x13) =
                   (int)ROUND((fVar20 + fVar20) * (float)(uVar17 + 1) - fVar70) >> 1;
              if ((int)uVar17 < *(int *)(local_2a8 + 0x13)) {
                *(uint *)(local_2a8 + 0x13) = uVar17;
              }
              dVar21 = (double)(int)*(uint *)(local_2a8 + 0x13);
              if (*(uint *)(local_2a8 + 0x13) == uVar17) {
                dVar21 = dVar21 * local_2a8[0x12];
                in_XMM4._0_8_ = dVar32 - dVar21;
                dVar32 = (dVar34 - dVar21) / in_XMM4._0_8_;
              }
              else {
                dVar32 = (dVar34 - local_2a8[0x12] * dVar21) / local_2a8[0x12];
              }
              in_XMM3._8_8_ = (double)auVar49._8_8_;
              in_XMM3._0_8_ = dVar32;
              *(float *)((longlong)local_2a8 + 0x9c) = (float)dVar32;
            }
            else {
              uVar9 = (uint)(longlong)(dVar32 / (double)*(float *)(lVar1 + 0x188));
              uVar29 = uVar17;
              if ((int)uVar9 < (int)uVar17) {
                uVar29 = uVar9;
              }
              local_2a8[0x12] = dVar32 / (double)(int)(uVar29 + 1);
              *(float *)((longlong)local_2a8 + 0x9c) = fVar20;
              *(int *)(local_2a8 + 0x13) =
                   (int)ROUND((fVar20 + fVar20) * (float)(int)(uVar29 + 1) - fVar70) >> 1;
              if ((int)uVar29 < *(int *)(local_2a8 + 0x13)) {
                *(uint *)(local_2a8 + 0x13) = uVar29;
              }
              dVar21 = (double)(int)*(uint *)(local_2a8 + 0x13);
              if (*(uint *)(local_2a8 + 0x13) == uVar29) {
                dVar21 = dVar21 * local_2a8[0x12];
                in_XMM4._0_8_ = dVar32 - dVar21;
                dVar32 = (dVar34 - dVar21) / in_XMM4._0_8_;
              }
              else {
                dVar32 = (dVar34 - local_2a8[0x12] * dVar21) / local_2a8[0x12];
              }
              in_XMM3._8_8_ = (double)auVar49._8_8_;
              in_XMM3._0_8_ = dVar32;
              *(float *)((longlong)local_2a8 + 0x9c) = (float)dVar32;
              if (local_290 == (float *)0x0) goto LAB_14813de1d;
              fVar20 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(lVar1 + 400),
                                  (float)(int)uVar29 / (float)uVar17,(UObject *)0x0,
                                  (FRandomStream *)0x0);
              *local_290 = fVar20;
            }
            if (local_290 != (float *)0x0) {
              *local_290 = 1.0;
            }
          }
        }
        else {
          dVar34 = dVar32 / (double)iVar14;
          if (*(int *)((longlong)local_2a8 + 0x6c) < 0) {
            local_2a8[0x12] = dVar34;
LAB_14813dd7b:
            *(int *)(local_2a8 + 0x13) = iVar14;
            *(undefined4 *)((longlong)local_2a8 + 0x9c) = 0;
          }
          else {
            dVar22 = *(double *)(lVar16 + 0x20) - local_2a8[1];
            dVar47 = *(double *)(lVar16 + 0x18) - *local_2a8;
            dVar21 = *(double *)(lVar16 + 0x28) - local_2a8[2];
            auVar45._0_8_ = dVar22 * dVar22 + dVar47 * dVar47 + dVar21 * dVar21;
            auVar45._8_8_ = 0;
            in_XMM3 = sqrtpd(in_XMM3,auVar45);
            dVar21 = in_XMM3._0_8_;
            if (dVar32 < dVar21) {
              dVar32 = local_2a8[8];
              *(double *)(lVar16 + 0x18) = local_2a8[7];
              *(double *)(lVar16 + 0x20) = dVar32;
              *(double *)(lVar16 + 0x28) = local_2a8[9];
              *(uint *)((longlong)local_2a8 + 0x6c) =
                   *(uint *)((longlong)local_2a8 + 0x6c) | 0x80000000;
              local_2a8[0x12] = dVar34;
              goto LAB_14813dd7b;
            }
            local_2a8[0x12] = dVar34;
            uVar30 = in_XMM3._8_8_;
            *(float *)((longlong)local_2a8 + 0x9c) = (float)(dVar21 / dVar32);
            *(int *)(local_2a8 + 0x13) =
                 (int)ROUND(((float)iVar14 + (float)iVar14) * (float)(dVar21 / dVar32) - fVar70) >>
                 1;
            in_XMM3._0_8_ =
                 (dVar21 - (double)*(int *)(local_2a8 + 0x13) * local_2a8[0x12]) / local_2a8[0x12];
            in_XMM3._8_8_ = (double)uVar30;
            *(float *)((longlong)local_2a8 + 0x9c) = (float)in_XMM3._0_8_;
          }
          iVar14 = *(int *)(local_2a8 + 0x13);
        }
LAB_14813de1d:
        if (this->InterpolationPoints < 1) {
          *(undefined4 *)(local_2a8 + 0xe) = 0;
          lVar10 = local_280;
          lVar15 = local_288;
          lVar13 = local_278;
          local_230[0] = local_29c;
          iVar14 = local_2a0;
          dVar21 = local_298;
          dVar32 = local_270;
          dVar34 = dStack_268;
          if (bVar5) {
            iVar8 = 1;
            if (*(int *)(lVar1 + 0x180) != 0) {
              iVar8 = *(int *)(lVar1 + 0x180);
            }
            *(int *)(local_2a8 + 0x14) = iVar8 * *(int *)(local_2a8 + 0x13) * 2;
            if (*(int *)((longlong)local_2a8 + 0x6c) < 0) {
              *(int *)(local_2a8 + 0x14) = *(int *)(local_2a8 + 0x14) + iVar8 * 2;
            }
          }
          else {
            *(undefined4 *)(local_2a8 + 0x14) = 2;
          }
        }
        else {
          *(int *)(local_2a8 + 0xe) = iVar14;
          uVar55 = *(undefined4 *)*(undefined1 (*) [16])(local_2a8 + 3);
          uVar63 = *(uint *)((longlong)local_2a8 + 0x1c);
          uVar64 = *(undefined4 *)(local_2a8 + 4);
          uVar65 = *(uint *)((longlong)local_2a8 + 0x24);
          local_248._0_16_ = *(undefined1 (*) [16])(local_2a8 + 3);
          local_180 = local_2a8[2];
          dVar34 = (double)CONCAT44(uVar67,uVar66) / (double)this->InterpolationPoints;
          local_190 = *local_2a8;
          dStack_188 = local_2a8[1];
          local_248._s_0.Z = local_2a8[5];
          uVar17 = SUB84(local_248._s_0.Z,0);
          uVar29 = (uint)((ulonglong)local_248._s_0.Z >> 0x20);
          dVar22 = (double)CONCAT44(uVar63 & uVar72,uVar55 & uVar71);
          dVar32 = local_298;
          dVar21 = local_270;
          dVar47 = dStack_268;
          if ((double)CONCAT44(uVar69,uVar68) <= dVar22 && dVar22 != (double)CONCAT44(uVar69,uVar68)
             ) {
            uVar64 = local_248._8_4_;
            uVar65 = local_248._12_4_;
          }
          else {
            dVar22 = (double)CONCAT44(uVar65 & uVar72,uVar64 & uVar71);
            if ((dVar22 < (double)CONCAT44(uVar69,uVar68) ||
                 dVar22 == (double)CONCAT44(uVar69,uVar68)) &&
               (dVar22 = (double)CONCAT44(uVar29 & uVar72,uVar17 & uVar71),
               dVar22 < (double)CONCAT44(uVar69,uVar68) || dVar22 == (double)CONCAT44(uVar69,uVar68)
               )) {
              pTVar11 = UParticleModule::FContext::GetTransform((FContext *)param_1);
              dVar47 = dStack_268;
              dVar21 = local_270;
              dVar32 = local_298;
              dStack_150 = dStack_268;
              local_158 = local_270;
              local_148 = local_298;
              UE::Math::TTransform<double>::TransformVector
                        (pTVar11,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_158);
              local_248._16_8_ = local_138._s_0.Z;
              uVar17 = SUB84(local_138._s_0.Z,0);
              uVar29 = (uint)((ulonglong)local_138._16_8_ >> 0x20);
              uVar64 = local_138._8_4_;
              uVar65 = local_138._12_4_;
              uVar55 = local_138._0_4_;
              uVar63 = local_138._4_4_;
            }
          }
          uVar31 = *(uint *)(local_2a8 + 10);
          uVar39 = *(uint *)((longlong)local_2a8 + 0x54);
          local_220._s_0.X = local_2a8[10];
          uVar40 = *(uint *)(local_2a8 + 0xb);
          uVar9 = *(uint *)((longlong)local_2a8 + 0x5c);
          local_220._s_0.Y = local_2a8[0xb];
          local_168 = local_2a8[9];
          dVar23 = (double)*(float *)(local_2a8 + 6);
          dVar4 = (double)CONCAT44(uVar63,uVar55) * dVar23;
          dVar22 = (double)CONCAT44(uVar65,uVar64) * dVar23;
          dVar23 = (double)CONCAT44(uVar29,uVar17) * dVar23;
          local_178 = local_2a8[7];
          dStack_170 = local_2a8[8];
          local_220._s_0.Z = local_2a8[0xc];
          dVar33 = (double)CONCAT44(uVar39 & uVar72,uVar31 & uVar71);
          uVar17 = SUB84(local_220._s_0.Z,0);
          uVar29 = (uint)((ulonglong)local_220._s_0.Z >> 0x20);
          if (((dVar33 < (double)CONCAT44(uVar69,uVar68) ||
                dVar33 == (double)CONCAT44(uVar69,uVar68)) &&
              (dVar33 = (double)CONCAT44(uVar9 & uVar72,uVar40 & uVar71),
              dVar33 < (double)CONCAT44(uVar69,uVar68) || dVar33 == (double)CONCAT44(uVar69,uVar68))
              ) && ((double)CONCAT44(uVar29 & uVar72,uVar17 & uVar71) <= __real_3f1a36e2e0000000)) {
            pTVar11 = UParticleModule::FContext::GetTransform((FContext *)param_1);
            local_220._s_0.X = dVar21;
            local_220._s_0.Y = dVar47;
            local_220._s_0.Z = dVar32;
            UE::Math::TTransform<double>::TransformVector
                      (pTVar11,local_120,(TVector<double> *)&local_220._s_0);
            uVar9 = local_120[0].field0_0x0._12_4_;
            uVar40 = local_120[0].field0_0x0._8_4_;
            local_220._16_8_ = local_120[0].field0_0x0._s_0.Z;
            uVar17 = (uint)local_120[0].field0_0x0._s_0.Z;
            uVar29 = (uint)((ulonglong)local_120[0].field0_0x0._16_8_ >> 0x20);
            uVar31 = local_120[0].field0_0x0._0_4_;
            uVar39 = local_120[0].field0_0x0._4_4_;
          }
          lVar16 = (longlong)iVar14;
          dVar47 = (double)*(float *)(local_2a8 + 0xd);
          dVar21 = (double)CONCAT44(uVar39,uVar31) * dVar47;
          dVar32 = (double)CONCAT44(uVar9,uVar40) * dVar47;
          dVar47 = (double)CONCAT44(uVar29,uVar17) * dVar47;
          local_208 = dStack_188;
          local_1e8 = local_190;
          local_200 = local_168;
          local_1e0 = dStack_170;
          local_1f0 = local_178;
          lVar15 = 0;
          iVar8 = 0;
          if (0 < iVar14) {
            lVar13 = 0;
            iVar18 = 1;
            lVar10 = lVar16;
            do {
              dVar33 = (double)iVar18;
              iVar18 = iVar18 + 1;
              dVar33 = dVar33 * dVar34;
              dVar41 = dVar33 * dVar33;
              dVar35 = (dVar33 + dVar33) * dVar41;
              dVar62 = dVar41 * __real_4008000000000000 - dVar35;
              dVar50 = dVar41 * dVar33 - dVar41;
              dVar35 = (dVar35 - dVar41 * __real_4008000000000000) + __real_3ff0000000000000;
              dVar33 = (dVar41 * dVar33 - (dVar33 + dVar33) * dVar33) + dVar33;
              in_XMM4._0_8_ = dVar50 * dVar47;
              in_XMM4._8_8_ = 0;
              *(double *)(lVar13 + local_228) =
                   dVar62 * local_178 + dVar50 * dVar21 + dVar35 * local_190 + dVar33 * dVar4;
              in_XMM3._0_8_ =
                   dVar62 * dStack_170 + dVar50 * dVar32 + dVar35 * dStack_188 + dVar33 * dVar22;
              in_XMM3._8_8_ = 0.0;
              *(double *)(lVar13 + 8 + local_228) = in_XMM3._0_8_;
              *(double *)(lVar13 + 0x10 + local_228) =
                   dVar62 * local_168 + in_XMM4._0_8_ + dVar35 * local_180 + dVar33 * dVar23;
              lVar13 = lVar13 + 0x18;
              lVar10 = lVar10 + -1;
              lVar15 = lVar16;
              iVar8 = iVar14;
            } while (lVar10 != 0);
          }
          *(int *)(local_2a8 + 0x14) = *(int *)(local_2a8 + 0x13) * 2;
          if (lVar15 < lVar16) {
            lVar10 = lVar15 * 0x18;
            lVar16 = lVar16 - lVar15;
            do {
              iVar8 = iVar8 + 1;
              dVar33 = (double)iVar8 * dVar34;
              dVar41 = dVar33 * dVar33;
              dVar35 = (dVar33 + dVar33) * dVar41;
              dVar62 = dVar41 * __real_4008000000000000 - dVar35;
              dVar50 = dVar41 * dVar33 - dVar41;
              dVar35 = (dVar35 - dVar41 * __real_4008000000000000) + __real_3ff0000000000000;
              dVar33 = (dVar41 * dVar33 - (dVar33 + dVar33) * dVar33) + dVar33;
              in_XMM4._0_8_ = dVar50 * dVar47;
              in_XMM4._8_8_ = 0;
              *(double *)(lVar10 + local_228) =
                   dVar62 * local_178 + dVar50 * dVar21 + dVar35 * local_190 + dVar33 * dVar4;
              in_XMM3._0_8_ =
                   dVar62 * dStack_170 + dVar50 * dVar32 + dVar35 * dStack_188 + dVar33 * dVar22;
              in_XMM3._8_8_ = 0.0;
              *(double *)(lVar10 + 8 + local_228) = in_XMM3._0_8_;
              *(double *)(lVar10 + 0x10 + local_228) =
                   dVar62 * local_168 + in_XMM4._0_8_ + dVar35 * local_180 + dVar33 * dVar23;
              lVar10 = lVar10 + 0x18;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          lVar10 = local_280;
          lVar15 = local_288;
          lVar13 = local_278;
          local_230[0] = local_29c;
          iVar14 = local_2a0;
          dVar21 = local_298;
          dVar32 = local_270;
          dVar34 = dStack_268;
          if (bVar5) {
            iVar8 = 1;
            if (*(int *)(lVar1 + 0x180) != 0) {
              iVar8 = *(int *)(lVar1 + 0x180);
            }
            *(int *)(local_2a8 + 0x14) = iVar8 * *(int *)(local_2a8 + 0x13) * 2;
            fVar70 = __real_3f000000;
            uVar72 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar71 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            if (-1 < *(int *)((longlong)local_2a8 + 0x6c)) {
              uVar55 = SUB84(__real_3e45798ee0000000,0);
              uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
              if (__real_38d1b717 < *(float *)((longlong)local_2a8 + 0x9c)) {
                *(int *)(local_2a8 + 0x14) =
                     *(int *)(local_2a8 + 0x14) +
                     ((int)ROUND(*(float *)((longlong)local_2a8 + 0x9c) * __real_40000000 *
                                 (float)iVar8 - __real_3f000000) >> 1) * 2;
              }
              goto LAB_14813e74b;
            }
            *(int *)(local_2a8 + 0x14) = *(int *)(local_2a8 + 0x14) + iVar8 * 2;
          }
          uVar55 = SUB84(__real_3e45798ee0000000,0);
          uVar63 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          fVar70 = __real_3f000000;
          uVar71 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar72 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        }
      }
LAB_14813e74b:
      uVar66 = SUB84(__real_3ff0000000000000,0);
      uVar67 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_1f8 = local_1f8 + -1;
      uVar68 = SUB84(__real_3f1a36e2e0000000,0);
      uVar69 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    } while (-1 < local_1f8);
  }
  return;
}

