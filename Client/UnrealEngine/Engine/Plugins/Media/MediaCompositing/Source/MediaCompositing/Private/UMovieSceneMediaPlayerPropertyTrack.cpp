// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 10

// StaticClass @ 14ea62050

UClass * __cdecl UMovieSceneMediaPlayerPropertyTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaPlayerPropertyTrack",
               &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaPlayerPropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertyTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton;
}

// UMovieSceneMediaPlayerPropertyTrack @ 14ea67910

UMovieSceneMediaPlayerPropertyTrack * __thiscall
UMovieSceneMediaPlayerPropertyTrack::UMovieSceneMediaPlayerPropertyTrack
          (UMovieSceneMediaPlayerPropertyTrack *this,FVTableHelper *param_1)

{
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneMediaPlayerPropertyTrack__6B_;
  return this;
}

// UMovieSceneMediaPlayerPropertyTrack @ 14ea67950

UMovieSceneMediaPlayerPropertyTrack * __thiscall
UMovieSceneMediaPlayerPropertyTrack::UMovieSceneMediaPlayerPropertyTrack
          (UMovieSceneMediaPlayerPropertyTrack *this,FObjectInitializer *param_1)

{
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 & 0xfffffffc;
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0xc;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7UMovieSceneMediaPlayerPropertyTrack__6B_;
  return this;
}

// ~UMovieSceneMediaPlayerPropertyTrack @ 14ea68160

void __thiscall
UMovieSceneMediaPlayerPropertyTrack::~UMovieSceneMediaPlayerPropertyTrack
          (UMovieSceneMediaPlayerPropertyTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  return;
}

// CreateNewSection @ 14ea69db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneMediaPlayerPropertyTrack::CreateNewSection(UMovieSceneMediaPlayerPropertyTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneMediaPlayerPropertySection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// CreateTemplateForSection @ 14ea69ed0

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneMediaPlayerPropertyTrack::CreateTemplateForSection
          (UMovieSceneMediaPlayerPropertyTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FMovieSceneEvalTemplatePtr *pFVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FName local_res18;
  FMovieScenePropertySectionTemplate local_a8;
  UObject *local_70;
  int local_68;
  undefined1 local_64;
  FString local_60;
  uchar local_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  int iStack_4c;
  uchar uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  FString local_40;
  FString local_30;
  FString local_20;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar6 = GetTypeName<UMovieSceneMediaPlayerPropertySection_const_>(&local_40);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar5 = UMovieSceneMediaPlayerPropertySection::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar5->_padding_)) {
    local_res18.ComparisonIndex.Value = *(uint *)&this[-1].field_0x130;
    local_res18.Number = *(uint *)&this[-1].field_0x134;
    pFVar6 = ::FName::ToString(&local_res18,&local_60);
    FVar2.ComparisonIndex.Value = *(uint *)&this[-1].field_0x128;
    FVar2.Number = *(uint *)&this[-1].field_0x12c;
    FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(&local_a8,FVar2,pFVar6);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    local_a8._padding_ = (longlong)&___7FMovieSceneMediaPlayerPropertySectionTemplate__6B_;
    local_70 = (UObject *)0x0;
    local_68 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)param_1[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1[1]._padding_);
    }
    local_70 = (UObject *)param_1[1]._padding_;
    local_64 = (undefined1)param_1[1]._padding_;
    if ((param_1->SectionRange).Value.LowerBound.Type.Value != '\x02') {
      local_50 = (param_1->SectionRange).Value.LowerBound.Type.Value;
      uStack_4f = (param_1->SectionRange).Value.LowerBound.field_0x1;
      uStack_4e = (param_1->SectionRange).Value.LowerBound.field_0x2;
      uStack_4d = (param_1->SectionRange).Value.LowerBound.field_0x3;
      iStack_4c = (param_1->SectionRange).Value.LowerBound.Value.Value;
      uStack_48 = (param_1->SectionRange).Value.UpperBound.Type.Value;
      uStack_47 = (param_1->SectionRange).Value.UpperBound.field_0x1;
      uStack_46 = (param_1->SectionRange).Value.UpperBound.field_0x2;
      uStack_45 = (param_1->SectionRange).Value.UpperBound.field_0x3;
      uStack_44 = (undefined1)(param_1->SectionRange).Value.UpperBound.Value.Value;
      uStack_43 = *(undefined1 *)
                   ((longlong)&(param_1->SectionRange).Value.UpperBound.Value.Value + 1);
      uStack_42 = *(undefined1 *)
                   ((longlong)&(param_1->SectionRange).Value.UpperBound.Value.Value + 2);
      uStack_41 = *(undefined1 *)
                   ((longlong)&(param_1->SectionRange).Value.UpperBound.Value.Value + 3);
      if (local_50 == '\x02') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
          return pFVar7;
        }
      }
      local_68 = iStack_4c;
    }
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 3;
    pFVar7 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar7 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
              ((FMovieScenePropertySectionTemplate *)pFVar7,&local_a8);
    *(undefined ***)pFVar7 = &___7FMovieSceneMediaPlayerPropertySectionTemplate__6B_;
    *(UObject **)&pFVar7->field_0x38 = local_70;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_70);
    }
    *(int *)&pFVar7->field_0x40 = local_68;
    pFVar7->field_0x44 = local_64;
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar7 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar7 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar8 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if (pFVar7 != pFVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate(&local_a8);
    return __return_storage_ptr__;
  }
  pFVar6 = GetTypeName<UMovieSceneMediaPlayerPropertySection_const_>(&local_30);
  pwVar10 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_20,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar9);
}

// GetPrivateStaticClass @ 14ea6c8e0

UClass * __cdecl UMovieSceneMediaPlayerPropertyTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaPlayerPropertyTrack",
               &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaPlayerPropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertyTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack @ 14ea70360

void __cdecl
UMovieSceneMediaPlayerPropertyTrack::StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack(void)

{
  return;
}

// SupportsType @ 14ea70480

bool __thiscall
UMovieSceneMediaPlayerPropertyTrack::SupportsType
          (UMovieSceneMediaPlayerPropertyTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14ea704ca;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14ea704ca:
  pUVar5 = UMovieSceneMediaPlayerPropertySection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 14ea71040

UObject * __thiscall
UMovieSceneMediaPlayerPropertyTrack::_getUObject(UMovieSceneMediaPlayerPropertyTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

