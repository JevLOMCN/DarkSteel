// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc99520

UClass * __cdecl UMovieGraphLinearTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphLinearTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton,
               StaticRegisterNativesUMovieGraphLinearTimeStep,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphLinearTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphLinearTimeStep>,local_res8,
               UMovieGraphCoreTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton;
}

// UMovieGraphLinearTimeStep @ 14dcaff20

UMovieGraphLinearTimeStep * __thiscall
UMovieGraphLinearTimeStep::UMovieGraphLinearTimeStep
          (UMovieGraphLinearTimeStep *this,FVTableHelper *param_1)

{
  UMovieGraphCoreTimeStep::UMovieGraphCoreTimeStep((UMovieGraphCoreTimeStep *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphLinearTimeStep__6B_;
  return this;
}

// ~UMovieGraphLinearTimeStep @ 14dcb2e10

void __thiscall
UMovieGraphLinearTimeStep::~UMovieGraphLinearTimeStep(UMovieGraphLinearTimeStep *this)

{
  *(undefined ***)this = &___7UMovieGraphLinearTimeStep__6B_;
  UMovieGraphCoreTimeStep::~UMovieGraphCoreTimeStep((UMovieGraphCoreTimeStep *)this);
  return;
}

// GetNextTemporalRangeIndex @ 14dcced20

int __thiscall UMovieGraphLinearTimeStep::GetNextTemporalRangeIndex(UMovieGraphLinearTimeStep *this)

{
  return *(int *)&this->field_0xf0;
}

// GetPrivateStaticClass @ 14dcd2820

UClass * __cdecl UMovieGraphLinearTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphLinearTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton,
               StaticRegisterNativesUMovieGraphLinearTimeStep,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphLinearTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphLinearTimeStep>,local_res8,
               UMovieGraphCoreTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton;
}

// GetTemporalSampleCount @ 14dcd3c70

int __thiscall UMovieGraphLinearTimeStep::GetTemporalSampleCount(UMovieGraphLinearTimeStep *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  
  pUVar7 = UMovieGraphPipeline::StaticClass();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  uVar1 = *(uint *)(pUVar8 + 0xb);
  pUVar7 = UMovieGraphPipeline::StaticClass();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  uVar9 = 0;
  if ((int)uVar1 < *(int *)(pUVar8 + 8)) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  pTVar4 = CVarNumWarmUpFramesWithTemporalSampling.Ref;
  lVar2 = *(longlong *)&pUVar8[7].field_0x20;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
  }
  if (pTVar4->ShadowedValue[0] < *(int *)(*(longlong *)(lVar2 + (longlong)(int)uVar1 * 8) + 0x15c))
  {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dcd3d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(*(longlong *)this + 800))(this,*(undefined8 *)&this->field_0x180);
  return iVar6;
}

// StaticRegisterNativesUMovieGraphLinearTimeStep @ 14dce6570

void __cdecl UMovieGraphLinearTimeStep::StaticRegisterNativesUMovieGraphLinearTimeStep(void)

{
  return;
}

