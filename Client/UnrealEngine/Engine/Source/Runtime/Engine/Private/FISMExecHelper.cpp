// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Runtime @ 147cadd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FISMExecHelper::Exec_Runtime
          (FISMExecHelper *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  UActorComponent *this_00;
  UActorComponent *this_01;
  UPrimitiveComponent *this_02;
  UObject *this_03;
  code *pcVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  EInternalObjectFlags EVar11;
  uint uVar12;
  UClass *pUVar13;
  UWorld *pUVar14;
  longlong lVar15;
  undefined8 *puVar16;
  EShaderPlatform EVar17;
  bool bVar18;
  int iVar19;
  wchar_t *local_res18;
  FOutputDevice *local_res20;
  undefined1 local_120 [4];
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  TObjectIterator<UInstancedStaticMeshComponent> local_108;
  TObjectIterator<UInstancedStaticMeshComponent> local_f0;
  void *local_d8;
  undefined8 local_d0;
  FString local_c8;
  FBodyInstance *local_b8;
  FSingleParticlePhysicsProxy *local_b0;
  FName local_a8;
  FString local_a0;
  code *local_90;
  FBodyInstance ***local_88;
  FPrimitiveMaterialPropertyDescriptor local_80;
  FBodyInstance **local_70;
  void **local_68;
  undefined4 *local_60;
  FString local_58;
  FString local_48;
  
  bVar18 = false;
  bVar8 = false;
  local_res18 = param_2;
  local_res20 = param_3;
  bVar7 = FParse::Command(&local_res18,L"LIST ISM PHYSICS",true);
  if (bVar7) {
    FOutputDevice::Log(param_3,L"----- BEGIN ISM PHYSICS LISTING -------------------------");
    FOutputDevice::Log(param_3,
                       L"Component Name, Component Class Name, Mesh Name, Num Bodies, Num Shapes");
    local_11c = 0;
    local_108.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ObjectArray.ArrayNum = 0;
    local_108.ObjectArray.ArrayMax = 0;
    local_108.Index = 0xffffffff;
    EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar13 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar13,&local_108.ObjectArray,true,RF_ClassDefaultObject,
                      EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UInstancedStaticMeshComponent>::Advance(&local_108);
    while( true ) {
      iVar19 = 0;
      lVar15 = (longlong)local_108.Index;
      if ((local_108.Index < 0) || (local_108.ObjectArray.ArrayNum <= local_108.Index)) break;
      uVar12 = 0;
      if (local_108.Index < local_108.ObjectArray.ArrayNum) {
        uVar12 = (uint)~local_108.Index >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      this_00 = *(UActorComponent **)(local_108.ObjectArray.AllocatorInstance.Data + lVar15 * 8);
      pUVar14 = this_00->WorldPrivate;
      if (pUVar14 == (UWorld *)0x0) {
        pUVar14 = UActorComponent::GetWorld_Uncached(this_00);
      }
      if (((pUVar14 == param_1) && (pUVar14 != (UWorld *)0x0)) &&
         (bVar8 = UWorld::IsGameWorld(pUVar14), bVar8)) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this_00,&local_c8,
                   (UObject *)this_00->OwnerPrivate->_padding_);
        cVar10 = (**(code **)(this_00->_padding_ + 0x3c0))(this_00);
        if (cVar10 != '\0') {
          iVar3 = (int)this_00[10]._padding_;
          if (iVar3 != 0) {
            puVar16 = (undefined8 *)this_00[10]._padding_;
            local_118 = 0;
            local_d8 = (void *)0x0;
            local_d0 = 0;
            puVar1 = puVar16 + iVar3;
            while( true ) {
              if ((int)this_00[10]._padding_ != iVar3) {
                local_120[0] = 0;
                `TCheckedPointerIterator<FBodyInstance_*_const,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_120);
              }
              iVar6 = local_11c;
              if (puVar16 == puVar1) break;
              local_b8 = (FBodyInstance *)*puVar16;
              if (local_b8 != (FBodyInstance *)0x0) {
                local_70 = &local_b8;
                local_90 = UE::Core::Private::Function::
                           TFunctionRefCaller<`FISMExecHelper::Exec_Runtime'::__l20::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                           ::Call;
                iVar19 = iVar19 + 1;
                local_68 = &local_d8;
                local_60 = &local_118;
                local_88 = &local_70;
                local_b0 = FBodyInstance::GetPhysicsActor(local_b8);
                FPhysInterface_Chaos::ExecuteRead
                          (&local_b0,
                           (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)>
                            *)&local_90);
              }
              puVar16 = puVar16 + 1;
            }
            this_01 = this_00[7].PrimaryComponentTick.Target;
            if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
               (this_01 == (UActorComponent *)0x0)) {
              if (this_01 != (UActorComponent *)0x0) goto LAB_147cadf6d;
            }
            else {
              UE::GC::MarkAsReachable((UObject *)this_01);
LAB_147cadf6d:
              bVar18 = true;
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)this_01,&local_58,(UObject *)0x0);
            }
            local_a8 = *(FName *)(this_00->_padding_ + 0x18);
            ::FName::ToString(&local_a8,&local_a0);
            FOutputDevice::LogfImpl(local_res20,L"%s, %s, %s, %d, %d");
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if ((bVar18) &&
               (bVar18 = false,
               local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            local_11c = iVar6 + iVar19;
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
          }
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      TObjectIterator<UInstancedStaticMeshComponent>::Advance(&local_108);
    }
    if (local_108.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.ObjectArray.AllocatorInstance.Data);
    }
    FOutputDevice::LogfImpl(local_res20,L"\nTotal Bodies, Total Shapes\n%d, %d");
    FOutputDevice::Log(local_res20,L"----- END ISM PHYSICS LISTING ---------------------------");
    bVar8 = true;
  }
  else {
    bVar7 = FParse::Command(&local_res18,L"LIST ISM",true);
    if (bVar7) {
      if (param_1 != (UWorld *)0x0) {
        FOutputDevice::Log(param_3,
                           L"Name, Num Instances, Has Previous Transform, Num Custom Floats, Has Random, Has Custom Data, Has Dynamic Data, Has LMSMUVBias, Has LocalBounds, Has Instance Hiearchy Offset"
                          );
        bVar2 = (param_1->FeatureLevel).Value;
        local_f0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.ObjectArray.ArrayNum = 0;
        local_f0.ObjectArray.ArrayMax = 0;
        local_f0.Index = 0xffffffff;
        EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar13 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        GetObjectsOfClass(pUVar13,&local_f0.ObjectArray,true,RF_ClassDefaultObject,
                          EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        TObjectIterator<UInstancedStaticMeshComponent>::Advance(&local_f0);
        while( true ) {
          lVar15 = (longlong)local_f0.Index;
          if ((local_f0.Index < 0) || (local_f0.ObjectArray.ArrayNum <= local_f0.Index)) break;
          uVar12 = 0;
          if (local_f0.Index < local_f0.ObjectArray.ArrayNum) {
            uVar12 = (uint)~local_f0.Index >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          this_02 = *(UPrimitiveComponent **)
                     (local_f0.ObjectArray.AllocatorInstance.Data + lVar15 * 8);
          pUVar14 = *(UWorld **)&this_02->field_0xb0;
          if (pUVar14 == (UWorld *)0x0) {
            pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_02);
          }
          if (((pUVar14 == param_1) && (pUVar14 != (UWorld *)0x0)) &&
             (bVar7 = UWorld::IsGameWorld(pUVar14), bVar7)) {
            this_03 = *(UObject **)&this_02[1].field_0x50;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_03 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(this_03);
            }
            if (bVar2 == 5) {
              EVar17 = SP_NumPlatforms;
            }
            else {
              EVar17 = GRHIGlobals.ShaderPlatformForFeatureLevel[bVar2];
            }
            UPrimitiveComponent::GetUsedMaterialPropertyDesc(this_02,&local_80,EVar17);
            uVar5 = (ushort)FReadOnlyCVARCache::bAllowStaticLighting;
            if (((0 < *(int *)&this_02[1].field_0x120) &&
                (*(int *)&this_02[1].field_0x120 == *(int *)&this_02[1].field_0x110)) &&
               ((this_02->field_0x1ab == '\0' &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Flags.bHasPerInstanceDynamicData || Mobility != EComponentMobility::Static"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                                    ,0x14d9,L""), bVar7)))) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            local_11c = CONCAT22(local_11c._2_2_,uVar5);
            local_110 = *(undefined4 *)&this_02[1].field_0x190;
            local_114 = *(undefined4 *)&this_02[1].field_0x120;
            if (this_03 != (UObject *)0x0) {
              bVar8 = true;
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_03,&local_48,(UObject *)0x0,None);
            }
            FOutputDevice::LogfImpl(local_res20,L"%s, %d, %d, %d, %d, %d, %d, %d, %d, %d");
            if ((bVar8) &&
               (bVar8 = false,
               local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          TObjectIterator<UInstancedStaticMeshComponent>::Advance(&local_f0);
        }
        if (local_f0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.ObjectArray.AllocatorInstance.Data);
        }
      }
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
  }
  return bVar8;
}

