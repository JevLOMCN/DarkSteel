// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 147306390

UClass * __cdecl UParticleModuleParameterDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleParameterDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleParameterDynamic",
               &Z_Registration_Info_UClass_UParticleModuleParameterDynamic.InnerSingleton,
               StaticRegisterNativesUParticleModuleParameterDynamic,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleParameterDynamic>,
               InternalVTableHelperCtorCaller<UParticleModuleParameterDynamic>,local_res8,
               UParticleModuleParameterBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleParameterDynamic.InnerSingleton;
}

// UParticleModuleParameterDynamic @ 14730b1c0

UParticleModuleParameterDynamic * __thiscall
UParticleModuleParameterDynamic::UParticleModuleParameterDynamic
          (UParticleModuleParameterDynamic *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic__6B_;
  (this->DynamicParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicParams).ArrayNum = 0;
  (this->DynamicParams).ArrayMax = 0;
  return this;
}

// ~UParticleModuleParameterDynamic @ 14730be50

void __thiscall
UParticleModuleParameterDynamic::~UParticleModuleParameterDynamic
          (UParticleModuleParameterDynamic *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic__6B_;
  DestructItems<FEmitterDynamicParameter,int>
            ((FEmitterDynamicParameter *)(this->DynamicParams).AllocatorInstance.Data,
             (this->DynamicParams).ArrayNum);
  pFVar1 = (this->DynamicParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleParameterBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f260

UClass * __cdecl UParticleModuleParameterDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleParameterDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleParameterDynamic",
               &Z_Registration_Info_UClass_UParticleModuleParameterDynamic.InnerSingleton,
               StaticRegisterNativesUParticleModuleParameterDynamic,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleParameterDynamic>,
               InternalVTableHelperCtorCaller<UParticleModuleParameterDynamic>,local_res8,
               UParticleModuleParameterBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleParameterDynamic.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleParameterDynamic @ 14730ff30

void __cdecl
UParticleModuleParameterDynamic::StaticRegisterNativesUParticleModuleParameterDynamic(void)

{
  return;
}

// WillGeneratedModuleBeIdentical @ 147310050

bool __thiscall
UParticleModuleParameterDynamic::WillGeneratedModuleBeIdentical
          (UParticleModuleParameterDynamic *this,UParticleLODLevel *param_1,
          UParticleLODLevel *param_2,float param_3)

{
  return true;
}

// UParticleModuleParameterDynamic @ 14815dbf0

UParticleModuleParameterDynamic * __thiscall
UParticleModuleParameterDynamic::UParticleModuleParameterDynamic
          (UParticleModuleParameterDynamic *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  (this->DynamicParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicParams).ArrayNum = 0;
  (this->DynamicParams).ArrayMax = 0;
  return this;
}

// CanTickInAnyThread @ 148168a80

bool __thiscall
UParticleModuleParameterDynamic::CanTickInAnyThread(UParticleModuleParameterDynamic *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DynamicParams).ArrayNum;
  pFVar3 = (this->DynamicParams).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->DynamicParams).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEmitterDynamicParameter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 0x48;
  }
  return true;
}

// GetCurveObjects @ 148179240

void __thiscall
UParticleModuleParameterDynamic::GetCurveObjects
          (UParticleModuleParameterDynamic *this,
          TArray<FParticleCurvePair,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FString local_48;
  FString local_38;
  
  uVar9 = 0;
  uVar10 = uVar9;
  do {
    pFVar7 = (FScriptContainerElement *)0x0;
    uVar5 = param_1->ArrayNum;
    if (uVar5 == param_1->ArrayMax) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = uVar5 + 1;
    uVar6 = 0;
    if ((int)uVar5 < (int)(uVar5 + 1)) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x18;
    if (pFVar1 == (FScriptContainerElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCurve",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Parameter.cpp"
                         ,0x186,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      *(undefined8 *)pFVar1 = 0;
      *(undefined8 *)(pFVar1 + 8) = 0;
      *(undefined8 *)(pFVar1 + 0x10) = 0;
      pFVar7 = pFVar1;
    }
    iVar8 = (int)uVar9;
    if (((this->DynamicParams).ArrayNum <= iVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->DynamicParams).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)(pFVar1 + uVar10 + 0x40), pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)(pFVar1 + uVar10 + 0x40);
    if (((this->DynamicParams).ArrayNum <= iVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FName::ToString((FName *)((this->DynamicParams).AllocatorInstance.Data + uVar10),&local_38);
    ::FString::PrintfImpl(&local_48,L"%s (DP%d)");
    if (pFVar7 != (FScriptContainerElement *)&local_48) {
      if (*(void **)pFVar7 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar7);
      }
      *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar9 = (ulonglong)(iVar8 + 1U);
    uVar10 = uVar10 + 0x48;
  } while ((int)(iVar8 + 1U) < 4);
  return;
}

// GetParameterValue @ 14817b270

float __thiscall
UParticleModuleParameterDynamic::GetParameterValue
          (UParticleModuleParameterDynamic *this,FContext *param_1,FEmitterDynamicParameter *param_2
          ,FBaseParticle *param_3,FParticleEmitterInstance *param_4,FRandomStream *param_5)

{
  float fVar1;
  uchar uVar2;
  UObject *pUVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (param_2->ValueMethod).Value;
  if (uVar2 == '\x02') {
    fVar5 = (param_3->Velocity).field0_0x0._s_0.X;
  }
  else if (uVar2 == '\x03') {
    fVar5 = (param_3->Velocity).field0_0x0._s_0.Y;
  }
  else if (uVar2 == '\x04') {
    fVar5 = (param_3->Velocity).field0_0x0._s_0.Z;
  }
  else {
    fVar5 = __real_3f800000;
    if (uVar2 == '\x05') {
      fVar5 = (param_3->Velocity).field0_0x0._s_0.X;
      fVar4 = (param_3->Velocity).field0_0x0._s_0.Y;
      fVar1 = (param_3->Velocity).field0_0x0._s_0.Z;
      fVar5 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar1 * fVar1);
    }
  }
  if ((param_2->bScaleVelocityByParamValue != 0) || (fVar4 = __real_3f800000, uVar2 == '\0')) {
    if (param_2->bUseEmitterTime == 0) {
      fVar4 = param_3->RelativeTime;
    }
    else {
      fVar4 = param_4->EmitterTime;
    }
    pUVar3 = (UObject *)(**(code **)((longlong)*param_1->Owner->Component + 8))();
    fVar4 = FRawDistributionFloat::GetValue(&param_2->ParamValue,fVar4,pUVar3,param_5);
  }
  return fVar4 * fVar5;
}

// GetParticleParametersUtilized @ 14817cf20

void __thiscall
UParticleModuleParameterDynamic::GetParticleParametersUtilized
          (UParticleModuleParameterDynamic *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetParticleSysParamsUtilized @ 14817cf40

void __thiscall
UParticleModuleParameterDynamic::GetParticleSysParamsUtilized
          (UParticleModuleParameterDynamic *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// InitializeDefaults @ 1481846f0

void __thiscall
UParticleModuleParameterDynamic::InitializeDefaults(UParticleModuleParameterDynamic *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  UDistributionFloatConstant *pUVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FName local_res8;
  
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (this->DynamicParams).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->DynamicParams).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FRawDistributionFloat::IsCreated
                        ((FRawDistributionFloat *)
                         ((this->DynamicParams).AllocatorInstance.Data + uVar9 + 0x18));
      if (!bVar3) {
        pFVar5 = ::FName::FName(&local_res8,L"DistributionParam1");
        pUVar6 = NewObject<UDistributionFloatConstant>
                           ((UObject *)this,*pFVar5,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        uVar4 = 0;
        if ((int)uVar7 < (this->DynamicParams).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->DynamicParams).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UDistributionFloatConstant *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        *(UDistributionFloatConstant **)(pFVar1 + uVar9 + 0x40) = pUVar6;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x48;
    } while ((int)(uVar7 + 1) < (this->DynamicParams).ArrayNum);
  }
  return;
}

// PostInitProperties @ 14818ae20

void __thiscall
UParticleModuleParameterDynamic::PostInitProperties(UParticleModuleParameterDynamic *this)

{
  FEmitterDynamicParameter *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  TObjectPtr<UDistributionFloat>_u_0 TVar6;
  TObjectPtr<UDistributionFloat>_u_0 TVar7;
  TObjectPtr<UDistributionFloat>_u_0 TVar8;
  TObjectPtr<UDistributionFloat>_u_0 TVar9;
  TArray<FEmitterDynamicParameter,TSizedDefaultAllocator<32>_> *pTVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FEmitterDynamicParameter local_158;
  FEmitterDynamicParameter local_110;
  FEmitterDynamicParameter local_c8;
  FEmitterDynamicParameter local_80;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar5 = ::FName::FName(&local_res8,L"DistributionParam1");
    TVar6.DebugPtr =
         (UDistributionFloat *)
         NewObject<UDistributionFloatConstant>
                   ((UObject *)this,*pFVar5,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    *(float *)&TVar6.DebugPtr[1]._padding_ = 1.0;
    pFVar5 = ::FName::FName(&local_res10,L"DistributionParam2");
    TVar7.DebugPtr =
         (UDistributionFloat *)
         NewObject<UDistributionFloatConstant>
                   ((UObject *)this,*pFVar5,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    *(float *)&TVar7.DebugPtr[1]._padding_ = 1.0;
    pFVar5 = ::FName::FName(&local_res18,L"DistributionParam3");
    TVar8.DebugPtr =
         (UDistributionFloat *)
         NewObject<UDistributionFloatConstant>
                   ((UObject *)this,*pFVar5,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    *(float *)&TVar8.DebugPtr[1]._padding_ = 1.0;
    pFVar5 = ::FName::FName(&local_res20,L"DistributionParam4");
    TVar9.DebugPtr =
         (UDistributionFloat *)
         NewObject<UDistributionFloatConstant>
                   ((UObject *)this,*pFVar5,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    local_158._8_4_ = local_158._8_4_ & 0xfffffffc;
    pTVar10 = &this->DynamicParams;
    local_158._16_4_ = local_158._16_4_ & 0xfffffffe;
    local_158.ValueMethod.Value = '\0';
    *(float *)&TVar9.DebugPtr[1]._padding_ = 1.0;
    local_158.ParamName = ::ConstructorStatics.NAME_None;
    local_158.ParamValue._padding_ = 0;
    local_158.ParamValue._padding_ = 0;
    local_158.ParamValue._padding_ = 0;
    local_158.ParamValue._padding_._0_4_ = 0;
    local_158.ParamValue._padding_._4_1_ = 0;
    local_158.ParamValue.MinValue = 0.0;
    local_158.ParamValue.MaxValue = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    pFVar1 = (FEmitterDynamicParameter *)(pTVar10->AllocatorInstance).Data;
    local_158.ParamValue.Distribution.field0_0x0 =
         (TObjectPtr<UDistributionFloat>_u_0)(TObjectPtr<UDistributionFloat>_u_0)TVar6.DebugPtr;
    if ((pFVar1 <= &local_158) && (&local_158 < pFVar1 + (this->DynamicParams).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->DynamicParams).ArrayNum;
    if (iVar4 == (this->DynamicParams).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&pTVar10->AllocatorInstance,&(this->DynamicParams).ArrayMax);
    }
    (this->DynamicParams).ArrayNum = iVar4 + 1;
    FEmitterDynamicParameter::FEmitterDynamicParameter
              ((FEmitterDynamicParameter *)
               ((pTVar10->AllocatorInstance).Data + (longlong)iVar4 * 0x48),&local_158);
    if ((void *)local_158.ParamValue._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158.ParamValue._padding_);
    }
    local_110.bSpawnTimeOnly = 0;
    local_110.bUseEmitterTime = 0;
    local_110.bScaleVelocityByParamValue = 0;
    local_110.ParamName = ::ConstructorStatics.NAME_None;
    local_110.ValueMethod.Value = '\0';
    local_110.ParamValue._padding_ = 0;
    local_110.ParamValue._padding_ = 0;
    local_110.ParamValue._padding_ = 0;
    local_110.ParamValue._padding_._0_4_ = 0;
    local_110.ParamValue._padding_._4_1_ = 0;
    local_110.ParamValue.MinValue = 0.0;
    local_110.ParamValue.MaxValue = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    pFVar1 = (FEmitterDynamicParameter *)(pTVar10->AllocatorInstance).Data;
    local_110.ParamValue.Distribution.field0_0x0 =
         (TObjectPtr<UDistributionFloat>_u_0)(TObjectPtr<UDistributionFloat>_u_0)TVar7.DebugPtr;
    if ((pFVar1 <= &local_110) && (&local_110 < pFVar1 + (this->DynamicParams).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->DynamicParams).ArrayNum;
    if (iVar4 == (this->DynamicParams).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&pTVar10->AllocatorInstance,&(this->DynamicParams).ArrayMax);
    }
    (this->DynamicParams).ArrayNum = iVar4 + 1;
    FEmitterDynamicParameter::FEmitterDynamicParameter
              ((FEmitterDynamicParameter *)
               ((pTVar10->AllocatorInstance).Data + (longlong)iVar4 * 0x48),&local_110);
    if ((void *)local_110.ParamValue._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_110.ParamValue._padding_);
    }
    local_c8.bSpawnTimeOnly = 0;
    local_c8.bUseEmitterTime = 0;
    local_c8.bScaleVelocityByParamValue = 0;
    local_c8.ParamName = ::ConstructorStatics.NAME_None;
    local_c8.ValueMethod.Value = '\0';
    local_c8.ParamValue._padding_ = 0;
    local_c8.ParamValue._padding_ = 0;
    local_c8.ParamValue._padding_ = 0;
    local_c8.ParamValue._padding_._0_4_ = 0;
    local_c8.ParamValue._padding_._4_1_ = 0;
    local_c8.ParamValue.MinValue = 0.0;
    local_c8.ParamValue.MaxValue = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
    }
    pFVar1 = (FEmitterDynamicParameter *)(pTVar10->AllocatorInstance).Data;
    local_c8.ParamValue.Distribution.field0_0x0 =
         (TObjectPtr<UDistributionFloat>_u_0)(TObjectPtr<UDistributionFloat>_u_0)TVar8.DebugPtr;
    if ((pFVar1 <= &local_c8) && (&local_c8 < pFVar1 + (this->DynamicParams).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->DynamicParams).ArrayNum;
    if (iVar4 == (this->DynamicParams).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&pTVar10->AllocatorInstance,&(this->DynamicParams).ArrayMax);
    }
    (this->DynamicParams).ArrayNum = iVar4 + 1;
    FEmitterDynamicParameter::FEmitterDynamicParameter
              ((FEmitterDynamicParameter *)
               ((pTVar10->AllocatorInstance).Data + (longlong)iVar4 * 0x48),&local_c8);
    if ((void *)local_c8.ParamValue._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8.ParamValue._padding_);
    }
    local_80.bSpawnTimeOnly = 0;
    local_80.bUseEmitterTime = 0;
    local_80.bScaleVelocityByParamValue = 0;
    local_80.ValueMethod.Value = '\0';
    local_80.ParamValue._padding_ = 0;
    local_80.ParamValue._padding_ = 0;
    local_80.ParamValue._padding_ = 0;
    local_80.ParamValue._padding_._0_4_ = 0;
    local_80.ParamValue._padding_._4_1_ = 0;
    local_80.ParamValue.MinValue = 0.0;
    local_80.ParamValue.MaxValue = 0.0;
    local_80.ParamName = ::ConstructorStatics.NAME_None;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
    }
    pFVar1 = (FEmitterDynamicParameter *)(pTVar10->AllocatorInstance).Data;
    local_80.ParamValue.Distribution.field0_0x0 =
         (TObjectPtr<UDistributionFloat>_u_0)(TObjectPtr<UDistributionFloat>_u_0)TVar9.DebugPtr;
    if ((pFVar1 <= &local_80) && (&local_80 < pFVar1 + (this->DynamicParams).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (this->DynamicParams).ArrayNum;
    if (iVar4 == (this->DynamicParams).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&pTVar10->AllocatorInstance,&(this->DynamicParams).ArrayMax);
    }
    (this->DynamicParams).ArrayNum = iVar4 + 1;
    FEmitterDynamicParameter::FEmitterDynamicParameter
              ((FEmitterDynamicParameter *)
               ((pTVar10->AllocatorInstance).Data + (longlong)iVar4 * 0x48),&local_80);
    if ((void *)local_80.ParamValue._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_80.ParamValue._padding_);
    }
  }
  return;
}

// PostLoad @ 14818c4f0

void __thiscall UParticleModuleParameterDynamic::PostLoad(UParticleModuleParameterDynamic *this)

{
  UObject::PostLoad((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x00014818c509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a0))(this);
  return;
}

// RefreshModule @ 14818dee0

void __thiscall
UParticleModuleParameterDynamic::RefreshModule
          (UParticleModuleParameterDynamic *this,UInterpCurveEdSetup *param_1,
          UParticleEmitter *param_2,int param_3)

{
  return;
}

// RequiredBytes @ 148191890

uint __thiscall
UParticleModuleParameterDynamic::RequiredBytes
          (UParticleModuleParameterDynamic *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x10;
}

// SetToSensibleDefaults @ 148197e60

void __thiscall
UParticleModuleParameterDynamic::SetToSensibleDefaults
          (UParticleModuleParameterDynamic *this,UParticleEmitter *param_1)

{
  return;
}

// Spawn @ 14819d5a0

void __thiscall
UParticleModuleParameterDynamic::Spawn(UParticleModuleParameterDynamic *this,FSpawnContext *param_1)

{
  FRandomStream *pFVar1;
  
  pFVar1 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar1 == (FRandomStream *)0x0) {
    pFVar1 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  SpawnEx(this,param_1,pFVar1);
  return;
}

// SpawnEx @ 1481a0070

void __thiscall
UParticleModuleParameterDynamic::SpawnEx
          (UParticleModuleParameterDynamic *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  FBaseParticle *pFVar1;
  FParticleEmitterInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  float fVar6;
  
  pFVar1 = param_1->ParticleBase;
  pfVar5 = (float *)((longlong)&(pFVar1->OldLocation).field0_0x0 + (ulonglong)(uint)param_1->Offset)
  ;
  pFVar2 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((this->DynamicParams).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->DynamicParams).AllocatorInstance.Data[0xc] != (FScriptContainerElement)0x1) {
    if ((this->DynamicParams).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar6 = GetParameterValue(this,(FContext *)param_1,
                              (FEmitterDynamicParameter *)
                              (this->DynamicParams).AllocatorInstance.Data,pFVar1,pFVar2,param_2);
    *pfVar5 = fVar6;
  }
  if ((this->DynamicParams).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->DynamicParams).AllocatorInstance.Data[0x54] != (FScriptContainerElement)0x1) {
    if ((this->DynamicParams).ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar6 = GetParameterValue(this,(FContext *)param_1,
                              (FEmitterDynamicParameter *)
                              ((this->DynamicParams).AllocatorInstance.Data + 0x48),pFVar1,pFVar2,
                              param_2);
    pfVar5[1] = fVar6;
  }
  if ((this->DynamicParams).ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->DynamicParams).AllocatorInstance.Data[0x9c] != (FScriptContainerElement)0x1) {
    if ((this->DynamicParams).ArrayNum < 3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar6 = GetParameterValue(this,(FContext *)param_1,
                              (FEmitterDynamicParameter *)
                              ((this->DynamicParams).AllocatorInstance.Data + 0x90),pFVar1,pFVar2,
                              param_2);
    pfVar5[2] = fVar6;
  }
  if ((this->DynamicParams).ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->DynamicParams).AllocatorInstance.Data[0xe4] != (FScriptContainerElement)0x1) {
    if ((this->DynamicParams).ArrayNum < 4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar6 = GetParameterValue(this,(FContext *)param_1,
                              (FEmitterDynamicParameter *)
                              ((this->DynamicParams).AllocatorInstance.Data + 0xd8),pFVar1,pFVar2,
                              param_2);
    pfVar5[3] = fVar6;
  }
  return;
}

// Update @ 1481afa40

void __thiscall
UParticleModuleParameterDynamic::Update
          (UParticleModuleParameterDynamic *this,FUpdateContext *param_1)

{
  int iVar1;
  FParticleEmitterInstance *pFVar2;
  FEmitterDynamicParameter *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FRandomStream *pFVar12;
  UObject *pUVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  FBaseParticle *pFVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float *local_res20;
  
  if ((((this->UpdateFlags != 0) &&
       (pFVar2 = (FParticleEmitterInstance *)param_1->_padding_,
       pFVar2 != (FParticleEmitterInstance *)0x0)) && (0 < pFVar2->ActiveParticles)) &&
     ((pFVar2->ParticleData != (uchar *)0x0 && (pFVar2->ParticleIndices != (ushort *)0x0)))) {
    pFVar12 = UParticleModule::GetRandomStream((UParticleModule *)this,(FContext *)param_1);
    iVar1 = this->UpdateFlags;
    uVar16 = 0;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        uVar16 = 1;
      }
      else if (iVar1 == 4) {
        uVar16 = 2;
      }
      else if (iVar1 == 8) {
        uVar16 = 3;
      }
      else {
        uVar16 = 0xffffffff;
      }
    }
    switch(iVar1) {
    case 1:
    case 2:
    case 4:
    case 8:
      if ((uVar16 == 0xffffffff) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParameterIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Parameter.cpp"
                              ,199,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = 0;
      if ((int)uVar16 < (this->DynamicParams).ArrayNum) {
        uVar23 = ~uVar16 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar24 = (longlong)(int)uVar16;
      pFVar3 = (FEmitterDynamicParameter *)
               ((this->DynamicParams).AllocatorInstance.Data + lVar24 * 0x48);
      uVar16 = param_1->Offset;
      lVar22 = param_1->_padding_;
      lVar7 = *(longlong *)(lVar22 + 0x168);
      iVar1 = *(int *)(lVar22 + 0x188);
      lVar8 = *(longlong *)(lVar22 + 0x170);
      iVar11 = *(int *)(lVar22 + 0x18c) + -1;
      lVar22 = (longlong)iVar11;
      if (this->bUsesVelocity == 0) {
        if (-1 < iVar11) {
          do {
            lVar19 = (ulonglong)((uint)*(ushort *)(lVar8 + lVar22 * 2) * iVar1) + lVar7;
            if ((*(uint *)(lVar19 + 0x6c) & 0x4000000) == 0) {
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              if (pFVar3->bUseEmitterTime == 0) {
                fVar25 = *(float *)(lVar19 + 0x90);
              }
              else {
                fVar25 = pFVar2->EmitterTime;
              }
              fVar25 = FRawDistributionFloat::GetValue(&pFVar3->ParamValue,fVar25,pUVar13,pFVar12);
              *(float *)((ulonglong)uVar16 + lVar19 + lVar24 * 4) = fVar25;
            }
            lVar22 = lVar22 + -1;
          } while (-1 < lVar22);
        }
      }
      else if (-1 < iVar11) {
        do {
          pFVar18 = (FBaseParticle *)
                    ((ulonglong)((uint)*(ushort *)(lVar8 + lVar22 * 2) * iVar1) + lVar7);
          if ((pFVar18->Flags & 0x4000000U) == 0) {
            fVar25 = GetParameterValue(this,(FContext *)param_1,pFVar3,pFVar18,pFVar2,pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + lVar24 * 4 + (ulonglong)uVar16
                      ) = fVar25;
          }
          lVar22 = lVar22 + -1;
        } while (-1 < lVar22);
      }
      break;
    case 3:
      if (((this->DynamicParams).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = (FEmitterDynamicParameter *)(this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (this->DynamicParams).AllocatorInstance.Data;
      uVar16 = param_1->Offset;
      lVar22 = param_1->_padding_;
      iVar1 = *(int *)(lVar22 + 0x188);
      lVar7 = *(longlong *)(lVar22 + 0x170);
      lVar8 = *(longlong *)(lVar22 + 0x168);
      iVar11 = *(int *)(lVar22 + 0x18c) + -1;
      lVar22 = (longlong)iVar11;
      if (this->bUsesVelocity == 0) {
        if (-1 < iVar11) {
          do {
            lVar24 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar22 * 2) * iVar1) + lVar8;
            if ((*(uint *)(lVar24 + 0x6c) & 0x4000000) == 0) {
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              if (pFVar3->bUseEmitterTime == 0) {
                fVar25 = *(float *)(lVar24 + 0x90);
              }
              else {
                fVar25 = pFVar2->EmitterTime;
              }
              fVar25 = FRawDistributionFloat::GetValue(&pFVar3->ParamValue,fVar25,pUVar13,pFVar12);
              *(float *)((ulonglong)uVar16 + lVar24) = fVar25;
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pfVar15 = &pFVar2->EmitterTime;
              if (((byte)pFVar4[0x50] & 1) == 0) {
                pfVar15 = (float *)(lVar24 + 0x90);
              }
              fVar25 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(pFVar4 + 0x60),*pfVar15,pUVar13,pFVar12)
              ;
              ((float *)((ulonglong)uVar16 + lVar24))[1] = fVar25;
            }
            lVar22 = lVar22 + -1;
          } while (-1 < lVar22);
        }
      }
      else if (-1 < iVar11) {
        do {
          pFVar18 = (FBaseParticle *)
                    ((ulonglong)((uint)*(ushort *)(lVar7 + lVar22 * 2) * iVar1) + lVar8);
          if ((pFVar18->Flags & 0x4000000U) == 0) {
            fVar25 = GetParameterValue(this,(FContext *)param_1,pFVar3,pFVar18,pFVar2,pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + (ulonglong)uVar16) = fVar25;
            fVar25 = GetParameterValue(this,(FContext *)param_1,
                                       (FEmitterDynamicParameter *)(pFVar4 + 0x48),pFVar18,pFVar2,
                                       pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + (ulonglong)uVar16 + 4) =
                 fVar25;
          }
          lVar22 = lVar22 + -1;
        } while (-1 < lVar22);
      }
      break;
    default:
      if (((this->DynamicParams).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = (FEmitterDynamicParameter *)(this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 3) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar22 = param_1->_padding_;
      pFVar6 = (this->DynamicParams).AllocatorInstance.Data;
      uVar16 = param_1->Offset;
      lVar7 = *(longlong *)(lVar22 + 0x168);
      iVar1 = *(int *)(lVar22 + 0x188);
      lVar8 = *(longlong *)(lVar22 + 0x170);
      iVar11 = *(int *)(lVar22 + 0x18c) + -1;
      lVar22 = (longlong)iVar11;
      if (this->bUsesVelocity == 0) {
        if (-1 < iVar11) {
          do {
            uVar21 = (ulonglong)uVar16;
            lVar24 = (ulonglong)((uint)*(ushort *)(lVar8 + lVar22 * 2) * iVar1) + lVar7;
            if ((*(uint *)(lVar24 + 0x6c) & 0x4000000) == 0) {
              if ((this->UpdateFlags & 1) == 0) {
                fVar25 = *(float *)(uVar21 + lVar24);
              }
              else {
                pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))()
                ;
                if (pFVar3->bUseEmitterTime == 0) {
                  fVar25 = *(float *)(lVar24 + 0x90);
                }
                else {
                  fVar25 = pFVar2->EmitterTime;
                }
                fVar25 = FRawDistributionFloat::GetValue(&pFVar3->ParamValue,fVar25,pUVar13,pFVar12)
                ;
              }
              local_res20 = (float *)(lVar24 + 0x90);
              *(float *)(uVar21 + lVar24) = fVar25;
              if ((this->UpdateFlags & 2) == 0) {
                fVar25 = *(float *)(uVar21 + 4 + lVar24);
              }
              else {
                pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))()
                ;
                pfVar15 = &pFVar2->EmitterTime;
                if (((byte)pFVar4[0x50] & 1) == 0) {
                  pfVar15 = local_res20;
                }
                fVar25 = FRawDistributionFloat::GetValue
                                   ((FRawDistributionFloat *)(pFVar4 + 0x60),*pfVar15,pUVar13,
                                    pFVar12);
              }
              *(float *)(uVar21 + 4 + lVar24) = fVar25;
              if ((this->UpdateFlags & 4) == 0) {
                fVar25 = *(float *)(uVar21 + 8 + lVar24);
              }
              else {
                pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))()
                ;
                pfVar15 = local_res20;
                if (((byte)pFVar5[0x98] & 1) != 0) {
                  pfVar15 = &pFVar2->EmitterTime;
                }
                fVar25 = FRawDistributionFloat::GetValue
                                   ((FRawDistributionFloat *)(pFVar5 + 0xa8),*pfVar15,pUVar13,
                                    pFVar12);
              }
              *(float *)(uVar21 + 8 + lVar24) = fVar25;
              if ((this->UpdateFlags & 8) == 0) {
                fVar25 = *(float *)(uVar21 + 0xc + lVar24);
              }
              else {
                pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))()
                ;
                if (((byte)pFVar6[0xe0] & 1) != 0) {
                  local_res20 = &pFVar2->EmitterTime;
                }
                fVar25 = FRawDistributionFloat::GetValue
                                   ((FRawDistributionFloat *)(pFVar6 + 0xf0),*local_res20,pUVar13,
                                    pFVar12);
              }
              *(float *)(uVar21 + 0xc + lVar24) = fVar25;
            }
            lVar22 = lVar22 + -1;
          } while (-1 < lVar22);
        }
      }
      else if (-1 < iVar11) {
        do {
          uVar21 = (ulonglong)uVar16;
          pFVar18 = (FBaseParticle *)
                    ((ulonglong)((uint)*(ushort *)(lVar8 + lVar22 * 2) * iVar1) + lVar7);
          if ((pFVar18->Flags & 0x4000000U) == 0) {
            if ((this->UpdateFlags & 1) == 0) {
              fVar25 = *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21);
            }
            else {
              fVar25 = GetParameterValue(this,(FContext *)param_1,pFVar3,pFVar18,pFVar2,pFVar12);
            }
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21) = fVar25;
            if ((this->UpdateFlags & 2) == 0) {
              fVar25 = *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 4);
            }
            else {
              fVar25 = GetParameterValue(this,(FContext *)param_1,
                                         (FEmitterDynamicParameter *)(pFVar4 + 0x48),pFVar18,pFVar2,
                                         pFVar12);
            }
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 4) = fVar25;
            if ((this->UpdateFlags & 4) == 0) {
              fVar25 = *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 8);
            }
            else {
              fVar25 = GetParameterValue(this,(FContext *)param_1,
                                         (FEmitterDynamicParameter *)(pFVar5 + 0x90),pFVar18,pFVar2,
                                         pFVar12);
            }
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 8) = fVar25;
            if ((this->UpdateFlags & 8) == 0) {
              fVar25 = *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 0xc);
            }
            else {
              fVar25 = GetParameterValue(this,(FContext *)param_1,
                                         (FEmitterDynamicParameter *)(pFVar6 + 0xd8),pFVar18,pFVar2,
                                         pFVar12);
            }
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 0xc) = fVar25;
          }
          lVar22 = lVar22 + -1;
        } while (-1 < lVar22);
      }
      break;
    case 7:
      if (((this->DynamicParams).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = (FEmitterDynamicParameter *)(this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 3) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (this->DynamicParams).AllocatorInstance.Data;
      uVar16 = param_1->Offset;
      lVar22 = param_1->_padding_;
      iVar1 = *(int *)(lVar22 + 0x188);
      lVar7 = *(longlong *)(lVar22 + 0x170);
      lVar8 = *(longlong *)(lVar22 + 0x168);
      iVar11 = *(int *)(lVar22 + 0x18c) + -1;
      lVar22 = (longlong)iVar11;
      if (this->bUsesVelocity == 0) {
        if (-1 < iVar11) {
          do {
            lVar24 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar22 * 2) * iVar1) + lVar8;
            if ((*(uint *)(lVar24 + 0x6c) & 0x4000000) == 0) {
              pfVar17 = (float *)((ulonglong)uVar16 + lVar24);
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pfVar20 = (float *)(lVar24 + 0x90);
              pfVar15 = &pFVar2->EmitterTime;
              if (pFVar3->bUseEmitterTime == 0) {
                fVar25 = *pfVar20;
              }
              else {
                fVar25 = *pfVar15;
              }
              fVar25 = FRawDistributionFloat::GetValue(&pFVar3->ParamValue,fVar25,pUVar13,pFVar12);
              *pfVar17 = fVar25;
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pfVar14 = pfVar15;
              if (((byte)pFVar4[0x50] & 1) == 0) {
                pfVar14 = pfVar20;
              }
              fVar25 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(pFVar4 + 0x60),*pfVar14,pUVar13,pFVar12)
              ;
              pfVar17[1] = fVar25;
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              if (((byte)pFVar5[0x98] & 1) != 0) {
                pfVar20 = pfVar15;
              }
              fVar25 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(pFVar5 + 0xa8),*pfVar20,pUVar13,pFVar12)
              ;
              pfVar17[2] = fVar25;
            }
            lVar22 = lVar22 + -1;
          } while (-1 < lVar22);
        }
      }
      else if (-1 < iVar11) {
        do {
          uVar21 = (ulonglong)uVar16;
          pFVar18 = (FBaseParticle *)
                    ((ulonglong)((uint)*(ushort *)(lVar7 + lVar22 * 2) * iVar1) + lVar8);
          if ((pFVar18->Flags & 0x4000000U) == 0) {
            fVar25 = GetParameterValue(this,(FContext *)param_1,pFVar3,pFVar18,pFVar2,pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21) = fVar25;
            fVar25 = GetParameterValue(this,(FContext *)param_1,
                                       (FEmitterDynamicParameter *)(pFVar4 + 0x48),pFVar18,pFVar2,
                                       pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 4) = fVar25;
            fVar25 = GetParameterValue(this,(FContext *)param_1,
                                       (FEmitterDynamicParameter *)(pFVar5 + 0x90),pFVar18,pFVar2,
                                       pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 8) = fVar25;
          }
          lVar22 = lVar22 + -1;
        } while (-1 < lVar22);
      }
      break;
    case 0xf:
      if (((this->DynamicParams).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = (FEmitterDynamicParameter *)(this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 3) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (this->DynamicParams).AllocatorInstance.Data;
      if (((this->DynamicParams).ArrayNum < 4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->DynamicParams).AllocatorInstance.Data;
      uVar16 = param_1->Offset;
      lVar22 = param_1->_padding_;
      iVar1 = *(int *)(lVar22 + 0x188);
      lVar7 = *(longlong *)(lVar22 + 0x170);
      lVar8 = *(longlong *)(lVar22 + 0x168);
      iVar11 = *(int *)(lVar22 + 0x18c) + -1;
      lVar22 = (longlong)iVar11;
      if (this->bUsesVelocity == 0) {
        if (-1 < iVar11) {
          do {
            lVar24 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar22 * 2) * iVar1) + lVar8;
            if ((*(uint *)(lVar24 + 0x6c) & 0x4000000) == 0) {
              pfVar17 = (float *)((ulonglong)uVar16 + lVar24);
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pfVar20 = (float *)(lVar24 + 0x90);
              pfVar15 = &pFVar2->EmitterTime;
              if (pFVar3->bUseEmitterTime == 0) {
                fVar25 = *pfVar20;
              }
              else {
                fVar25 = *pfVar15;
              }
              fVar25 = FRawDistributionFloat::GetValue(&pFVar3->ParamValue,fVar25,pUVar13,pFVar12);
              *pfVar17 = fVar25;
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pfVar14 = pfVar15;
              if (((byte)pFVar4[0x50] & 1) == 0) {
                pfVar14 = pfVar20;
              }
              fVar25 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(pFVar4 + 0x60),*pfVar14,pUVar13,pFVar12)
              ;
              pfVar17[1] = fVar25;
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              pfVar14 = pfVar20;
              if (((byte)pFVar5[0x98] & 1) != 0) {
                pfVar14 = pfVar15;
              }
              fVar25 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(pFVar5 + 0xa8),*pfVar14,pUVar13,pFVar12)
              ;
              pfVar17[2] = fVar25;
              pUVar13 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
              if (((byte)pFVar6[0xe0] & 1) != 0) {
                pfVar20 = pfVar15;
              }
              fVar25 = FRawDistributionFloat::GetValue
                                 ((FRawDistributionFloat *)(pFVar6 + 0xf0),*pfVar20,pUVar13,pFVar12)
              ;
              pfVar17[3] = fVar25;
            }
            lVar22 = lVar22 + -1;
          } while (-1 < lVar22);
        }
      }
      else if (-1 < iVar11) {
        do {
          uVar21 = (ulonglong)uVar16;
          pFVar18 = (FBaseParticle *)
                    ((ulonglong)((uint)*(ushort *)(lVar7 + lVar22 * 2) * iVar1) + lVar8);
          if ((pFVar18->Flags & 0x4000000U) == 0) {
            fVar25 = GetParameterValue(this,(FContext *)param_1,pFVar3,pFVar18,pFVar2,pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21) = fVar25;
            fVar25 = GetParameterValue(this,(FContext *)param_1,
                                       (FEmitterDynamicParameter *)(pFVar4 + 0x48),pFVar18,pFVar2,
                                       pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 4) = fVar25;
            fVar25 = GetParameterValue(this,(FContext *)param_1,
                                       (FEmitterDynamicParameter *)(pFVar5 + 0x90),pFVar18,pFVar2,
                                       pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 8) = fVar25;
            fVar25 = GetParameterValue(this,(FContext *)param_1,
                                       (FEmitterDynamicParameter *)(pFVar6 + 0xd8),pFVar18,pFVar2,
                                       pFVar12);
            *(float *)((longlong)&(pFVar18->OldLocation).field0_0x0 + uVar21 + 0xc) = fVar25;
          }
          lVar22 = lVar22 + -1;
        } while (-1 < lVar22);
      }
    }
  }
  return;
}

// UpdateParameterNames @ 1481b3930

void __thiscall
UParticleModuleParameterDynamic::UpdateParameterNames
          (UParticleModuleParameterDynamic *this,UMaterialInterface *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar6 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1,&local_18);
  plVar1 = (longlong *)(lVar6 + 0x4a8);
  if ((this->DynamicParams).ArrayNum != 4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicParams.Num() == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Parameter.cpp"
                       ,0x198,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (this->DynamicParams).ArrayNum;
  if (*(int *)(lVar6 + 0x4b0) < 1) {
    if (iVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)(this->DynamicParams).AllocatorInstance.Data = 0;
  }
  else {
    uVar3 = *(undefined8 *)*plVar1;
    if (iVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)(this->DynamicParams).AllocatorInstance.Data = uVar3;
  }
  iVar2 = (this->DynamicParams).ArrayNum;
  if (*(int *)(lVar6 + 0x4b0) < 2) {
    if (iVar2 < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((this->DynamicParams).AllocatorInstance.Data + 0x48) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*plVar1 + 8);
    if (iVar2 < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((this->DynamicParams).AllocatorInstance.Data + 0x48) = uVar3;
  }
  iVar2 = (this->DynamicParams).ArrayNum;
  if (*(int *)(lVar6 + 0x4b0) < 3) {
    if (iVar2 < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((this->DynamicParams).AllocatorInstance.Data + 0x90) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*plVar1 + 0x10);
    if (iVar2 < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((this->DynamicParams).AllocatorInstance.Data + 0x90) = uVar3;
  }
  iVar2 = (this->DynamicParams).ArrayNum;
  if (*(int *)(lVar6 + 0x4b0) < 4) {
    if (iVar2 < 4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((this->DynamicParams).AllocatorInstance.Data + 0xd8) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*plVar1 + 0x18);
    if (iVar2 < 4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((this->DynamicParams).AllocatorInstance.Data + 0xd8) = uVar3;
  }
  return;
}

// UpdateUsageFlags @ 1481b4340

void __thiscall
UParticleModuleParameterDynamic::UpdateUsageFlags(UParticleModuleParameterDynamic *this)

{
  return;
}

