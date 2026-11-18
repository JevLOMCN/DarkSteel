// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 9

// StaticClass @ 14ac62fb0

UClass * __cdecl UTemplateSequenceTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceTrack",
               &Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton,
               StaticRegisterNativesUTemplateSequenceTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTemplateSequenceTrack>,
               InternalVTableHelperCtorCaller<UTemplateSequenceTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton;
}

// UTemplateSequenceTrack @ 14ac70eb0

UTemplateSequenceTrack * __thiscall
UTemplateSequenceTrack::UTemplateSequenceTrack(UTemplateSequenceTrack *this,FVTableHelper *param_1)

{
  UMovieSceneSubTrack::UMovieSceneSubTrack((UMovieSceneSubTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UTemplateSequenceTrack @ 14ac70ef0

UTemplateSequenceTrack * __thiscall
UTemplateSequenceTrack::UTemplateSequenceTrack
          (UTemplateSequenceTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneSubTrack::UMovieSceneSubTrack((UMovieSceneSubTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
  return this;
}

// ~UTemplateSequenceTrack @ 14ac71880

void __thiscall UTemplateSequenceTrack::~UTemplateSequenceTrack(UTemplateSequenceTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieSceneSubTrack::~UMovieSceneSubTrack((UMovieSceneSubTrack *)this);
  return;
}

// AddNewTemplateSequenceSection @ 14ac73050

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UTemplateSequenceTrack::AddNewTemplateSequenceSection
          (UTemplateSequenceTrack *this,FFrameNumber param_1,UTemplateSequence *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FFrameRate FVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  UMovieSceneSubSection *this_00;
  UClass *pUVar9;
  longlong lVar10;
  UMovieSceneSection *pUVar11;
  char cVar12;
  UMovieSceneSubSection *pUVar13;
  UMovieSceneSubSection *pUVar14;
  undefined4 local_68 [2];
  undefined4 local_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  this_00 = (UMovieSceneSubSection *)(**(code **)(*(longlong *)this + 0x358))();
  pUVar14 = (UMovieSceneSubSection *)0x0;
  if (this_00 != (UMovieSceneSubSection *)0x0) {
    pUVar9 = UTemplateSequenceSection::StaticClass();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar9->_padding_)) goto LAB_14ac730ab;
  }
  this_00 = pUVar14;
LAB_14ac730ab:
  pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  lVar10 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  local_60 = *(undefined4 *)(lVar10 + 0x128);
  iVar3 = *(int *)(lVar10 + 300);
  uStack_58 = *(undefined4 *)(lVar10 + 0x130);
  iVar4 = *(int *)(lVar10 + 0x134);
  cVar12 = (char)uStack_58;
  iStack_5c = iVar3;
  iStack_54 = iVar4;
  if (cVar12 == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InUpperBound.IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                       ,0x44,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar11 = (UMovieSceneSection *)(*pcVar2)();
      return pUVar11;
    }
  }
  pUVar13 = pUVar14;
  if (cVar12 == '\x01') {
    pUVar13 = (UMovieSceneSubSection *)&DAT_00000004;
  }
  lVar6 = pUVar13[0x275f28].Rotation[0]._padding_;
  if (cVar12 == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar11 = (UMovieSceneSection *)(*pcVar2)();
      return pUVar11;
    }
  }
  cVar12 = (char)local_60;
  if (cVar12 == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InLowerBound.IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                       ,0x2c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar11 = (UMovieSceneSection *)(*pcVar2)();
      return pUVar11;
    }
  }
  if (cVar12 == '\0') {
    pUVar14 = (UMovieSceneSubSection *)&DAT_00000004;
  }
  iVar1 = *(int *)&pUVar14[0x275f28].Translation[2].KeyHandles.field_0x68;
  if (cVar12 == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar11 = (UMovieSceneSection *)(*pcVar2)();
      return pUVar11;
    }
  }
  FVar5.Denominator = 0;
  FVar5.Numerator = ((iVar4 + (int)lVar6) - iVar3) - iVar1;
  ConvertFrameTime((FFrameTime)local_68,FVar5,*(FFrameRate *)(lVar10 + 0x138));
  pcVar2 = *(code **)(this_00->_padding_ + 0x328);
  uVar8 = (**(code **)(*(longlong *)this + 800))(this);
  (*pcVar2)(this_00,&this->field_0x118,param_1.Value,local_68[0],uVar8);
  UMovieSceneSubSection::SetSequence(this_00,(UMovieSceneSequence *)param_2);
  (*(code *)**(undefined8 **)&this->field_0x70)(&this->field_0x70,this_00);
  return (UMovieSceneSection *)this_00;
}

// CreateNewSection @ 14ac744f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UTemplateSequenceTrack::CreateNewSection(UTemplateSequenceTrack *this)

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
  pUVar1 = UTemplateSequenceSection::StaticClass();
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

// GetPrivateStaticClass @ 14ac782b0

UClass * __cdecl UTemplateSequenceTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceTrack",
               &Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton,
               StaticRegisterNativesUTemplateSequenceTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTemplateSequenceTrack>,
               InternalVTableHelperCtorCaller<UTemplateSequenceTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton;
}

// StaticRegisterNativesUTemplateSequenceTrack @ 14ac805d0

void __cdecl UTemplateSequenceTrack::StaticRegisterNativesUTemplateSequenceTrack(void)

{
  return;
}

// SupportsType @ 14ac80790

bool __thiscall
UTemplateSequenceTrack::SupportsType
          (UTemplateSequenceTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14ac807da;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14ac807da:
  pUVar5 = UTemplateSequenceSection::StaticClass();
  return pUVar4 == pUVar5;
}

