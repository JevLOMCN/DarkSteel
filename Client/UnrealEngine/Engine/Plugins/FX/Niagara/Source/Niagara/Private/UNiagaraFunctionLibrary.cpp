// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 52

// StaticClass @ 1492c2440

UClass * __cdecl UNiagaraFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton;
}

// UNiagaraFunctionLibrary @ 1492d17c0

UNiagaraFunctionLibrary * __thiscall
UNiagaraFunctionLibrary::UNiagaraFunctionLibrary
          (UNiagaraFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraFunctionLibrary__6B_;
  return this;
}

// UNiagaraFunctionLibrary @ 1492d17f0

UNiagaraFunctionLibrary * __thiscall
UNiagaraFunctionLibrary::UNiagaraFunctionLibrary
          (UNiagaraFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraFunctionLibrary__6B_;
  return this;
}

// ~UNiagaraFunctionLibrary @ 1492d4aa0

void __thiscall UNiagaraFunctionLibrary::~UNiagaraFunctionLibrary(UNiagaraFunctionLibrary *this)

{
  *(undefined ***)this = &___7UNiagaraFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 1492d6390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams'::__l43::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  TRotator<double> *pTVar4;
  USceneComponent *pUVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_1b8 [32];
  TVector<double>_u_0 local_198;
  TQuat<double> local_178;
  TRotator<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x68) == '\x01') {
    (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x520))
              (*(longlong **)(lVar1 + 0x58),&local_78,*(undefined8 *)(lVar1 + 0x60),0);
    lVar1 = *(longlong *)this;
    pTVar3 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)(lVar1 + 0x28),&local_178);
    local_d8.Rotation.XY.m128d_f64[0] = pTVar3->X;
    local_d8.Rotation.XY.m128d_f64[1] = pTVar3->Y;
    local_d8.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
    local_d8.Rotation.ZW.m128d_f64[1] = pTVar3->W;
    local_d8.Translation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x10);
    local_d8.Translation.XY.m128d_f64[1] = *(double *)(lVar1 + 0x18);
    local_d8.Translation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x20);
    local_d8.Translation.ZW.m128d_f64[1] = 0.0;
    local_d8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar1 + 0x40);
    local_d8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar1 + 0x48);
    local_d8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x50);
    local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
    UE::Math::TTransform<double>::GetRelativeTransform(&local_d8,&local_138,&local_78);
    local_198._s_0.X = local_138.Translation.XY.m128d_f64[0];
    local_198._s_0.Y = local_138.Translation.XY.m128d_f64[1];
    local_198._s_0.Z = local_138.Translation.ZW.m128d_f64[0];
    USceneComponent::SetRelativeLocation_Direct
              ((USceneComponent *)**(undefined8 **)((longlong)this + 8),
               (TVector<double> *)&local_198._s_0);
    pUVar5 = (USceneComponent *)**(undefined8 **)((longlong)this + 8);
    local_178.X = local_138.Rotation.XY.m128d_f64[0];
    local_178.Y = local_138.Rotation.XY.m128d_f64[1];
    local_178.Z = local_138.Rotation.ZW.m128d_f64[0];
    local_178.W = local_138.Rotation.ZW.m128d_f64[1];
    pTVar4 = UE::Math::TQuat<double>::Rotator(&local_178,&local_158);
    local_198._s_0.X = pTVar4->Pitch;
    local_198._s_0.Y = pTVar4->Yaw;
    local_198._s_0.Z = pTVar4->Roll;
    USceneComponent::SetRelativeRotation_Direct(pUVar5,(TRotator<double> *)&local_198._s_0);
    local_198._s_0.X = local_138.Scale3D.XY.m128d_f64[0];
    local_198._s_0.Y = local_138.Scale3D.XY.m128d_f64[1];
    local_198._s_0.Z = local_138.Scale3D.ZW.m128d_f64[0];
    USceneComponent::SetRelativeScale3D_Direct
              ((USceneComponent *)**(undefined8 **)((longlong)this + 8),
               (TVector<double> *)&local_198._s_0);
  }
  else {
    local_198._s_0.X = *(double *)(lVar1 + 0x10);
    local_198._s_0.Y = *(double *)(lVar1 + 0x18);
    local_198._s_0.Z = *(double *)(lVar1 + 0x20);
    USceneComponent::SetRelativeLocation_Direct
              ((USceneComponent *)**(undefined8 **)((longlong)this + 8),
               (TVector<double> *)&local_198._s_0);
    lVar1 = *(longlong *)this;
    local_198._s_0.X = *(double *)(lVar1 + 0x28);
    local_198._s_0.Y = *(double *)(lVar1 + 0x30);
    local_198._s_0.Z = *(double *)(lVar1 + 0x38);
    USceneComponent::SetRelativeRotation_Direct
              ((USceneComponent *)**(undefined8 **)((longlong)this + 8),
               (TRotator<double> *)&local_198._s_0);
    lVar1 = *(longlong *)this;
    if (*(char *)(lVar1 + 0x68) == '\x02') {
      (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x520))
                (*(longlong **)(lVar1 + 0x58),&local_138,*(undefined8 *)(lVar1 + 0x60),0);
      dVar2 = 0.0;
      uVar6 = SUB84(local_138.Scale3D.XY.m128d_f64[0],0) &
              (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar7 = (uint)((ulonglong)local_138.Scale3D.XY.m128d_f64[0] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      pUVar5 = (USceneComponent *)**(undefined8 **)((longlong)this + 8);
      lVar1 = *(longlong *)this;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3e45798ee0000000) {
        local_138.Scale3D.XY.m128d_f64[0] =
             __real_3ff0000000000000 / local_138.Scale3D.XY.m128d_f64[0];
      }
      else {
        local_138.Scale3D.XY.m128d_f64[0] = 0.0;
      }
      uVar6 = SUB84(local_138.Scale3D.XY.m128d_f64[1],0) &
              (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar7 = (uint)((ulonglong)local_138.Scale3D.XY.m128d_f64[1] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3e45798ee0000000) {
        local_138.Scale3D.XY.m128d_f64[1] =
             __real_3ff0000000000000 / local_138.Scale3D.XY.m128d_f64[1];
      }
      else {
        local_138.Scale3D.XY.m128d_f64[1] = 0.0;
      }
      uVar6 = SUB84(local_138.Scale3D.ZW.m128d_f64[0],0) &
              (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar7 = (uint)((ulonglong)local_138.Scale3D.ZW.m128d_f64[0] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3e45798ee0000000) {
        dVar2 = __real_3ff0000000000000 / local_138.Scale3D.ZW.m128d_f64[0];
      }
      local_198._s_0.X = local_138.Scale3D.XY.m128d_f64[0] * *(double *)(lVar1 + 0x40);
      local_198._s_0.Y = local_138.Scale3D.XY.m128d_f64[1] * *(double *)(lVar1 + 0x48);
      local_198._s_0.Z = dVar2 * *(double *)(lVar1 + 0x50);
    }
    else {
      local_198._s_0.X = *(double *)(lVar1 + 0x40);
      local_198._s_0.Y = *(double *)(lVar1 + 0x48);
      local_198._s_0.Z = *(double *)(lVar1 + 0x50);
      pUVar5 = (USceneComponent *)**(undefined8 **)((longlong)this + 8);
    }
    USceneComponent::SetRelativeScale3D_Direct(pUVar5,(TVector<double> *)&local_198._s_0);
  }
  return;
}

// AcquireNiagaraGPURayTracedCollisionGroup @ 1492da0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl UNiagaraFunctionLibrary::AcquireNiagaraGPURayTracedCollisionGroup(UObject *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  FNiagaraAsyncGpuTraceHelper *this;
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((pUVar2 != (UWorld *)0x0) && (pUVar2->Scene != (FSceneInterface *)0x0)) {
    puVar3 = (undefined8 *)(**(code **)(pUVar2->Scene->_padding_ + 0x478))();
    if (puVar3 == (undefined8 *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)*puVar3)(puVar3,&FNiagaraGpuComputeDispatch::Name);
    }
    if (plVar4 != (longlong *)0x0) {
      this = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(*plVar4 + 0x118))();
      iVar1 = FNiagaraAsyncGpuTraceHelper::AcquireGPURayTracedCollisionGroup_GT(this);
      return iVar1;
    }
  }
  return -1;
}

// DefineFunctionHLSL @ 1492e04f0

bool __cdecl
UNiagaraFunctionLibrary::DefineFunctionHLSL(FNiagaraFunctionSignature *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  InitVectorVMFastPathOps();
  uVar5 = TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_>::
          IndexOfByKey<FNiagaraFunctionSignature>(&VectorVMOps,param_1);
  if (uVar5 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar5 < VectorVMOpsHLSL.ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = *(int *)(VectorVMOpsHLSL.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 8);
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars
            (param_2,*(wchar_t **)
                      (VectorVMOpsHLSL.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10),iVar7);
  return true;
}

// GetDataInterface @ 1492ee200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataInterface * __cdecl
UNiagaraFunctionLibrary::GetDataInterface(UClass *param_1,UNiagaraComponent *param_2,FName param_3)

{
  UNiagaraSystem *pUVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeRegistry *this;
  int *piVar4;
  UNiagaraDataInterface *pUVar5;
  wchar_t *pwVar6;
  FName local_res10;
  FName local_res18 [2];
  FName local_88;
  int local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TObjectPtr<UObject>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_3c;
  uint local_34;
  
  local_res18[0] = param_3;
  if (param_2 == (UNiagaraComponent *)0x0) {
    bVar2 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar2) {
      return (UNiagaraDataInterface *)0x0;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return (UNiagaraDataInterface *)0x0;
    }
    ::FName::ToString(local_res18,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    local_48 = (TObjectPtr<UObject>_u_0)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_3e = 0;
    local_40 = 1;
    iVar3 = -1;
    local_3c = 0xffffffffffffffff;
    if (((UClass *)local_48.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_48.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_48.DebugPtr,&local_78,(UObject *)0x0,None);
    }
    pwVar6 = L"";
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayNum = 0;
    }
    else {
      local_78.Data.ArrayNum = local_78.Data.ArrayNum + -1;
      pwVar6 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    }
    local_34 = FCrc::Strihash_DEPRECATED<wchar_t>(local_78.Data.ArrayNum,pwVar6);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_88 = local_res18[0];
    if ((UClass *)local_48.DebugPtr != (UClass *)0x0) {
      this = FNiagaraTypeRegistry::Get();
      iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (this,(FNiagaraTypeDefinition *)&local_48.ObjectPtr);
    }
    local_80 = iVar3;
    piVar4 = (int *)(**(code **)((param_2->OverrideParameters)._padding_ + 0x58))
                              (&param_2->OverrideParameters,&local_88,1);
    if (piVar4 == (int *)0x0) {
      if ((byte)LogNiagara._0_1_ < 3) {
        return (UNiagaraDataInterface *)0x0;
      }
      if (param_1 == (UClass *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_68);
      }
      pUVar1 = (param_2->Asset).field0_0x0.DebugPtr;
      if (pUVar1 == (UNiagaraSystem *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_res10 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res10,&local_78);
      }
      ::FName::ToString(local_res18,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      pUVar5 = FNiagaraParameterStore::GetDataInterface
                         ((FNiagaraParameterStore *)&param_2->OverrideParameters,*piVar4);
      if (pUVar5 != (UNiagaraDataInterface *)0x0) {
        iVar3 = (int)param_1->_padding_;
        if ((iVar3 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &param_1->_padding_)) {
          return pUVar5;
        }
        if ((byte)LogNiagara._0_1_ < 3) {
          return (UNiagaraDataInterface *)0x0;
        }
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_58);
        if (pUVar5->_padding_ == 0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          local_res10 = *(FName *)(pUVar5->_padding_ + 0x18);
          ::FName::ToString(&local_res10,&local_78);
        }
        pUVar1 = (param_2->Asset).field0_0x0.DebugPtr;
        if (pUVar1 == (UNiagaraSystem *)0x0) {
          ::FString::FString(&local_68,L"None");
        }
        else {
          local_res10 = (FName)pUVar1->_padding_;
          ::FName::ToString(&local_res10,&local_68);
        }
        ::FName::ToString(local_res18,(FString *)&local_48.ObjectPtr);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if ((UClass *)local_48.DebugPtr != (UClass *)0x0) {
          FMemory::Free(local_48.DebugPtr);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
        goto LAB_1492ee607;
      }
      if ((byte)LogNiagara._0_1_ < 3) {
        return (UNiagaraDataInterface *)0x0;
      }
      pUVar1 = (param_2->Asset).field0_0x0.DebugPtr;
      if (pUVar1 == (UNiagaraSystem *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res10 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res10,&local_68);
      }
      ::FName::ToString(local_res18,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
LAB_1492ee607:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return (UNiagaraDataInterface *)0x0;
}

// GetNiagaraParameterCollection @ 1492f0610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraParameterCollectionInstance * __cdecl
UNiagaraFunctionLibrary::GetNiagaraParameterCollection
          (UObject *param_1,UNiagaraParameterCollection *param_2)

{
  UWorld *pUVar1;
  FNiagaraWorldManager *this;
  UNiagaraParameterCollectionInstance *pUVar2;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar1 != (UWorld *)0x0) {
    this = FNiagaraWorldManager::Get(pUVar1);
    pUVar2 = FNiagaraWorldManager::GetParameterCollection(this,param_2);
    return pUVar2;
  }
  return (UNiagaraParameterCollectionInstance *)0x0;
}

// GetPrivateStaticClass @ 1492f1010

UClass * __cdecl UNiagaraFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraFunctionLibrary.InnerSingleton;
}

// GetSkeletalMeshDataInterface @ 1492f1ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataInterfaceSkeletalMesh * __cdecl
UNiagaraFunctionLibrary::GetSkeletalMeshDataInterface(UNiagaraComponent *param_1,FString *param_2)

{
  FNiagaraUserRedirectionParameterStore *this;
  int iVar1;
  FNiagaraTypeRegistry *this_00;
  int *piVar2;
  UNiagaraDataInterfaceSkeletalMesh *pUVar3;
  UClass *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FName local_res8;
  FString local_58;
  TObjectPtr<UObject>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_3c;
  uint local_34;
  FName local_30;
  int local_28;
  void *local_20;
  undefined8 local_18;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    return (UNiagaraDataInterfaceSkeletalMesh *)0x0;
  }
  pwVar6 = L"";
  this = &param_1->OverrideParameters;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar5);
  local_48.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_48.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_48.DebugPtr);
  }
  local_3e = 0;
  local_40 = 1;
  iVar1 = -1;
  local_3c = 0xffffffffffffffff;
  if (((UClass *)local_48.DebugPtr == (UClass *)0x0) ||
     (*(longlong *)&(local_48.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_48.DebugPtr,&local_58,(UObject *)0x0,None);
  }
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayNum = 0;
  }
  else {
    local_58.Data.ArrayNum = local_58.Data.ArrayNum + -1;
    pwVar6 = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  }
  local_34 = FCrc::Strihash_DEPRECATED<wchar_t>(local_58.Data.ArrayNum,pwVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_30 = local_res8;
  if ((UClass *)local_48.DebugPtr != (UClass *)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this_00,(FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  }
  local_20 = (void *)0x0;
  local_18 = 0;
  local_28 = iVar1;
  piVar2 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_30,0);
  if (((piVar2 != (int *)0x0) && (*piVar2 != -1)) &&
     (pUVar3 = (UNiagaraDataInterfaceSkeletalMesh *)
               FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar2),
     pUVar3 != (UNiagaraDataInterfaceSkeletalMesh *)0x0)) {
    pUVar4 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_1492f1c4a;
  }
  pUVar3 = (UNiagaraDataInterfaceSkeletalMesh *)0x0;
LAB_1492f1c4a:
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return pUVar3;
}

// GetVectorVMFastPathExternalFunction @ 1492f2d40

bool __cdecl
UNiagaraFunctionLibrary::GetVectorVMFastPathExternalFunction
          (FVMExternalFunctionBindingInfo *param_1,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  FVar1 = param_1->Name;
  if (FVar1 == FastPathDot4Name) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1492f2dca;
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    pcVar4 = FVectorKernelFastDot4::Exec;
  }
  else if (FVar1 == FastPathTransformPositionName) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1492f2dca;
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    pcVar4 = FVectorKernelFastTransformPosition::Exec;
  }
  else if (FVar1 == FastMatrixToQuaternionName) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1492f2dca;
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    pcVar4 = FVectorKernelFastMatrixToQuaternion::Exec;
  }
  else {
    if (FVar1 != FastUniqueRandomName) {
      return false;
    }
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1492f2dca;
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    pcVar4 = FVectorKernelFastUniqueRandom::Exec;
  }
  *puVar2 = &
            ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  puVar2[3] = pcVar4;
LAB_1492f2dca:
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return true;
}

// GetVectorVMFastPathOps @ 1492f2fb0

TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraFunctionLibrary::GetVectorVMFastPathOps(bool param_1)

{
  if ((!param_1) && (GAllowFastPathFunctionLibrary == 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UNiagaraFunctionLibrary::GetVectorVMFastPathOps'::__l5::
               _dynamic_atexit_destructor_for__Empty__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &::Empty;
  }
  InitVectorVMFastPathOps();
  return &VectorVMOps;
}

// InitVectorVMFastPathOps @ 1492f8050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UNiagaraFunctionLibrary::InitVectorVMFastPathOps(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStackY_308 [32];
  FString local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  ForAnyElementType local_2a8;
  int local_2a0;
  int local_29c;
  ForAnyElementType local_298;
  int local_290;
  int local_28c;
  undefined1 local_288 [136];
  void *local_200;
  undefined4 local_1f8;
  undefined1 local_1f0 [136];
  void *local_168;
  undefined4 local_160;
  undefined1 local_158 [136];
  void *local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [136];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UNiagaraFunctionLibrary::InitVectorVMFastPathOps'::__l2::
             _dynamic_atexit_destructor_for__FastPathBuildLock__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&FastPathBuildLock);
  if (VectorVMOps.ArrayNum == 0) {
    ReleaseSRWLockShared((PSRWLOCK)&FastPathBuildLock);
    AcquireSRWLockExclusive((PSRWLOCK)&FastPathBuildLock);
    if (VectorVMOps.ArrayNum == 0) {
      FVectorKernelFastDot4::GetFunctionSignature((FNiagaraFunctionSignature *)local_288);
      FVectorKernelFastTransformPosition::GetFunctionSignature
                ((FNiagaraFunctionSignature *)local_1f0);
      FVectorKernelFastMatrixToQuaternion::GetFunctionSignature
                ((FNiagaraFunctionSignature *)local_158);
      FVectorKernelFastUniqueRandom::GetFunctionSignature((FNiagaraFunctionSignature *)local_c0);
      DestructItems<FNiagaraFunctionSignature,int>
                ((FNiagaraFunctionSignature *)VectorVMOps.AllocatorInstance.Data,
                 VectorVMOps.ArrayNum);
      lVar5 = 4;
      VectorVMOps.ArrayNum = 4;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,4,VectorVMOps.ArrayMax,&VectorVMOps.AllocatorInstance,4,
                 &VectorVMOps.ArrayMax);
      ConstructItems<FNiagaraFunctionSignature,FNiagaraFunctionSignature,int>
                (VectorVMOps.AllocatorInstance.Data,(FNiagaraFunctionSignature *)local_288,4);
      local_30 = 0;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_c0 + 0x48));
      if ((FScriptContainerElement *)local_c0._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c0._24_8_);
      }
      DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_c0._8_8_,local_c0._16_4_);
      if ((FNiagaraVariable *)local_c0._8_8_ != (FNiagaraVariable *)0x0) {
        FMemory::Free((void *)local_c0._8_8_);
      }
      local_c8 = 0;
      if (local_d0 != (void *)0x0) {
        FMemory::Free(local_d0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_158 + 0x48));
      if ((FScriptContainerElement *)local_158._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_158._24_8_);
      }
      DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_158._8_8_,local_158._16_4_);
      if ((FNiagaraVariable *)local_158._8_8_ != (FNiagaraVariable *)0x0) {
        FMemory::Free((void *)local_158._8_8_);
      }
      local_160 = 0;
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_1f0 + 0x48));
      if ((FScriptContainerElement *)local_1f0._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f0._24_8_);
      }
      DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_1f0._8_8_,local_1f0._16_4_);
      if ((FNiagaraVariable *)local_1f0._8_8_ != (FNiagaraVariable *)0x0) {
        FMemory::Free((void *)local_1f0._8_8_);
      }
      local_1f8 = 0;
      if (local_200 != (void *)0x0) {
        FMemory::Free(local_200);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_288 + 0x48));
      if ((FScriptContainerElement *)local_288._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_288._24_8_);
      }
      DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_288._8_8_,local_288._16_4_);
      if ((FNiagaraVariable *)local_288._8_8_ != (FNiagaraVariable *)0x0) {
        FMemory::Free((void *)local_288._8_8_);
      }
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.Data.ArrayNum = 0;
      local_2c8.Data.ArrayMax = 0;
      if (*piVar6 < `public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FString::FString(&`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                              ::__l2::FunctionHLSL,
                             L"\n\tvoid FastMatrixToQuaternion_FastPathLibrary(float4x4 Mat, out float4 Quat)\n\t{\n\t\tfloat tr = Mat[0][0] + Mat[1][1] + Mat[2][2];\n\t\tif (tr > 0.0f)\n\t\t{\n\t\t\tfloat InvS = rsqrt(tr + 1.f);\n\t\t\tfloat s = 0.5f * InvS;\n\n\t\t\tQuat.x = (Mat[1][2] - Mat[2][1]) * s;\n\t\t\tQuat.y = (Mat[2][0] - Mat[0][2]) * s;\n\t\t\tQuat.z = (Mat[0][1] - Mat[1][0]) * s;\n\t\t\tQuat.w = 0.5f * rcp(InvS);\n\t\t}\n\t\telse if ( (Mat[0][0] > Mat[1][1]) && (Mat[0][0] > Mat[2][2]) )\n\t\t{\n\t\t\tfloat s = Mat[0][0] - Mat[1][1] - Mat[2][2] + 1.0f;\n\t\t\tfloat InvS = rsqrt(s);\n\t\t\ts = 0.5f * InvS;\n\n\t\t\tQuat.x = 0.5f * rcp(InvS);\n\t\t\tQuat.y = (Mat[0][1] + Mat[1][0]) * s;\n\t\t\tQuat.z = (Mat[0][2] + Mat[2][0]) * s;\n\t\t\tQuat.w = (Mat[1][2] - Mat[2][1]) * s;\n\t\t}\n\t\telse if ( Mat[1][1] > Mat[2][2] )\n\t\t{\n\t\t\tfloat s = Mat[1][1] - Mat[2][2] - Mat[0][0] + 1.0f;\n\t\t\tfloat InvS = rsqrt(s);\n\t\t\ts = 0.5f * InvS;\n\n\t\t\tQuat.x = (Mat[1][0] + Mat[0][1]) * s;\n\t\t\tQuat.y = 0.5f * rcp(InvS);\n\t\t\tQuat.z = (Mat[1][2] + Mat[2][1]) * s;\n\t\t\tQuat.w = (Mat[2][0] - Mat[0][2]) * s;\n\n\t\t}\n\t\telse\n\t\t{\n\t\t\tfloat s = Mat[2][2] - Mat[0][0] - Mat[1][1] + 1.0f;\n\t\t\tfloat InvS = rsqrt(s);\n\t\t\ts = 0.5f * InvS;\n\n\t\t\tQuat.x = (Mat[2][0] + Mat[0][2]) * s;\n\t\t\tQuat.y = (Mat[2][1] + Mat[1][2]) * s;\n\t\t\tQuat.z = 0.5f * rcp(InvS);\n\t\t\tQuat.w = (Mat[0][1] - Mat[1][0]) * s;\n\t\t}\n\t}\n"
                            );
          atexit(`FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL'::__l2::
                 _dynamic_atexit_destructor_for__FunctionHLSL__);
          _Init_thread_footer(&`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVar3.Data = `public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                   ::__l2::FunctionHLSL.Data.AllocatorInstance.Data;
      lVar7 = (longlong)
              `public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
              ::__l2::FunctionHLSL.Data.ArrayNum;
      local_2a8.Data = (FScriptContainerElement *)0x0;
      local_2a0 = `public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                  ::__l2::FunctionHLSL.Data.ArrayNum;
      if (`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
          ::__l2::FunctionHLSL.Data.ArrayNum == 0) {
        local_29c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,`public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                       ::__l2::FunctionHLSL.Data.ArrayNum,0,&local_2a8,
                   `public:_static_class_FString___cdecl_FVectorKernelFastMatrixToQuaternion::GetFunctionHLSL(void)'
                   ::__l2::FunctionHLSL.Data.ArrayNum,&local_29c);
        memcpy(local_2a8.Data,FVar3.Data,lVar7 * 2);
      }
      if (*piVar6 < `public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FString::FString(&`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                              ::__l2::FunctionHLSL,
                             L"\n\t\t\tuint CalcLFSRValue(uint Seed, uint NumUniqueValues, int Iterations, uint4 Taps, uint Mask)\n\t\t\t{\n\t\t\t\tuint NextValue = (Seed + 1) & Mask;\n\t\t\t\tfor (int i = 0; i < Iterations; i++) {\n\t\t\t\t\tdo {\n\t\t\t\t\t\tuint Tap = 0;\n\t\t\t\t\t\tTap ^= (Taps.x & NextValue) == 0 ? 0 : 1;\n\t\t\t\t\t\tTap ^= (Taps.y & NextValue) == 0 ? 0 : 1;\n\t\t\t\t\t\tTap ^= (Taps.z & NextValue) == 0 ? 0 : 1;\n\t\t\t\t\t\tTap ^= (Taps.w & NextValue) == 0 ? 0 : 1;\n\t\t\t\t\t\tNextValue = (((NextValue << 1) | Tap) & Mask);\n\t\t\t\t\t} while (NextValue > NumUniqueValues);\n\t\t\t\t}\n\t\t\t\treturn NextValue - 1;\n\t\t\t}\n\n\t\t\tvoid FastUniqueRandom_FastPathLibrary(int Seed, int NumUniqueValues, int Iterations, out int Result)\n\t\t\t{\n\t\t\t\tif (NumUniqueValues < 2) {\n\t\t\t\t\tNumUniqueValues = 2;\n\t\t\t\t}\n\t\t\t\tSeed %= NumUniqueValues;\n\n\t\t\t\tif (NumUniqueValues < 16) {\n\t\t\t\t\tuint4 Taps = {(1 << 3), (1 << 2), 0, 0};\n\t\t\t\t\tuint Mask = 0xF;\n\t\t\t\t\tResult = CalcLFSRValue(Seed, NumUniqueValues, Iterations, Taps, Mask);\n\t\t\t\t}\n\t\t\t\telse if (NumUniqueValues < 256) {\n\t\t\t\t\tuint4 Taps = {(1 << 7), (1 << 5), (1 << 4), (1 << 3)};\n\t\t\t\t\tuint Mask = 0xFF;\n\t\t\t\t\tResult = CalcLFSRValue(Seed, NumUniqueValues, Iterations, Taps, Mask);\n\t\t\t\t}\n\t\t\t\telse if (NumUniqueValues < 4096) {\n\t\t\t\t\tuint4 Taps = {(1 << 11), (1 << 10), (1 << 7), (1 << 5)};\n\t\t\t\t\tuint Mask = 0xFFF;\n\t\t\t\t\tResult = CalcLFSRValue(Seed, NumUniqueValues, Iterations, Taps, Mask);\n\t\t\t\t}\n\t\t\t\telse if (NumUniqueValues < 65536) {\n\t\t\t\t\tuint4 Taps = {(1 << 15), (1 << 13), (1 << 12), (1 << 10)};\n\t\t\t\t\tuint Mask = 0xFFFF;\n\t\t\t\t\tResult = CalcLFSRValue(Seed, NumUniqueValues, Iterations, Taps, Mask);\n\t\t\t\t}\n\t\t\t\telse if (NumUniqueValues < 1048576) {\n\t\t\t\t\tuint4 Taps ={(1 << 19), (1 << 16), 0, 0};\n\t\t\t\t\tuint Mask = 0xFFFFF;\n\t\t\t\t\tResult = CalcLFSRValue(Seed, NumUniqueValues, Iterations, Taps, Mask);\n\t\t\t\t}\n\t\t\t\telse {\n\t\t\t\t\tuint4 Taps = {(1 << 23), (1 << 22), (1 << 20), (1 << 19)};\n\t\t\t\t\tuint Mask = 0xFFFFFF;\n\t\t\t\t\tResult = CalcLFSRValue(Seed, NumUniqueValues, Iterations, Taps, Mask);\n\t\t\t\t}\n\t\t\t}\n\t\t"
                            );
          atexit(`FVectorKernelFastUniqueRandom::GetFunctionHLSL'::__l2::
                 _dynamic_atexit_destructor_for__FunctionHLSL__);
          _Init_thread_footer(&`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVar3.Data = `public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                   ::__l2::FunctionHLSL.Data.AllocatorInstance.Data;
      lVar7 = (longlong)
              `public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
              ::__l2::FunctionHLSL.Data.ArrayNum;
      local_298.Data = (FScriptContainerElement *)0x0;
      local_290 = `public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                  ::__l2::FunctionHLSL.Data.ArrayNum;
      if (`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
          ::__l2::FunctionHLSL.Data.ArrayNum == 0) {
        local_28c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,`public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                       ::__l2::FunctionHLSL.Data.ArrayNum,0,&local_298,
                   `public:_static_class_FString___cdecl_FVectorKernelFastUniqueRandom::GetFunctionHLSL(void)'
                   ::__l2::FunctionHLSL.Data.ArrayNum,&local_28c);
        memcpy(local_298.Data,FVar3.Data,lVar7 * 2);
      }
      DestructItems<FString,int>
                ((FString *)VectorVMOpsHLSL.AllocatorInstance.Data,VectorVMOpsHLSL.ArrayNum);
      VectorVMOpsHLSL.ArrayNum = 4;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,4,VectorVMOpsHLSL.ArrayMax,&VectorVMOpsHLSL.AllocatorInstance,4,
                 &VectorVMOpsHLSL.ArrayMax);
      ConstructItems<FString,FString,int>(VectorVMOpsHLSL.AllocatorInstance.Data,&local_2c8,4);
      puVar8 = local_288;
      do {
        puVar1 = (undefined8 *)(puVar8 + -0x10);
        puVar8 = puVar8 + -0x10;
        lVar5 = lVar5 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar5 != 0);
      if (VectorVMOps.ArrayNum != VectorVMOpsHLSL.ArrayNum) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VectorVMOps.Num() == VectorVMOpsHLSL.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraFunctionLibrary.cpp"
                           ,0x53e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FastPathBuildLock);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&FastPathBuildLock);
  }
  return;
}

// OverrideSystemUserVariableSkeletalMeshComponent @ 1492f98e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent
          (UNiagaraComponent *param_1,FString *param_2,USkeletalMeshComponent *param_3)

{
  bool bVar1;
  USkeletalMesh *this;
  UNiagaraDataInterfaceSkeletalMesh *this_00;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar1) {
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (((param_3 == (USkeletalMeshComponent *)0x0) ||
        (this = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3), this == (USkeletalMesh *)0x0)
        ) || (this->_padding_ == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    }
    if ((param_3 == (USkeletalMeshComponent *)0x0) || (param_3->_padding_ == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_28,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else if (param_3 == (USkeletalMeshComponent *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  else {
    this_00 = GetSkeletalMeshDataInterface(param_1,param_2);
    if (this_00 != (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
      UNiagaraDataInterfaceSkeletalMesh::SetSourceComponentFromBlueprints(this_00,param_3);
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return;
}

// OverrideSystemUserVariableStaticMesh @ 1492f9b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh
          (UNiagaraComponent *param_1,FString *param_2,UStaticMesh *param_3)

{
  bool bVar1;
  int iVar2;
  FNiagaraTypeRegistry *this;
  int *piVar3;
  UNiagaraDataInterfaceStaticMesh *this_00;
  UClass *pUVar4;
  FStaticBasicLogRecord *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  FScriptContainerElement *local_40;
  undefined8 local_38;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar1) {
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if ((param_3 == (UStaticMesh *)0x0) || (param_3->_padding_ == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_78,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  else if (param_3 == (UStaticMesh *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  else {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,pwVar7);
    local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_68.DebugPtr);
    }
    local_5e = 0;
    local_60 = 1;
    iVar2 = -1;
    local_5c = 0xffffffffffffffff;
    if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
    }
    pwVar7 = L"";
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayNum = 0;
    }
    else {
      local_78.Data.ArrayNum = local_78.Data.ArrayNum + -1;
      pwVar7 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    }
    local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(local_78.Data.ArrayNum,pwVar7);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_50 = local_res8;
    if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
      this = FNiagaraTypeRegistry::Get();
      iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (this,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
    }
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_48 = iVar2;
    piVar3 = (int *)(**(code **)((param_1->OverrideParameters)._padding_ + 0x58))
                              (&param_1->OverrideParameters,&local_50);
    if ((piVar3 == (int *)0x0) || (*piVar3 == -1)) {
      FVar6.Data = local_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_1492f9e81;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
      }
      pFVar5 = &::LOG_Static;
    }
    else {
      this_00 = (UNiagaraDataInterfaceStaticMesh *)
                FNiagaraParameterStore::GetDataInterface
                          ((FNiagaraParameterStore *)&param_1->OverrideParameters,*piVar3);
      if (this_00 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
        pUVar4 = Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          UNiagaraDataInterfaceStaticMesh::SetDefaultMeshFromBlueprints(this_00,param_3);
          FVar6.Data = local_40;
          goto LAB_1492f9e81;
        }
      }
      FVar6.Data = local_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_1492f9e81;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
      }
      pFVar5 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogNiagara);
    FVar6.Data = local_40;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      FVar6.Data = local_40;
    }
  }
LAB_1492f9e81:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// OverrideSystemUserVariableStaticMeshComponent @ 1492f9ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent
          (UNiagaraComponent *param_1,FString *param_2,UStaticMeshComponent *param_3)

{
  bool bVar1;
  int iVar2;
  FNiagaraTypeRegistry *this;
  int *piVar3;
  UNiagaraDataInterfaceStaticMesh *this_00;
  UClass *pUVar4;
  FStaticBasicLogRecord *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  FScriptContainerElement *local_40;
  undefined8 local_38;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar1) {
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if ((param_3 == (UStaticMeshComponent *)0x0) || (param_3->_padding_ == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_78,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  else if (param_3 == (UStaticMeshComponent *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  else {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,pwVar7);
    local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_68.DebugPtr);
    }
    local_5e = 0;
    local_60 = 1;
    iVar2 = -1;
    local_5c = 0xffffffffffffffff;
    if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
    }
    pwVar7 = L"";
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayNum = 0;
    }
    else {
      local_78.Data.ArrayNum = local_78.Data.ArrayNum + -1;
      pwVar7 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    }
    local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(local_78.Data.ArrayNum,pwVar7);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_50 = local_res8;
    if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
      this = FNiagaraTypeRegistry::Get();
      iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (this,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
    }
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_48 = iVar2;
    piVar3 = (int *)(**(code **)((param_1->OverrideParameters)._padding_ + 0x58))
                              (&param_1->OverrideParameters,&local_50);
    if ((piVar3 == (int *)0x0) || (*piVar3 == -1)) {
      FVar6.Data = local_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_1492fa201;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
      }
      pFVar5 = &::LOG_Static;
    }
    else {
      this_00 = (UNiagaraDataInterfaceStaticMesh *)
                FNiagaraParameterStore::GetDataInterface
                          ((FNiagaraParameterStore *)&param_1->OverrideParameters,*piVar3);
      if (this_00 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
        pUVar4 = Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          UNiagaraDataInterfaceStaticMesh::SetSourceComponentFromBlueprints(this_00,param_3);
          FVar6.Data = local_40;
          goto LAB_1492fa201;
        }
      }
      FVar6.Data = local_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_1492fa201;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
      }
      pFVar5 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogNiagara);
    FVar6.Data = local_40;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      FVar6.Data = local_40;
    }
  }
LAB_1492fa201:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// ReleaseNiagaraGPURayTracedCollisionGroup @ 1493031a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::ReleaseNiagaraGPURayTracedCollisionGroup(UObject *param_1,int param_2)

{
  UWorld *pUVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FNiagaraAsyncGpuTraceHelper *this;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((pUVar1 != (UWorld *)0x0) && (pUVar1->Scene != (FSceneInterface *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(pUVar1->Scene->_padding_ + 0x478))();
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)(**(code **)*puVar2)(puVar2,&FNiagaraGpuComputeDispatch::Name);
    }
    if (plVar3 != (longlong *)0x0) {
      this = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(*plVar3 + 0x118))();
      FNiagaraAsyncGpuTraceHelper::ReleaseGPURayTracedCollisionGroup_GT(this,param_2);
      return;
    }
  }
  return;
}

// SetActorNiagaraGPURayTracedCollisionGroup @ 1493057b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup
          (UObject *param_1,AActor *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  undefined8 *puVar4;
  UClass *pUVar5;
  FNiagaraAsyncGpuTraceHelper *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *local_res10;
  int local_res18 [4];
  <lambda_1> local_28;
  
  if (param_2 == (AActor *)0x0) {
    return;
  }
  local_res18[0] = param_3;
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  if (pUVar3->Scene == (FSceneInterface *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)(**(code **)(pUVar3->Scene->_padding_ + 0x478))();
  pUVar8 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  pUVar5 = pUVar8;
  if (puVar4 != (undefined8 *)0x0) {
    pUVar5 = (UClass *)(**(code **)*puVar4)(puVar4,&FNiagaraGpuComputeDispatch::Name);
  }
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pFVar6 = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(pUVar5->_padding_ + 0x118))();
  pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_149305899;
  }
  else {
    pUVar9 = pUVar8;
    if (pUVar5 == (UClass *)0x0) goto LAB_149305899;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar9 = pUVar5;
    }
  }
LAB_149305899:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar5;
  local_28.Helper = pFVar6;
  if (pUVar9 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_28.CollisionGroup = local_res18;
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
              (param_2,(TSubclassOf<UActorComponent>)&local_res10,&local_28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_28.CollisionGroup = local_res18;
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
              (param_2,(TSubclassOf<UActorComponent>)&local_res10,&local_28);
  }
  return;
}

// SetComponentNiagaraGPURayTracedCollisionGroup @ 149305e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetComponentNiagaraGPURayTracedCollisionGroup
          (UObject *param_1,UPrimitiveComponent *param_2,int param_3)

{
  UWorld *pUVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FNiagaraAsyncGpuTraceHelper *this;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((pUVar1 != (UWorld *)0x0) && (pUVar1->Scene != (FSceneInterface *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(pUVar1->Scene->_padding_ + 0x478))();
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)(**(code **)*puVar2)(puVar2,&FNiagaraGpuComputeDispatch::Name);
    }
    if (plVar3 != (longlong *)0x0) {
      this = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(*plVar3 + 0x118))();
      FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT(this,param_2,param_3);
    }
  }
  return;
}

// SetSceneCapture2DDataInterfaceManagedMode @ 149307110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetSceneCapture2DDataInterfaceManagedMode
          (UNiagaraComponent *param_1,FName *param_2,ESceneCaptureSource param_3,
          TIntPoint<int> param_4,ETextureRenderTargetFormat param_5,Type param_6,float param_7,
          float param_8,bool param_9,bool param_10,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_11)

{
  undefined1 *puVar1;
  TUniquePtr<FNiagaraDataInterfaceProxy,TDefaultDelete<FNiagaraDataInterfaceProxy>_> *pTVar2;
  TObjectPtr<AActor>_u_0 *pTVar3;
  int iVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UNiagaraDataInterface *pUVar10;
  longlong lVar11;
  TObjectPtr<AActor>_u_0 *pTVar12;
  undefined1 local_res8 [8];
  TObjectPtr<AActor>_u_0 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FString local_40;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar7 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar7) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else {
    FVar5 = *param_2;
    pUVar9 = Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_NoRegister();
    pUVar10 = GetDataInterface(pUVar9,param_1,FVar5);
    if (pUVar10 == (UNiagaraDataInterface *)0x0) {
      bVar7 = FNiagaraUtilities::LogVerboseWarnings();
      if (!bVar7) {
        return;
      }
      if ((byte)LogNiagara._0_1_ < 3) {
        return;
      }
      ::FName::ToString(param_2,&local_40);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    else {
      pTVar2 = &pUVar10[3].Proxy;
      *(undefined1 *)&pUVar10[1]._padding_ = 3;
      pUVar10[2].field_0x30 = (char)param_3;
      *(TIntPoint<int>_u_0 *)&pUVar10[2].field_0x34 = (TIntPoint<int>_u_0_s_0)param_4.field0_0x0;
      *(undefined1 *)((longlong)&pUVar10[3]._padding_ + 4) = (undefined1)param_5;
      *(undefined1 *)((longlong)&pUVar10[3]._padding_ + 5) = (undefined1)param_6;
      *(bool *)&pUVar10[3]._padding_ = param_9;
      puVar1 = &pUVar10[3].field_0x34;
      *(bool *)((longlong)&pUVar10[3]._padding_ + 1) = param_10;
      *(float *)&pUVar10[3]._padding_ = param_7;
      *(float *)((longlong)&pUVar10[3]._padding_ + 4) = param_8;
      *(undefined4 *)&pUVar10[3].field_0x30 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
      }
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      pTVar12 = (TObjectPtr<AActor>_u_0 *)(param_11->AllocatorInstance).Data;
      iVar4 = param_11->ArrayNum;
      pTVar3 = pTVar12 + iVar4;
      while( true ) {
        if (param_11->ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pTVar12 == pTVar3) break;
        local_58 = (TObjectPtr<AActor>_u_0)pTVar12->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_58.DebugPtr != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
        }
        if (((local_50.Data <= &local_58) &&
            (&local_58 < (TObjectPtr<AActor>_u_0 *)(local_50.Data + (longlong)local_48._4_4_ * 8)))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)local_48 == local_48._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_50,(int *)((longlong)&local_48 + 4));
          local_48 = CONCAT44(local_48._4_4_,iVar8);
        }
        lVar11 = (longlong)(int)local_48;
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 1);
        ((TObjectPtr<AActor>_u_0 *)(local_50.Data + lVar11 * 8))->DebugPtr = (AActor *)local_58;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_58.DebugPtr != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
        }
        pTVar12 = pTVar12 + 1;
      }
      if (((ForAnyElementType *)pTVar2 == &local_50) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = (int)local_48;
      local_40.Data.AllocatorInstance.Data = local_50.Data;
      if ((int)local_48 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(int)local_48,(ForAnyElementType *)pTVar2,
                           (int *)&pUVar10[3].field_0x30,(int *)puVar1);
        ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
                  (&pTVar2->Ptr->_padding_ + iVar8,(TObjectPtr<AActor> *)local_50.Data,iVar4);
        local_40.Data.AllocatorInstance.Data = local_50.Data;
      }
    }
    if ((TObjectPtr<AActor>_u_0 *)local_40.Data.AllocatorInstance.Data !=
        (TObjectPtr<AActor>_u_0 *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetSkeletalMeshDataInterfaceFilteredBones @ 149307520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredBones
          (UNiagaraComponent *param_1,FString *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  UNiagaraDataInterfaceSkeletalMesh *this;
  FString local_18;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar1) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else {
    this = GetSkeletalMeshDataInterface(param_1,param_2);
    if (this == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
      if (2 < (byte)LogNiagara._0_1_) {
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      UNiagaraDataInterfaceSkeletalMesh::SetFilteredBonesFromBlueprints(this,param_3);
    }
  }
  return;
}

// SetSkeletalMeshDataInterfaceFilteredSockets @ 149307650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredSockets
          (UNiagaraComponent *param_1,FString *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  UNiagaraDataInterfaceSkeletalMesh *this;
  FString local_18;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar1) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else {
    this = GetSkeletalMeshDataInterface(param_1,param_2);
    if (this == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
      if (2 < (byte)LogNiagara._0_1_) {
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      UNiagaraDataInterfaceSkeletalMesh::SetFilteredSocketsFromBlueprints(this,param_3);
    }
  }
  return;
}

// SetSkeletalMeshDataInterfaceSamplingRegions @ 149307780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions
          (UNiagaraComponent *param_1,FString *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  UNiagaraDataInterfaceSkeletalMesh *this;
  FString local_18;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar1) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else {
    this = GetSkeletalMeshDataInterface(param_1,param_2);
    if (this == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
      if (2 < (byte)LogNiagara._0_1_) {
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      UNiagaraDataInterfaceSkeletalMesh::SetSamplingRegionsFromBlueprints(this,param_3);
    }
  }
  return;
}

// SetTexture2DArrayObject @ 1493078b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetTexture2DArrayObject
          (UNiagaraComponent *param_1,FString *param_2,UTexture2DArray *param_3)

{
  FNiagaraUserRedirectionParameterStore *this;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  FNiagaraTypeRegistry *pFVar4;
  int *piVar5;
  UNiagaraDataInterfaceTexture *this_00;
  UNiagaraDataInterface2DArrayTexture *this_01;
  UNiagaraDataInterfaceVolumeTexture *this_02;
  UNiagaraDataInterfaceCubeTexture *this_03;
  int iVar6;
  FStaticBasicLogRecord *pFVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName FStackX_8;
  FString FStack_78;
  TObjectPtr<UObject>_u_0 TStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  uint uStack_54;
  FName FStack_50;
  int iStack_48;
  TObjectPtr<UObject>_u_0 TStack_40;
  undefined8 uStack_38;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar1) {
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if ((param_3 == (UTexture2DArray *)0x0) || (param_3->_padding_ == 0)) {
      ::FString::FString(&FStack_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&FStack_78,(UObject *)0x0,None);
    }
    pFVar7 = &::LOG_Static;
LAB_14930794f:
    UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
    if (FStack_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    return;
  }
  if (param_3 == (UTexture2DArray *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&FStack_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
    }
    pFVar7 = &::LOG_Static;
    goto LAB_14930794f;
  }
  this = &param_1->OverrideParameters;
  pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) goto LAB_149307a4c;
    pUVar3 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar3->_padding_)) goto LAB_149307cba;
      pUVar3 = Z_Construct_UClass_UVolumeTexture_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        pUVar3 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) goto LAB_149307f0e;
        pUVar3 = Z_Construct_UClass_UTextureCube_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar3->_padding_)) {
          pUVar3 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar3->_padding_)) {
            if ((byte)LogNiagara._0_1_ < 3) {
              return;
            }
            if (param_1->_padding_ == 0) {
              ::FString::FString((FString *)&TStack_68.ObjectPtr,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_1,(FString *)&TStack_68.ObjectPtr,
                         (UObject *)0x0,None);
            }
            if (param_3->_padding_ == 0) {
              ::FString::FString(&FStack_78,L"None");
            }
            else {
              FStackX_8 = *(FName *)(param_3->_padding_ + 0x18);
              ::FName::ToString(&FStackX_8,&FStack_78);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            TVar8 = TStack_68;
            if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
              TVar8 = TStack_68;
            }
            goto LAB_149308425;
          }
        }
        if ((param_2->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&FStackX_8,pwVar9);
        TStack_68.DebugPtr =
             (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable(TStack_68.DebugPtr);
        }
        uStack_60 = (uint)uStack_60._3_1_ << 0x18;
        uStack_60 = CONCAT22(uStack_60._2_2_,1);
        iVar2 = -1;
        uStack_5c = 0xffffffffffffffff;
        if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
           (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (FStack_78.Data.ArrayNum != 0) {
          FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
        }
        iVar6 = FStack_78.Data.ArrayNum + -1;
        if (FStack_78.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
        FStack_50 = FStackX_8;
        if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
          pFVar4 = FNiagaraTypeRegistry::Get();
          iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
        }
        TStack_40.DebugPtr = (UObject *)0x0;
        uStack_38 = 0;
        iStack_48 = iVar2;
        piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
        if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
        else {
          this_03 = (UNiagaraDataInterfaceCubeTexture *)
                    FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5)
          ;
          if (this_03 != (UNiagaraDataInterfaceCubeTexture *)0x0) {
            pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
            iVar2 = (int)pUVar3->_padding_;
            if ((iVar2 <= *(int *)(this_03->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar3->_padding_)) {
              UNiagaraDataInterfaceCubeTexture::SetTexture(this_03,(UTexture *)param_3);
              TVar8 = TStack_40;
              goto LAB_149308425;
            }
          }
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
      }
      else {
LAB_149307f0e:
        if ((param_2->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&FStackX_8,pwVar9);
        TStack_68.DebugPtr =
             (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable(TStack_68.DebugPtr);
        }
        uStack_60 = (uint)uStack_60._3_1_ << 0x18;
        uStack_60 = CONCAT22(uStack_60._2_2_,1);
        iVar2 = -1;
        uStack_5c = 0xffffffffffffffff;
        if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
           (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (FStack_78.Data.ArrayNum != 0) {
          FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
        }
        iVar6 = FStack_78.Data.ArrayNum + -1;
        if (FStack_78.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
        FStack_50 = FStackX_8;
        if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
          pFVar4 = FNiagaraTypeRegistry::Get();
          iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
        }
        TStack_40.DebugPtr = (UObject *)0x0;
        uStack_38 = 0;
        iStack_48 = iVar2;
        piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
        if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
        else {
          this_02 = (UNiagaraDataInterfaceVolumeTexture *)
                    FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5)
          ;
          if (this_02 != (UNiagaraDataInterfaceVolumeTexture *)0x0) {
            pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister();
            iVar2 = (int)pUVar3->_padding_;
            if ((iVar2 <= *(int *)(this_02->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar3->_padding_)) {
              UNiagaraDataInterfaceVolumeTexture::SetTexture(this_02,(UTexture *)param_3);
              TVar8 = TStack_40;
              goto LAB_149308425;
            }
          }
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
      }
    }
    else {
LAB_149307cba:
      if ((param_2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&FStackX_8,pwVar9);
      TStack_68.DebugPtr =
           (UObject *)Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(TStack_68.DebugPtr);
      }
      uStack_60 = (uint)uStack_60._3_1_ << 0x18;
      uStack_60 = CONCAT22(uStack_60._2_2_,1);
      iVar2 = -1;
      uStack_5c = 0xffffffffffffffff;
      if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
         (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
        ::FString::FString(&FStack_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (FStack_78.Data.ArrayNum != 0) {
        FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
      }
      iVar6 = FStack_78.Data.ArrayNum + -1;
      if (FStack_78.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      FStack_50 = FStackX_8;
      if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
        pFVar4 = FNiagaraTypeRegistry::Get();
        iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
      }
      TStack_40.DebugPtr = (UObject *)0x0;
      uStack_38 = 0;
      iStack_48 = iVar2;
      piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
      if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
        TVar8 = TStack_40;
        if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
        if (param_1->_padding_ == 0) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
        }
        pFVar7 = &::LOG_Static;
      }
      else {
        this_01 = (UNiagaraDataInterface2DArrayTexture *)
                  FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5);
        if (this_01 != (UNiagaraDataInterface2DArrayTexture *)0x0) {
          pUVar3 = Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar3->_padding_)) {
            UNiagaraDataInterface2DArrayTexture::SetTexture(this_01,(UTexture *)param_3);
            TVar8 = TStack_40;
            goto LAB_149308425;
          }
        }
        TVar8 = TStack_40;
        if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
        if (param_1->_padding_ == 0) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
        }
        pFVar7 = &::LOG_Static;
      }
    }
  }
  else {
LAB_149307a4c:
    if ((param_2->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&FStackX_8,pwVar9);
    TStack_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(TStack_68.DebugPtr);
    }
    uStack_60 = (uint)uStack_60._3_1_ << 0x18;
    uStack_60 = CONCAT22(uStack_60._2_2_,1);
    iVar2 = -1;
    uStack_5c = 0xffffffffffffffff;
    if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&FStack_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_78.Data.ArrayNum != 0) {
      FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    iVar6 = FStack_78.Data.ArrayNum + -1;
    if (FStack_78.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    FStack_50 = FStackX_8;
    if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
      pFVar4 = FNiagaraTypeRegistry::Get();
      iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
    }
    TStack_40.DebugPtr = (UObject *)0x0;
    uStack_38 = 0;
    iStack_48 = iVar2;
    piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
    if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
      TVar8 = TStack_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&FStack_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
      }
      pFVar7 = &::LOG_Static;
    }
    else {
      this_00 = (UNiagaraDataInterfaceTexture *)
                FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5);
      if (this_00 != (UNiagaraDataInterfaceTexture *)0x0) {
        pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) {
          UNiagaraDataInterfaceTexture::SetTexture(this_00,(UTexture *)param_3);
          TVar8 = TStack_40;
          goto LAB_149308425;
        }
      }
      TVar8 = TStack_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&FStack_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
      }
      pFVar7 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
  TVar8 = TStack_40;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    TVar8 = TStack_40;
  }
LAB_149308425:
  if ((UClass *)TVar8.DebugPtr == (UClass *)0x0) {
    return;
  }
  FMemory::Free(TVar8.DebugPtr);
  return;
}

// SetTextureObject @ 1493078c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetTextureObject
          (UNiagaraComponent *param_1,FString *param_2,UTexture *param_3)

{
  FNiagaraUserRedirectionParameterStore *this;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  FNiagaraTypeRegistry *pFVar4;
  int *piVar5;
  UNiagaraDataInterfaceTexture *this_00;
  UNiagaraDataInterface2DArrayTexture *this_01;
  UNiagaraDataInterfaceVolumeTexture *this_02;
  UNiagaraDataInterfaceCubeTexture *this_03;
  int iVar6;
  FStaticBasicLogRecord *pFVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  TObjectPtr<UObject>_u_0 local_40;
  undefined8 local_38;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar1) {
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if ((param_3 == (UTexture *)0x0) || (param_3->_padding_ == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_78,(UObject *)0x0,None);
    }
    pFVar7 = &::LOG_Static;
LAB_14930794f:
    UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    return;
  }
  if (param_3 == (UTexture *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
    }
    pFVar7 = &::LOG_Static;
    goto LAB_14930794f;
  }
  this = &param_1->OverrideParameters;
  pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) goto LAB_149307a4c;
    pUVar3 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar3->_padding_)) goto LAB_149307cba;
      pUVar3 = Z_Construct_UClass_UVolumeTexture_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        pUVar3 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) goto LAB_149307f0e;
        pUVar3 = Z_Construct_UClass_UTextureCube_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar3->_padding_)) {
          pUVar3 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar3->_padding_)) {
            if ((byte)LogNiagara._0_1_ < 3) {
              return;
            }
            if (param_1->_padding_ == 0) {
              ::FString::FString((FString *)&local_68.ObjectPtr,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_1,(FString *)&local_68.ObjectPtr,(UObject *)0x0
                         ,None);
            }
            if (param_3->_padding_ == 0) {
              ::FString::FString(&local_78,L"None");
            }
            else {
              local_res8 = *(FName *)(param_3->_padding_ + 0x18);
              ::FName::ToString(&local_res8,&local_78);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            TVar8 = local_68;
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
              TVar8 = local_68;
            }
            goto LAB_149308425;
          }
        }
        if ((param_2->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_res8,pwVar9);
        local_68.DebugPtr =
             (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable(local_68.DebugPtr);
        }
        local_60 = (uint)local_60._3_1_ << 0x18;
        local_60 = CONCAT22(local_60._2_2_,1);
        iVar2 = -1;
        local_5c = 0xffffffffffffffff;
        if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
           (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar10.Data = local_78.Data.AllocatorInstance.Data;
        }
        iVar6 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_50 = local_res8;
        if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
          pFVar4 = FNiagaraTypeRegistry::Get();
          iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar4,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
        }
        local_40.DebugPtr = (UObject *)0x0;
        local_38 = 0;
        local_48 = iVar2;
        piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_50);
        if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
          TVar8 = local_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
        else {
          this_03 = (UNiagaraDataInterfaceCubeTexture *)
                    FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5)
          ;
          if (this_03 != (UNiagaraDataInterfaceCubeTexture *)0x0) {
            pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
            iVar2 = (int)pUVar3->_padding_;
            if ((iVar2 <= *(int *)(this_03->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar3->_padding_)) {
              UNiagaraDataInterfaceCubeTexture::SetTexture(this_03,param_3);
              TVar8 = local_40;
              goto LAB_149308425;
            }
          }
          TVar8 = local_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
      }
      else {
LAB_149307f0e:
        if ((param_2->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_res8,pwVar9);
        local_68.DebugPtr =
             (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable(local_68.DebugPtr);
        }
        local_60 = (uint)local_60._3_1_ << 0x18;
        local_60 = CONCAT22(local_60._2_2_,1);
        iVar2 = -1;
        local_5c = 0xffffffffffffffff;
        if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
           (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar10.Data = local_78.Data.AllocatorInstance.Data;
        }
        iVar6 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_50 = local_res8;
        if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
          pFVar4 = FNiagaraTypeRegistry::Get();
          iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar4,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
        }
        local_40.DebugPtr = (UObject *)0x0;
        local_38 = 0;
        local_48 = iVar2;
        piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_50);
        if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
          TVar8 = local_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
        else {
          this_02 = (UNiagaraDataInterfaceVolumeTexture *)
                    FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5)
          ;
          if (this_02 != (UNiagaraDataInterfaceVolumeTexture *)0x0) {
            pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister();
            iVar2 = (int)pUVar3->_padding_;
            if ((iVar2 <= *(int *)(this_02->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar3->_padding_)) {
              UNiagaraDataInterfaceVolumeTexture::SetTexture(this_02,param_3);
              TVar8 = local_40;
              goto LAB_149308425;
            }
          }
          TVar8 = local_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
      }
    }
    else {
LAB_149307cba:
      if ((param_2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,pwVar9);
      local_68.DebugPtr =
           (UObject *)Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(local_68.DebugPtr);
      }
      local_60 = (uint)local_60._3_1_ << 0x18;
      local_60 = CONCAT22(local_60._2_2_,1);
      iVar2 = -1;
      local_5c = 0xffffffffffffffff;
      if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
         (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar10.Data = local_78.Data.AllocatorInstance.Data;
      }
      iVar6 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_50 = local_res8;
      if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
        pFVar4 = FNiagaraTypeRegistry::Get();
        iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (pFVar4,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
      }
      local_40.DebugPtr = (UObject *)0x0;
      local_38 = 0;
      local_48 = iVar2;
      piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_50);
      if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
        TVar8 = local_40;
        if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
        }
        pFVar7 = &::LOG_Static;
      }
      else {
        this_01 = (UNiagaraDataInterface2DArrayTexture *)
                  FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5);
        if (this_01 != (UNiagaraDataInterface2DArrayTexture *)0x0) {
          pUVar3 = Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar3->_padding_)) {
            UNiagaraDataInterface2DArrayTexture::SetTexture(this_01,param_3);
            TVar8 = local_40;
            goto LAB_149308425;
          }
        }
        TVar8 = local_40;
        if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
        }
        pFVar7 = &::LOG_Static;
      }
    }
  }
  else {
LAB_149307a4c:
    if ((param_2->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,pwVar9);
    local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_68.DebugPtr);
    }
    local_60 = (uint)local_60._3_1_ << 0x18;
    local_60 = CONCAT22(local_60._2_2_,1);
    iVar2 = -1;
    local_5c = 0xffffffffffffffff;
    if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar6 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_50 = local_res8;
    if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
      pFVar4 = FNiagaraTypeRegistry::Get();
      iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (pFVar4,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
    }
    local_40.DebugPtr = (UObject *)0x0;
    local_38 = 0;
    local_48 = iVar2;
    piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&local_50);
    if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
      TVar8 = local_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
      }
      pFVar7 = &::LOG_Static;
    }
    else {
      this_00 = (UNiagaraDataInterfaceTexture *)
                FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5);
      if (this_00 != (UNiagaraDataInterfaceTexture *)0x0) {
        pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) {
          UNiagaraDataInterfaceTexture::SetTexture(this_00,param_3);
          TVar8 = local_40;
          goto LAB_149308425;
        }
      }
      TVar8 = local_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
      }
      pFVar7 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
  TVar8 = local_40;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    TVar8 = local_40;
  }
LAB_149308425:
  if ((UClass *)TVar8.DebugPtr == (UClass *)0x0) {
    return;
  }
  FMemory::Free(TVar8.DebugPtr);
  return;
}

// SetVolumeTextureObject @ 149308da0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::SetVolumeTextureObject
          (UNiagaraComponent *param_1,FString *param_2,UVolumeTexture *param_3)

{
  FNiagaraUserRedirectionParameterStore *this;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  FNiagaraTypeRegistry *pFVar4;
  int *piVar5;
  UNiagaraDataInterfaceTexture *this_00;
  UNiagaraDataInterface2DArrayTexture *this_01;
  UNiagaraDataInterfaceVolumeTexture *this_02;
  UNiagaraDataInterfaceCubeTexture *this_03;
  int iVar6;
  FStaticBasicLogRecord *pFVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FName FStackX_8;
  FString FStack_78;
  TObjectPtr<UObject>_u_0 TStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  uint uStack_54;
  FName FStack_50;
  int iStack_48;
  TObjectPtr<UObject>_u_0 TStack_40;
  undefined8 uStack_38;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar1 = FNiagaraUtilities::LogVerboseWarnings();
    if (!bVar1) {
      return;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if ((param_3 == (UVolumeTexture *)0x0) || (param_3->_padding_ == 0)) {
      ::FString::FString(&FStack_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&FStack_78,(UObject *)0x0,None);
    }
    pFVar7 = &::LOG_Static;
LAB_14930794f:
    UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
    if (FStack_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    return;
  }
  if (param_3 == (UVolumeTexture *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&FStack_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
    }
    pFVar7 = &::LOG_Static;
    goto LAB_14930794f;
  }
  this = &param_1->OverrideParameters;
  pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) goto LAB_149307a4c;
    pUVar3 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar3->_padding_)) goto LAB_149307cba;
      pUVar3 = Z_Construct_UClass_UVolumeTexture_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        pUVar3 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(param_3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) goto LAB_149307f0e;
        pUVar3 = Z_Construct_UClass_UTextureCube_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar3->_padding_)) {
          pUVar3 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if ((*(int *)(param_3->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar3->_padding_)) {
            if ((byte)LogNiagara._0_1_ < 3) {
              return;
            }
            if (param_1->_padding_ == 0) {
              ::FString::FString((FString *)&TStack_68.ObjectPtr,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_1,(FString *)&TStack_68.ObjectPtr,
                         (UObject *)0x0,None);
            }
            if (param_3->_padding_ == 0) {
              ::FString::FString(&FStack_78,L"None");
            }
            else {
              FStackX_8 = *(FName *)(param_3->_padding_ + 0x18);
              ::FName::ToString(&FStackX_8,&FStack_78);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            TVar8 = TStack_68;
            if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
              TVar8 = TStack_68;
            }
            goto LAB_149308425;
          }
        }
        if ((param_2->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&FStackX_8,pwVar9);
        TStack_68.DebugPtr =
             (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable(TStack_68.DebugPtr);
        }
        uStack_60 = (uint)uStack_60._3_1_ << 0x18;
        uStack_60 = CONCAT22(uStack_60._2_2_,1);
        iVar2 = -1;
        uStack_5c = 0xffffffffffffffff;
        if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
           (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (FStack_78.Data.ArrayNum != 0) {
          FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
        }
        iVar6 = FStack_78.Data.ArrayNum + -1;
        if (FStack_78.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
        FStack_50 = FStackX_8;
        if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
          pFVar4 = FNiagaraTypeRegistry::Get();
          iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
        }
        TStack_40.DebugPtr = (UObject *)0x0;
        uStack_38 = 0;
        iStack_48 = iVar2;
        piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
        if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
        else {
          this_03 = (UNiagaraDataInterfaceCubeTexture *)
                    FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5)
          ;
          if (this_03 != (UNiagaraDataInterfaceCubeTexture *)0x0) {
            pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
            iVar2 = (int)pUVar3->_padding_;
            if ((iVar2 <= *(int *)(this_03->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar3->_padding_)) {
              UNiagaraDataInterfaceCubeTexture::SetTexture(this_03,(UTexture *)param_3);
              TVar8 = TStack_40;
              goto LAB_149308425;
            }
          }
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
      }
      else {
LAB_149307f0e:
        if ((param_2->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&FStackX_8,pwVar9);
        TStack_68.DebugPtr =
             (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable(TStack_68.DebugPtr);
        }
        uStack_60 = (uint)uStack_60._3_1_ << 0x18;
        uStack_60 = CONCAT22(uStack_60._2_2_,1);
        iVar2 = -1;
        uStack_5c = 0xffffffffffffffff;
        if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
           (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (FStack_78.Data.ArrayNum != 0) {
          FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
        }
        iVar6 = FStack_78.Data.ArrayNum + -1;
        if (FStack_78.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
        FStack_50 = FStackX_8;
        if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
          pFVar4 = FNiagaraTypeRegistry::Get();
          iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
        }
        TStack_40.DebugPtr = (UObject *)0x0;
        uStack_38 = 0;
        iStack_48 = iVar2;
        piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
        if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
        else {
          this_02 = (UNiagaraDataInterfaceVolumeTexture *)
                    FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5)
          ;
          if (this_02 != (UNiagaraDataInterfaceVolumeTexture *)0x0) {
            pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceVolumeTexture_NoRegister();
            iVar2 = (int)pUVar3->_padding_;
            if ((iVar2 <= *(int *)(this_02->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar3->_padding_)) {
              UNiagaraDataInterfaceVolumeTexture::SetTexture(this_02,(UTexture *)param_3);
              TVar8 = TStack_40;
              goto LAB_149308425;
            }
          }
          TVar8 = TStack_40;
          if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
          if (param_1->_padding_ == 0) {
            ::FString::FString(&FStack_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
          }
          pFVar7 = &::LOG_Static;
        }
      }
    }
    else {
LAB_149307cba:
      if ((param_2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&FStackX_8,pwVar9);
      TStack_68.DebugPtr =
           (UObject *)Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(TStack_68.DebugPtr);
      }
      uStack_60 = (uint)uStack_60._3_1_ << 0x18;
      uStack_60 = CONCAT22(uStack_60._2_2_,1);
      iVar2 = -1;
      uStack_5c = 0xffffffffffffffff;
      if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
         (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
        ::FString::FString(&FStack_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (FStack_78.Data.ArrayNum != 0) {
        FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
      }
      iVar6 = FStack_78.Data.ArrayNum + -1;
      if (FStack_78.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      FStack_50 = FStackX_8;
      if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
        pFVar4 = FNiagaraTypeRegistry::Get();
        iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
      }
      TStack_40.DebugPtr = (UObject *)0x0;
      uStack_38 = 0;
      iStack_48 = iVar2;
      piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
      if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
        TVar8 = TStack_40;
        if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
        if (param_1->_padding_ == 0) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
        }
        pFVar7 = &::LOG_Static;
      }
      else {
        this_01 = (UNiagaraDataInterface2DArrayTexture *)
                  FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5);
        if (this_01 != (UNiagaraDataInterface2DArrayTexture *)0x0) {
          pUVar3 = Z_Construct_UClass_UNiagaraDataInterface2DArrayTexture_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar3->_padding_)) {
            UNiagaraDataInterface2DArrayTexture::SetTexture(this_01,(UTexture *)param_3);
            TVar8 = TStack_40;
            goto LAB_149308425;
          }
        }
        TVar8 = TStack_40;
        if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
        if (param_1->_padding_ == 0) {
          ::FString::FString(&FStack_78,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
        }
        pFVar7 = &::LOG_Static;
      }
    }
  }
  else {
LAB_149307a4c:
    if ((param_2->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&FStackX_8,pwVar9);
    TStack_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)TStack_68.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(TStack_68.DebugPtr);
    }
    uStack_60 = (uint)uStack_60._3_1_ << 0x18;
    uStack_60 = CONCAT22(uStack_60._2_2_,1);
    iVar2 = -1;
    uStack_5c = 0xffffffffffffffff;
    if (((UClass *)TStack_68.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(TStack_68.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&FStack_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)TStack_68.DebugPtr,&FStack_78,(UObject *)0x0,None);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_78.Data.ArrayNum != 0) {
      FVar10.Data = FStack_78.Data.AllocatorInstance.Data;
    }
    iVar6 = FStack_78.Data.ArrayNum + -1;
    if (FStack_78.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uStack_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    FStack_50 = FStackX_8;
    if ((UClass *)TStack_68.DebugPtr != (UClass *)0x0) {
      pFVar4 = FNiagaraTypeRegistry::Get();
      iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (pFVar4,(FNiagaraTypeDefinition *)&TStack_68.ObjectPtr);
    }
    TStack_40.DebugPtr = (UObject *)0x0;
    uStack_38 = 0;
    iStack_48 = iVar2;
    piVar5 = (int *)(**(code **)(this->_padding_ + 0x58))(this,&FStack_50);
    if ((piVar5 == (int *)0x0) || (*piVar5 == -1)) {
      TVar8 = TStack_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&FStack_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
      }
      pFVar7 = &::LOG_Static;
    }
    else {
      this_00 = (UNiagaraDataInterfaceTexture *)
                FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this,*piVar5);
      if (this_00 != (UNiagaraDataInterfaceTexture *)0x0) {
        pUVar3 = Z_Construct_UClass_UNiagaraDataInterfaceTexture_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) {
          UNiagaraDataInterfaceTexture::SetTexture(this_00,(UTexture *)param_3);
          TVar8 = TStack_40;
          goto LAB_149308425;
        }
      }
      TVar8 = TStack_40;
      if ((byte)LogNiagara._0_1_ < 3) goto LAB_149308425;
      if (param_1->_padding_ == 0) {
        ::FString::FString(&FStack_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&FStack_78,(UObject *)0x0,None);
      }
      pFVar7 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogNiagara);
  TVar8 = TStack_40;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    TVar8 = TStack_40;
  }
LAB_149308425:
  if ((UClass *)TVar8.DebugPtr == (UClass *)0x0) {
    return;
  }
  FMemory::Free(TVar8.DebugPtr);
  return;
}

// SpawnSystemAtLocation @ 149309240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __cdecl
UNiagaraFunctionLibrary::SpawnSystemAtLocation
          (UObject *param_1,UNiagaraSystem *param_2,TVector<double> *param_3,
          TRotator<double> *param_4,TVector<double> *param_5,bool param_6,bool param_7,
          ENCPoolMethod param_8,bool param_9)

{
  FObjectPtr_u_0 FVar1;
  bool bVar2;
  ENCPoolMethod EVar3;
  UClass *pUVar4;
  UWorld *this;
  FNiagaraWorldManager *this_00;
  AWorldSettings *pAVar5;
  UNiagaraComponent *this_01;
  FObjectPtr_u_0 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  bool local_5f;
  bool local_5e;
  EPSCPoolMethod local_5d;
  bool local_5c;
  char local_5b;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  this_01 = (UNiagaraComponent *)0x0;
  local_70 = 0;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_90 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_78 = (double)__real_3ff0000000000000;
  local_68 = 0;
  local_60 = 1;
  local_5b = '\0';
  local_a0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_98 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_88 = (double)___xmm_3ff00000000000003ff0000000000000;
  dStack_80 = (double)_UNK_150689688;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_b8 = (param_3->field0_0x0)._s_0.X;
  dStack_b0 = (param_3->field0_0x0)._s_0.Y;
  local_a8 = (param_3->field0_0x0)._s_0.Z;
  local_a0 = param_4->Pitch;
  dStack_98 = param_4->Yaw;
  local_90 = param_4->Roll;
  local_88 = (param_5->field0_0x0)._s_0.X;
  dStack_80 = (param_5->field0_0x0)._s_0.Y;
  local_78 = (param_5->field0_0x0)._s_0.Z;
  local_5f = param_6;
  local_5e = param_7;
  local_c0 = (FObjectPtr_u_0)param_2;
  local_5d = ToPSCPoolMethod(param_8);
  local_5c = param_9;
  if ((UNiagaraSystem *)local_c0.Handle != (UNiagaraSystem *)0x0) {
    pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_c0,pUVar4);
    FVar1 = local_c0;
    if (((bVar2) && ((UNiagaraSystem *)local_c0.Handle != (UNiagaraSystem *)0x0)) &&
       (this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
       this != (UWorld *)0x0)) {
      if ((local_5c != false) && (((FVar1.Handle[0x25].field_0x8 & 1) != 0 || (local_5b == '\0'))))
      {
        this_00 = FNiagaraWorldManager::Get(this);
        local_58._s_0.X = local_b8;
        local_58._s_0.Y = dStack_b0;
        local_58._s_0.Z = local_a8;
        bVar2 = FNiagaraWorldManager::ShouldPreCull
                          (this_00,(UNiagaraSystem *)FVar1.Handle,(TVector<double> *)&local_58._s_0)
        ;
        if (bVar2) {
          return (UNiagaraComponent *)0x0;
        }
      }
      EVar3 = ToNiagaraPooling(local_5d);
      bVar2 = local_5f;
      pAVar5 = UWorld::GetWorldSettings(this,false,true);
      this_01 = CreateNiagaraSystem((UNiagaraSystem *)FVar1.Handle,this,(AActor *)pAVar5,bVar2,EVar3
                                   );
      if (this_01 != (UNiagaraComponent *)0x0) {
        if (local_5b != '\0') {
          UNiagaraComponent::SetForceLocalPlayerEffect(this_01,true);
        }
        if ((this_01->_padding_ & 1) == 0) {
          UActorComponent::RegisterComponentWithWorld
                    ((UActorComponent *)this_01,this,(FRegisterComponentContext *)0x0);
        }
        USceneComponent::SetAbsolute((USceneComponent *)this_01,true,true,true);
        local_58._s_0.X = local_a0;
        local_58._s_0.Y = dStack_98;
        local_58._s_0.Z = local_90;
        local_38._s_0.X = local_b8;
        local_38._s_0.Y = dStack_b0;
        local_38._s_0.Z = local_a8;
        USceneComponent::SetWorldLocationAndRotation
                  ((USceneComponent *)this_01,(TVector<double> *)&local_38._s_0,
                   (TRotator<double> *)&local_58._s_0,false,(FHitResult *)0x0,None);
        local_38._s_0.X = local_88;
        local_38._s_0.Y = dStack_80;
        local_38._s_0.Z = local_78;
        USceneComponent::SetRelativeScale3D
                  ((USceneComponent *)this_01,(TVector<double> *)&local_38._s_0);
        if (local_5e != false) {
          (**(code **)(this_01->_padding_ + 0x2b8))(this_01,1);
        }
        this_01->bIsLifeTimeCheckingEnabled = local_5d == AutoRelease;
      }
    }
  }
  return this_01;
}

// SpawnSystemAtLocationWithParams @ 149309520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __cdecl
UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters *param_1)

{
  UNiagaraSystem *pUVar1;
  bool bVar2;
  ENCPoolMethod EVar3;
  UClass *pUVar4;
  UWorld *this;
  FNiagaraWorldManager *this_00;
  AWorldSettings *pAVar5;
  UNiagaraComponent *this_01;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  if ((param_1->SystemTemplate).field0_0x0.DebugPtr != (UFXSystemAsset *)0x0) {
    pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_1->SystemTemplate,pUVar4);
    if ((bVar2) &&
       (pUVar1 = (UNiagaraSystem *)(param_1->SystemTemplate).field0_0x0.DebugPtr,
       pUVar1 != (UNiagaraSystem *)0x0)) {
      this = UEngine::GetWorldFromContextObject
                       (GEngine,(param_1->WorldContextObject).field0_0x0.DebugPtr,LogAndReturnNull);
      if (this == (UWorld *)0x0) {
        return (UNiagaraComponent *)0x0;
      }
      if ((param_1->bPreCullCheck != false) &&
         ((pUVar1->bAllowCullingForLocalPlayers != 0 || (param_1->bIsPlayerEffect == false)))) {
        this_00 = FNiagaraWorldManager::Get(this);
        local_58._s_0.X = (param_1->Location).field0_0x0._s_0.X;
        local_58._s_0.Y = (param_1->Location).field0_0x0._s_0.Y;
        local_58._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
        bVar2 = FNiagaraWorldManager::ShouldPreCull
                          (this_00,pUVar1,(TVector<double> *)&local_58._s_0);
        if (bVar2) {
          return (UNiagaraComponent *)0x0;
        }
      }
      EVar3 = ToNiagaraPooling(param_1->PoolingMethod);
      bVar2 = param_1->bAutoDestroy;
      pAVar5 = UWorld::GetWorldSettings(this,false,true);
      this_01 = CreateNiagaraSystem(pUVar1,this,(AActor *)pAVar5,bVar2,EVar3);
      if (this_01 != (UNiagaraComponent *)0x0) {
        if (param_1->bIsPlayerEffect != false) {
          UNiagaraComponent::SetForceLocalPlayerEffect(this_01,true);
        }
        if ((this_01->_padding_ & 1) == 0) {
          UActorComponent::RegisterComponentWithWorld
                    ((UActorComponent *)this_01,this,(FRegisterComponentContext *)0x0);
        }
        USceneComponent::SetAbsolute((USceneComponent *)this_01,true,true,true);
        local_58._s_0.X = (param_1->Rotation).Pitch;
        local_58._s_0.Y = (param_1->Rotation).Yaw;
        local_58._s_0.Z = (param_1->Rotation).Roll;
        local_38._s_0.X = (param_1->Location).field0_0x0._s_0.X;
        local_38._s_0.Y = (param_1->Location).field0_0x0._s_0.Y;
        local_38._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
        USceneComponent::SetWorldLocationAndRotation
                  ((USceneComponent *)this_01,(TVector<double> *)&local_38._s_0,
                   (TRotator<double> *)&local_58._s_0,false,(FHitResult *)0x0,None);
        local_38._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
        local_38._s_0.Y = (param_1->Scale).field0_0x0._s_0.Y;
        local_38._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeScale3D
                  ((USceneComponent *)this_01,(TVector<double> *)&local_38._s_0);
        if (param_1->bAutoActivate != false) {
          (**(code **)(this_01->_padding_ + 0x2b8))(this_01,1);
        }
        this_01->bIsLifeTimeCheckingEnabled = param_1->PoolingMethod == AutoRelease;
      }
      return this_01;
    }
  }
  return (UNiagaraComponent *)0x0;
}

// SpawnSystemAttached @ 149309740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __cdecl
UNiagaraFunctionLibrary::SpawnSystemAttached
          (UNiagaraSystem *param_1,USceneComponent *param_2,FName param_3,TVector<double> *param_4,
          TRotator<double> *param_5,TVector<double> *param_6,Type param_7,bool param_8,
          ENCPoolMethod param_9,bool param_10,bool param_11)

{
  TRotator<double> *pTVar1;
  FObjectPtr_u_0 FVar2;
  bool bVar3;
  bool bVar4;
  ENCPoolMethod EVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  FNiagaraWorldManager *this;
  FStreamingManagerCollection *pFVar8;
  undefined8 local_a8;
  FObjectPtr_u_0 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  USceneComponent *local_50;
  FName local_48;
  undefined1 local_40;
  bool local_3f;
  char local_3e;
  EPSCPoolMethod local_3d;
  char local_3c;
  char local_3b;
  TVector<double>_u_0 local_38;
  
  local_a8 = 0;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_70 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_58 = (double)__real_3ff0000000000000;
  local_3b = '\0';
  local_80 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_78 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_68 = (double)___xmm_3ff00000000000003ff0000000000000;
  dStack_60 = (double)_UNK_150689688;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_a0 = (FObjectPtr_u_0)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_98 = (param_4->field0_0x0)._s_0.X;
  dStack_90 = (param_4->field0_0x0)._s_0.Y;
  local_88 = (param_4->field0_0x0)._s_0.Z;
  local_80 = param_5->Pitch;
  dStack_78 = param_5->Yaw;
  local_70 = param_5->Roll;
  local_68 = (param_6->field0_0x0)._s_0.X;
  dStack_60 = (param_6->field0_0x0)._s_0.Y;
  local_58 = (param_6->field0_0x0)._s_0.Z;
  local_40 = (undefined1)param_7;
  local_3f = param_8;
  local_3e = param_10;
  local_50 = param_2;
  local_48 = param_3;
  local_3d = ToPSCPoolMethod(param_9);
  local_3c = param_11;
  FLLMScope::FLLMScope((FLLMScope *)&param_8,Niagara,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&param_6,Niagara,true);
  param_5 = (TRotator<double> *)0x0;
  if ((UNiagaraSystem *)local_a0.Handle == (UNiagaraSystem *)0x0) goto LAB_149309a4d;
  pUVar6 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_a0,pUVar6);
  FVar2 = local_a0;
  if ((!bVar3) || ((UNiagaraSystem *)local_a0.Handle == (UNiagaraSystem *)0x0)) goto LAB_149309a4d;
  if (local_50 == (USceneComponent *)0x0) {
    if (2 < (byte)LogScript._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
    }
    goto LAB_149309a4d;
  }
  pUVar7 = (UWorld *)local_50->_padding_;
  if ((pUVar7 == (UWorld *)0x0) &&
     (pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_50),
     pUVar7 == (UWorld *)0x0)) goto LAB_149309a4d;
  if (local_3c != '\0') {
    if (local_3b == '\0') {
      bVar4 = FNiagaraWorldManager::IsComponentLocalPlayerLinked(local_50);
      bVar3 = false;
      if (bVar4) goto LAB_14930991f;
    }
    else {
LAB_14930991f:
      bVar3 = true;
    }
    if (((FVar2.Handle[0x25].field_0x8 & 1) != 0) || (!bVar3)) {
      this = FNiagaraWorldManager::Get(pUVar7);
      local_38._s_0.X = (local_50->ComponentToWorld).Translation.XY.m128d_f64[0];
      local_38._s_0.Y = (local_50->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_38._s_0.Z = (local_50->ComponentToWorld).Translation.ZW.m128d_f64[0];
      bVar3 = FNiagaraWorldManager::ShouldPreCull
                        (this,(UNiagaraSystem *)FVar2.Handle,(TVector<double> *)&local_38._s_0);
      if (bVar3) goto LAB_149309a4d;
    }
  }
  EVar5 = ToNiagaraPooling(local_3d);
  param_5 = (TRotator<double> *)
            CreateNiagaraSystem((UNiagaraSystem *)FVar2.Handle,pUVar7,(AActor *)local_50->_padding_,
                                local_3f,EVar5);
  if ((UNiagaraComponent *)param_5 != (UNiagaraComponent *)0x0) {
    if (local_3b != '\0') {
      UNiagaraComponent::SetForceLocalPlayerEffect((UNiagaraComponent *)param_5,true);
    }
    local_38._s_0.X = (double)&local_a8;
    local_38._s_0.Y = (double)&param_5;
    if (((ulonglong)param_5[6].Yaw & 1) == 0) {
      USceneComponent::SetupAttachment((USceneComponent *)param_5,local_50,local_48);
      `UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams'::__l43::<lambda_1>::operator()
                (&local_38);
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)param_5,pUVar7,(FRegisterComponentContext *)0x0);
    }
    else {
      `UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams'::__l43::<lambda_1>::operator()
                (&local_38);
      (**(code **)((longlong)param_5->Pitch + 0x508))
                (param_5,local_50,&FAttachmentTransformRules::KeepRelativeTransform,local_48);
    }
    if (local_3e != '\0') {
      (**(code **)((longlong)param_5->Pitch + 0x2b8))(param_5,1);
    }
    pFVar8 = IStreamingManager::Get();
    (**(code **)(pFVar8->_padding_ + 0x70))(pFVar8,param_5);
  }
LAB_149309a4d:
  pTVar1 = param_5;
  FMemScope::~FMemScope((FMemScope *)&param_6);
  FLLMScope::~FLLMScope((FLLMScope *)&param_8);
  return (UNiagaraComponent *)pTVar1;
}

// SpawnSystemAttached @ 149309a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __cdecl
UNiagaraFunctionLibrary::SpawnSystemAttached
          (UNiagaraSystem *param_1,USceneComponent *param_2,FName param_3,TVector<double> *param_4,
          TRotator<double> *param_5,Type param_6,bool param_7,bool param_8,ENCPoolMethod param_9,
          bool param_10)

{
  UNiagaraComponent *pUVar1;
  TVector<double>_u_0 local_68;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  local_68._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689688;
  local_48.Pitch = param_5->Pitch;
  local_48.Yaw = param_5->Yaw;
  local_68._s_0.Z = __real_3ff0000000000000;
  local_48.Roll = param_5->Roll;
  local_28._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  pUVar1 = SpawnSystemAttached(param_1,param_2,param_3,(TVector<double> *)&local_28._s_0,&local_48,
                               (TVector<double> *)&local_68._s_0,param_6,param_7,param_9,param_8,
                               param_10);
  return pUVar1;
}

// SpawnSystemAttachedWithParams @ 149309b50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __cdecl
UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams(FFXSystemSpawnParameters *param_1)

{
  UNiagaraSystem *pUVar1;
  USceneComponent *pUVar2;
  UNiagaraComponent *pUVar3;
  bool bVar4;
  bool bVar5;
  ENCPoolMethod EVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  FNiagaraWorldManager *this;
  FStreamingManagerCollection *pFVar9;
  FLLMScope local_res8 [2];
  UNiagaraComponent *local_res10;
  FMemScope local_res18 [2];
  TVector<double>_u_0 local_38;
  
  FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Niagara,true);
  local_res10 = (UNiagaraComponent *)0x0;
  if ((param_1->SystemTemplate).field0_0x0.DebugPtr == (UFXSystemAsset *)0x0) goto LAB_149309d5c;
  pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SystemTemplate,pUVar7);
  if ((!bVar4) ||
     (pUVar1 = (UNiagaraSystem *)(param_1->SystemTemplate).field0_0x0.DebugPtr,
     pUVar1 == (UNiagaraSystem *)0x0)) goto LAB_149309d5c;
  pUVar2 = (param_1->AttachToComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    if (2 < (byte)LogScript._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
    }
    goto LAB_149309d5c;
  }
  pUVar8 = (UWorld *)pUVar2->_padding_;
  if ((pUVar8 == (UWorld *)0x0) &&
     (pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar2),
     pUVar8 == (UWorld *)0x0)) goto LAB_149309d5c;
  if (param_1->bPreCullCheck != false) {
    if (param_1->bIsPlayerEffect == false) {
      bVar5 = FNiagaraWorldManager::IsComponentLocalPlayerLinked
                        ((param_1->AttachToComponent).field0_0x0.DebugPtr);
      bVar4 = false;
      if (bVar5) goto LAB_149309c24;
    }
    else {
LAB_149309c24:
      bVar4 = true;
    }
    if ((pUVar1->bAllowCullingForLocalPlayers != 0) || (!bVar4)) {
      this = FNiagaraWorldManager::Get(pUVar8);
      pUVar2 = (param_1->AttachToComponent).field0_0x0.DebugPtr;
      local_38._s_0.X = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
      local_38._s_0.Y = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_38._s_0.Z = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
      bVar4 = FNiagaraWorldManager::ShouldPreCull(this,pUVar1,(TVector<double> *)&local_38._s_0);
      if (bVar4) goto LAB_149309d5c;
    }
  }
  EVar6 = ToNiagaraPooling(param_1->PoolingMethod);
  local_res10 = CreateNiagaraSystem(pUVar1,pUVar8,
                                    (AActor *)
                                    ((param_1->AttachToComponent).field0_0x0.DebugPtr)->_padding_,
                                    param_1->bAutoDestroy,EVar6);
  if (local_res10 != (UNiagaraComponent *)0x0) {
    if (param_1->bIsPlayerEffect != false) {
      UNiagaraComponent::SetForceLocalPlayerEffect(local_res10,true);
    }
    local_38._s_0.Y = (double)&local_res10;
    local_38._s_0.X = (double)param_1;
    if ((local_res10->_padding_ & 1) == 0) {
      USceneComponent::SetupAttachment
                ((USceneComponent *)local_res10,(param_1->AttachToComponent).field0_0x0.DebugPtr,
                 param_1->AttachPointName);
      `UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams'::__l43::<lambda_1>::operator()
                (&local_38);
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)local_res10,pUVar8,(FRegisterComponentContext *)0x0);
    }
    else {
      `UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams'::__l43::<lambda_1>::operator()
                (&local_38);
      (**(code **)(local_res10->_padding_ + 0x508))
                (local_res10,(param_1->AttachToComponent).field0_0x0.DebugPtr,
                 &FAttachmentTransformRules::KeepRelativeTransform,param_1->AttachPointName);
    }
    if (param_1->bAutoActivate != false) {
      (**(code **)(local_res10->_padding_ + 0x2b8))(local_res10,1);
    }
    pFVar9 = IStreamingManager::Get();
    (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9,local_res10);
  }
LAB_149309d5c:
  pUVar3 = local_res10;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return pUVar3;
}

// StaticRegisterNativesUNiagaraFunctionLibrary @ 149309dc0

void __cdecl UNiagaraFunctionLibrary::StaticRegisterNativesUNiagaraFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAcquireNiagaraGPURayTracedCollisionGroup @ 14930e720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execAcquireNiagaraGPURayTracedCollisionGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UWorld *pUVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FNiagaraAsyncGpuTraceHelper *this;
  UObject *local_res10;
  
  plVar5 = (longlong *)0x0;
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
  if ((pUVar3 != (UWorld *)0x0) && (pUVar3->Scene != (FSceneInterface *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(pUVar3->Scene->_padding_ + 0x478))();
    if (puVar4 != (undefined8 *)0x0) {
      plVar5 = (longlong *)(**(code **)*puVar4)(puVar4,&FNiagaraGpuComputeDispatch::Name);
    }
    if (plVar5 != (longlong *)0x0) {
      this = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(*plVar5 + 0x118))(plVar5);
      iVar2 = FNiagaraAsyncGpuTraceHelper::AcquireGPURayTracedCollisionGroup_GT(this);
      *(int *)param_3 = iVar2;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetNiagaraParameterCollection @ 14930ef10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execGetNiagaraParameterCollection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraParameterCollection *pUVar2;
  UWorld *pUVar3;
  FNiagaraWorldManager *this;
  UNiagaraParameterCollectionInstance *pUVar4;
  UNiagaraParameterCollection *local_res10;
  UObject *local_res18 [2];
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = (UNiagaraParameterCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,local_res18[0],LogAndReturnNull);
  if (pUVar3 != (UWorld *)0x0) {
    this = FNiagaraWorldManager::Get(pUVar3);
    pUVar4 = FNiagaraWorldManager::GetParameterCollection(this,pUVar2);
    *(UNiagaraParameterCollectionInstance **)param_3 = pUVar4;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execOverrideSystemUserVariableSkeletalMeshComponent @ 14930f910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execOverrideSystemUserVariableSkeletalMeshComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  USkeletalMeshComponent *this;
  UObjectBaseUtility *this_00;
  bool bVar4;
  int iVar5;
  USkeletalMesh *this_01;
  FNiagaraTypeRegistry *this_02;
  int *piVar6;
  UNiagaraDataInterfaceSkeletalMesh *this_03;
  UClass *pUVar7;
  int iVar8;
  wchar_t *pwVar9;
  USkeletalMeshComponent *local_res10;
  UObjectBaseUtility *local_res20;
  FString local_98;
  wchar_t *local_88;
  undefined8 local_80;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this_00 = local_res20;
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((!bVar4) || ((byte)LogNiagara._0_1_ < 3)) goto LAB_14930fd33;
    if ((this == (USkeletalMeshComponent *)0x0) ||
       ((this_01 = USkeletalMeshComponent::GetSkeletalMeshAsset(this),
        this_01 == (USkeletalMesh *)0x0 || (this_01->_padding_ == 0)))) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_78,(UObject *)0x0,None);
    }
    if ((this == (USkeletalMeshComponent *)0x0) || (this->_padding_ == 0)) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else if (local_res10 == (USkeletalMeshComponent *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_14930fd33;
    if (*(longlong *)&local_res20->field_0x10 == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(local_res20,&local_78,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  else {
    pwVar9 = L"";
    if ((int)local_80 != 0) {
      pwVar9 = local_88;
    }
    ::FName::FName((FName *)&local_98,pwVar9);
    local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister()
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_68.DebugPtr);
    }
    local_5e = 0;
    local_60 = 1;
    iVar5 = -1;
    local_5c = 0xffffffffffffffff;
    if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
       (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
    }
    iVar8 = local_78.Data.ArrayNum + -1;
    FVar3.Data = local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_50 = (FName)local_98.Data.AllocatorInstance.Data;
    if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
      this_02 = FNiagaraTypeRegistry::Get();
      iVar5 = FNiagaraTypeRegistry::RegisterTypeInternal
                        (this_02,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
    }
    local_40 = (void *)0x0;
    local_38 = 0;
    local_48 = iVar5;
    piVar6 = (int *)(**(code **)(*(longlong *)&this_00[0x22].field_0x10 + 0x58))
                              (&this_00[0x22].field_0x10,&local_50);
    if (((piVar6 == (int *)0x0) || (*piVar6 == -1)) ||
       (this_03 = (UNiagaraDataInterfaceSkeletalMesh *)
                  FNiagaraParameterStore::GetDataInterface
                            ((FNiagaraParameterStore *)&this_00[0x22].field_0x10,*piVar6),
       this_03 == (UNiagaraDataInterfaceSkeletalMesh *)0x0)) {
LAB_14930fca7:
      this_03 = (UNiagaraDataInterfaceSkeletalMesh *)0x0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
      iVar5 = (int)pUVar7->_padding_;
      if ((*(int *)(this_03->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) goto LAB_14930fca7;
    }
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    if (this_03 != (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
      UNiagaraDataInterfaceSkeletalMesh::SetSourceComponentFromBlueprints(this_03,this);
      goto LAB_14930fd33;
    }
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_14930fd33;
    if (*(longlong *)&this_00->field_0x10 == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_78,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14930fd33:
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execOverrideSystemUserVariableStaticMesh @ 14930fd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  UStaticMesh *this;
  UObjectBaseUtility *this_00;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *this_01;
  int *piVar6;
  UNiagaraDataInterfaceStaticMesh *this_02;
  UClass *pUVar7;
  int iVar8;
  FStaticBasicLogRecord *pFVar9;
  wchar_t *pwVar10;
  UStaticMesh *local_res10;
  UObjectBaseUtility *local_res20;
  FString local_98;
  wchar_t *local_88;
  undefined8 local_80;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this_00 = local_res20;
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((!bVar4) || ((byte)LogNiagara._0_1_ < 3)) goto LAB_149310188;
    if ((this == (UStaticMesh *)0x0) || (this->_padding_ == 0)) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0,None);
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    if (local_res10 != (UStaticMesh *)0x0) {
      pwVar10 = L"";
      if ((int)local_80 != 0) {
        pwVar10 = local_88;
      }
      ::FName::FName((FName *)&local_98,pwVar10);
      local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister()
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(local_68.DebugPtr);
      }
      local_5e = 0;
      local_60 = 1;
      iVar5 = -1;
      local_5c = 0xffffffffffffffff;
      if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
         (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
      }
      iVar8 = local_78.Data.ArrayNum + -1;
      FVar3.Data = local_78.Data.AllocatorInstance.Data;
      if (local_78.Data.ArrayNum == 0) {
        iVar8 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_50 = (FName)local_98.Data.AllocatorInstance.Data;
      if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
        this_01 = FNiagaraTypeRegistry::Get();
        iVar5 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (this_01,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
      }
      local_40 = (void *)0x0;
      local_38 = 0;
      local_48 = iVar5;
      piVar6 = (int *)(**(code **)(*(longlong *)&this_00[0x22].field_0x10 + 0x58))
                                (&this_00[0x22].field_0x10,&local_50);
      if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
        if (2 < (byte)LogNiagara._0_1_) {
          if (*(longlong *)&this_00->field_0x10 == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName(this_00,&local_78,(UObject *)0x0,None);
          }
          pFVar9 = &::LOG_Static;
          goto LAB_149310138;
        }
      }
      else {
        this_02 = (UNiagaraDataInterfaceStaticMesh *)
                  FNiagaraParameterStore::GetDataInterface
                            ((FNiagaraParameterStore *)&this_00[0x22].field_0x10,*piVar6);
        if (this_02 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
          pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
          iVar5 = (int)pUVar7->_padding_;
          if ((iVar5 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
              &pUVar7->_padding_)) {
            UNiagaraDataInterfaceStaticMesh::SetDefaultMeshFromBlueprints(this_02,this);
            goto LAB_14931016a;
          }
        }
        if (2 < (byte)LogNiagara._0_1_) {
          if (*(longlong *)&this_00->field_0x10 == 0) {
            ::FString::FString(&local_78,L"None");
            pFVar9 = &::LOG_Static;
          }
          else {
            UObjectBaseUtility::GetFullName(this_00,&local_78,(UObject *)0x0,None);
            pFVar9 = &::LOG_Static;
          }
LAB_149310138:
          UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogNiagara);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_14931016a:
      if (local_40 != (void *)0x0) {
        FMemory::Free(local_40);
      }
      goto LAB_149310188;
    }
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_149310188;
    if (*(longlong *)&local_res20->field_0x10 == 0) {
      ::FString::FString(&local_98,L"None");
      pFVar9 = &::LOG_Static;
    }
    else {
      UObjectBaseUtility::GetFullName(local_res20,&local_98,(UObject *)0x0,None);
      pFVar9 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogNiagara);
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_149310188:
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execOverrideSystemUserVariableStaticMeshComponent @ 1493101d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMeshComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  UStaticMeshComponent *this;
  UObjectBaseUtility *this_00;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *this_01;
  int *piVar6;
  UNiagaraDataInterfaceStaticMesh *this_02;
  UClass *pUVar7;
  int iVar8;
  FStaticBasicLogRecord *pFVar9;
  wchar_t *pwVar10;
  UStaticMeshComponent *local_res10;
  UObjectBaseUtility *local_res20;
  FString local_98;
  wchar_t *local_88;
  undefined8 local_80;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (UStaticMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this_00 = local_res20;
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((!bVar4) || ((byte)LogNiagara._0_1_ < 3)) goto LAB_1493105d8;
    if ((this == (UStaticMeshComponent *)0x0) || (this->_padding_ == 0)) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0,None);
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    if (local_res10 != (UStaticMeshComponent *)0x0) {
      pwVar10 = L"";
      if ((int)local_80 != 0) {
        pwVar10 = local_88;
      }
      ::FName::FName((FName *)&local_98,pwVar10);
      local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister()
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(local_68.DebugPtr);
      }
      local_5e = 0;
      local_60 = 1;
      iVar5 = -1;
      local_5c = 0xffffffffffffffff;
      if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
         (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
      }
      iVar8 = local_78.Data.ArrayNum + -1;
      FVar3.Data = local_78.Data.AllocatorInstance.Data;
      if (local_78.Data.ArrayNum == 0) {
        iVar8 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_50 = (FName)local_98.Data.AllocatorInstance.Data;
      if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
        this_01 = FNiagaraTypeRegistry::Get();
        iVar5 = FNiagaraTypeRegistry::RegisterTypeInternal
                          (this_01,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
      }
      local_40 = (void *)0x0;
      local_38 = 0;
      local_48 = iVar5;
      piVar6 = (int *)(**(code **)(*(longlong *)&this_00[0x22].field_0x10 + 0x58))
                                (&this_00[0x22].field_0x10,&local_50);
      if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
        if (2 < (byte)LogNiagara._0_1_) {
          if (*(longlong *)&this_00->field_0x10 == 0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName(this_00,&local_78,(UObject *)0x0,None);
          }
          pFVar9 = &::LOG_Static;
          goto LAB_149310588;
        }
      }
      else {
        this_02 = (UNiagaraDataInterfaceStaticMesh *)
                  FNiagaraParameterStore::GetDataInterface
                            ((FNiagaraParameterStore *)&this_00[0x22].field_0x10,*piVar6);
        if (this_02 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
          pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
          iVar5 = (int)pUVar7->_padding_;
          if ((iVar5 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
              &pUVar7->_padding_)) {
            UNiagaraDataInterfaceStaticMesh::SetSourceComponentFromBlueprints(this_02,this);
            goto LAB_1493105ba;
          }
        }
        if (2 < (byte)LogNiagara._0_1_) {
          if (*(longlong *)&this_00->field_0x10 == 0) {
            ::FString::FString(&local_78,L"None");
            pFVar9 = &::LOG_Static;
          }
          else {
            UObjectBaseUtility::GetFullName(this_00,&local_78,(UObject *)0x0,None);
            pFVar9 = &::LOG_Static;
          }
LAB_149310588:
          UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogNiagara);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_1493105ba:
      if (local_40 != (void *)0x0) {
        FMemory::Free(local_40);
      }
      goto LAB_1493105d8;
    }
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_1493105d8;
    if (*(longlong *)&local_res20->field_0x10 == 0) {
      ::FString::FString(&local_98,L"None");
      pFVar9 = &::LOG_Static;
    }
    else {
      UObjectBaseUtility::GetFullName(local_res20,&local_98,(UObject *)0x0,None);
      pFVar9 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogNiagara);
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_1493105d8:
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execReleaseNiagaraGPURayTracedCollisionGroup @ 149310620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execReleaseNiagaraGPURayTracedCollisionGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UWorld *pUVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FNiagaraAsyncGpuTraceHelper *this;
  int local_res10 [4];
  UObject *local_res20;
  
  plVar5 = (longlong *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
  if ((pUVar3 != (UWorld *)0x0) && (pUVar3->Scene != (FSceneInterface *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(pUVar3->Scene->_padding_ + 0x478))();
    if (puVar4 != (undefined8 *)0x0) {
      plVar5 = (longlong *)(**(code **)*puVar4)(puVar4,&FNiagaraGpuComputeDispatch::Name);
    }
    if (plVar5 != (longlong *)0x0) {
      this = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(*plVar5 + 0x118))(plVar5);
      FNiagaraAsyncGpuTraceHelper::ReleaseGPURayTracedCollisionGroup_GT(this,iVar2);
    }
  }
  return;
}

// execSetActorNiagaraGPURayTracedCollisionGroup @ 149310750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetActorNiagaraGPURayTracedCollisionGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  AActor *this;
  UWorld *pUVar5;
  undefined8 *puVar6;
  UClass *pUVar7;
  FNiagaraAsyncGpuTraceHelper *pFVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  int local_res10 [2];
  int local_res20 [2];
  AActor *local_48;
  UObject *local_40;
  UClass *local_38 [2];
  <lambda_1> local_28;
  
  pUVar10 = (UClass *)0x0;
  pUVar11 = (UClass *)0x0;
  local_40 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res10[0];
  if (local_48 == (AActor *)0x0) {
    return;
  }
  pUVar5 = UEngine::GetWorldFromContextObject(GEngine,local_40,LogAndReturnNull);
  if (pUVar5 == (UWorld *)0x0) {
    return;
  }
  if (pUVar5->Scene == (FSceneInterface *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)(**(code **)(pUVar5->Scene->_padding_ + 0x478))();
  pUVar7 = pUVar10;
  if (puVar6 != (undefined8 *)0x0) {
    pUVar7 = (UClass *)(**(code **)*puVar6)(puVar6,&FNiagaraGpuComputeDispatch::Name);
  }
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pFVar8 = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(pUVar7->_padding_ + 0x118))();
  pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_1493108f6;
  }
  else {
    pUVar11 = pUVar10;
    if (pUVar7 == (UClass *)0x0) goto LAB_1493108f6;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar11 = pUVar10;
  if (pUVar9 != (UClass *)0x0) {
    iVar2 = (int)pUVar9->_padding_;
    if (((int)pUVar7->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) != &pUVar9->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar11 = pUVar7;
    }
  }
LAB_1493108f6:
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_38[0] = pUVar7;
  local_28.Helper = pFVar8;
  if (pUVar11 == pUVar10) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_28.CollisionGroup = local_res20;
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)local_38,&local_28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_28.CollisionGroup = local_res20;
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup_::__l11::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)local_38,&local_28);
  }
  return;
}

// execSetComponentNiagaraGPURayTracedCollisionGroup @ 149310b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetComponentNiagaraGPURayTracedCollisionGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uint uVar3;
  UPrimitiveComponent *pUVar4;
  UWorld *pUVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  FNiagaraAsyncGpuTraceHelper *this;
  uint local_res10 [4];
  UPrimitiveComponent *local_res20;
  UObject *local_28 [2];
  
  plVar7 = (longlong *)0x0;
  local_28[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UEngine::GetWorldFromContextObject(GEngine,local_28[0],LogAndReturnNull);
  if ((pUVar5 != (UWorld *)0x0) && (pUVar5->Scene != (FSceneInterface *)0x0)) {
    puVar6 = (undefined8 *)(**(code **)(pUVar5->Scene->_padding_ + 0x478))();
    if (puVar6 != (undefined8 *)0x0) {
      plVar7 = (longlong *)(**(code **)*puVar6)(puVar6,&FNiagaraGpuComputeDispatch::Name);
    }
    if (plVar7 != (longlong *)0x0) {
      this = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(*plVar7 + 0x118))(plVar7);
      FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT(this,pUVar4,uVar3);
    }
  }
  return;
}

// execSetSceneCapture2DDataInterfaceManagedMode @ 149310fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetSceneCapture2DDataInterfaceManagedMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TObjectPtr<AActor>_u_0 *pTVar2;
  FProperty *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName FVar7;
  int iVar8;
  int iVar9;
  TObjectPtr<UObject>_u_0 TVar10;
  FNiagaraTypeRegistry *this;
  int *piVar11;
  UNiagaraDataInterface *pUVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  TObjectPtr<AActor>_u_0 *pTVar15;
  TUniquePtr<FNiagaraDataInterfaceProxy,TDefaultDelete<FNiagaraDataInterfaceProxy>_> *pTVar16;
  FName *pFVar17;
  bool bVar18;
  byte local_res10 [16];
  byte local_res20 [8];
  byte local_1c8;
  undefined1 local_1c7 [7];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  TObjectPtr<AActor>_u_0 local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  longlong local_170;
  FName local_168;
  void *local_160;
  undefined8 local_158;
  TObjectPtr<UObject>_u_0 local_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined8 local_144;
  uint local_13c;
  undefined8 local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FName *local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  FString local_b0;
  FName local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  local_170 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1c8 = 0;
  pFVar17 = &local_198;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar17 = (FName *)param_2->MostRecentPropertyAddress;
  }
  local_d0 = pFVar17;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res20[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_1a4 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a4);
  }
  local_1a8 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1b0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1c7[0] = local_1b0 != 0;
  local_1ac = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1ac,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1ac);
  }
  bVar18 = local_1ac != 0;
  local_160 = (void *)0x0;
  local_158 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  lVar13 = local_170;
  uVar6 = local_1a4;
  uVar5 = local_1a8;
  local_168 = (FName)&local_160;
  if ((FName)param_2->MostRecentPropertyAddress != (FName)0x0) {
    local_168 = (FName)param_2->MostRecentPropertyAddress;
  }
  local_178.ComparisonIndex.Value._1_3_ = 0;
  local_178.ComparisonIndex.Value._0_1_ = local_res10[0];
  local_180.ComparisonIndex.Value._1_3_ = 0;
  local_180.ComparisonIndex.Value._0_1_ = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_188.ComparisonIndex.Value._1_3_ = 0;
  local_188.ComparisonIndex.Value._0_1_ = local_1c8;
  if (local_170 == 0) {
    bVar18 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar18) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    goto LAB_14931193c;
  }
  local_190 = *pFVar17;
  TVar10.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_NoRegister();
  local_150.DebugPtr = TVar10.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TVar10.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(TVar10.DebugPtr);
  }
  local_146 = 0;
  local_148 = 1;
  iVar8 = -1;
  local_144 = 0xffffffffffffffff;
  if (((UClass *)local_150.DebugPtr == (UClass *)0x0) ||
     (*(longlong *)&(local_150.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_130,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_150.DebugPtr,&local_130,(UObject *)0x0,None);
  }
  pwVar14 = L"";
  if (local_130.Data.ArrayNum == 0) {
    local_130.Data.ArrayNum = 0;
  }
  else {
    local_130.Data.ArrayNum = local_130.Data.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_130.Data.AllocatorInstance.Data;
  }
  local_13c = FCrc::Strihash_DEPRECATED<wchar_t>(local_130.Data.ArrayNum,pwVar14);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  local_c8 = local_190;
  if ((UClass *)local_150.DebugPtr != (UClass *)0x0) {
    this = FNiagaraTypeRegistry::Get();
    iVar8 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this,(FNiagaraTypeDefinition *)&local_150.ObjectPtr);
  }
  local_c0 = iVar8;
  piVar11 = (int *)(**(code **)(*(longlong *)(lVar13 + 0x560) + 0x58))(lVar13 + 0x560,&local_c8);
  if (piVar11 == (int *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      if ((UClass *)TVar10.DebugPtr == (UClass *)0x0) {
        ::FString::FString(&local_110,L"None");
      }
      else {
        local_178 = *(FName *)&(TVar10.DebugPtr)->field_0x18;
        ::FName::ToString(&local_178,&local_110);
      }
      if (*(longlong *)(lVar13 + 0x550) == 0) {
        ::FString::FString(&local_120,L"None");
      }
      else {
        local_180 = *(FName *)(*(longlong *)(lVar13 + 0x550) + 0x18);
        ::FName::ToString(&local_180,&local_120);
      }
      ::FName::ToString(&local_190,&local_98);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
        local_100.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      }
LAB_1493118d8:
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
LAB_1493118e2:
    bVar18 = FNiagaraUtilities::LogVerboseWarnings();
    if ((!bVar18) || ((byte)LogNiagara._0_1_ < 3)) goto LAB_14931193c;
    ::FName::ToString(local_d0,local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  else {
    pUVar12 = FNiagaraParameterStore::GetDataInterface
                        ((FNiagaraParameterStore *)(lVar13 + 0x560),*piVar11);
    if (pUVar12 == (UNiagaraDataInterface *)0x0) {
      if (2 < (byte)LogNiagara._0_1_) {
        if (*(longlong *)(lVar13 + 0x550) == 0) {
          ::FString::FString(&local_100,L"None");
        }
        else {
          local_188 = *(FName *)(*(longlong *)(lVar13 + 0x550) + 0x18);
          ::FName::ToString(&local_188,&local_100);
        }
        ::FName::ToString(&local_190,&local_88);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        goto LAB_1493118d8;
      }
      goto LAB_1493118e2;
    }
    iVar8 = (int)*(longlong *)&TVar10.DebugPtr[1].field_0x10;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar8) ||
       (*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
        &TVar10.DebugPtr[1].field_0x8)) {
      if (2 < (byte)LogNiagara._0_1_) {
        local_168 = *(FName *)&(TVar10.DebugPtr)->field_0x18;
        ::FName::ToString(&local_168,&local_b0);
        if (pUVar12->_padding_ == 0) {
          ::FString::FString(&local_e0,L"None");
        }
        else {
          local_b8 = *(FName *)(pUVar12->_padding_ + 0x18);
          ::FName::ToString(&local_b8,&local_e0);
        }
        if (*(longlong *)(lVar13 + 0x550) == 0) {
          ::FString::FString(&local_f0,L"None");
        }
        else {
          local_a0 = *(FName *)(*(longlong *)(lVar13 + 0x550) + 0x18);
          ::FName::ToString(&local_a0,&local_f0);
        }
        ::FName::ToString(&local_190,&local_78);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        local_100.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          local_100.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
        }
        goto LAB_1493118d8;
      }
      goto LAB_1493118e2;
    }
    pUVar12[2].field_0x30 = (char)local_188.ComparisonIndex.Value;
    *(char *)((longlong)&pUVar12[3]._padding_ + 4) = (char)local_180.ComparisonIndex.Value;
    *(char *)((longlong)&pUVar12[3]._padding_ + 5) = (char)local_178.ComparisonIndex.Value;
    *(undefined8 *)&pUVar12[2].field_0x34 = local_138;
    *(bool *)((longlong)&pUVar12[3]._padding_ + 1) = bVar18;
    *(undefined1 *)&pUVar12[3]._padding_ = local_1c7[0];
    *(undefined4 *)&pUVar12[3]._padding_ = uVar6;
    *(undefined4 *)((longlong)&pUVar12[3]._padding_ + 4) = uVar5;
    *(undefined1 *)&pUVar12[1]._padding_ = 3;
    pTVar16 = &pUVar12[3].Proxy;
    *(undefined4 *)&pUVar12[3].field_0x30 = 0;
    if (*(int *)&pUVar12[3].field_0x34 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar16,0,(int *)&pUVar12[3].field_0x34);
    }
    FVar7 = local_168;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    pTVar15 = *(TObjectPtr<AActor>_u_0 **)local_168;
    iVar8 = *(int *)((longlong)local_168 + 8);
    pTVar2 = pTVar15 + iVar8;
    while( true ) {
      if (*(int *)((longlong)FVar7 + 8) != iVar8) {
        local_1c7[0] = 0;
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1c7);
      }
      if (pTVar15 == pTVar2) break;
      local_1a0 = (TObjectPtr<AActor>_u_0)pTVar15->DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1a0.DebugPtr != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1a0.DebugPtr);
      }
      if (((local_1c0.Data <= &local_1a0) &&
          (&local_1a0 < (TObjectPtr<AActor>_u_0 *)(local_1c0.Data + (longlong)local_1b8._4_4_ * 8)))
         && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)local_1b8 == local_1b8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar9);
      }
      lVar13 = (longlong)(int)local_1b8;
      local_1b8 = CONCAT44(local_1b8._4_4_,(int)local_1b8 + 1);
      ((TObjectPtr<AActor>_u_0 *)(local_1c0.Data + lVar13 * 8))->DebugPtr = (AActor *)local_1a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1a0.DebugPtr != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1a0.DebugPtr);
      }
      pTVar15 = pTVar15 + 1;
    }
    if (((ForAnyElementType *)pTVar16 == &local_1c0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_1b8;
    local_68[0].Data.AllocatorInstance.Data = local_1c0.Data;
    if ((int)local_1b8 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(int)local_1b8,(ForAnyElementType *)pTVar16,
                         (int *)&pUVar12[3].field_0x30,(int *)&pUVar12[3].field_0x34);
      ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
                (&pTVar16->Ptr->_padding_ + iVar9,(TObjectPtr<AActor> *)local_1c0.Data,iVar8);
      local_68[0].Data.AllocatorInstance.Data = local_1c0.Data;
    }
  }
  if ((TObjectPtr<AActor>_u_0 *)local_68[0].Data.AllocatorInstance.Data !=
      (TObjectPtr<AActor>_u_0 *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
LAB_14931193c:
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return;
}

// execSetSkeletalMeshDataInterfaceFilteredBones @ 1493119a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceFilteredBones
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  UObjectBaseUtility *this;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *this_00;
  int *piVar6;
  UNiagaraDataInterfaceSkeletalMesh *this_01;
  UClass *pUVar7;
  int iVar8;
  wchar_t *pwVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  UObjectBaseUtility *local_res10;
  FName local_res20;
  wchar_t *local_98;
  undefined8 local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = local_res10;
  pTVar10 = &local_88;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar4) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    goto LAB_149311cbe;
  }
  pwVar9 = L"";
  if ((int)local_90 != 0) {
    pwVar9 = local_98;
  }
  ::FName::FName(&local_res20,pwVar9);
  local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_68.DebugPtr);
  }
  local_5e = 0;
  local_60 = 1;
  iVar5 = -1;
  local_5c = 0xffffffffffffffff;
  if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
     (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
  }
  iVar8 = local_78.Data.ArrayNum + -1;
  FVar3.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_50 = local_res20;
  if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar5 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this_00,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_48 = iVar5;
  piVar6 = (int *)(**(code **)(*(longlong *)&this[0x22].field_0x10 + 0x58))
                            (&this[0x22].field_0x10,&local_50);
  if (((piVar6 == (int *)0x0) || (*piVar6 == -1)) ||
     (this_01 = (UNiagaraDataInterfaceSkeletalMesh *)
                FNiagaraParameterStore::GetDataInterface
                          ((FNiagaraParameterStore *)&this[0x22].field_0x10,*piVar6),
     this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0)) {
LAB_149311c27:
    this_01 = (UNiagaraDataInterfaceSkeletalMesh *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) goto LAB_149311c27;
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      if (*(longlong *)&this->field_0x10 == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(this,&local_78,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UNiagaraDataInterfaceSkeletalMesh::SetFilteredBonesFromBlueprints(this_01,pTVar10);
  }
LAB_149311cbe:
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execSetSkeletalMeshDataInterfaceFilteredSockets @ 149311d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceFilteredSockets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  UObjectBaseUtility *this;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *this_00;
  int *piVar6;
  UNiagaraDataInterfaceSkeletalMesh *this_01;
  UClass *pUVar7;
  int iVar8;
  wchar_t *pwVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  UObjectBaseUtility *local_res10;
  FName local_res20;
  wchar_t *local_98;
  undefined8 local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = local_res10;
  pTVar10 = &local_88;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar4) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    goto LAB_14931203e;
  }
  pwVar9 = L"";
  if ((int)local_90 != 0) {
    pwVar9 = local_98;
  }
  ::FName::FName(&local_res20,pwVar9);
  local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_68.DebugPtr);
  }
  local_5e = 0;
  local_60 = 1;
  iVar5 = -1;
  local_5c = 0xffffffffffffffff;
  if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
     (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
  }
  iVar8 = local_78.Data.ArrayNum + -1;
  FVar3.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_50 = local_res20;
  if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar5 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this_00,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_48 = iVar5;
  piVar6 = (int *)(**(code **)(*(longlong *)&this[0x22].field_0x10 + 0x58))
                            (&this[0x22].field_0x10,&local_50);
  if (((piVar6 == (int *)0x0) || (*piVar6 == -1)) ||
     (this_01 = (UNiagaraDataInterfaceSkeletalMesh *)
                FNiagaraParameterStore::GetDataInterface
                          ((FNiagaraParameterStore *)&this[0x22].field_0x10,*piVar6),
     this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0)) {
LAB_149311fa7:
    this_01 = (UNiagaraDataInterfaceSkeletalMesh *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) goto LAB_149311fa7;
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      if (*(longlong *)&this->field_0x10 == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(this,&local_78,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UNiagaraDataInterfaceSkeletalMesh::SetFilteredSocketsFromBlueprints(this_01,pTVar10);
  }
LAB_14931203e:
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execSetSkeletalMeshDataInterfaceSamplingRegions @ 1493120a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceSamplingRegions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  UObjectBaseUtility *this;
  bool bVar4;
  int iVar5;
  FNiagaraTypeRegistry *this_00;
  int *piVar6;
  UNiagaraDataInterfaceSkeletalMesh *this_01;
  UClass *pUVar7;
  int iVar8;
  wchar_t *pwVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  UObjectBaseUtility *local_res10;
  FName local_res20;
  wchar_t *local_98;
  undefined8 local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  uint local_54;
  FName local_50;
  int local_48;
  void *local_40;
  undefined8 local_38;
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = local_res10;
  pTVar10 = &local_88;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar4) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    goto LAB_1493123be;
  }
  pwVar9 = L"";
  if ((int)local_90 != 0) {
    pwVar9 = local_98;
  }
  ::FName::FName(&local_res20,pwVar9);
  local_68.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_68.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_68.DebugPtr);
  }
  local_5e = 0;
  local_60 = 1;
  iVar5 = -1;
  local_5c = 0xffffffffffffffff;
  if (((UClass *)local_68.DebugPtr == (UClass *)0x0) ||
     (*(longlong *)&(local_68.DebugPtr)->field_0x10 == 0)) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)local_68.DebugPtr,&local_78,(UObject *)0x0,None);
  }
  iVar8 = local_78.Data.ArrayNum + -1;
  FVar3.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  local_54 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar3.Data);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_50 = local_res20;
  if ((UClass *)local_68.DebugPtr != (UClass *)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar5 = FNiagaraTypeRegistry::RegisterTypeInternal
                      (this_00,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_48 = iVar5;
  piVar6 = (int *)(**(code **)(*(longlong *)&this[0x22].field_0x10 + 0x58))
                            (&this[0x22].field_0x10,&local_50);
  if (((piVar6 == (int *)0x0) || (*piVar6 == -1)) ||
     (this_01 = (UNiagaraDataInterfaceSkeletalMesh *)
                FNiagaraParameterStore::GetDataInterface
                          ((FNiagaraParameterStore *)&this[0x22].field_0x10,*piVar6),
     this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0)) {
LAB_149312327:
    this_01 = (UNiagaraDataInterfaceSkeletalMesh *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) goto LAB_149312327;
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (this_01 == (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      if (*(longlong *)&this->field_0x10 == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(this,&local_78,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UNiagaraDataInterfaceSkeletalMesh::SetSamplingRegionsFromBlueprints(this_01,pTVar10);
  }
LAB_1493123be:
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execSetTexture2DArrayObject @ 149312420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetTexture2DArrayObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UNiagaraComponent *local_res20;
  FString local_18;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTextureObject(local_res20,&local_18,local_res10[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTextureObject @ 149312540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetTextureObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UNiagaraComponent *local_res20;
  FString local_18;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTextureObject(local_res20,&local_18,local_res10[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetVolumeTextureObject @ 149312960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSetVolumeTextureObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UNiagaraComponent *local_res20;
  FString local_18;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTextureObject(local_res20,&local_18,local_res10[0]);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSpawnSystemAtLocation @ 149312a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSpawnSystemAtLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UNiagaraSystem *pUVar3;
  UObject *pUVar4;
  FObjectPtr_u_0 FVar5;
  ENCPoolMethod EVar6;
  UClass *pUVar7;
  UWorld *this;
  FNiagaraWorldManager *this_00;
  AWorldSettings *pAVar8;
  UNiagaraComponent *this_01;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ENCPoolMethod local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_198 [2];
  UNiagaraSystem *local_190;
  UObject *local_188 [2];
  TVector<double>_u_0 local_178;
  UObject *local_158;
  FObjectPtr_u_0 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  bool local_ef;
  char local_ee;
  EPSCPoolMethod local_ed;
  char local_ec;
  char local_eb;
  double local_e8;
  double local_d8;
  double local_c8;
  TVector<double>_u_0 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  
  local_188[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_190 = (UNiagaraSystem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar9 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar10 = local_res20[0] != 0;
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_198[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_198);
  }
  pUVar4 = local_188[0];
  pUVar3 = local_190;
  EVar6 = local_res10[0];
  bVar11 = local_198[0] != 0;
  local_178._s_0.X = local_98;
  local_178._s_0.Y = dStack_90;
  local_c8 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8._s_0.X = local_80;
  local_b8._s_0.Y = dStack_78;
  local_d8 = local_70;
  local_100 = 0;
  local_f8 = 0;
  local_eb = '\0';
  local_48 = local_68;
  dStack_40 = dStack_60;
  local_e8 = local_58;
  local_f0 = 1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_188[0]);
  }
  local_158 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_148 = local_48;
  dStack_140 = dStack_40;
  local_138 = local_e8;
  local_130 = local_b8._s_0.X;
  dStack_128 = local_b8._s_0.Y;
  local_150.Handle = (UObject *)pUVar3;
  local_120 = local_d8;
  local_118 = local_178._s_0.X;
  dStack_110 = local_178._s_0.Y;
  local_108 = local_c8;
  local_ef = bVar9;
  local_ee = bVar10;
  local_ed = ToPSCPoolMethod(EVar6);
  if ((UNiagaraSystem *)local_150.Handle != (UNiagaraSystem *)0x0) {
    local_ec = bVar11;
    pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_150,pUVar7);
    FVar5 = local_150;
    if (((bVar9) && ((UNiagaraSystem *)local_150.Handle != (UNiagaraSystem *)0x0)) &&
       (this = UEngine::GetWorldFromContextObject(GEngine,local_158,LogAndReturnNull),
       this != (UWorld *)0x0)) {
      if ((local_ec != '\0') && (((FVar5.Handle[0x25].field_0x8 & 1) != 0 || (local_eb == '\0')))) {
        this_00 = FNiagaraWorldManager::Get(this);
        local_178._s_0.X = local_148;
        local_178._s_0.Y = dStack_140;
        local_178._s_0.Z = local_138;
        bVar9 = FNiagaraWorldManager::ShouldPreCull
                          (this_00,(UNiagaraSystem *)FVar5.Handle,(TVector<double> *)&local_178._s_0
                          );
        if (bVar9) goto LAB_149312f5f;
      }
      EVar6 = ToNiagaraPooling(local_ed);
      bVar9 = local_ef;
      pAVar8 = UWorld::GetWorldSettings(this,false,true);
      this_01 = CreateNiagaraSystem((UNiagaraSystem *)FVar5.Handle,this,(AActor *)pAVar8,bVar9,EVar6
                                   );
      if (this_01 != (UNiagaraComponent *)0x0) {
        if (local_eb != '\0') {
          UNiagaraComponent::SetForceLocalPlayerEffect(this_01,true);
        }
        if ((this_01->_padding_ & 1) == 0) {
          UActorComponent::RegisterComponentWithWorld
                    ((UActorComponent *)this_01,this,(FRegisterComponentContext *)0x0);
        }
        USceneComponent::SetAbsolute((USceneComponent *)this_01,true,true,true);
        local_178._s_0.X = local_130;
        local_178._s_0.Y = dStack_128;
        local_178._s_0.Z = local_120;
        local_b8._s_0.X = local_148;
        local_b8._s_0.Y = dStack_140;
        local_b8._s_0.Z = local_138;
        USceneComponent::SetWorldLocationAndRotation
                  ((USceneComponent *)this_01,(TVector<double> *)&local_b8._s_0,
                   (TRotator<double> *)&local_178._s_0,false,(FHitResult *)0x0,None);
        local_178._s_0.X = local_118;
        local_178._s_0.Y = dStack_110;
        local_178._s_0.Z = local_108;
        USceneComponent::SetRelativeScale3D
                  ((USceneComponent *)this_01,(TVector<double> *)&local_178._s_0);
        if (local_ee != '\0') {
          (**(code **)(this_01->_padding_ + 0x2b8))(this_01,1);
        }
        this_01->bIsLifeTimeCheckingEnabled = local_ed == AutoRelease;
      }
      *(UNiagaraComponent **)param_3 = this_01;
      return;
    }
  }
LAB_149312f5f:
  *(undefined8 *)param_3 = 0;
  return;
}

// execSpawnSystemAtLocationWithParams @ 149312f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSpawnSystemAtLocationWithParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraComponent *pUVar2;
  TObjectPtr<UObject_const_>_u_0 *pTVar3;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_10 = 0x10101;
  local_78.DebugPtr = (UObject *)0x0;
  uStack_70 = 0;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_20 = 0;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_50 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_18 = 0;
  local_40 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_28 = __real_3ff0000000000000;
  local_c = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar3 = &local_78;
  if ((TObjectPtr<UObject_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject_const_>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UObject_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = SpawnSystemAtLocationWithParams((FFXSystemSpawnParameters *)&pTVar3->ObjectPtr);
  *(UNiagaraComponent **)param_3 = pUVar2;
  return;
}

// execSpawnSystemAttached @ 1493130a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSpawnSystemAttached(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraComponent *pUVar2;
  bool bVar3;
  bool bVar4;
  ENCPoolMethod local_res10 [8];
  byte local_res18 [8];
  int local_res20 [2];
  int local_d8;
  int local_d4;
  FName local_d0;
  USceneComponent *local_c8;
  UNiagaraSystem *local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  TVector<double>_u_0 local_88;
  TRotator<double> local_68;
  TVector<double>_u_0 local_48;
  
  local_c0 = (UNiagaraSystem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_d8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  bVar4 = local_d8 != 0;
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_d4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d4);
  }
  local_88._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_88._s_0.Y = _UNK_150689688;
  local_88._s_0.Z = __real_3ff0000000000000;
  local_68.Pitch = local_b8;
  local_68.Yaw = dStack_b0;
  local_68.Roll = local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48._s_0.X = local_a0;
  local_48._s_0.Y = dStack_98;
  local_48._s_0.Z = local_90;
  pUVar2 = SpawnSystemAttached(local_c0,local_c8,local_d0,(TVector<double> *)&local_48._s_0,
                               &local_68,(TVector<double> *)&local_88._s_0,(uint)local_res18[0],
                               bVar3,local_res10[0],bVar4,local_d4 != 0);
  *(UNiagaraComponent **)param_3 = pUVar2;
  return;
}

// execSpawnSystemAttachedWithParams @ 1493133f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraFunctionLibrary::execSpawnSystemAttachedWithParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraComponent *pUVar2;
  TObjectPtr<UObject_const_>_u_0 *pTVar3;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_10 = 0x10101;
  local_78.DebugPtr = (UObject *)0x0;
  uStack_70 = 0;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_20 = 0;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_50 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_18 = 0;
  local_40 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_28 = __real_3ff0000000000000;
  local_c = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar3 = &local_78;
  if ((TObjectPtr<UObject_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject_const_>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UObject_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = SpawnSystemAttachedWithParams((FFXSystemSpawnParameters *)&pTVar3->ObjectPtr);
  *(UNiagaraComponent **)param_3 = pUVar2;
  return;
}

