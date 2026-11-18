// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 107

// StaticClass @ 14dc65c50

UClass * __cdecl UMovieGraphConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConfig",
               &Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton,
               StaticRegisterNativesUMovieGraphConfig,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphConfig>,
               InternalVTableHelperCtorCaller<UMovieGraphConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton;
}

// AddGlobalVariable<UMovieGraphGlobalVariable_CameraName> @ 14dc6a8f0

UMovieGraphGlobalVariable_CameraName * __thiscall
UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_CameraName>(UMovieGraphConfig *this)

{
  UMovieGraphGlobalVariable_CameraName *pUVar1;
  FName local_res8;
  
  local_res8 = (FName)TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_CameraName>_::__l2::<lambda_1>_>
                                (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (local_res8 != (FName)0x0) {
    return (UMovieGraphGlobalVariable_CameraName *)0x0;
  }
  pUVar1 = AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable>
                     (this,&this->GlobalVariables,&local_res8);
  return pUVar1;
}

// AddGlobalVariable<UMovieGraphGlobalVariable_FrameNumber> @ 14dc6a950

UMovieGraphGlobalVariable_FrameNumber * __thiscall
UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_FrameNumber>(UMovieGraphConfig *this)

{
  UMovieGraphGlobalVariable_FrameNumber *pUVar1;
  FName local_res8;
  
  local_res8 = (FName)TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_FrameNumber>_::__l2::<lambda_1>_>
                                (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (local_res8 != (FName)0x0) {
    return (UMovieGraphGlobalVariable_FrameNumber *)0x0;
  }
  pUVar1 = AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable>
                     (this,&this->GlobalVariables,&local_res8);
  return pUVar1;
}

// AddGlobalVariable<UMovieGraphGlobalVariable_SequenceName> @ 14dc6a9b0

UMovieGraphGlobalVariable_SequenceName * __thiscall
UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_SequenceName>
          (UMovieGraphConfig *this)

{
  UMovieGraphGlobalVariable_SequenceName *pUVar1;
  FName local_res8;
  
  local_res8 = (FName)TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_SequenceName>_::__l2::<lambda_1>_>
                                (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (local_res8 != (FName)0x0) {
    return (UMovieGraphGlobalVariable_SequenceName *)0x0;
  }
  pUVar1 = AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable>
                     (this,&this->GlobalVariables,&local_res8);
  return pUVar1;
}

// AddGlobalVariable<UMovieGraphGlobalVariable_ShotName> @ 14dc6aa10

UMovieGraphGlobalVariable_ShotName * __thiscall
UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_ShotName>(UMovieGraphConfig *this)

{
  UMovieGraphGlobalVariable_ShotName *pUVar1;
  FName local_res8;
  
  local_res8 = (FName)TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_ShotName>_::__l2::<lambda_1>_>
                                (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (local_res8 != (FName)0x0) {
    return (UMovieGraphGlobalVariable_ShotName *)0x0;
  }
  pUVar1 = AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable>
                     (this,&this->GlobalVariables,&local_res8);
  return pUVar1;
}

// AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable> @ 14dc6aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_CameraName * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  UMovieGraphGlobalVariable_CameraName *pUVar10;
  FGuid *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphGlobalVariable_CameraName *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphGlobalVariable_CameraName *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UMovieGraphGlobalVariable_CameraName::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMovieGraphGlobalVariable_CameraName *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar8 = (FName)UMovieGraphGlobalVariable_CameraName::StaticClass();
    FVar8 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar8,None);
    FVar8 = *(FName *)FVar8;
    pUVar9 = UMovieGraphGlobalVariable_CameraName::StaticClass();
    pUVar10 = (UMovieGraphGlobalVariable_CameraName *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar9,pUVar9,true,false);
  }
  if (pUVar10 == (UMovieGraphGlobalVariable_CameraName *)0x0) {
    local_110 = pUVar10;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar14.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar10 = (UMovieGraphGlobalVariable_CameraName *)0x0;
  }
  else {
    local_140 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UMovieGraphGlobalVariable_CameraName *)(*pcVar2)();
      return pUVar10;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(UMovieGraphGlobalVariable_CameraName **)
     ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphGlobalVariable_CameraName *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
    pFVar11 = FGuid::NewGuid(&local_d0);
    uVar3 = pFVar11->B;
    uVar4 = pFVar11->C;
    uVar5 = pFVar11->D;
    *(uint *)&pUVar10->field_0x60 = pFVar11->A;
    *(uint *)&pUVar10->field_0x64 = uVar3;
    *(uint *)&pUVar10->field_0x68 = uVar4;
    *(uint *)&pUVar10->field_0x6c = uVar5;
    pUVar9 = UMovieGraphGlobalVariable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pFVar12 = ::FName::ToString(param_2,&local_e0);
      pFVar12 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar12);
      UMovieGraphMember::SetMemberName((UMovieGraphMember *)pUVar10,pFVar12);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar10;
}

// AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable> @ 14dc6ad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_FrameNumber * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  UMovieGraphGlobalVariable_FrameNumber *pUVar10;
  FGuid *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphGlobalVariable_FrameNumber *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphGlobalVariable_FrameNumber *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UMovieGraphGlobalVariable_FrameNumber::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMovieGraphGlobalVariable_FrameNumber *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar8 = (FName)UMovieGraphGlobalVariable_FrameNumber::StaticClass();
    FVar8 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar8,None);
    FVar8 = *(FName *)FVar8;
    pUVar9 = UMovieGraphGlobalVariable_FrameNumber::StaticClass();
    pUVar10 = (UMovieGraphGlobalVariable_FrameNumber *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar9,pUVar9,true,false);
  }
  if (pUVar10 == (UMovieGraphGlobalVariable_FrameNumber *)0x0) {
    local_110 = pUVar10;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar14.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar10 = (UMovieGraphGlobalVariable_FrameNumber *)0x0;
  }
  else {
    local_140 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UMovieGraphGlobalVariable_FrameNumber *)(*pcVar2)();
      return pUVar10;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(UMovieGraphGlobalVariable_FrameNumber **)
     ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphGlobalVariable_FrameNumber *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
    pFVar11 = FGuid::NewGuid(&local_d0);
    uVar3 = pFVar11->B;
    uVar4 = pFVar11->C;
    uVar5 = pFVar11->D;
    *(uint *)&pUVar10->field_0x60 = pFVar11->A;
    *(uint *)&pUVar10->field_0x64 = uVar3;
    *(uint *)&pUVar10->field_0x68 = uVar4;
    *(uint *)&pUVar10->field_0x6c = uVar5;
    pUVar9 = UMovieGraphGlobalVariable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pFVar12 = ::FName::ToString(param_2,&local_e0);
      pFVar12 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar12);
      UMovieGraphMember::SetMemberName((UMovieGraphMember *)pUVar10,pFVar12);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar10;
}

// AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable> @ 14dc6b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_SequenceName * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  UMovieGraphGlobalVariable_SequenceName *pUVar10;
  FGuid *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphGlobalVariable_SequenceName *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphGlobalVariable_SequenceName *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UMovieGraphGlobalVariable_SequenceName::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMovieGraphGlobalVariable_SequenceName *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar8 = (FName)UMovieGraphGlobalVariable_SequenceName::StaticClass();
    FVar8 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar8,None);
    FVar8 = *(FName *)FVar8;
    pUVar9 = UMovieGraphGlobalVariable_SequenceName::StaticClass();
    pUVar10 = (UMovieGraphGlobalVariable_SequenceName *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar9,pUVar9,true,false);
  }
  if (pUVar10 == (UMovieGraphGlobalVariable_SequenceName *)0x0) {
    local_110 = pUVar10;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar14.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar10 = (UMovieGraphGlobalVariable_SequenceName *)0x0;
  }
  else {
    local_140 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UMovieGraphGlobalVariable_SequenceName *)(*pcVar2)();
      return pUVar10;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(UMovieGraphGlobalVariable_SequenceName **)
     ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphGlobalVariable_SequenceName *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
    pFVar11 = FGuid::NewGuid(&local_d0);
    uVar3 = pFVar11->B;
    uVar4 = pFVar11->C;
    uVar5 = pFVar11->D;
    *(uint *)&pUVar10->field_0x60 = pFVar11->A;
    *(uint *)&pUVar10->field_0x64 = uVar3;
    *(uint *)&pUVar10->field_0x68 = uVar4;
    *(uint *)&pUVar10->field_0x6c = uVar5;
    pUVar9 = UMovieGraphGlobalVariable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pFVar12 = ::FName::ToString(param_2,&local_e0);
      pFVar12 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar12);
      UMovieGraphMember::SetMemberName((UMovieGraphMember *)pUVar10,pFVar12);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar10;
}

// AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable> @ 14dc6b370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_ShotName * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  UMovieGraphGlobalVariable_ShotName *pUVar10;
  FGuid *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphGlobalVariable_ShotName *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphGlobalVariable_ShotName *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UMovieGraphGlobalVariable_ShotName::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMovieGraphGlobalVariable_ShotName *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar8 = (FName)UMovieGraphGlobalVariable_ShotName::StaticClass();
    FVar8 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar8,None);
    FVar8 = *(FName *)FVar8;
    pUVar9 = UMovieGraphGlobalVariable_ShotName::StaticClass();
    pUVar10 = (UMovieGraphGlobalVariable_ShotName *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar9,pUVar9,true,false);
  }
  if (pUVar10 == (UMovieGraphGlobalVariable_ShotName *)0x0) {
    local_110 = pUVar10;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar14.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar10 = (UMovieGraphGlobalVariable_ShotName *)0x0;
  }
  else {
    local_140 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UMovieGraphGlobalVariable_ShotName *)(*pcVar2)();
      return pUVar10;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(UMovieGraphGlobalVariable_ShotName **)
     ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphGlobalVariable_ShotName *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
    pFVar11 = FGuid::NewGuid(&local_d0);
    uVar3 = pFVar11->B;
    uVar4 = pFVar11->C;
    uVar5 = pFVar11->D;
    *(uint *)&pUVar10->field_0x60 = pFVar11->A;
    *(uint *)&pUVar10->field_0x64 = uVar3;
    *(uint *)&pUVar10->field_0x68 = uVar4;
    *(uint *)&pUVar10->field_0x6c = uVar5;
    pUVar9 = UMovieGraphGlobalVariable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pFVar12 = ::FName::ToString(param_2,&local_e0);
      pFVar12 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar12);
      UMovieGraphMember::SetMemberName((UMovieGraphMember *)pUVar10,pFVar12);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar10;
}

// AddMember<UMovieGraphInput,UMovieGraphInput> @ 14dc6b670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphInput * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphInput,UMovieGraphInput>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphInput>,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  UMovieGraphInput *pUVar10;
  FGuid *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphInput *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphInput *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UMovieGraphInput::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMovieGraphInput *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar8 = (FName)UMovieGraphInput::StaticClass();
    FVar8 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar8,None);
    FVar8 = *(FName *)FVar8;
    pUVar9 = UMovieGraphInput::StaticClass();
    pUVar10 = (UMovieGraphInput *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar9,pUVar9,true,false);
  }
  if (pUVar10 == (UMovieGraphInput *)0x0) {
    local_110 = pUVar10;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar14.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar10 = (UMovieGraphInput *)0x0;
  }
  else {
    local_140 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UMovieGraphInput *)(*pcVar2)();
      return pUVar10;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(UMovieGraphInput **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphInput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
    pFVar11 = FGuid::NewGuid(&local_d0);
    uVar3 = pFVar11->B;
    uVar4 = pFVar11->C;
    uVar5 = pFVar11->D;
    *(uint *)&pUVar10->field_0x60 = pFVar11->A;
    *(uint *)&pUVar10->field_0x64 = uVar3;
    *(uint *)&pUVar10->field_0x68 = uVar4;
    *(uint *)&pUVar10->field_0x6c = uVar5;
    pUVar9 = UMovieGraphGlobalVariable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphInput>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphInput,UMovieGraphInput>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x2b0);
      pFVar12 = ::FName::ToString(param_2,&local_e0);
      pFVar12 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar12);
      (*pcVar2)(pUVar10,pFVar12);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar10;
}

// AddMember<UMovieGraphOutput,UMovieGraphOutput> @ 14dc6b980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphOutput * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphOutput,UMovieGraphOutput>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphOutput>,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  UMovieGraphOutput *pUVar10;
  FGuid *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphOutput *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphOutput *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UMovieGraphOutput::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMovieGraphOutput *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar8 = (FName)UMovieGraphOutput::StaticClass();
    FVar8 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar8,None);
    FVar8 = *(FName *)FVar8;
    pUVar9 = UMovieGraphOutput::StaticClass();
    pUVar10 = (UMovieGraphOutput *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar8,pUVar9,pUVar9,true,false);
  }
  if (pUVar10 == (UMovieGraphOutput *)0x0) {
    local_110 = pUVar10;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar14.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar10 = (UMovieGraphOutput *)0x0;
  }
  else {
    local_140 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UMovieGraphOutput *)(*pcVar2)();
      return pUVar10;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(UMovieGraphOutput **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
    pFVar11 = FGuid::NewGuid(&local_d0);
    uVar3 = pFVar11->B;
    uVar4 = pFVar11->C;
    uVar5 = pFVar11->D;
    *(uint *)&pUVar10->field_0x60 = pFVar11->A;
    *(uint *)&pUVar10->field_0x64 = uVar3;
    *(uint *)&pUVar10->field_0x68 = uVar4;
    *(uint *)&pUVar10->field_0x6c = uVar5;
    pUVar9 = UMovieGraphGlobalVariable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphOutput>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphOutput,UMovieGraphOutput>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x2b0);
      pFVar12 = ::FName::ToString(param_2,&local_e0);
      pFVar12 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar12);
      (*pcVar2)(pUVar10,pFVar12);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar10;
}

// AddMember<UMovieGraphVariable,UMovieGraphVariable> @ 14dc6bc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphVariable * __thiscall
UMovieGraphConfig::AddMember<UMovieGraphVariable,UMovieGraphVariable>
          (UMovieGraphConfig *this,
          TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  UClass *pUVar7;
  UMovieGraphVariable *pUVar8;
  FGuid *pFVar9;
  FString *pFVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_198 [32];
  <lambda_1> local_148;
  UMovieGraphVariable *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  UMovieGraphVariable *local_110;
  FString local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    local_120 = 0;
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = UMovieGraphVariable::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar8 = (UMovieGraphVariable *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    FVar6 = (FName)UMovieGraphVariable::StaticClass();
    FVar6 = MakeUniqueObjectName((UObject *)local_f8,(UClass *)this,FVar6,None);
    FVar6 = *(FName *)FVar6;
    pUVar7 = UMovieGraphVariable::StaticClass();
    pUVar8 = (UMovieGraphVariable *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar7,pUVar7,true,false);
  }
  if (pUVar8 == (UMovieGraphVariable *)0x0) {
    local_110 = pUVar8;
    ::FString::PrintfImpl(&local_108,L"%hs: Unable to create new member object in the graph.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar12.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar12.Data,Error,(FName)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pUVar8 = (UMovieGraphVariable *)0x0;
  }
  else {
    local_140 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UMovieGraphVariable *)(*pcVar2)();
      return pUVar8;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    *(UMovieGraphVariable **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UMovieGraphVariable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar8,RF_Transactional);
    pFVar9 = FGuid::NewGuid(&local_d0);
    lVar3 = *(longlong *)&pFVar9->C;
    pUVar8->_padding_ = *(longlong *)pFVar9;
    pUVar8->_padding_ = lVar3;
    pUVar7 = UMovieGraphGlobalVariable::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) {
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphVariable,UMovieGraphVariable>_::__l8::<lambda_1>_>
                (param_1,&local_138,local_148);
      pcVar2 = *(code **)(pUVar8->_padding_ + 0x2b0);
      pFVar10 = ::FName::ToString(param_2,&local_e0);
      pFVar10 = UE::MovieGraph::GetUniqueName(&local_f0,&local_138,pFVar10);
      (*pcVar2)(pUVar8,pFVar10);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return pUVar8;
}

// UMovieGraphConfig @ 14dc72a90

UMovieGraphConfig * __thiscall
UMovieGraphConfig::UMovieGraphConfig(UMovieGraphConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConfig__6B_;
  (this->AllNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllNodes).ArrayNum = 0;
  (this->AllNodes).ArrayMax = 0;
  (this->InputNode).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
  (this->OutputNode).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = 0;
  (this->Variables).ArrayMax = 0;
  (this->GlobalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalVariables).ArrayNum = 0;
  (this->GlobalVariables).ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  return this;
}

// UMovieGraphConfig @ 14dc72af0

UMovieGraphConfig * __thiscall UMovieGraphConfig::UMovieGraphConfig(UMovieGraphConfig *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphNode *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieGraphConfig__6B_;
  (this->AllNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllNodes).ArrayNum = 0;
  (this->AllNodes).ArrayMax = 0;
  (this->InputNode).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
  (this->OutputNode).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = 0;
  (this->Variables).ArrayMax = 0;
  (this->GlobalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalVariables).ArrayNum = 0;
  (this->GlobalVariables).ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,L"DefaultInputNode");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UMovieGraphInputNode_NoRegister();
  pUVar4 = (UMovieGraphNode *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMovieGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->InputNode).field0_0x0.DebugPtr = pUVar4;
  pFVar2 = ::FName::FName(&local_res8,L"DefaultOutputNode");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UMovieGraphOutputNode_NoRegister();
  pUVar4 = (UMovieGraphNode *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMovieGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->OutputNode).field0_0x0.DebugPtr = pUVar4;
  if ((this->_padding_ & 0x1410) == 0) {
    AddDefaultMembers(this);
    UMovieGraphNode::UpdatePins((this->InputNode).field0_0x0.DebugPtr);
    UMovieGraphNode::UpdatePins((this->OutputNode).field0_0x0.DebugPtr);
  }
  return this;
}

// ~UMovieGraphConfig @ 14dc74400

void __thiscall UMovieGraphConfig::~UMovieGraphConfig(UMovieGraphConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConfig__6B_;
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GlobalVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Variables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dc75bb0

bool __thiscall
`UMovieGraphConfig::AddDefaultMembers'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphMember *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar1 = false;
  if (param_1 == (UMovieGraphMember *)0x0) {
LAB_14dc75c75:
    bVar4 = false;
  }
  else {
    local_10 = (param_1->Name).Data.ArrayNum;
    lVar3 = (longlong)local_10;
    _Src = (param_1->Name).Data.AllocatorInstance.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar3 * 2);
    }
    if (local_10 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
      if (1 < local_10) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_18.Data,
                           (wchar_t *)
                           UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
        bVar4 = iVar2 == 0;
        goto LAB_14dc75c5b;
      }
    }
    else {
      bVar4 = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum + local_10 == 1;
LAB_14dc75c5b:
      bVar1 = true;
      if (!bVar4) goto LAB_14dc75c75;
    }
    bVar4 = true;
    bVar1 = true;
  }
  if ((bVar1) && (local_18.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data);
  }
  return bVar4;
}

// operator() @ 14dc75ca0

bool __thiscall
`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int iVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) && (param_2 != (UMovieGraphPin *)0x0)) {
    pTVar2 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)this;
    pFVar4 = ::FName::ToString(&(param_2->Properties).Label,&local_18);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(pTVar2,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (*(char *)((longlong)this + 8) != '\0') {
      return false;
    }
  }
  pUVar3 = Z_Construct_UClass_UMovieGraphOutputNode_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) && (param_2 != (UMovieGraphPin *)0x0)) {
    pTVar2 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)this;
    pFVar4 = ::FName::ToString(&(param_2->Properties).Label,&local_18);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(pTVar2,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 14dc75d90

bool __thiscall
`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UMovieGraphPin *pUVar6;
  UMovieGraphPin *pUVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  UMovieGraphNode *local_res10;
  
  if ((param_1 == (UMovieGraphNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("VisitedNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                         ,0x56c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((**(char **)((longlong)this + 8) == '\0') &&
     (pUVar6 = UMovieGraphNode::GetFirstConnectedOutputPin(param_1), pUVar6 != (UMovieGraphPin *)0x0
     )) {
    pFVar9 = (pUVar6->Edges).AllocatorInstance.Data;
    iVar2 = (pUVar6->Edges).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar6->Edges).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      pUVar7 = UMovieGraphEdge::GetOtherPin(*(UMovieGraphEdge **)pFVar9,pUVar6,true);
      if ((pUVar7 != (UMovieGraphPin *)0x0) && ((pUVar7->Properties).Label == **(FName **)this)) {
        **(undefined1 **)((longlong)this + 8) = 1;
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  pcVar8 = *(char **)((longlong)this + 8);
  if (*pcVar8 != '\0') {
    if (((param_1->InputPins).ArrayNum == 0) ||
       (param_1 == *(UMovieGraphNode **)((longlong)this + 0x18))) {
      *pcVar8 = '\0';
    }
    else {
      if (*(char *)((longlong)this + 0x20) == '\0') {
        iVar2 = *(int *)(*(longlong *)((longlong)this + 0x28) + 0x38);
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
           (*(longlong *)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            *(longlong *)((longlong)this + 0x28) + 0x30)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      else {
        bVar4 = param_1->_padding_ == *(longlong *)((longlong)this + 0x28);
      }
      if (bVar4) {
        local_res10 = param_1;
        TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMovieGraphNode_*>
                  (*(TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> **)
                    ((longlong)this + 0x10),&local_res10);
        return (bool)**(undefined1 **)((longlong)this + 8);
      }
    }
    pcVar8 = *(char **)((longlong)this + 8);
  }
  return (bool)*pcVar8;
}

// operator() @ 14dc75ef0

bool __thiscall
`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphNode *param_1,UMovieGraphPin *param_2)

{
  int iVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) && (param_2 != (UMovieGraphPin *)0x0)) {
    pTVar2 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)this;
    pFVar4 = ::FName::ToString(&(param_2->Properties).Label,&local_18);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(pTVar2,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (*(char *)((longlong)this + 8) != '\0') {
      return false;
    }
  }
  pUVar3 = Z_Construct_UClass_UMovieGraphInputNode_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) && (param_2 != (UMovieGraphPin *)0x0)) {
    pTVar2 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)this;
    pFVar4 = ::FName::ToString(&(param_2->Properties).Label,&local_18);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(pTVar2,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 14dc75fe0

bool __thiscall
`UMovieGraphConfig::MoveCategoryBefore'::__l2::<lambda_1>::operator()
          (void *this,UMovieGraphVariable *param_1,FString *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FString *pFVar4;
  bool bVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  if (param_1 == (UMovieGraphVariable *)0x0) {
    return false;
  }
  pFVar4 = ::FString::FString(&local_38,param_2);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar4);
  local_58.ArrayNum = 1;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_58.AllocatorInstance,1,&local_58.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_58.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_48,L"{0}|",&local_58);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FStringFormatArg *)local_58.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  iVar3 = (param_1->Category).Data.ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Category).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
      goto LAB_14dc760f9;
    }
  }
  else {
    bVar5 = iVar3 + iVar1 == 1;
LAB_14dc760f9:
    if (!bVar5) {
      iVar3 = local_48.Data.ArrayNum + -1;
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        iVar3 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      bVar5 = ::FString::StartsWith(&param_1->Category,(wchar_t *)FVar2.Data,iVar3,IgnoreCase);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dc76135;
      }
    }
  }
  bVar5 = true;
LAB_14dc76135:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// operator() @ 14dc76790

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)(*(longlong *)((longlong)this + 8) + 0x50));
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset(*(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            **)((longlong)this + 8));
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  puVar2 = *(undefined8 **)this;
  *puVar2 = *puVar1;
  ::FString::operator=((FString *)(puVar2 + 1),(FString *)(puVar1 + 1));
  ::FString::operator=((FString *)(puVar2 + 3),(FString *)(puVar1 + 3));
  ::FString::operator=((FString *)(puVar2 + 5),(FString *)(puVar1 + 5));
  ::FString::operator=((FString *)(puVar2 + 7),(FString *)(puVar1 + 7));
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper
            (&local_18,param_1,*(FMovieGraphFilenameResolveParams **)this,false,
             *(FMovieGraphResolveArgs **)((longlong)this + 8));
  if (param_1 != &local_18) {
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14dc76880

bool __thiscall
`UMovieGraphConfig::AddDefaultMembers'::__l2::<lambda_2>::operator()
          (void *this,UMovieGraphMember *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  bVar1 = false;
  if (param_1 == (UMovieGraphMember *)0x0) {
LAB_14dc76945:
    bVar4 = false;
  }
  else {
    local_10 = (param_1->Name).Data.ArrayNum;
    lVar3 = (longlong)local_10;
    _Src = (param_1->Name).Data.AllocatorInstance.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar3 * 2);
    }
    if (local_10 == UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum) {
      if (1 < local_10) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_18.Data,
                           (wchar_t *)
                           UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data);
        bVar4 = iVar2 == 0;
        goto LAB_14dc7692b;
      }
    }
    else {
      bVar4 = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum + local_10 == 1;
LAB_14dc7692b:
      bVar1 = true;
      if (!bVar4) goto LAB_14dc76945;
    }
    bVar4 = true;
    bVar1 = true;
  }
  if ((bVar1) && (local_18.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data);
  }
  return bVar4;
}

// AddDefaultMembers @ 14dc77950

void __thiscall UMovieGraphConfig::AddDefaultMembers(UMovieGraphConfig *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FText *pFVar3;
  UMovieGraphInput *pUVar4;
  UMovieGraphOutput *pUVar5;
  TObjectPtr<UMovieGraphGlobalVariable> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FName local_res8;
  
  pFVar7 = (this->Inputs).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)(this->Inputs).ArrayNum * 8;
  while ((pFVar8 = (FScriptContainerElement *)0x0, pFVar7 != pFVar1 &&
         (bVar2 = `UMovieGraphConfig::AddDefaultMembers'::__l2::<lambda_1>::operator()
                            (&local_res8,*(UMovieGraphMember **)pFVar7), pFVar8 = pFVar7, !bVar2)))
  {
    pFVar7 = pFVar7 + 8;
  }
  pFVar7 = (this->Outputs).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)(this->Outputs).ArrayNum * 8;
  while ((pFVar9 = (FScriptContainerElement *)0x0, pFVar7 != pFVar1 &&
         (bVar2 = `UMovieGraphConfig::AddDefaultMembers'::__l2::<lambda_2>::operator()
                            (&local_res8,*(UMovieGraphMember **)pFVar7), pFVar9 = pFVar7, !bVar2)))
  {
    pFVar7 = pFVar7 + 8;
  }
  if (pFVar8 == (FScriptContainerElement *)0x0) {
    pFVar3 = FText::GetEmpty();
    pUVar4 = AddInput(this,pFVar3);
    iVar10 = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum + -1;
    if (UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange
              ((FString *)&pUVar4->field_0x50,
               (wchar_t *)UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data,iVar10);
    UMovieGraphNode::UpdatePins((this->InputNode).field0_0x0.DebugPtr);
  }
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    pFVar3 = FText::GetEmpty();
    pUVar5 = AddOutput(this,pFVar3);
    iVar10 = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum + -1;
    if (UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange
              ((FString *)&pUVar5->field_0x50,
               (wchar_t *)UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data,iVar10);
    UMovieGraphNode::UpdatePins((this->OutputNode).field0_0x0.DebugPtr);
  }
  pTVar6 = TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_CameraName>_::__l2::<lambda_1>_>
                     (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (pTVar6 == (TObjectPtr<UMovieGraphGlobalVariable> *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable>
              (this,&this->GlobalVariables,&local_res8);
  }
  pTVar6 = TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_FrameNumber>_::__l2::<lambda_1>_>
                     (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (pTVar6 == (TObjectPtr<UMovieGraphGlobalVariable> *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable>
              (this,&this->GlobalVariables,&local_res8);
  }
  pTVar6 = TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_SequenceName>_::__l2::<lambda_1>_>
                     (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (pTVar6 == (TObjectPtr<UMovieGraphGlobalVariable> *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable>
              (this,&this->GlobalVariables,&local_res8);
  }
  pTVar6 = TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_ShotName>_::__l2::<lambda_1>_>
                     (&this->GlobalVariables,local_res8.ComparisonIndex.Value._0_1_);
  if (pTVar6 == (TObjectPtr<UMovieGraphGlobalVariable> *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable>
              (this,&this->GlobalVariables,&local_res8);
  }
  return;
}

// AddInput @ 14dc77b10

UMovieGraphInput * __thiscall UMovieGraphConfig::AddInput(UMovieGraphConfig *this,FText *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FName *pFVar3;
  UMovieGraphInput *pUVar4;
  wchar_t *pwVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&InputBaseName,L"MovieGraphConfig",L"InputBaseName",L"Input");
      atexit(`UMovieGraphConfig::AddInput'::__l2::_dynamic_atexit_destructor_for__InputBaseName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FText::IsEmpty(param_1);
  pFVar6 = &InputBaseName;
  if (!bVar1) {
    pFVar6 = param_1;
  }
  local_18.TextData.Reference = (pFVar6->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,&local_res8);
  }
  local_18.Flags = pFVar6->Flags;
  pFVar2 = FText::ToString(&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar5);
  pUVar4 = AddMember<UMovieGraphInput,UMovieGraphInput>(this,&this->Inputs,pFVar3);
  UMovieGraphNode::UpdatePins((this->InputNode).field0_0x0.DebugPtr);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return pUVar4;
}

// AddLabeledEdge @ 14dc77c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::AddLabeledEdge
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,FName *param_2,UMovieGraphNode *param_3,
          FName *param_4)

{
  bool bVar1;
  int iVar2;
  UMovieGraphPin *this_00;
  UMovieGraphPin *this_01;
  ForAnyElementType FVar3;
  bool bVar4;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1 == (UMovieGraphNode *)0x0) || (param_3 == (UMovieGraphNode *)0x0)) {
    ::FString::PrintfImpl(&local_58,L"%hs: Invalid Edge Nodes");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar3.Data = local_58.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
    local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    this_00 = UMovieGraphNode::GetOutputPin(param_1,param_2);
    if (this_00 == (UMovieGraphPin *)0x0) {
      ::FName::ToString(param_2,&local_58);
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_68);
      ::FString::PrintfImpl(&local_78,L"%hs: FromNode: %s does not have a pin with the label: %s");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar3.Data = local_78.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
    else {
      this_01 = UMovieGraphNode::GetInputPin(param_3,param_4,BuiltInOrDynamic);
      if (this_01 == (UMovieGraphPin *)0x0) {
        ::FName::ToString(param_4,&local_58);
        local_res10 = (FName)param_3->_padding_;
        ::FName::ToString(&local_res10,&local_78);
        ::FString::PrintfImpl(&local_68,L"%hs: ToNode: %s does not have a pin with the label: %s");
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar3.Data = local_68.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
      else {
        bVar1 = UMovieGraphPin::CanCreateConnection(this_00,this_01);
        if (bVar1) {
          bVar4 = false;
          bVar1 = UMovieGraphPin::AllowsMultipleConnections(this_01);
          if ((!bVar1) && (iVar2 = UMovieGraphPin::EdgeCount(this_01), 0 < iVar2)) {
            UMovieGraphPin::BreakAllEdges(this_01);
            bVar4 = true;
          }
          UMovieGraphPin::AddEdgeTo(this_00,this_01);
          return bVar4;
        }
        ::FName::ToString(param_4,&local_38);
        local_res10 = (FName)param_3->_padding_;
        ::FName::ToString(&local_res10,&local_58);
        ::FName::ToString(param_2,&local_48);
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_78);
        ::FString::PrintfImpl
                  (&local_68,
                   L"%hs: FromNode %s\'s pin %s cannot be connected to ToNode %s\'s pin %s ");
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar3.Data = local_68.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// AddNode @ 14dc77f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphConfig::AddNode(UMovieGraphConfig *this,UMovieGraphNode *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FName local_res10 [3];
  UMovieGraphNode *local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_40,L"%hs: No node was specified for add.");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar7.Data = local_40.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Error,(FName)0x0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    cVar4 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    if (cVar4 == '\0') {
      local_res10[0] = *(FName *)(param_1->_padding_ + 0x18);
      ::FName::ToString(local_res10,&local_20);
      ::FString::PrintfImpl(&local_30,L"%hs:Cannot add node of type %s.");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_30.Data.ArrayNum != 0) {
        FVar7.Data = local_30.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Error,(FName)0x0);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
        return;
      }
    }
    else {
      UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Transactional);
      (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0);
      local_48 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar2 = (this->AllNodes).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->AllNodes).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->AllNodes).ArrayNum;
      piVar1 = &(this->AllNodes).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->AllNodes).AllocatorInstance,piVar1);
      }
      (this->AllNodes).ArrayNum = iVar6 + 1;
      *(UMovieGraphNode **)((this->AllNodes).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_48 != (UMovieGraphNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_48);
      }
    }
  }
  return;
}

// AddOutput @ 14dc781c0

UMovieGraphOutput * __thiscall UMovieGraphConfig::AddOutput(UMovieGraphConfig *this,FText *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FName *pFVar3;
  UMovieGraphOutput *pUVar4;
  wchar_t *pwVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&OutputBaseName,L"MovieGraphConfig",L"OutputBaseName",L"Output");
      atexit(`UMovieGraphConfig::AddOutput'::__l2::_dynamic_atexit_destructor_for__OutputBaseName__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FText::IsEmpty(param_1);
  pFVar6 = &OutputBaseName;
  if (!bVar1) {
    pFVar6 = param_1;
  }
  local_18.TextData.Reference = (pFVar6->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,&local_res8);
  }
  local_18.Flags = pFVar6->Flags;
  pFVar2 = FText::ToString(&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar5);
  pUVar4 = AddMember<UMovieGraphOutput,UMovieGraphOutput>(this,&this->Outputs,pFVar3);
  UMovieGraphNode::UpdatePins((this->OutputNode).field0_0x0.DebugPtr);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return pUVar4;
}

// AddVariable @ 14dc782f0

UMovieGraphVariable * __thiscall
UMovieGraphConfig::AddVariable(UMovieGraphConfig *this,FName param_1)

{
  FString *pFVar1;
  FName *pFVar2;
  UMovieGraphVariable *pUVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&VariableBaseName,L"MovieGraphConfig",L"VariableBaseName",L"Variable");
      atexit(`UMovieGraphConfig::AddVariable'::__l2::
             _dynamic_atexit_destructor_for__VariableBaseName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1 == (FName)0x0) {
    pFVar1 = FText::ToString(&VariableBaseName);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res10,pwVar4);
  }
  else {
    pFVar2 = &local_res8;
    local_res8 = param_1;
  }
  pUVar3 = AddMember<UMovieGraphVariable,UMovieGraphVariable>(this,&this->Variables,pFVar2);
  return pUVar3;
}

// CopyOverriddenProperties @ 14dc78cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphConfig::CopyOverriddenProperties
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,UMovieGraphNode *param_2,
          FMovieGraphEvaluationContext *param_3)

{
  int iVar1;
  FProperty *this_00;
  UMovieGraphNode *pUVar2;
  code *pcVar3;
  FFeedbackContext *pFVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  FBoolProperty *pFVar9;
  UClass *pUVar10;
  TObjectPtr<UMovieGraphPin>_u_0 TVar11;
  void *pvVar12;
  UObjectBaseUtility *pUVar13;
  UClass *pUVar14;
  void *pvVar15;
  ulonglong uVar16;
  longlong lVar17;
  FName *pFVar18;
  FScriptContainerElement *pFVar19;
  FName *pFVar20;
  FProperty *this_01;
  longlong lVar21;
  ForAnyElementType FVar22;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  FName local_260;
  UMovieGraphNode *local_258;
  UMovieGraphNode *local_250;
  FScriptContainerElement *local_248;
  FString local_240;
  uint local_230;
  FScriptContainerElement *local_228;
  FString local_220;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_210;
  FMovieGraphEvaluationContext *local_200;
  FMovieGraphPropertyInfo *local_1f8;
  int local_1f0;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_1e8;
  void *local_1d8 [2];
  FMovieGraphEvaluationContext local_1c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_258 = param_2;
  local_250 = param_1;
  local_200 = param_3;
  if ((param_1 == (UMovieGraphNode *)0x0) || (param_2 == (UMovieGraphNode *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4571739335061145243>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                       ,0x69b,"FromNode && ToNode");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->_padding_ != param_2->_padding_) {
    local_268 = 0;
    bVar5 = `UMovieGraphConfig::CopyOverriddenProperties'::__l6::<lambda_1>::operator()(&local_268);
    if (!bVar5) {
      return;
    }
  }
  UMovieGraphNode::GetAllOverrideableProperties(param_2,&local_210);
  uVar16 = (ulonglong)local_210.ArrayNum;
  local_230 = local_210.ArrayNum;
  local_248 = local_210.AllocatorInstance.Data + uVar16 * 8;
  pFVar19 = local_248;
  FVar22.Data = local_210.AllocatorInstance.Data;
LAB_14dc78d84:
  local_228 = FVar22.Data;
  if (local_210.ArrayNum != (uint)uVar16) {
    local_267[0] = 0;
    `TCheckedPointerIterator<FProperty_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_267);
  }
  if (FVar22.Data == pFVar19) {
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    return;
  }
  this_00 = *(FProperty **)FVar22.Data;
  if (this_00 != (FProperty *)0x0) {
    bVar5 = IsThisNotNull(this_00,"FField::GetFName");
    if (bVar5) {
      local_260 = (FName)this_00->_padding_;
    }
    else {
      local_260.ComparisonIndex.Value = 0;
      local_260.Number = 0;
    }
    plVar8 = (longlong *)(**(code **)(param_2->_padding_ + 0x2d0))(param_2,local_1d8);
    lVar21 = *plVar8;
    lVar17 = (longlong)(int)plVar8[1] * 0x40 + lVar21;
    for (; lVar21 != lVar17; lVar21 = lVar21 + 0x40) {
      if (*(FName *)(lVar21 + 0x18) == local_260) goto LAB_14dc78e12;
    }
    lVar21 = 0;
LAB_14dc78e12:
    if (local_1d8[0] != (void *)0x0) {
      FMemory::Free(local_1d8[0]);
    }
    plVar8 = (longlong *)(**(code **)(param_1->_padding_ + 0x2e8))(param_1,&local_1f8);
    pFVar20 = (FName *)*plVar8;
    pFVar18 = pFVar20 + (longlong)(int)plVar8[1] * 7;
    for (; pFVar20 != pFVar18; pFVar20 = pFVar20 + 7) {
      if (*pFVar20 == local_260) goto LAB_14dc78e58;
    }
    pFVar20 = (FName *)0x0;
LAB_14dc78e58:
    DestructItems<FMovieGraphPropertyInfo,int>(local_1f8,local_1f0);
    if (local_1f8 != (FMovieGraphPropertyInfo *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (lVar21 == 0) {
      pFVar9 = FindOverridePropertyForRealProperty((UClass *)param_2->_padding_,this_00);
    }
    else {
      pFVar9 = UMovieGraphNode::FindOverridePropertyForDynamicProperty(param_2,&local_260);
    }
    if (pFVar9 == (FBoolProperty *)0x0) {
      FVar22.Data = local_228 + 8;
      uVar16 = (ulonglong)local_230;
      param_2 = local_258;
      param_1 = local_250;
      goto LAB_14dc78d84;
    }
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x10 & 1) == 0) {
      this_01 = (FProperty *)0x0;
LAB_14dc78ecf:
      bVar5 = false;
    }
    else {
      pUVar14 = (UClass *)this_00[1]._padding_;
      pUVar10 = UMovieGraphTraversableObject::StaticClass();
      bVar5 = UClass::ImplementsInterface(pUVar14,pUVar10);
      this_01 = this_00;
      if (!bVar5) goto LAB_14dc78ecf;
      bVar5 = true;
    }
    if (lVar21 == 0) {
      if (((int)pFVar9->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = local_258;
      iVar1 = *(int *)((longlong)&pFVar9->_padding_ + 4);
      if ((pFVar9->FieldSize == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa4b,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((pFVar9->FieldMask &
           *(byte *)((longlong)&pUVar2->_padding_ + (ulonglong)pFVar9->ByteOffset + (longlong)iVar1)
           ) == 0) || (pFVar19 = local_248, param_2 = local_258, param_1 = local_250, bVar5))
      goto LAB_14dc78f92;
      goto LAB_14dc78efd;
    }
    bVar6 = UMovieGraphNode::IsDynamicPropertyOverridden(local_258,&local_260);
    pFVar19 = local_248;
    param_2 = local_258;
    param_1 = local_250;
    if (bVar6) goto LAB_14dc78efd;
LAB_14dc78f92:
    param_1 = local_250;
    if ((pFVar20 != (FName *)0x0) &&
       (TVar11.DebugPtr = UMovieGraphNode::GetInputPin(local_250,&local_260,BuiltInOrDynamic),
       TVar11.DebugPtr != (UMovieGraphPin *)0x0)) {
      FMovieGraphEvaluationContext::FMovieGraphEvaluationContext(&local_1c8,local_200);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
      }
      pUVar2 = ((TVar11.DebugPtr)->Node).field0_0x0.DebugPtr;
      local_1c8.PinBeingFollowed.field0_0x0 =
           (TObjectPtr<UMovieGraphPin>_u_0)(TObjectPtr<UMovieGraphPin>_u_0)TVar11.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2,&local_1e8,&local_1c8);
      local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.Data.ArrayNum = 0;
      local_240.Data.ArrayMax = 0;
      bVar6 = UE::MovieGraph::ResolveConnectedPinValue
                        (TVar11.DebugPtr,&local_1e8,&local_1c8,&local_240);
      param_2 = local_258;
      pFVar4 = GWarn;
      if (!bVar6) {
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
        FMovieGraphEvaluationContext::~FMovieGraphEvaluationContext(&local_1c8);
        goto LAB_14dc791a9;
      }
      if (lVar21 == 0) {
        pvVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)local_258,0);
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_240.Data.ArrayNum != 0) {
          FVar22.Data = local_240.Data.AllocatorInstance.Data;
        }
        bVar5 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)pFVar4);
        if ((bVar5) && (FVar22.Data != (FScriptContainerElement *)0x0)) {
          (**(code **)(this_00->_padding_ + 0xe8))(this_00,FVar22.Data,pvVar12,0);
        }
        if (((int)pFVar9->_padding_ < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)((longlong)&pFVar9->_padding_ + 4);
        if ((pFVar9->FieldSize == '\0') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldSize != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0xa61,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(byte *)((longlong)&param_2->_padding_ + (ulonglong)pFVar9->ByteOffset + (longlong)iVar1) =
             ~pFVar9->FieldMask &
             *(byte *)((longlong)&param_2->_padding_ +
                      (ulonglong)pFVar9->ByteOffset + (longlong)iVar1) | pFVar9->ByteMask;
        param_1 = local_250;
      }
      else {
        UMovieGraphNode::SetDynamicPropertyValue(local_258,local_260,&local_240);
        UMovieGraphNode::SetDynamicPropertyOverridden(param_2,&local_260,true);
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.AllocatorInstance.Data);
      }
      FMovieGraphEvaluationContext::~FMovieGraphEvaluationContext(&local_1c8);
      FVar22.Data = local_228 + 8;
      uVar16 = (ulonglong)local_230;
      pFVar19 = local_248;
      goto LAB_14dc78d84;
    }
LAB_14dc791a9:
    if (lVar21 == 0) {
      if (((int)pFVar9->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)((longlong)&pFVar9->_padding_ + 4);
      if ((pFVar9->FieldSize == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa4b,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar6 = (pFVar9->FieldMask &
              *(byte *)((longlong)&param_1->_padding_ +
                       (ulonglong)pFVar9->ByteOffset + (longlong)iVar1)) != 0;
    }
    else {
      bVar6 = UMovieGraphNode::IsDynamicPropertyOverridden(param_1,&local_260);
    }
    param_2 = local_258;
    if (bVar6 == false) {
      FVar22.Data = local_228 + 8;
      uVar16 = (ulonglong)local_230;
      pFVar19 = local_248;
      goto LAB_14dc78d84;
    }
    if (lVar21 == 0) {
      if (((int)pFVar9->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = local_258;
      iVar1 = *(int *)((longlong)&pFVar9->_padding_ + 4);
      if ((pFVar9->FieldSize == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa61,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(byte *)((longlong)&pUVar2->_padding_ + (ulonglong)pFVar9->ByteOffset + (longlong)iVar1) =
           ~pFVar9->FieldMask &
           *(byte *)((longlong)&pUVar2->_padding_ + (ulonglong)pFVar9->ByteOffset + (longlong)iVar1)
           | pFVar9->ByteMask;
      param_2 = local_258;
    }
    else {
      UMovieGraphNode::SetDynamicPropertyOverridden(local_258,&local_260,true);
    }
    if (bVar5) {
      pcVar3 = *(code **)(this_01->_padding_ + 0x1f8);
      pvVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_01,(UObject *)param_1,0);
      pUVar13 = (UObjectBaseUtility *)(*pcVar3)(this_01,pvVar12);
      if (pUVar13 == (UObjectBaseUtility *)0x0) {
        pvVar12 = (void *)0x0;
      }
      else {
        pUVar14 = UMovieGraphTraversableObject::StaticClass();
        pvVar12 = UObjectBaseUtility::GetInterfaceAddress(pUVar13,pUVar14);
      }
      pcVar3 = *(code **)(this_01->_padding_ + 0x1f8);
      pvVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_01,(UObject *)param_2,0);
      pUVar13 = (UObjectBaseUtility *)(*pcVar3)(this_01,pvVar15);
      param_1 = local_250;
      if (pUVar13 != (UObjectBaseUtility *)0x0) {
        pUVar14 = UMovieGraphTraversableObject::StaticClass();
        plVar8 = UObjectBaseUtility::GetInterfaceAddress(pUVar13,pUVar14);
        param_1 = local_250;
        if ((plVar8 != (longlong *)0x0) && (pvVar12 != (void *)0x0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8,pvVar12);
          pFVar19 = local_248;
          param_1 = local_250;
          goto LAB_14dc78efd;
        }
      }
    }
    if (lVar21 == 0) {
      if ((this_00->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar12 = (void *)((longlong)&param_1->_padding_ + (longlong)this_00->Offset_Internal);
      if ((this_00->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar15 = (void *)((longlong)&param_2->_padding_ + (longlong)this_00->Offset_Internal);
      pFVar19 = local_248;
      if (pvVar15 == pvVar12) goto LAB_14dc78efd;
      if (((uint)(int)this_00->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(this_00->_padding_ + 0xf0))(this_00,pvVar15,pvVar12,this_00->ArrayDim);
        FVar22.Data = local_228 + 8;
        uVar16 = (ulonglong)local_230;
        pFVar19 = local_248;
      }
      else {
        memcpy(pvVar15,pvVar12,(longlong)this_00->ElementSize * (longlong)this_00->ArrayDim);
        FVar22.Data = local_228 + 8;
        uVar16 = (ulonglong)local_230;
        pFVar19 = local_248;
      }
      goto LAB_14dc78d84;
    }
    local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.Data.ArrayNum = 0;
    local_220.Data.ArrayMax = 0;
    cVar7 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1,local_260);
    if (cVar7 != '\0') {
      UMovieGraphNode::SetDynamicPropertyValue(param_2,local_260,&local_220);
    }
    pFVar19 = local_248;
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
      FVar22.Data = local_228 + 8;
      uVar16 = (ulonglong)local_230;
      pFVar19 = local_248;
      goto LAB_14dc78d84;
    }
  }
LAB_14dc78efd:
  uVar16 = (ulonglong)local_230;
  FVar22.Data = local_228 + 8;
  goto LAB_14dc78d84;
}

// CreateFlattenedGraph_Recursive @ 14dc7be90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::CreateFlattenedGraph_Recursive
          (UMovieGraphConfig *this,UMovieGraphEvaluatedConfig *param_1,
          FMovieGraphEvaluatedBranchConfig *param_2,FMovieGraphEvaluationContext *param_3,
          UMovieGraphPin *param_4)

{
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  TObjectPtr<UMovieGraphNode>_u_0 TVar6;
  FScriptContainerElement *pFVar7;
  UMovieGraphNode *pUVar8;
  UObject *pUVar9;
  UMovieGraphPin *pUVar10;
  UMovieGraphEdge *this_00;
  undefined1 *puVar11;
  code *pcVar12;
  FProperty *pFVar13;
  FMovieGraphEvaluationContext *pFVar14;
  undefined8 *puVar15;
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  int iVar20;
  FText *pFVar21;
  UClass *pUVar22;
  longlong lVar23;
  UMovieGraphNode *pUVar24;
  UClass *pUVar25;
  FMovieGraphEvaluatedSettingsStack *pFVar26;
  FBoolProperty *pFVar27;
  UMovieGraphConfig *pUVar28;
  FText *pFVar29;
  FTextFormat *pFVar30;
  UMovieGraphPin *pUVar31;
  FString *pFVar32;
  uint uVar33;
  longlong lVar34;
  longlong *plVar35;
  ulonglong uVar36;
  ForAnyElementType FVar37;
  wchar_t *pwVar38;
  ulonglong uVar39;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 TVar40;
  FScriptContainerElement *pFVar41;
  TArray<TSubclassOf<UMovieGraphSettingNode>,TSizedDefaultAllocator<32>_> *pTVar42;
  wchar_t *pwVar43;
  uint uVar44;
  int iVar45;
  undefined1 *puVar46;
  uint *puVar47;
  undefined8 *puVar48;
  undefined1 auStackY_3c8 [32];
  undefined1 local_377;
  undefined1 local_376;
  undefined1 local_375;
  undefined1 local_374;
  undefined1 local_373 [3];
  UMovieGraphNode *local_370;
  FMovieGraphEvaluationContext *local_368;
  TFieldIterator<FProperty> local_360;
  int local_348;
  uint local_344;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 local_340;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 local_338;
  FMovieGraphEvaluatedBranchConfig *local_330;
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *local_328;
  FString local_320;
  undefined8 local_310;
  undefined8 local_308;
  UMovieGraphConfig *local_300;
  FString local_2f8;
  FString local_2e8;
  undefined8 *local_2d8;
  uint local_2d0;
  FName local_2c8;
  TObjectPtr<UMovieGraphNode>_u_0 local_2c0;
  UMovieGraphEvaluatedConfig *local_2b8;
  undefined8 *local_2b0;
  FName local_2a8;
  TObjectPtr<UClass>_u_0 local_2a0;
  TObjectPtr<UMovieGraphNode> local_298;
  TObjectPtr<UMovieGraphConfig_const_>_u_0 *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  TObjectPtr<UMovieGraphNode>_u_0 local_248;
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  FText local_1e0;
  FText local_1d0;
  FText local_1c0;
  FText local_1b0;
  FText local_1a0;
  FText local_190;
  FText local_180;
  FText local_170;
  FString local_160;
  FString local_150;
  FText local_140;
  FTextFormat local_130;
  FText local_120;
  FTextFormat local_110 [2];
  undefined4 local_e4;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_368 = param_3;
  local_330 = param_2;
  local_300 = this;
  local_2b8 = param_1;
  if (param_4 == (UMovieGraphPin *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_180,L"MovieGraphConfig",L"TraversalError_InvalidPin",
                         L"Found an invalid pin during graph traversal.");
    FText::operator=(&param_3->TraversalError,pFVar21);
LAB_14dc7bfad:
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
    return false;
  }
  TVar6 = (TObjectPtr<UMovieGraphNode>_u_0)(param_4->Node).field0_0x0.DebugPtr;
  if (TVar6.DebugPtr == (UMovieGraphNode *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_170,L"MovieGraphConfig",L"TraversalError_InvalidNode",
                         L"Found an invalid node during graph traversal.");
    FText::operator=(&param_3->TraversalError,pFVar21);
    local_180.TextData.Reference = local_170.TextData.Reference;
    goto LAB_14dc7bfad;
  }
  if ((param_4->Properties).bIsBranch == false) {
    local_377 = 0;
    bVar17 = `UMovieGraphConfig::CreateFlattenedGraph_Recursive'::__l9::<lambda_1>::operator()
                       (&local_377);
    if (!bVar17) {
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_1e0,L"MovieGraphConfig",L"TraversalError_NonBranchPin",
                           L"Attempting to follow a non-branch pin during graph traversal.");
      FText::operator=(&param_3->TraversalError,pFVar21);
      local_180.TextData.Reference = local_1e0.TextData.Reference;
      goto LAB_14dc7bfad;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  (param_3->PinBeingFollowed).field0_0x0.DebugPtr = param_4;
  pUVar22 = StaticClass();
  local_338.DebugPtr =
       (UMovieGraphConfig *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_4,pUVar22)
  ;
  if ((local_338.DebugPtr == (UMovieGraphConfig *)0x0) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4571739335061145418>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                          ,0x74a,"OwningGraph"), bVar17)) {
    pcVar12 = (code *)swi(3);
    uVar18 = (*pcVar12)();
    return (bool)uVar18;
  }
  TVar40 = local_338;
  local_340 = local_338;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_338.DebugPtr != (UMovieGraphConfig *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_338.DebugPtr);
    }
    TVar40 = local_340;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_340.DebugPtr != (UMovieGraphConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_340.DebugPtr);
    }
  }
  uVar33 = ((uint)((ulonglong)TVar40.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar40.DebugPtr >> 4)) * -0x7a143595;
  uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
  uVar33 = uVar33 >> 0x10 ^ uVar33;
  iVar20 = TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TObjectPtr<UMovieGraphConfig_const_>_>
                     ((TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
                       *)&param_3->VisitedNodesByOwningGraph,uVar33,
                      (TObjectPtr<UMovieGraphConfig_const_> *)&local_340.ObjectPtr);
  if ((iVar20 == -1) ||
     (lVar34 = (longlong)iVar20 * 0x60 + *(longlong *)&param_3->VisitedNodesByOwningGraph,
     lVar34 == 0)) {
    local_290 = &local_340;
    TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&>_>
              ((TSet<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo,0>,FDefaultSetAllocator>
                *)&param_3->VisitedNodesByOwningGraph,(uint)&local_348,
               (TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&> *)(ulonglong)uVar33,
               (bool *)&local_290);
    lVar34 = (longlong)local_348 * 0x60 + *(longlong *)&param_3->VisitedNodesByOwningGraph;
  }
  pTVar1 = (TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
            *)(lVar34 + 8);
  local_328 = pTVar1;
  local_248 = TVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
  }
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<UMovieGraphNode>_>(pTVar1,&local_298,(bool *)&local_248);
  TArray<UMovieGraphConfig_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UMovieGraphConfig_*_const_&>(&param_1->EvaluatedGraphs,&local_338.DebugPtr);
  pUVar22 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
  iVar20 = (int)pUVar22->_padding_;
  if (((iVar20 <= *(int *)((TVar6.DebugPtr)->_padding_ + 0x38)) &&
      ((longlong *)
       *(undefined1 **)(*(longlong *)((TVar6.DebugPtr)->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
       &pUVar22->_padding_)) && (bVar17 = UMovieGraphNode::IsDisabled(TVar6.DebugPtr), !bVar17)) {
    pFVar41 = (param_3->NodeTypesToRemoveStack).AllocatorInstance.Data;
    lVar34 = (TVar6.DebugPtr)->_padding_;
    pFVar7 = pFVar41 + (longlong)(param_3->NodeTypesToRemoveStack).ArrayNum * 8;
    for (; pFVar41 != pFVar7; pFVar41 = pFVar41 + 8) {
      lVar23 = *(longlong *)pFVar41;
      if ((lVar23 == 0) ||
         (pUVar22 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister(), pUVar22 == (UClass *)0x0
         )) {
LAB_14dc7c1e3:
        lVar23 = 0;
      }
      else {
        iVar20 = (int)pUVar22->_padding_;
        if ((*(int *)(lVar23 + 0x38) < iVar20) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar22->_padding_)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (!bVar17) goto LAB_14dc7c1e3;
        lVar23 = *(longlong *)pFVar41;
      }
      if (lVar23 == lVar34) goto LAB_14dc7c58b;
    }
    bVar17 = UObjectBaseUtility::IsA<UMovieGraphRerouteNode>((UObjectBaseUtility *)TVar6.DebugPtr);
    if (!bVar17) {
      pUVar22 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
      iVar20 = (int)pUVar22->_padding_;
      if ((*(int *)((TVar6.DebugPtr)->_padding_ + 0x38) < iVar20) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar6.DebugPtr)->_padding_ + 0x30) + (longlong)iVar20 * 8)
          != &pUVar22->_padding_)) {
        pFVar32 = GetTypeName<UMovieGraphSettingNode>(&local_160);
        pwVar38 = L"";
        if ((pFVar32->Data).ArrayNum == 0) {
          pwVar43 = L"";
        }
        else {
          pwVar43 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
        }
        pFVar32 = GetFullNameForCastLogError<UMovieGraphNode>(&local_150,TVar6.DebugPtr);
        if ((pFVar32->Data).ArrayNum != 0) {
          pwVar38 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar38,pwVar43);
      }
      (**(code **)((TVar6.DebugPtr)->_padding_ + 0x348))(TVar6.DebugPtr,&local_320);
      local_2a0 = (TObjectPtr<UClass>_u_0)(TVar6.DebugPtr)->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_2a0.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_2a0.DebugPtr);
      }
      pUVar24 = FMovieGraphEvaluatedBranchConfig::GetNodeByClassExactMatch
                          (local_330,(TSubclassOf<UMovieGraphNode> *)&local_2a0.ObjectPtr,&local_320
                          );
      if (pUVar24 == (UMovieGraphNode *)0x0) {
LAB_14dc7c2a0:
        pUVar22 = (UClass *)(TVar6.DebugPtr)->_padding_;
        local_310 = 0;
        local_308 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)param_1,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar25 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
        CheckIsClassChildOf_Internal(pUVar25,pUVar22);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_d8,pUVar22);
        local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_d8._56_8_ = (UPackage *)0x0;
        local_d8._16_4_ = 0;
        local_d8._20_4_ = 0;
        local_d8._24_4_ = RF_NoFlags;
        local_d8._40_8_ = (UObject *)0x0;
        local_d8[0x20] = false;
        local_d8._8_8_ = param_1;
        pUVar24 = (UMovieGraphNode *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
        if (local_d8._64_8_ != 0) {
          plVar35 = (longlong *)(local_d8 + 0x50);
          if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
            plVar35 = (longlong *)local_d8._104_8_;
          }
          (**(code **)(*plVar35 + 0x10))();
        }
        pwVar38 = L"";
        if (local_320.Data.ArrayNum == 0) {
          local_320.Data.ArrayNum = 0;
        }
        else {
          local_320.Data.ArrayNum = local_320.Data.ArrayNum + -1;
          pwVar38 = (wchar_t *)local_320.Data.AllocatorInstance.Data;
        }
        uVar33 = FCrc::Strihash_DEPRECATED<wchar_t>(local_320.Data.ArrayNum,pwVar38);
        pFVar26 = TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
                              *)local_330,uVar33,&local_320);
        local_370 = pUVar24;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar24 != (UMovieGraphNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar24);
        }
        pFVar7 = (pFVar26->NodeInstances).AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_370) &&
            ((FScriptContainerElement *)&local_370 <
             pFVar7 + (longlong)(pFVar26->NodeInstances).ArrayMax * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          uVar18 = (*pcVar12)();
          return (bool)uVar18;
        }
        iVar20 = (pFVar26->NodeInstances).ArrayNum;
        piVar2 = &(pFVar26->NodeInstances).ArrayMax;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar26,piVar2);
        }
        (pFVar26->NodeInstances).ArrayNum = iVar20 + 1;
        *(UMovieGraphNode **)
         ((pFVar26->NodeInstances).AllocatorInstance.Data + (longlong)iVar20 * 8) = local_370;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_370 != (UMovieGraphNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_370);
        }
        (**(code **)(pUVar24->_padding_ + 0x350))(pUVar24,TVar6.DebugPtr);
        local_360.Struct = (UStruct *)pUVar24->_padding_;
        if (local_360.Struct == (UStruct *)0x0) {
          local_360.Field = (FField *)0x0;
        }
        else {
          local_360.Field = (local_360.Struct)->ChildProperties;
        }
        local_360.InterfaceIndex = -1;
        local_360.bIncludeSuper = true;
        local_360.bIncludeDeprecated = true;
        local_360.bIncludeInterface = false;
        TFieldIterator<FProperty>::IterateToNext(&local_360);
        pFVar13 = (FProperty *)local_360.Field;
        while (local_360.Field = (FField *)pFVar13, pFVar13 != (FProperty *)0x0) {
          pFVar27 = FindOverridePropertyForRealProperty((UClass *)pUVar24->_padding_,pFVar13);
          if (pFVar27 != (FBoolProperty *)0x0) {
            if (((int)pFVar27->_padding_ < 1) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar17)) {
              pcVar12 = (code *)swi(3);
              uVar18 = (*pcVar12)();
              return (bool)uVar18;
            }
            iVar20 = *(int *)((longlong)&pFVar27->_padding_ + 4);
            if ((pFVar27->FieldSize == '\0') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FieldSize != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0xa61,L""), bVar17)) {
              pcVar12 = (code *)swi(3);
              uVar18 = (*pcVar12)();
              return (bool)uVar18;
            }
            pbVar4 = (byte *)((longlong)&pUVar24->_padding_ +
                             (ulonglong)pFVar27->ByteOffset + (longlong)iVar20);
            *pbVar4 = *pbVar4 & ~pFVar27->FieldMask;
          }
          local_360.Field = (FField *)pFVar13->_padding_;
          TFieldIterator<FProperty>::IterateToNext(&local_360);
          pFVar13 = (FProperty *)local_360.Field;
        }
        UMovieGraphNode::UpdateDynamicProperties(pUVar24);
      }
      else {
        pUVar22 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
        iVar20 = (int)pUVar22->_padding_;
        if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar22->_padding_)) goto LAB_14dc7c2a0;
      }
      CopyOverriddenProperties(local_300,TVar6.DebugPtr,pUVar24,param_3);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14dc7c58b:
  pUVar22 = Z_Construct_UClass_UMovieGraphRemoveRenderSettingNode_NoRegister();
  iVar20 = (int)pUVar22->_padding_;
  if ((((*(int *)((TVar6.DebugPtr)->_padding_ + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar6.DebugPtr)->_padding_ + 0x30) + (longlong)iVar20 * 8)
        != &pUVar22->_padding_)) || (bVar17 = UMovieGraphNode::IsDisabled(TVar6.DebugPtr), bVar17))
     || ((lVar34 = TVar6.DebugPtr[1]._padding_, lVar34 == 0 ||
         (pUVar22 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister(), pUVar22 == (UClass *)0x0
         )))) {
LAB_14dc7c6cb:
    bVar17 = false;
  }
  else {
    iVar20 = (int)pUVar22->_padding_;
    if ((*(int *)(lVar34 + 0x38) < iVar20) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar22->_padding_)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((!bVar17) || (TVar6.DebugPtr[1]._padding_ == 0)) goto LAB_14dc7c6cb;
    pTVar42 = &param_3->NodeTypesToRemoveStack;
    bVar17 = true;
    pUVar8 = (UMovieGraphNode *)(pTVar42->AllocatorInstance).Data;
    pUVar24 = TVar6.DebugPtr + 1;
    if (((pUVar8 <= pUVar24) &&
        (pUVar24 < (UMovieGraphNode *)
                   (&pUVar8->_padding_ + (param_3->NodeTypesToRemoveStack).ArrayMax))) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar12 = (code *)swi(3);
      uVar18 = (*pcVar12)();
      return (bool)uVar18;
    }
    iVar20 = (param_3->NodeTypesToRemoveStack).ArrayNum;
    piVar2 = &(param_3->NodeTypesToRemoveStack).ArrayMax;
    if (iVar20 == *piVar2) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar2);
    }
    pFVar7 = (pTVar42->AllocatorInstance).Data;
    (param_3->NodeTypesToRemoveStack).ArrayNum = iVar20 + 1;
    pUVar9 = (UObject *)pUVar24->_padding_;
    *(UObject **)(pFVar7 + (longlong)iVar20 * 8) = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
  }
  (**(code **)((TVar6.DebugPtr)->_padding_ + 0x2f0))(TVar6.DebugPtr,&local_2d8,param_3);
  if (param_3->bCircularGraphReferenceFound == false) {
    uVar36 = (ulonglong)(int)local_2d0;
    local_344 = local_2d0;
    local_2b0 = local_2d8 + uVar36;
    uVar39 = uVar36;
    puVar48 = local_2d8;
    while( true ) {
      puVar15 = local_2b0;
      if ((int)uVar36 != (int)uVar39) {
        local_376 = 0;
        `TCheckedPointerIterator<UMovieGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_376);
      }
      pFVar14 = local_368;
      if (puVar48 == puVar15) break;
      pUVar10 = (UMovieGraphPin *)*puVar48;
      pFVar41 = (pUVar10->Edges).AllocatorInstance.Data;
      iVar20 = (pUVar10->Edges).ArrayNum;
      pFVar7 = pFVar41 + (longlong)iVar20 * 8;
      while( true ) {
        if ((pUVar10->Edges).ArrayNum != iVar20) {
          local_375 = 0;
          `TCheckedPointerIterator<TObjectPtr<UMovieGraphEdge>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_375);
        }
        if (pFVar41 == pFVar7) break;
        this_00 = *(UMovieGraphEdge **)pFVar41;
        if ((this_00 == (UMovieGraphEdge *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
          pFVar21 = FText::AsLocalizable_Advanced_LocText
                              (&local_190,L"MovieGraphConfig",
                               L"TraversalError_InvalidConnectionInBranch",
                               L"Found an invalid connection, likely from an invalid node. Aborting graph evaluation."
                              );
          FText::operator=(&local_368->TraversalError,pFVar21);
          if (local_190.TextData.Reference == (ITextData *)0x0) goto LAB_14dc7ccd2;
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
          bVar17 = false;
          goto LAB_14dc7cdbe;
        }
        pUVar31 = UMovieGraphEdge::GetOtherPin(this_00,pUVar10,true);
        if (pUVar31 != (UMovieGraphPin *)0x0) {
          TVar6 = (TObjectPtr<UMovieGraphNode>_u_0)(pUVar31->Node).field0_0x0.DebugPtr;
          local_2c0 = TVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar6.DebugPtr != (UMovieGraphNode *)0x0) {
              UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar6.DebugPtr != (UMovieGraphNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
            }
          }
          uVar33 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
          uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
          iVar45 = TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TObjectPtr<UMovieGraphNode_const_>_>
                             (local_328,uVar33 >> 0x10 ^ uVar33,
                              (TObjectPtr<UMovieGraphNode_const_> *)&local_2c0.ObjectPtr);
          pTVar1 = local_328;
          if (iVar45 != -1) {
            iStack_238 = 0;
            local_230 = &(local_328->Elements).field_0x10;
            local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2e8.Data.ArrayNum = 0;
            local_2e8.Data.ArrayMax = 0;
            iVar20 = *(int *)&(local_328->Elements).field_0x28;
            uStack_234 = 1;
            iStack_224 = iStack_238;
            local_220 = iStack_238;
            if (iVar20 == 0) goto LAB_14dc7ca1e;
            puVar47 = *(uint **)&(local_328->Elements).field_0x20;
            if (puVar47 == (uint *)0x0) {
              puVar47 = (uint *)local_230;
            }
            uVar33 = *puVar47;
            goto joined_r0x00014dc7c9d4;
          }
          bVar19 = CreateFlattenedGraph_Recursive(local_300,local_2b8,local_330,local_368,pUVar31);
          if (!bVar19) goto LAB_14dc7ccd2;
        }
        pFVar41 = pFVar41 + 8;
      }
      uVar36 = (ulonglong)local_2d0;
      puVar48 = puVar48 + 1;
      uVar39 = (ulonglong)local_344;
    }
    if (bVar17) {
      pTVar42 = &local_368->NodeTypesToRemoveStack;
      if (((local_368->NodeTypesToRemoveStack).ArrayNum < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        uVar18 = (*pcVar12)();
        return (bool)uVar18;
      }
      pUVar9 = *(UObject **)
                ((pTVar42->AllocatorInstance).Data +
                (longlong)(pFVar14->NodeTypesToRemoveStack).ArrayNum * 8 + -8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      iVar20 = (pFVar14->NodeTypesToRemoveStack).ArrayNum + -1;
      (pFVar14->NodeTypesToRemoveStack).ArrayNum = iVar20;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar42->AllocatorInstance,iVar20,&(pFVar14->NodeTypesToRemoveStack).ArrayMax)
      ;
    }
    bVar17 = true;
    goto LAB_14dc7cdbe;
  }
  pFVar41 = (param_3->SubgraphStack).AllocatorInstance.Data;
  iVar20 = (param_3->SubgraphStack).ArrayNum;
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Data.ArrayNum = 0;
  local_2f8.Data.ArrayMax = 0;
  pFVar7 = pFVar41 + (longlong)iVar20 * 8;
  while( true ) {
    if ((param_3->SubgraphStack).ArrayNum != iVar20) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphSubgraphNode_const_>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_374);
    }
    if (pFVar41 == pFVar7) break;
    pUVar28 = UMovieGraphSubgraphNode::GetSubgraphAsset(*(UMovieGraphSubgraphNode **)pFVar41);
    if (pUVar28 != (UMovieGraphConfig *)0x0) {
      local_2c8 = (FName)pUVar28->_padding_;
      ::FName::ToString(&local_2c8,&local_278);
      ::FString::PrintfImpl(&local_288,L"\n%s -> ");
      if (local_288.Data.ArrayNum == 0) {
        iVar45 = 0;
      }
      else {
        iVar45 = local_288.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_2f8,(wchar_t *)local_288.Data.AllocatorInstance.Data,iVar45);
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
    pFVar41 = pFVar41 + 8;
  }
  pFVar21 = FText::FromString(&local_140,&local_2f8);
  pFVar29 = FText::AsLocalizable_Advanced_LocText
                      (&local_1c0,L"MovieGraphConfig",L"TraversalError_CircularGraphReference",
                       L"Circular subgraph reference found during traversal.{0}");
  pFVar30 = FTextFormat::FTextFormat(&local_130,pFVar29,Default);
  pFVar21 = FText::Format<FText>(&local_1d0,pFVar30,pFVar21);
  FText::operator=(&param_3->TraversalError,pFVar21);
  if (local_1d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
  }
  FVar37.Data = local_2f8.Data.AllocatorInstance.Data;
  if (local_1c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
    FVar37.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  goto LAB_14dc7ccc8;
joined_r0x00014dc7c9d4:
  if (uVar33 != 0) goto LAB_14dc7c9f7;
  iStack_238 = iStack_238 + 1;
  local_220 = local_220 + 0x20;
  iStack_224 = iVar20;
  if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_238) goto LAB_14dc7ca1e;
  uVar33 = puVar47[iStack_238];
  goto joined_r0x00014dc7c9d4;
LAB_14dc7c9f7:
  uStack_234 = -uVar33 & uVar33;
  uVar39 = (ulonglong)uStack_234 * 2 + 1;
  lVar34 = 0x3f;
  if (uVar39 != 0) {
    for (; uVar39 >> lVar34 == 0; lVar34 = lVar34 + -1) {
    }
  }
  local_298.field0_0x0._4_4_ = (undefined4)lVar34;
  iStack_224 = local_220 + -1 + local_298.field0_0x0._4_4_;
  if (iVar20 < iStack_224) {
    iStack_224 = iVar20;
  }
LAB_14dc7ca1e:
  uVar33 = *(uint *)&(local_328->Elements).field_0x28;
  puVar3 = &(local_328->Elements).field_0x10;
  uStack_21c = local_e4;
  uVar44 = uVar33 & 0xffffffe0;
  iStack_218 = *(int *)&(local_328->Elements).field_0x8 - *(int *)&(local_328->Elements).field_0x34;
  uStack_228 = 0xffffffff;
  local_240 = local_328;
  TStack_208._padding_ = CONCAT44(uStack_234,iStack_238);
  TStack_208.CurrentBitIndex = iStack_224;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  local_210 = local_328;
  iVar20 = (int)uVar33 >> 5;
  TStack_208._28_4_ = local_e4;
  TStack_208.BaseBitIndex = local_220;
  uStack_1e8 = CONCAT44(uStack_214,iStack_218);
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_230;
  if ((((int)uVar33 < 0) || (*(int *)&(local_328->Elements).field_0x28 < (int)uVar33)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    uVar18 = (*pcVar12)();
    return (bool)uVar18;
  }
  uVar5 = *(uint *)&(pTVar1->Elements).field_0x28;
  if (uVar33 != uVar5) {
    puVar11 = *(undefined1 **)&(pTVar1->Elements).field_0x20;
    puVar46 = puVar3;
    if (puVar11 != (undefined1 *)0x0) {
      puVar46 = puVar11;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar46 + (longlong)iVar20 * 4);
    while (uVar33 == 0) {
      iVar20 = iVar20 + 1;
      uVar44 = uVar44 + 0x20;
      uVar33 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar20) goto LAB_14dc7cb60;
      uVar33 = *(uint *)(puVar46 + (longlong)iVar20 * 4);
    }
    uVar39 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar34 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar33 = (uVar44 - 1) + (int)lVar34;
    if ((int)uVar5 < (int)uVar33) {
      uVar33 = uVar5;
    }
  }
LAB_14dc7cb60:
  while( true ) {
    pTVar16 = local_210;
    if (*(int *)&(local_210->Elements).field_0x8 - *(int *)&(local_210->Elements).field_0x34 !=
        (int)uStack_1e8) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_373);
    }
    if (((TStack_208.CurrentBitIndex == uVar33) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar16 == pTVar1)
       ) break;
    local_2a8 = *(FName *)(*(longlong *)
                            (*(longlong *)&pTVar16->Elements +
                            (longlong)TStack_208.CurrentBitIndex * 0x10) + 0x18);
    ::FName::ToString(&local_2a8,&local_258);
    ::FString::PrintfImpl(&local_268,L"\n%s -> ");
    if (local_268.Data.ArrayNum == 0) {
      iVar20 = 0;
    }
    else {
      iVar20 = local_268.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_2e8,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar20);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
  pFVar21 = FText::FromString(&local_120,&local_2e8);
  pFVar29 = FText::AsLocalizable_Advanced_LocText
                      (&local_1a0,L"MovieGraphConfig",L"TraversalError_CircularNodeReference",
                       L"Node connection cycle found during traversal.{0}");
  pFVar30 = FTextFormat::FTextFormat(local_110,pFVar29,Default);
  pFVar21 = FText::Format<FText>(&local_1b0,pFVar30,pFVar21);
  FText::operator=(&local_368->TraversalError,pFVar21);
  if (local_1b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
  }
  FVar37.Data = local_2e8.Data.AllocatorInstance.Data;
  if (local_1a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
    FVar37.Data = local_2e8.Data.AllocatorInstance.Data;
  }
LAB_14dc7ccc8:
  if (FVar37.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar37.Data);
  }
LAB_14dc7ccd2:
  bVar17 = false;
LAB_14dc7cdbe:
  if (local_2d8 != (undefined8 *)0x0) {
    FMemory::Free(local_2d8);
  }
  return bVar17;
}

// DeleteInputMember @ 14dc7ce60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::DeleteInputMember(UMovieGraphConfig *this,UMovieGraphInput *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  UMovieGraphNode *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName *pFVar5;
  UMovieGraphPin *this_01;
  ForAnyElementType FVar6;
  int iVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  if (param_1 == (UMovieGraphInput *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Inputs).AllocatorInstance.Data;
  iVar7 = (this->Inputs).ArrayNum;
  pFVar4 = pFVar2;
  do {
    if (pFVar4 == pFVar2 + (longlong)iVar7 * 8) {
LAB_14dc7cee4:
      local_30 = *(int *)&param_1->field_0x58;
      lVar8 = (longlong)local_30;
      _Src = *(void **)&param_1->field_0x50;
      local_38.Data = (FScriptContainerElement *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30,0,&local_38,local_30,&local_2c);
        memcpy(local_38.Data,_Src,lVar8 * 2);
      }
      iVar7 = local_30 + -1;
      if (local_30 == 0) {
        iVar7 = 0;
      }
      pFVar5 = ::FName::FName(local_res18,iVar7,(wchar_t *)local_38.Data,FNAME_Add);
      local_res10 = *pFVar5;
      this_00 = (this->InputNode).field0_0x0.DebugPtr;
      if (this_00 == (UMovieGraphNode *)0x0) {
        ::FString::PrintfImpl(&local_28,L"%hs: Invalid Edge Nodes");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar6.Data = local_28.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Error,(FName)0x0);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      else {
        this_01 = UMovieGraphNode::GetOutputPin(this_00,&local_res10);
        if (this_01 != (UMovieGraphPin *)0x0) {
          UMovieGraphPin::BreakAllEdges(this_01);
        }
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      UMovieGraphNode::UpdatePins((this->InputNode).field0_0x0.DebugPtr);
      return true;
    }
    if (*(UMovieGraphInput **)pFVar4 == param_1) {
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 3);
      if (iVar3 != -1) {
        memmove(pFVar2 + (longlong)iVar3 * 8,pFVar2 + (longlong)iVar3 * 8 + 8,
                (longlong)((iVar7 - iVar3) + -1) << 3);
        piVar1 = &(this->Inputs).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_14dc7cee4;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// DeleteMember @ 14dc7d020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieGraphConfig::DeleteMember(UMovieGraphConfig *this,UMovieGraphMember *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  char cVar2;
  bool bVar3;
  UClass *pUVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  if (param_1 != (UMovieGraphMember *)0x0) {
    cVar2 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
    if (cVar2 == '\0') {
      local_20 = (param_1->Name).Data.ArrayNum;
      lVar6 = (longlong)local_20;
      _Src = (param_1->Name).Data.AllocatorInstance.Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      if (local_20 == 0) {
        local_1c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar6 * 2);
      }
      ::FString::PrintfImpl
                (&local_18,
                 L"%hs: The member \'%s\' cannot be deleted because it is flagged as non-deletable."
                );
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
    else {
      pUVar4 = UMovieGraphVariable::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        bVar3 = DeleteVariableMember(this,(UMovieGraphVariable *)param_1);
        return bVar3;
      }
      pUVar4 = UMovieGraphInput::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        bVar3 = DeleteInputMember(this,(UMovieGraphInput *)param_1);
        return bVar3;
      }
      pUVar4 = UMovieGraphOutput::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        bVar3 = DeleteOutputMember(this,(UMovieGraphOutput *)param_1);
        return bVar3;
      }
    }
  }
  return false;
}

// DeleteOutputMember @ 14dc7d1e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::DeleteOutputMember(UMovieGraphConfig *this,UMovieGraphOutput *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  UMovieGraphNode *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName *pFVar5;
  UMovieGraphPin *this_01;
  ForAnyElementType FVar6;
  int iVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  if (param_1 == (UMovieGraphOutput *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Outputs).AllocatorInstance.Data;
  iVar7 = (this->Outputs).ArrayNum;
  pFVar4 = pFVar2;
  do {
    if (pFVar4 == pFVar2 + (longlong)iVar7 * 8) {
LAB_14dc7d26f:
      local_30 = *(int *)&param_1->field_0x58;
      lVar8 = (longlong)local_30;
      _Src = *(void **)&param_1->field_0x50;
      local_38.Data = (FScriptContainerElement *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30,0,&local_38,local_30,&local_2c);
        memcpy(local_38.Data,_Src,lVar8 * 2);
      }
      iVar7 = local_30 + -1;
      if (local_30 == 0) {
        iVar7 = 0;
      }
      pFVar5 = ::FName::FName(local_res18,iVar7,(wchar_t *)local_38.Data,FNAME_Add);
      local_res10 = *pFVar5;
      this_00 = (this->OutputNode).field0_0x0.DebugPtr;
      if (this_00 == (UMovieGraphNode *)0x0) {
        ::FString::PrintfImpl(&local_28,L"%hs: Invalid Edge Nodes");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar6.Data = local_28.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Error,(FName)0x0);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      else {
        this_01 = UMovieGraphNode::GetInputPin(this_00,&local_res10,BuiltInOrDynamic);
        if (this_01 != (UMovieGraphPin *)0x0) {
          UMovieGraphPin::BreakAllEdges(this_01);
        }
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      UMovieGraphNode::UpdatePins((this->OutputNode).field0_0x0.DebugPtr);
      return true;
    }
    if (*(UMovieGraphOutput **)pFVar4 == param_1) {
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 3);
      if (iVar3 != -1) {
        memmove(pFVar2 + (longlong)iVar3 * 8,pFVar2 + (longlong)iVar3 * 8 + 8,
                (longlong)((iVar7 - iVar3) + -1) << 3);
        piVar1 = &(this->Outputs).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_14dc7d26f;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// DeleteVariableMember @ 14dc7d3b0

bool __thiscall
UMovieGraphConfig::DeleteVariableMember(UMovieGraphConfig *this,UMovieGraphVariable *param_1)

{
  int *piVar1;
  FObjectPtr_u_0 *pFVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  UClass *pUVar10;
  UMovieGraphVariable *pUVar11;
  FScriptContainerElement *pFVar12;
  FObjectPtr_u_0 *this_00;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  FObjectPtr_u_0 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  if (param_1 == (UMovieGraphVariable *)0x0) {
    return false;
  }
  this_00 = (FObjectPtr_u_0 *)(this->AllNodes).AllocatorInstance.Data;
  local_40.Data = (FScriptContainerElement *)0x0;
  pFVar2 = this_00 + (this->AllNodes).ArrayNum;
  local_38 = 0;
  FVar13.Data = local_40.Data;
  for (; local_40.Data = FVar13.Data, this_00 != pFVar2; this_00 = this_00 + 1) {
    if (this_00->Handle != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_UMovieGraphVariableNode_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
      if ((((bVar6) &&
           ((UMovieGraphVariableNode *)this_00->Handle != (UMovieGraphVariableNode *)0x0)) &&
          (pUVar11 = UMovieGraphVariableNode::GetVariable
                               ((UMovieGraphVariableNode *)this_00->Handle),
          pUVar11 != (UMovieGraphVariable *)0x0)) &&
         (((*(int *)((longlong)&pUVar11->_padding_ + 4) ==
            *(int *)((longlong)&param_1->_padding_ + 4) &&
           (int)pUVar11->_padding_ == (int)param_1->_padding_) &&
          *(int *)((longlong)&pUVar11->_padding_ + 4) == *(int *)((longlong)&param_1->_padding_ + 4)
          ) && (int)pUVar11->_padding_ == (int)param_1->_padding_)) {
        if (((local_40.Data <= this_00) &&
            (this_00 < (FObjectPtr_u_0 *)(local_40.Data + (longlong)local_38._4_4_ * 8))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar8 = (int)local_38;
        if ((int)local_38 == local_38._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_40,(int *)((longlong)&local_38 + 4));
        }
        local_38 = CONCAT44(local_38._4_4_,iVar8 + 1);
        pUVar3 = this_00->Handle;
        *(UObject **)(local_40.Data + (longlong)iVar8 * 8) = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    FVar13.Data = local_40.Data;
  }
  iVar8 = (int)local_38;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  pFVar2 = (FObjectPtr_u_0 *)((longlong)FVar13.Data + (longlong)(int)local_38 * 8);
  while( true ) {
    if ((int)local_38 != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FObjectPtr_u_0 *)FVar13.Data == pFVar2) break;
    bVar6 = RemoveNode(this,*(UMovieGraphNode **)FVar13.Data);
    if (bVar6) {
      local_48.Handle = *(UObject **)FVar13.Data;
      if (((local_30.Data <= &local_48) &&
          (&local_48 < (FObjectPtr_u_0 *)(local_30.Data + (longlong)local_28._4_4_ * 8))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar9 = (int)local_28;
      if ((int)local_28 == local_28._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_30,(int *)((longlong)&local_28 + 4));
      }
      local_28 = CONCAT44(local_28._4_4_,iVar9 + 1);
      ((FObjectPtr_u_0 *)(local_30.Data + (longlong)iVar9 * 8))->Handle = (UObject *)local_48;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar4 = (this->Variables).AllocatorInstance.Data;
  iVar8 = (this->Variables).ArrayNum;
  pFVar12 = pFVar4;
  do {
    if (pFVar12 == pFVar4 + (longlong)iVar8 * 8) {
LAB_14dc7d685:
      if ((FObjectPtr_u_0 *)local_30.Data != (FObjectPtr_u_0 *)0x0) {
        FMemory::Free(local_30.Data);
      }
      if ((FObjectPtr_u_0 *)local_40.Data != (FObjectPtr_u_0 *)0x0) {
        FMemory::Free(local_40.Data);
      }
      return true;
    }
    if (*(UMovieGraphVariable **)pFVar12 == param_1) {
      iVar9 = (int)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
      if (iVar9 != -1) {
        memmove(pFVar4 + (longlong)iVar9 * 8,pFVar4 + (longlong)iVar9 * 8 + 8,
                (longlong)((iVar8 - iVar9) + -1) << 3);
        piVar1 = &(this->Variables).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_14dc7d685;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// DuplicateVariable @ 14dc7de20

UMovieGraphVariable * __thiscall
UMovieGraphConfig::DuplicateVariable(UMovieGraphConfig *this,UMovieGraphVariable *param_1)

{
  int iVar1;
  void *_Src;
  EMovieGraphValueType EVar2;
  FName *pFVar3;
  UMovieGraphVariable *this_00;
  UObject *pUVar4;
  FString *pFVar5;
  int iVar6;
  longlong lVar7;
  FName local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  if (param_1 == (UMovieGraphVariable *)0x0) {
    return (UMovieGraphVariable *)0x0;
  }
  local_30 = (int)param_1->_padding_;
  lVar7 = (longlong)local_30;
  _Src = (void *)param_1->_padding_;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar7 * 2);
  }
  iVar6 = local_30 + -1;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FName::FName(&local_res10,iVar6,(wchar_t *)local_38.Data,FNAME_Add);
  this_00 = AddVariable(this,*pFVar3);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (this_00 != (UMovieGraphVariable *)0x0) {
    pUVar4 = UMovieGraphValueContainer::GetValueTypeObject((UMovieGraphValueContainer *)param_1);
    EVar2 = UMovieGraphValueContainer::GetValueType((UMovieGraphValueContainer *)param_1);
    UMovieGraphValueContainer::SetValueType((UMovieGraphValueContainer *)this_00,EVar2,pUVar4);
    pFVar5 = UMovieGraphValueContainer::GetValueSerializedString
                       ((UMovieGraphValueContainer *)param_1,&local_28);
    UMovieGraphValueContainer::SetValueSerializedString((UMovieGraphValueContainer *)this_00,pFVar5)
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    UMovieGraphVariable::SetCategory(this_00,&param_1->Category);
    iVar1 = (int)param_1->_padding_;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange((FString *)&this_00->_padding_,(wchar_t *)param_1->_padding_,iVar6);
  }
  return this_00;
}

// FindOverridePropertyForRealProperty @ 14dc7ea10

FBoolProperty * __cdecl
UMovieGraphConfig::FindOverridePropertyForRealProperty(UClass *param_1,FProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FBoolProperty *pFVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  TFieldIterator<FProperty> local_28;
  
  if ((param_1 == (UClass *)0x0) || (param_2 == (FProperty *)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4571739335061144718>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                       ,0x48e,"InClass && InRealProperty");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoolProperty *)(*pcVar1)();
      return pFVar4;
    }
    pFVar4 = (FBoolProperty *)0x0;
  }
  else {
    bVar2 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_58);
    }
    else {
      ::FString::FString(&local_58,L"None");
    }
    ::FString::PrintfImpl(&local_38,L"bOverride_%s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_28.Field = (FField *)param_1->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar4 = (FBoolProperty *)local_28.Field;
    while (local_28.Field = (FField *)pFVar4, pFVar4 != (FBoolProperty *)0x0) {
      if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x11 & 1) != 0) {
        bVar2 = IsThisNotNull(pFVar4,"FField::GetName");
        if (bVar2) {
          ::FName::ToString((FName *)&pFVar4->_padding_,&local_48);
        }
        else {
          ::FString::FString(&local_48,L"None");
        }
        if (local_48.Data.ArrayNum == local_38.Data.ArrayNum) {
          if (local_48.Data.ArrayNum < 2) {
            bVar2 = true;
          }
          else {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                               (wchar_t *)local_38.Data.AllocatorInstance.Data);
            bVar2 = iVar3 == 0;
          }
        }
        else {
          bVar2 = local_48.Data.ArrayNum + local_38.Data.ArrayNum == 1;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (bVar2) goto LAB_14dc7eb7b;
      }
      local_28.Field = (FField *)pFVar4->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
      pFVar4 = (FBoolProperty *)local_28.Field;
    }
    pFVar4 = (FBoolProperty *)0x0;
LAB_14dc7eb7b:
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return pFVar4;
}

// GetAllContainedSubgraphs @ 14dc7ec10

void __thiscall
UMovieGraphConfig::GetAllContainedSubgraphs
          (UMovieGraphConfig *this,
          TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UMovieGraphConfig *this_00;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *this_01;
  UMovieGraphConfig *local_res8;
  UMovieGraphConfig *local_res18 [2];
  
  this_01 = (this->AllNodes).AllocatorInstance.Data;
  iVar2 = (this->AllNodes).ArrayNum;
  pFVar1 = this_01 + (longlong)iVar2 * 8;
  do {
    if ((this->AllNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_01 == pFVar1) {
      return;
    }
    if (*(longlong *)this_01 != 0) {
      pUVar6 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar6);
      if ((bVar4) && (*(UMovieGraphSubgraphNode **)this_01 != (UMovieGraphSubgraphNode *)0x0)) {
        this_00 = UMovieGraphSubgraphNode::GetSubgraphAsset(*(UMovieGraphSubgraphNode **)this_01);
        local_res8 = this_00;
        if (this_00 != (UMovieGraphConfig *)0x0) {
          uVar7 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
            FVar3 = (param_1->Hash).SecondaryData;
            FVar8 = (ForElementType<FSetElementId>)&param_1->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar8 = FVar3;
            }
            iVar5 = *(int *)((longlong)FVar8 +
                            (ulonglong)(param_1->HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            if (iVar5 != -1) {
              do {
                if (*(UMovieGraphConfig **)
                     (*(longlong *)&param_1->Elements + (longlong)iVar5 * 0x10) == this_00)
                goto LAB_14dc7ed25;
                iVar5 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar5 * 0x10);
              } while (iVar5 != -1);
            }
          }
          TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>::
          Emplace<UMovieGraphConfig_*_const_&>(param_1,local_res18,(bool *)&local_res8);
          GetAllContainedSubgraphs(this_00,param_1);
        }
      }
    }
LAB_14dc7ed25:
    this_01 = this_01 + 8;
  } while( true );
}

// GetBranchNames @ 14dc7f1f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetBranchNames
          (UMovieGraphConfig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  FName *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_50 = (this->Outputs).ArrayNum;
  lVar6 = (longlong)local_50;
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar1,lVar6 << 3);
    iVar5 = local_50;
  }
  pFVar1 = local_58.Data + (longlong)iVar5 * 8;
  FVar4.Data = local_58.Data;
  iVar3 = iVar5;
  while( true ) {
    if (iVar3 != iVar5) {
      `TCheckedPointerIterator<UMovieGraphOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = *(int *)(*(longlong *)FVar4.Data + 0x58);
    lVar6 = (longlong)local_40;
    _Src = *(void **)(*(longlong *)FVar4.Data + 0x50);
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar6 * 2);
    }
    iVar3 = local_40 + -1;
    if (local_40 == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(local_res18,iVar3,(wchar_t *)local_48.Data,FNAME_Add);
    local_res10 = *pFVar2;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              (__return_storage_ptr__,&local_res10);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    FVar4.Data = FVar4.Data + 8;
    iVar3 = local_50;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// GetDownstreamBranchNames @ 14dc7ff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetDownstreamBranchNames
          (UMovieGraphConfig *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieGraphNode *param_1,UMovieGraphPin *param_2,bool param_3)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [16];
  bool local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = Z_Construct_UClass_UMovieGraphOutputNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) && (param_2 != (UMovieGraphPin *)0x0)) {
    pFVar3 = ::FName::ToString(&(param_2->Properties).Label,(FString *)local_d0);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (__return_storage_ptr__,pFVar3);
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
  }
  local_d0[8] = param_3;
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  local_d0._0_8_ = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_b8);
  local_a0 = &local_e0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_e0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = local_d0._0_8_;
    puVar4[4] = CONCAT71(local_d0._9_7_,local_d0[8]);
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  VisitDownstreamNodes_Recursive
            (this,param_1,
             (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
              *)local_e8,
             (TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator> *)
             local_98);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)local_d0);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_c0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT71(local_d0._9_7_,local_d0[8]),
               (FDestructionSentinel *)local_d0);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  return __return_storage_ptr__;
}

// GetInputs @ 14dc806a0

TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetInputs
          (UMovieGraphConfig *this,
          TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Inputs).ArrayNum;
  _Src = (this->Inputs).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetNodeForBranch @ 14dc80970

UMovieGraphNode * __thiscall
UMovieGraphConfig::GetNodeForBranch
          (UMovieGraphConfig *this,UClass *param_1,FName *param_2,bool param_3)

{
  UMovieGraphNode *pUVar1;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetNodesForBranch(this,&local_18,param_1,param_2,param_3);
  if (local_18.ArrayNum < 1) {
    pUVar1 = (UMovieGraphNode *)0x0;
  }
  else {
    pUVar1 = *(UMovieGraphNode **)local_18.AllocatorInstance.Data;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar1;
}

// GetNodeForTag @ 14dc809c0

UMovieGraphNode * __thiscall
UMovieGraphConfig::GetNodeForTag
          (UMovieGraphConfig *this,FString *param_1,UClass *param_2,FName param_3,bool param_4)

{
  UMovieGraphNode *pUVar1;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetNodesForTag(this,&local_18,param_1,param_2,param_3,param_4);
  if (local_18.ArrayNum < 1) {
    pUVar1 = (UMovieGraphNode *)0x0;
  }
  else {
    pUVar1 = *(UMovieGraphNode **)local_18.AllocatorInstance.Data;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar1;
}

// GetNodesForBranch @ 14dc80cd0

TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetNodesForBranch
          (UMovieGraphConfig *this,
          TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,FName *param_2,bool param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  FName *local_50;
  undefined1 *puStack_48;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *local_40;
  TObjectPtr<UMovieGraphNode>_u_0 TStack_38;
  bool local_30;
  undefined7 uStack_2f;
  UClass *pUStack_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  puStack_48 = local_res8;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TStack_38 = (this->InputNode).field0_0x0;
  local_30 = param_3;
  local_res8[0] = 0;
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  local_50 = param_2;
  local_40 = __return_storage_ptr__;
  pUStack_28 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_80;
  puVar1 = UE::Core::Private::DelegateAllocate(0x48,&local_80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = local_50;
    puVar1[4] = puStack_48;
    puVar1[5] = local_40;
    *(TObjectPtr<UMovieGraphNode>_u_0 *)(puVar1 + 6) = TStack_38;
    puVar1[7] = CONCAT71(uStack_2f,local_30);
    puVar1[8] = pUStack_28;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  VisitUpstreamNodes(this,(this->OutputNode).field0_0x0.DebugPtr,
                     (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                      *)local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  return __return_storage_ptr__;
}

// GetNodesForTag @ 14dc80e40

TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetNodesForTag
          (UMovieGraphConfig *this,
          TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1,UClass *param_2,FName param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  ForAnyElementType FVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 local_78;
  undefined1 local_77 [7];
  undefined8 local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  undefined8 local_58;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_50;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_58 = 0;
  if (param_3 == (FName)0x0) {
    uVar1 = (this->AllNodes).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&local_50.AllocatorInstance,0,&local_50.ArrayMax);
    }
    pFVar11 = (this->AllNodes).AllocatorInstance.Data;
    iVar2 = (this->AllNodes).ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllNodes).ArrayNum != iVar2) {
        local_78 = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
      }
      if (pFVar11 == pFVar10) break;
      local_70 = *(undefined8 *)pFVar11;
      if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 <
           local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      if (local_50.ArrayNum == local_50.ArrayMax) {
        local_50.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      lVar9 = (longlong)local_50.ArrayNum;
      pFVar11 = pFVar11 + 8;
      local_50.ArrayNum = local_50.ArrayNum + 1;
      *(undefined8 *)(local_50.AllocatorInstance.Data + lVar9 * 8) = local_70;
    }
  }
  else {
    pUVar7 = param_2;
    if (param_2 == (UClass *)0x0) {
      pUVar7 = Z_Construct_UClass_UMovieGraphNode_NoRegister();
    }
    pTVar8 = GetNodesForBranch(this,&local_40,pUVar7,&param_3,param_4);
    if (&local_50 != pTVar8) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      local_50.AllocatorInstance.Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = pTVar8->ArrayNum;
      local_50.ArrayMax = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  iVar2 = local_50.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_60 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
  pFVar10 = local_60;
  FVar13.Data = local_50.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_50.ArrayNum != iVar2) {
        local_77[0] = 0;
        `TCheckedPointerIterator<UMovieGraphNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
      }
      if (FVar13.Data == pFVar10) {
        if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      local_68 = *(longlong *)FVar13.Data;
      if (param_4) {
        bVar15 = *(UClass **)(local_68 + 0x10) == param_2;
      }
      else {
        iVar6 = (int)param_2->_padding_;
        if ((*(int *)(*(longlong *)(local_68 + 0x10) + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(local_68 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
            &param_2->_padding_)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
      }
      bVar5 = true;
      if (param_2 != (UClass *)0x0) {
        bVar5 = bVar15;
      }
      if (bVar5) break;
LAB_14dc8118f:
      FVar13.Data = FVar13.Data + 8;
    }
    puVar12 = *(undefined8 **)(local_68 + 0x48);
    puVar14 = puVar12 + (longlong)*(int *)(local_68 + 0x50) * 2;
    pFVar10 = local_60;
    if (puVar12 == puVar14) goto LAB_14dc8118f;
    do {
      iVar6 = *(int *)(puVar12 + 1);
      iVar3 = (param_1->Data).ArrayNum;
      if (iVar6 == iVar3) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar15 = iVar6 == 0;
          goto LAB_14dc810d6;
        }
LAB_14dc810f3:
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_68;
        pFVar10 = local_60;
        goto LAB_14dc8118f;
      }
      bVar15 = iVar6 + iVar3 == 1;
LAB_14dc810d6:
      if (bVar15) goto LAB_14dc810f3;
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar14);
    FVar13.Data = FVar13.Data + 8;
    pFVar10 = local_60;
  } while( true );
}

// GetOutputDirectory @ 14dc81220

void __thiscall UMovieGraphConfig::GetOutputDirectory(UMovieGraphConfig *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UMovieGraphPin *this_00;
  UClass *pUVar4;
  UObject *pUVar5;
  int iVar6;
  TArray<UMovieGraphConfig_const_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (((this->OutputNode).field0_0x0.DebugPtr == (UMovieGraphNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                         ,0x5d0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (param_1 != &local_18) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  this_00 = UMovieGraphNode::GetInputPin
                      ((this->OutputNode).field0_0x0.DebugPtr,&UMovieGraphNode::GlobalsPinName,
                       BuiltInOrDynamic);
  if (this_00 == (UMovieGraphPin *)0x0) {
    return;
  }
  bVar3 = UMovieGraphPin::IsConnected(this_00);
  if (!bVar3) {
    return;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  RecurseUpGlobalsBranchToFindOutputDirectory
            (this,(this->OutputNode).field0_0x0.DebugPtr,param_1,&local_28);
  if (1 < (param_1->Data).ArrayNum) goto LAB_14dc81358;
  pUVar4 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
  pUVar5 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 == (UObject *)0x0) {
LAB_14dc81310:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CDO",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphConfig.cpp"
                       ,0x5e1,L"");
    pUVar5 = (UObject *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
    iVar6 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar4->_padding_)) goto LAB_14dc81310;
  }
  iVar6 = *(int *)&pUVar5[4].field_0x20 + -1;
  if (*(int *)&pUVar5[4].field_0x20 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange(param_1,*(wchar_t **)&pUVar5[4].field_0x18,iVar6);
LAB_14dc81358:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetOutputs @ 14dc813a0

TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetOutputs
          (UMovieGraphConfig *this,
          TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Outputs).ArrayNum;
  _Src = (this->Outputs).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dc819c0

UClass * __cdecl UMovieGraphConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConfig",
               &Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton,
               StaticRegisterNativesUMovieGraphConfig,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphConfig>,
               InternalVTableHelperCtorCaller<UMovieGraphConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton;
}

// GetUpstreamBranchNames @ 14dc834e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetUpstreamBranchNames
          (UMovieGraphConfig *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieGraphNode *param_1,UMovieGraphPin *param_2,bool param_3)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 local_68 [16];
  bool local_58;
  undefined1 local_50 [8];
  FDelegateAllocation local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = Z_Construct_UClass_UMovieGraphInputNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) && (param_2 != (UMovieGraphPin *)0x0)) {
    pFVar3 = ::FName::ToString(&(param_2->Properties).Label,(FString *)local_68);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (__return_storage_ptr__,pFVar3);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  local_68[8] = param_3;
  local_50 = (undefined1  [8])0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  local_68._0_8_ = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_48;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = local_68._0_8_;
    puVar4[4] = CONCAT71(local_68._9_7_,local_68[8]);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  VisitUpstreamNodes(this,param_1,
                     (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                      *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)local_68);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  if (local_58 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT71(local_68._9_7_,local_68[8]),
               (FDestructionSentinel *)local_68);
  }
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  return __return_storage_ptr__;
}

// GetVariableByGuid @ 14dc83680

UMovieGraphVariable * __thiscall
UMovieGraphConfig::GetVariableByGuid(UMovieGraphConfig *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphVariable *pUVar2;
  ForAnyElementType FVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_res18 [16];
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_28;
  
  GetVariables(this,&local_28,true);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar3.Data = local_28.AllocatorInstance.Data;
  uVar5 = local_28._8_8_;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<UMovieGraphVariable_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
      uVar5 = local_28._8_8_;
    }
    if (FVar3.Data == pFVar1) break;
    pUVar2 = *(UMovieGraphVariable **)FVar3.Data;
    if (((*(uint *)((longlong)&pUVar2->_padding_ + 4) == param_1->D &&
         (uint)pUVar2->_padding_ == param_1->C) &&
        *(uint *)((longlong)&pUVar2->_padding_ + 4) == param_1->B) &&
        (uint)pUVar2->_padding_ == param_1->A) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return pUVar2;
    }
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (UMovieGraphVariable *)0x0;
}

// GetVariableByName @ 14dc83740

UMovieGraphVariable * __thiscall
UMovieGraphConfig::GetVariableByName(UMovieGraphConfig *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphVariable *pUVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 local_res18 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_38;
  
  GetVariables(this,&local_38,true);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UMovieGraphVariable_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar6.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return (UMovieGraphVariable *)0x0;
    }
    pUVar2 = *(UMovieGraphVariable **)FVar6.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (int)pUVar2->_padding_;
    lVar5 = (longlong)local_40;
    _Src = (void *)pUVar2->_padding_;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar5 * 2);
    }
    iVar4 = (param_1->Data).ArrayNum;
    if (local_40 == iVar4) {
      if (local_40 < 2) {
        bVar7 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_48.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar4 == 0;
      }
    }
    else {
      bVar7 = iVar4 + local_40 == 1;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (bVar7) break;
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GetVariables @ 14dc83d50

TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphConfig::GetVariables
          (UMovieGraphConfig *this,
          TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1) {
    local_10 = (this->Variables).ArrayNum;
    lVar7 = (longlong)local_10;
    pFVar2 = (this->Variables).AllocatorInstance.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,pFVar2,lVar7 << 3);
    }
    if ((TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *)&local_18 ==
        &this->GlobalVariables) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar1 = (this->GlobalVariables).ArrayNum;
    if (iVar1 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&local_18,&local_10,&local_c);
      ConstructItems<UMovieGraphVariable_*,TObjectPtr<UMovieGraphGlobalVariable>,int>
                (local_18.Data + (longlong)iVar5 * 8,
                 (TObjectPtr<UMovieGraphGlobalVariable> *)
                 (this->GlobalVariables).AllocatorInstance.Data,iVar1);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_18.Data;
    __return_storage_ptr__->ArrayNum = local_10;
    __return_storage_ptr__->ArrayMax = local_c;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Variables).ArrayNum;
  pFVar2 = (this->Variables).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// InitializeFlattenedNode @ 14dc84000

void __thiscall
UMovieGraphConfig::InitializeFlattenedNode(UMovieGraphConfig *this,UMovieGraphNode *param_1)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  FBoolProperty *pFVar6;
  TFieldIterator<FProperty> local_28;
  
  local_28.Struct = (UStruct *)param_1->_padding_;
  if (local_28.Struct == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (local_28.Struct)->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar4 = (FProperty *)local_28.Field;
  do {
    local_28.Field = (FField *)pFVar4;
    if (pFVar4 == (FProperty *)0x0) {
      UMovieGraphNode::UpdateDynamicProperties(param_1);
      return;
    }
    pFVar6 = FindOverridePropertyForRealProperty((UClass *)param_1->_padding_,pFVar4);
    if (pFVar6 != (FBoolProperty *)0x0) {
      if (((int)pFVar6->_padding_ < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = *(int *)((longlong)&pFVar6->_padding_ + 4);
      if ((pFVar6->FieldSize == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa61,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pbVar1 = (byte *)((longlong)&param_1->_padding_ +
                       (ulonglong)pFVar6->ByteOffset + (longlong)iVar2);
      *pbVar1 = *pbVar1 & ~pFVar6->FieldMask;
    }
    local_28.Field = (FField *)pFVar4->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar4 = (FProperty *)local_28.Field;
  } while( true );
}

// MoveCategoryBefore @ 14dc84540

void __thiscall
UMovieGraphConfig::MoveCategoryBefore(UMovieGraphConfig *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FString local_d8;
  UObject *local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a0;
  FString local_90;
  FString local_80;
  FStringFormatArg local_70;
  
  local_d8.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar11 = (longlong)local_d8.Data.ArrayNum;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d8.Data.ArrayNum == 0) {
    local_d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_d8.Data.ArrayNum,
               &local_d8.Data.ArrayMax);
    memcpy(local_d8.Data.AllocatorInstance.Data,pFVar1,lVar11 * 2);
  }
  iVar7 = ::FString::Find(&local_d8,L"|",1,IgnoreCase,FromStart,-1);
  if (iVar7 != -1) {
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_d8,&local_b0,L"|",true);
    iVar7 = 0;
    if (local_b0.ArrayNum != 0) {
      if ((local_b0.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(local_b0.AllocatorInstance.Data + 8) + -1;
      if (*(int *)(local_b0.AllocatorInstance.Data + 8) == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange(&local_d8,*(wchar_t **)local_b0.AllocatorInstance.Data,iVar7);
      iVar7 = local_b0.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_b0.AllocatorInstance.Data,iVar7);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
  }
  pFVar12 = (this->Variables).AllocatorInstance.Data;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  pFVar1 = pFVar12 + (longlong)(this->Variables).ArrayNum * 8;
  iVar7 = 0;
  if (pFVar12 != pFVar1) {
    do {
      bVar5 = `UMovieGraphConfig::MoveCategoryBefore'::__l2::<lambda_1>::operator()
                        (local_res18,*(UMovieGraphVariable **)pFVar12,param_1);
      if (bVar5) {
        if (((local_e8.Data <= pFVar12) && (pFVar12 < local_e8.Data + (longlong)local_e0._4_4_ * 8))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (int)local_e0;
        if ((int)local_e0 == local_e0._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
        pUVar2 = *(UObject **)pFVar12;
        *(UObject **)(local_e8.Data + (longlong)iVar7 * 8) = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
      pFVar12 = pFVar12 + 8;
    } while (pFVar12 != pFVar1);
    iVar7 = (int)local_e0;
  }
  FVar4.Data = local_e8.Data;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = iVar7;
  if (iVar7 == 0) {
    local_b4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&local_c0,iVar7,&local_b4);
    memcpy(local_c0.Data,FVar4.Data,(longlong)iVar7 << 3);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  pFVar12 = (this->Variables).AllocatorInstance.Data;
  pFVar1 = pFVar12 + (longlong)(this->Variables).ArrayNum * 8;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
    bVar5 = `UMovieGraphConfig::MoveCategoryBefore'::__l2::<lambda_1>::operator()
                      (local_res18,*(UMovieGraphVariable **)pFVar12,&local_d8);
    if (bVar5) {
      iVar7 = (this->Variables).ArrayNum;
      if (iVar7 == 0) goto LAB_14dc848cb;
      pFVar1 = (this->Variables).AllocatorInstance.Data;
      iVar16 = 0;
      iVar15 = 0;
      bVar5 = `UMovieGraphConfig::MoveCategoryBefore'::__l2::<lambda_1>::operator()
                        (local_res18,*(UMovieGraphVariable **)pFVar1,param_1);
      bVar5 = !bVar5;
      lVar11 = 0;
      iVar17 = iVar15;
      goto joined_r0x00014dc8485d;
    }
  }
  goto LAB_14dc84c2c;
  while( true ) {
    iVar17 = iVar15 - local_res20;
    if (bVar5 != false) {
      if (iVar16 != local_res20) {
        memmove(pFVar1 + (longlong)iVar16 * 8,pFVar1 + (longlong)local_res20 * 8,
                (longlong)iVar17 << 3);
      }
      iVar16 = iVar16 + iVar17;
    }
    bVar5 = (bool)(bVar5 ^ 1);
    iVar17 = iVar15;
    if (iVar7 <= lVar11) break;
joined_r0x00014dc8485d:
    local_res20 = iVar17;
    lVar11 = lVar11 + 1;
    iVar15 = iVar15 + 1;
    if (lVar11 < iVar7) {
      bVar6 = `UMovieGraphConfig::MoveCategoryBefore'::__l2::<lambda_1>::operator()
                        (local_res18,*(UMovieGraphVariable **)(pFVar1 + lVar11 * 8),param_1);
      iVar17 = local_res20;
      if (bVar5 == !bVar6) goto joined_r0x00014dc8485d;
    }
  }
  (this->Variables).ArrayNum = iVar16;
LAB_14dc848cb:
  uVar13 = 0;
  uVar14 = uVar13;
  uVar19 = uVar13;
  if (0 < (this->Variables).ArrayNum) {
    do {
      uVar18 = (uint)uVar19;
      uVar8 = 0;
      if ((int)uVar18 < (this->Variables).ArrayNum) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_d8.Data.AllocatorInstance.Data;
      lVar11 = *(longlong *)((this->Variables).AllocatorInstance.Data + uVar14);
      if (lVar11 != 0) {
        lVar9 = (longlong)local_d8.Data.ArrayNum;
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_90.Data.ArrayNum = local_d8.Data.ArrayNum;
        if (local_d8.Data.ArrayNum == 0) {
          local_90.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_90,
                     local_d8.Data.ArrayNum,&local_90.Data.ArrayMax);
          memcpy(local_90.Data.AllocatorInstance.Data,FVar4.Data,lVar9 * 2);
        }
        FStringFormatArg::FStringFormatArg(&local_70,&local_90);
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_a0.AllocatorInstance,1,&local_a0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_a0.AllocatorInstance.Data,&local_70,1);
        ::FString::FormatImpl(&local_80,L"{0}|",&local_a0);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
        if ((FStringFormatArg *)local_a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
        if (local_70.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.StringValue.Data.AllocatorInstance.Data);
        }
        iVar7 = *(int *)(lVar11 + 0x80);
        if (iVar7 == local_d8.Data.ArrayNum) {
          if (1 < iVar7) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar11 + 0x78),
                               (wchar_t *)local_d8.Data.AllocatorInstance.Data);
            bVar5 = iVar7 == 0;
            goto LAB_14dc84a57;
          }
LAB_14dc84a8f:
          bVar5 = true;
        }
        else {
          bVar5 = local_d8.Data.ArrayNum + iVar7 == 1;
LAB_14dc84a57:
          if (bVar5) goto LAB_14dc84a8f;
          iVar7 = local_80.Data.ArrayNum + -1;
          FVar4.Data = local_80.Data.AllocatorInstance.Data;
          if (local_80.Data.ArrayNum == 0) {
            iVar7 = 0;
            FVar4.Data = (FScriptContainerElement *)L"";
          }
          bVar5 = ::FString::StartsWith
                            ((FString *)(lVar11 + 0x78),(wchar_t *)FVar4.Data,iVar7,IgnoreCase);
          if (bVar5) goto LAB_14dc84a8f;
          bVar5 = false;
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          if ((uVar18 != 0xffffffff) && (0 < local_b8)) {
            uVar14 = uVar13;
            do {
              uVar10 = (uint)uVar13;
              uVar8 = 0;
              if ((int)uVar10 < local_b8) {
                uVar8 = ~uVar10 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_c8 = *(UObject **)(local_c0.Data + uVar14);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_c8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_c8);
              }
              pFVar1 = (this->Variables).AllocatorInstance.Data;
              if (((pFVar1 <= (FScriptContainerElement *)&local_c8) &&
                  ((FScriptContainerElement *)&local_c8 <
                   pFVar1 + (longlong)(this->Variables).ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = (this->Variables).ArrayNum;
              if (iVar7 == (this->Variables).ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&(this->Variables).AllocatorInstance,
                                   &(this->Variables).ArrayMax);
              }
              (this->Variables).ArrayNum = iVar7 + 1;
              pFVar1 = (this->Variables).AllocatorInstance.Data +
                       (longlong)(int)(uVar10 + uVar18) * 8;
              memmove(pFVar1 + 8,pFVar1,(longlong)(int)(iVar7 - (uVar10 + uVar18)) << 3);
              *(UObject **)
               ((this->Variables).AllocatorInstance.Data + uVar14 + (longlong)(int)uVar18 * 8) =
                   local_c8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_c8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_c8);
              }
              uVar13 = (ulonglong)(uVar10 + 1);
              uVar14 = uVar14 + 8;
            } while ((int)(uVar10 + 1) < local_b8);
          }
          break;
        }
      }
      uVar14 = uVar14 + 8;
      uVar19 = (ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < (this->Variables).ArrayNum);
  }
LAB_14dc84c2c:
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// MoveVariableBefore @ 14dc84c70

void __thiscall
UMovieGraphConfig::MoveVariableBefore
          (UMovieGraphConfig *this,UMovieGraphVariable *param_1,UMovieGraphVariable *param_2)

{
  TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  TObjectPtr<UMovieGraphVariable>_u_0 local_res8;
  
  this_00 = &this->Variables;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphVariable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this_00->AllocatorInstance).Data;
  for (pFVar5 = pFVar2; pFVar5 != pFVar2 + (longlong)(this->Variables).ArrayNum * 8;
      pFVar5 = pFVar5 + 8) {
    if (*(UMovieGraphVariable **)pFVar5 == param_1) {
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 3);
      goto LAB_14dc84cd7;
    }
  }
  iVar4 = -1;
LAB_14dc84cd7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UMovieGraphVariable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar2 = (this_00->AllocatorInstance).Data;
  for (pFVar5 = pFVar2; pFVar5 != pFVar2 + (longlong)(this->Variables).ArrayNum * 8;
      pFVar5 = pFVar5 + 8) {
    if (*(UMovieGraphVariable **)pFVar5 == param_2) {
      iVar7 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 3);
      goto LAB_14dc84d17;
    }
  }
  iVar7 = -1;
LAB_14dc84d17:
  if (((iVar4 != -1) && (iVar7 != -1)) && (iVar4 != iVar7)) {
    iVar3 = (param_2->Category).Data.ArrayNum;
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&param_1->Category,(wchar_t *)(param_2->Category).Data.AllocatorInstance.Data,iVar6);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieGraphVariable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this_00->AllocatorInstance).Data;
    iVar6 = (this->Variables).ArrayNum;
    for (pFVar5 = pFVar2; pFVar5 != pFVar2 + (longlong)iVar6 * 8; pFVar5 = pFVar5 + 8) {
      if (*(UMovieGraphVariable **)pFVar5 == param_1) {
        iVar3 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 3);
        if (iVar3 != -1) {
          memmove(pFVar2 + (longlong)iVar3 * 8,pFVar2 + (longlong)iVar3 * 8 + 8,
                  (longlong)((iVar6 - iVar3) + -1) << 3);
          piVar1 = &(this->Variables).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
    local_res8.DebugPtr = param_1;
    if (iVar7 < iVar4) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UMovieGraphVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UMovieGraphVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      iVar7 = iVar7 + -1;
    }
    TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>::Insert
              (this_00,(TObjectPtr<UMovieGraphVariable> *)&local_res8.ObjectPtr,iVar7);
  }
  return;
}

// MoveVariableToIndex @ 14dc84e40

void __thiscall
UMovieGraphConfig::MoveVariableToIndex
          (UMovieGraphConfig *this,UMovieGraphVariable *param_1,int param_2)

{
  TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TObjectPtr<UMovieGraphVariable>_u_0 *pTVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TObjectPtr<UMovieGraphVariable>_u_0 local_res10;
  TObjectPtr<UMovieGraphVariable>_u_0 local_res20;
  
  if (((param_1 != (UMovieGraphVariable *)0x0) && (-1 < param_2)) &&
     (param_2 <= (this->Variables).ArrayNum)) {
    this_00 = &this->Variables;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this_00->AllocatorInstance).Data;
    iVar6 = (this->Variables).ArrayNum;
    pFVar9 = pFVar2;
    if (pFVar2 != pFVar2 + (longlong)iVar6 * 8) {
      while (*(UMovieGraphVariable **)pFVar9 != param_1) {
        pFVar9 = pFVar9 + 8;
        if (pFVar9 == pFVar2 + (longlong)iVar6 * 8) {
          return;
        }
      }
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar2 >> 3);
      if ((uVar8 != param_2) && (uVar8 != 0xffffffff)) {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Variables).ArrayNum + ~uVar8;
        pFVar2 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->Variables).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_00->AllocatorInstance,(this->Variables).ArrayNum,
                   &(this->Variables).ArrayMax);
        if (param_2 < (int)uVar8) {
          local_res10.DebugPtr = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          pTVar7 = &local_res10;
        }
        else {
          local_res20.DebugPtr = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          param_2 = param_2 + -1;
          pTVar7 = &local_res20;
        }
        TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>::Insert
                  (this_00,(TObjectPtr<UMovieGraphVariable> *)&pTVar7->ObjectPtr,param_2);
      }
    }
  }
  return;
}

// PostLoad @ 14dc85290

void __thiscall UMovieGraphConfig::PostLoad(UMovieGraphConfig *this)

{
  UObject::PostLoad((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    AddDefaultMembers(this);
    return;
  }
  return;
}

// RecurseUpGlobalsBranchToFindOutputDirectory @ 14dc852d0

void __thiscall
UMovieGraphConfig::RecurseUpGlobalsBranchToFindOutputDirectory
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,FString *param_2,
          TArray<UMovieGraphConfig_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  UMovieGraphSubgraphNode *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieGraphPin *pUVar7;
  UClass *pUVar8;
  UMovieGraphConfig *this_01;
  FScriptContainerElement *pFVar9;
  UMovieGraphConfig *local_58;
  int *local_50;
  UMovieGraphPin *local_48;
  
  if (param_1 != (UMovieGraphNode *)0x0) {
    piVar1 = &param_3->ArrayMax;
    piVar2 = &param_3->ArrayNum;
    local_50 = piVar2;
    while ((pUVar7 = UMovieGraphNode::GetFirstConnectedInputPin(param_1),
           pUVar7 != (UMovieGraphPin *)0x0 &&
           (local_48 = UMovieGraphPin::GetFirstConnectedPin(pUVar7,false),
           local_48 != (UMovieGraphPin *)0x0))) {
      this_00 = (UMovieGraphSubgraphNode *)(local_48->Node).field0_0x0.DebugPtr;
      pFVar3 = (param_3->AllocatorInstance).Data;
      local_58 = this;
      if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
         (((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)*piVar1 * 8 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *piVar2;
      local_50 = piVar2;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,piVar1);
        *piVar2 = iVar6;
      }
      *piVar2 = iVar6 + 1;
      *(UMovieGraphConfig **)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_58;
      if (this_00 == (UMovieGraphSubgraphNode *)0x0) {
LAB_14dc85528:
        if (param_1 != (UMovieGraphNode *)0x0) {
          pUVar8 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
          iVar6 = (int)pUVar8->_padding_;
          if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar8->_padding_)) {
            if (1 < (param_2->Data).ArrayNum) {
              return;
            }
            if ((param_1[1]._padding_ & 1) != 0) {
              ::FString::operator=(param_2,(FString *)&param_1[1]._padding_);
            }
          }
        }
      }
      else {
        pUVar8 = Z_Construct_UClass_UMovieGraphSubgraphNode_NoRegister();
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) goto LAB_14dc85528;
        this_01 = UMovieGraphSubgraphNode::GetSubgraphAsset(this_00);
        pFVar9 = (param_3->AllocatorInstance).Data;
        pFVar3 = pFVar9 + (longlong)*piVar2 * 8;
        for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
          if (*(UMovieGraphConfig **)pFVar9 == this_01) {
            return;
          }
        }
        if ((((this_01 != (UMovieGraphConfig *)0x0) && ((param_2->Data).ArrayNum < 2)) &&
            (pUVar7 = UMovieGraphNode::GetInputPin
                                ((this_01->OutputNode).field0_0x0.DebugPtr,
                                 &UMovieGraphNode::GlobalsPinName,BuiltInOrDynamic),
            pUVar7 != (UMovieGraphPin *)0x0)) &&
           (bVar5 = UMovieGraphPin::IsConnected(pUVar7), bVar5)) {
          RecurseUpGlobalsBranchToFindOutputDirectory
                    (this_01,(pUVar7->Node).field0_0x0.DebugPtr,param_2,param_3);
        }
        if ((*piVar2 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_3->ArrayNum + -1;
        param_3->ArrayNum = iVar6;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_3->AllocatorInstance,iVar6,&param_3->ArrayMax);
      }
      if (1 < (param_2->Data).ArrayNum) {
        return;
      }
      param_1 = (local_48->Node).field0_0x0.DebugPtr;
      if (param_1 == (UMovieGraphNode *)0x0) {
        return;
      }
    }
  }
  return;
}

// RemoveAllInboundEdges @ 14dc862b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::RemoveAllInboundEdges(UMovieGraphConfig *this,UMovieGraphNode *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  FString local_28;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_28,L"%hs: Invalid Edge Nodes");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Error,(FName)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  pFVar5 = (param_1->InputPins).AllocatorInstance.Data;
  iVar2 = (param_1->InputPins).ArrayNum;
  bVar6 = false;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->InputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    bVar3 = UMovieGraphPin::BreakAllEdges(*(UMovieGraphPin **)pFVar5);
    bVar6 = (bool)(bVar6 | bVar3);
    pFVar5 = pFVar5 + 8;
  }
  return bVar6;
}

// RemoveAllOutboundEdges @ 14dc86380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::RemoveAllOutboundEdges(UMovieGraphConfig *this,UMovieGraphNode *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  FString local_28;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_28,L"%hs: Invalid Edge Nodes");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Error,(FName)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  pFVar5 = (param_1->OutputPins).AllocatorInstance.Data;
  iVar2 = (param_1->OutputPins).ArrayNum;
  bVar6 = false;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->OutputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    bVar3 = UMovieGraphPin::BreakAllEdges(*(UMovieGraphPin **)pFVar5);
    bVar6 = (bool)(bVar6 | bVar3);
    pFVar5 = pFVar5 + 8;
  }
  return bVar6;
}

// RemoveInboundEdges @ 14dc86450

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::RemoveInboundEdges
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,FName *param_2)

{
  bool bVar1;
  UMovieGraphPin *this_00;
  ForAnyElementType FVar2;
  FString local_18;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%hs: Invalid Edge Nodes");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Error,(FName)0x0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  bVar1 = false;
  this_00 = UMovieGraphNode::GetInputPin(param_1,param_2,BuiltInOrDynamic);
  if (this_00 != (UMovieGraphPin *)0x0) {
    bVar1 = UMovieGraphPin::BreakAllEdges(this_00);
  }
  return bVar1;
}

// RemoveLabeledEdge @ 14dc864f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::RemoveLabeledEdge
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,FName *param_2,UMovieGraphNode *param_3,
          FName *param_4)

{
  bool bVar1;
  UMovieGraphPin *pUVar2;
  UMovieGraphPin *this_00;
  ForAnyElementType FVar3;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1 == (UMovieGraphNode *)0x0) || (param_3 == (UMovieGraphNode *)0x0)) {
    ::FString::PrintfImpl(&local_38,L"%hs: Invalid Edge Nodes");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
  }
  else {
    pUVar2 = UMovieGraphNode::GetOutputPin(param_1,param_2);
    if (pUVar2 == (UMovieGraphPin *)0x0) {
      ::FName::ToString(param_2,&local_28);
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_38);
      ::FString::PrintfImpl(&local_48,L"%hs: FromNode: %s does not have a pin with the label: %s");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar3.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        FVar3.Data = local_38.Data.AllocatorInstance.Data;
      }
    }
    else {
      this_00 = UMovieGraphNode::GetInputPin(param_3,param_4,BuiltInOrDynamic);
      if (this_00 != (UMovieGraphPin *)0x0) {
        bVar1 = UMovieGraphPin::BreakEdgeTo(this_00,pUVar2);
        return bVar1;
      }
      ::FName::ToString(param_4,&local_28);
      local_res10 = (FName)param_3->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      ::FString::PrintfImpl(&local_38,L"%hs: ToNode: %s does not have a pin with the label: %s");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar3.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        FVar3.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// RemoveNode @ 14dc866e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieGraphConfig::RemoveNode(UMovieGraphConfig *this,UMovieGraphNode *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_28;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl
              (&local_28,
               L"%hs: Could not remove invalid node. Is it from a plugin that\'s not currently loaded?"
              );
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Error,(FName)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar6 = (param_1->InputPins).AllocatorInstance.Data;
    iVar2 = (param_1->InputPins).ArrayNum;
    pFVar3 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->InputPins).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar3) break;
      UMovieGraphPin::BreakAllEdges(*(UMovieGraphPin **)pFVar6);
      pFVar6 = pFVar6 + 8;
    }
    pFVar6 = (param_1->OutputPins).AllocatorInstance.Data;
    iVar2 = (param_1->OutputPins).ArrayNum;
    pFVar3 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->OutputPins).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar3) break;
      UMovieGraphPin::BreakAllEdges(*(UMovieGraphPin **)pFVar6);
      pFVar6 = pFVar6 + 8;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (this->AllNodes).AllocatorInstance.Data;
    iVar2 = (this->AllNodes).ArrayNum;
    pFVar6 = pFVar3;
    if (pFVar3 != pFVar3 + (longlong)iVar2 * 8) {
      while (*(UMovieGraphNode **)pFVar6 != param_1) {
        pFVar6 = pFVar6 + 8;
        if (pFVar6 == pFVar3 + (longlong)iVar2 * 8) {
          return false;
        }
      }
      iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar3 >> 3);
      if (iVar5 != -1) {
        memmove(pFVar3 + (longlong)iVar5 * 8,pFVar3 + (longlong)iVar5 * 8 + 8,
                (longlong)((iVar2 - iVar5) + -1) << 3);
        piVar1 = &(this->AllNodes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        return true;
      }
    }
  }
  return false;
}

// RemoveNodes @ 14dc86850

bool __thiscall
UMovieGraphConfig::RemoveNodes
          (UMovieGraphConfig *this,TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  bVar5 = false;
  pFVar2 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UMovieGraphNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar2) break;
    bVar3 = RemoveNode(this,*(UMovieGraphNode **)pFVar4);
    bVar5 = (bool)(bVar5 | bVar3);
    pFVar4 = pFVar4 + 8;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return bVar5;
}

// RemoveOutboundEdges @ 14dc868e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphConfig::RemoveOutboundEdges
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,FName *param_2)

{
  bool bVar1;
  UMovieGraphPin *this_00;
  ForAnyElementType FVar2;
  FString local_18;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%hs: Invalid Edge Nodes");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Error,(FName)0x0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  bVar1 = false;
  this_00 = UMovieGraphNode::GetOutputPin(param_1,param_2);
  if (this_00 != (UMovieGraphPin *)0x0) {
    bVar1 = UMovieGraphPin::BreakAllEdges(this_00);
  }
  return bVar1;
}

// StaticRegisterNativesUMovieGraphConfig @ 14dc89b30

void __cdecl UMovieGraphConfig::StaticRegisterNativesUMovieGraphConfig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x23;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphConfig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateGlobalVariableValues @ 14dc8c5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphConfig::UpdateGlobalVariableValues(UMovieGraphConfig *this,UMovieGraphPipeline *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FMovieGraphTraversalContext local_108;
  
  UMovieGraphPipeline::GetCurrentTraversalContext(param_1,&local_108,true);
  pFVar3 = (this->GlobalVariables).AllocatorInstance.Data;
  iVar2 = (this->GlobalVariables).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GlobalVariables).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphGlobalVariable>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x2d0))(*(longlong **)pFVar3,&local_108,param_1);
    pFVar3 = pFVar3 + 8;
  }
  if (local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// VisitDownstreamNodes @ 14dc8e2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieGraphConfig::VisitDownstreamNodes
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,
          TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  VisitDownstreamNodes_Recursive
            (this,param_1,param_2,
             (TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// VisitDownstreamNodes_Recursive @ 14dc8e3b0

void __thiscall
UMovieGraphConfig::VisitDownstreamNodes_Recursive
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,
          TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
          *param_2,TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator>
                   *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphPin *this_00;
  longlong lVar3;
  UMovieGraphNode *pUVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  UMovieGraphNode *local_res10;
  undefined1 local_78 [4];
  uint local_74;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_60;
  FReadAccessScope local_50;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    FVar13 = (param_3->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&param_3->Hash;
    }
    iVar9 = *(int *)((longlong)FVar13 +
                    (ulonglong)(param_3->HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(UMovieGraphNode **)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0x10) ==
            param_1) {
          return;
        }
        iVar9 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  local_res10 = param_1;
  TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator>::
  Emplace<UMovieGraphNode_*_const_&>(param_3,(UMovieGraphNode **)&local_74,(bool *)&local_res10);
  local_74 = (param_1->OutputPins).ArrayNum;
  uVar11 = (ulonglong)(int)local_74;
  pFVar14 = (param_1->OutputPins).AllocatorInstance.Data;
  local_68 = pFVar14 + uVar11 * 8;
  do {
    pFVar1 = local_68;
    local_70 = pFVar14;
    if ((param_1->OutputPins).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<UMovieGraphPin_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    this_00 = *(UMovieGraphPin **)pFVar14;
    UMovieGraphPin::GetAllConnectedPins(this_00,&local_60);
    iVar9 = local_60.ArrayNum;
    pFVar1 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
    FVar15.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if (local_60.ArrayNum != iVar9) {
        `TCheckedPointerIterator<UMovieGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      pFVar14 = local_70;
      if (FVar15.Data == pFVar1) break;
      lVar3 = *(longlong *)FVar15.Data;
      if (lVar3 == 0) {
LAB_14dc8e5ee:
        FVar15.Data = FVar15.Data + 8;
      }
      else {
        if (*(char *)(lVar3 + 0x49) == '\0') {
          pUVar4 = (this_00->Node).field0_0x0.DebugPtr;
          if (pUVar4 != (UMovieGraphNode *)0x0) {
            pUVar10 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
            lVar5 = pUVar4->_padding_;
            iVar2 = (int)pUVar10->_padding_;
            if ((iVar2 <= *(int *)(lVar5 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar10->_padding_)) goto LAB_14dc8e557;
          }
          goto LAB_14dc8e5ee;
        }
LAB_14dc8e557:
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
        if ((*(int *)&param_2->field_0x10 == 0) ||
           ((*(longlong **)&param_2->field_0x8 == (longlong *)0x0 ||
            (cVar7 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar7 == '\0')))) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_50);
LAB_14dc8e5d7:
          VisitDownstreamNodes_Recursive(this,*(UMovieGraphNode **)(lVar3 + 0x28),param_2,param_3);
          goto LAB_14dc8e5ee;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        uVar6 = *(undefined8 *)(lVar3 + 0x28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
        if (*(int *)&param_2->field_0x10 == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)&param_2->field_0x8;
        }
        cVar7 = (**(code **)(*plVar12 + 0x60))(plVar12,uVar6,lVar3);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        if (cVar7 != '\0') goto LAB_14dc8e5d7;
        FVar15.Data = FVar15.Data + 8;
      }
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    pFVar14 = pFVar14 + 8;
    uVar11 = (ulonglong)local_74;
    param_1 = local_res10;
  } while( true );
}

// VisitUpstreamNodes @ 14dc8e660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieGraphConfig::VisitUpstreamNodes
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,
          TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  VisitUpstreamNodes_Recursive
            (this,param_1,param_2,
             (TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// VisitUpstreamNodes_Recursive @ 14dc8e760

void __thiscall
UMovieGraphConfig::VisitUpstreamNodes_Recursive
          (UMovieGraphConfig *this,UMovieGraphNode *param_1,
          TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
          *param_2,TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator>
                   *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphPin *this_00;
  longlong lVar3;
  UMovieGraphNode *pUVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  UMovieGraphNode *local_res10;
  undefined1 local_78 [4];
  uint local_74;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_60;
  FReadAccessScope local_50;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    FVar13 = (param_3->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&param_3->Hash;
    }
    iVar9 = *(int *)((longlong)FVar13 +
                    (ulonglong)(param_3->HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(UMovieGraphNode **)(*(longlong *)&param_3->Elements + (longlong)iVar9 * 0x10) ==
            param_1) {
          return;
        }
        iVar9 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  local_res10 = param_1;
  TSet<UMovieGraphNode_*,DefaultKeyFuncs<UMovieGraphNode_*,0>,FDefaultSetAllocator>::
  Emplace<UMovieGraphNode_*_const_&>(param_3,(UMovieGraphNode **)&local_74,(bool *)&local_res10);
  local_74 = (param_1->InputPins).ArrayNum;
  uVar11 = (ulonglong)(int)local_74;
  pFVar14 = (param_1->InputPins).AllocatorInstance.Data;
  local_68 = pFVar14 + uVar11 * 8;
  do {
    pFVar1 = local_68;
    local_70 = pFVar14;
    if ((param_1->InputPins).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<UMovieGraphPin_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    this_00 = *(UMovieGraphPin **)pFVar14;
    UMovieGraphPin::GetAllConnectedPins(this_00,&local_60);
    iVar9 = local_60.ArrayNum;
    pFVar1 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
    FVar15.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if (local_60.ArrayNum != iVar9) {
        `TCheckedPointerIterator<UMovieGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      pFVar14 = local_70;
      if (FVar15.Data == pFVar1) break;
      lVar3 = *(longlong *)FVar15.Data;
      if (lVar3 == 0) {
LAB_14dc8e99e:
        FVar15.Data = FVar15.Data + 8;
      }
      else {
        if (*(char *)(lVar3 + 0x49) == '\0') {
          pUVar4 = (this_00->Node).field0_0x0.DebugPtr;
          if (pUVar4 != (UMovieGraphNode *)0x0) {
            pUVar10 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
            lVar5 = pUVar4->_padding_;
            iVar2 = (int)pUVar10->_padding_;
            if ((iVar2 <= *(int *)(lVar5 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar10->_padding_)) goto LAB_14dc8e907;
          }
          goto LAB_14dc8e99e;
        }
LAB_14dc8e907:
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
        if ((*(int *)&param_2->field_0x10 == 0) ||
           ((*(longlong **)&param_2->field_0x8 == (longlong *)0x0 ||
            (cVar7 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar7 == '\0')))) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_50);
LAB_14dc8e987:
          VisitUpstreamNodes_Recursive(this,*(UMovieGraphNode **)(lVar3 + 0x28),param_2,param_3);
          goto LAB_14dc8e99e;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        uVar6 = *(undefined8 *)(lVar3 + 0x28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
        if (*(int *)&param_2->field_0x10 == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)&param_2->field_0x8;
        }
        cVar7 = (**(code **)(*plVar12 + 0x60))(plVar12,uVar6,lVar3);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        if (cVar7 != '\0') goto LAB_14dc8e987;
        FVar15.Data = FVar15.Data + 8;
      }
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    pFVar14 = pFVar14 + 8;
    uVar11 = (ulonglong)local_74;
    param_1 = local_res10;
  } while( true );
}

// execAddInput @ 14dc8fa50

void __cdecl UMovieGraphConfig::execAddInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphInput *pUVar2;
  FText *pFVar3;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddInput((UMovieGraphConfig *)param_1,pFVar3);
  *(UMovieGraphInput **)param_3 = pUVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execAddLabeledEdge @ 14dc8fb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieGraphConfig::execAddLabeledEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphNode *this;
  UMovieGraphNode *pUVar2;
  bool bVar3;
  int iVar4;
  UMovieGraphPin *this_00;
  UMovieGraphPin *this_01;
  ForAnyElementType FVar5;
  undefined1 uVar6;
  FName *this_02;
  FName *this_03;
  FName local_res10;
  FName local_res18;
  UMovieGraphNode *local_res20;
  UMovieGraphNode *local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_98 = (UMovieGraphNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UMovieGraphNode *)0x0;
  this_03 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this_03 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_98;
  this = local_res20;
  this_02 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this_02 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_98 == (UMovieGraphNode *)0x0) || (local_res20 == (UMovieGraphNode *)0x0)) {
    ::FString::PrintfImpl(&local_68,L"%hs: Invalid Edge Nodes");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  this_00 = UMovieGraphNode::GetOutputPin(local_98,this_03);
  if (this_00 == (UMovieGraphPin *)0x0) {
    ::FName::ToString(this_03,&local_68);
    local_90 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_90,&local_78);
    ::FString::PrintfImpl(&local_88,L"%hs: FromNode: %s does not have a pin with the label: %s");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  else {
    this_01 = UMovieGraphNode::GetInputPin(this,this_02,BuiltInOrDynamic);
    if (this_01 != (UMovieGraphPin *)0x0) {
      bVar3 = UMovieGraphPin::CanCreateConnection(this_00,this_01);
      if (bVar3) {
        uVar6 = 0;
        bVar3 = UMovieGraphPin::AllowsMultipleConnections(this_01);
        if ((!bVar3) && (iVar4 = UMovieGraphPin::EdgeCount(this_01), 0 < iVar4)) {
          UMovieGraphPin::BreakAllEdges(this_01);
          uVar6 = 1;
        }
        UMovieGraphPin::AddEdgeTo(this_00,this_01);
        *(undefined1 *)param_3 = uVar6;
        return;
      }
      ::FName::ToString(this_02,&local_48);
      local_90 = (FName)this->_padding_;
      ::FName::ToString(&local_90,&local_68);
      ::FName::ToString(this_03,&local_58);
      local_90 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_90,&local_88);
      ::FString::PrintfImpl
                (&local_78,L"%hs: FromNode %s\'s pin %s cannot be connected to ToNode %s\'s pin %s "
                );
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_14dc8fd23;
    }
    ::FName::ToString(this_02,&local_68);
    local_90 = (FName)this->_padding_;
    ::FName::ToString(&local_90,&local_88);
    ::FString::PrintfImpl(&local_78,L"%hs: ToNode: %s does not have a pin with the label: %s");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
    FVar5.Data = local_88.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
    local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  }
LAB_14dc8fd23:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execAddOutput @ 14dc8ff90

void __cdecl UMovieGraphConfig::execAddOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphOutput *pUVar2;
  FText *pFVar3;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddOutput((UMovieGraphConfig *)param_1,pFVar3);
  *(UMovieGraphOutput **)param_3 = pUVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execAddVariable @ 14dc90050

void __cdecl UMovieGraphConfig::execAddVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphVariable *pUVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddVariable((UMovieGraphConfig *)param_1,local_res10);
  *(UMovieGraphVariable **)param_3 = pUVar2;
  return;
}

// execCreateFlattenedGraph @ 14dc90230

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execCreateFlattenedGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphEvaluatedConfig *pUVar2;
  FMovieGraphTraversalContext *pFVar3;
  FString *pFVar4;
  FString local_118;
  FMovieGraphTraversalContext local_108;
  
  local_108.ShotIndex = 0;
  local_108.ShotCount = 0;
  local_108.Job.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)0x0;
  local_108.Shot.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0;
  local_108.RootGraph.field0_0x0.DebugPtr = (TObjectPtr<UMovieGraphConfig>_u_0)0x0;
  local_108.RenderDataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
  local_108.RenderDataIdentifier.RootBranchName.Number = 0;
  local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_108.RenderDataIdentifier.LayerName.Data.ArrayNum = 0;
  local_108.RenderDataIdentifier.LayerName.Data.ArrayMax = 0;
  local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_108.RenderDataIdentifier.RendererName.Data.ArrayNum = 0;
  local_108.RenderDataIdentifier.RendererName.Data.ArrayMax = 0;
  local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_108.RenderDataIdentifier.SubResourceName.Data.ArrayNum = 0;
  local_108.RenderDataIdentifier.SubResourceName.Data.ArrayMax = 0;
  local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_108.RenderDataIdentifier.CameraName.Data.ArrayNum = 0;
  local_108.RenderDataIdentifier.CameraName.Data.ArrayMax = 0;
  local_108.Time.OutputFrameNumber = 0;
  local_108.Time.ShotOutputFrameNumber = 0;
  local_108.Time.RenderedFrameNumber = 0;
  local_108.Time.FrameDeltaTime = 0.0;
  local_108.Time.WorldTimeDilation = 0.0;
  local_108.Time.bHasRelativeTimeBeenUsed = false;
  local_108.Time.WorldSeconds = 0.0;
  local_108.Time.MotionBlurFraction = 0.0;
  local_108.Time.FrameRate.Numerator = 0;
  local_108.Time.FrameRate.Denominator = 0;
  local_108.Time.TemporalSampleIndex = 0;
  local_108.Time.TemporalSampleCount = 0;
  local_108.Time.SpatialSampleIndex = 0;
  local_108.Time.SpatialSampleCount = 0;
  local_108.Time.bIsFirstTemporalSampleForFrame = false;
  local_108.Time.bIsLastTemporalSampleForFrame = false;
  local_108.Time.bDiscardOutput = false;
  local_108.Time.bRequiresAccumulator = false;
  local_108.Time.EvaluatedConfig.field0_0x0.DebugPtr =
       (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
  local_108.Time.RootTimeCode.Hours = 0;
  local_108.Time.RootTimeCode.Minutes = 0;
  local_108.Time.RootTimeCode.Seconds = 0;
  local_108.Time.RootTimeCode.Frames = 0;
  local_108.Time.RootTimeCode.Subframe = 0.0;
  local_108.Time.RootTimeCode.bDropFrameFormat = false;
  local_108.Time.RootFrameNumber.Value = 0;
  local_108.Time.ShotTimeCode.Hours = 0;
  local_108.Time.ShotTimeCode.Minutes = 0;
  local_108.Time.ShotTimeCode.Seconds = 0;
  local_108.Time.ShotTimeCode.Frames = 0;
  local_108.Time.ShotTimeCode.Subframe = 0.0;
  local_108.Time.ShotTimeCode.bDropFrameFormat = false;
  local_108.Time.ShotFrameNumber.Value = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  pFVar3 = &local_108;
  if ((FMovieGraphTraversalContext *)param_2->MostRecentPropertyAddress !=
      (FMovieGraphTraversalContext *)0x0) {
    pFVar3 = (FMovieGraphTraversalContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pFVar4 = &local_118;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateFlattenedGraph((UMovieGraphConfig *)param_1,pFVar3,pFVar4);
  *(UMovieGraphEvaluatedConfig **)param_3 = pUVar2;
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateNodeByClass @ 14dc90410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execCreateNodeByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UClass *pUVar9;
  UMovieGraphNode *this;
  FGuid *pFVar10;
  wchar_t *pwVar11;
  UClass *pUVar12;
  longlong *plVar13;
  undefined1 auStack_f8 [32];
  UClass *local_d8;
  FGuid local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pUVar12 = local_d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_d8 == (UClass *)0x0) goto LAB_14dc905ed;
  }
  else {
    if (local_d8 == (UClass *)0x0) goto LAB_14dc905ed;
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  pUVar9 = Z_Construct_UClass_UMovieGraphNode_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
LAB_14dc905ed:
    ::FString::PrintfImpl
              ((FString *)&local_d0,
               L"%hs: Invalid PipelineGraphNodeClass. Please specify a valid class.");
    pwVar11 = L"";
    if (local_d0.C != 0) {
      pwVar11 = (wchar_t *)local_d0._0_8_;
    }
    FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
    if ((wchar_t *)local_d0._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  iVar1 = (int)pUVar9->_padding_;
  if (((int)pUVar12->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_14dc905ed;
  local_d0.A = 0;
  local_d0.B = 0;
  pUVar9 = Z_Construct_UClass_UMovieGraphNode_NoRegister();
  uVar7 = local_d0._0_8_;
  if (pUVar9 != (UClass *)0x0) {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar12->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14dc90524;
  }
  pUVar12 = (UClass *)0x0;
LAB_14dc90524:
  if ((FName)local_d0._0_8_ == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = Z_Construct_UClass_UMovieGraphNode_NoRegister();
  CheckIsClassChildOf_Internal(pUVar9,pUVar12);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar12);
  uVar8 = local_d0._0_8_;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_d0.A = (uint)uVar7;
  local_d0.B = SUB84(uVar7,4);
  local_b8._16_4_ = local_d0.A;
  local_b8._20_4_ = local_d0.B;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_d0._0_8_ = uVar8;
  local_b8._8_8_ = param_1;
  this = (UMovieGraphNode *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  UMovieGraphNode::UpdateDynamicProperties(this);
  UMovieGraphNode::UpdatePins(this);
  pFVar10 = FGuid::NewGuid(&local_d0);
  uVar4 = pFVar10->B;
  uVar5 = pFVar10->C;
  uVar6 = pFVar10->D;
  (this->Guid).A = pFVar10->A;
  (this->Guid).B = uVar4;
  (this->Guid).C = uVar5;
  (this->Guid).D = uVar6;
  AddNode((UMovieGraphConfig *)param_1,this);
  *(UMovieGraphNode **)param_3 = this;
  return;
}

// execDeleteMember @ 14dc90660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieGraphConfig::execDeleteMember(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  UMovieGraphVariable *pUVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  UMovieGraphVariable *local_res10;
  FName local_res18;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  local_res10 = (UMovieGraphVariable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UMovieGraphVariable *)0x0) {
    cVar4 = (**(code **)(local_res10->_padding_ + 0x2c0))(local_res10);
    if (cVar4 == '\0') {
      local_30 = (int)pUVar3->_padding_;
      lVar8 = (longlong)local_30;
      _Src = (void *)pUVar3->_padding_;
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
      local_38.Data = (FScriptContainerElement *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30,0,&local_38,local_30,&local_2c);
        memcpy(local_38.Data,_Src,lVar8 * 2);
      }
      ::FString::PrintfImpl
                (&local_28,
                 L"%hs: The member \'%s\' cannot be deleted because it is flagged as non-deletable."
                );
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Error,local_res18);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
    pUVar6 = UMovieGraphVariable::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      bVar5 = DeleteVariableMember((UMovieGraphConfig *)param_1,pUVar3);
      *(bool *)param_3 = bVar5;
      return;
    }
    pUVar6 = UMovieGraphInput::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      bVar5 = DeleteInputMember((UMovieGraphConfig *)param_1,(UMovieGraphInput *)pUVar3);
      *(bool *)param_3 = bVar5;
      return;
    }
    pUVar6 = UMovieGraphOutput::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      bVar5 = DeleteOutputMember((UMovieGraphConfig *)param_1,(UMovieGraphOutput *)pUVar3);
      *(bool *)param_3 = bVar5;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execDuplicateVariable @ 14dc908b0

void __cdecl
UMovieGraphConfig::execDuplicateVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  UMovieGraphValueContainer *this;
  EMovieGraphValueType EVar2;
  FName *pFVar3;
  UMovieGraphVariable *this_00;
  UObject *pUVar4;
  FString *pFVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  UMovieGraphValueContainer *local_res10;
  FName local_res18 [2];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  
  local_res10 = (UMovieGraphValueContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieGraphValueContainer *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_40 = (int)local_res10[1]._padding_;
  lVar7 = (longlong)local_40;
  _Src = (void *)local_res10[1]._padding_;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar7 * 2);
  }
  iVar6 = local_40 + -1;
  if (local_40 == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FName::FName(local_res18,iVar6,(wchar_t *)local_48.Data,FNAME_Add);
  this_00 = AddVariable((UMovieGraphConfig *)param_1,*pFVar3);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (this_00 != (UMovieGraphVariable *)0x0) {
    pUVar4 = UMovieGraphValueContainer::GetValueTypeObject(this);
    EVar2 = UMovieGraphValueContainer::GetValueType(this);
    UMovieGraphValueContainer::SetValueType((UMovieGraphValueContainer *)this_00,EVar2,pUVar4);
    pFVar5 = UMovieGraphValueContainer::GetValueSerializedString(this,&local_38);
    UMovieGraphValueContainer::SetValueSerializedString((UMovieGraphValueContainer *)this_00,pFVar5)
    ;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    UMovieGraphVariable::SetCategory(this_00,(FString *)&this[1].Value.Value.StructMemory);
    iVar6 = (int)this[1]._padding_;
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange((FString *)&this_00->_padding_,(wchar_t *)this[1]._padding_,iVar8);
  }
  *(UMovieGraphVariable **)param_3 = this_00;
  return;
}

// execGetAllContainedSubgraphs @ 14dc90a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphConfig::execGetAllContainedSubgraphs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator> *)
           local_78;
  if ((TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator> *)0x0)
  {
    pTVar3 = (TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllContainedSubgraphs((UMovieGraphConfig *)param_1,pTVar3);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execGetBranchNames @ 14dc90f60

void __cdecl UMovieGraphConfig::execGetBranchNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = *(int *)&param_1[3].field_0x8;
  lVar6 = (longlong)local_50;
  pvVar2 = *(void **)(param_1 + 3);
  if (local_50 == 0) {
    local_4c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pvVar2,lVar6 << 3);
    iVar5 = local_50;
  }
  pFVar1 = local_58.Data + (longlong)iVar5 * 8;
  FVar7.Data = local_58.Data;
  iVar4 = iVar5;
  while( true ) {
    if (iVar4 != iVar5) {
      `TCheckedPointerIterator<UMovieGraphOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = *(int *)(*(longlong *)FVar7.Data + 0x58);
    lVar6 = (longlong)local_40;
    pvVar2 = *(void **)(*(longlong *)FVar7.Data + 0x50);
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pvVar2,lVar6 * 2);
    }
    iVar4 = local_40 + -1;
    if (local_40 == 0) {
      iVar4 = 0;
    }
    pFVar3 = ::FName::FName(&local_res18,iVar4,(wchar_t *)local_48.Data,FNAME_Add);
    local_res10 = *pFVar3;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_68,&local_res10);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    FVar7.Data = FVar7.Data + 8;
    iVar4 = local_50;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetDownstreamBranchNames @ 14dc928f0

void __cdecl
UMovieGraphConfig::execGetDownstreamBranchNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  UMovieGraphPin *local_res18;
  UMovieGraphNode *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20 = (UMovieGraphNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UMovieGraphPin *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetDownstreamBranchNames
                     ((UMovieGraphConfig *)param_1,&local_28,local_res20,local_res18,
                      local_res10[0] != 0);
  if (param_3 != pTVar2) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetInputNode @ 14dc931b0

void __cdecl UMovieGraphConfig::execGetInputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x10;
  return;
}

// execGetInputs @ 14dc931e0

void __cdecl UMovieGraphConfig::execGetInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[2].field_0x20;
  _Src = *(void **)&param_1[2].field_0x18;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetNodeForBranch @ 14dc93670

void __cdecl UMovieGraphConfig::execGetNodeForBranch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FName *pFVar3;
  int local_res10 [2];
  FName local_res18;
  UClass *local_res20;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  pFVar3 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetNodesForBranch((UMovieGraphConfig *)param_1,&local_38,local_res20,pFVar3,local_res10[0] != 0);
  if (0 < local_38.ArrayNum) {
    uVar2 = *(undefined8 *)local_38.AllocatorInstance.Data;
    FMemory::Free(local_38.AllocatorInstance.Data);
    *(undefined8 *)param_3 = uVar2;
    return;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetNodeForTag @ 14dc937f0

void __cdecl UMovieGraphConfig::execGetNodeForTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  int local_res10 [2];
  FName local_res18;
  UClass *local_res20;
  FString local_48;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar2 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetNodesForTag((UMovieGraphConfig *)param_1,&local_38,&local_48,local_res20,local_res18,
                 local_res10[0] != 0);
  if (local_38.ArrayNum < 1) {
    if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14dc9394f;
  }
  else {
    uVar2 = *(undefined8 *)local_38.AllocatorInstance.Data;
  }
  FMemory::Free(local_38.AllocatorInstance.Data);
LAB_14dc9394f:
  *(undefined8 *)param_3 = uVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNodesForBranch @ 14dc93980

void __cdecl
UMovieGraphConfig::execGetNodesForBranch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  int local_res10 [2];
  FName local_res18;
  UClass *local_res20;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  pFVar3 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetNodesForBranch((UMovieGraphConfig *)param_1,&local_38,local_res20,pFVar3,
                             local_res10[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execGetNodesForTag @ 14dc93b10

void __cdecl UMovieGraphConfig::execGetNodesForTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  FName local_res18;
  UClass *local_res20;
  FString local_38;
  TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetNodesForTag((UMovieGraphConfig *)param_1,&local_28,&local_38,local_res20,local_res18,
                          local_res10[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetOutputDirectory @ 14dc93ce0

void __cdecl
UMovieGraphConfig::execGetOutputDirectory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetOutputDirectory((UMovieGraphConfig *)param_1,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetOutputNode @ 14dc93d90

void __cdecl UMovieGraphConfig::execGetOutputNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  return;
}

// execGetOutputs @ 14dc93dc0

void __cdecl UMovieGraphConfig::execGetOutputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[3].field_0x8;
  _Src = *(void **)(param_1 + 3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetUpstreamBranchNames @ 14dc95190

void __cdecl
UMovieGraphConfig::execGetUpstreamBranchNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong lVar4;
  UMovieGraphNode *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  int iVar10;
  bool bVar11;
  int local_res10 [2];
  longlong local_res18;
  UMovieGraphNode *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  bool local_78;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  local_res20 = (UMovieGraphNode *)0x0;
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
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res20;
  lVar4 = local_res18;
  bVar11 = local_res10[0] != 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = Z_Construct_UClass_UMovieGraphInputNode_NoRegister();
  lVar3 = pUVar5->_padding_;
  iVar10 = (int)pUVar6->_padding_;
  if (((iVar10 <= *(int *)(lVar3 + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar10 * 8) ==
       &pUVar6->_padding_)) && (lVar4 != 0)) {
    pFVar7 = ::FName::ToString((FName *)(lVar4 + 0x30),(FString *)&local_88);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(&local_98,pFVar7);
    if (local_88 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_88);
    }
  }
  local_88 = &local_98;
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  uStack_80 = bVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_68;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_68);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUMovieGraphNode__PEBVUMovieGraphPin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = local_88;
    puVar8[4] = CONCAT71(uStack_7f,uStack_80);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  VisitUpstreamNodes((UMovieGraphConfig *)param_1,pUVar5,
                     (TDelegate<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
                      *)local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_88);
  if ((local_68.DelegateSize != 0) &&
     (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT71(uStack_7f,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  if (param_3 == &local_98) {
    iVar10 = local_98.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_98.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_98.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_98.ArrayMax;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = 0;
  }
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,iVar10);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// execGetVariableByGuid @ 14dc95430

void __cdecl
UMovieGraphConfig::execGetVariableByGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  int *piVar7;
  undefined1 local_res10 [8];
  int local_48 [4];
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  piVar7 = local_48;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetVariables((UMovieGraphConfig *)param_1,&local_38,true);
  iVar4 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar4 * 8;
  uVar5 = local_38._8_8_;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<UMovieGraphVariable_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      uVar5 = local_38._8_8_;
    }
    if (FVar6.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar6.Data;
    if (((*(int *)(lVar3 + 0x6c) == piVar7[3] && *(int *)(lVar3 + 0x68) == piVar7[2]) &&
        *(int *)(lVar3 + 100) == piVar7[1]) && *(int *)(lVar3 + 0x60) == *piVar7) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      *(longlong *)param_3 = lVar3;
      return;
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetVariableByName @ 14dc95570

void __cdecl
UMovieGraphConfig::execGetVariableByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetVariables((UMovieGraphConfig *)param_1,&local_38,true);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UMovieGraphVariable_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar7.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      lVar6 = 0;
      goto LAB_14dc956f9;
    }
    lVar6 = *(longlong *)FVar7.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = *(int *)(lVar6 + 0x58);
    lVar5 = (longlong)local_50;
    _Src = *(void **)(lVar6 + 0x50);
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,_Src,lVar5 * 2);
    }
    if (local_50 == (int)local_40) {
      if (local_50 < 2) {
        bVar8 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_58.Data,local_48);
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = (int)local_40 + local_50 == 1;
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (bVar8) break;
    FVar7.Data = FVar7.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
LAB_14dc956f9:
  *(longlong *)param_3 = lVar6;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetVariables @ 14dc95a90

void __cdecl UMovieGraphConfig::execGetVariables(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetVariables((UMovieGraphConfig *)param_1,&local_18,local_res10[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execMoveCategoryBefore @ 14dc95d80

void __cdecl
UMovieGraphConfig::execMoveCategoryBefore(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MoveCategoryBefore((UMovieGraphConfig *)param_1,&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMoveVariableBefore @ 14dc95e80

void __cdecl
UMovieGraphConfig::execMoveVariableBefore(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphVariable *local_res10;
  UMovieGraphVariable *local_res20;
  
  local_res20 = (UMovieGraphVariable *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (UMovieGraphVariable *)0x0;
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
  MoveVariableBefore((UMovieGraphConfig *)param_1,local_res20,local_res10);
  return;
}

// execMoveVariableToIndex @ 14dc95f50

void __cdecl
UMovieGraphConfig::execMoveVariableToIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  void *_Dst;
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  UMovieGraphVariable *pUVar4;
  bool bVar5;
  int iVar6;
  TObjectPtr<UMovieGraphVariable>_u_0 *pTVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint local_res10 [4];
  UMovieGraphVariable *local_res20;
  TObjectPtr<UMovieGraphVariable>_u_0 local_38;
  TObjectPtr<UMovieGraphVariable>_u_0 local_30;
  
  local_res20 = (UMovieGraphVariable *)0x0;
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
  pUVar4 = local_res20;
  uVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 != (UMovieGraphVariable *)0x0) && (-1 < (int)local_res10[0])) &&
     ((int)local_res10[0] <= *(int *)(param_1 + 2))) {
    this = &param_1[1].field_0x20;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    plVar2 = *(longlong **)this;
    plVar9 = plVar2;
    if (plVar2 != plVar2 + *(int *)(param_1 + 2)) {
      while ((UMovieGraphVariable *)*plVar9 != pUVar4) {
        plVar9 = plVar9 + 1;
        if (plVar9 == plVar2 + *(int *)(param_1 + 2)) {
          return;
        }
      }
      uVar8 = (uint)((longlong)plVar9 - (longlong)plVar2 >> 3);
      if ((uVar8 != uVar10) && (uVar8 != 0xffffffff)) {
        uVar11 = 0;
        if ((int)uVar8 < *(int *)(param_1 + 2)) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar8 * 8);
        iVar6 = *(int *)(param_1 + 2) + ~uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)this,*(int *)(param_1 + 2),(int *)&param_1[2].field_0x4)
        ;
        if ((int)uVar10 < (int)uVar8) {
          local_38.DebugPtr = pUVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          pTVar7 = &local_38;
        }
        else {
          local_30.DebugPtr = pUVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          uVar10 = uVar10 - 1;
          pTVar7 = &local_30;
        }
        TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>::Insert
                  ((TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_> *)this,
                   (TObjectPtr<UMovieGraphVariable> *)&pTVar7->ObjectPtr,uVar10);
      }
    }
  }
  return;
}

// execRemoveAllInboundEdges @ 14dc96340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execRemoveAllInboundEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  FString local_38;
  
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  lVar4 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == 0) {
    ::FString::PrintfImpl(&local_38,L"%hs: Invalid Edge Nodes");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Error,(FName)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  puVar7 = *(undefined8 **)(local_res18[0] + 0x58);
  iVar2 = *(int *)(local_res18[0] + 0x60);
  bVar8 = 0;
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x60) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar7 == puVar1) break;
    bVar5 = UMovieGraphPin::BreakAllEdges((UMovieGraphPin *)*puVar7);
    bVar8 = bVar8 | bVar5;
    puVar7 = puVar7 + 1;
  }
  *(byte *)param_3 = bVar8;
  return;
}

// execRemoveAllOutboundEdges @ 14dc96470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execRemoveAllOutboundEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  FString local_38;
  
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  lVar4 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == 0) {
    ::FString::PrintfImpl(&local_38,L"%hs: Invalid Edge Nodes");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Error,(FName)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  puVar7 = *(undefined8 **)(local_res18[0] + 0x68);
  iVar2 = *(int *)(local_res18[0] + 0x70);
  bVar8 = 0;
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x70) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar7 == puVar1) break;
    bVar5 = UMovieGraphPin::BreakAllEdges((UMovieGraphPin *)*puVar7);
    bVar8 = bVar8 | bVar5;
    puVar7 = puVar7 + 1;
  }
  *(byte *)param_3 = bVar8;
  return;
}

// execRemoveInboundEdges @ 14dc965a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execRemoveInboundEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UMovieGraphPin *this;
  ForAnyElementType FVar3;
  FName *pFVar4;
  FName local_res10;
  UMovieGraphNode *local_res18;
  FString local_18;
  
  local_res18 = (UMovieGraphNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%hs: Invalid Edge Nodes");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  bVar2 = false;
  this = UMovieGraphNode::GetInputPin(local_res18,pFVar4,BuiltInOrDynamic);
  if (this != (UMovieGraphPin *)0x0) {
    bVar2 = UMovieGraphPin::BreakAllEdges(this);
  }
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveLabeledEdge @ 14dc966f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execRemoveLabeledEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphNode *this;
  UMovieGraphNode *pUVar2;
  bool bVar3;
  UMovieGraphPin *pUVar4;
  UMovieGraphPin *this_00;
  ForAnyElementType FVar5;
  FName *this_01;
  FName *this_02;
  FName local_res10;
  FName local_res18;
  UMovieGraphNode *local_res20;
  UMovieGraphNode *local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_78 = (UMovieGraphNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UMovieGraphNode *)0x0;
  this_02 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this_02 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_78;
  this = local_res20;
  this_01 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this_01 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_78 == (UMovieGraphNode *)0x0) || (local_res20 == (UMovieGraphNode *)0x0)) {
    ::FString::PrintfImpl(&local_58,L"%hs: Invalid Edge Nodes");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
  }
  else {
    pUVar4 = UMovieGraphNode::GetOutputPin(local_78,this_02);
    if (pUVar4 == (UMovieGraphPin *)0x0) {
      ::FName::ToString(this_02,&local_48);
      local_70 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_70,&local_58);
      ::FString::PrintfImpl(&local_68,L"%hs: FromNode: %s does not have a pin with the label: %s");
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar5.Data = local_68.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
    else {
      this_00 = UMovieGraphNode::GetInputPin(this,this_01,BuiltInOrDynamic);
      if (this_00 != (UMovieGraphPin *)0x0) {
        bVar3 = UMovieGraphPin::BreakEdgeTo(this_00,pUVar4);
        *(bool *)param_3 = bVar3;
        return;
      }
      ::FName::ToString(this_01,&local_48);
      local_70 = (FName)this->_padding_;
      ::FName::ToString(&local_70,&local_68);
      ::FString::PrintfImpl(&local_58,L"%hs: ToNode: %s does not have a pin with the label: %s");
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        FVar5.Data = local_68.Data.AllocatorInstance.Data;
      }
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (FVar5.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar5.Data);
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveNode @ 14dc96a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieGraphConfig::execRemoveNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  UObject *pUVar4;
  ForAnyElementType FVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res10 [8];
  UObject *local_res18 [2];
  FString local_38;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar4 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == (UObject *)0x0) {
    ::FString::PrintfImpl
              (&local_38,
               L"%hs: Could not remove invalid node. Is it from a plugin that\'s not currently loaded?"
              );
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Error,(FName)0x0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  puVar8 = *(undefined8 **)&local_res18[0][2].field_0x8;
  iVar6 = *(int *)&local_res18[0][2].field_0x10;
  puVar1 = puVar8 + iVar6;
  while( true ) {
    if (*(int *)&pUVar4[2].field_0x10 != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar8 == puVar1) break;
    UMovieGraphPin::BreakAllEdges((UMovieGraphPin *)*puVar8);
    puVar8 = puVar8 + 1;
  }
  puVar8 = *(undefined8 **)&pUVar4[2].field_0x18;
  iVar6 = *(int *)&pUVar4[2].field_0x20;
  puVar1 = puVar8 + iVar6;
  while( true ) {
    if (*(int *)&pUVar4[2].field_0x20 != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar8 == puVar1) break;
    UMovieGraphPin::BreakAllEdges((UMovieGraphPin *)*puVar8);
    puVar8 = puVar8 + 1;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  plVar3 = *(longlong **)(param_1 + 1);
  plVar7 = plVar3;
  do {
    if (plVar7 == plVar3 + *(int *)&param_1[1].field_0x8) {
LAB_14dc96b8f:
      *(undefined1 *)param_3 = 0;
      return;
    }
    if ((UObject *)*plVar7 == pUVar4) {
      iVar6 = (int)((longlong)plVar7 - (longlong)plVar3 >> 3);
      if (iVar6 != -1) {
        memmove(plVar3 + iVar6,plVar3 + iVar6 + 1,
                (longlong)((*(int *)&param_1[1].field_0x8 - iVar6) + -1) << 3);
        *(int *)&param_1[1].field_0x8 = *(int *)&param_1[1].field_0x8 + -1;
        *(undefined1 *)param_3 = 1;
        return;
      }
      goto LAB_14dc96b8f;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}

// execRemoveNodes @ 14dc96bf0

void __cdecl UMovieGraphConfig::execRemoveNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  void *_Src;
  bool bVar3;
  ForAnyElementType FVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  _Src = local_38;
  local_48.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_30;
  local_40 = (int)local_30;
  if ((int)local_30 == 0) {
    local_3c = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_30,0,&local_48,(int)local_30,&local_3c);
    memcpy(local_48.Data,_Src,lVar8 << 3);
    iVar6 = local_40;
  }
  bVar5 = 0;
  pFVar1 = local_48.Data + (longlong)iVar6 * 8;
  FVar4.Data = local_48.Data;
  iVar7 = iVar6;
  while( true ) {
    if (iVar7 != iVar6) {
      `TCheckedPointerIterator<UMovieGraphNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    bVar3 = RemoveNode((UMovieGraphConfig *)param_1,*(UMovieGraphNode **)FVar4.Data);
    bVar5 = bVar5 | bVar3;
    FVar4.Data = FVar4.Data + 8;
    iVar7 = local_40;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  *(byte *)param_3 = bVar5;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execRemoveOutboundEdges @ 14dc96d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execRemoveOutboundEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UMovieGraphPin *this;
  ForAnyElementType FVar3;
  FName *pFVar4;
  FName local_res10;
  UMovieGraphNode *local_res18;
  FString local_18;
  
  local_res18 = (UMovieGraphNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar4 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieGraphNode *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%hs: Invalid Edge Nodes");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  bVar2 = false;
  this = UMovieGraphNode::GetOutputPin(local_res18,pFVar4);
  if (this != (UMovieGraphPin *)0x0) {
    bVar2 = UMovieGraphPin::BreakAllEdges(this);
  }
  *(bool *)param_3 = bVar2;
  return;
}

// execUpdateGlobalVariableValues @ 14dc97ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphConfig::execUpdateGlobalVariableValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphPipeline *local_res10;
  
  local_res10 = (UMovieGraphPipeline *)0x0;
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
  UpdateGlobalVariableValues((UMovieGraphConfig *)param_1,local_res10);
  return;
}

// operator() @ 15058b6c0

bool __thiscall
`UMovieGraphConfig::CopyOverriddenProperties'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4571739335061145248>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4571739335061145248>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058b700

bool __thiscall
`UMovieGraphConfig::CreateFlattenedGraph_Recursive'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4571739335061145407>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4571739335061145407>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

