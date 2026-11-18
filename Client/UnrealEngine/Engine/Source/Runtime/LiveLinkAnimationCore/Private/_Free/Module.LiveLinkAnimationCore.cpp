// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 49

// `dynamic_initializer_for_'ModuleRegistrantLiveLinkAnimationCore'' @ 1413c2c60

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveLinkAnimationCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveLinkAnimationCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveLinkAnimationCore",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ULiveLinkRemapAsset_GetRemappedBoneName'' @ 1413c2cb0

void __cdecl _dynamic_initializer_for__NAME_ULiveLinkRemapAsset_GetRemappedBoneName__(void)

{
  FName::FName(&NAME_ULiveLinkRemapAsset_GetRemappedBoneName,L"GetRemappedBoneName");
  return;
}

// `dynamic_initializer_for_'NAME_ULiveLinkRemapAsset_GetRemappedCurveName'' @ 1413c2cd0

void __cdecl _dynamic_initializer_for__NAME_ULiveLinkRemapAsset_GetRemappedCurveName__(void)

{
  FName::FName(&NAME_ULiveLinkRemapAsset_GetRemappedCurveName,L"GetRemappedCurveName");
  return;
}

// `dynamic_initializer_for_'NAME_ULiveLinkRemapAsset_RemapCurveElements'' @ 1413c2cf0

void __cdecl _dynamic_initializer_for__NAME_ULiveLinkRemapAsset_RemapCurveElements__(void)

{
  FName::FName(&NAME_ULiveLinkRemapAsset_RemapCurveElements,L"RemapCurveElements");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h__Script_LiveLinkAnimationCore_2854148249'' @ 1413c2d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h__Script_LiveLinkAnimationCore_2854148249__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkAnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h__Script_LiveLinkAnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h__Script_LiveLinkAnimationCore_3580845642'' @ 1413c2d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h__Script_LiveLinkAnimationCore_3580845642__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkAnimationCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h__Script_LiveLinkAnimationCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h__Script_LiveLinkAnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h__Script_LiveLinkAnimationCore_501168623'' @ 1413c2da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h__Script_LiveLinkAnimationCore_501168623__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkAnimationCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h__Script_LiveLinkAnimationCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h__Script_LiveLinkAnimationCore_2856850584'' @ 1413c2de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h__Script_LiveLinkAnimationCore_2856850584__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkAnimationCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRetargetAsset_h__Script_LiveLinkAnimationCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveLinkAnimationCore'' @ 1413c2e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveLinkAnimationCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xfa97756c;
  local_res8[0].DeclarationsHash = 0xa992ef5b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveLinkAnimationCore,L"/Script/LiveLinkAnimationCore",
             &Z_Registration_Info_UPackage__Script_LiveLinkAnimationCore,local_res8);
  return;
}

// Z_Construct_UPackage__Script_LiveLinkAnimationCore @ 14cfc1400

UPackage * __cdecl Z_Construct_UPackage__Script_LiveLinkAnimationCore(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveLinkAnimationCore.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveLinkAnimationCore.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LiveLinkAnimationCore.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister @ 14cfc1440

UClass * __cdecl Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkRetargetAsset",
               &Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton,
               ULiveLinkRetargetAsset::StaticRegisterNativesULiveLinkRetargetAsset,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkRetargetAsset>,
               InternalVTableHelperCtorCaller<ULiveLinkRetargetAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose @ 14cfc15a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bDoLiveLinkEvaluation_SetBit @ 14cfc1620

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_bDoLiveLinkEvaluation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14cfc1630

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_LiveLinkPose,&UE::CoreUObject::Private::Construct<FAnimNode_LiveLinkPose>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_LiveLinkPose>,&UE::CoreUObject::Private::Destruct<FAnimNode_LiveLinkPose>,&UE::CoreUObject::Private::SerializeArchive<FAnimNode_LiveLinkPose>,&UE::CoreUObject::Private::Copy<FAnimNode_LiveLinkPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfc1810

void * __thiscall
FLiveLinkInstanceProxy::_scalar_deleting_destructor_(FLiveLinkInstanceProxy *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PoseNode).CachedLiveLinkData.SharedReferenceCount.ReferenceController);
  (this->PoseNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  FAnimInstanceProxy::~FAnimInstanceProxy((FAnimInstanceProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x870);
  }
  return this;
}

// Z_Construct_UClass_ULiveLinkInstance @ 14cfc1930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkInstance(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton;
}

// NewStructOps @ 14cfc1970

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x870;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkInstanceProxy,&UE::CoreUObject::Private::Construct<FLiveLinkInstanceProxy>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkInstanceProxy>,&UE::CoreUObject::Private::Destruct<FLiveLinkInstanceProxy>,&UE::CoreUObject::Private::Copy<FLiveLinkInstanceProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDoEnable_SetBit @ 14cfc19b0

void __cdecl
Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::NewProp_bDoEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation @ 14cfc19c0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset @ 14cfc1a00

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkInstance_SetSubject @ 14cfc1a40

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkInstance_SetSubject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULiveLinkRemapAsset @ 14cfc1a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkRemapAsset(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkRemapAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkRemapAsset.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkRetargetAsset @ 14cfc1ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkRetargetAsset(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkRetargetAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkRetargetAsset.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkRetargetAsset.OuterSingleton;
}

// Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName @ 14cfc1b00

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName @ 14cfc1b80

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements @ 14cfc1bc0

UFunction * __cdecl Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams);
  }
  return ReturnFunction;
}

// BuildLinearUnfiltered<`ULiveLinkRetargetAsset::BuildCurveData'::__l5::<lambda_1>,`ULiveLinkRetargetAsset::BuildCurveData'::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 14cfc1e40

void __cdecl
UE::Anim::FCurveUtils::
BuildLinearUnfiltered<_ULiveLinkRetargetAsset::BuildCurveData_::__l5::<lambda_1>,_ULiveLinkRetargetAsset::BuildCurveData_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong local_res8;
  
  iVar6 = *(int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar6 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,
               (int *)((longlong)&param_1->_padding_ + 4));
  }
  piVar8 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar8 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar8);
  }
  uVar10 = 0;
  if (0 < param_2) {
    lVar11 = 0;
    local_res8 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar10 < (int)(param_4.InFrameData)->_padding_) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = _finite((double)*(float *)(lVar11 + (param_4.InFrameData)->_padding_));
      if (iVar6 == 0) {
        uVar12 = 0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar10 < (int)(param_4.InFrameData)->_padding_) {
          uVar5 = uVar9;
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
        uVar12 = *(undefined4 *)(lVar11 + (param_4.InFrameData)->_padding_);
      }
      uVar5 = 0;
      if ((int)uVar10 < (int)(param_3.InSkeletonData)->_padding_) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined8 *)(local_res8 + (param_3.InSkeletonData)->_padding_);
      iVar6 = (int)param_1->_padding_;
      if (iVar6 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                          (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                           (int *)((longlong)&param_1->_padding_ + 4));
      }
      local_res8 = local_res8 + 8;
      *(int *)&param_1->_padding_ = iVar6 + 1;
      uVar10 = uVar10 + 1;
      lVar7 = (longlong)iVar6;
      lVar2 = param_1->_padding_;
      lVar11 = lVar11 + 4;
      *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = uVar12;
      *(undefined8 *)(lVar2 + lVar7 * 0x10) = uVar1;
      *(undefined1 *)(lVar2 + 0xc + lVar7 * 0x10) = 0;
    } while ((int)uVar10 < param_2);
  }
  return;
}

// InternalConstructor<ULiveLinkInstance> @ 14cfc2240

void __cdecl InternalConstructor<ULiveLinkInstance>(FObjectInitializer *param_1)

{
  UAnimInstance *this;
  
  this = (UAnimInstance *)param_1->Obj;
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7ULiveLinkInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkRemapAsset> @ 14cfc2280

void __cdecl InternalConstructor<ULiveLinkRemapAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkRemapAsset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkRetargetAsset> @ 14cfc2320

void __cdecl InternalConstructor<ULiveLinkRetargetAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkRetargetAsset__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULiveLinkInstance> @ 14cfc2350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkInstance::GetPrivateStaticClass();
  this = (UAnimInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7ULiveLinkInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkRemapAsset> @ 14cfc2410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkRemapAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkRemapAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkRemapAsset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkRetargetAsset> @ 14cfc2530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkRetargetAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkRetargetAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkRetargetAsset__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<ULiveLinkRetargetAsset> @ 14cfc25e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULiveLinkRetargetAsset * __cdecl
NewObject<ULiveLinkRetargetAsset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = ULiveLinkRetargetAsset::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (ULiveLinkRetargetAsset *)pUVar2;
}

// `scalar_deleting_destructor' @ 14cfc2c10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkSubjectFrameData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkSubjectFrameData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc2c50

void * __thiscall
FAnimNode_LiveLinkPose::_scalar_deleting_destructor_(FAnimNode_LiveLinkPose *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedLiveLinkData).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc2ca0

void * __thiscall
ULiveLinkInstance::_scalar_deleting_destructor_(ULiveLinkInstance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc2d00

void * __thiscall
ULiveLinkRemapAsset::_scalar_deleting_destructor_(ULiveLinkRemapAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkRemapAsset__6B_;
  *(undefined4 *)&(this->CurveNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveNameMap);
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameMap);
  this->_padding_ = (longlong)&___7ULiveLinkRetargetAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfc2dc0

void * __thiscall
ULiveLinkRetargetAsset::_scalar_deleting_destructor_(ULiveLinkRetargetAsset *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRetargetAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_LiveLinkPose @ 14cfc4970

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_LiveLinkPose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationCore_init @ 14cfc4980

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkInstance @ 14cfc4990

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkRemapAsset @ 14cfc49a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkRemapAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAsset @ 14cfc49b0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAsset(void)

{
  return;
}

// MakeCurveMapFromFrame @ 14cfc53c0

void __cdecl
MakeCurveMapFromFrame
          (FCompactPose *param_1,FLiveLinkBaseStaticData *param_2,FLiveLinkBaseFrameData *param_3,
          TArray<FName,TMemStackAllocator<0>_> *param_4,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_5)

{
  float fVar1;
  code *pcVar2;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FName *local_res10;
  
  this = param_5;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)param_5);
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)this,(param_3->PropertyValues).ArrayNum);
  iVar5 = (param_2->PropertyNames).ArrayNum;
  if ((iVar5 == (param_3->PropertyValues).ArrayNum) && (uVar6 = 0, 0 < iVar5)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (param_3->PropertyValues).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      fVar1 = *(float *)((param_3->PropertyValues).AllocatorInstance.Data + lVar7);
      iVar5 = _finite((double)fVar1);
      if (iVar5 != 0) {
        uVar4 = 0;
        if ((int)uVar6 < param_4->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_res10 = (param_4->AllocatorInstance).Data + (int)uVar6;
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        Emplace<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)this,(TKeyInitializer<FName_const_&> *)&param_5,(bool *)&local_res10);
        *(float *)(*(longlong *)this + 8 + (longlong)(int)param_5 * 0x14) = fVar1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < (param_2->PropertyNames).ArrayNum);
  }
  return;
}

// Z_Construct_UClass_ULiveLinkInstance_NoRegister @ 14cfc5af0

UClass * __cdecl Z_Construct_UClass_ULiveLinkInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkInstance",
               &Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton,
               ULiveLinkInstance::StaticRegisterNativesULiveLinkInstance,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkInstance>,
               InternalVTableHelperCtorCaller<ULiveLinkInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkInstance.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister @ 14cfc5bb0

UClass * __cdecl Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkRemapAsset",
               &Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton,
               ULiveLinkRemapAsset::StaticRegisterNativesULiveLinkRemapAsset,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkRemapAsset>,
               InternalVTableHelperCtorCaller<ULiveLinkRemapAsset>,local_res8,
               ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRemapAsset.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkInstanceProxy @ 14cfc5c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkInstanceProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_LiveLinkAnimationCore @ 14cfc6310

void __cdecl IMPLEMENT_MODULE_LiveLinkAnimationCore(void)

{
  return;
}

